/**************************************************************************
**
** This file is part of Installer Framework
**
** Copyright (c) 2011-2012 Nokia Corporation and/or its subsidiary(-ies).
**
** Contact: Nokia Corporation (qt-info@nokia.com)
**
**
** GNU Lesser General Public License Usage
**
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this file.
** Please review the following information to ensure the GNU Lesser General
** Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** Other Usage
**
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**************************************************************************/

#ifndef QTCREATOR_CONSTANTS_H
#define QTCREATOR_CONSTANTS_H

// Begin - copied from Creator src\plugins\projectexplorer\toolchainmanager.cpp
static const char TOOLCHAIN_DATA_KEY[] = "ToolChain.";
static const char TOOLCHAIN_COUNT_KEY[] = "ToolChain.Count";
static const char TOOLCHAIN_FILE_VERSION_KEY[] = "Version";
static const char DEFAULT_DEBUGGER_COUNT_KEY[] = "DefaultDebugger.Count";
static const char DEFAULT_DEBUGGER_ABI_KEY[] = "DefaultDebugger.Abi.";
static const char DEFAULT_DEBUGGER_PATH_KEY[] = "DefaultDebugger.Path.";

static const char ID_KEY[] = "ProjectExplorer.ToolChain.Id";
static const char DISPLAY_NAME_KEY[] = "ProjectExplorer.ToolChain.DisplayName";
// End - copied from Creator

// Begin - copied from Creator src\plugins\qt4projectmanager\qtversionmanager.cpp
static const char QtVersionsSectionName[] = "QtVersions";
static const char newQtVersionsKey[] = "NewQtVersions";
// End - copied from Creator

//the values for these keys are built in packagemanagercore->value() on the fly
//so it is possible that the installer creator can choose the location for these settings files
static const QLatin1String scQtCreatorInstallerSettingsFile("QtCreatorInstallerSettingsFile");
static const QLatin1String scQtCreatorInstallerToolchainsFile("QtCreatorInstallerToolchainsFile");
static const QLatin1String scQtCreatorInstallerQtVersionFile("QtCreatorInstallerQtVersionFile");


#endif // QTCREATOR_CONSTANTS_H