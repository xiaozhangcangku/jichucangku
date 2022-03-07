package 继承.子继承父4之方法重写5;

public class Zi extends Fu {

    //私有的不能被Zi继承x,所以@Override会报错，private的访问权限高
//    @Override
//    private void show(){
//        System.out.println("Zi类种的重写父类中的方法");
//    }

//    @Override
//    public void method(){
//        System.out.println("Zi类中重写Fu类中的method()方法");
//    }

    // @Override //什么都不添加就是默认的访问权限，这个可以进行重写,因为权限一样
//    void method(){
//        System.out.println("Zi类中默认访问权限");
//    }

    @Override //只要Zi中的访问权限比Fu中的访问权限大也可以进行重写
    public void method(){
//        public的访问权限比默认的大，所以能够进行重写
        System.out.println("只要Zi中的访问权限比Fu中的访问权限大也可以进行重写");
    }

    //继承只可以支持多层继承，不支持一个继承多个

}
