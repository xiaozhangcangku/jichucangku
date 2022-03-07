package 权限和状态修饰符.final修饰3;

public class FinalDemo {
    public static void main(String[] args) {
//        final修饰基本类型变量
         final int age = 20;
        System.out.println(age);

//        final修饰引用类型变量(地址不能变)
       final Student s = new Student();
       s.age = 100;
        System.out.println(age);

    }
}
