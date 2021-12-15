#define SWAP(a,b) ({int temp = a; a = b; b = temp;})

#define TRUE 1
#define FALSE 0

void long_bubble_sort_increasing(int* arr,
                                 const int length)
{
    /*
    Performs long bubble sort with many swaps. It is referred to as
    'long' because it goes over elements that are already sorted at
    every cycle (i.e., j < length).
    
    This implementation sorts in increasing order.
    
    Parameters
    ----------
    arr : int*
        An integer array.
        
    length : int
        Size of array.
        
    Returns nothing.
    */
    
    int is_swap = TRUE;
    
    while (is_swap)
    {
        is_swap = FALSE;
        for (int j = 1; j < length; ++j)
        {
            if (arr[j-1] > arr[j])
            {
                SWAP(arr[j-1], arr[j]);
                is_swap = TRUE;
            }
        }
    }
}
