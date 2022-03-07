package 权限和状态修饰符.权限修饰符1.itheima;

import 权限和状态修饰符.权限修饰符1.itcast.Fu;

public class Zi extends Fu {
    public static void main(String[] args) {
//        不同包下的只能访问Fu类中的两种
        Zi z = new Zi();
        z.show3();
        z.show4();

    }
}
