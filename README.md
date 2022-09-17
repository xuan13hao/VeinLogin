## ABSTRACT
Aiming at the problems of low efficiency, easily forgotten and stolen authentication of
traditional operating system password authentication scheme, based on the finger vein recognition
technology, by utilizing the features of non-contact, liveliness, high adaptability and high security,
modifying the original code of open source project SDDM and using PAM authentication
mechanism, a secure and reliable identity authentication system is designed on Space OS platform.
The experimental result shows that the Space OS authentication system using finger vein
recognition technology as authentication mode can run on Space OS for a long time and without
fault, whose finger vein recognition has high pass rate and low false accept rate, and has good
stability and higher security. 

## Space OS
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
In this project, authentication system is based on SDDM by modifying and adding a large amount
of codes. Its finger vein recognition is supported through the PAM (Pluggable Authentication
Modules) authentication framework, by which the identity of the user is authenticated when they
login Space OS. Unlike other biometric technologies, such as fingerprint, finger vein is not easily
damaged, the recognition rate is high, and is not easily affected by environmental factors, which
greatly improves the stability and security of identity authentication system. In addition, the
PAM mechanism is a very mature security authentication mechanism that provides secure and
reliable authentication services for a wide range of applications. The Space OS authentication
system designed in this paper is applied to the identity authentication of the Space OS login, which
can effectively solve security problems such as password leakage and hacker attacks.

## Finger Vein Recognition
The processing of finger vein information by the Space OS authentication system is mainly done by the finger vein device. Finger vein information processing is composed of finger vein image collection, image processing (including image enhancement, segmentation and feature extraction) and identify matching. When a certain wavelength of near infrared light shines on the user's finger, it can capture the user's finger vein image information. 

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
Finger vein recognition functions are encapsulated in the fingervein.so library located in the
system library directory, which can be used by the Space OS authentication system to configure the
PAM service. When calling the finger vein recognition API, the Space OS authentication system
establishes a communication with the finger vein instrument and starts a series of operations. First,
the finger vein instrument is initialized; after the initialization is completed, the finger vein
information is collected and further processed; finally, matching of the finger vein information is
started to complete the authentication.


