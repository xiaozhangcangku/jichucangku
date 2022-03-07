package 权限和状态修饰符.static修饰4;

public class Student {
    public int age;
    public String name;
//    加了static之后这一个成员变量就会一直静态的保持第一个的值，如果不重新给他赋值的话
    public static String universishowty;//学校

    public void show(){
        System.out.println(name+","+age+","+universishowty);
    }
}
