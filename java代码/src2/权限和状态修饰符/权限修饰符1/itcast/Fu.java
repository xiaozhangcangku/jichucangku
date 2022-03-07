package 权限和状态修饰符.权限修饰符1.itcast;

public class Fu {
    private void show1(){
        System.out.println("private权限");
    }
    void show2(){
        System.out.println("默认的权限");
    }
    protected void show3(){
        System.out.println("protected权限");
    }
    public void show4(){
        System.out.println("public权限");
    }

    public static void main(String[] args) {
//        创建Fu的对象，看看右哪些方法可以使用
        Fu f = new Fu();
        f.show1();
        f.show2();
        f.show3();
        f.show4();
    }
}
