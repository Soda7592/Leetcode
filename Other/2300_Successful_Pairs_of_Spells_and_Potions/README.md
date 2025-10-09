# Description
# Approach
這題因為若在 potions 經過排序後就能把題目簡化為"找到potions[i]滿足 spells[i] x potions[j] >= success"，因此第一步必須要為 potions 進行排序。

在排序後這題必須要用到優化過後的 binarySearch，用於搜尋 lower-bound，是要透過 binarysearch 的手段找到一串數值中，滿足 >= target 的最小值，詳細如 code 所述。

其中 
- mid = l + (r-l)/2 等價於 mid = (r+l)/2，不過前者的做法能夠避免 integer overflow 的問題，所以比起後者更安全更好。
- (success+speels[i]-1)/spells[i] 等價於 ceil(success/spells[i])
