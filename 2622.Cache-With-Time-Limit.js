class TimeLimitedCache {
  cache = new Map();

  set(key, value, duration) {
    const alreadyExist = this.cache.get(key, value);
    if (alreadyExist) {
      clearTimeout(alreadyExist.timeoutId);
    }

    const timeoutId = setTimeout(() => {
      this.cache.delete(key);
    }, duration);

    this.cache.set(key, { value, timeoutId });
    return Boolean(alreadyExist);
  }

  get(key) {
    if (this.cache.has(key)) {
      return this.cache.get(key).value;
    }
    return -1;
  }

  count() {
    return this.cache.size;
  }
}

/**
 * @param {number} key
 * @param {number} value
 * @param {number} duration time until expiration in ms
 * @return {boolean} if un-expired key already existed
 */

/**
 * @param {number} key
 * @return {number} value associated with key
 */

/**
 * @return {number} count of non-expired keys
 */

/**
 * Your TimeLimitedCache object will be instantiated and called as such:
 * var obj = new TimeLimitedCache()
 * obj.set(1, 42, 1000); // false
 * obj.get(1) // 42
 * obj.count() // 1
 */
