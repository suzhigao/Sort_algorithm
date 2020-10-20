//https://blog.csdn.net/elma_tww/article/details/86164674
//quickSort 快速排序算法
#include <iostream>
using namespace std;

int quickSort(int begin, int end, int *arr) // arr：数组
{
    if(begin<end)
    {
        int i = begin;
        int j = end;
        int temp = arr[begin]; //以第一个数为基准

        while(i<j)
        {
            while(i<j && arr[j]>temp)
                j--;
            arr[i] = arr[j];
            
            while(i<j && arr[i]<=temp)
                i++;
            arr[j] = arr[i];
        }
        arr[i] = temp;
        //递归调用
        quickSort(i+1,end,arr);
        quickSort(begin,i-1,arr);
    }
    else
        return 0;
}

int main()
{
    int num = 12;
    int arr[12] = {23,45,17,11,13,89,72,26,3,17,11,13};
    quickSort(0,num-1,arr);
    for(int i=0; i<num; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
