package 多态.猫和动物;


//多态指的是，在不同时刻表现出来不同的形态

/* 猫可以是猫
    猫也可以是动物
    这里的猫表现出来了不同的形态，这就是多态
 */

/* 多态的前提和体现
        有继承/实现关系
        有方法重写
        有父类引用指向子类
 */
public class AnimalsDemo {
    public static void main(String[] args) {
//        用父类引用指向子类
        Animal a = new Cat();
        a.eat();
    }
}
