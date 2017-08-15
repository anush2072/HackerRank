/*
Meera teaches a class of n students, and every day in her classroom is an adventure. Today is drawing day!

The students are sitting around a round table, and they are numbered from 1 to n in the clockwise direction. This means that the students are numbered 1,2,3...n-1,n and students 1 and n are sitting next to each other.

After letting the students draw for a certain period of time, Meera starts collecting their work to ensure she has time to review all the drawings before the end of the day. However, some of her students aren't finished drawing! Each student  needs i extra t(i) minutes to complete their drawing.

Meera collects the drawings sequentially in the clockwise direction, starting with student ID x, and it takes her exactly 1 minute to review each drawing. This means that student x gets 0 extra minutes to complete their drawing, student x+1 gets 1 extra minute, student x+2 gets 2 extra minutes, and so on. Note that Meera will still spend minute for each student even if the drawing isn't ready.

Given the values of t1, t2,.., help Meera choose the best possible x to start collecting drawings from, such that the number of students able to complete their drawings is maximal. Then print x on a new line. If there are multiple such IDs, select the smallest one

*/

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.LinkedList;
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {

        Scanner s  = new Scanner(System.in);
        int count  = s.nextInt();
        int [] ranges = new int[count+1];
        LinkedList<Pair> list = new LinkedList<>();

        for (int i = 1; i <= count; i++) {
            list.add(new Pair(i, s.nextInt()));
        }
        for (Pair pair : list) {
            int key = pair.key;
            if (key > count )
                continue;
            if (key==0)
                continue;
            int end = pair.index - pair.key;
            if (end <= 0 )
                end = count + end;
            int start = (pair.index+1);
            if (start > count) 
                start-=count;
            ranges[start]++;
            ranges[(end+1)%(count+1)]--;
        }

        long runningSum = 0;
        long max = 0 ;
        int idx = -1;
        for (int i = 1; i < ranges.length; i++) {
            runningSum+=ranges[i];
            if (runningSum > max) {
                max = runningSum;
                idx = i;
            }
        }
        System.out.println(idx);

    }

    static class Pair {
        int index , key;

        Pair(int index, int key) {
            this.index = index;
            this.key = key;
        }
    }
}