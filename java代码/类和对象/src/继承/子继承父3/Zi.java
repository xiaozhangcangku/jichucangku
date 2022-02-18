package 继承.子继承父3;

public class Zi extends Fu {
    public  Zi() {
        super(20);
        System.out.println("Zi中无参构造方法被调用");
    }
    public  Zi(int age){
        super(20);
        System.out.println("Zi中有参构造方法被调用");
    }
}
