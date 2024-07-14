#ifndef TRIPUNIT_H
#define TRIPUNIT_H

#include <QWidget>

namespace Ui {
class tripUnit;
}

class tripUnit : public QWidget
{
    Q_OBJECT

public:
    explicit tripUnit(QWidget *parent = nullptr);
    void setTotal(const int type,const std::string b,const std::string e,const std::string n,const std::string t,const std::string c,const std::string d);
    void setBegin(const std::string b);
    void setEnd(const std::string e);
    void setName(const std::string n);
    void setTime(const std::string t);
    void setCost(const std::string c);
    void setType(const int type);
    void setDistance(const std::string d);


    ~tripUnit();

private:
    Ui::tripUnit *ui;
};

#endif // TRIPUNIT_H
