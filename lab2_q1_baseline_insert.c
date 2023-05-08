"mv t0, x0           \n\t"    // 將暫存器 t0 設定為 0，作為迴圈計數器
"mv t1, x0           \n\t"    // 將暫存器 t1 設定為 0，作為迴圈計數器
"li t2, 16            \n\t"    // 將暫存器 t2 設定為 16，作為迴圈次數的上限
"addi %[arith_cnt], %[arith_cnt], 3 \n\t"
"loop:               \n\t"    // 宣告一個 loop 的 label，開始迴圈
"beq t0, t2, done    \n\t"    // 若 t0 與 t2 相等，則跳至 done 標籤，跳出迴圈
"addi %[others_cnt], %[others_cnt], 1 \n\t"
"addi t0, t0, 1      \n\t"    // 暫存器 t0 加 1，用於計數
"addi %[arith_cnt], %[arith_cnt], 1 \n\t"
"lh t3, 0(%[h])      \n\t"    // 從記憶體 h 所指向的位址讀取一個 word 到暫存器 t3
"lh t4, 0(%[x])      \n\t"    // 從記憶體 x 所指向的位址讀取一個 word 到暫存器 t4
"addi %[lw_cnt], %[lw_cnt], 2 \n\t"
"add t5, t3, t4      \n\t"    // 將 t3 與 t4 相加，並存入暫存器 t5
"addi %[arith_cnt], %[arith_cnt], 1 \n\t"
"sh t5, 0(%[y])      \n\t"    // 將暫存器 t5 中的值寫回記憶體 y 所指向的位址
"addi %[sw_cnt], %[sw_cnt], 1 \n\t"
"addi %[h], %[h], 2  \n\t"    // 將指標 h 加 4，指向下一個位址
"addi %[x], %[x], 2  \n\t"    // 將指標 x 加 4，指向下一個位址
"addi %[y], %[y], 2  \n\t"    // 將指標 y 加 4，指向下一個位址
"addi %[arith_cnt], %[arith_cnt], 3 \n\t"
"addi %[others_cnt], %[others_cnt], 1 \n\t"
"j loop              \n\t"    // 跳回 loop 標籤，繼續迴圈
"done:               \n\t"    // 宣告一個 done 的 label，迴圈結束