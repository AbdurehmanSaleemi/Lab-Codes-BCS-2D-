class Rectangle
{
    private:
    unsigned int length;
    unsigned int width;

    public:
    void setLength(int lengthOfRect);
    void setWidth(int widthOfRect);
    void RotateRectanlge ();
    void draw();
    int getLength() const;
    int getWidth() const;
    int getArea() const;
    Rectangle();
    Rectangle(int x, int y);
};