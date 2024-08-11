import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int T = Integer.parseInt(br.readLine());

        for(int i = 0; i<T; i++) {
            String[] str = br.readLine().split("");
            LinkedList<String> StackList = new LinkedList<>();
            int count = 0;
            for(int j = 0; j<str.length; j++ ) {
                //스택이 비었을 시
                if(StackList.isEmpty()) {
                    if(str[j].equals(")")) {
                        count++;
                        continue;
                    }
                    else StackList.add(str[j]);
                }
                //다음 괄호와 스택의 top에 있는 괄호가 짝이면 짝끼리 탈출
                else if(!(str[j].equals(StackList.getLast()))) {
                    StackList.removeLast();
                }
                //짝이 아니라면 스택에 쌓아주기
                else {
                    if(str[j].equals(")")) {
                        count++;
                        continue;
                    }
                    else StackList.addLast(str[j]);
                }
            }

            if(StackList.isEmpty() && count == 0)
                sb.append("YES" + "\n");
            else sb.append("NO" +"\n");

            StackList.clear();
            }

        System.out.print(sb);
        }

    }