import java.util.Random;

public class 随机数 {
    public static void main(String[] args) {

            Random r = new Random();//创建一个对象
            int ra = r.nextInt(100);//nextInt(随机数的范围),这里设置的是100就是[0,100）不包括100
            System.out.println(ra);
    }

}