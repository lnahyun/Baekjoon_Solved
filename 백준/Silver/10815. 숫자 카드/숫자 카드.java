import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int N = Integer.parseInt(br.readLine());
        ArrayList<Integer> arr = new ArrayList<>();
        StringTokenizer st1 = new StringTokenizer(br.readLine());
        while (N--!=0){
            arr.add(Integer.parseInt(st1.nextToken()));
        }
        Collections.sort(arr);
        int M = Integer.parseInt(br.readLine());
        StringTokenizer st2 = new StringTokenizer(br.readLine());
        while (M--!=0){
            int value = Integer.parseInt(st2.nextToken());
            if(Collections.binarySearch(arr, value)>=0){
                sb.append("1 ");
            }else{
                sb.append("0 ");
            }
        }
        System.out.print(sb);
    }
}
