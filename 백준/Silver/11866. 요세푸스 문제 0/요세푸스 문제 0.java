import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader((new InputStreamReader(System.in)));
        StringBuilder sb = new StringBuilder();
        sb.append("<");

        String[] N = br.readLine().split(" ");
        int step = Integer.parseInt(N[1]);
        int countIndex = step-1;

        List<Integer> intList = new ArrayList<Integer>();
        for(int i = 1; i <= Integer.parseInt(N[0]); i++) {
            intList.add(i);
        }

        while(!intList.isEmpty()) {
            countIndex = countIndex % intList.size();

            sb.append(intList.get(countIndex) + ", ");
            intList.remove(countIndex);

            countIndex += (step - 1);
        }

        sb.setLength(sb.length() - 2);
        sb.append(">");
        System.out.print(sb);

    }
}