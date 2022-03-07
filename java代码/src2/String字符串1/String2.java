package String字符串1;

import java.util.Scanner;

public class String2 {
    public static void main(String[] args) {
     /*
        char chs[] = {'a','b','c'};
        String a = new String(chs);
        String a1 = new String(chs);


        String b = "abc";//赋值之后会存到一个常量池
        String b1 = "abc";

        //比较地址值是否相同
        System.out.println(a == b);//判断地址值是否相同
        System.out.println(a == b1);
        System.out.println(b == b1);
        System.out.println("-------");

        //比较字符串的内容进行比较
        System.out.println(a.equals(b));
        System.out.println(a1.equals(b1));
        System.out.println(b.equals(b1));

                                                           */
        //模拟用户登录
        String username = "xiaozhang";
        String password = "13425471098a";
        Scanner pass = new Scanner(System.in);
        Scanner name = new Scanner(System.in);
        for (int i = 1; i <= 3; i++) {
            String name1 = name.nextLine();
            String pass1 = pass.nextLine();
            if ((pass1.equals(password)) && (name1.equals(username))){
                System.out.println("登录成功");
                break;
            }
            else if (pass1.equals(password) == false || name1.equals(username) == false){
                System.out.println("用户名或密码输入错误");
                System.out.println("请再次输入:");
            }
            else {
                System.out.println("输入错误，还有"+ (3-i) +"次机会");
                System.out.print("请再次输入:");
            }
        }
    }
}
