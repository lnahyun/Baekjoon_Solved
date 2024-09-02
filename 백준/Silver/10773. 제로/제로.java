import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Stack<Integer> stackNum = new Stack<>();

        int K = Integer.parseInt(br.readLine());

        for(int i = 0; i < K; i++) {
            int n = Integer.parseInt(br.readLine());
            if(n == 0)
                stackNum.pop();
            else stackNum.add(n);
        }
        int sumNum = 0;
        for(int i = 0; i<stackNum.size(); i++) {
            sumNum += stackNum.get(i);
        }

        System.out.print(sumNum);
    }
}