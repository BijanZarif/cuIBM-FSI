/***************************************************************************//**
 * \file createSolver.h
 * \author Anush Krishnan (anush@bu.edu)
 * \brief Declaration of the function that creates the Navier-Stokes solver.
 */


#pragma once

#include "NavierStokesSolver.h"
#include "DirectForcingSolver.h"
#include "DFFSI.h"
#include "FadlunEtAlSolver.h"
#include "TairaColoniusSolver.h"
#include "DiffusionSolver.h"
#include "DFModifiedSolver.h"
#include "DFImprovedSolver.h"
#include "TCFSISolver.h"


// create the appropriate Navier-Stokes solver
template <typename memoryType>
NavierStokesSolver<memoryType>* createSolver(parameterDB &paramDB, domain &domInfo);
