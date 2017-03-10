/***************************************************************************
* Copyright (c) 2013 Abdurrahman AVCI <abdurrahmanavci@gmail.com>
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the
* Free Software Foundation, Inc.,
* 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
***************************************************************************/

#ifndef SDDM_CONSTANTS_H
#define SDDM_CONSTANTS_H

#define BIN_INSTALL_DIR             "/usr/local/bin"
#define LIBEXEC_INSTALL_DIR         "/usr/local/libexec"
#define DATA_INSTALL_DIR            "/usr/local/share/sddm"
#define SYS_CONFIG_DIR              "/etc"
#define IMPORTS_INSTALL_DIR         "/home/qt/5.7/gcc_64/qml"
#define COMPONENTS_TRANSLATION_DIR  "/usr/local/share/sddm/translations"
#define RUNTIME_DIR                 "/var/run/sddm"
#define STATE_DIR                   "/var/lib/sddm"

#define SESSION_COMMAND             "/usr/local/share/sddm/scripts/Xsession"
#define WAYLAND_SESSION_COMMAND     "/usr/local/share/sddm/scripts/wayland-session"

#define CONFIG_FILE                 "/etc/sddm.conf"
#define LOG_FILE                    "/var/log/sddm.log"
#define MINIMUM_VT                  1

#define UID_MIN                     1000
#define UID_MAX                     60000

#define HALT_COMMAND "/usr/bin/systemctl poweroff"
#define REBOOT_COMMAND "/usr/bin/systemctl reboot"

#endif // SDDM_CONSTANTS_H
