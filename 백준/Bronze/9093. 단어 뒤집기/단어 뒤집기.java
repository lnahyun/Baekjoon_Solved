import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int T = Integer.parseInt(br.readLine());

        for(int i = 0; i<T; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());

            while(st.hasMoreTokens()) {
                StringBuilder temp = new StringBuilder();
                temp.append(st.nextToken());
                sb.append(temp.reverse()+" ");
                temp.setLength(0);
            }
            sb.append("\n");
        }
        sb.setLength(sb.length() - 1);
        System.out.print(sb);

    }
}