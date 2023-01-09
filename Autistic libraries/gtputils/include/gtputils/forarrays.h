/*
 * File: forarrays.h
 * -----------------
 * Implements functions for manipulating arrays.
 */

#ifndef FOR_ARRAYS_H_
#define FOR_ARRAYS_H_

    #include <stdbool.h>
    #include <stdint.h>
    #include <stdlib.h>

    bool PushBackOnArray(void *, size_t *, void *, size_t);
    
    bool PopBackOnArray(void *, size_t *, size_t);

#endif/*FOR_ARRAYS_H_ */
