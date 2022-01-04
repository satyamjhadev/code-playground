//
//  main.cpp
//  calculate_net_salary
//
//  Created by satyam kumar jha on 28/12/21.
//

#include <iostream>
using namespace std;

int main() {
    cout<<"enter basic salary"<<'\n'<<" and percentage of allowances"<<'\n'<<" and percentages of deduction";
    
    int basic_salary,allowances;
    int percentages_of_deduction,net_salary;
    
    cin>>basic_salary;
    cin>>allowances>>endl;
    cin>>percentages_of_deduction>>endl;
    
    net_salary = basic_salary + basic_salary * percentages_of_allowances - basic_salary * percentages_of_deduction;
    
    cout<<net_salary<<endl;
    
    return 0;
    
    
}
