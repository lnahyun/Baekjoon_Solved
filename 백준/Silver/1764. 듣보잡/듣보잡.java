import java.io.*;
import java.sql.Array;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        String[] num = br.readLine().split(" ");
        int N = Integer.parseInt(num[0]);
        int M = Integer.parseInt(num[1]);

        Set<String> noListen = new HashSet<>();
        Set<String> noListenLook = new HashSet<>();

        //듣도 못한 사람 저장
        for (int i = 0; i < N; i++) {
            String noListenName = br.readLine();
            noListen.add(noListenName);
        }

        //보도 못한 사람 검사
        for (int i = 0; i < M; i++) {
            String noLookName = br.readLine();
            if (noListen.contains(noLookName)) {
                noListenLook.add(noLookName);
            }
        }

            ArrayList<String> list = new ArrayList<>(noListenLook);
            Collections.sort(list);

            sb.append(list.size()).append('\n');

            for (String fin : list) {
                sb.append(fin).append('\n');
            }
            sb.setLength(sb.length() - 1);

            System.out.print(sb);


        }
    }