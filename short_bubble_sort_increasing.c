#define SWAP(a,b) ({int temp = a; a = b; b = temp;})

#define TRUE 1
#define FALSE 0

void short_bubble_sort_increasing(int* arr,
                                  const int length)
{
    /*
    Performs short bubble sort with many swaps. It is referred to as
    'short' because it doesn't go over the elements which are already 
    sorted (i.e., j < (length - end)).
    
    This implementation sorts in increasing order.
    
    Parameters
    ----------
    arr : int*
        An integer array.
        
    length : int
        Size of array.
        
    Returns nothing.
    */
    
    int end = 0;
    int is_swap = TRUE;
    
    while (is_swap)
    {
        is_swap = FALSE;
        for (int j = 1; j < (length - end); ++j)
        {
            if (arr[j-1] > arr[j])
            {
                SWAP(arr[j-1], arr[j]);
                is_swap = TRUE;
            }
        }
        ++end;
    }
}
