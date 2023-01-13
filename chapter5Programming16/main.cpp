#include <iostream>

using namespace std;

int main() {
    double startingBalance,
            addDeposited,
            withdrawnAmount,
            mouths,
            balance,
            interest,
            annualInterestRate;
    cout<<"How much money you have in your account in the beginning?";
    cin>>startingBalance;
    while(startingBalance<0){
        cout<<"Enter a positive amount";
        cin>>startingBalance;
    }

    cout<<"How many mouths you want to save your money in this account?";
    cin>>mouths;
    while(mouths<0){
        cout<<"Enter a positive mouths";
        cin>>mouths;
    }
    cout<<"What is the annual interest rate?";
    cin>>annualInterestRate;
    while(annualInterestRate<0){
        cout<<"Enter a positive amount.";
        cin>>annualInterestRate;
    }

    balance=startingBalance;
    for(int i=1;i<=mouths; i++){
        cout<<"How much money you want to save in the account in this mouth?"<<i<<":";
        cin>>addDeposited;
        while(addDeposited<0){
            cout<<"Enter a positive amount";
            cin>>addDeposited;
        }
        cout<<"How much money you want to with drawn this mouth?"<<i<<":";
        cin>>withdrawnAmount;
        while(withdrawnAmount<0){
            cout<<"Enter a positive amount";
            cin>>withdrawnAmount;
        }
        balance=(balance+addDeposited-withdrawnAmount)*(1+annualInterestRate/12);
        interest=(balance+addDeposited-withdrawnAmount)*(annualInterestRate/12);
        cout<<"Mouth "<<i<<"You have balance $ "<<balance<<endl;
        cout<<"You have earned $"<<interest<<" in "<<i<<"mounths"<<endl;

    }






    return 0;
}
