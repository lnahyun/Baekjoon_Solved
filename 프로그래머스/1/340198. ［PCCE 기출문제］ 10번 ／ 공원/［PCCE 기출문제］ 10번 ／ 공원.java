import java.util.*;
import java.io.*;

class Solution {
    public int solution(int[] mats, String[][] park) {
        Arrays.sort(mats);
        int answer = -1;
        for(int i = (mats.length - 1); i >= 0; i--) {
            if(check(park, mats[i])) { answer = mats[i]; break; }
        }
        return answer;
    }
    
    public boolean check(String[][] park, int mat) {
        int N = park.length; //세로
        int M = park[0].length; //가로
        //행렬 돌면서 검사
        for(int i = 0; i<N; i++) {
            for(int j = 0; j<M; j++) {
                //-1이면 mat*mat 크기 다 -1인지 검사
                if(park[i][j].equals("-1")) {
                    boolean result = true;
                    if((i+mat) > N || (j+mat) > M) {result = false; continue;}
                    for(int a = i; a<(i+mat); a++) {
                        for(int b = j; b<(j+mat); b++) {
                            if(!(park[a][b].equals("-1"))) {result = false;}
                        }
                    }
                    if(result == true) return result;
                }
            }
        }
        return false;
    }
}