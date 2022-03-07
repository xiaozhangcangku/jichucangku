package 继承.子继承父4之方法重写4;

public class NewPhone extends Phone {
//    此时我要为这个新手机添加一个新的功能，继承旧手机的功能
    @Override //注解  这个时来检查重写方法是否正确
    public void call(String name){
        System.out.println("开启视频电话功能");
        super.call("林青霞");
    }

}
