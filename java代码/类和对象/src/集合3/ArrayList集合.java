package 集合3;

import java.util.ArrayList;

public class ArrayList集合 {
    public static void main(String[] args) {
//        public ArrayListTest() 创建一个空的集合对象
        ArrayList<String> array = new ArrayList<>();
        System.out.println(array);

//        直接给集合添加字符 对象名.add()
//        意思是给这个集合添加了三个字符串,索引是从0开始的
        array.add("hello");
        array.add("world");
        array.add("java");
        System.out.println(array);

//        也可以给指定的位置添加内容
//        他会添加到1索引的位置，然后被顶替掉的就顺位添加
        array.add(1,"javase");
        System.out.println(array);
//        集合不能跳元素添加不然就会变成集合的索引越界

        System.out.println("-----------------------------------------");

//      接下来是集合中方法种的使用
        ArrayList<String> array2 = new ArrayList<>();
        array2.add("hello");
        array2.add("world");
        array2.add("java");
        System.out.println(array2);

//        public boolean remove(Object o);删除指定的元素，返回删除是否成功，返回值是布尔类型
        System.out.println(array2.remove("hello"));
        System.out.println(array2);


//        public E remove(int index); 意思删除索引的元素就返回索引的元素
        System.out.println("用索引删除返回的元素是被删除的那个元素:"+array2.remove(1));
        System.out.println(array2);
        System.out.println("-------------------------------------------");


        ArrayList<String> array3 = new ArrayList<>();
        array3.add("hello");
        array3.add("world");
        array3.add("java");
//          public E set(int index,E element)：修改指定索引的元素，并且返回被修改的元素
        System.out.println(array3.set(0,"zhang"));
        System.out.println(array3);

//        public E get(int index):返回指定索引处的元素,不改变集合内的元素
        System.out.println(array3.get(1));//1索引是world

//        public int size()：返回改集合有多少个元素
        System.out.println(array3.size());

    }
}
