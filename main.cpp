/***************************************************************************
                          main.cpp  -  description
                             -------------------
    copyright            : (C) 2000 by Till Krech
    email                : till@snafu.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include <kapplication.h>
#include <kdeversion.h>
#include <kcmdlineargs.h>
#include <kaboutdata.h>
#include <klocale.h>

#include "klineal.h"

int main(int argc, char *argv[])
{
  KAboutData aboutData( "kruler", 0, ki18n("KDE Screen Ruler"),
    KDE_VERSION_STRING,
    ki18n("A screen ruler for the K Desktop Environment"),
    KAboutData::License_GPL,
    ki18n("(c) 2000, Till Krech"));
  aboutData.addAuthor(ki18n("Till Krech"),ki18n("Programming"), "till@snafu.de");
  aboutData.addCredit(ki18n("Gunnstein Lye"),ki18n("Initial port to KDE 2"), "gl@ez.no");
  KCmdLineArgs::init( argc, argv, &aboutData );

  KCmdLineOptions options;
  KCmdLineArgs::addCmdLineOptions( options ); // Add our own options.

  KApplication a;

  KLineal *ruler = new KLineal();
  ruler->show();

  return a.exec();
}
