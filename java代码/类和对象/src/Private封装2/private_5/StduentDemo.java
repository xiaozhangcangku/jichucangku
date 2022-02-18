package private_5;

public class StduentDemo {
    public static void main(String[] args) {
        Student a = new Student(); //在new这个对象的时候，系统默认同时也调用了这个无参构造方法
        a.show();

        Student a1 = new Student("林青霞"); //要重新调用这个构造方法，因为现在这个不是无参
        a1.show();

        Student a2 = new Student("林青霞",30); // 其实有点像重载方法
        a2.show();
    }

}
