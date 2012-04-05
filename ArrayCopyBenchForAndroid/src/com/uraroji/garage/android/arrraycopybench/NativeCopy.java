
package com.uraroji.garage.android.arrraycopybench;

public class NativeCopy {

    static {
        System.loadLibrary("nativecopy");
    }

    private NativeCopy() {
    }

    public static native void copyNative(byte[] src, int srcPos, byte[] dst, int dstPos, int length);

    public static native void copyNative(short[] src, int srcPos, short[] dst, int dstPos, int length);

    public static native void copyNative(int[] src, int srcPos, int[] dst, int dstPos, int length);

    public static native void copyNative(long[] src, int srcPos, long[] dst, int dstPos, int length);

    public static native void copyNative(double[] src, int srcPos, double[] dst, int dstPos, int length);
}
