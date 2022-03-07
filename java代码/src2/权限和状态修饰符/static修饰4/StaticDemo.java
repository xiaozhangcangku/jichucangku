package 权限和状态修饰符.static修饰4;

public class StaticDemo {
    public static void main(String[] args) {
//        如果加了static，可以直接用对象名去访问成员变量
        Student.universishowty = "清华大学";

        Student s = new Student();
        s.name = "风清扬";
        s.age = 30;
//        一般用static就不用对象变量去访问对象中的成员变量
//        s.universishowty = "清华大学";
        s.show();


        Student s2 = new Student();
        s2.name  = "林青霞";
        s2.age = 20;
//        s2.universishowty = "北京大学";
//        因为用了static来修饰成员变量，所以调用方法时，这里没有给s2的学校赋值
//        所以就会用到s的学校，因为他是静态的
        s2.show();
    }
}
