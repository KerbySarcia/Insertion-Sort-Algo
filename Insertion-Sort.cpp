#include<iostream>
using namespace std;

int numbers[10];
int sizeOfNum = sizeof(numbers)/sizeof(numbers[0]);

void insertionSort(int num[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int currentItem = num[i];
        int comparePrev = i - 1;
        while(comparePrev >= 0 && num[comparePrev] > currentItem)
        {
            num[comparePrev + 1] = num[comparePrev];
            comparePrev--;
        }
        num[comparePrev+1] = currentItem;
    }
}

void printItems(int num[], int size)
{
    cout<<"Sorted: ";
    for(int i = 0; i < size; i++)
    {
        cout<<num[i]<<" ";
    }
}

void inputItems(int num[],int size)
{
    cout<<"Input 10 numbers: "<<endl;
    for(int i = 0; i< size; i++)
    {
        cout<<"#"<<i+1<<": ";
        cin>>num[i];
    }
}

int main()
{
    inputItems(numbers,sizeOfNum);
    insertionSort(numbers,sizeOfNum);
    printItems(numbers,sizeOfNum);
    return 0;
}