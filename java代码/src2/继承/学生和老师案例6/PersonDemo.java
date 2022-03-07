package 继承.学生和老师案例6;

public class PersonDemo {
    public static void main(String[] args) {
        //创建老师类对象进行测试
        Teacher t = new Teacher();
        t.setName("林青霞");
        t.setAge(30);
        System.out.println(t.getName()+","+t.getAge());
        t.teach();


        Student s = new Student("吴彦祖",30);
        System.out.println(s.getName()+","+s.getAge());
        s.stud();
    }
}
