package Private封装2.private_6;

public class StduentDemo {
    public static void main(String[] args) {
        //使用无参构造方法创建对象后使用setXxx()赋值
        Student a = new Student();
        a.setName("林青霞");
        a.setAge(30);
        a.show();
       // System.out.println(a.getName()+","+a.getAge());

        //使用带参构造方法直接创有带属性值的对象
        Student a1 = new Student("林青霞",30);
        a1.show();
    }

}
