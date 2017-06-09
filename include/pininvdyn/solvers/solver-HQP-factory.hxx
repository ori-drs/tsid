//
// Copyright (c) 2017 CNRS
//
// This file is part of PinInvDyn
// PinInvDyn is free software: you can redistribute it
// and/or modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation, either version
// 3 of the License, or (at your option) any later version.
// PinInvDyn is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Lesser Public License for more details. You should have
// received a copy of the GNU Lesser General Public License along with
// PinInvDyn If not, see
// <http://www.gnu.org/licenses/>.
//

#ifndef __invdyn_solvers_hqp_factory_hxx__
#define __invdyn_solvers_hqp_factory_hxx__

#include <pininvdyn/solvers/solver-HQP-factory.hpp>
#include <pininvdyn/solvers/solver-HQP-eiquadprog-rt.hpp>


namespace pininvdyn
{
  namespace solvers
  {
    
    template<int nVars, int nEqCon, int nIneqCon>
    Solver_HQP_base* SolverHQPFactory::createNewSolver(const SolverHQP solverType,
                                                       const std::string & name)
    {
      if(solverType==SOLVER_HQP_EIQUADPROG_RT)
        return new Solver_HQP_eiquadprog_rt<nVars, nEqCon, nIneqCon>(name);
      
      assert(false && "Specified solver type not recognized");
      return NULL;
    }
  }
}

#endif // ifndef __invdyn_solvers_hqp_factory_hxx__
