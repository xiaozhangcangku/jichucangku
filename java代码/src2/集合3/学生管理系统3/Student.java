package 集合3.学生管理系统3;

public class Student {
//    学号
    private String xuehao;
//    姓名
    private String name;
//    年龄
    private String age;
//    居住地
    private String diqu;
                            //Alt+linsert可以快速构造方法
    public Student() {
    }

    public Student(String xuehao, String name, String age, String diqu) {
        this.xuehao = xuehao;
        this.name = name;
        this.age = age;
        this.diqu = diqu;
    }

    public String getXuehao() {
        return xuehao;
    }

    public void setXuehao(String xuehao) {
        this.xuehao = xuehao;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAge() {
        return age;
    }

    public void setAge(String age) {
        this.age = age;
    }

    public String getDiqu() {
        return diqu;
    }

    public void setDiqu(String diqu) {
        this.diqu = diqu;
    }
}