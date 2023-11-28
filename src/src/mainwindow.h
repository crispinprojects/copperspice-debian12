#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    CS_OBJECT(MainWindow)

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
      

private :
    
    CS_SLOT_1(Private, void on_pushButton_clicked())
    CS_SLOT_2(on_pushButton_clicked)


       
    CS_SLOT_1(Private, void on_actionExit_triggered())
    CS_SLOT_2(on_actionExit_triggered) 
 

   

private:
    Ui::MainWindow *ui;
    
   
  
	    
};

#endif // MAINWINDOW_H
