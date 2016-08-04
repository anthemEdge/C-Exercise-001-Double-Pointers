<<<<<<< HEAD
# C-Exercise-001-Double-Pointers
Using double pointers to remove nodes in a single linked list. 
=======
# C++ Exercise 001: Double Pointers

This is my attempt to understand the double pointers in C++. The goal of this exercise is to understand how double pointers can be used to remove a node in a linked list. There are two functions that remove nodes: badRemove(int v) and goodRemove(int v). Both functions remove the first node which has the value v.

### badRemove(int v)
This function treats and head and tail of the list differently. If the head of the list needs to be removed, it simply cuts off the head. Otherwise, it tracks the previous node and corrects and link of that node. 

### goodRemove(int v)
This function uses the double pointer which walks through the list regardless if the node is the head of the tail. 

## Reference & Related Resource
1. [Linked list - Wikipedia, the free encyclopedia](https://en.wikipedia.org/wiki/Linked_list)
2. [The mind behind Linux | Linus Torvalds - YouTube](https://youtu.be/o8NPllzkFhE?t=14m14s)
3. [Linus Torvalds's Double Pointer Problem - YouTube](https://www.youtube.com/watch?v=GiAhUYCUDVc)

## License
This program is available under the [Zlib License](http://www.gzip.org/zlib/zlib_license.html).

##Disclaimer
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


>>>>>>> 50d9f19ea991ee413089734cf14349bb22d6d53e
