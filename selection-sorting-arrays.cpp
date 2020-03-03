/* Selection sort using arrays */

#include<iostream>

/* Array operations */
class myArray
{
    int size = 0;
    int arr[5] = {0};
    public:
    myArray();
    void sortArray();
    void swap(int *, int *);
    void displayArray();
};
 /* Define array */
myArray::myArray()
{
    std::cout<<"Enter size of array";
    std::cin>>size;
    for(int i = 0; i < size; ++i)
    {
       std::cout<<"Enter array at index "<<i;
       std::cin>>arr[i];
       std::cout<<std::endl;;
    }
}

/* Swapping of array elements */
void myArray::swap(int *max, int *min)
{
    int temp = *max;
    *max = *min;
    *min = temp;
}

/* Selection Sort operation */
void myArray::sortArray()
{
    int minimum;
    for(int i = 0; i < size; ++i)
    {
        minimum = i;
        for(int j = i+1; j < size; ++j)
        {
            if(arr[minimum] > arr[j])
                minimum = j;
        }
        swap(&arr[i],&arr[minimum]);
    }
}

/* Display array */
void myArray::displayArray()
{
    for(int i = 0; i < size; ++i)
        std::cout<<arr[i]<<" ";
    std::cout<<std::endl<<"--------------";
    std::cout<<std::endl;
}

int main()
{
    myArray m;
    m.displayArray();
    m.sortArray();
    m.displayArray();
    return 0;
}