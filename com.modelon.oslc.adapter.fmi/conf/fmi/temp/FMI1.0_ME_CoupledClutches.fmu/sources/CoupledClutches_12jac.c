/* Jacobians */
/* Simulation code for CoupledClutches generated by the OpenModelica Compiler 1.9.2+dev (r24999). */

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_xml.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#include <assert.h>
#include <string.h>

#include "CoupledClutches_functions.h"
#include "CoupledClutches_model.h"
#include "CoupledClutches_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#define threadData data->threadData

#include "CoupledClutches_12jac.h"
int CoupledClutches_initialAnalyticJacobianD(void* inData)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int CoupledClutches_initialAnalyticJacobianC(void* inData)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int CoupledClutches_initialAnalyticJacobianB(void* inData)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}

static void CoupledClutches_initialAnalyticJacobianA_0(DATA* data, int index)
{
  int i;
  /* write index for cref: 0 */
}

static void CoupledClutches_initialAnalyticJacobianA_1(DATA* data, int index)
{
  int i;
  /* write index for cref: 1 */
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[1] - 1;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+0] = 0;
}

static void CoupledClutches_initialAnalyticJacobianA_2(DATA* data, int index)
{
  int i;
  /* write index for cref: 2 */
}

static void CoupledClutches_initialAnalyticJacobianA_3(DATA* data, int index)
{
  int i;
  /* write index for cref: 3 */
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[3] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+0] = 1;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[3] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+1] = 2;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[3] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+2] = 3;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[3] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+3] = 5;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[3] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+4] = 7;
}

static void CoupledClutches_initialAnalyticJacobianA_4(DATA* data, int index)
{
  int i;
  /* write index for cref: 4 */
}

static void CoupledClutches_initialAnalyticJacobianA_5(DATA* data, int index)
{
  int i;
  /* write index for cref: 5 */
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[5] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+0] = 1;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[5] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+1] = 3;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[5] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+2] = 4;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[5] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+3] = 5;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[5] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+4] = 7;
}

static void CoupledClutches_initialAnalyticJacobianA_6(DATA* data, int index)
{
  int i;
  /* write index for cref: 6 */
}

static void CoupledClutches_initialAnalyticJacobianA_7(DATA* data, int index)
{
  int i;
  /* write index for cref: 7 */
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[7] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+0] = 1;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[7] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+1] = 3;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[7] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+2] = 5;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[7] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+3] = 6;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[7] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+4] = 7;
}


int CoupledClutches_initialAnalyticJacobianA(void* inData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = CoupledClutches_INDEX_JAC_A;
  
  int i;
  
  data->simulationInfo.analyticJacobians[index].sizeCols = 8;
  data->simulationInfo.analyticJacobians[index].sizeRows = 8;
  data->simulationInfo.analyticJacobians[index].sizeTmpVars = 0;
  data->simulationInfo.analyticJacobians[index].seedVars = (modelica_real*) calloc(8,sizeof(modelica_real));
  data->simulationInfo.analyticJacobians[index].resultVars = (modelica_real*) calloc(8,sizeof(modelica_real));
  data->simulationInfo.analyticJacobians[index].tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc(8*sizeof(int));
  data->simulationInfo.analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(16*sizeof(int));
  data->simulationInfo.analyticJacobians[index].sparsePattern.numberOfNoneZeros = 16;
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(8*sizeof(int));
  data->simulationInfo.analyticJacobians[index].sparsePattern.maxColors = 3;
  data->simulationInfo.analyticJacobians[index].jacobian = NULL;
  
  /* write column ptr of compressed sparse column*/
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[0] = 0;
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[1] = 1;
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[2] = 0;
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[3] = 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[4] = 0;
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[5] = 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[6] = 0;
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[7] = 5;
  for(i=1;i<8;++i)
      data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  
  /* call functions to write index for each cref */
  CoupledClutches_initialAnalyticJacobianA_0(data, index);
  CoupledClutches_initialAnalyticJacobianA_1(data, index);
  CoupledClutches_initialAnalyticJacobianA_2(data, index);
  CoupledClutches_initialAnalyticJacobianA_3(data, index);
  CoupledClutches_initialAnalyticJacobianA_4(data, index);
  CoupledClutches_initialAnalyticJacobianA_5(data, index);
  CoupledClutches_initialAnalyticJacobianA_6(data, index);
  CoupledClutches_initialAnalyticJacobianA_7(data, index);
  
  /* write color array */
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[7] = 1;
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[5] = 2;
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[0] = 3;
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[1] = 3;
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[2] = 3;
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[3] = 3;
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[4] = 3;
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[6] = 3;
  
  TRACE_POP
  return 0;
}

int CoupledClutches_functionJacD_column(void* data)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int CoupledClutches_functionJacC_column(void* data)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int CoupledClutches_functionJacB_column(void* data)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int CoupledClutches_functionJacA_column(void* inData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = CoupledClutches_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}

