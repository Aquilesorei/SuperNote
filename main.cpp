#include <iostream>
#include "MainWindow.h"
#include <gtkmm/main.h>
int main(int argc, char* argv[]) {
    Gtk::Main app(argc, argv);
    MainWindow fenetre;
    Gtk::Main::run(fenetre);
    return 0;
}