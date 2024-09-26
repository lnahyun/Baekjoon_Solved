import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Map<Integer, String> poketmonName = new HashMap<>();
        Map<String, Integer> poketmonNum = new HashMap<>();
        StringBuilder sb = new StringBuilder();

        String[] str = br.readLine().split(" ");
        int N = Integer.parseInt(str[0]);
        int M = Integer.parseInt(str[1]);

        for(int i = 1; i<N+1; i++) {
            String name = br.readLine();
            poketmonName.put(i, name);
            poketmonNum.put(name, i);
        }

        for(int i = 0; i<M; i++){
            String check = br.readLine();
            //포켓몬의 이름이 나왔을 때
            if(poketmonNum.containsKey(check))
                sb.append(poketmonNum.get(check)).append('\n');
            else sb.append(poketmonName.get((Integer.parseInt(check)))).append('\n');
        }

        System.out.print(sb);
    }
}