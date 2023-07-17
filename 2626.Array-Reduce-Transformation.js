/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function (nums, fn, init) {
  let length = nums.length;

  let v = init;

  for (let i = 0; i < length; i++) {
    v = fn(v, nums[i]);
  }
  return v;
};
