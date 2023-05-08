#define macro_baseline_cycle_count  baseline_cycle_count = arith_cnt + lw_cnt + sw_cnt + others_cnt;
#define macro_baseline_cpu_time baseline_cpu_time = baseline_cycle_count * cycle_time;
#define macro_improved_cycle_count improved_cycle_count = arith_cnt + lw_cnt + sw_cnt + others_cnt;;
#define macro_improved_cpu_time improved_cpu_time = improved_cycle_count * cycle_time;
