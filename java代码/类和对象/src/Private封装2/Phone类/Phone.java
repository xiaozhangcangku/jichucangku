package Private封装2.Phone类;

public class Phone {
    //Phone就叫 类名 就是创建了一个class文件

    //这两个为成员变量
    String brand;//品牌
    int price;//价格

    //成员方法
    public  void call(){
        System.out.println("打电话");
    }
    public void sendMessage(){
        System.out.println("发短信");
    }
}
