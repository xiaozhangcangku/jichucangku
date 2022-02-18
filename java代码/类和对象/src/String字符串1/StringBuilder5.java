package String字符串1;

public class StringBuilder5 {
    public static void main(String[] args) {
        //创建对象
            StringBuilder sb = new StringBuilder();

        //public StringBuilder append(任意类型)，添加数据，并返回对象本身
//        这里是吧hello返回给对象本身也就是，sb,然后子再把sb给这个，sb2
        StringBuilder sb2 = sb.append("hello");

        System.out.println(sb);
        System.out.println(sb2);

        //调用这个方法，然后返回对象本身
        sb.append("hello");
        sb.append("java");
        sb.append(100);
        System.out.println(sb);
        System.out.println("----------");

        //public StringBuilder reverse()，返回相反的字符序列
        //意思就是反转这个字符串，倒过来存储
        sb.reverse();
        System.out.println(sb);
        System.out.println(sb.charAt(0));
        System.out.println("--------------");

//        StringBuilder转换为String
//                public String toString(),通过toString()就可以实现 StringBuilder转换为String
        StringBuilder c = new StringBuilder();
        c.append("hello");

        String s = c.toString();//StringBuilder转换为String类型
        System.out.println(s);

//        String转换为StringBuilder
//                public StringBuilder(String s),通过构造方法就可以实现String转换为StringBuilder
        String v = "hello";
        StringBuilder n = new StringBuilder(v);//把这个String v的内容传进来就行
        System.out.println(n);


        //如何给StringBuilder输入数据
//        Scanner t = new Scanner(System.in);
//        StringBuilder o = new StringBuilder();
//        o.append(t.nextLine()); //输入之后便会返回给他本身
//        System.out.println(o);


        //案例：拼接字符串
        int arr[] = {1,2,3,4};
       String g = sb(arr);
        System.out.println(g);
    }
    public static String sb(int arr[]){
        StringBuilder a = new StringBuilder();
        a.append("[");
        for (int i = 0; i < arr.length; i++) {
            a.append(arr[i]);
            if (i != arr.length - 1){
                a.append(",");
            }
        }
        a.append("]");

        //最后转换成String类型在进行返回
        String s = a.toString();
        return s;
    }


}
