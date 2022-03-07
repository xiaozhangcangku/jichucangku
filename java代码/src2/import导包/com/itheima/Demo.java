package import导包.com.itheima;

//这个就是导包，一般idea会自动进行导包
import import导包.cn.itcast.Teacher;
//一层接着一层

public class Demo {
    public static void main(String[] args) {
//        不导包如果想用别的文件下的类，就要一个一个的深入到他的内部才可以new这个类
//        import导包.cn.itcast.Teacher  t = new import导包.cn.itcast.Teacher();
//        t.teach();
//       这样使用包下面的类，进行new一个类太麻烦了，所以就需要用import进行导包

//        所以就需要
        Teacher t1 = new Teacher();
        t1.teach();

    }
}
