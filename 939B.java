import java.util.Scanner;

public class B939
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		long n = in.nextLong();
		int k = in.nextInt();

		long[] a = new long[k];
		long[] rem = new long[k];

		int i;

		for(i=0;i<k;i++)
		{
			a[i] = in.nextLong();
			rem[i]=n%a[i];
		}

		long min=rem[0];
		int tmp=0;

		for(i=0;i<k;i++)
			if(min>=rem[i])
			{	
				min=rem[i];
				tmp=i;
			}
		//System.out.println(min);
		long count;

		n-=min;
		//System.out.println(n + " " + a[tmp]);
		count=n/a[tmp];
		System.out.println((tmp+1) + " " + count);

	}
}