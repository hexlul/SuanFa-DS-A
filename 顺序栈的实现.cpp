//顺序栈的实现，使用C++模板机制

const int StackSize = 10;
template<class DataType>    //定义模板类SeqStack
class SeqStack
{
    public:
       SeqStack(){top = -1;}   //构造函数，初始化一个空栈
       ~SeqStack(){}
       void Push(DataType x);
       DataType pop();
       DataType GetTop(){if(top != -1) return data[top];}  //取栈顶元素（并不删除）
       int Empty() {top == -1?return 1:return 0;}
    private:
      DataType data[StackSize];  //存放栈元素的数组
      int top;                  //栈顶指针，为栈顶元素在数组中的下标
};
