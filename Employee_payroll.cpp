#include<iostream>
using namespace std;
class SalarySlip {
    private:
      int empID;
      char name[30];
float basic,hra,pf,gross,net;
    public:
    void getdata(){
    cout<<"Enter Employee ID:";
    cin>>empID;
    cout<<"Enter Employee Name:";
    cin>>name;
    cout<<"Enter Basic Salary:";
    cin>>basic;
}
void calculate(){
    hra = basic*0.20;
    pf  = basic*0.08;
    gross = basic+hra;
    net = gross - pf;
}
void display(){
    cout<< "\n ~ SALARY SLIP ~ \n";
    cout<<"EmployeeID:"<<empID<<endl;
    cout<<"Employee Name:"<<name<<endl;
    cout<<"Basic Salary:"<<basic<<endl;
    cout<<"HRA(20%):"<<hra<<endl;
    cout<<"PF(8%):"<<pf<<endl;
    cout<<"Gross Salary:"<<gross<<endl;
    cout<<"Net Salary:"<<net<<endl;
}
};
int main(){
    SalarySlip emp;
    emp.getdata();
    emp.calculate();
    emp.display();
    return 0;
}