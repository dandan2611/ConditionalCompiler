/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_lists
*/

#pragma once

#include <stddef.h>
#include <my_types.h>

//
// VECTORS
//

typedef struct {
    int elements;
    size_t element_size;
    void *data;
} vect_t;

/**
 * Create an empty vector with n elements of element_size size.
 * The vector is initialzed with n * element_size empty bytes.
 * If n is 0, the data of the vector is null.
*/
void *vector_create(int elements, size_t element_size);

/**
 * Get the index of the element in the specified vector.
*/
int vector_data_index(vect_t *vect, void *data);

/**
 * Get the element at the specified index.
*/
void *vector_get_index(vect_t *vect, int index);

/**
 * Copy the data element into the vector.
 * The data is not freed (use vector_fadd otherwise).
 * If the vector has enough space, the element is added at the end.
 * Otherwise, the vector is resized to the next power of 2.
*/
void vector_add(vect_t *vect, void *data);

/**
 * Same as vector_add but frees the original allocation.
*/
void vector_fadd(vect_t *vect, void *data);

/**
 * Remove the element at the specified index.
*/
void vector_remove_index(vect_t *vect, int index);

/**
 * Remove the first element that matches the data.
*/
void vector_remove_data(vect_t *vect, void *data);

/**
 * Free the vector content and clear its data.
 * The vector is not freed. (use vector_free otherwise).
*/
void vector_free_content(vect_t *vect);

/**
 * Free the vector and its content.
*/
void vector_free(vect_t *vect);
