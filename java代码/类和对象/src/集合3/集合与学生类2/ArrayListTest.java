package 集合3.集合与学生类2;

import java.util.ArrayList;
import java.util.Scanner;

public class ArrayListTest {
    public static void main(String[] args) {
        ArrayList<Student> array = new ArrayList<Student>();

        for (int i = 0; i < 3; i++) {
            addStudent(array);
        }
        for (int i = 0; i <array.size() ; i++) {
            Student s = array.get(i);
            System.out.println(s.getName()+","+s.getAge());
        }
    }


    public static void addStudent(ArrayList<Student> array){
//        使用键盘录入学生对象所需要的信息
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入学生姓名:");
        String name = sc.nextLine();
        System.out.println("请输入学生年龄:");
        int age = sc.nextInt();
//        创建一个学生对象，并把所录入的信息存放到对象中
        Student s = new Student();
        s.setName(name);
        s.setAge(age);
//        往集合内添加学生对象.集合里面存放的是录入完内容的对象
        array.add(s);
    }
}
