//Display number
import java.util.*;

class Program202
{
    public static void Display(int Brr[])
    {
        int iCnt=0;

        for(iCnt =0; iCnt < Brr.length;iCnt++)
        {
            System.out.print(Brr[iCnt]+"\t");
        }
        System.out.println();
    }
    public static void main(String Arg [])
    {
        Scanner sobj =new Scanner(System.in);

        int iSize =0, iCnt =0;

        System.out.println("Enter the number of element :");
        iSize = sobj.nextInt();

        int Arr[]= new int[iSize];

        System.out.println("Enter the element");
        for(iCnt =0; iCnt <iSize ;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }
         Display(Arr);

        sobj.close();
    }
}