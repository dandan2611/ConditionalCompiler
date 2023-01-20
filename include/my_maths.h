/*
** EPITECH PROJECT, 2022
** BetterLibMy
** File description:
** my_numerics
*/

#pragma once

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? -(a) : (a))

#define FSQRT_PRECISION (0.0001)

//
// Basic calculations
//


long long my_lpow(long long nb, int pow);

long long my_lsqrt(long long nb);

long long my_lfactorial(long long nb);

int my_nbr_len(long long nb);

float my_fpow(float nb, int pow);

float my_fsqrt(float nb);

float my_ffactorial(float nb);

//
// Vectors
//

typedef struct vector2f {
    float x;
    float y;
} vector2f_t;

vector2f_t *vector2f_create(float x, float y);
vector2f_t *vector2f_dup(vector2f_t *vector);
vector2f_t *vector2f_init(vector2f_t *vector, float x, float y);
vector2f_t *vector2f_addv(vector2f_t *vector, vector2f_t *other);
vector2f_t *vector2f_addn(vector2f_t *vector, float x, float y);
vector2f_t *vector2f_subv(vector2f_t *vector, vector2f_t *other);
vector2f_t *vector2f_subn(vector2f_t *vector, float x, float y);
vector2f_t *vector2f_mulv(vector2f_t *vector, vector2f_t *other);
vector2f_t *vector2f_muln(vector2f_t *vector, float x, float y);
vector2f_t *vector2f_divv(vector2f_t *vector, vector2f_t *other);
vector2f_t *vector2f_divn(vector2f_t *vector, float x, float y);
vector2f_t *vector2f_normalize(vector2f_t *vector);
float vector2f_norm(vector2f_t *vector);
