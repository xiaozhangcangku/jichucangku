package 集合3;

import java.util.ArrayList;
import java.util.Scanner;

public class ArrayList集合2 {
    public static void main(String[] args) {
//        案例：创建一个储存字符串的集合
        ArrayList<String> array = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
//        添加三个字符串的元素
        for (int i = 0; i < 3; i++) {
            array.add(sc.nextLine());
        }
        System.out.println();
//        利用public E get(int index)方法获取集合内的每一个字符串
//        利用public int size() 来获取集合的长度
        for (int i = 0; i < array.size(); i++) {
//            System.out.println(array.get(i));

//            一般可以用这种格式，因为如果需要修改，这样每次获取到就会存放到s内，可以进行什么修改都行
            String s = array.get(i);
            System.out.println(s);
        }


    }
}
