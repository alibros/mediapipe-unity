# MediaPipe Unity Plugin
This is a Unity (2019.4.18f1) Plugin to use MediaPipe.

## Platforms
- [x] Linux Desktop (tested on ArchLinux)
- [x] Android
- [x] iOS
- [x] macOS (CPU only)
- [x] Windows 10 (CPU only, experimental)


## Example Graphs
|                       | Android | iOS | Linux (GPU) | Linux (CPU) | macOS | Windows
:---------------------: | :-----: | :-: | :---------: | :---------: | :---: | :------:
Face Detection          | ✅       | ✅   | ✅           | ✅           | ✅     | ✅
Face Mesh               | ✅       | ✅   | ✅           | ✅           | ✅     | ✅
Iris                    | ✅       | ✅   | ✅           | ✅           | ✅     | ✅
Hands                   | ✅       | ✅   | ✅           | ✅           | ✅     | ✅
Pose                    | ✅       | ✅   | ✅           | ✅           | ✅     | ✅
Holistic (with iris)    | ✅       | ✅   | ✅           | ✅           | ✅     | ✅
Hair Segmentation       | ✅       |     | ✅           |             |       |
Object Detection        | ✅       | ✅   | ✅           | ✅           | ✅     | ✅
Box Tracking            | ✅       | ✅   | ✅           | ✅           | ✅     | 🔺*1
Instant Motion Tracking | ✅       | 🔺   | ✅           |             |       |
Objectron               |         |     | ✅           |             |       |
KNIFT                   |         |     |             |             |       |

*1: crashes sometimes when the graph exits.

## Prerequisites
### OpenCV
#### Linux
By default, it is assumed that OpenCV 3 is installed under `/usr` (e.g. `/usr/lib/libopencv_core.so`).
If your version or path is different, please edit [C/third_party/opencv_linux.BUILD](https://github.com/homuler/MediaPipeUnityPlugin/blob/master/C/third_party/opencv_linux.BUILD) and [C/WORKSPACE](https://github.com/homuler/MediaPipeUnityPlugin/blob/master/C/WORKSPACE).

For example, if OpenCV is installed under `/opt/opencv3`, then your `WORKSPACE` looks like this.
```starlark
new_local_repository(
    name = "linux_opencv",
    build_file = "@//third_party:opencv_linux.BUILD",
    path = "/opt/opencv3",
)
```

If you use Ubuntu, probably OpenCV's shared libraries is installed under `/usr/lib/x86_64-linux-gnu/`.
In this case, your `opencv_linux.BUILD` would be like this.
```starlark
cc_library(
    name = "opencv",
    srcs = glob(
        [
            "lib/x86_64-linux-gnu/libopencv_core.so",
            "lib/x86_64-linux-gnu/libopencv_calib3d.so",
            "lib/x86_64-linux-gnu/libopencv_features2d.so",
            "lib/x86_64-linux-gnu/libopencv_highgui.so",
            "lib/x86_64-linux-gnu/libopencv_imgcodecs.so",
            "lib/x86_64-linux-gnu/libopencv_imgproc.so",
            "lib/x86_64-linux-gnu/libopencv_video.so",
            "lib/x86_64-linux-gnu/libopencv_videoio.so",
        ],
    ),
    ...
)
```

#### Windows
By default, it is assumed that OpenCV 3.4.10 is installed under `C:\opencv`.
If your version or path is different, please edit [C/third_party/opencv_windows.BUILD](https://github.com/homuler/MediaPipeUnityPlugin/blob/master/C/third_party/opencv_windows.BUILD) and [C/WORKSPACE](https://github.com/homuler/MediaPipeUnityPlugin/blob/master/C/WORKSPACE).

### NuGet CLI
This project uses protocol buffers to communicate with MediaPipe, and it is necessary to install [NuGet](https://docs.microsoft.com/en-us/nuget/reference/nuget-exe-cli-reference) to download `Google.Protobuf.dll`.

For example, if you use Linux and `yay`, you can install it with a below command.
```sh
yay -S nuget
```

## Installation
1. [Install MediaPipe](https://google.github.io/mediapipe/getting_started/install.html) and ensure that you can run Hello World! example.

1. Install numpy
    ```sh
    pip install numpy --user

    # or
    # pip3 install numpy --user
    ```

1. Clone the repository
    ```sh
    git clone https://github.com/homuler/MediaPipeUnityPlugin.git
    cd MediaPipeUnityPlugin
    ```

1. Set environment variables
    - Android (optional)
        ```sh
        export ANDROID_HOME=/path/to/SDK
        # ATTENTION!: Currently bazel does not support NDK r22, so please use NDK r21 instead.
        export ANDROID_NDK_HOME=/path/to/ndk/21.4.7075529
        ```

    - Windows
        ```bat
        set PYTHON_BIN_PATH=C:\path\to\python.exe
        ```

1. Run `build.py` with target platforms specified.
    ```sh
    # Required files (native libraries, model files, C# scripts) will be built and installed.

    # e.g. Desktop GPU only
    python build.py build --desktop gpu -v

    # e.g. Desktop CPU and Android
    # ATTENTION!:
    #   1. Currently bazel does not support NDK r22, so please use NDK r21 instead.
    #   2. Building for Android on Windows is not supported.
    export ANDROID_HOME=/path/to/SDK
    export ANDROID_NDK_HOME=/path/to/ndk/21.4.7075529

    python build.py build --desktop cpu --android arm64 -v

    # e.g. iOS
    python build.py build --ios arm64 -v

    # Run `python build.py build --help` to see other options.
    ```

1. Start Unity Editor

## Run example scenes
### UnityEditor
Select `MediaPipe/Examples/Scenes/DesktopDemo` and play.

### Desktop
If you'd like to run graphs on CPU, uncheck `Use GPU` from the inspector window.
![scene-director-use-gpu](https://user-images.githubusercontent.com/4690128/107133987-4f51b180-6931-11eb-8a75-4993a5c70cc1.png)

## Troubleshooting
### DllNotFoundException: mediapipe_c
[OpenCV's path](https://github.com/homuler/MediaPipeUnityPlugin#opencv) may not be configured properly.

If you're sure the path is correct, please check on **Load on startup** in the plugin inspector, click **Apply** button, and restart Unity Editor.
Some helpful logs will be output in the console.

### InternalException: INTERNAL: ; eglMakeCurrent() returned error 0x3000
If you encounter an error like below and you use OpenGL Core as the Unity's graphics APIs, please try Vulkan.

```txt
InternalException: INTERNAL: ; eglMakeCurrent() returned error 0x3000_mediapipe/mediapipe/gpu/gl_context_egl.cc:261)
```

### Debug MediaPipe
If you set an environment variable `GLOG_v` before loading native libraries (e.g. `libmediapipe_c.so`),
MediaPipe will output verbose logs to log files (e.g. `Editor.log`, `Player.log`).

```cs

void OnEnable() {
    // see https://github.com/google/glog#setting-flags
    System.Environment.SetEnvironmentVariable("GLOG_v", "2");
}
```

You can also setup Glog so that it writes logs to files.

```cs
using System.IO;

void OnEnable() {
    var logDir = Path.Combine(Application.persistentDataPath, "Logs");

    if (!Directory.Exists(logDir)) {
      Directory.CreateDirectory(logDir);
    }

    Glog.Initialize("MediaPipeUnityPlugin", logDir);
}

void OnDisable() {
    Glog.Shutdown();
}
```


## TODO
- [ ] Dockerize build environment
- [ ] Prepare API Documents
- [ ] Implement cross-platform APIs to send images to MediaPipe
- [ ] use CVPixelBuffer on iOS
- [ ] Box Tracking (on Windows)
- [ ] Objectron
- [ ] KNIFT

## LICENSE
MIT

Note that some files are distributed under other licenses.
- MediaPipe ([Apache Licence 2.0](https://github.com/google/mediapipe/blob/master/LICENSE))
