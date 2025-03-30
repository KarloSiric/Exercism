#include "high_scores.h"
#include <stdint.h>
#include <string.h>

int32_t latest(const int32_t *scores, size_t scores_len) {

    return scores[scores_len - 1]; // because scores_len gives the amount of elements and we need the last one so -1
}

int32_t personal_best(const int32_t *scores, size_t scores_len) {

    int best = scores[0];

    for (size_t i = 0; i < scores_len; i++) {
        if (scores[i] > best) {
            best = scores[i];
        }
    }

    return best;
}

size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output) {

    // int32_t three_scores[3];
    int32_t sorted_scores[scores_len];
    memcpy(sorted_scores, scores, scores_len * sizeof(int32_t));
    int32_t temp;
    // memset(three_scores, 0, sizeof(int));

    /* 
     * if we have: 5,3,7 -> 5 = temp, 3 = this at 5, adn then at palce 3 we get temp back --> 3,5,7
     */

    /* these here are being sorted in descending order so that means we need to go from the end and give them back! */

    for (size_t i = 0; i < scores_len - 1; i++) {
        for (size_t j = 0; j < scores_len - 1; j++) {
            if (sorted_scores[j] < sorted_scores[j + 1]) {
                temp = sorted_scores[j];
                sorted_scores[j] = sorted_scores[j + 1];
                sorted_scores[j + 1] = temp;
            }     
        }
    }

    size_t maxSize = (scores_len < 3) ? scores_len : 3;

    for (size_t i = 0; i < maxSize; i++) {
        output[i] = sorted_scores[i];
    }

    return maxSize;


}
