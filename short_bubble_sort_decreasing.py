def short_bubble_sort_decreasing(arr):
  '''
  Performs long bubble sort with many swaps. It is referred to as
  'short' because it does not go over elements that are already 
  sorted every cycle (i.e., range(len(arr) - 1 - end))).

  This implementation sorts in decreasing order.

  Parameters
  ----------
  arr : ist, tuple or set
      An array.
      
  Returns nothing.
  '''

  end = 0
  is_swap = True
  while is_swap:
    is_swap = False
    for i in range(len(arr) - 1 - end):
      if arr[i] < arr[i + 1]:
        arr[i], arr[i + 1] = arr[i + 1], arr[i]
        is_swap = True
    end += 1
