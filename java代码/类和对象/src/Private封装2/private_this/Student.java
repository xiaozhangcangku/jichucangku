package Private封装2.private_this;

public class Student {
    private String name;
    private int age;

    public void setName(String name){
        this.name = name;  //当这里同名时，就需要用到this,这就代表是成员变量
    }
    public String getName(){
        return name;
    }
    public void setAge(int age){
        this.age = age ;
    }
    public int getAge(){
        return age;
    }
    public void show(){
        System.out.println(name+","+age);
    }


}
