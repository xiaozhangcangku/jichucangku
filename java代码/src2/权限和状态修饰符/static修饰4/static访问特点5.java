package 权限和状态修饰符.static修饰4;

public class static访问特点5 {
//    非静态成员变量
    private String name;

//静态成员方法
    private static String university = "清华大学";

    public void show1(){

    }

    public void show2(){
        System.out.println(name);
        System.out.println(university);
        show1();
        show3();
    }

//    静态的成员方法
    public static void show3(){
    }

    //    静态的成员方法
    public static void show4(){
//        静态的成员方法只能访问静态的成员变量或者静态的成员方法
//        System.out.println(name);
        System.out.println(university);
        show3();
    }
}
