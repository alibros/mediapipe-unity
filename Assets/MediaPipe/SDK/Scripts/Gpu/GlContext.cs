using System;

namespace Mediapipe {
  public class GlContext : MpResourceHandle {
    private SharedPtrHandle sharedPtrHandle;

    public static GlContext GetCurrent() {
      UnsafeNativeMethods.mp_GlContext_GetCurrent(out var glContextPtr).Assert();

      return glContextPtr == IntPtr.Zero ? null : new GlContext(glContextPtr);
    }
 
    public GlContext(IntPtr ptr, bool isOwner = true) : base(isOwner) {
      sharedPtrHandle = new SharedPtr(ptr, isOwner);
      this.ptr = sharedPtrHandle.Get();
    }

    protected override void DisposeManaged() {
      if (sharedPtrHandle != null) {
        sharedPtrHandle.Dispose();
        sharedPtrHandle = null;
      }
      base.DisposeManaged();
    }

    protected override void DeleteMpPtr() {
      // Do nothing
    }

    public IntPtr sharedPtr {
      get { return sharedPtrHandle == null ? IntPtr.Zero : sharedPtrHandle.mpPtr; }
    }

    public IntPtr eglDisplay {
      get { return SafeNativeMethods.mp_GlContext__egl_display(mpPtr); }
    }

    public IntPtr eglConfig {
      get { return SafeNativeMethods.mp_GlContext__egl_config(mpPtr); }
    }

    public IntPtr eglContext {
      get { return SafeNativeMethods.mp_GlContext__egl_context(mpPtr); }
    }

    public bool IsCurrent() {
      return SafeNativeMethods.mp_GlContext__IsCurrent(mpPtr);
    }

    public int glMajorVersion {
      get { return SafeNativeMethods.mp_GlContext__gl_major_version(mpPtr); }
    }

    public int glMinorVersion {
      get { return SafeNativeMethods.mp_GlContext__gl_minor_version(mpPtr); }
    }

    public long glFinishCount {
      get { return SafeNativeMethods.mp_GlContext__gl_finish_count(mpPtr); }
    }

    private class SharedPtr : SharedPtrHandle {
      public SharedPtr(IntPtr ptr, bool isOwner = true) : base(ptr, isOwner) {}

      protected override void DeleteMpPtr() {
        UnsafeNativeMethods.mp_SharedGlContext__delete(ptr);
      }

      public override IntPtr Get() {
        return SafeNativeMethods.mp_SharedGlContext__get(mpPtr);
      }

      public override void Reset() {
        UnsafeNativeMethods.mp_SharedGlContext__reset(mpPtr);
      }
    }
  }
}
