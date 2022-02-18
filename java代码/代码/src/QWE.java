import com.sun.jdi.PathSearchingVirtualMachine;

import java.sql.ResultSet;

public class QWE {
    public static void main(String[] args) {
        //int u = 0;  //145
//        for(int y = 100;y <= 999;y++){
//            int m = y/100;
//            int ui = (y - (m * 100))/10;
//            int yu = (y - ((m * 100) + (ui * 10)));
////            System.out.println(y);
////            System.out.println( m + " " + ui + " " + yu);
//            if(m * m * m + ui * ui * ui + yu * yu *yu == y){
//                System.out.println( y);
//             // u = y;
//            }
//        }
        //System.out.println(u);
        int u = 1;
        int y = 0;
        while (u <= 100){
            if (u % 2 == 0){
                y += u ;
                u++;
                System.out.println(y);
            }
        }

    }



}
