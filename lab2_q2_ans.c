    "li t0, 8               \n\t"     // 將暫存器 t0 設定為 0，作為迴圈 1 計數器
// "Loop1:                     \n\t"
//     "li t1, 8               \n\t"     // 將暫存器 t1 設定為 0，作為迴圈 2 計數器
//     "lh t2, 0(%[p_x])"
// "Loop2:                     \n\t"   
//     "vsetvli  t2, t1, e16, ta, ma   \n\t"
//     "vle16.v  v0, (%[p_x])          \n\t"
//     "lh t3 ,0(%[target])            \n\t"
//     "sub t1, t1, t2                 \n\t"
//     "vsub.vx v1, v0, t3             \n\t"
//     "bnez t1, Loop2                 \n\t"   

// "Done:                              \n\t"


