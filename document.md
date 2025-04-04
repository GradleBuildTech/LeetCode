## Array
### Two pointer skill
1. Opposite Direction Two Pointers

* Two pointers start from opposite ends of an array and move towards each other.

* Applications:

    * Finding a pair of numbers that sum up to a given value.

    * Checking if a sequence is a palindrome.

2. Same Direction Two Pointers

* One pointer moves faster while the other moves slower.

* Applications:

    * Finding a subarray that satisfies a given condition.

    * Handling linked lists, such as finding the middle node or detecting cycles (Floyd’s Cycle Detection - Tortoise & Hare Algorithm).

 ### Example
 ```Kotlin
fun twoSumSorted(nums: IntArray, target: Int): Boolean {
    var left = 0
    var right = nums.size - 1
    
    while (left < right) {
        val sum = nums[left] + nums[right]
        when {
            sum == target -> return true
            sum < target -> left++
            else -> right--
        }
    }
    return false
}

fun main() {
    val nums = intArrayOf(1, 2, 3, 5, 7, 10)
    val target = 9
    println(twoSumSorted(nums, target)) // Output: true (2 + 7)
}
```
