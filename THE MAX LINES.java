//https://www.spoj.com/problems/MAXLN/
//@bl!nd_m0n3y

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        for (int i = 0; i < t; i++) {
            double n = s.nextDouble();
            double f = 0.25 + 4 * n * n;
            System.out.printf("Case %d: %.2f\n", i + 1, f);
        }
    }
}
