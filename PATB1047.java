package com.hysteria.demo.pat;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;


public class PATB1047 {
    public static void main(String[] args) throws IOException {
        BufferedReader scanner = new BufferedReader(new InputStreamReader(System.in));
        int N;

        N = Integer.valueOf(scanner.readLine());
        HashMap<Integer, Integer> hashMap = new HashMap<Integer, Integer>();
        int ans_x=0, ans_score = 0;
        for(int i = 0; i < N; i++){
            String t = scanner.readLine(); //"3-10"
            int x = 0;
            for(int j = 0; t.charAt(j)!='-'; j++){
                x = x*10 + t.charAt(j) - '0';
            }
            String k[] = t.split(" ");
            int score = Integer.valueOf(k[1]);
            hashMap.put(x, hashMap.getOrDefault(x, 0)+score);
            if(hashMap.get(x) > ans_score){
                ans_score = hashMap.get(x);
                ans_x = x;
            }
        }
        System.out.println(ans_x+" "+ans_score);
    }

}
