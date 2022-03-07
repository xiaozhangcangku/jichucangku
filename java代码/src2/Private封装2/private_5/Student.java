package Private封装2.private_5;

public class Student {
    private String name;
    private int age;

    //构造方法
    public Student(){
        System.out.println("无参构造方法");
    }

    public Student(String name){
        this.name = name;
    }

    public Student(String name,int age){
        this.name = name;
        this.age = age;
    }

    public void show(){
        System.out.println(name+","+age);
    }

}
