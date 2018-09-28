/* -*- Mode: C -*- */

#ifndef __CP_PS_TAM_H
#define __CP_PS_TAM_H

#include <cpmat/mat_gen_tam.h>
#include <csg2plane/gc_tam.h>

/**
 * Paper size */
#ifndef CP_PS_PAPER_NAME
#  define CP_PS_PAPER_NAME "a4"
#  define CP_PS_PAPER_X 595
#  define CP_PS_PAPER_Y 842
#  define CP_PS_PAPER_MARGIN 56
#endif

#define CP_PS_XFORM_MM \
    ((cp_ps_xform_t){ \
        .mul   = 72.0 / 25.4, \
        .add_x = CP_PS_PAPER_X/2, \
        .add_y = CP_PS_PAPER_Y/2, \
    })

typedef struct {
    double mul;
    double add_x;
    double add_y;
} cp_ps_xform_t;

/**
 * Options for ps outpu */
typedef struct {
    cp_ps_xform_t const *xform1;
    cp_mat4_t xform2;
    cp_color_rgb_t color_path;
    cp_color_rgb_t color_tri;
    cp_color_rgb_t color_fill;
    cp_color_rgb_t color_vertex;
    cp_color_rgb_t color_mark;
    bool single_page;
    bool no_tri;
    bool no_path;
    bool no_mark;
} cp_ps_opt_t;

#endif /* __CP_PS_TAM_H */