package 继承.学生和老师案例6;

public class Student extends Person{
//    创建了一个带参构造方法
    public Student(String name,int age){
//        传递给父级元素的构造方法
        super(name,age);
    }
    public void stud(){
        System.out.println("用心去逃避每一份作业");
    }
}
