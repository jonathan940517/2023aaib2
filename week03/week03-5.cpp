int maxFrequencyElements(int* nums, int numsSize) {
    int table[101] = {};
    int best = 0;
    for(int i=0;i<numsSize;i++){
        int num = nums[i];
        table[num] += 1;
        if(table[num]>best) best = table[num];
    }
    int total = 0;
    for(int i=0;i<101;i++){
        if(best == table[i]) total += best;
    }
    return total;
}
