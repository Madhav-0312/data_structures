import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the minimumBribes function below.
    static void minimumBribes(int[] q) {
int n=q.length,flag=0;
int a= -2;
for(int i=1;i<=n;i++) { 
    int t=0;
    if(i-q[i-1] >2 || q[i-1]-i>2)
        flag=1;
        else {
        if(i<n &&i==q[i]) {
            int temp=q[i];
            q[i]=q[i-1];
            q[i-1]=temp;
            t++;
        }
        else if(i+1 < n && i==q[i+1]) {
            int temp=q[i+1];
            q[i+1]=q[i-1];
            q[i-1]=temp;
            t++;
        }
    }
}
    
    if(flag==1)
        System.out.println("Too chaotic");
        else if(flag==0)
            System.out.println(t);
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            int n = scanner.nextInt();
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            int[] q = new int[n];

            String[] qItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int i = 0; i < n; i++) {
                int qItem = Integer.parseInt(qItems[i]);
                q[i] = qItem;
            }

            minimumBribes(q);
        }

        scanner.close();
    }
}
