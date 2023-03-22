// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
    count = 0;
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++){
            if (arr[i] + arr[j] == value) {
                count += 1;
            }
        }
    }
    return count;
}

int countPairs2(int *arr, int len, int value) {
  count = 0;
  for (int i = 0; i < len - 1; i++) {
      for (int j = len - 1; i < j; j--) {
          if(arr[i] + arr[j] == value) {
              count +=1;
          }
      }
  }
  return count;
}

int countPairs3(int *arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len - 1; i++) {
        int leftBoard = i;
        int rightBoard = len;
        while (rightBoard - 1 > left) {
            int median1 = (leftBoard + rightBoard)/2;
            if (arr[i] + arr[median1] == value) {
                count +=1;
                int median2 = median1 + 1;
                while (arr[i] + arr[median2] == value && median2 < rightBoard) {
                    count += 1;
                    median2++;
                }
                median2 = median1 - 1;
                while (arr[i] + arr[median2] == value && median2 > leftBoard) {
                    count += 1;
                    median2--;
                }
                break;
            }
            if (arr[i] + arr[median1] > value) {
                rightBoard = median1;
            } else {
                leftBoard = median1;
            }
        }
    }
    return count;
}
