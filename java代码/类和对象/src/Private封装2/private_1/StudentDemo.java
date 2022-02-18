package Private封装2.private_1;


public class StudentDemo {
    public static void main(String[] args) { //测试这个学生类要有主方法
        //创建对象
        Student b = new Student();
        //使用对象
        b.name = "张婉玉";
        b.setAge(20);
        b.show();
    //System.out.println(b.getAge);
    //在这里获取age的值就知道b.getAge有什么用了

    }
}
