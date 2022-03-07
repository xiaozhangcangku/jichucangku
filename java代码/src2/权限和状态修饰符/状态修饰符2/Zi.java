package 权限和状态修饰符.状态修饰符2;

public class Zi extends Fu {

//    这样不能进行方法重写，因为Fu类中哪个是最终方法
//    @Override
//    public void method(){
//        System.out.println("Zi method");
//    }


    public final int age = 20;

    public void show(){
//        age = 200;因为上面加了最终就为最终的变量值，不能修改
        System.out.println(age);
    }

}
