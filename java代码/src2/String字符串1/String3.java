package String字符串1;

import java.util.Scanner;

public class String3 {
    public static void main(String[] args) {

/*       按序输出字符串的每一个字符
        Scanner a = new Scanner(System.in);
        String b = a.nextLine();

//        字符串名.length() 为字符串长度
        for (int i = 0; i < b.length(); i++) {
//            数组名.charAt() 为获取字符串长度的第几个值
            System.out.println(b.charAt(i));
        }
    }
    */

        //找出字符串中，大写小写数字母和数字字符各有几个
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int xiao = 0, da = 0, shu = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) >= 'a' && s.charAt(i) <= 'z') {
                xiao++;
            } else if (s.charAt(i) >= 'A' && s.charAt(i) <= 'Z') {
                da++;
            } else if (s.charAt(i) >= '0' && s.charAt(i) <= '9') {
                shu++;
            }
        }
        System.out.println("小写字符有" + xiao + "个" + "大写字符有" + da + "个" + "数字字符有" + shu + "个");
    }
}