package String字符串1;

import java.util.Scanner;

public class StringBuilder6 {
    //案例 使用StringBuilder字符传反转
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a =  sb(sc.nextLine());
        System.out.println(a);
    }
    public static String sb(String sb){

//        StringBuilder a = new StringBuilder(sb);
//        a.reverse();
//        return a.toString();

//-----------------下面是另一种写法，更简便-----------

        //可以总结为一行,因为是一个对象，所以能够使用方法
        return new StringBuilder(sb).reverse().toString();

    }
}
