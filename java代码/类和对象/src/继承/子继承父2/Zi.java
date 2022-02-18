package 继承.子继承父2;

public class Zi extends Fu {
//    在子类中创建一个公共的变量
    public int height = 175;
    public int age = 40;
//    extends的意思是继承的意思
    public void son(){
    int age = 30;
//    这里会先访问方法里面的，来查看有没有此变量,现在这个输出的是本方法的
    System.out.println(age);

//    这个输出的是本类的变量
        System.out.println(this.age);

        System.out.println(super.age);
    }
}
