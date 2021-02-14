/*
   File:      QuickSort.h
   Authors:   Luke de Munk
   Class:     QuickSort
   Version:   1.0

   QuickSort feature to sort arrays.
*/
#ifndef QuickSort_H
#define QuickSort_H

class QuickSort
{
  public:
    QuickSort() { }

    /**************************************************************************/
    /*!
        @brief  Sorts a list of elements.
        @param  list    Array of elements to be sorted
        @param  n       Length of the array
    */
    /**************************************************************************/
    void sort(int32_t list[], uint32_t n) {
        int32_t pi = _partition(list, 0, n-1);                                  //Retrieve partitioning index, list[p] is now at right place

        _sort(list, 0, pi - 1);                                                 //Separately sort elements before partition and after partition 
        _sort(list, pi + 1, n-1);
    }
    
  private:
    /**************************************************************************/
    /*!
        @brief  Partitons a part of the list.
        @param  list    Array of elements to be sorted
        @param  low     Low index of the partition
        @param  high    High index of the partition
    */
    /**************************************************************************/
    int32_t _partition(int32_t list[], int32_t low, int32_t high) {
        int32_t pivot = list[high];                                             //Choose random pivot (this time high index)
        int32_t i = (low - 1);                                                  //Index of smaller element

        /* For each element between low and high */
        for (int32_t j = low; j <= high - 1; j++) {
            if (list[j] < pivot) {                                              //If current element is smaller than the pivot
                i++;                                                            //Increment index of smaller element
                _swap(&list[i], &list[j]);                                      //Swap elements
            }
        }
        _swap(&list[i + 1], &list[high]);
        return (i + 1);
    }

    /**************************************************************************/
    /*!
        @brief  Sorts a list of elements (same as sort() except here is a low param).
        @param  list    Array of elements to be sorted
        @param  low     Low index to sort
        @param  high    High index to sort
    */
    /**************************************************************************/
    void _sort(int32_t list[], int32_t low, int32_t high) {
        if (low < high) {
            int32_t pi = _partition(list, low, high);                           //Retrieve partitioning index, list[p] is now at right place

            _sort(list, low, pi - 1);                                           //Separately sort elements before partition and after partition
            _sort(list, pi + 1, high);
        }
    }
    
    /**************************************************************************/
    /*!
        @brief  Swaps two values using their addresses.
        @param  a   First value
        @param  b   Second value
    */
    /**************************************************************************/
    void _swap(int32_t* a, int32_t* b) {
        int32_t t = *a;
        *a = *b;
        *b = t;
    }
};
#endif