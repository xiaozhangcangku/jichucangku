package 集合3.集合与学生类1;

import java.util.ArrayList;

public class ArrayList存储学生对象3 {
    public static void main(String[] args) {
//        创建集合对象
        ArrayList<Student类> array = new ArrayList<>();

//        创建学生对象
        Student类 s1 =  new Student类("林青霞",30);
        Student类 s2 =  new Student类("张三丰",35);
        Student类 s3 =  new Student类("张玉炬",19);
        array.add(s1);
        array.add(s2);
        array.add(s3);
        for (int i = 0; i < array.size() ; i++) {
//            然后在把每次从集合获取到值，在放到这个s里面
            Student类 s = array.get(i);
//            最后输出获取值的时候就需要调用Student类里面的方法
            System.out.println(s.getName()+","+s.getAge());
        }

    }
}
