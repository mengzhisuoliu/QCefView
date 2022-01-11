#ifndef QCEFVIEWTEST_H
#define QCEFVIEWTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_qcefviewtest.h"
#include "customcefview.h"

class QCefViewTest : public QMainWindow
{
  Q_OBJECT

public:
  QCefViewTest(QWidget* parent = 0);
  ~QCefViewTest();

//#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
//  virtual bool nativeEvent(const QByteArray &eventType, void *message, qintptr *result);
//#else
//  virtual bool nativeEvent(const QByteArray &eventType, void *message, long *result);
//#endif

protected slots:
  void onBtnChangeColorClicked();

private:
  Ui::QCefViewTestClass ui;
  CustomCefView* cefview;
};

#endif // QCEFVIEWTEST_H