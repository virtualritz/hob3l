/* -*- Mode: C -*- */

#include <cpmat/arith.h>
#include <cpmat/algo.h>
#include <cpmat/stream.h>
#include <cpmat/mat_tam.h>
#include <cpmat/mat_gen_tam.h>
#include <cpmat/mat_gen_ext.h>
#include <cpmat/mat_gen_inl.h>

extern void cp_vec2_rev(
    cp_vec2_t * r,
    cp_vec2_t const* a)
{
    cp_dim_t h;
    h = a->v[0];
    r->v[0] = a->v[1];
    r->v[1] = h;
}

extern void cp_vec3_rev(
    cp_vec3_t * r,
    cp_vec3_t const* a)
{
    cp_dim_t h;
    h = a->v[0];
    r->v[0] = a->v[2];
    r->v[2] = h;
    r->v[1] = a->v[1];
}

extern void cp_vec4_rev(
    cp_vec4_t * r,
    cp_vec4_t const* a)
{
    cp_dim_t h;
    h = a->v[0];
    r->v[0] = a->v[3];
    r->v[3] = h;
    h = a->v[1];
    r->v[1] = a->v[2];
    r->v[2] = h;
}

extern void cp_vec2_add(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_vec2_t const* b)
{
    r->v[0] = a->v[0] + b->v[0];
    r->v[1] = a->v[1] + b->v[1];
}

extern void cp_vec3_add(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_vec3_t const* b)
{
    r->v[0] = a->v[0] + b->v[0];
    r->v[1] = a->v[1] + b->v[1];
    r->v[2] = a->v[2] + b->v[2];
}

extern void cp_vec4_add(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_vec4_t const* b)
{
    r->v[0] = a->v[0] + b->v[0];
    r->v[1] = a->v[1] + b->v[1];
    r->v[2] = a->v[2] + b->v[2];
    r->v[3] = a->v[3] + b->v[3];
}

extern void cp_vec2_neg(
    cp_vec2_t * r,
    cp_vec2_t const* a)
{
    r->v[0] = -a->v[0];
    r->v[1] = -a->v[1];
}

extern void cp_vec3_neg(
    cp_vec3_t * r,
    cp_vec3_t const* a)
{
    r->v[0] = -a->v[0];
    r->v[1] = -a->v[1];
    r->v[2] = -a->v[2];
}

extern void cp_vec4_neg(
    cp_vec4_t * r,
    cp_vec4_t const* a)
{
    r->v[0] = -a->v[0];
    r->v[1] = -a->v[1];
    r->v[2] = -a->v[2];
    r->v[3] = -a->v[3];
}

extern void cp_vec2_sub(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_vec2_t const* b)
{
    r->v[0] = a->v[0] - b->v[0];
    r->v[1] = a->v[1] - b->v[1];
}

extern void cp_vec3_sub(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_vec3_t const* b)
{
    r->v[0] = a->v[0] - b->v[0];
    r->v[1] = a->v[1] - b->v[1];
    r->v[2] = a->v[2] - b->v[2];
}

extern void cp_vec4_sub(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_vec4_t const* b)
{
    r->v[0] = a->v[0] - b->v[0];
    r->v[1] = a->v[1] - b->v[1];
    r->v[2] = a->v[2] - b->v[2];
    r->v[3] = a->v[3] - b->v[3];
}

extern void cp_vec2_mul(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_scale_t b)
{
    r->v[0] = a->v[0] * b;
    r->v[1] = a->v[1] * b;
}

extern void cp_vec3_mul(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_scale_t b)
{
    r->v[0] = a->v[0] * b;
    r->v[1] = a->v[1] * b;
    r->v[2] = a->v[2] * b;
}

extern void cp_vec4_mul(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_scale_t b)
{
    r->v[0] = a->v[0] * b;
    r->v[1] = a->v[1] * b;
    r->v[2] = a->v[2] * b;
    r->v[3] = a->v[3] * b;
}

extern void cp_vec2_div(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_scale_t b)
{
    r->v[0] = cp_div0(a->v[0], b);
    r->v[1] = cp_div0(a->v[1], b);
}

extern void cp_vec3_div(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_scale_t b)
{
    r->v[0] = cp_div0(a->v[0], b);
    r->v[1] = cp_div0(a->v[1], b);
    r->v[2] = cp_div0(a->v[2], b);
}

extern void cp_vec4_div(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_scale_t b)
{
    r->v[0] = cp_div0(a->v[0], b);
    r->v[1] = cp_div0(a->v[1], b);
    r->v[2] = cp_div0(a->v[2], b);
    r->v[3] = cp_div0(a->v[3], b);
}

extern cp_sqrdim_t cp_vec2_dot(
    cp_vec2_t const* a,
    cp_vec2_t const* b)
{
    return
        (a->v[0] * b->v[0]) +
        (a->v[1] * b->v[1]);
}

extern cp_sqrdim_t cp_vec3_dot(
    cp_vec3_t const* a,
    cp_vec3_t const* b)
{
    return
        (a->v[0] * b->v[0]) +
        (a->v[1] * b->v[1]) +
        (a->v[2] * b->v[2]);
}

extern cp_sqrdim_t cp_vec4_dot(
    cp_vec4_t const* a,
    cp_vec4_t const* b)
{
    return
        (a->v[0] * b->v[0]) +
        (a->v[1] * b->v[1]) +
        (a->v[2] * b->v[2]) +
        (a->v[3] * b->v[3]);
}

extern void cp_vec2_min(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_vec2_t const* b)
{
    r->v[0] = a->v[0] <= b->v[0] ? a->v[0] : b->v[0];
    r->v[1] = a->v[1] <= b->v[1] ? a->v[1] : b->v[1];
}

extern void cp_vec3_min(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_vec3_t const* b)
{
    r->v[0] = a->v[0] <= b->v[0] ? a->v[0] : b->v[0];
    r->v[1] = a->v[1] <= b->v[1] ? a->v[1] : b->v[1];
    r->v[2] = a->v[2] <= b->v[2] ? a->v[2] : b->v[2];
}

extern void cp_vec4_min(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_vec4_t const* b)
{
    r->v[0] = a->v[0] <= b->v[0] ? a->v[0] : b->v[0];
    r->v[1] = a->v[1] <= b->v[1] ? a->v[1] : b->v[1];
    r->v[2] = a->v[2] <= b->v[2] ? a->v[2] : b->v[2];
    r->v[3] = a->v[3] <= b->v[3] ? a->v[3] : b->v[3];
}

extern void cp_vec2_max(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_vec2_t const* b)
{
    r->v[0] = a->v[0] >= b->v[0] ? a->v[0] : b->v[0];
    r->v[1] = a->v[1] >= b->v[1] ? a->v[1] : b->v[1];
}

extern void cp_vec3_max(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_vec3_t const* b)
{
    r->v[0] = a->v[0] >= b->v[0] ? a->v[0] : b->v[0];
    r->v[1] = a->v[1] >= b->v[1] ? a->v[1] : b->v[1];
    r->v[2] = a->v[2] >= b->v[2] ? a->v[2] : b->v[2];
}

extern void cp_vec4_max(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_vec4_t const* b)
{
    r->v[0] = a->v[0] >= b->v[0] ? a->v[0] : b->v[0];
    r->v[1] = a->v[1] >= b->v[1] ? a->v[1] : b->v[1];
    r->v[2] = a->v[2] >= b->v[2] ? a->v[2] : b->v[2];
    r->v[3] = a->v[3] >= b->v[3] ? a->v[3] : b->v[3];
}

extern void cp_vec2_minmax(
    cp_vec2_minmax_t * r,
    cp_vec2_t const* a)
{
    cp_vec2_min(&r->min, &r->min, a);
    cp_vec2_max(&r->max, &r->max, a);
}

extern void cp_vec3_minmax(
    cp_vec3_minmax_t * r,
    cp_vec3_t const* a)
{
    cp_vec3_min(&r->min, &r->min, a);
    cp_vec3_max(&r->max, &r->max, a);
}

extern void cp_vec4_minmax(
    cp_vec4_minmax_t * r,
    cp_vec4_t const* a)
{
    cp_vec4_min(&r->min, &r->min, a);
    cp_vec4_max(&r->max, &r->max, a);
}

extern cp_dim_t cp_vec2_max_abs_coord(
    cp_vec2_t const* a)
{
    cp_dim_t m = cp_abs(a->v[0]);
    cp_dim_t p = cp_abs(a->v[1]);
    if (p > m) { m = p; }
    return m;
}

extern cp_dim_t cp_vec3_max_abs_coord(
    cp_vec3_t const* a)
{
    cp_dim_t m = cp_abs(a->v[0]);
    cp_dim_t p = cp_abs(a->v[1]);
    if (p > m) { m = p; }
    p = cp_abs(a->v[2]);
    if (p > m) { m = p; }
    return m;
}

extern cp_dim_t cp_vec4_max_abs_coord(
    cp_vec4_t const* a)
{
    cp_dim_t m = cp_abs(a->v[0]);
    cp_dim_t p = cp_abs(a->v[1]);
    if (p > m) { m = p; }
    p = cp_abs(a->v[2]);
    if (p > m) { m = p; }
    p = cp_abs(a->v[3]);
    if (p > m) { m = p; }
    return m;
}

extern bool cp_vec2_has_len0(
    cp_vec2_t const* a)
{
    return
        cp_equ(a->v[0], 0) &&
        cp_equ(a->v[1], 0);
}

extern bool cp_vec3_has_len0(
    cp_vec3_t const* a)
{
    return
        cp_equ(a->v[0], 0) &&
        cp_equ(a->v[1], 0) &&
        cp_equ(a->v[2], 0);
}

extern bool cp_vec4_has_len0(
    cp_vec4_t const* a)
{
    return
        cp_equ(a->v[0], 0) &&
        cp_equ(a->v[1], 0) &&
        cp_equ(a->v[2], 0) &&
        cp_equ(a->v[3], 0);
}

extern bool cp_vec2_unit(
    cp_vec2_t * r,
    cp_vec2_t const* a)
{
    cp_dim_t l = cp_vec2_len(a);
    cp_vec2_div(r, a, l);
    return !cp_sqr_equ(l,0);
}

extern bool cp_vec3_unit(
    cp_vec3_t * r,
    cp_vec3_t const* a)
{
    cp_dim_t l = cp_vec3_len(a);
    cp_vec3_div(r, a, l);
    return !cp_sqr_equ(l,0);
}

extern bool cp_vec4_unit(
    cp_vec4_t * r,
    cp_vec4_t const* a)
{
    cp_dim_t l = cp_vec4_len(a);
    cp_vec4_div(r, a, l);
    return !cp_sqr_equ(l,0);
}

extern cp_sqrdim_t cp_vec2_sqr_dist(
    cp_vec2_t const* a,
    cp_vec2_t const* b)
{
    cp_vec2_t d[1];
    cp_vec2_sub(d, a, b);
    return cp_vec2_sqr_len(d);
}

extern cp_sqrdim_t cp_vec3_sqr_dist(
    cp_vec3_t const* a,
    cp_vec3_t const* b)
{
    cp_vec3_t d[1];
    cp_vec3_sub(d, a, b);
    return cp_vec3_sqr_len(d);
}

extern cp_sqrdim_t cp_vec4_sqr_dist(
    cp_vec4_t const* a,
    cp_vec4_t const* b)
{
    cp_vec4_t d[1];
    cp_vec4_sub(d, a, b);
    return cp_vec4_sqr_len(d);
}

extern void cp_vec2_lerp(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_vec2_t const* b,
    cp_scale_t c)
{
    cp_vec2_t h[1];
    cp_vec2_sub(h, b, a);
    cp_vec2_mul(h, h, c);
    cp_vec2_add(r, a, h);
}

extern void cp_vec3_lerp(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_vec3_t const* b,
    cp_scale_t c)
{
    cp_vec3_t h[1];
    cp_vec3_sub(h, b, a);
    cp_vec3_mul(h, h, c);
    cp_vec3_add(r, a, h);
}

extern void cp_vec4_lerp(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_vec4_t const* b,
    cp_scale_t c)
{
    cp_vec4_t h[1];
    cp_vec4_sub(h, b, a);
    cp_vec4_mul(h, h, c);
    cp_vec4_add(r, a, h);
}

extern void cp_vec2_dir(
    cp_vec2_t * r,
    cp_vec2_t const* a,
    cp_vec2_t const* b)
{
    cp_vec2_sub(r, a, b);
    cp_vec2_unit(r, r);
}

extern void cp_vec3_dir(
    cp_vec3_t * r,
    cp_vec3_t const* a,
    cp_vec3_t const* b)
{
    cp_vec3_sub(r, a, b);
    cp_vec3_unit(r, r);
}

extern void cp_vec4_dir(
    cp_vec4_t * r,
    cp_vec4_t const* a,
    cp_vec4_t const* b)
{
    cp_vec4_sub(r, a, b);
    cp_vec4_unit(r, r);
}

extern void cp_vec2_xform(
    cp_vec2_t * r,
    cp_mat2_t const* a,
    cp_vec2_t const* b)
{
    cp_vec2_t h = { .v={
        (a->m[0][0] * b->v[0]) + (a->m[0][1] * b->v[1]),
        (a->m[1][0] * b->v[0]) + (a->m[1][1] * b->v[1]),
    }};
    *r = h;
}

extern void cp_vec2w_xform(
    cp_vec2_t *r,
    cp_mat2w_t const *m,
    cp_vec2_t const *v)
{
    cp_vec2_xform(r, &m->b, v);
    cp_vec2_add(r, r, &m->w);
}

extern void cp_vec3_xform(
    cp_vec3_t * r,
    cp_mat3_t const* a,
    cp_vec3_t const* b)
{
    cp_vec3_t h = { .v={
        (a->m[0][0] * b->v[0]) + (a->m[0][1] * b->v[1]) + (a->m[0][2] * b->v[2]),
        (a->m[1][0] * b->v[0]) + (a->m[1][1] * b->v[1]) + (a->m[1][2] * b->v[2]),
        (a->m[2][0] * b->v[0]) + (a->m[2][1] * b->v[1]) + (a->m[2][2] * b->v[2]),
    }};
    *r = h;
}

extern void cp_vec3w_xform(
    cp_vec3_t *r,
    cp_mat3w_t const *m,
    cp_vec3_t const *v)
{
    cp_vec3_xform(r, &m->b, v);
    cp_vec3_add(r, r, &m->w);
}

extern void cp_vec4_xform(
    cp_vec4_t * r,
    cp_mat4_t const* a,
    cp_vec4_t const* b)
{
    cp_vec4_t h = { .v={
        (a->m[0][0] * b->v[0]) + (a->m[0][1] * b->v[1]) + (a->m[0][2] * b->v[2]) + (a->m[0][3] * b->v[3]),
        (a->m[1][0] * b->v[0]) + (a->m[1][1] * b->v[1]) + (a->m[1][2] * b->v[2]) + (a->m[1][3] * b->v[3]),
        (a->m[2][0] * b->v[0]) + (a->m[2][1] * b->v[1]) + (a->m[2][2] * b->v[2]) + (a->m[2][3] * b->v[3]),
        (a->m[3][0] * b->v[0]) + (a->m[3][1] * b->v[1]) + (a->m[3][2] * b->v[2]) + (a->m[3][3] * b->v[3]),
    }};
    *r = h;
}

extern void cp_vec2_put(
    cp_stream_t* s,
    cp_vec2_t const* a)
{
    cp_printf(s, " %7.4f\n", a->v[0]);
    cp_printf(s, " %7.4f\n", a->v[1]);
}

extern void cp_vec3_put(
    cp_stream_t* s,
    cp_vec3_t const* a)
{
    cp_printf(s, " %7.4f\n", a->v[0]);
    cp_printf(s, " %7.4f\n", a->v[1]);
    cp_printf(s, " %7.4f\n", a->v[2]);
}

extern void cp_vec4_put(
    cp_stream_t* s,
    cp_vec4_t const* a)
{
    cp_printf(s, " %7.4f\n", a->v[0]);
    cp_printf(s, " %7.4f\n", a->v[1]);
    cp_printf(s, " %7.4f\n", a->v[2]);
    cp_printf(s, " %7.4f\n", a->v[3]);
}

extern void cp_mat2_put(
    cp_stream_t* s,
    cp_mat2_t const* a)
{
    for (cp_size_each(y, 2)) {
        for (cp_size_each(x, 2)) {
            cp_printf(s, " %7.4f", a->m[y][x]);
        }
        cp_printf(s, "\n");
    }
}

extern void cp_mat2w_put(
    cp_stream_t* s,
    cp_mat2w_t const* a)
{
    for (cp_size_each(y, 2)) {
        for (cp_size_each(x, 2)) {
            cp_printf(s, " %7.4f", a->b.m[y][x]);
        }
        cp_printf(s, " %7.4f\n", a->w.v[y]);
    }
}

extern void cp_mat2i_put(
    cp_stream_t* s,
    cp_mat2i_t const* a)
{
    for (cp_size_each(y, 2)) {
        for (cp_size_each(x, 2)) {
            cp_printf(s, " %7.4f", a->n.m[y][x]);
        }
        cp_printf(s, "  ");
        for (cp_size_each(x, 2)) {
            cp_printf(s, " %7.4f", a->i.m[y][x]);
        }
        if (y == 0) {
            cp_printf(s, "   %7.4f", a->d);
        }
        cp_printf(s, "\n");
    }
}

extern void cp_mat2wi_put(
    cp_stream_t* s,
    cp_mat2wi_t const* a)
{
    for (cp_size_each(y, 2)) {
        for (cp_size_each(x, 2)) {
            cp_printf(s, " %7.4f", a->n.b.m[y][x]);
        }
        cp_printf(s, " %7.4f  ", a->n.w.v[y]);
        for (cp_size_each(x, 2)) {
            cp_printf(s, " %7.4f", a->i.b.m[y][x]);
        }
        cp_printf(s, " %7.4f", a->i.w.v[y]);
        if (y == 0) {
            cp_printf(s, "   %7.4f", a->d);
        }
        cp_printf(s, "\n");
    }
}

extern void cp_mat3_put(
    cp_stream_t* s,
    cp_mat3_t const* a)
{
    for (cp_size_each(y, 3)) {
        for (cp_size_each(x, 3)) {
            cp_printf(s, " %7.4f", a->m[y][x]);
        }
        cp_printf(s, "\n");
    }
}

extern void cp_mat3w_put(
    cp_stream_t* s,
    cp_mat3w_t const* a)
{
    for (cp_size_each(y, 3)) {
        for (cp_size_each(x, 3)) {
            cp_printf(s, " %7.4f", a->b.m[y][x]);
        }
        cp_printf(s, " %7.4f\n", a->w.v[y]);
    }
}

extern void cp_mat3i_put(
    cp_stream_t* s,
    cp_mat3i_t const* a)
{
    for (cp_size_each(y, 3)) {
        for (cp_size_each(x, 3)) {
            cp_printf(s, " %7.4f", a->n.m[y][x]);
        }
        cp_printf(s, "  ");
        for (cp_size_each(x, 3)) {
            cp_printf(s, " %7.4f", a->i.m[y][x]);
        }
        if (y == 0) {
            cp_printf(s, "   %7.4f", a->d);
        }
        cp_printf(s, "\n");
    }
}

extern void cp_mat3wi_put(
    cp_stream_t* s,
    cp_mat3wi_t const* a)
{
    for (cp_size_each(y, 3)) {
        for (cp_size_each(x, 3)) {
            cp_printf(s, " %7.4f", a->n.b.m[y][x]);
        }
        cp_printf(s, " %7.4f  ", a->n.w.v[y]);
        for (cp_size_each(x, 3)) {
            cp_printf(s, " %7.4f", a->i.b.m[y][x]);
        }
        cp_printf(s, " %7.4f", a->i.w.v[y]);
        if (y == 0) {
            cp_printf(s, "   %7.4f", a->d);
        }
        cp_printf(s, "\n");
    }
}

extern void cp_mat4_put(
    cp_stream_t* s,
    cp_mat4_t const* a)
{
    for (cp_size_each(y, 4)) {
        for (cp_size_each(x, 4)) {
            cp_printf(s, " %7.4f", a->m[y][x]);
        }
        cp_printf(s, "\n");
    }
}

extern void cp_mat4i_put(
    cp_stream_t* s,
    cp_mat4i_t const* a)
{
    for (cp_size_each(y, 4)) {
        for (cp_size_each(x, 4)) {
            cp_printf(s, " %7.4f", a->n.m[y][x]);
        }
        cp_printf(s, "  ");
        for (cp_size_each(x, 4)) {
            cp_printf(s, " %7.4f", a->i.m[y][x]);
        }
        if (y == 0) {
            cp_printf(s, "   %7.4f", a->d);
        }
        cp_printf(s, "\n");
    }
}

extern void cp_mat2i_scale(
    cp_mat2i_t * r,
    cp_scale_t x,
    cp_scale_t y)
{
    cp_mat2_scale(&r->n, x, y);
    cp_mat2_scale(&r->i, cp_div0(1,x), cp_div0(1,y));
    r->d = x * y;
}

extern void cp_mat2wi_scale(
    cp_mat2wi_t * r,
    cp_scale_t x,
    cp_scale_t y)
{
    cp_mat2w_scale(&r->n, x, y);
    cp_mat2w_scale(&r->i, cp_div0(1,x), cp_div0(1,y));
    r->d = x * y;
}

extern void cp_mat3i_scale(
    cp_mat3i_t * r,
    cp_scale_t x,
    cp_scale_t y,
    cp_scale_t z)
{
    cp_mat3_scale(&r->n, x, y, z);
    cp_mat3_scale(&r->i, cp_div0(1,x), cp_div0(1,y), cp_div0(1,z));
    r->d = x * y * z;
}

extern void cp_mat3wi_scale(
    cp_mat3wi_t * r,
    cp_scale_t x,
    cp_scale_t y,
    cp_scale_t z)
{
    cp_mat3w_scale(&r->n, x, y, z);
    cp_mat3w_scale(&r->i, cp_div0(1,x), cp_div0(1,y), cp_div0(1,z));
    r->d = x * y * z;
}

extern void cp_mat4i_scale(
    cp_mat4i_t * r,
    cp_scale_t x,
    cp_scale_t y,
    cp_scale_t z)
{
    cp_mat4_scale(&r->n, x, y, z);
    cp_mat4_scale(&r->i, cp_div0(1,x), cp_div0(1,y), cp_div0(1,z));
    r->d = x * y * z;
}

extern void cp_mat2_trans(
    cp_mat2_t * r,
    cp_mat2_t const* a)
{
    if (r != a) { *r = *a; }
    CP_SWAP(&r->m[0][1], &r->m[1][0]);
}

extern bool cp_mat2w_trans(
    cp_mat2w_t * r,
    cp_mat2w_t const* a)
{
    bool good = cp_vec2_has_len0(&a->w);
    cp_mat2_trans(&r->b, &a->b);
    CP_ZERO(&r->w);
    return good;
}

extern void cp_mat2i_trans(
    cp_mat2i_t * r,
    cp_mat2i_t const* a)
{
    r->d = a->d;
    cp_mat2_trans(&r->n, &a->n);
    cp_mat2_trans(&r->i, &a->i);
}

extern bool cp_mat2wi_trans(
    cp_mat2wi_t * r,
    cp_mat2wi_t const* a)
{
    r->d = a->d;
    (void) cp_mat2w_trans(&r->i, &a->i);
    return cp_mat2w_trans(&r->n, &a->n);
}

extern void cp_mat3_trans(
    cp_mat3_t * r,
    cp_mat3_t const* a)
{
    if (r != a) { *r = *a; }
    CP_SWAP(&r->m[0][1], &r->m[1][0]);
    CP_SWAP(&r->m[0][2], &r->m[2][0]);
    CP_SWAP(&r->m[1][2], &r->m[2][1]);
}

extern bool cp_mat3w_trans(
    cp_mat3w_t * r,
    cp_mat3w_t const* a)
{
    bool good = cp_vec3_has_len0(&a->w);
    cp_mat3_trans(&r->b, &a->b);
    CP_ZERO(&r->w);
    return good;
}

extern void cp_mat3i_trans(
    cp_mat3i_t * r,
    cp_mat3i_t const* a)
{
    r->d = a->d;
    cp_mat3_trans(&r->n, &a->n);
    cp_mat3_trans(&r->i, &a->i);
}

extern bool cp_mat3wi_trans(
    cp_mat3wi_t * r,
    cp_mat3wi_t const* a)
{
    r->d = a->d;
    (void) cp_mat3w_trans(&r->i, &a->i);
    return cp_mat3w_trans(&r->n, &a->n);
}

extern void cp_mat4_trans(
    cp_mat4_t * r,
    cp_mat4_t const* a)
{
    if (r != a) { *r = *a; }
    CP_SWAP(&r->m[0][1], &r->m[1][0]);
    CP_SWAP(&r->m[0][2], &r->m[2][0]);
    CP_SWAP(&r->m[0][3], &r->m[3][0]);
    CP_SWAP(&r->m[1][2], &r->m[2][1]);
    CP_SWAP(&r->m[1][3], &r->m[3][1]);
    CP_SWAP(&r->m[2][3], &r->m[3][2]);
}

extern void cp_mat4i_trans(
    cp_mat4i_t * r,
    cp_mat4i_t const* a)
{
    r->d = a->d;
    cp_mat4_trans(&r->n, &a->n);
    cp_mat4_trans(&r->i, &a->i);
}

extern void cp_mat3i_rot_unit(
    cp_mat3i_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc)
{
    cp_mat3_rot_unit(&r->n, v, sc);
    cp_mat3_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat3wi_rot_unit(
    cp_mat3wi_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc)
{
    cp_mat3w_rot_unit(&r->n, v, sc);
    cp_mat3w_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat4i_rot_unit(
    cp_mat4i_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc)
{
    cp_mat4_rot_unit(&r->n, v, sc);
    cp_mat4_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat3_rot_v(
    cp_mat3_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat3_rot_unit(r, &u, sc);
}

extern void cp_mat3w_rot_v(
    cp_mat3w_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat3w_rot_unit(r, &u, sc);
}

extern void cp_mat3i_rot_v(
    cp_mat3i_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat3i_rot_unit(r, &u, sc);
}

extern void cp_mat3wi_rot_v(
    cp_mat3wi_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat3wi_rot_unit(r, &u, sc);
}

extern void cp_mat4_rot_v(
    cp_mat4_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat4_rot_unit(r, &u, sc);
}

extern void cp_mat4i_rot_v(
    cp_mat4i_t * r,
    cp_vec3_t const* v,
    cp_vec2_t const* sc)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat4i_rot_unit(r, &u, sc);
}

extern void cp_mat3i_rot_unit_into_z(
    cp_mat3i_t * r,
    cp_vec3_t const* v)
{
    cp_mat3_rot_unit_into_z(&r->n, v);
    cp_mat3_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat3wi_rot_unit_into_z(
    cp_mat3wi_t * r,
    cp_vec3_t const* v)
{
    cp_mat3w_rot_unit_into_z(&r->n, v);
    cp_mat3w_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat4i_rot_unit_into_z(
    cp_mat4i_t * r,
    cp_vec3_t const* v)
{
    cp_mat4_rot_unit_into_z(&r->n, v);
    cp_mat4_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat3_rot_into_z(
    cp_mat3_t * r,
    cp_vec3_t const* v)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat3_rot_unit_into_z(r, &u);
}

extern void cp_mat3w_rot_into_z(
    cp_mat3w_t * r,
    cp_vec3_t const* v)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat3w_rot_unit_into_z(r, &u);
}

extern void cp_mat3i_rot_into_z(
    cp_mat3i_t * r,
    cp_vec3_t const* v)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat3i_rot_unit_into_z(r, &u);
}

extern void cp_mat3wi_rot_into_z(
    cp_mat3wi_t * r,
    cp_vec3_t const* v)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat3wi_rot_unit_into_z(r, &u);
}

extern void cp_mat4_rot_into_z(
    cp_mat4_t * r,
    cp_vec3_t const* v)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat4_rot_unit_into_z(r, &u);
}

extern void cp_mat4i_rot_into_z(
    cp_mat4i_t * r,
    cp_vec3_t const* v)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat4i_rot_unit_into_z(r, &u);
}

extern void cp_mat2_rot_ij(
    cp_mat2_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc)
{
    assert(i < 2);
    assert(j < 2);
    assert(cp_vec2_has_len0_or_1(sc));
    cp_dim_t s = sc->v[0];
    cp_dim_t c = sc->v[1];
    cp_mat2_unit(r);
    r->m[i][i] = c;
    r->m[j][j] = c;
    r->m[i][j] = -s;
    r->m[j][i] = s;
}

extern void cp_mat2i_rot_ij(
    cp_mat2i_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc)
{
    cp_mat2_rot_ij(&r->n, i, j, sc);
    cp_mat2_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat2wi_rot_ij(
    cp_mat2wi_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc)
{
    cp_mat2w_rot_ij(&r->n, i, j, sc);
    cp_mat2w_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat3_rot_ij(
    cp_mat3_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc)
{
    assert(i < 3);
    assert(j < 3);
    assert(cp_vec2_has_len0_or_1(sc));
    cp_dim_t s = sc->v[0];
    cp_dim_t c = sc->v[1];
    cp_mat3_unit(r);
    r->m[i][i] = c;
    r->m[j][j] = c;
    r->m[i][j] = -s;
    r->m[j][i] = s;
}

extern void cp_mat3i_rot_ij(
    cp_mat3i_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc)
{
    cp_mat3_rot_ij(&r->n, i, j, sc);
    cp_mat3_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat3wi_rot_ij(
    cp_mat3wi_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc)
{
    cp_mat3w_rot_ij(&r->n, i, j, sc);
    cp_mat3w_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat4_rot_ij(
    cp_mat4_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc)
{
    assert(i < 4);
    assert(j < 4);
    assert(cp_vec2_has_len0_or_1(sc));
    cp_dim_t s = sc->v[0];
    cp_dim_t c = sc->v[1];
    cp_mat4_unit(r);
    r->m[i][i] = c;
    r->m[j][j] = c;
    r->m[i][j] = -s;
    r->m[j][i] = s;
}

extern void cp_mat4i_rot_ij(
    cp_mat4i_t * r,
    size_t i,
    size_t j,
    cp_vec2_t const* sc)
{
    cp_mat4_rot_ij(&r->n, i, j, sc);
    cp_mat4_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat3i_rot_x(
    cp_mat3i_t * r,
    cp_vec2_t const* sc)
{
    cp_mat3_rot_x(&r->n, sc);
    cp_mat3_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat3wi_rot_x(
    cp_mat3wi_t * r,
    cp_vec2_t const* sc)
{
    cp_mat3w_rot_x(&r->n, sc);
    cp_mat3w_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat4i_rot_x(
    cp_mat4i_t * r,
    cp_vec2_t const* sc)
{
    cp_mat4_rot_x(&r->n, sc);
    cp_mat4_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat3i_rot_y(
    cp_mat3i_t * r,
    cp_vec2_t const* sc)
{
    cp_mat3_rot_y(&r->n, sc);
    cp_mat3_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat3wi_rot_y(
    cp_mat3wi_t * r,
    cp_vec2_t const* sc)
{
    cp_mat3w_rot_y(&r->n, sc);
    cp_mat3w_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat4i_rot_y(
    cp_mat4i_t * r,
    cp_vec2_t const* sc)
{
    cp_mat4_rot_y(&r->n, sc);
    cp_mat4_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat2i_rot(
    cp_mat2i_t * r,
    cp_vec2_t const* sc)
{
    cp_mat2_rot(&r->n, sc);
    cp_mat2_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat2wi_rot(
    cp_mat2wi_t * r,
    cp_vec2_t const* sc)
{
    cp_mat2w_rot(&r->n, sc);
    cp_mat2w_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat3i_rot_z(
    cp_mat3i_t * r,
    cp_vec2_t const* sc)
{
    cp_mat3_rot_z(&r->n, sc);
    cp_mat3_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat3wi_rot_z(
    cp_mat3wi_t * r,
    cp_vec2_t const* sc)
{
    cp_mat3w_rot_z(&r->n, sc);
    cp_mat3w_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat4i_rot_z(
    cp_mat4i_t * r,
    cp_vec2_t const* sc)
{
    cp_mat4_rot_z(&r->n, sc);
    cp_mat4_trans(&r->i, &r->n);
    r->d = 1;
}

extern void cp_mat2i_mirror_unit(
    cp_mat2i_t * r,
    cp_vec2_t const* v)
{
    cp_mat2_mirror_unit(&r->n, v);
    r->i = r->n;
    r->d = -1;
}

extern void cp_mat2wi_mirror_unit(
    cp_mat2wi_t * r,
    cp_vec2_t const* v)
{
    cp_mat2w_mirror_unit(&r->n, v);
    r->i = r->n;
    r->d = -1;
}

extern void cp_mat3i_mirror_unit(
    cp_mat3i_t * r,
    cp_vec3_t const* v)
{
    cp_mat3_mirror_unit(&r->n, v);
    r->i = r->n;
    r->d = -1;
}

extern void cp_mat3wi_mirror_unit(
    cp_mat3wi_t * r,
    cp_vec3_t const* v)
{
    cp_mat3w_mirror_unit(&r->n, v);
    r->i = r->n;
    r->d = -1;
}

extern void cp_mat4i_mirror_unit(
    cp_mat4i_t * r,
    cp_vec3_t const* v)
{
    cp_mat4_mirror_unit(&r->n, v);
    r->i = r->n;
    r->d = -1;
}

extern void cp_mat2_mirror_v(
    cp_mat2_t * r,
    cp_vec2_t const* v)
{
    cp_vec2_t u;
    cp_vec2_unit(&u, v);
    cp_mat2_mirror_unit(r, &u);
}

extern void cp_mat2w_mirror_v(
    cp_mat2w_t * r,
    cp_vec2_t const* v)
{
    cp_vec2_t u;
    cp_vec2_unit(&u, v);
    cp_mat2w_mirror_unit(r, &u);
}

extern void cp_mat2i_mirror_v(
    cp_mat2i_t * r,
    cp_vec2_t const* v)
{
    cp_vec2_t u;
    cp_vec2_unit(&u, v);
    cp_mat2i_mirror_unit(r, &u);
}

extern void cp_mat2wi_mirror_v(
    cp_mat2wi_t * r,
    cp_vec2_t const* v)
{
    cp_vec2_t u;
    cp_vec2_unit(&u, v);
    cp_mat2wi_mirror_unit(r, &u);
}

extern void cp_mat3_mirror_v(
    cp_mat3_t * r,
    cp_vec3_t const* v)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat3_mirror_unit(r, &u);
}

extern void cp_mat3w_mirror_v(
    cp_mat3w_t * r,
    cp_vec3_t const* v)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat3w_mirror_unit(r, &u);
}

extern void cp_mat3i_mirror_v(
    cp_mat3i_t * r,
    cp_vec3_t const* v)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat3i_mirror_unit(r, &u);
}

extern void cp_mat3wi_mirror_v(
    cp_mat3wi_t * r,
    cp_vec3_t const* v)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat3wi_mirror_unit(r, &u);
}

extern void cp_mat4_mirror_v(
    cp_mat4_t * r,
    cp_vec3_t const* v)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat4_mirror_unit(r, &u);
}

extern void cp_mat4i_mirror_v(
    cp_mat4i_t * r,
    cp_vec3_t const* v)
{
    cp_vec3_t u;
    cp_vec3_unit(&u, v);
    cp_mat4i_mirror_unit(r, &u);
}

extern void cp_mat2_mul(
    cp_mat2_t * r,
    cp_mat2_t const* a,
    cp_mat2_t const* b)
{
    cp_mat2_t h;
    h.m[0][0] = (a->m[0][0] * b->m[0][0]) + (a->m[0][1] * b->m[1][0]);
    h.m[0][1] = (a->m[0][0] * b->m[0][1]) + (a->m[0][1] * b->m[1][1]);
    h.m[1][0] = (a->m[1][0] * b->m[0][0]) + (a->m[1][1] * b->m[1][0]);
    h.m[1][1] = (a->m[1][0] * b->m[0][1]) + (a->m[1][1] * b->m[1][1]);
    *r = h;
}

extern void cp_mat2w_mul(
    cp_mat2w_t * r,
    cp_mat2w_t const* a,
    cp_mat2w_t const* b)
{
    cp_mat2w_t h;
    h.b.m[0][0] = (a->b.m[0][0] * b->b.m[0][0]) + (a->b.m[0][1] * b->b.m[1][0]);
    h.b.m[0][1] = (a->b.m[0][0] * b->b.m[0][1]) + (a->b.m[0][1] * b->b.m[1][1]);
    h.w.v[0] = (a->b.m[0][0] * b->w.v[0]) + (a->b.m[0][1] * b->w.v[1]) + a->w.v[0];
    h.b.m[1][0] = (a->b.m[1][0] * b->b.m[0][0]) + (a->b.m[1][1] * b->b.m[1][0]);
    h.b.m[1][1] = (a->b.m[1][0] * b->b.m[0][1]) + (a->b.m[1][1] * b->b.m[1][1]);
    h.w.v[1] = (a->b.m[1][0] * b->w.v[0]) + (a->b.m[1][1] * b->w.v[1]) + a->w.v[1];
    *r = h;
}

extern void cp_mat2i_mul(
    cp_mat2i_t * r,
    cp_mat2i_t const* a,
    cp_mat2i_t const* b)
{
    cp_mat2_mul(&r->n, &a->n, &b->n);
    cp_mat2_mul(&r->i, &b->i, &a->i);
    r->d = a->d * b->d;
}

extern void cp_mat2wi_mul(
    cp_mat2wi_t * r,
    cp_mat2wi_t const* a,
    cp_mat2wi_t const* b)
{
    cp_mat2w_mul(&r->n, &a->n, &b->n);
    cp_mat2w_mul(&r->i, &b->i, &a->i);
    r->d = a->d * b->d;
}

extern void cp_mat3_mul(
    cp_mat3_t * r,
    cp_mat3_t const* a,
    cp_mat3_t const* b)
{
    cp_mat3_t h;
    h.m[0][0] = (a->m[0][0] * b->m[0][0]) + (a->m[0][1] * b->m[1][0]) + (a->m[0][2] * b->m[2][0]);
    h.m[0][1] = (a->m[0][0] * b->m[0][1]) + (a->m[0][1] * b->m[1][1]) + (a->m[0][2] * b->m[2][1]);
    h.m[0][2] = (a->m[0][0] * b->m[0][2]) + (a->m[0][1] * b->m[1][2]) + (a->m[0][2] * b->m[2][2]);
    h.m[1][0] = (a->m[1][0] * b->m[0][0]) + (a->m[1][1] * b->m[1][0]) + (a->m[1][2] * b->m[2][0]);
    h.m[1][1] = (a->m[1][0] * b->m[0][1]) + (a->m[1][1] * b->m[1][1]) + (a->m[1][2] * b->m[2][1]);
    h.m[1][2] = (a->m[1][0] * b->m[0][2]) + (a->m[1][1] * b->m[1][2]) + (a->m[1][2] * b->m[2][2]);
    h.m[2][0] = (a->m[2][0] * b->m[0][0]) + (a->m[2][1] * b->m[1][0]) + (a->m[2][2] * b->m[2][0]);
    h.m[2][1] = (a->m[2][0] * b->m[0][1]) + (a->m[2][1] * b->m[1][1]) + (a->m[2][2] * b->m[2][1]);
    h.m[2][2] = (a->m[2][0] * b->m[0][2]) + (a->m[2][1] * b->m[1][2]) + (a->m[2][2] * b->m[2][2]);
    *r = h;
}

extern void cp_mat3w_mul(
    cp_mat3w_t * r,
    cp_mat3w_t const* a,
    cp_mat3w_t const* b)
{
    cp_mat3w_t h;
    h.b.m[0][0] = (a->b.m[0][0] * b->b.m[0][0]) + (a->b.m[0][1] * b->b.m[1][0]) + (a->b.m[0][2] * b->b.m[2][0]);
    h.b.m[0][1] = (a->b.m[0][0] * b->b.m[0][1]) + (a->b.m[0][1] * b->b.m[1][1]) + (a->b.m[0][2] * b->b.m[2][1]);
    h.b.m[0][2] = (a->b.m[0][0] * b->b.m[0][2]) + (a->b.m[0][1] * b->b.m[1][2]) + (a->b.m[0][2] * b->b.m[2][2]);
    h.w.v[0] = (a->b.m[0][0] * b->w.v[0]) + (a->b.m[0][1] * b->w.v[1]) + (a->b.m[0][2] * b->w.v[2]) + a->w.v[0];
    h.b.m[1][0] = (a->b.m[1][0] * b->b.m[0][0]) + (a->b.m[1][1] * b->b.m[1][0]) + (a->b.m[1][2] * b->b.m[2][0]);
    h.b.m[1][1] = (a->b.m[1][0] * b->b.m[0][1]) + (a->b.m[1][1] * b->b.m[1][1]) + (a->b.m[1][2] * b->b.m[2][1]);
    h.b.m[1][2] = (a->b.m[1][0] * b->b.m[0][2]) + (a->b.m[1][1] * b->b.m[1][2]) + (a->b.m[1][2] * b->b.m[2][2]);
    h.w.v[1] = (a->b.m[1][0] * b->w.v[0]) + (a->b.m[1][1] * b->w.v[1]) + (a->b.m[1][2] * b->w.v[2]) + a->w.v[1];
    h.b.m[2][0] = (a->b.m[2][0] * b->b.m[0][0]) + (a->b.m[2][1] * b->b.m[1][0]) + (a->b.m[2][2] * b->b.m[2][0]);
    h.b.m[2][1] = (a->b.m[2][0] * b->b.m[0][1]) + (a->b.m[2][1] * b->b.m[1][1]) + (a->b.m[2][2] * b->b.m[2][1]);
    h.b.m[2][2] = (a->b.m[2][0] * b->b.m[0][2]) + (a->b.m[2][1] * b->b.m[1][2]) + (a->b.m[2][2] * b->b.m[2][2]);
    h.w.v[2] = (a->b.m[2][0] * b->w.v[0]) + (a->b.m[2][1] * b->w.v[1]) + (a->b.m[2][2] * b->w.v[2]) + a->w.v[2];
    *r = h;
}

extern void cp_mat3i_mul(
    cp_mat3i_t * r,
    cp_mat3i_t const* a,
    cp_mat3i_t const* b)
{
    cp_mat3_mul(&r->n, &a->n, &b->n);
    cp_mat3_mul(&r->i, &b->i, &a->i);
    r->d = a->d * b->d;
}

extern void cp_mat3wi_mul(
    cp_mat3wi_t * r,
    cp_mat3wi_t const* a,
    cp_mat3wi_t const* b)
{
    cp_mat3w_mul(&r->n, &a->n, &b->n);
    cp_mat3w_mul(&r->i, &b->i, &a->i);
    r->d = a->d * b->d;
}

extern void cp_mat4_mul(
    cp_mat4_t * r,
    cp_mat4_t const* a,
    cp_mat4_t const* b)
{
    cp_mat4_t h;
    h.m[0][0] = (a->m[0][0] * b->m[0][0]) + (a->m[0][1] * b->m[1][0]) + (a->m[0][2] * b->m[2][0]) + (a->m[0][3] * b->m[3][0]);
    h.m[0][1] = (a->m[0][0] * b->m[0][1]) + (a->m[0][1] * b->m[1][1]) + (a->m[0][2] * b->m[2][1]) + (a->m[0][3] * b->m[3][1]);
    h.m[0][2] = (a->m[0][0] * b->m[0][2]) + (a->m[0][1] * b->m[1][2]) + (a->m[0][2] * b->m[2][2]) + (a->m[0][3] * b->m[3][2]);
    h.m[0][3] = (a->m[0][0] * b->m[0][3]) + (a->m[0][1] * b->m[1][3]) + (a->m[0][2] * b->m[2][3]) + (a->m[0][3] * b->m[3][3]);
    h.m[1][0] = (a->m[1][0] * b->m[0][0]) + (a->m[1][1] * b->m[1][0]) + (a->m[1][2] * b->m[2][0]) + (a->m[1][3] * b->m[3][0]);
    h.m[1][1] = (a->m[1][0] * b->m[0][1]) + (a->m[1][1] * b->m[1][1]) + (a->m[1][2] * b->m[2][1]) + (a->m[1][3] * b->m[3][1]);
    h.m[1][2] = (a->m[1][0] * b->m[0][2]) + (a->m[1][1] * b->m[1][2]) + (a->m[1][2] * b->m[2][2]) + (a->m[1][3] * b->m[3][2]);
    h.m[1][3] = (a->m[1][0] * b->m[0][3]) + (a->m[1][1] * b->m[1][3]) + (a->m[1][2] * b->m[2][3]) + (a->m[1][3] * b->m[3][3]);
    h.m[2][0] = (a->m[2][0] * b->m[0][0]) + (a->m[2][1] * b->m[1][0]) + (a->m[2][2] * b->m[2][0]) + (a->m[2][3] * b->m[3][0]);
    h.m[2][1] = (a->m[2][0] * b->m[0][1]) + (a->m[2][1] * b->m[1][1]) + (a->m[2][2] * b->m[2][1]) + (a->m[2][3] * b->m[3][1]);
    h.m[2][2] = (a->m[2][0] * b->m[0][2]) + (a->m[2][1] * b->m[1][2]) + (a->m[2][2] * b->m[2][2]) + (a->m[2][3] * b->m[3][2]);
    h.m[2][3] = (a->m[2][0] * b->m[0][3]) + (a->m[2][1] * b->m[1][3]) + (a->m[2][2] * b->m[2][3]) + (a->m[2][3] * b->m[3][3]);
    h.m[3][0] = (a->m[3][0] * b->m[0][0]) + (a->m[3][1] * b->m[1][0]) + (a->m[3][2] * b->m[2][0]) + (a->m[3][3] * b->m[3][0]);
    h.m[3][1] = (a->m[3][0] * b->m[0][1]) + (a->m[3][1] * b->m[1][1]) + (a->m[3][2] * b->m[2][1]) + (a->m[3][3] * b->m[3][1]);
    h.m[3][2] = (a->m[3][0] * b->m[0][2]) + (a->m[3][1] * b->m[1][2]) + (a->m[3][2] * b->m[2][2]) + (a->m[3][3] * b->m[3][2]);
    h.m[3][3] = (a->m[3][0] * b->m[0][3]) + (a->m[3][1] * b->m[1][3]) + (a->m[3][2] * b->m[2][3]) + (a->m[3][3] * b->m[3][3]);
    *r = h;
}

extern void cp_mat4i_mul(
    cp_mat4i_t * r,
    cp_mat4i_t const* a,
    cp_mat4i_t const* b)
{
    cp_mat4_mul(&r->n, &a->n, &b->n);
    cp_mat4_mul(&r->i, &b->i, &a->i);
    r->d = a->d * b->d;
}

extern void cp_mat2i_inv(
    cp_mat2i_t * r,
    cp_mat2i_t const* a)
{
    if (r == a) {
        CP_SWAP(&r->n, &r->i);
    } else {
        r->n = a->i;
        r->i = a->n;
    }
    r->d = cp_div0(1, r->d);
}

extern void cp_mat2wi_inv(
    cp_mat2wi_t * r,
    cp_mat2wi_t const* a)
{
    if (r == a) {
        CP_SWAP(&r->n, &r->i);
    } else {
        r->n = a->i;
        r->i = a->n;
    }
    r->d = cp_div0(1, r->d);
}

extern void cp_mat3i_inv(
    cp_mat3i_t * r,
    cp_mat3i_t const* a)
{
    if (r == a) {
        CP_SWAP(&r->n, &r->i);
    } else {
        r->n = a->i;
        r->i = a->n;
    }
    r->d = cp_div0(1, r->d);
}

extern void cp_mat3wi_inv(
    cp_mat3wi_t * r,
    cp_mat3wi_t const* a)
{
    if (r == a) {
        CP_SWAP(&r->n, &r->i);
    } else {
        r->n = a->i;
        r->i = a->n;
    }
    r->d = cp_div0(1, r->d);
}

extern void cp_mat4i_inv(
    cp_mat4i_t * r,
    cp_mat4i_t const* a)
{
    if (r == a) {
        CP_SWAP(&r->n, &r->i);
    } else {
        r->n = a->i;
        r->i = a->n;
    }
    r->d = cp_div0(1, r->d);
}
