/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */


import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author mdshohag
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       BigInteger fact[]=new BigInteger[367];
       int data[]=new int[15];
       fact[0]=BigInteger.ONE;
       int i;
       for(i=1;i<=366;i++)
       {
           fact[i]=fact[i-1].multiply(BigInteger.valueOf(i));
       }
       Scanner in=new Scanner(System.in);
        while (in.hasNext()) {
            Arrays.fill(data, 0);
            int value=in.nextInt();
            if(value==0)
            {
                break;
            }
            String s=fact[value].toString();
            for(i=0;i<s.length();++i)
            {
                ++data[s.charAt(i)-'0'];
            }
               System.out.printf("%d! --\n", value);
            for(i=0;i<5;i++)
            {
                if(i>0)
                {
                    System.out.printf(" ");
                }
                System.out.printf("   (%d)%5d", i, data[i]);
            }
            System.out.println();
            for(i=5;i<10;++i)
            {
               if(i>5)
               {
                   System.out.printf(" ");
               }
               System.out.printf("   (%d)%5d", i, data[i]);
            }
            System.out.println();
        }
    }
}
