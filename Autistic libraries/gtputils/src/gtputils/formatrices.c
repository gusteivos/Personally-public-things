#include <gtputils/formatrices.h>

void **CreateMatrix(uint32_t _number_of_rows, uint32_t _number_of_columns, size_t _type_pointer_size, size_t _type_size)
{

    if (_number_of_rows <= 0 || _number_of_columns <= 0 || _type_pointer_size == 0  || _type_size == 0 ) return NULL;

    void **_output_value = malloc(_number_of_rows * _type_pointer_size);

    if (_output_value == NULL) goto function_exit;
    
    for (int __q = 0; __q < _number_of_rows; __q++)
    {

        _output_value[__q] = malloc(_number_of_columns * _type_size);
    
        if (_output_value[__q] == NULL)
        {

            FreeMatrix(_output_value, __q - 1);

            goto function_exit;

        }

    }

function_exit:

    return _output_value;

}

void FreeMatrix(void **_matirx, uint32_t _number_rows_matrix)
{

    if (_matirx == NULL) return; 

    for (int _q = 0; _q < _number_rows_matrix; _q++)
    {
        
        free(_matirx[_q]);
    
        _matirx[_q] = NULL;

    }
    
    free(_matirx);

    _matirx = NULL;

}
