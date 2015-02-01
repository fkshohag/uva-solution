/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */


import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author mdshohag
 */
public class Main{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        BigInteger b;
        while (in.hasNext()) {
            b=in.nextBigInteger();
            if(b.compareTo(BigInteger.ZERO)==0)
            {
                break;
            }
            if(b.mod(BigInteger.valueOf(17)).compareTo(BigInteger.ZERO)==0)
            {
                System.out.println(1);
            }
            else
            {
                System.out.println(0);
            }
        }
    }
}
