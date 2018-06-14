import java.util.Scanner;

public class B977
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		String s = in.next();

		String[] all = new String[n-1];
		int i, j=0;

		//all[0] = s.substring(0,2);
		//System.out.println(all[0]); 

		for(i=0;i<n-1;i++)
		{
			all[j]=s.substring(i,i+2);
			//System.out.println(all[j]);;
			j++;
		}

		int[] count = new int[n-1];

		for(i=0;i<n-1;i++)
			count[i]=0;

		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1;j++)
			{	
				if((all[i].equals(all[j])))
					count[i]++;
				//System.out.println("i: " + i + "  j: " + j + "  count: " + count[i] + "  " + all[i] + " " + all[j]);
			}
		}

		/*for(i=0;i<n-1;i++)
			System.out.println(count[i]);*/

		int max = 0;
		for(i=1;i<n-1;i++)
			if(count[max]<=count[i])
				max=i;

		System.out.println(all[max]);
	}
}