#include "WithMoviments.h"

WithMoviments::WithMoviments()
{
    this->score=0;
    this->archivo="CompetenciaConMovimientos";
    this->typeGame="Con Movimientos";
    this->movimientosLimite=0;
    this->movimientosRealizados=0;
    ofstream nombreArchivo(archivo);
}

