#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("CopperSpice");
    QMainWindow::centralWidget()->layout()->setContentsMargins(5, 1, 5, 1);
    //Sets the left, top, right, and bottom margins to use around the layout
    QMainWindow::resize(400,200);
    QFont appfont = QApplication::font();
    appfont.setPixelSize(18); //DPI
    QApplication::setFont(appfont);
    
       

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}



void MainWindow::on_pushButton_clicked()
{
	qDebug()<<"Pushbutton clicked";


	QString nameStr =ui->lineEdit->text();
	qDebug()<<"lineEdit Str= "<<nameStr;
    ui->labelName->setText(nameStr);


		
	
}







