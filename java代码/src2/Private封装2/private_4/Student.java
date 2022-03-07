package Private封装2.private_4;

public class Student {
    private String name;
    private int age;

    //构造方法
    public Student(){
        System.out.println("无参构造方法");
    }
    public void show(){
        System.out.println(name+","+age);
    }

}
