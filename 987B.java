import java.util.Scanner;
import java.lang.*;


public class B987
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int x = in.nextInt();
		int y = in.nextInt();

		double l,r;

		l=Math.log(x);
		l*=y;

		r=Math.log(y);
		r*=x;

		//System.out.println(l + " " + r);

		if(l>r)
			System.out.println(">");
		else if(r>l)
			System.out.println("<");
		else
			System.out.println("=");
	}
}