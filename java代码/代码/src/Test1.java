import java.security.Principal;
import java.security.PublicKey;

public class Test1 {
    public static void main(String[] args) {

//        int x = 1;
//        int y = 1;
//        if(x++ == 2 & ++y == 2){
//            x=7;
//        }
//        System.out.println("x="+x+",y="+y);
//         int y = 0;
//         int u = 3;
//        System.out.println(y == 0 || ++u != 4);
//        System.out.println(u);
//        System.out.println(y != 0 && ++u == 4);;
//        System.out.println(u);
//        System.out.println(4 == 4 & 2 > 4);
//        System.out.println(4 != 4 | 4 > 2);
//        System.out.println(4 == 4 ^ 4 < 2);
//        System.out.println(12 | 5 );
//        System.out.println(24 >> 3);
//        System.out.println(~55);
//        int i = 2;
//        int e = 5;
//        int k = i > e ? i : e;
//        int age = 80;
//       System.out.println(k);
//       System.out.println(15 / 5 *3);
//       System.out.println("人家芳龄" + age + ",马马虎虎啦");
//        //我们现在要找出3个数里面最大的数。)

        //（条件表达式）？ 表达式1 : 表达式2
        //当条件表达式里为true时运行问号后面的表达式1，如果为false时运行冒号后面的表达式2

        /*首先我们随机抽取两个数进行比较，i > e 就是一个大的三元运算符，我们在它后面嵌套小的三元运算符
        （i > r ? i : r ）这个就是一个小的三元运算符
        代表的意思：当i>e 时，也就是为true时，还要跟r比较，当i>r时如果为true则输出i，为false输出r。

        当i>e为false时的表达式2 (e > r ? e : r) 也是一个小的三元运算符、
        代表的意思为：当i>e为false时，也就是i不大于e时，要拿e去跟第三个数进行比较也就是r
        这时候e>r 为true输出e 也就是问号后面的表达式1（e） ，为false输出为r，也就是冒号后面的表达式2（r）.

        总结：我们可以很直接的看到i其实不大于e，那我们这里就是false，运行冒号后面的代码，然后e不大于r
        也是false，也是运行冒号后面的数也就是r，最后输出为8

         */

//        int chengji1 = 100;
//        if(chengji1 == 100){
//            System.out.println("奖励一台BWM");
//        }else if (chengji1 > 80         & chengji1 <= 99){
//            System.out.println("奖励一台iPhone5s");
//        }else if (chengji1 >= 60 & chengji1 <= 80){
//            System.out.println("奖励一个擎天柱的玩具");
//        }else{
//            System.out.println("奖励一个大嘴巴子");
//        }

//       char c ='a' ; //可以改变的常量
//       switch (c){
//           case'a': // 'a' 就是常量，常量就是一个确定的东西
//               System.out.println("A");
//           break;
//           case 'b':
//               System.out.println("B");
//           break;
//           case 'c':
//               System.out.println("C");
//           break;
//           case 'd':
//               System.out.println("D");
//           break;
//           case 'e':
//               System.out.println("E");
//           break;
//           default:
//               System.out.println("other");
//               break;
//       }


//        int i = 61;
//        if (i > 60){
//            System.out.println("合格");
//            } else{
//            System.out.println("不合格");
//        }
//
//        int i = 1;
//        switch (i){
//            case 1 :
//                System.out.println("冬季");
//                break;
//            c
//            System.out.println("秋季");ase  2 :
//            System.out.println("冬季");
//            break;
//        }
//
//        int i = 6;
//        if(i <= 2 | i == 12){
//            System.out.println("冬季");
//        }else if (i >= 3 & i <= 5){
//            System.out.println("春季");
//        }else if (i >=6 & i <= 8){
//            System.out.println("夏季");
//        }else if (i >=9 & i <= 11){
//        }


//         for(int i =1; i < 150 ; i++){
//          String str = " ";
//          str += i;
//            if(i % 3 == 0){
//               str += " foo";
//            }
//            if(i % 5 == 0){
//                str += " biz";
//            }
//            if(i % 7 == 0){
//                str += " baz";
//            }
//            System.out.println(str);
//
//        }


//        for (int p =1; p <= 100; p++){
//            if (p % 2 == 1){
//                System.out.println(p);
//            }
//
//        }

//        public class Test1{
//            public static void main(String[] args){

//        for(int i = 0; i <= 100;i++){
//            int o = 2;


//      int ui = 0;
//      for (int o = 1; o <=100;o++){
//          ui += o;
//
//      }
//        System.out.println("end="+ ui);

        for (int i = 1; i <= 150; i++) {
            String str = " "; //定义一个空字符
            str += i;         //然后每次循环经过的时候都会
            if (i % 3 == 0) {
                str += " foo";
            }
            if (i % 5 == 0) {
                str += " biz";
            }
             if (i % 7 == 0) {
                str += " baz";
            }
            System.out.println(str);

        }





    }
        }









