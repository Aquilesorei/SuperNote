//
// Created by aquiles on 7/1/22.
//

#ifndef SUPERNOTE_TEXTEDIT_H
#define SUPERNOTE_TEXTEDIT_H
#include <gtkmm/button.h>
#include <gtkmm/stock.h>
#include <gtkmm/textview.h>

class TextEdit : public  Gtk::TextView
{
public:
    explicit TextEdit();
};
#endif //SUPERNOTE_TEXTEDIT_H
