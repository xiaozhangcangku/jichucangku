package Private封装2.Phone类;

public class PhoneDemo {
    public static void main(String[] args) {//测试类要有个main方法
        Phone a = new Phone(); //创建对象
        System.out.println(a.brand);
        System.out.println(a.price);

        a.brand = "苹果"; //给成员变量赋值
        a.price = 5000;

        System.out.println(a.brand);
        System.out.println(a.price);

        //使用成员方法
        a.call(); // 直接调用对象类的方法
        a.sendMessage();
    }
}
