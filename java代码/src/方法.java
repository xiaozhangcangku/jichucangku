import java.util.Scanner;

public class 方法 {
//    public static void main(String[] args) {
//        Scanner a = new Scanner(System.in);
//        int a1 = a.nextInt() ;
//        int b = a.nextInt();
//        int max = max1(a1,b);
//        System.out.println(max);
//    }
//
//    public static int max1(int x,int y){
//        return x > y ?x:y;
//    }

    //1.方法重载
    public static void main(String[] args) {

       System.out.println(chongzai(10,10));
        System.out.println(chongzai((byte)10,(byte)10));//默认是int类型，所以需要强制转换
    }                                                       //让java虚拟机自己查找是对应的是哪个方法
    public static boolean chongzai(int a,int b){
        return a == b;
    }
    public static boolean chongzai(short a,short b){
        return a == b;
    }
    public static boolean chongzai(byte a,byte b){
        return a == b;
    }
    public static boolean chongzai(long a,long b){
        return a == b;
    }
}
