#include<stdio.h>  
void mergeSort(int[],int,int);  
void merge(int[],int,int,int);  
void main ()  
{  
    int a[10]= {10, 9, 7, 101, 23, 44, 12, 78, 34, 23};  
    int i;  
    mergeSort(a,0,9);  
    printf("printing the sorted elements");  
    for(i=0;i<10;i++)  
    {  
        printf("\n%d\n",a[i]);  
    }  
      
}  
void mergeSort(int a[], int beg, int end)  
{  
    int mid;  
    if(beg<end)  
    {  
        mid = (beg+end)/2;  
        mergeSort(a,beg,mid);  
        mergeSort(a,mid+1,end);  
        merge(a,beg,mid,end);  
    }  
}  
void merge(int a[], int beg, int mid, int end)  
{  
    int i=beg,j=mid+1,k,index = beg;  
    int temp[10];  
    while(i<=mid && j<=end)  
    {  
        if(a[i]<a[j])  
        {  
            temp[index] = a[i];  
            i = i+1;  
        }  
        else   
        {  
            temp[index] = a[j];  
            j = j+1;   
        }  
        index++;  
    }  
    if(i>mid)  
    {  
        while(j<=end)  
        {  
            temp[index] = a[j];  
            index++;  
            j++;  
        }  
    }  
    else   
    {  
        while(i<=mid)  
        {  
            temp[index] = a[i];  
            index++;  
            i++;  
        }  
    }  
    k = beg;  
    while(k<index)  
    {  
        a[k]=temp[k];  
        k++;  
    }  
}  
Output:

printing the sorted elements 

7
9
10
12
23
23
34
44
78
101
Java Program
public class MyMergeSort  
{  
void merge(int arr[], int beg, int mid, int end)  
{  
  
int l = mid - beg + 1;  
int r = end - mid;  
  
intLeftArray[] = new int [l];  
intRightArray[] = new int [r];  
  
for (int i=0; i<l; ++i)  
LeftArray[i] = arr[beg + i];  
  
for (int j=0; j<r; ++j)  
RightArray[j] = arr[mid + 1+ j];  
  
  
int i = 0, j = 0;  
int k = beg;  
while (i<l&&j<r)  
{  
if (LeftArray[i] <= RightArray[j])  
{  
arr[k] = LeftArray[i];  
i++;  
}  
else  
{  
arr[k] = RightArray[j];  
j++;  
}  
k++;  
}  
while (i<l)  
{  
arr[k] = LeftArray[i];  
i++;  
k++;  
}  
  
while (j<r)  
{  
arr[k] = RightArray[j];  
j++;  
k++;  
}  
}  
  
void sort(int arr[], int beg, int end)  
{  
if (beg<end)  
{  
int mid = (beg+end)/2;  
sort(arr, beg, mid);  
sort(arr , mid+1, end);  
merge(arr, beg, mid, end);  
}  
}  
public static void main(String args[])  
{  
intarr[] = {90,23,101,45,65,23,67,89,34,23};  
MyMergeSort ob = new MyMergeSort();  
ob.sort(arr, 0, arr.length-1);  
  
System.out.println("\nSorted array");  
for(int i =0; i<arr.length;i++)  
{  
    System.out.println(arr[i]+"");  
}  
}  
}  
Output:

Sorted array 
23
23
23
34
45
65
67
89
90
101
C# Program
using System;  
public class MyMergeSort  
{  
void merge(int[] arr, int beg, int mid, int end)  
{  
  
int l = mid - beg + 1;  
int r = end - mid;  
        int i,j;  
  
int[] LeftArray = new int [l];  
int[] RightArray = new int [r];  
  
for (i=0; i<l; ++i)  
LeftArray[i] = arr[beg + i];  
  
for (j=0; j<r; ++j)  
RightArray[j] = arr[mid + 1+ j];  
  
  
i = 0; j = 0;  
int k = beg;  
while (i < l && j < r)  
{  
if (LeftArray[i] <= RightArray[j])  
{  
arr[k] = LeftArray[i];  
i++;  
}  
else  
{  
arr[k] = RightArray[j];  
j++;  
}  
k++;  
}  
while (i < l)  
{  
arr[k] = LeftArray[i];  
i++;  
k++;  
}  
  
while (j < r)  
{  
arr[k] = RightArray[j];  
j++;  
k++;  
}  
}  
  
void sort(int[] arr, int beg, int end)  
{  
if (beg < end)  
{  
int mid = (beg+end)/2;  
sort(arr, beg, mid);  
sort(arr , mid+1, end);  
merge(arr, beg, mid, end);  
}  
}  
public static void Main()  
{  
int[] arr = {90,23,101,45,65,23,67,89,34,23};  
MyMergeSort ob = new MyMergeSort();  
ob.sort(arr, 0, 9);  
  
Console.WriteLine("\nSorted array");  
for(int i =0; i<10;i++)  
{  
    Console.WriteLine(arr[i]+"");  
}  
}  
}  
