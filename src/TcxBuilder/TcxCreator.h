/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * GarminPlugin
 * Copyright (C) Andreas Diesner 2011 <garminplugin [AT] andreas.diesner [DOT] de>
 *
 * GarminPlugin is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * GarminPlugin is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef TCXCREATOR_H_INCLUDED
#define TCXCREATOR_H_INCLUDED

#include <string>

#include "tinyxml.h"

using namespace std;

class TcxCreator
{
public:
    TcxCreator();
    ~TcxCreator();

    TiXmlElement * getTiXml();

    void setName(string name);
    void setUnitId(string id);
    void setProductId(string id);
    void setVersion(string version);
    void setVersion(string major, string minor);
    void setBuild(string build);
    void setBuild(string major, string minor);

private:
    string name;
    string unitId;
    string productId;
    string versionMajor;
    string versionMinor;
    string buildMajor;
    string buildMinor;
};

#endif // TCXCREATOR_H_INCLUDED
