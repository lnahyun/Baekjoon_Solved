import java.io.*;
import java.util.*;

public class Main{

    static int[][] dp = new int[30][30];

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        //피보나치 수열 만들기
        long[] fib = new long[N + 1];
        fib[0] = 0;
        fib[1] = 1;
        for(int i = 2; i<=N; i++) {
            fib[i] = fib[i-1] + fib[i-2];
        }

        long squareLength = fib[N];
        long squareWidth = fib[N-1] + fib[N];

        long peri = 2*squareLength + 2*squareWidth;

        System.out.print(peri);




    }

}