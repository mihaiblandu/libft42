//
// Created by mihai on 06.12.2020.
//
int peek(int *arr,int len){
    int temp;

    temp = -2147483647;
    while (--len)
        if(arr[len] > temp)
            temp = arr[len];
    return (temp);
}
int binary_search(int *arr,int start, int end,int target){

    if(end >= start){
        int mid =start + (end -start)/2;
        if(arr[mid] == target)
            return mid;
        if(arr[mid] > target)
            return binary_search(arr,start,mid-1,target);
        else
            return binary_search(arr,mid +1,end,target);
    }
    return -1;
}