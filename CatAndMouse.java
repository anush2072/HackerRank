/*
Two cats named A and B are standing at integral points on the x-axis. Cat  A  is standing at point x  and cat B is standing at point y. Both cats run at the same speed, and they want to catch a mouse named C that's hiding at integral point z on the x-axis. Can you determine who will catch the mouse?

You are given  queries in the form of x,y, and z. For each query, print the appropriate answer on a new line:

If cat A catches the mouse first, print Cat A.
If cat B catches the mouse first, print Cat B.
If both cats reach the mouse at the same time, print Mouse C as the two cats fight and mouse escapes.
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            int x = in.nextInt();
            int y = in.nextInt();
            int z = in.nextInt();
            
            int A = x - z;
            int B = y - z;
            
             if(java.lang.Math.abs(A) ==  java.lang.Math.abs(B)){
                 System.out.println("Mouse C");
             }
            else if(java.lang.Math.abs(A) <  java.lang.Math.abs(B))
            {
                System.out.println("Cat A");
            }
            else
            {
                System.out.println("Cat B");
            }
        }
    }
}
