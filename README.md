## ABSTRACT

[![Build Status](https://travis-ci.org/sddm/sddm.svg?branch=master)](https://travis-ci.org/sddm/sddm)
[![IRC Network](https://img.shields.io/badge/irc-freenode-blue.svg "IRC Freenode")](https://webchat.freenode.net/?channels=sddm)

Aiming at the problems of low efficiency, easily forgotten and stolen authentication of
traditional operating system password authentication scheme, based on the finger vein recognition
technology, by utilizing the features of non-contact, liveliness, high adaptability and high security,
modifying the original code of open source project SDDM and using PAM authentication
mechanism, a secure and reliable identity authentication system is designed on Space OS platform.
The experimental result shows that the Space OS authentication system using finger vein
recognition technology as authentication mode can run on Space OS for a long time and without
fault, whose finger vein recognition has high pass rate and low false accept rate, and has good
stability and higher security. 

## SPACE OS
The traditional operating system login is mainly done through a combination of user name and
password authentication. There is a problem of being stolen and forgotten, which cannot guarantee
the accuracy and security of identity authentication. Biometric technologies can verify their
identities through some physiological characteristics of human beings, with better safety and
convenience. As a result, more and more identities are now starting to use more secure biometric
technologies. At present, biometric technologies mainly include fingerprint recognition, iris
recognition, face recognition, palm vein recognition and finger vein recognition. Among them,
the finger vein recognition technology as a rising star in recent years has been rapid development.
Due to the uniqueness of the finger vein, forgery difficulty and biopotency, its safety has obvious
advantages over the traditional authentication methods and other biometric technologies.
However, no solution based on finger vein recognition technology at present is used in the
authentication of the operating system when logging in.
Space OS is a new operating system based on the Linux kernel with a number of independent
intellectual property rights, with features such as security, reliability, cross-platform and support for
interoperability. Its login, logout, session establishment, and shutdown are mainly achieved through
SDDM (Simple Desktop Display Manager). SDDM is an open source display manager that can
easily extend its original capabilities by modifying the source code.
In this paper, authentication system is based on SDDM by modifying and adding a large amount
of codes. Its finger vein recognition is supported through the PAM (Pluggable Authentication
Modules) authentication framework, by which the identity of the user is authenticated when they
login Space OS. Unlike other biometric technologies, such as fingerprint, finger vein is not easily
damaged, the recognition rate is high, and is not easily affected by environmental factors, which
greatly improves the stability and security of identity authentication system. In addition, the
PAM mechanism is a very mature security authentication mechanism that provides secure and
reliable authentication services for a wide range of applications. The Space OS authentication
system designed in this paper is applied to the identity authentication of the Space OS login, which
can effectively solve security problems such as password leakage and hacker attacks.

## SDDM

SDDM is a modern display manager for X11 and Wayland aiming to be fast, simple and beautiful.
It uses modern technologies like QtQuick, which in turn gives the designer the ability to
create smooth, animated user interfaces.

SDDM is extremely themeable. We put no restrictions on the user interface design,
it is completely up to the designer. We simply provide a few callbacks to the user interface
which can be used for authentication, suspend etc.

## PLAN DESIGN 
Space OS authentication system mainly includes login user interface, SDDM, PAM service and
finger vein recognition module. The login user interface is designed by QML in the custom SDDM
theme. The authentication framework at the bottom of the system uses PAM, combined with finger
vein recognition and achieve the login user interface and background service communication
through Qt signals and slots.

## VIDEOS

* [Video background](https://www.youtube.com/watch?v=kKwz2FQcE3c)
* [Maui theme 1](https://www.youtube.com/watch?v=-0d1wkcU9DU)
* [Maui theme 2](https://www.youtube.com/watch?v=dJ28mrOeuNA)

## RESOURCES

* [Issue tracker](https://github.com/sddm/sddm/issues)
* [Wiki](https://github.com/sddm/sddm/wiki)
* [Mailing List](https://groups.google.com/group/sddm-devel)
* IRC channel `#sddm` on [chat.freenode.net](https://webchat.freenode.net?channels=sddm)

## INSTALLATION

Qt >= 5.6.0 is required to use SDDM.

SDDM runs the greeter as a system user named "sddm" whose home directory needs
to be set to `/var/lib/sddm`.

If pam and systemd are available, the greeter will go through logind
which will give it access to drm devices.

Distributions without pam and systemd will need to put the "sddm" user
into the "video" group, otherwise errors regarding GL and drm devices
might be experienced.

## LICENSE

Source code of SDDM is licensed under GNU GPL version 2 or later (at your choosing).
QML files are MIT licensed and images are CC BY 3.0.

## TROUBLESHOOTING

### NVIDIA Prime

Add this at the bottom of the Xsetup script:

```sh
if [ -e /sbin/prime-offload ]; then
    echo running NVIDIA Prime setup /sbin/prime-offload, you will need to manually run /sbin/prime-switch to shut down
    /sbin/prime-offload
fi
```

### No User Icon

SDDM reads user icon from either ~/.face.icon or FacesDir/username.face.icon

You need to make sure that SDDM user have permissions to read those files.
In case you don't want to allow other users to access your $HOME you can use
ACLs if your filesystem does support it.

```sh
setfacl -m u:sddm:x /home/username
setfacl -m u:sddm:r /home/username/.face.icon
```

### Custom DPI

In order to set custom DPI for high resolution screens you should configure
Xorg yourself.  An easy way is to pass an additional argument to Xorg.

Edit ``/etc/sddm.conf``, go to the ``X11`` section and change ``ServerArguments`` like this:

```
ServerArguments=-nolisten tcp -dpi 192
```

to set DPI to 192.

As an alternative you can edit Xorg configuration ``xorg.conf``, please refer to the
Xorg documentation.
