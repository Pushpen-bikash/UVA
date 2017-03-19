package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        int test,n;
        Scanner sc = new Scanner(System.in);
        test=sc.nextInt();
        while (test!=0){
            n=sc.nextInt();
            StringBuilder s = new StringBuilder();
            StringBuilder s_test = new StringBuilder("0123456789");
            for(int i=1;i<=n;i++){
                s=s.append(i);
            }
            //System.out.println(s);
            for(int i=0;i<s_test.length();i++){
                int counter=0;
                for(int j=0;j<s.length();j++){
                    if(s_test.charAt(i)==s.charAt(j))
                        counter=counter+1;
                }
                System.out.print(counter);
                if(i!=s_test.length()-1)
                    System.out.print(" ");
            }

            test--;
            if(test!=0);
            System.out.print("\n");

        }
    }
}
