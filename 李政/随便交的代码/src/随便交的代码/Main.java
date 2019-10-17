package Ëæ±ã½»µÄ´úÂë;
import java.util.*;
import java.math.*;
public class Main {
	public static void main(String[] args) {
		Scanner S = new Scanner(System.in);
		int n;
		n=S.nextInt();
		int a=1<<n-1;
		int b=0;
		int i;
		for(i=0;i<3;i++)
		{
			for(int j=0;j<a;j++)
				System.out.print(" ");
			a-=2;
			if(b==0)
			{
				System.out.println("*");
				b+=4;
				continue;
			}
			System.out.print("*");
			for(int j=0;j<b-1;j++)
				System.out.print(" ");
			b+=4;
			System.out.println("*");
		}
		a+=2;b-=4;
		for(i=i-1;i>0;i--)
		{
			a+=2;
			for(int j=0;j<a;j++)
				System.out.print(" ");
			b-=4;
			if(b<=0)
			{
				System.out.print("*");
				break;
			}
			System.out.print("*");
			for(int j=0;j<b-1;j++)
				System.out.print(" ");
			System.out.println("*");
			
		}
		S.close();
	}
	
}