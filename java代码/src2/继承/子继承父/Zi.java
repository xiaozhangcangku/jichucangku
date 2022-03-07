package 继承.子继承父;

public class Zi extends Fu {
//    在子类中创建一个公共的变量
    public int height = 175;
//    extends的意思是继承的意思
    public void son(){
//        如果在这个方法内创建这个同名变量，就会在现在这个方法中搜素，再去父类中搜素
//        int age = 30;

        System.out.println("使用了Zi类里面的son方法");
        System.out.println(height);
        System.out.println(age);
    }
}
