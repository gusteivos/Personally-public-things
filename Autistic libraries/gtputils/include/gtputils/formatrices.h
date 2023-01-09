/*
 * File: formatrices.h
 * -----------------
 * Implements functions for manipulating matrices.
 */

#ifndef FOR_MATRICES_H_
#define FOR_MATRICES_H_

    #include <stdlib.h>
    #include <stdint.h>

    void **CreateMatrix(uint32_t, uint32_t, size_t, size_t);

    void FreeMatrix(void **, uint32_t);

#endif
