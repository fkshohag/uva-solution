/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */


import java.util.Scanner;

/**
 *
 * @author mdshohag
 */
class d
{
    int devisor(int n)
    {
        int cont=0,i;
        for(i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
            if(i*i==n)
            {
                cont++;
            }
            else
            {
                cont+=2;
            }
            }
        }    
            
            return cont;
    }
}
public class Main{

    /**
     * @param args the command line arguments
     */
    public static  void main(String[] args) {
        d dk=new d();
        int l,u,i,max,key,j;
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        for(j=1;j<=t;j++)
        {
            max=0;
            key=0;
            l=in.nextInt();
            u=in.nextInt();
            for(i=l;i<=u;i++)
            {
                int k=dk.devisor(i);
                if(max<k)
                {
                    max=k;
                    key=i;
                }
            }
            System.out.printf("Between %d and %d, %d has a maximum of %d divisors.",l,u,key,max);
            System.out.println();
        }
    }
}
