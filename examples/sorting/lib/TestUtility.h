/*
   File:      TestUtility.h
   Authors:   Luke de Munk
   Class:     TestUtility
   Version:   1.0

   Test utility test arrays.
*/
#ifndef TestUtility_H
#define TestUtility_H

class TestUtility
{
  public:
    TestUtility() { }

    /**************************************************************************/
    /*!
        @brief  Prints a list of elements.
        @param  list    Array of elements to be sorted
        @param  n       Length of the array
    */
    /**************************************************************************/
    void printList(int32_t list[], uint32_t n) {
        Serial.print("[");
        for(int i = 0; i < n; i++) {
            Serial.print(list[i]);
            
            if (i == len-1) {
            Serial.println("]");
            } else {
            Serial.print(", ");
            }
        }
    }

  private:

};
#endif