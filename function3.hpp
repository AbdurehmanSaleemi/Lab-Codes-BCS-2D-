class Array
{
    private:
    static const int CAPACITY = 10;
    int arr[CAPACITY];

    public:
    void setArr(int inputArr[], int index);
    int getArr(int index);
    void printArr();
    Array();
    Array(int X[]);
};