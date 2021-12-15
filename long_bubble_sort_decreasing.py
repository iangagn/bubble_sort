def long_bubble_sort_decreasing(arr):
  '''
  Performs long bubble sort with many swaps. It is referred to as
  'long' because it goes over elements that are already sorted at
  every cycle (i.e., range(len(arr) - 1))).

  This implementation sorts in decreasing order.

  Parameters
  ----------
  arr : ist, tuple or set
      An array.
      
  Returns nothing.
  '''

  is_swap = True
  while is_swap:
    is_swap = False
    for i in range(len(arr) - 1):
      if arr[i] < arr[i + 1]:
        arr[i], arr[i + 1] = arr[i + 1], arr[i]
        is_swap = True
