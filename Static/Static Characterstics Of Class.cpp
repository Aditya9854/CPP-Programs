
 #include<iostream>
 #include<conio.h>
 using namespace std;

 class Stat
 {
    public :
            int Num1;
            float Per;

            static int Num2;

            Stat()                                             ///Defualt Constructor
            {
                 Num1 = Num2 = 0;
                 Per = 100;

                 cout<<"\n\n Inside Default Constructor.."<<endl;
            }

            Stat(int x)                                       ///Parameterisd Constructor
            {
                 Num1 = x;
                 Num2 = x;

                 cout<<"\n Inside Parameterised Constructor.."<<endl;

            }

            void modify()                                       //Member Function
            {
                 Num1 = 55;
                 Num2 = 21;

                 cout<<"\n\n Inside Member Function modify()..."<<endl;

            }

            static void Zero_Out()                             //Member Function
            {
              // Num1 = 0;          //Not Allowed
                 Num2 = 0;
               //Per = 0.0;           //Not Allowed

                 cout<<"\n\n Inside Member Function Zero_Out().."<<endl;

            }

            ~Stat()
            {

                 cout<<"\n Inside Destuctor.."<< Num1 <<endl;

            }

 };

 int Stat :: Num2 = 60;

 int main()
 {
        cout<<"\n\n Value Of Class Variable = "<<Stat :: Num2<<endl;

        Stat :: Zero_Out();

        cout<<"\n New Value Of Of Class Variable = "<<Stat :: Num2<<endl;

        Stat SObj;

        cout<<"\n Object Values = "<<SObj.Num1<<"==>>"<<SObj.Num2<<"==>>"<<SObj.Per<<endl;

        SObj.modify();

        cout<<"\n Object Values = "<<SObj.Num1<<"==>>"<<SObj.Num2<<"==>>"<<SObj.Per<<endl;

        SObj.Zero_Out();

        cout<<"\n Object Values = "<<SObj.Num1<<"==>>"<<SObj.Num2<<"==>>"<<SObj.Per<<endl;

        getch();
        return 0;

 }
