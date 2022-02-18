package 集合3.学生管理系统3;

import java.util.ArrayList;
import java.util.Scanner;

public class ArrayListTest2 {
    public static void main(String[] args) {
        ArrayList<Student> array = new ArrayList<Student>();
        Scanner sc = new Scanner(System.in);


        while (true) {
            System.out.println("------欢迎来到学生管理系统------");
            System.out.println("1.添加学生");
            System.out.println("2.删除学生");
            System.out.println("3.查看学生");
            System.out.println("4.修改学生");
            System.out.println("5.退出");
            System.out.println("请输入数字:");
            int a = sc.nextInt();
            if (a == 1) {
                AddStudent(array);
            } else if (a == 2) {
                deleteStudent(array);
            } else if (a == 3) {
                findAllStudent(array);
            } else if (a == 4) {
                updateStudent(array);
            } else  {
                System.out.println("感谢使用!");
                break;
            }
        }
    }

    public static void AddStudent(ArrayList<Student> array) {
//        录入学生信息
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入学号");
        String xuehao = sc.nextLine();
        for (int i = 0; i < array.size(); i++) {
            Student a = array.get(i);
            if (a.getXuehao().equals(xuehao)){
                System.out.println("学号重复，请重新输入");
                AddStudent(array);
                return ;
            }
        }
        System.out.println("请输入姓名");
        String name = sc.nextLine();
        System.out.println("请输入年龄");
        String age = sc.nextLine();
        System.out.println("请输入地区");
        String diqu = sc.nextLine();
        Student s = new Student(xuehao, name, age, diqu);
        array.add(s);
    }

    public static void findAllStudent(ArrayList<Student> array) {

        if (array.size() != 0) {
            System.out.println("学号\t\t姓名\t年龄\t地区");
            for (int i = 0; i < array.size(); i++) {
                Student s = array.get(i);
                System.out.println(s.getXuehao() +"\t\t"+ s.getName() + "\t\t" + s.getAge() + "\t\t" + s.getDiqu());
            }
        }
        else {
         System.out.println("无信息，请添加后信息在来查看");
    }
 }
    public static void deleteStudent(ArrayList<Student> array){
        System.out.println("请输入要删除学生的学号");
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < array.size(); i++) {
            Student s = array.get(i);
            if (s.getXuehao().equals(sc.nextLine())){
                array.remove(i);
                System.out.println("删除成功");
                break;
            }
            else if(i+1 == array.size()){
                System.out.println("改学号不存在，请重新输入");
            }
        }
    }

    public static void updateStudent(ArrayList<Student> array){
        System.out.println("请输入你要修改学生信息的学号");
        Scanner sc = new Scanner(System.in);
        String s1= sc.nextLine();
        Student s = new Student();
        for (int i = 0; i < array.size(); i++) {
                Student b = array.get(i);
                if (s1.equals(b.getXuehao())){
                System.out.println("请输入修改后的学号");
                s.setXuehao(sc.nextLine());
                System.out.println("请输入修改后的名字");
                s.setName(sc.nextLine());
                System.out.println("请输入修改后的年龄");
                s.setAge(sc.nextLine());
                System.out.println("请输入修改后的地区");
                s.setDiqu(sc.nextLine());
                array.set(i,s);
                break;
            }
        }
        System.out.println("修改成功");
    }

//    public static void endStudent(){
//        System.out.println("感谢使用");
//    退出jvm虚拟机
//        System.exit(0);
//    }
}
