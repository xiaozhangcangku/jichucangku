package 继承.猫和狗案例7;

public class AnimalDemo {
    public static void main(String[] args) {
        Cat c = new Cat("加菲猫",8);
        System.out.println(c.getName()+","+c.getAge());
        c.catchMOuse();

        Dog d = new Dog("大黄",7);
        System.out.println(d.getName()+","+d.getAge());
        d.LookDoor();
    }
}
