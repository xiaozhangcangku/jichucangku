import com.sun.source.tree.CaseTree;

import javax.sound.midi.Soundbank;
import java.util.Scanner;

public class 基础练习 {
    //减肥计划
//    public static void main(String[] args) {
//        Scanner a = new Scanner(System.in);
//        int a1 = a.nextInt();
//        System.out.println("这周星期"+a1+"的计划");
//        switch (a1){
//            case 1:
//                System.out.println("跑步");
//                break;
//            case 2:
//                System.out.println("游泳");
//                break;
//            case 3:
//                System.out.println("慢走");
//                break;
//            case 4:
//                System.out.println("动感单车");
//                break;
//            case 5:
//                System.out.println("拳击");
//                break;
//            case 6:
//                System.out.println("爬山");
//                break;
//            case 7:
//                System.out.println("好好吃一顿");
//                break;
//            default:
//                System.out.println("输入的星期数有误");
//                break;
//        }

    //逢7过规则
//    public static void main(String[] args) {
//        for (int i = 1; i <= 100 ; i++) {
//            if (i / 100 == 7 || i % 100 / 10 == 7 || i % 10 == 7){
//                System.out.println("这个数字"+i+"说过");
//        }
//    }

    //不死神兔
//    public static void main(String[] args) {
//        int a[] = new int[20];
//        a[0] = 1;
//        a[1] = 1;
//        for (int i = 2; i < a.length ; i++) {
//            a[i] = a[i-2] + a[i - 1];
//        }
//        for (int i = 0; i < 20; i++) {
//            System.out.println("第"+(i+1)+"个月有"+a[i]+"只兔子");
//        }
//    }


    //百钱百鸡
//    public static void main(String[] args) {
//        int qian  = 100,ji = 0;
//        int a =0;
//        for (int i = 0; i <= 20; i++) {
//            for (int j = 0; j <= 33; j++) {
//                for (int k = 0; k <= 100 - i - j; k++) {
//                    qian = qian - i * 5 - j * 3 - k * 1;
//                    ji = i * 1 + j * 1 + k * 3;
//                    if (qian == 0 && ji == 100){
//                        System.out.println("鸡翁有"+i+"鸡母有"+j+"鸡幼"+k*3);
//                    }
//                    else{
//                        qian = 100;
//                        ji = 0;
//                    }
//                }
//
//            }
//
//        }
//    }

    //求数组元素之和
//    public static void main(String[] args) {
//        int arr[] = {68,27,95,88,171,996,51,210},sum = 0;
//        for (int i = 0; i < arr.length; i++) {
//            if (arr[i] % 10 != 7 && arr[i] / 100 % 10 != 7 && arr[i] % 2 == 0 ){
//                sum += arr[i];
//            }
//        }
//        System.out.println(sum);
//    }



    //比较两个数组的元素是否一样
//    public static void main(String[] args) {
//        int arr[] = {11, 22, 33, 44, 55};
//        int arr1[] = {11, 22, 33, 44, 55};
//        boolean a = bijiao(arr, arr1);
//        System.out.println(a);
//    }
//
//    public static boolean bijiao(int arr[], int arr1[]) {
//        if (arr.length != arr1.length) {
//            return false;
//        }
//        for (int i = 0; i < arr.length; i++) {
//            if (arr[i] != arr1[i]) {
//                return false;
//            }
//        }
//        return true;
//    }

    //查找指定值的下标为多少
//    public static void main(String[] args) {
//        int arr[] = {19,28,37,46,50};
//        Scanner a = new Scanner(System.in);
//        int b =  a.nextInt();
//        for (int i = 0; i < arr.length ; i++) {
//            if (b == arr[i]){
//                System.out.println(i);
//                break;
//            }
//        }
//    }

    //数组首尾进行交换
//    public static void main(String[] args) {
//        int arr[] = {1,5,6,7,8,9};
//        jiaohuan(arr);
//        for (int i = 0; i < arr.length; i++) {
//            System.out.println(arr[i]);
//        }
//    }
//    public static void jiaohuan(int arr[]){
//        for (int i = 0; i < arr.length / 2; i++) {
//            int a = arr[i];
//            arr[i] = arr[arr.length-1-i]  ;
//            arr[arr.length-1-i]  = a;
//        }
//    }

    //输入六个成绩,然后去掉一个最高分一个最低分,然后在求接下来4个的平均值
    /*public static void main(String[] args) {
        Scanner a = new Scanner(System.in);
        int pin = 0;
        int arr[] = new int[6];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = a.nextInt();
        }
        int a1 =  max(arr);
        int b1 = min(arr);
        for (int i = 0; i < arr.length; i++) {
            pin += arr[i];
        }
        System.out.println((pin-a1-b1) / (arr.length-2));
    }

    public static int max(int arr[]) {
        int a = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (a > arr[i]){
                a = arr[i];
            }
        }
        return a;

//        for (int i = 0; i <arr.length ; i++) { //找出最大值的对应的下标,然后赋值为0,不过已经有更好的方法了
//            if (a == arr[i]){
//                arr[i] = 0;
//                break;
//            }
//        }
    }

    public static int min(int arr[]) {
        int a = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (a < arr[i]){
                a = arr[i];
            }
        }
        return a;

//        for (int i = 0; i <arr.length ; i++) { //找出最小值的对应的下标,然后赋值为0,不过已经有更好的方法了
//            if (a == arr[i]){
//                arr[i] = 0;
//                break;
//            }
//        }
    }*/



}


