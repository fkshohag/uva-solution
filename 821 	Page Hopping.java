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
    public static int[][]data=new int[105][105];  
    public static int inf=100000;
    public static void main(String[] args) {
        InputStream stream=System.in;
        OutputStream outputstrem=System.out;
        InputReader in=new InputReader(stream);
        int test=0;
        while(true)
        {
            for(int i=0;i<105;i++)
                for(int j=0;j<105;j++)
                    data[i][j]=inf;
            for(int i=0;i<105;i++)
                data[i][i]=0;
            int u,v;
            u=in.NextInt();
            v=in.NextInt();
            if(u==0 && v==0)break;
            while(true)
            {
                data[u][v]=1;
                u=in.NextInt();
                v=in.NextInt();
                if(u==0 && v==0)break;
            }
            for(int k=0;k<105;k++)
                for(int i=0;i<105;i++)
                    for(int j=0;j<105;j++)
                        data[i][j]=Math.min(data[i][j],data[i][k]+data[k][j]);
            float ans=0,nas=0;
            for(int i=0;i<105;i++)
                for(int j=0;j<105;j++)
                    if(i!=j && data[i][j]!=inf)
                    {
                        ans+=data[i][j];
                        nas++;
                    }
             System.out.printf("Case %d: average length between pages = %.3f clicks\n",++test,ans/nas);
        }
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
