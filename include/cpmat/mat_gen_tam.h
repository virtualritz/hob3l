/* -*- Mode: C -*- */

#ifndef __CP_MAT_GEN_TAM_H
#define __CP_MAT_GEN_TAM_H

#include <cpmat/def.h>
#include <cpmat/vec.h>

typedef union {
    cp_dim_t v[2];
    struct {
        cp_dim_t x;
        cp_dim_t y;
    };
} cp_vec2_t;

typedef struct {
    cp_vec2_t min,max;
} cp_vec2_minmax_t;

typedef CP_VEC_T(cp_vec2_t) cp_v_vec2_t;
typedef CP_ARR_T(cp_vec2_t) cp_a_vec2_t;
typedef CP_VEC_T(cp_vec2_t*) cp_v_vec2_p_t;
typedef CP_ARR_T(cp_vec2_t*) cp_a_vec2_p_t;

typedef union {
    cp_dim_t v[3];
    struct {
        cp_dim_t x;
        cp_dim_t y;
        cp_dim_t z;
    };
    struct {
        cp_vec2_t b;
        cp_dim_t w;
    };
} cp_vec3_t;

typedef struct {
    cp_vec3_t min,max;
} cp_vec3_minmax_t;

typedef CP_VEC_T(cp_vec3_t) cp_v_vec3_t;
typedef CP_ARR_T(cp_vec3_t) cp_a_vec3_t;
typedef CP_VEC_T(cp_vec3_t*) cp_v_vec3_p_t;
typedef CP_ARR_T(cp_vec3_t*) cp_a_vec3_p_t;

typedef union {
    cp_dim_t v[4];
    struct {
        cp_dim_t x;
        cp_dim_t y;
        cp_dim_t z;
        cp_dim_t w;
    };
    struct {
        cp_vec3_t b;
    };
} cp_vec4_t;

typedef struct {
    cp_vec4_t min,max;
} cp_vec4_minmax_t;

typedef CP_VEC_T(cp_vec4_t) cp_v_vec4_t;
typedef CP_ARR_T(cp_vec4_t) cp_a_vec4_t;
typedef CP_VEC_T(cp_vec4_t*) cp_v_vec4_p_t;
typedef CP_ARR_T(cp_vec4_t*) cp_a_vec4_p_t;

typedef union {
    cp_dim_t v[2 * 2];
    cp_dim_t m[2][2];
    cp_vec2_t row[2];
} cp_mat2_t;

typedef CP_VEC_T(cp_mat2_t) cp_v_mat2_t;
typedef CP_ARR_T(cp_mat2_t) cp_a_mat2_t;
typedef CP_VEC_T(cp_mat2_t*) cp_v_mat2_p_t;
typedef CP_ARR_T(cp_mat2_t*) cp_a_mat2_p_t;

typedef struct {
    cp_dim_t v[2 * (2 + 1)];
    struct {
       cp_mat2_t b;
       cp_vec2_t w;
    };
} cp_mat2w_t;

typedef CP_VEC_T(cp_mat2w_t) cp_v_mat2w_t;
typedef CP_ARR_T(cp_mat2w_t) cp_a_mat2w_t;
typedef CP_VEC_T(cp_mat2w_t*) cp_v_mat2w_p_t;
typedef CP_ARR_T(cp_mat2w_t*) cp_a_mat2w_p_t;

typedef struct {
    cp_mat2_t n;
    cp_mat2_t i;
    cp_det_t d;
} cp_mat2i_t;

typedef CP_VEC_T(cp_mat2i_t) cp_v_mat2i_t;
typedef CP_ARR_T(cp_mat2i_t) cp_a_mat2i_t;
typedef CP_VEC_T(cp_mat2i_t*) cp_v_mat2i_p_t;
typedef CP_ARR_T(cp_mat2i_t*) cp_a_mat2i_p_t;

typedef struct {
    cp_mat2w_t n;
    cp_mat2w_t i;
    cp_det_t d;
} cp_mat2wi_t;

typedef CP_VEC_T(cp_mat2wi_t) cp_v_mat2wi_t;
typedef CP_ARR_T(cp_mat2wi_t) cp_a_mat2wi_t;
typedef CP_VEC_T(cp_mat2wi_t*) cp_v_mat2wi_p_t;
typedef CP_ARR_T(cp_mat2wi_t*) cp_a_mat2wi_p_t;

typedef union {
    cp_dim_t v[3 * 3];
    cp_dim_t m[3][3];
    cp_vec3_t row[3];
} cp_mat3_t;

typedef CP_VEC_T(cp_mat3_t) cp_v_mat3_t;
typedef CP_ARR_T(cp_mat3_t) cp_a_mat3_t;
typedef CP_VEC_T(cp_mat3_t*) cp_v_mat3_p_t;
typedef CP_ARR_T(cp_mat3_t*) cp_a_mat3_p_t;

typedef struct {
    cp_dim_t v[3 * (3 + 1)];
    struct {
       cp_mat3_t b;
       cp_vec3_t w;
    };
} cp_mat3w_t;

typedef CP_VEC_T(cp_mat3w_t) cp_v_mat3w_t;
typedef CP_ARR_T(cp_mat3w_t) cp_a_mat3w_t;
typedef CP_VEC_T(cp_mat3w_t*) cp_v_mat3w_p_t;
typedef CP_ARR_T(cp_mat3w_t*) cp_a_mat3w_p_t;

typedef struct {
    cp_mat3_t n;
    cp_mat3_t i;
    cp_det_t d;
} cp_mat3i_t;

typedef CP_VEC_T(cp_mat3i_t) cp_v_mat3i_t;
typedef CP_ARR_T(cp_mat3i_t) cp_a_mat3i_t;
typedef CP_VEC_T(cp_mat3i_t*) cp_v_mat3i_p_t;
typedef CP_ARR_T(cp_mat3i_t*) cp_a_mat3i_p_t;

typedef struct {
    cp_mat3w_t n;
    cp_mat3w_t i;
    cp_det_t d;
} cp_mat3wi_t;

typedef CP_VEC_T(cp_mat3wi_t) cp_v_mat3wi_t;
typedef CP_ARR_T(cp_mat3wi_t) cp_a_mat3wi_t;
typedef CP_VEC_T(cp_mat3wi_t*) cp_v_mat3wi_p_t;
typedef CP_ARR_T(cp_mat3wi_t*) cp_a_mat3wi_p_t;

typedef union {
    cp_dim_t v[4 * 4];
    cp_dim_t m[4][4];
    cp_vec4_t row[4];
} cp_mat4_t;

typedef CP_VEC_T(cp_mat4_t) cp_v_mat4_t;
typedef CP_ARR_T(cp_mat4_t) cp_a_mat4_t;
typedef CP_VEC_T(cp_mat4_t*) cp_v_mat4_p_t;
typedef CP_ARR_T(cp_mat4_t*) cp_a_mat4_p_t;

typedef struct {
    cp_mat4_t n;
    cp_mat4_t i;
    cp_det_t d;
} cp_mat4i_t;

typedef CP_VEC_T(cp_mat4i_t) cp_v_mat4i_t;
typedef CP_ARR_T(cp_mat4i_t) cp_a_mat4i_t;
typedef CP_VEC_T(cp_mat4i_t*) cp_v_mat4i_p_t;
typedef CP_ARR_T(cp_mat4i_t*) cp_a_mat4i_p_t;

#endif /* __CP_MAT_GEN_TAM_H */
