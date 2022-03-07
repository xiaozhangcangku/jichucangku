package 权限和状态修饰符.权限修饰符1.itcast;

public class Zi extends Fu{
    public static void main(String[] args) {
        Zi z = new Zi();
//        继承过后只能访问三个方法了
        z.show2();
        z.show3();
        z.show4();
    }
}
