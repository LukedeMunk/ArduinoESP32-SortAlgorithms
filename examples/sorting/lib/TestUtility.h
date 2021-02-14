/*
   File:      TestUtility.h
   Authors:   Luke de Munk
   Class:     TestUtility
   Version:   1.0

   Test utility test arrays.
*/
#ifndef TestUtility_H
#define TestUtility_H

void printList(int32_t list[], uint32_t n) {
    Serial.print("[");
    
    for (int32_t i = 0; i < n; i++) {
        Serial.print(list[i]);
        
        if (i == n-1) {
        Serial.println("]");
        } else {
        Serial.print(", ");
        }
    }
    delay(1);
}

void shuffle(int32_t list[], uint32_t n) {
    for (int32_t i = 0; i < n; i++) {

    }
}
#endif