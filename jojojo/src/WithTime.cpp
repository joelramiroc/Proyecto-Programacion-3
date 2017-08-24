#include "WithTime.h"

WithTime::WithTime()
{
    this->score=0;
    this->archivo="CompetenciaConTiempos";
    this->typeGame="Con Tiempo";
    this->tiempoLimite=0;
    this->tiempoTranscurrido=0;
    ofstream nombreArchivo(archivo);
}

