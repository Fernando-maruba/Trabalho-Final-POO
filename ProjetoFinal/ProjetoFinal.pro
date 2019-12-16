QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Aluno.cpp \
    Materia.cpp \
    Pessoa.cpp \
    Professor.cpp \
    Sistema.cpp \
    adicionarcursante.cpp \
    adicionarfalta.cpp \
    adicionarministrante.cpp \
    cadastroaluno.cpp \
    cadastromateria.cpp \
    cadastroprofessor.cpp \
    imprimiraluno.cpp \
    imprimirmateria.cpp \
    imprimirprofessor.cpp \
    main.cpp \
    mainwindow.cpp \
    telacadastros.cpp \
    telaconsulta.cpp \
    telamaterias.cpp

HEADERS += \
    Aluno.h \
    Materia.h \
    Pessoa.h \
    Professor.h \
    Sistema.h \
    adicionarcursante.h \
    adicionarfalta.h \
    adicionarministrante.h \
    cadastroaluno.h \
    cadastromateria.h \
    cadastroprofessor.h \
    imprimiraluno.h \
    imprimirmateria.h \
    imprimirprofessor.h \
    mainwindow.h \
    telacadastros.h \
    telaconsulta.h \
    telamaterias.h

FORMS += \
    Main.ui \
    Selec_cadastro.ui \
    Selec_imprimir.ui \
    Selec_materia.ui \
    adicionarcursante.ui \
    adicionarfalta.ui \
    adicionarministrante.ui \
    cadastroaluno.ui \
    cadastromateria.ui \
    cadastroprofessor.ui \
    imprimiraluno.ui \
    imprimirmateria.ui \
    imprimirprofessor.ui \
    mainwindow.ui \
    telacadastros.ui \
    telaconsulta.ui \
    telamaterias.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
