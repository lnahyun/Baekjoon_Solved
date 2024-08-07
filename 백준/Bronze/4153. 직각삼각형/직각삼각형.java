import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        while(true) {
            String [] str = br.readLine().split(" ");
            int[] Arr = new int[str.length];
            for(int i = 0; i<str.length; i++) {
                Arr[i] = Integer.parseInt(str[i]);
            }
            Arrays.sort(Arr);

            if(Arr[0] == 0 && Arr[1] == 0 && Arr[2] == 0) { break; }

            if((Arr[0]*Arr[0] + Arr[1]*Arr[1]) == Arr[2]*Arr[2]) {
                System.out.println("right"); }
            else
                System.out.println("wrong");
        }
    }
}