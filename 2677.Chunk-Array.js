/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function (arr, size) {
  let fullSize = arr.length;
  let resArr = [],
    temp = [];

  for (let i = 0; i < fullSize; i++) {
    temp.push(arr[i]);

    if (temp.length == size) {
      resArr.push(temp);
      temp = [];
    }
  }

  if (temp.length) {
    resArr.push(temp);
  }

  return resArr;
};
