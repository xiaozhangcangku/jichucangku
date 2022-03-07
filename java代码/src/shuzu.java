import java.util.Scanner;

public class shuzu {
    public static void main(String[] args) {
//        1.数组的基本格式
//        int arr[] = new int[3];
//        arr[0] = 3;
//        int arr1[] = arr; //赋值时其实是把arr的内存给了arr1
//        arr1[0] = 5;
//        System.out.println(arr[0]);
//        System.out.println(arr1[0]);//输出的是内存的地址

        //1.遍历
        //1.遍历
        int arr[] = new int[10];
        for (int i = 0; i < 10; i++) {
            Scanner a1 = new Scanner(System.in);
            arr[i] = a1.nextInt();
        }
        for (int i = 0; i < 10; i++) {
            System.out.println(arr[i]);
        }
        //2. 数组名.length是一个求数组元素个数的
        for (int i = 0; i <arr.length ; i++) {
            System.out.println(arr[i]);
        }


    }
}
