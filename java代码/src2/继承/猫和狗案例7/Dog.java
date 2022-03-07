package 继承.猫和狗案例7;

public class Dog extends Animal {
    public Dog() {
    }

    public Dog(String name, int age) {
        super(name, age);
    }

    public void LookDoor(){
        System.out.println("看门");
    }
}
