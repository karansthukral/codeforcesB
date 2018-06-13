import java.util.Scanner;

public class B946 
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		long a = in.nextLong();
		long b = in.nextLong();

		while(true)
		{
			if(a==0||b==0)
			{	
				System.out.println(a + " " + b);
				break;
			}
			else if(a>=(2*b))
				a=a%(2*b);
			else if(b>=(2*a))
				b=b%(2*a);
			else if((a<(2*b))||(b<(2*a)))
			{
				System.out.println(a + " " + b);
				break;
			}
			//System.out.println(a + " " + b);
		}
	}
}