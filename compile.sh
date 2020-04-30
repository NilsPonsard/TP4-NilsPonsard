#!/bin/sh

name=Digicode

function compile()
{
    mkdir -p build
    cd build
    echo "génération du makefile ..."
    qmake -makefile ../$name/$name.pro > /dev/null
    echo "compilation ..."
    make > /dev/null
    if [ $? -gt 0 ]
    then echo "erreur de compilation"
        exit 1
    fi
    return
}



if [ $# -eq 0 ]
then
    compile
elif [ $1 == "run" ]
then
    ./build/$name
elif [ $1 == "test" ]
then
    
    compile
    echo "lancement ..."
    ./$name
    
fi
