package 继承.子继承父4之方法重写4;

public class PhoneDemo {
    public static void main(String[] args) {
//        创建一个phone对象
        Phone p = new Phone();
        p.call("林青霞");
        System.out.println("--------");
        NewPhone np = new NewPhone();
        np.call("林青霞");
    }
}
