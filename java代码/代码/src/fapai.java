public class fapai {
    public static void main(String[] args) {
        char arr[] = new char[54];
        cunpai(arr);
        for (int i = 0; i <arr.length ; i++) {
            System.out.println(arr[i]+" ");
        }

    }

    public static void cunpai(char arr[]) {
        for (int i = 0; i <4 ; i++) {
            arr[i] = 'A';
            arr[4 + i] = '2';
            arr[8 + i] = '3';
            arr[12 + i] = '4';
            arr[16 + i] = '5';
            arr[20 + i] = '6';
            arr[24 + i] = '7';
            arr[28 + i] = '8';
            arr[32 + i] = '9';
            arr[36 + i] = '十';
            arr[40 + i] = 'J';
            arr[44 + i] = 'Q';
            arr[48 + i] = 'K';
            arr[52] = 'D';
            arr[53] = 'X';
        }
    }
}
