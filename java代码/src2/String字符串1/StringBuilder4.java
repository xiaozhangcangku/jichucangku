package String字符串1;

public class StringBuilder4 {
    public static void main(String[] args) {
        //public StringBuilder() 创建一个空白可变字符串对象，不含有任何的内容
        StringBuilder sb = new StringBuilder();

        //public StringBuilder(String str)根据字符串的容纳，来创建字符串可变对象
        StringBuilder sb1 = new StringBuilder("hello");
        System.out.println(sb1);
        System.out.println(sb1.length());
    }
}
