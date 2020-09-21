
enum color_t
{
    m_r,m_b,m_g
};
class color
{
    int m_r,m_g,m_b;
public:
    color();
    color(int,int,int);
    color(int);
    color(color_t);
    int invert();
    void display();
    int redcolor();
    int greencolor();
    int bluecolor();

};
