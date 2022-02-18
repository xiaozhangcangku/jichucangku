package 继承.子继承父;

public class Demo {



    public static void main(String[] args) {
        Fu f = new Fu();
        f.show();

        Zi z = new Zi();
        z.son();
//        下面这个就是子类继承父类之后调用父类里面的方法
        z.show();

        System.out.println();
    }
}


