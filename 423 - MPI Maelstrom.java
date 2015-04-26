/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.util.StringTokenizer;

/**
 *
 * @author mdshohag
 */
public class Main{
    public static long[][]data=new long[101][101];
    public static long inf=500000000;
    public static int N;
    public static long floyed()
    {
           for(int k=0;k<N;k++)
            for(int i=0;i<N;i++)
                for(int j=0;j<N;j++)
                    data[i][j]=Math.min(data[i][j],data[i][k]+data[k][j]);
        long ans=0;
        for(int i=0;i<N;i++)
           ans=Math.max(data[0][i], ans);
        return ans;
    }
    public static void main(String[] args) {
        InputStream stream=System.in;
        OutputStream outputstream=System.out;
        InputReader in=new InputReader(stream);
        String s;
        N=in.NextInt();
        for(int i=0;i<N;i++)
            for(int j=0;j<=i;j++)
                if(i==j)
                    data[i][j]=0;
               else
                {
                    s=in.Next();
                    if(s.charAt(0)=='x')
                        data[i][j]=inf;
                    else
                    {
                        data[i][j]=Integer.parseInt(s);
                        data[j][i]=data[i][j];
                    }
                }
    
        System.out.println(floyed());
    }
}
class InputReader
{
    public BufferedReader reader;
    public StringTokenizer tokenizer;
    public InputReader(InputStream stream)
    {
        reader=new BufferedReader(new InputStreamReader(stream));
        tokenizer=null;
    }
    public String Next()
    {
        while(tokenizer==null || !tokenizer.hasMoreTokens())
        {
            try {
                tokenizer=new StringTokenizer(reader.readLine());
            } catch (IOException e) {
                throw  new RuntimeException();
            }
        }
        return tokenizer.nextToken();
    }
    public int NextInt()
    {
        return Integer.parseInt(Next());
    }
    public double NextDouble()
    {
        return Double.parseDouble(Next());
    }
    public float NextFloat()
    {
        return Float.parseFloat(Next());
    }
}
