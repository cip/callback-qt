/*
 *  Copyright 2011 Wolfgang Koller - http://www.gofg.at/
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef PLUGINREGISTRY_H
#define PLUGINREGISTRY_H

#include <QMap>
#include <QString>

#include "pgplugin.h"

class PluginRegistry
{
public:
    PluginRegistry();

    static PluginRegistry* getRegistry();

    void registerPlugin( QString p_name, PGPlugin *p_plugin );

    PGPlugin* getPlugin( QString p_name );

private:
    static PluginRegistry* m_pluginRegistry;
    QMap<QString,PGPlugin*> *m_plugins;
};

#endif // PLUGINREGISTRY_H
