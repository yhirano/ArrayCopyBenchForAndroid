/* 
 * Copyright (c) 2012 Yuichi Hirano
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

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
