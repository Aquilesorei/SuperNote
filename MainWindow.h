//
// Created by aquiles on 7/1/22.
//

#ifndef SUPERNOTE_MAINWINDOW_H
#define SUPERNOTE_MAINWINDOW_H
//#include <gtkmm.h> inclut toutes  les classes de gtk
#include <gtkmm/button.h>
#include "TextEdit.h"
#include <gtkmm/box.h>
#include <gtkmm/imagemenuitem.h>
#include <gtkmm/main.h>
#include <gtkmm/menu.h>
#include <gtkmm/menubar.h>
#include <gtkmm/menuitem.h>
#include <gtkmm/separatormenuitem.h>
#include <gtkmm/stock.h>
#include <gtkmm/window.h>

class  MainWindow : public Gtk::Window
{
public:
    explicit MainWindow();
    ~MainWindow();
private:


};
#endif //SUPERNOTE_MAINWINDOW_H
