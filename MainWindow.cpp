//
// Created by aquiles on 7/1/22.
//

#include "MainWindow.h"
using namespace  Gtk;
MainWindow::MainWindow() {
  // this->resize(200, 75);
    auto *boiteV = manage(new VBox);
    this->add(*boiteV);
//Création d’une barre de menu.
    auto barreMenu = manage(new MenuBar);
    barreMenu->show_all();
    boiteV->pack_start(*barreMenu, Gtk::PACK_SHRINK);
//Création de l’item menu fichier et ajout à la barre de menu.
    auto menuItemFichier = manage(new MenuItem("_Fichier", true));
    barreMenu->append(*menuItemFichier);
//Création du menu Fichier et ajout à l’item de menu Fichier.
    auto *menuFichier = manage(new Menu);
    menuItemFichier->set_submenu(*menuFichier);
//Création d’un item de menu à partir d’un Stock Item et ajout au menu.
    auto *menuNouveau =manage(new ImageMenuItem(Gtk::Stock::NEW));
    menuFichier->append(*menuNouveau);
//Sous‐menu : Fichier‐>Récents
    auto *menuItemFichiersRecents = manage(new MenuItem("_Récents", true));
    menuFichier->append(*menuItemFichiersRecents);//Utilisation de set_submenu() afin de créer un sous‐menu.
    auto *menuRecents = manage(new Menu);
    menuItemFichiersRecents->set_submenu(*menuRecents);
    auto *fichierRecent1 = manage(new MenuItem("Fichier récent 1"));
    menuRecents->append(*fichierRecent1);
    Gtk::MenuItem *fichierRecent2 = manage(new MenuItem ("Fichier récent 2"));
    menuRecents->append(*fichierRecent2);
//Fichier‐>Ouvrir
    auto *menuOuvrir = manage( new ImageMenuItem(Gtk::Stock::OPEN));
    menuFichier->append(*menuOuvrir);
//Fichier‐>Enregistrer
     auto *menuEnregistrer = manage( new ImageMenuItem(Gtk::Stock::SAVE));
    menuFichier->append(*menuEnregistrer);
//Ajout d’un séparateur au menu Fichier.
    auto *separateur = manage(new SeparatorMenuItem);
    menuFichier->append(*separateur);
//Fichier‐>Fermer
    auto *menuFermer = manage(new ImageMenuItem (Gtk::Stock::CLOSE));
    menuFichier->append(*menuFermer);
//Fichier‐>Quitter
    auto *menuQuitter = manage(new ImageMenuItem(Gtk::Stock::QUIT));
//Connexion du clic sur le menu Quitter à la fonction Gtk::Main::quit().
    menuQuitter->signal_activate().connect(sigc::ptr_fun(&Gtk::Main::quit));
    menuFichier->append(*menuQuitter);
//Menu édition
    auto *menuItemEdition = manage(new MenuItem("É_dition", true));
    barreMenu->append(*menuItemEdition);
    auto *menuEdition = manage(new Menu);
    menuItemEdition->set_submenu(*menuEdition);
   // set_title("tatataya");

    auto *edita = manage(new TextEdit);
    boiteV->pack_end(*edita);
   show_all();

}

MainWindow::~MainWindow() = default;
