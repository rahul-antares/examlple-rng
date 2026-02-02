public class Game {

    static {
        System.loadLibrary("mathjni");
    }

    private static native long nativeCreate();
    private static native int  nativeAdd(long h, int a, int b);
    private static native int  nativeMult(long h, int a, int b);
    private static native int  nativeGetRandom(long h);
    private static native void nativeDestroy(long h);

    public static void main(String[] args) {
        long h = nativeCreate();

        System.out.println(nativeAdd(h, 2, 3));
        System.out.println(nativeMult(h, 4, 5));
        System.out.println(nativeGetRandom(h));

        nativeDestroy(h);
    }
}
