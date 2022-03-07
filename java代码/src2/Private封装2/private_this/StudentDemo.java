package Private封装2.private_this;

public class StudentDemo {
    public static void main(String[] args) {
        Student a = new Student();
        a.setAge(20);
        a.setName("张玉炬");
    //使用get方法获取成员变量的值
        System.out.println(a.getAge()+"."+a.getName());
}


}
