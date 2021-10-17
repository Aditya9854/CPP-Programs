
 #include<iostream>
 #include<conio.h>
 using namespace std;

 class Sb_class
 {
       public :
               int Num1;
               float Per;

               static int Num2;

               Sb_class()                                           ///Default Constructor
               {
                       Num1 = Num2 = 0;
                       Per = 0.0;

                       cout<<"\n Inside Default Constructor.."<<endl;

               }

               Sb_class(int x)                                              ///Parameterised Constructor
               {
                       Num1 = x;
                       Num2 = x;

                       cout<<"\n Inside Parameterised Constructor..."<<endl;

               }

               void Modify()                                                   //Member Function
               {
                       Num1 = 66;
                       Num2 = 33;
                       Per  = 82.5;

                       cout<<"\n Inside Member Function Modify().."<<endl;
               }

               static void Zero_Out()                                           //Member Function
               {
                      // Num1 = 0;          //Not Allowed
                       Num2 = 0;
                      // Per  = 0.0;        //Not Allowed

                       cout<<"\n Inside Member Function Zero_Out()..."<<endl;
               }

               ~Sb_class()                                            //Destructor
               {
                       cout<<"\n Inside Destructor.."<<Num1<<endl;
               }

 };

 int Sb_class :: Num2 = 45;

 int main()
 {
          cout<<"\n Value Of Class Variable = "<<Sb_class :: Num2<<endl;

          Sb_class :: Zero_Out();

            cout<<"\n New Value Of Class Variable = "<<Sb_class ::Num2<<endl;

          Sb_class SObj1;

            cout<<"\n Object Values = "<<SObj1.Num1<<"==>>"<<SObj1.Num2<<"==>>"<<SObj1.Per<<endl;

          SObj1.Modify();

            cout<<"\n Object Values = "<<SObj1.Num1<<"==>>"<<SObj1.Num2<<"==>>"<<SObj1.Per<<endl;

          SObj1.Zero_Out();

            cout<<"\n Object Values = "<<SObj1.Num1<<"==>>"<<SObj1.Num2<<"==>>"<<SObj1.Per<<endl;

          getch();
          return 0;
 }


