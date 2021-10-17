
 #include<iostream>
 #include<conio.h>
 using namespace std;

 class Stat
 {
       public :
               int Num1;
               float Per;

               static int Num2;

               Stat()                                           ///Default Constructor
               {
                       Num1 = Num2 = 0;
                       Per = 100;

                       cout<<"\n Inside Default Constructor.."<<endl;

               }

               Stat(int x)                                              ///Parameterised Constructor
               {
                       Num1 = x;
                       Num2 = x;

                       cout<<"\n Inside Parameterised Constructor..."<<endl;

               }

               void Modify()                                                   //Member Function
               {
                       Num1 = 83;
                       Num2 = 45;
                       Per  = 83.9;

                       cout<<"\n Inside Member Function Modify().."<<endl;
               }

               static void Zero_Out()                                           //Member Function
               {
                      // Num1 = 0;          //Not Allowed
                       Num2 = 0;
                      // Per  = 0.0;        //Not Allowed

                       cout<<"\n Inside Member Function Zero_Out()..."<<endl;
               }

               ~Stat()                                            //Destructor
               {
                       cout<<"\n Inside Destructor.."<<Num1<<endl;
               }

 };

 int Stat :: Num2 = 18;

 int main()
 {
          int No1 = 35;
          static int No2 = 77;

          Stat SObj1;
          static Stat SObj2;

            cout<<"\n Object Values = "<<SObj1.Num1<<"==>>"<<SObj1.Num2<<"==>>"<<SObj1.Per<<endl;

          SObj1.Modify();

            cout<<"\n Object Values = "<<SObj1.Num1<<"==>>"<<SObj1.Num2<<"==>>"<<SObj1.Per<<endl;

          SObj2.Modify();

            cout<<"\n Object Values = "<<SObj2.Num1<<"==>>"<<SObj2.Num2<<"==>>"<<SObj2.Per<<endl;

          SObj2.Zero_Out();

            cout<<"\n Object Values = "<<SObj2.Num1<<"==>>"<<SObj2.Num2<<"==>>"<<SObj2.Per<<endl;

          getch();
          return 0;

 }
