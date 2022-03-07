package Private封装2.private_1;

public class Student {
    //成员变量
    String name;
    //int age
    private int age; //封装这个age变量
    //提供get/set方法
    public void setAge(int a){ //变量名要大写，然后因为是设置一个值，所以需要接收一个值
            age = a; //还可以在这个set方法里面进行判断
    }
    public int getAge(){ //获取他的值  set是给age赋值，get是获取age的值
        return age;
    }
   // 成员方法
    public void show(){
        System.out.println(name+","+age);
    }

}
