/* -*- Mode: C -*- */

#ifndef __CP_MAT_GEN_H
#define __CP_MAT_GEN_H

#include <cpmat/stream_tam.h>
#include <cpmat/mat_gen_tam.h>

extern void cp_vec2_rev(
    cp_vec2_t * r,
    cp_vec2_t const* a);

extern void cp_vec3_rev(
    cp_vec3_t * r,
    cp_vec3_t const* a);

extern void cp_vec4_rev(
    cp_vec4_t * r,
    cp_vec4_t const* a);

extern void cp_vec2_add(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_vec2_t const* b);

extern void cp_vec3_add(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_vec3_t const* b);

extern void cp_vec4_add(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_vec4_t const* b);

extern void cp_vec2_neg(
    cp_vec2_t * r,
    cp_vec2_t const* a);

extern void cp_vec3_neg(
    cp_vec3_t * r,
    cp_vec3_t const* a);

extern void cp_vec4_neg(
    cp_vec4_t * r,
    cp_vec4_t const* a);

extern void cp_vec2_sub(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_vec2_t const* b);

extern void cp_vec3_sub(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_vec3_t const* b);

extern void cp_vec4_sub(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_vec4_t const* b);

extern void cp_vec2_mul(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_scale_t b);

extern void cp_vec3_mul(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_scale_t b);

extern void cp_vec4_mul(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_scale_t b);

extern void cp_vec2_div(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_scale_t b);

extern void cp_vec3_div(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_scale_t b);

extern void cp_vec4_div(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_scale_t b);

extern cp_sqrdim_t cp_vec2_dot(
    cp_vec2_t const* a,
    cp_vec2_t const* b);

extern cp_sqrdim_t cp_vec3_dot(
    cp_vec3_t const* a,
    cp_vec3_t const* b);

extern cp_sqrdim_t cp_vec4_dot(
    cp_vec4_t const* a,
    cp_vec4_t const* b);

extern void cp_vec2_min(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_vec2_t const* b);

extern void cp_vec3_min(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_vec3_t const* b);

extern void cp_vec4_min(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_vec4_t const* b);

extern void cp_vec2_max(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_vec2_t const* b);

extern void cp_vec3_max(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_vec3_t const* b);

extern void cp_vec4_max(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_vec4_t const* b);

extern void cp_vec2_minmax(
    cp_vec2_minmax_t * r,
    cp_vec2_t const* a);

extern void cp_vec3_minmax(
    cp_vec3_minmax_t * r,
    cp_vec3_t const* a);

extern void cp_vec4_minmax(
    cp_vec4_minmax_t * r,
    cp_vec4_t const* a);

extern cp_dim_t cp_vec2_max_abs_coord(
    cp_vec2_t const* a);

extern cp_dim_t cp_vec3_max_abs_coord(
    cp_vec3_t const* a);

extern cp_dim_t cp_vec4_max_abs_coord(
    cp_vec4_t const* a);

extern bool cp_vec2_has_len0(
    cp_vec2_t const* a);

extern bool cp_vec3_has_len0(
    cp_vec3_t const* a);

extern bool cp_vec4_has_len0(
    cp_vec4_t const* a);

extern bool cp_vec2_unit(
    cp_vec2_t * r,
    cp_vec2_t const* a);

extern bool cp_vec3_unit(
    cp_vec3_t * r,
    cp_vec3_t const* a);

extern bool cp_vec4_unit(
    cp_vec4_t * r,
    cp_vec4_t const* a);

extern cp_sqrdim_t cp_vec2_sqr_dist(
    cp_vec2_t const* a,
    cp_vec2_t const* b);

extern cp_sqrdim_t cp_vec3_sqr_dist(
    cp_vec3_t const* a,
    cp_vec3_t const* b);

extern cp_sqrdim_t cp_vec4_sqr_dist(
    cp_vec4_t const* a,
    cp_vec4_t const* b);

extern void cp_vec2_lerp(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_vec2_t const* b,
    cp_scale_t c);

extern void cp_vec3_lerp(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_vec3_t const* b,
    cp_scale_t c);

extern void cp_vec4_lerp(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_vec4_t const* b,
    cp_scale_t c);

extern void cp_vec2_dir(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_vec2_t const* b);

extern void cp_vec3_dir(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_vec3_t const* b);

extern void cp_vec4_dir(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_vec4_t const* b);

extern void cp_vec2_xform(
    cp_vec2_t * r,
    cp_mat2_t const* a,
    cp_vec2_t const* b);

extern void cp_vec2w_xform(
    cp_vec2_t *r,
    cp_mat2w_t const *m,
    cp_vec2_t const *v);

extern void cp_vec3_xform(
    cp_vec3_t * r,
    cp_mat3_t const* a,
    cp_vec3_t const* b);

extern void cp_vec3w_xform(
    cp_vec3_t *r,
    cp_mat3w_t const *m,
    cp_vec3_t const *v);

extern void cp_vec4_xform(
    cp_vec4_t * r,
    cp_mat4_t const* a,
    cp_vec4_t const* b);

extern void cp_vec2_put(
    cp_stream_t* s,
    cp_vec2_t const* a);

extern void cp_vec3_put(
    cp_stream_t* s,
    cp_vec3_t const* a);

extern void cp_vec4_put(
    cp_stream_t* s,
    cp_vec4_t const* a);

extern void cp_mat2_put(
    cp_stream_t* s,
    cp_mat2_t const* a);

extern void cp_mat2w_put(
    cp_stream_t* s,
    cp_mat2w_t const* a);

extern void cp_mat2i_put(
    cp_stream_t* s,
    cp_mat2i_t const* a);

extern void cp_mat2wi_put(
    cp_stream_t* s,
    cp_mat2wi_t const* a);

extern void cp_mat3_put(
    cp_stream_t* s,
    cp_mat3_t const* a);

extern void cp_mat3w_put(
    cp_stream_t* s,
    cp_mat3w_t const* a);

extern void cp_mat3i_put(
    cp_stream_t* s,
    cp_mat3i_t const* a);

extern void cp_mat3wi_put(
    cp_stream_t* s,
    cp_mat3wi_t const* a);

extern void cp_mat4_put(
    cp_stream_t* s,
    cp_mat4_t const* a);

extern void cp_mat4i_put(
    cp_stream_t* s,
    cp_mat4i_t const* a);

extern void cp_mat2i_scale(
    cp_mat2i_t * r,
    cp_scale_t x,
    cp_scale_t y);

extern void cp_mat2wi_scale(
    cp_mat2wi_t * r,
    cp_scale_t x,
    cp_scale_t y);

extern void cp_mat3i_scale(
    cp_mat3i_t * r,
    cp_scale_t x,
    cp_scale_t y,
    cp_scale_t z);

extern void cp_mat3wi_scale(
    cp_mat3wi_t * r,
    cp_scale_t x,
    cp_scale_t y,
    cp_scale_t z);

extern void cp_mat4i_scale(
    cp_mat4i_t * r,
    cp_scale_t x,
    cp_scale_t y,
    cp_scale_t z);

extern void cp_mat2_trans(
    cp_mat2_t * r,
    cp_mat2_t const* a);

extern bool cp_mat2w_trans(
    cp_mat2w_t * r,
    cp_mat2w_t const* a);

extern void cp_mat2i_trans(
    cp_mat2i_t * r,
    cp_mat2i_t const* a);

extern bool cp_mat2wi_trans(
    cp_mat2wi_t * r,
    cp_mat2wi_t const* a);

extern void cp_mat3_trans(
    cp_mat3_t * r,
    cp_mat3_t const* a);

extern bool cp_mat3w_trans(
    cp_mat3w_t * r,
    cp_mat3w_t const* a);

extern void cp_mat3i_trans(
    cp_mat3i_t * r,
    cp_mat3i_t const* a);

extern bool cp_mat3wi_trans(
    cp_mat3wi_t * r,
    cp_mat3wi_t const* a);

extern void cp_mat4_trans(
    cp_mat4_t * r,
    cp_mat4_t const* a);

extern void cp_mat4i_trans(
    cp_mat4i_t * r,
    cp_mat4i_t const* a);

extern void cp_mat3i_rot_unit(
    cp_mat3i_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc);

extern void cp_mat3wi_rot_unit(
    cp_mat3wi_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc);

extern void cp_mat4i_rot_unit(
    cp_mat4i_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc);

extern void cp_mat3_rot_v(
    cp_mat3_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc);

extern void cp_mat3w_rot_v(
    cp_mat3w_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc);

extern void cp_mat3i_rot_v(
    cp_mat3i_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc);

extern void cp_mat3wi_rot_v(
    cp_mat3wi_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc);

extern void cp_mat4_rot_v(
    cp_mat4_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc);

extern void cp_mat4i_rot_v(
    cp_mat4i_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc);

extern void cp_mat3i_rot_unit_into_z(
    cp_mat3i_t * r,
    cp_vec3_t const* v);

extern void cp_mat3wi_rot_unit_into_z(
    cp_mat3wi_t * r,
    cp_vec3_t const* v);

extern void cp_mat4i_rot_unit_into_z(
    cp_mat4i_t * r,
    cp_vec3_t const* v);

extern void cp_mat3_rot_into_z(
    cp_mat3_t * r,
    cp_vec3_t const* v);

extern void cp_mat3w_rot_into_z(
    cp_mat3w_t * r,
    cp_vec3_t const* v);

extern void cp_mat3i_rot_into_z(
    cp_mat3i_t * r,
    cp_vec3_t const* v);

extern void cp_mat3wi_rot_into_z(
    cp_mat3wi_t * r,
    cp_vec3_t const* v);

extern void cp_mat4_rot_into_z(
    cp_mat4_t * r,
    cp_vec3_t const* v);

extern void cp_mat4i_rot_into_z(
    cp_mat4i_t * r,
    cp_vec3_t const* v);

extern void cp_mat2_rot_ij(
    cp_mat2_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc);

extern void cp_mat2i_rot_ij(
    cp_mat2i_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc);

extern void cp_mat2wi_rot_ij(
    cp_mat2wi_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc);

extern void cp_mat3_rot_ij(
    cp_mat3_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc);

extern void cp_mat3i_rot_ij(
    cp_mat3i_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc);

extern void cp_mat3wi_rot_ij(
    cp_mat3wi_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc);

extern void cp_mat4_rot_ij(
    cp_mat4_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc);

extern void cp_mat4i_rot_ij(
    cp_mat4i_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc);

extern void cp_mat3i_rot_x(
    cp_mat3i_t * r,
    cp_vec2_t const* sc);

extern void cp_mat3wi_rot_x(
    cp_mat3wi_t * r,
    cp_vec2_t const* sc);

extern void cp_mat4i_rot_x(
    cp_mat4i_t * r,
    cp_vec2_t const* sc);

extern void cp_mat3i_rot_y(
    cp_mat3i_t * r,
    cp_vec2_t const* sc);

extern void cp_mat3wi_rot_y(
    cp_mat3wi_t * r,
    cp_vec2_t const* sc);

extern void cp_mat4i_rot_y(
    cp_mat4i_t * r,
    cp_vec2_t const* sc);

extern void cp_mat2i_rot(
    cp_mat2i_t * r,
    cp_vec2_t const* sc);

extern void cp_mat2wi_rot(
    cp_mat2wi_t * r,
    cp_vec2_t const* sc);

extern void cp_mat3i_rot_z(
    cp_mat3i_t * r,
    cp_vec2_t const* sc);

extern void cp_mat3wi_rot_z(
    cp_mat3wi_t * r,
    cp_vec2_t const* sc);

extern void cp_mat4i_rot_z(
    cp_mat4i_t * r,
    cp_vec2_t const* sc);

extern void cp_mat2i_mirror_unit(
    cp_mat2i_t * r,
    cp_vec2_t const* v);

extern void cp_mat2wi_mirror_unit(
    cp_mat2wi_t * r,
    cp_vec2_t const* v);

extern void cp_mat3i_mirror_unit(
    cp_mat3i_t * r,
    cp_vec3_t const* v);

extern void cp_mat3wi_mirror_unit(
    cp_mat3wi_t * r,
    cp_vec3_t const* v);

extern void cp_mat4i_mirror_unit(
    cp_mat4i_t * r,
    cp_vec3_t const* v);

extern void cp_mat2_mirror_v(
    cp_mat2_t * r,
    cp_vec2_t const* v);

extern void cp_mat2w_mirror_v(
    cp_mat2w_t * r,
    cp_vec2_t const* v);

extern void cp_mat2i_mirror_v(
    cp_mat2i_t * r,
    cp_vec2_t const* v);

extern void cp_mat2wi_mirror_v(
    cp_mat2wi_t * r,
    cp_vec2_t const* v);

extern void cp_mat3_mirror_v(
    cp_mat3_t * r,
    cp_vec3_t const* v);

extern void cp_mat3w_mirror_v(
    cp_mat3w_t * r,
    cp_vec3_t const* v);

extern void cp_mat3i_mirror_v(
    cp_mat3i_t * r,
    cp_vec3_t const* v);

extern void cp_mat3wi_mirror_v(
    cp_mat3wi_t * r,
    cp_vec3_t const* v);

extern void cp_mat4_mirror_v(
    cp_mat4_t * r,
    cp_vec3_t const* v);

extern void cp_mat4i_mirror_v(
    cp_mat4i_t * r,
    cp_vec3_t const* v);

extern void cp_mat2_mul(
    cp_mat2_t * r,
    cp_mat2_t const* a,
    cp_mat2_t const* b);

extern void cp_mat2w_mul(
    cp_mat2w_t * r,
    cp_mat2w_t const* a,
    cp_mat2w_t const* b);

extern void cp_mat2i_mul(
    cp_mat2i_t * r,
    cp_mat2i_t const* a,
    cp_mat2i_t const* b);

extern void cp_mat2wi_mul(
    cp_mat2wi_t * r,
    cp_mat2wi_t const* a,
    cp_mat2wi_t const* b);

extern void cp_mat3_mul(
    cp_mat3_t * r,
    cp_mat3_t const* a,
    cp_mat3_t const* b);

extern void cp_mat3w_mul(
    cp_mat3w_t * r,
    cp_mat3w_t const* a,
    cp_mat3w_t const* b);

extern void cp_mat3i_mul(
    cp_mat3i_t * r,
    cp_mat3i_t const* a,
    cp_mat3i_t const* b);

extern void cp_mat3wi_mul(
    cp_mat3wi_t * r,
    cp_mat3wi_t const* a,
    cp_mat3wi_t const* b);

extern void cp_mat4_mul(
    cp_mat4_t * r,
    cp_mat4_t const* a,
    cp_mat4_t const* b);

extern void cp_mat4i_mul(
    cp_mat4i_t * r,
    cp_mat4i_t const* a,
    cp_mat4i_t const* b);

extern __wur cp_det_t cp_mat2_inv(
    cp_mat2_t * r,
    cp_mat2_t const* a);

extern __wur cp_det_t cp_mat2w_inv(
    cp_mat2w_t * r,
    cp_mat2w_t const* a);

extern void cp_mat2i_inv(
    cp_mat2i_t * r,
    cp_mat2i_t const* a);

extern void cp_mat2wi_inv(
    cp_mat2wi_t * r,
    cp_mat2wi_t const* a);

extern __wur cp_det_t cp_mat3_inv(
    cp_mat3_t * r,
    cp_mat3_t const* a);

extern __wur cp_det_t cp_mat3w_inv(
    cp_mat3w_t * r,
    cp_mat3w_t const* a);

extern void cp_mat3i_inv(
    cp_mat3i_t * r,
    cp_mat3i_t const* a);

extern void cp_mat3wi_inv(
    cp_mat3wi_t * r,
    cp_mat3wi_t const* a);

extern __wur cp_det_t cp_mat4_inv(
    cp_mat4_t * r,
    cp_mat4_t const* a);

extern void cp_mat4i_inv(
    cp_mat4i_t * r,
    cp_mat4i_t const* a);

extern cp_det_t cp_mat2_det(
    cp_mat2_t const* a);

extern cp_det_t cp_mat2w_det(
    cp_mat2w_t const* a);

extern cp_det_t cp_mat3_det(
    cp_mat3_t const* a);

extern cp_det_t cp_mat3w_det(
    cp_mat3w_t const* a);

extern cp_det_t cp_mat4_det(
    cp_mat4_t const* a);

#endif /* __CP_MAT_GEN_H */
