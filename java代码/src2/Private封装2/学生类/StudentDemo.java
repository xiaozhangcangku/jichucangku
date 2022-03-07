package Private封装2.学生类;

public class StudentDemo {
    public static void main(String[] args) { //测试这个学生类要有主方法
        //创建对象
        Student b = new Student();
        //使用对象
        b.name = "张婉玉";
        b.age = 24;
        System.out.println(b.name+","+b.age);
        b.study();
        b.dohomework();

        //创建第二个对象
        Student b1 = new Student();
        b1.name = "林青霞";
        b1.age = 20;
        System.out.println(b1.name+","+b1.age);
        b1.study();
        b1.dohomework();
    }
}
