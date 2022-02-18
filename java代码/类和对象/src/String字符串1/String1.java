package String字符串1;

public class String1 {
    public static void main(String[] args) {
//       public String() 创建一个空白字符串对象，不含有任何的内容
        String s1 = new String();
        System.out.println(s1);

//      public String(char chs[]),根据字符数组的内容，来创建字符串的对象
        char a[] ={'a','b','c'};
        String a1 = new String(a);
        System.out.println(a1);

//        public String(byte a[]),根据字节数组的内容，来创建字符串对象
        byte b[] = {97,98,99};
        String b1 = new String(b);
        System.out.println(b1);

//        直接字符串赋值
        String c = "abc";
        System.out.println(c);
    }
}
