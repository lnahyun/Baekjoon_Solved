import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        // 기준 값들 입력받기
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st1 = new StringTokenizer(br.readLine());

        List<Integer> list = new ArrayList<>();
        while(N--!=0){
            list.add(Integer.parseInt(st1.nextToken()));
        }

        // 비교할 대상들 입력받기
        int M = Integer.parseInt(br.readLine());
        StringTokenizer st2 = new StringTokenizer(br.readLine());
        Collections.sort(list);
        // 검사하기
        for (int i = 0; i < M; i++) {
            int value = Integer.parseInt(st2.nextToken());
            if (Collections.binarySearch(list, value)>=0) {
                sb.append(1).append('\n');
            } else {
                sb.append(0).append('\n');
            }
        }
        sb.setLength(sb.length()-1);
        System.out.print(sb);
    }
}
