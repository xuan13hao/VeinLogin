# Install script for directory: /home/jack/sddm.bak/data/translations

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/share/sddm/translations/ar.qm;/usr/local/share/sddm/translations/ca.qm;/usr/local/share/sddm/translations/cs.qm;/usr/local/share/sddm/translations/da.qm;/usr/local/share/sddm/translations/de.qm;/usr/local/share/sddm/translations/es.qm;/usr/local/share/sddm/translations/et.qm;/usr/local/share/sddm/translations/fi.qm;/usr/local/share/sddm/translations/fr.qm;/usr/local/share/sddm/translations/hi_IN.qm;/usr/local/share/sddm/translations/hu.qm;/usr/local/share/sddm/translations/it.qm;/usr/local/share/sddm/translations/ja.qm;/usr/local/share/sddm/translations/ko.qm;/usr/local/share/sddm/translations/lt.qm;/usr/local/share/sddm/translations/lv.qm;/usr/local/share/sddm/translations/nb.qm;/usr/local/share/sddm/translations/nn.qm;/usr/local/share/sddm/translations/pl.qm;/usr/local/share/sddm/translations/pt_BR.qm;/usr/local/share/sddm/translations/pt_PT.qm;/usr/local/share/sddm/translations/ro.qm;/usr/local/share/sddm/translations/sr.qm;/usr/local/share/sddm/translations/sr@ijekavian.qm;/usr/local/share/sddm/translations/sr@ijekavianlatin.qm;/usr/local/share/sddm/translations/sr@latin.qm;/usr/local/share/sddm/translations/sv.qm;/usr/local/share/sddm/translations/ru.qm;/usr/local/share/sddm/translations/tr.qm;/usr/local/share/sddm/translations/zh_CN.qm;/usr/local/share/sddm/translations/zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/share/sddm/translations" TYPE FILE FILES
    "/home/jack/sddm.bak/build/data/translations/ar.qm"
    "/home/jack/sddm.bak/build/data/translations/ca.qm"
    "/home/jack/sddm.bak/build/data/translations/cs.qm"
    "/home/jack/sddm.bak/build/data/translations/da.qm"
    "/home/jack/sddm.bak/build/data/translations/de.qm"
    "/home/jack/sddm.bak/build/data/translations/es.qm"
    "/home/jack/sddm.bak/build/data/translations/et.qm"
    "/home/jack/sddm.bak/build/data/translations/fi.qm"
    "/home/jack/sddm.bak/build/data/translations/fr.qm"
    "/home/jack/sddm.bak/build/data/translations/hi_IN.qm"
    "/home/jack/sddm.bak/build/data/translations/hu.qm"
    "/home/jack/sddm.bak/build/data/translations/it.qm"
    "/home/jack/sddm.bak/build/data/translations/ja.qm"
    "/home/jack/sddm.bak/build/data/translations/ko.qm"
    "/home/jack/sddm.bak/build/data/translations/lt.qm"
    "/home/jack/sddm.bak/build/data/translations/lv.qm"
    "/home/jack/sddm.bak/build/data/translations/nb.qm"
    "/home/jack/sddm.bak/build/data/translations/nn.qm"
    "/home/jack/sddm.bak/build/data/translations/pl.qm"
    "/home/jack/sddm.bak/build/data/translations/pt_BR.qm"
    "/home/jack/sddm.bak/build/data/translations/pt_PT.qm"
    "/home/jack/sddm.bak/build/data/translations/ro.qm"
    "/home/jack/sddm.bak/build/data/translations/sr.qm"
    "/home/jack/sddm.bak/build/data/translations/sr@ijekavian.qm"
    "/home/jack/sddm.bak/build/data/translations/sr@ijekavianlatin.qm"
    "/home/jack/sddm.bak/build/data/translations/sr@latin.qm"
    "/home/jack/sddm.bak/build/data/translations/sv.qm"
    "/home/jack/sddm.bak/build/data/translations/ru.qm"
    "/home/jack/sddm.bak/build/data/translations/tr.qm"
    "/home/jack/sddm.bak/build/data/translations/zh_CN.qm"
    "/home/jack/sddm.bak/build/data/translations/zh_TW.qm"
    )
endif()

