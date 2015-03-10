/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */


import java.io.FileInputStream;
import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author mdshohag
 */
public class  Main{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        BigInteger a,b,c;
        Scanner in=new Scanner(System.in);
        while (in.hasNext()) {
           a=in.nextBigInteger();
           b=in.nextBigInteger();
           c=a.multiply(b);
            System.out.println(c);
        }
    }
}
