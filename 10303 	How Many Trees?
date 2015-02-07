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
public class Main{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        BigInteger data[]=new BigInteger[1015];
        data[0]=data[1]=BigInteger.ONE;
        int i,j,n=1012;
        for(i=2;i<=n;i++)
        {
            data[i]=BigInteger.ZERO;
            for(j=0;j<i;j++)
            {
               data[i]=data[i].add(data[j].multiply(data[i-j-1]));
            }
        }
        Scanner in=new Scanner(System.in);
        while (in.hasNext()) {
            int node = in.nextInt();
            System.out.println(data[node]);
        }
       
    }
}
