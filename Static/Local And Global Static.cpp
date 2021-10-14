//Local Static And Global Static Variable

 #include<iostream>
 #include<conio.h>
 using namespace std;

 int gNum = 31;                  //Global Static Variable

 void Fun()
 {
        int i =41;
        static int j = 51;
        cout<<"\n-------------------------------------------------------\n";
        cout<<"\n Value Of Non-Static Variable = "<< i <<endl;             //41 41 41 41
        cout<<"\n Value Of Local Static Variable = "<< j <<endl;           //51 52 53 54
        cout<<"\n Value Of Global Static Variable = "<< gNum <<endl;       //31 32 34 35
        cout<<"\n-------------------------------------------------------\n";

        i++;
        j++;
        gNum++;

        return;

 }
 int main()
 {
        Fun();
        Fun();

        gNum++;                //33

        Fun();
        Fun();

        getch();
        return 0;

 }
