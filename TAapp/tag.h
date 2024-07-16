#ifndef TAG_H
#define TAG_H

#include <QWidget>

namespace Ui {
class Tag;
}

class Tag : public QWidget
{
    Q_OBJECT

public:
    explicit Tag(QWidget *parent = nullptr);
    void setTag(std::string s);
    void setSize(int x,int y);
    ~Tag();
    void setIndex(int i){
        index=i;
    }

    void connect_slot();

signals:
    void is_deleted(int i);



private slots:
    void on_deleteButton_clicked();

private:
    Ui::Tag *ui;
    int index;      //存储一个序号作为身份
};

#endif // TAG_H
