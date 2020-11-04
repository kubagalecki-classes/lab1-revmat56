class Wektor2D
{
    Wektor2D() { xcoor = 0.; ycoor = 0.;}
    Wektor2D (double x, double y)
    {
        xcoor = x;
        ycoor = y;
    }
  
    void setX(int a) { xcoor = a; }
    int  getY()      { return xcoor; }
    void setX(int b) { ycoor = b; }
    int  getY()      { return ycoor; }
 
    Wektor2D operator+(Wektor2D w1, Wektor w2)
    {
    return Wektor2D{w1, w2}
    }
    

    
    double  xcoor;
    double  ycoor;
};
