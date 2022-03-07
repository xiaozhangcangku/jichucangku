package 继承.猫和狗案例7;

public class Cat extends Animal {
//    Alt+Insert可以一键生成,直接带有无参和有参构造方法
    public Cat() {
    }

    public Cat(String name, int age) {
        super(name, age);
    }

    public void catchMOuse(){
        System.out.println("抓老鼠");
    }
}
