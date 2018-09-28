#include <cpmat/mat.h>
extern bool cp_mat3_is_rect_rot(
    cp_mat3_t const *m)
{
    /*   ? 0 0   ? 0 0   0 ? 0   0 ? 0   0 0 ?   0 0 ?
     *   0 ? 0   0 0 ?   ? 0 0   0 0 ?   ? 0 0   0 ? 0
     *   0 0 ?   0 ? 0   0 0 ?   ? 0 0   0 ? 0   ? 0 0  */
    if (!cp_equ(m->m[0][0], 0)) {
        /*   O ? 0   O ? 0   O 0 ?   O 0 ?
         *   ? 0 0   0 0 ?   ? 0 0   0 ? 0
         *   0 0 ?   ? 0 0   0 ? 0   ? 0 0  */
        if (!cp_equ(m->m[1][0], 0)) {
            /*   O ? 0   O 0 ?
             *   O 0 ?   O ? 0
             *   ? 0 0   ? 0 0  */
            if (!cp_equ(m->m[0][1], 0)) { return false; }
            if (!cp_equ(m->m[1][2], 0)) { return false; }
            if (!cp_equ(m->m[2][2], 0)) { return false; }
            if (!cp_equ(m->m[1][1], 0)) {
                /*   O X 0
                 *   O O X
                 *   ? 0 O  */
                if (!cp_equ(m->m[2][0], 0)) { return false; }
                return true;
            }
            /*   O O ?
             *   O X O
             *   ? 0 O  */
            if (!cp_equ(m->m[2][1], 0)) { return false; }
            return true;
        }
        /*   O ? 0   O 0 ?
         *   X 0 0   X 0 0
         *   0 0 ?   0 ? 0  */
        if (!cp_equ(m->m[1][1], 0)) { return false; }
        if (!cp_equ(m->m[2][1], 0)) { return false; }
        if (!cp_equ(m->m[0][2], 0)) { return false; }
        if (!cp_equ(m->m[0][1], 0)) {
            /*   O O X
             *   X O 0
             *   0 X 0  */
            if (!cp_equ(m->m[2][2], 0)) { return false; }
            return true;
        }
        /*   O X O
         *   X O 0
         *   0 O ?  */
        if (!cp_equ(m->m[2][0], 0)) { return false; }
        if (!cp_equ(m->m[1][2], 0)) { return false; }
        return true;
    }
    /*   X 0 0   X 0 0
     *   0 ? 0   0 0 ?
     *   0 0 ?   0 ? 0  */
    if (!cp_equ(m->m[1][0], 0)) { return false; }
    if (!cp_equ(m->m[2][0], 0)) { return false; }
    if (!cp_equ(m->m[0][1], 0)) { return false; }
    if (!cp_equ(m->m[0][2], 0)) { return false; }
    if (!cp_equ(m->m[1][1], 0)) {
        /*   X O O
         *   O O ?
         *   O ? 0  */
        if (!cp_equ(m->m[2][2], 0)) { return false; }
        return true;
    }
    /*   X O O
     *   O X 0
     *   O 0 ?  */
    if (!cp_equ(m->m[2][1], 0)) { return false; }
    if (!cp_equ(m->m[1][2], 0)) { return false; }
    return true;
}
