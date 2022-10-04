import java.util.Arrays;

public class QuickSort {
    public static void main(String[] args) {
        int[] arr = {5, 4, 3, 2, 1};
//        sort(arr, 0, arr.length - 1);
//        System.out.println(Arrays.toString(arr));
        Arrays.sort(arr);
    }

    static void sort(int[] nums, int low, int hi) { //low and high denotes the part of the array we are working on
        if (low >= hi) {// Check if low>= hi,just don't need to do anything,,i,e, do return
            return;
        }

        int s = low;//starting from low
        int e = hi;//ending till high
        int m = s + (e - s) / 2;//middle position
        int pivot = nums[m];

// Conditions for swapping:
        while (s <= e) {

            // Reason why if its already sorted it will not swap
            // If this condition is true,keep moving start ahead
            while (nums[s] < pivot) {
                s++;
            }

            //while this condition is true,keep moving end ahead
            while (nums[e] > pivot) {
                e--;
            }

            // If above conditions are false,then it is at violation
            // Swap that violation
            if (s <= e) {
                int temp = nums[s];
                nums[s] = nums[e];
                nums[e] = temp;
                s++;
                e--;
            }
        }

        // now my pivot is at correct index, Sort two halves now
        // Recurive call
        sort(nums, low, e);
        sort(nums, s, hi);
    }
}
