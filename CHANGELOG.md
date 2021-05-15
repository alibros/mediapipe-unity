# Changelog

All notable changes to this project will be documented in this file. See [standard-version](https://github.com/conventional-changelog/standard-version) for commit guidelines.

## [0.6.0](https://github.com/homuler/MediaPipeUnityPlugin/compare/v0.5.3...v0.6.0) (2021-05-15)


### Features

* read .binarypb ([3ca8642](https://github.com/homuler/MediaPipeUnityPlugin/commit/3ca8642ab57b7f067276da1c67ff8112b9f89c10))
* **sdk:** implement FaceGeometryPacket ([473c3a0](https://github.com/homuler/MediaPipeUnityPlugin/commit/473c3a0fa1de9f2ea0ab982936fa947d102f7ab4))


### Bug Fixes

* return type is wrong ([4ca0f5f](https://github.com/homuler/MediaPipeUnityPlugin/commit/4ca0f5f289b06e610c88cee744d1da50fb270356))

### [0.5.3](https://github.com/homuler/MediaPipeUnityPlugin/compare/v0.5.2...v0.5.3) (2021-04-30)


### Bug Fixes

* **docker:** zip command is not installed ([aa8e1bd](https://github.com/homuler/MediaPipeUnityPlugin/commit/aa8e1bd1fc97046c6fbb0ed21646d0e1eb3811d8))

### [0.5.2](https://github.com/homuler/MediaPipeUnityPlugin/compare/v0.5.1...v0.5.2) (2021-04-30)


### Bug Fixes

* copytree fails on Windows (Docker) ([fd0e83c](https://github.com/homuler/MediaPipeUnityPlugin/commit/fd0e83cdf561b22e09162363a5310bbbd0d04cd6))
* fail to build mediapipe_android.aar ([24fe5db](https://github.com/homuler/MediaPipeUnityPlugin/commit/24fe5dbfed6e5a9bc40821898542d3c6906ea11f))
* modify bsdtar command typo "s" ([#120](https://github.com/homuler/MediaPipeUnityPlugin/issues/120)) ([33c0bd3](https://github.com/homuler/MediaPipeUnityPlugin/commit/33c0bd375b623d47c918cdb4c7d22ad87253013b))
* nuget fails on Ubuntu or Debian ([e00e4ae](https://github.com/homuler/MediaPipeUnityPlugin/commit/e00e4ae8d35af780e5ff8fa38b09efbea433b473))
* rules_foreign_cc version must be 0.1.0 ([780d405](https://github.com/homuler/MediaPipeUnityPlugin/commit/780d405da003f472f2b8e14fdd9c71ef21c616f6))
* wildcard is not expanded ([dd99867](https://github.com/homuler/MediaPipeUnityPlugin/commit/dd9986746cb746e06cc7a4ec846f59eaa3cc3990))
* **example:** failed to compile when the target is Android ([92cad4b](https://github.com/homuler/MediaPipeUnityPlugin/commit/92cad4bbe9ba52514034c52ac5b5f0a99accab06))

### [0.5.1](https://github.com/homuler/MediaPipeUnityPlugin/compare/v0.5.0...v0.5.1) (2021-03-21)


### ⚠ BREAKING CHANGES

* place ResourceManager classes under SDK directory

### Features

* **example:** Objectron ([bd470eb](https://github.com/homuler/MediaPipeUnityPlugin/commit/bd470eb3a90af6e25e2aa95195458a662fb60965))


### Bug Fixes

* add a missing command ([de132bd](https://github.com/homuler/MediaPipeUnityPlugin/commit/de132bdf8fe5eed96fab1d5775a0dd93812a5399))
* build error ([fe2f97f](https://github.com/homuler/MediaPipeUnityPlugin/commit/fe2f97f1410a2189b89e93e13101c2e30508caab))
* build for iOS and Android ([7a815f9](https://github.com/homuler/MediaPipeUnityPlugin/commit/7a815f951ef552a924db76d1eaf6033155e13768))
* failed to apply a patch ([049ca2f](https://github.com/homuler/MediaPipeUnityPlugin/commit/049ca2fabe5b5c7e3d4f87cb5aa1b3bae8ea865e))
* graph starts before saving model files ([7f9f6b0](https://github.com/homuler/MediaPipeUnityPlugin/commit/7f9f6b02d43a6990f465f8f2a2b0e76676a5a546))


* place ResourceManager classes under SDK directory ([c67a456](https://github.com/homuler/MediaPipeUnityPlugin/commit/c67a456c1dde283dd165ad4e7650bb197b6e9720))

## [0.5.0](https://github.com/homuler/MediapipeUnityPlugin/compare/v0.4.3...v0.5.0) (2021-02-22)


### ⚠ BREAKING CHANGES

* pkg_model -> pkg_asset

### Features

* **sdk:** implement FloatArrayPacket ([9a0780c](https://github.com/homuler/MediapipeUnityPlugin/commit/9a0780c87c2d425a7c1f3678f95dd003308a7913))
* compile StickerBuffer ([0a4720b](https://github.com/homuler/MediapipeUnityPlugin/commit/0a4720b485f055f6502f73456607f5cda7210cf5))
* implement APIs to get model matrices ([fe35345](https://github.com/homuler/MediapipeUnityPlugin/commit/fe35345a5908f1579da39ceb9a5c7f583e64ea36))
* InstantMotionTracking ([ee7c909](https://github.com/homuler/MediapipeUnityPlugin/commit/ee7c90938d2b97414fa4269ff5321da3cf7f20f2))
* StringPacket can contain null bytes ([1d5240e](https://github.com/homuler/MediapipeUnityPlugin/commit/1d5240e4e7a868401c57376582b84586c1495923))


### Bug Fixes

* **example:** not to create redundunt instances ([56ee74f](https://github.com/homuler/MediapipeUnityPlugin/commit/56ee74f24446b8b598176fe68c9d42c4fa1a09da))
* **test:** thread hangs ([32f30f3](https://github.com/homuler/MediapipeUnityPlugin/commit/32f30f3622e71613803d55f1619f388ee782d005))
* not to flip input images horizontally when mediapipe outputs images ([28e429c](https://github.com/homuler/MediapipeUnityPlugin/commit/28e429c15d8db1e828afe7bc715e9c231f55a706))
* typo ([ee91e5b](https://github.com/homuler/MediapipeUnityPlugin/commit/ee91e5b8db7e8a9c9b923f2c17e24bec81fbfde4))


* pkg_model -> pkg_asset ([20083ff](https://github.com/homuler/MediapipeUnityPlugin/commit/20083ffdd8fcef89764f751a232e85531ae15bba))

### [0.4.3](https://github.com/homuler/MediapipeUnityPlugin/compare/v0.4.2...v0.4.3) (2021-02-07)


### Features

* Holistic with iris ([0bf2bdd](https://github.com/homuler/MediapipeUnityPlugin/commit/0bf2bddf9e98fcc02ccc7bc63f05536da05eb487))


### Bug Fixes

* **example:** request user permission before searching webcam devices ([9954a52](https://github.com/homuler/MediapipeUnityPlugin/commit/9954a5264e7d9bde3f80a915de28582f99b69056))
* add missing attributes ([683b88f](https://github.com/homuler/MediapipeUnityPlugin/commit/683b88f1906befc98c1e3ea30cfb2afd69c49cd1))
* **example:** stop disposing gpu_helper ([94deaba](https://github.com/homuler/MediapipeUnityPlugin/commit/94deaba0599cd8726711fcc37350d1fe1f66099c))
* **example:** Unity Editor hangs after exiting play mode ([6cc0ed1](https://github.com/homuler/MediapipeUnityPlugin/commit/6cc0ed15ee74447cf651b76f01cb9bbe6bfece4b))
* correct compilation conditions ([b787ee3](https://github.com/homuler/MediapipeUnityPlugin/commit/b787ee3f4131fd527ed6d5c6f10592ee00a83115))
* standalone executable does not shut down ([85c77aa](https://github.com/homuler/MediapipeUnityPlugin/commit/85c77aa079aa18233f422503e9b457a762233212))

### [0.4.2](https://github.com/homuler/MediapipeUnityPlugin/compare/v0.4.1...v0.4.2) (2021-01-30)


### Features

* **example:** Box Tracking ([c6d5560](https://github.com/homuler/MediapipeUnityPlugin/commit/c6d55602a1c8bdc91fdcb04d34f819a82fe2d6a6))
* render pose landmarks ([6a26384](https://github.com/homuler/MediapipeUnityPlugin/commit/6a263849aa80d31ee2ad54b53a17b75cc3cd6553))
* render pose roi and detection ([026b6c8](https://github.com/homuler/MediapipeUnityPlugin/commit/026b6c833a35165e471616e7f621d974778b246c))
* **example:** holistic on CPU, Android and iOS ([47ddbdd](https://github.com/homuler/MediapipeUnityPlugin/commit/47ddbddab0f0631fbb6ba465d3d29aa655edf60c))
* **sdk:** build for windows ([aab99a8](https://github.com/homuler/MediapipeUnityPlugin/commit/aab99a8d3374b7f06ed6af828484713a017450b2))


### Bug Fixes

* **example:** remove stale annotations ([61f2041](https://github.com/homuler/MediapipeUnityPlugin/commit/61f20419aac6c92caf34a1968def936505461acf))
* **example:** timestamp can be same as the previous one on Windows ([411fc68](https://github.com/homuler/MediapipeUnityPlugin/commit/411fc68e906f0fe88fd627312b958e9883109072))
* cannot make ios_arm64 ([43e0cba](https://github.com/homuler/MediapipeUnityPlugin/commit/43e0cba8c50d657622fabc09db1b96126fbeea5c))
* limit path length for Windows ([4838408](https://github.com/homuler/MediapipeUnityPlugin/commit/48384080bdaa469c2231eb38371bfbc780e42d43))
* made it possible to run editor while on iOS/Android platform target ([#37](https://github.com/homuler/MediapipeUnityPlugin/issues/37)) ([b7e3bb7](https://github.com/homuler/MediapipeUnityPlugin/commit/b7e3bb7d2e83213058c790bd32d801b92e6d4285))
* maybe required to preload ([6646d56](https://github.com/homuler/MediapipeUnityPlugin/commit/6646d565ce3d9dffa4974893d21e285531a738e8))
* patch (box tracking) ([8063e6d](https://github.com/homuler/MediapipeUnityPlugin/commit/8063e6d03a49ef0bd44756cdec39d962856d2626))
* use microseconds as a Timestamp value ([8e00358](https://github.com/homuler/MediapipeUnityPlugin/commit/8e003585b1d257d5b76d6c05d1205e3458cf2730))
* wrong file path ([14fc75d](https://github.com/homuler/MediapipeUnityPlugin/commit/14fc75db3dc7b9df90e86ad3aa959b98a93224cd))

### [0.4.1](https://github.com/homuler/MediapipeUnityPlugin/compare/v0.4.0...v0.4.1) (2021-01-17)


### Features

* add android_arm64 target ([70d46d9](https://github.com/homuler/MediapipeUnityPlugin/commit/70d46d9b2926c2e603f0d9143742fe6419fe412b))

## [0.4.0](https://github.com/homuler/MediapipeUnityPlugin/compare/v0.3.0...v0.4.0) (2021-01-16)


### ⚠ BREAKING CHANGES

* define callbacks as static methods for IL2CPP

### Features

* **sdk:** GlCalculatorHelper#GetGlContext ([3238cf6](https://github.com/homuler/MediapipeUnityPlugin/commit/3238cf6ce0598f28076967c8f67c20794e273833))


### Bug Fixes

* remove readonly ([7fdf71a](https://github.com/homuler/MediapipeUnityPlugin/commit/7fdf71a401ea4c8e50b84444e3518bbfc558ab38))
* suppress C linkage errors ([461d019](https://github.com/homuler/MediapipeUnityPlugin/commit/461d019eb04545397aa398496e8e066140eb5312))
* wait for WebCamTexture to be initialized ([8fd204c](https://github.com/homuler/MediapipeUnityPlugin/commit/8fd204cfed441340566618f49fdf8e7a1eb11b2f))


* define callbacks as static methods for IL2CPP ([0172e01](https://github.com/homuler/MediapipeUnityPlugin/commit/0172e01bf59a4a8593530ec14742f19b076e2575))

## [0.3.0](https://github.com/homuler/MediapipeUnityPlugin/compare/v0.2.2...v0.3.0) (2020-12-31)


### ⚠ BREAKING CHANGES

* **example:** pass the input texture name to MediaPipe
* **example:** MediaPipe rotates the input image
* use OpenGL ES on Android

### Features

* **example:** enable to specify the output texture on Android ([18e00a8](https://github.com/homuler/MediapipeUnityPlugin/commit/18e00a85ac271b123178e593184184e8715ed22e))
* **example:** implement TextureFramePool ([9723843](https://github.com/homuler/MediapipeUnityPlugin/commit/972384368459628b151b79c7f799f2f9547b93fd))
* **example:** pass the input texture name to MediaPipe ([7f3628d](https://github.com/homuler/MediapipeUnityPlugin/commit/7f3628dcdce156c35f865fbfa354ecd3b28aa867))
* **example:** render external textures directly ([ebbf0ed](https://github.com/homuler/MediapipeUnityPlugin/commit/ebbf0ed4367748254a42cda891674817ee78cb33))
* add Official Demo Graph ([7a340f9](https://github.com/homuler/MediapipeUnityPlugin/commit/7a340f97da91f71c9c3850cd88fa549fd908e4b5))
* use OpenGL ES on Android ([a10efce](https://github.com/homuler/MediapipeUnityPlugin/commit/a10efce8ead138192a1d6fc71796078bce529fc3))
* **sdk:** add GlTextureBuffer APIs ([1643620](https://github.com/homuler/MediapipeUnityPlugin/commit/1643620ed92fe7630213f058c19864b40810a443))
* **sdk:** build CalculatorGraphConfig.cs from proto srcs ([9e576e2](https://github.com/homuler/MediapipeUnityPlugin/commit/9e576e2e2141ed9995ee8abdd8d1b4a68d3b69b7))
* **sdk:** CreateDestinationTexture from GpuBuffer ([48ba090](https://github.com/homuler/MediapipeUnityPlugin/commit/48ba0902f1e1071f5a14831fbb148e0777329121))
* **sdk:** implement EglSurfaceHolder ([380a8c5](https://github.com/homuler/MediapipeUnityPlugin/commit/380a8c5e8d719846a0d12c71a9ba1a4b680d2f7d))
* **sdk:** implement name related APIs under mediapipe::tool ([e967820](https://github.com/homuler/MediapipeUnityPlugin/commit/e967820c8f43c9c2809aa75841acdaaacfd2fa97))


### Bug Fixes

* SIGSEGV when GlTextureBuffer is destroyed ([a1e4cc0](https://github.com/homuler/MediapipeUnityPlugin/commit/a1e4cc074861403160962c7c0ddc1da4f41823b3))
* **example:** use FlowLimiterCalculator in OfficialDemoCPU graph ([f92d71a](https://github.com/homuler/MediapipeUnityPlugin/commit/f92d71a33fc39c0f99ebe7c0e435a4d623f1de1d))


* **example:** MediaPipe rotates the input image ([0eda94c](https://github.com/homuler/MediapipeUnityPlugin/commit/0eda94cd25686664a70c594c29fc6617ef55ac94))

### [0.2.2](https://github.com/homuler/MediapipeUnityPlugin/compare/v0.2.1...v0.2.2) (2020-12-19)


### Features

* add APIs to initialize GpuResources with the current context ([c66d255](https://github.com/homuler/MediapipeUnityPlugin/commit/c66d25583caf0e410bd9011e8d0509b61eaa967d))
* add Glog APIs for debugging ([085f7cc](https://github.com/homuler/MediapipeUnityPlugin/commit/085f7ccdedc24b302a4eb46c4d1f38ee32d27a8c))
* implement CalculatorGraph#ObserveOutputStream ([fad3ca1](https://github.com/homuler/MediapipeUnityPlugin/commit/fad3ca1c77da4100a2cc3f7d8b02513354d081b7))


### Bug Fixes

* add missing dependencies for Mac ([94a2a76](https://github.com/homuler/MediapipeUnityPlugin/commit/94a2a76b73b3c98dc25c9bb20e2fea0e34e83e7c))
* build for macOS ([b24e3eb](https://github.com/homuler/MediapipeUnityPlugin/commit/b24e3eb93d17e3c49e6523e2064503cbbbf3a029))
* **sdk:** set GlTextureBuffer's shared pointer ([5bc68c7](https://github.com/homuler/MediapipeUnityPlugin/commit/5bc68c75d64a0858f2bfcfc9832ba5559a55f7ac))
* hangs if resource files not found ([a4186c2](https://github.com/homuler/MediapipeUnityPlugin/commit/a4186c2d7bd0c587421d7e42f00825007ffd3185))
* I/F has changed ([65bc5a7](https://github.com/homuler/MediapipeUnityPlugin/commit/65bc5a7fb59aafd3c16e9704902ec7aa9a0b8126))
* method name typo ([4c642b5](https://github.com/homuler/MediapipeUnityPlugin/commit/4c642b58d07d6cd4dfd8091b9065111996dfb034))
* typo ([ef78637](https://github.com/homuler/MediapipeUnityPlugin/commit/ef78637b8393c4e043cc58eb1b9a1cf3f4f305bb))
* width <-> height ([27d2eff](https://github.com/homuler/MediapipeUnityPlugin/commit/27d2effb9519678383245465368eb111cd1f8977))
* width <-> height ([62e4fb5](https://github.com/homuler/MediapipeUnityPlugin/commit/62e4fb52b0cdec010d2f084cb2d1fc5b1f7689bf))

### [0.2.1](https://github.com/homuler/MediapipeUnityPlugin/compare/v0.2.0...v0.2.1) (2020-11-24)


### Features

* **sdk:** GlContext and GlSyncToken API ([79b3e83](https://github.com/homuler/MediapipeUnityPlugin/commit/79b3e83983e37a77b9cedb76a7e90a1218317ea7))
* **sdk:** implement GlSyncToken API ([9f8435e](https://github.com/homuler/MediapipeUnityPlugin/commit/9f8435efac84345db90211a04502c8a116075fb4))
* **sdk:** implement GlTextureBuffer API ([31d3deb](https://github.com/homuler/MediapipeUnityPlugin/commit/31d3deb11045c112aac2281991a90176c68ac7a9))
* **sdk:** implement Timestamp API ([f647755](https://github.com/homuler/MediapipeUnityPlugin/commit/f647755382063cb48583fbd8af00d86d99833366))
* add CalculatorGraph APIs ([679c3fb](https://github.com/homuler/MediapipeUnityPlugin/commit/679c3fb19851464d72fd162fc1b8cb073e888e56))
* add GlContext APIs ([755a643](https://github.com/homuler/MediapipeUnityPlugin/commit/755a64327f7c7fccf5499d702bbdfb818d339b38))
* handle SIGABRT ([ee0c4c3](https://github.com/homuler/MediapipeUnityPlugin/commit/ee0c4c33aaf81c5265443a15d9266ac16efbbf55))
* implement IntPacket ([2eea5b2](https://github.com/homuler/MediapipeUnityPlugin/commit/2eea5b28a30a0a224d94ff0d2586b8b149123c47))
* upgrade MediaPipe(0.8.0) ([3b58752](https://github.com/homuler/MediapipeUnityPlugin/commit/3b58752e860b6bf1055bdbe88911b715bccf340e))


### Bug Fixes

* add missing dependencies ([6524d57](https://github.com/homuler/MediapipeUnityPlugin/commit/6524d57331e3d724c8cd28c31ba42e2366864b74))
* **build:** fix aar path ([6cab320](https://github.com/homuler/MediapipeUnityPlugin/commit/6cab3202b65ec86357bac32af18ae49b7ebe0ec2))
* **sdk:** correct GpuBufferFormat values ([260a048](https://github.com/homuler/MediapipeUnityPlugin/commit/260a04826beadbf5a950187c4520e170a06b5708))
* fails to longjmp sometimes ([f884865](https://github.com/homuler/MediapipeUnityPlugin/commit/f88486520ddd1a7f5f083a36841b5ab1879cb41a))
* ptr is not set ([7c6af2f](https://github.com/homuler/MediapipeUnityPlugin/commit/7c6af2fc1993a7810d2185ca5945c1c7e6afaf90))
* thread hangs when an error occured in RunInGlContext ([388899b](https://github.com/homuler/MediapipeUnityPlugin/commit/388899b94aacebd1ec8b18a6b2e943b94ba6accb))

## [0.2.0](https://github.com/homuler/MediapipeUnityPlugin/compare/v0.1.1...v0.2.0) (2020-10-14)


### Features

* build for Android ([d058ddd](https://github.com/homuler/MediapipeUnityPlugin/commit/d058ddd717aa32f0482423443e72a5933c276df1))
* **example:** read local files in UnityEditor env ([e0e8795](https://github.com/homuler/MediapipeUnityPlugin/commit/e0e87951d9e4d304f60797280d96c58de3462f6d))
* **example:** use AssetBundle ([25ce035](https://github.com/homuler/MediapipeUnityPlugin/commit/25ce035e0ac29b67fa678fb0aa444813ed06b56b))
* **sdk:** implement path resolver for unity ([468d444](https://github.com/homuler/MediapipeUnityPlugin/commit/468d4441b0b268dd1a0ca11b18c5ed4b61522f4d))


### Bug Fixes

* **example:** wait for the assets to be loaded ([4cd0d2e](https://github.com/homuler/MediapipeUnityPlugin/commit/4cd0d2ec9e4b279ff839d7c70f12eee1e09b1103))

### [0.1.1](https://github.com/homuler/MediaPipeUnityPlugin/compare/v0.1.0...v0.1.1) (2020-09-27)


### Features

* **example:** enable to switch graph ([2bb63f4](https://github.com/homuler/MediaPipeUnityPlugin/commit/2bb63f44b8f17cb223b4e25e9f1dae1650ce7c3d))


### Bug Fixes

* **example:** close the input stream ([26038da](https://github.com/homuler/MediaPipeUnityPlugin/commit/26038da460fc7e206cbc6419e4bd91b1939ce2b6))
