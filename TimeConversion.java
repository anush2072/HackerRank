/*
Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static String timeConversion(String s) {
        // Complete this function
        if(s.substring(8).equals("PM")){
            if(s.substring(0,2).equals("12")){
               return s.substring(0,8);     
            }
            else{
                String hrs = s.substring(0,2);
                int hour = Integer.parseInt(hrs)+12;
                return Integer.toString(hour) + s.substring(2,8);                
            }
        }
        else{
            if(s.substring(0,2).equals("12")){
                return "00" + s.substring(2,8);
            }
            else{
                return s.substring(0,8);                
            }
        }
            
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = timeConversion(s);
        System.out.println(result);
    }
}
