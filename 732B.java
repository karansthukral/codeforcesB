import java.util.Scanner;

public class B732
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int k = in.nextInt();

		int[] a = new int[n];
		int[] b = new int[n];
		int cf=0, cb=0, tmp, i;
	
		for(i=0;i<n;i++)
		{
			a[i]=in.nextInt();
			b[i]=a[i];
		}

		for(i=0;i<n-1;i++)
		{
			tmp=a[i]+a[i+1];
			if(tmp<k)
			{
				cf+=k-tmp;
				a[i+1]+=k-tmp;
			}
		}

		/*for(i=n-1;i>=1;i--)
		{
			tmp=b[i]+b[i-1];
			if(tmp<k)
			{
				cb+=k-tmp;
				b[i-1]+=k-tmp;
			}
		}*/

		System.out.println(cf);
		for(i=0;i<n;i++)
			System.out.print(a[i] + " ");

	}
}