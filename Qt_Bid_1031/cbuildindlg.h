#ifndef CBUILDINDLG_H
#define CBUILDINDLG_H

#include <QDialog>
#include <QtWidgets>
#include <QPushButton>
#include <QTextEdit>

class CBuildinDlg : public QDialog
{
    Q_OBJECT

public:
    CBuildinDlg(QWidget *parent = 0);
    ~CBuildinDlg();

private:
    QTextEdit   * displayTextEdit;
    QPushButton * colorPushBtn;
    QPushButton * textColorPushBtn;
    QPushButton * errorPushBtn;
    QPushButton * filePushBtn;
    QPushButton * fontPushBtn;
    QPushButton * inputPushBtn;
    QPushButton * pagePushBtn;
    QPushButton * progressPushBtn;
    QPushButton * printPushBtn;
    QErrorMessage * errorBox;
private slots:
    void doPushBtn();
};
#endif // CBUILTDIALOGS_H
