#include <gtputils/forarrays.h>

bool PushBackOnArray(void *_array_pointer, size_t *_array_length, void *_element_pointer, size_t _element_size)
{

    if (_array_pointer == NULL || _element_pointer == NULL || _element_size == 0) return false;

    size_t _new_array_length = *_array_length + _element_size;

    void *_new_array = realloc(_array_pointer, _new_array_length); 

    if (_new_array == NULL) return false;

    for (size_t __q = 0; __q < _element_size; __q++)
    {

        ((char *)_new_array + *_array_length)[__q] = ((char *)_element_pointer)[__q];

    }

    _array_pointer = _new_array;

    *_array_length = _new_array_length;

    return true;

}

bool PopBackOnArray(void *_array_pointer, size_t *_array_length, size_t _element_size)
{

    if (_array_pointer == NULL || _array_length == NULL) return false;

    size_t _new_array_length = *_array_length - _element_size;

    void* _new_array = realloc(_array_pointer, _new_array_length);

    if (_new_array == NULL) return false;

    *_array_length = _new_array_length;

    return true;

}
