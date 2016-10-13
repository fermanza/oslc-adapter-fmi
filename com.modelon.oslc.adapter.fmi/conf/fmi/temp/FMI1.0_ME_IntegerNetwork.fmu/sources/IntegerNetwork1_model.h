/* Simulation code for IntegerNetwork1 generated by the OpenModelica Compiler 1.9.2+dev (r24999). */
#define time data->localData[0]->timeValue

/* States */

/* StatesDerivatives */

/* Non Discrete Real Algebraic Vars */
/* y5 */
#define _$Py5(i) data->localData[i]->realVars[0]
#define $Py5 _$Py5(0)
#define $P$PRE$Py5 data->simulationInfo.realVarsPre[0]
#define $P$ATTRIBUTE$Py5 data->modelData.realVarsData[0].attribute
#define $P$ATTRIBUTE$P$PRE$Py5 $P$ATTRIBUTE$Py5
#define $Py5__varInfo data->modelData.realVarsData[0].info
#define $P$PRE$Py5__varInfo data->modelData.realVarsData[0].info
#define _$P$PRE$Py5(i) $P$PRE$Py5


/* Discrete Real Algebraic Vars */
/* booleanPulse1.pulsStart */
#define _$PbooleanPulse1$PpulsStart(i) data->localData[i]->realVars[1]
#define $PbooleanPulse1$PpulsStart _$PbooleanPulse1$PpulsStart(0)
#define $P$PRE$PbooleanPulse1$PpulsStart data->simulationInfo.realVarsPre[1]
#define $P$ATTRIBUTE$PbooleanPulse1$PpulsStart data->modelData.realVarsData[1].attribute
#define $P$ATTRIBUTE$P$PRE$PbooleanPulse1$PpulsStart $P$ATTRIBUTE$PbooleanPulse1$PpulsStart
#define $PbooleanPulse1$PpulsStart__varInfo data->modelData.realVarsData[1].info
#define $P$PRE$PbooleanPulse1$PpulsStart__varInfo data->modelData.realVarsData[1].info
#define _$P$PRE$PbooleanPulse1$PpulsStart(i) $P$PRE$PbooleanPulse1$PpulsStart


/* booleanPulse2.pulsStart */
#define _$PbooleanPulse2$PpulsStart(i) data->localData[i]->realVars[2]
#define $PbooleanPulse2$PpulsStart _$PbooleanPulse2$PpulsStart(0)
#define $P$PRE$PbooleanPulse2$PpulsStart data->simulationInfo.realVarsPre[2]
#define $P$ATTRIBUTE$PbooleanPulse2$PpulsStart data->modelData.realVarsData[2].attribute
#define $P$ATTRIBUTE$P$PRE$PbooleanPulse2$PpulsStart $P$ATTRIBUTE$PbooleanPulse2$PpulsStart
#define $PbooleanPulse2$PpulsStart__varInfo data->modelData.realVarsData[2].info
#define $P$PRE$PbooleanPulse2$PpulsStart__varInfo data->modelData.realVarsData[2].info
#define _$P$PRE$PbooleanPulse2$PpulsStart(i) $P$PRE$PbooleanPulse2$PpulsStart


/* Nonlinear Constraints For Dyn. Optimization */

/* Nonlinear Final Constraints For Dyn. Optimization */

/* Algebraic Parameter */
/* booleanPulse1.Twidth */
#define $PbooleanPulse1$PTwidth data->simulationInfo.realParameter[0]
#define _$PbooleanPulse1$PTwidth(i) $PbooleanPulse1$PTwidth
#define $P$ATTRIBUTE$PbooleanPulse1$PTwidth data->modelData.realParameterData[0].attribute
#define $P$ATTRIBUTE$P$PRE$PbooleanPulse1$PTwidth $P$ATTRIBUTE$PbooleanPulse1$PTwidth
#define $PbooleanPulse1$PTwidth__varInfo data->modelData.realParameterData[0].info


/* booleanPulse1.period */
#define $PbooleanPulse1$Pperiod data->simulationInfo.realParameter[1]
#define _$PbooleanPulse1$Pperiod(i) $PbooleanPulse1$Pperiod
#define $P$ATTRIBUTE$PbooleanPulse1$Pperiod data->modelData.realParameterData[1].attribute
#define $P$ATTRIBUTE$P$PRE$PbooleanPulse1$Pperiod $P$ATTRIBUTE$PbooleanPulse1$Pperiod
#define $PbooleanPulse1$Pperiod__varInfo data->modelData.realParameterData[1].info


/* booleanPulse1.startTime */
#define $PbooleanPulse1$PstartTime data->simulationInfo.realParameter[2]
#define _$PbooleanPulse1$PstartTime(i) $PbooleanPulse1$PstartTime
#define $P$ATTRIBUTE$PbooleanPulse1$PstartTime data->modelData.realParameterData[2].attribute
#define $P$ATTRIBUTE$P$PRE$PbooleanPulse1$PstartTime $P$ATTRIBUTE$PbooleanPulse1$PstartTime
#define $PbooleanPulse1$PstartTime__varInfo data->modelData.realParameterData[2].info


/* booleanPulse1.width */
#define $PbooleanPulse1$Pwidth data->simulationInfo.realParameter[3]
#define _$PbooleanPulse1$Pwidth(i) $PbooleanPulse1$Pwidth
#define $P$ATTRIBUTE$PbooleanPulse1$Pwidth data->modelData.realParameterData[3].attribute
#define $P$ATTRIBUTE$P$PRE$PbooleanPulse1$Pwidth $P$ATTRIBUTE$PbooleanPulse1$Pwidth
#define $PbooleanPulse1$Pwidth__varInfo data->modelData.realParameterData[3].info


/* booleanPulse2.Twidth */
#define $PbooleanPulse2$PTwidth data->simulationInfo.realParameter[4]
#define _$PbooleanPulse2$PTwidth(i) $PbooleanPulse2$PTwidth
#define $P$ATTRIBUTE$PbooleanPulse2$PTwidth data->modelData.realParameterData[4].attribute
#define $P$ATTRIBUTE$P$PRE$PbooleanPulse2$PTwidth $P$ATTRIBUTE$PbooleanPulse2$PTwidth
#define $PbooleanPulse2$PTwidth__varInfo data->modelData.realParameterData[4].info


/* booleanPulse2.period */
#define $PbooleanPulse2$Pperiod data->simulationInfo.realParameter[5]
#define _$PbooleanPulse2$Pperiod(i) $PbooleanPulse2$Pperiod
#define $P$ATTRIBUTE$PbooleanPulse2$Pperiod data->modelData.realParameterData[5].attribute
#define $P$ATTRIBUTE$P$PRE$PbooleanPulse2$Pperiod $P$ATTRIBUTE$PbooleanPulse2$Pperiod
#define $PbooleanPulse2$Pperiod__varInfo data->modelData.realParameterData[5].info


/* booleanPulse2.startTime */
#define $PbooleanPulse2$PstartTime data->simulationInfo.realParameter[6]
#define _$PbooleanPulse2$PstartTime(i) $PbooleanPulse2$PstartTime
#define $P$ATTRIBUTE$PbooleanPulse2$PstartTime data->modelData.realParameterData[6].attribute
#define $P$ATTRIBUTE$P$PRE$PbooleanPulse2$PstartTime $P$ATTRIBUTE$PbooleanPulse2$PstartTime
#define $PbooleanPulse2$PstartTime__varInfo data->modelData.realParameterData[6].info


/* booleanPulse2.width */
#define $PbooleanPulse2$Pwidth data->simulationInfo.realParameter[7]
#define _$PbooleanPulse2$Pwidth(i) $PbooleanPulse2$Pwidth
#define $P$ATTRIBUTE$PbooleanPulse2$Pwidth data->modelData.realParameterData[7].attribute
#define $P$ATTRIBUTE$P$PRE$PbooleanPulse2$Pwidth $P$ATTRIBUTE$PbooleanPulse2$Pwidth
#define $PbooleanPulse2$Pwidth__varInfo data->modelData.realParameterData[7].info


/* sine.amplitude */
#define $Psine$Pamplitude data->simulationInfo.realParameter[8]
#define _$Psine$Pamplitude(i) $Psine$Pamplitude
#define $P$ATTRIBUTE$Psine$Pamplitude data->modelData.realParameterData[8].attribute
#define $P$ATTRIBUTE$P$PRE$Psine$Pamplitude $P$ATTRIBUTE$Psine$Pamplitude
#define $Psine$Pamplitude__varInfo data->modelData.realParameterData[8].info


/* sine.freqHz */
#define $Psine$PfreqHz data->simulationInfo.realParameter[9]
#define _$Psine$PfreqHz(i) $Psine$PfreqHz
#define $P$ATTRIBUTE$Psine$PfreqHz data->modelData.realParameterData[9].attribute
#define $P$ATTRIBUTE$P$PRE$Psine$PfreqHz $P$ATTRIBUTE$Psine$PfreqHz
#define $Psine$PfreqHz__varInfo data->modelData.realParameterData[9].info


/* sine.offset */
#define $Psine$Poffset data->simulationInfo.realParameter[10]
#define _$Psine$Poffset(i) $Psine$Poffset
#define $P$ATTRIBUTE$Psine$Poffset data->modelData.realParameterData[10].attribute
#define $P$ATTRIBUTE$P$PRE$Psine$Poffset $P$ATTRIBUTE$Psine$Poffset
#define $Psine$Poffset__varInfo data->modelData.realParameterData[10].info


/* sine.phase */
#define $Psine$Pphase data->simulationInfo.realParameter[11]
#define _$Psine$Pphase(i) $Psine$Pphase
#define $P$ATTRIBUTE$Psine$Pphase data->modelData.realParameterData[11].attribute
#define $P$ATTRIBUTE$P$PRE$Psine$Pphase $P$ATTRIBUTE$Psine$Pphase
#define $Psine$Pphase__varInfo data->modelData.realParameterData[11].info


/* sine.startTime */
#define $Psine$PstartTime data->simulationInfo.realParameter[12]
#define _$Psine$PstartTime(i) $Psine$PstartTime
#define $P$ATTRIBUTE$Psine$PstartTime data->modelData.realParameterData[12].attribute
#define $P$ATTRIBUTE$P$PRE$Psine$PstartTime $P$ATTRIBUTE$Psine$PstartTime
#define $Psine$PstartTime__varInfo data->modelData.realParameterData[12].info


/* External Objects */

/* Algebraic Integer Vars */
/* integerStep */
#define _$PintegerStep(i) data->localData[i]->integerVars[0]
#define $PintegerStep _$PintegerStep(0)
#define $P$PRE$PintegerStep data->simulationInfo.integerVarsPre[0]
#define $P$ATTRIBUTE$PintegerStep data->modelData.integerVarsData[0].attribute
#define $P$ATTRIBUTE$P$PRE$PintegerStep $P$ATTRIBUTE$PintegerStep
#define $PintegerStep__varInfo data->modelData.integerVarsData[0].info
#define $P$PRE$PintegerStep__varInfo data->modelData.integerVarsData[0].info
#define _$P$PRE$PintegerStep(i) $P$PRE$PintegerStep


/* multiSwitch1.expr */
#define _$PmultiSwitch1$Pexpr(i) data->localData[i]->integerVars[1]
#define $PmultiSwitch1$Pexpr _$PmultiSwitch1$Pexpr(0)
#define $P$PRE$PmultiSwitch1$Pexpr data->simulationInfo.integerVarsPre[1]

#define $PmultiSwitch1$Pexpr_index(i_1)    (&$PmultiSwitch1$Pexpr)[calc_base_index_dims_subs(1, 2, i_1)]
#define $P$PRE$PmultiSwitch1$Pexpr_index(i_1)    (&$P$PRE$PmultiSwitch1$Pexpr)[calc_base_index_dims_subs(1, 2, i_1)]

/* multiSwitch1.expr[1] */
#define _$PmultiSwitch1$Pexpr$lB1$rB(i) data->localData[i]->integerVars[1]
#define $PmultiSwitch1$Pexpr$lB1$rB _$PmultiSwitch1$Pexpr$lB1$rB(0)
#define $P$PRE$PmultiSwitch1$Pexpr$lB1$rB data->simulationInfo.integerVarsPre[1]
#define $P$ATTRIBUTE$PmultiSwitch1$Pexpr$lB1$rB data->modelData.integerVarsData[1].attribute
#define $P$ATTRIBUTE$P$PRE$PmultiSwitch1$Pexpr$lB1$rB $P$ATTRIBUTE$PmultiSwitch1$Pexpr$lB1$rB
#define $PmultiSwitch1$Pexpr$lB1$rB__varInfo data->modelData.integerVarsData[1].info
#define $P$PRE$PmultiSwitch1$Pexpr$lB1$rB__varInfo data->modelData.integerVarsData[1].info


/* multiSwitch1.expr[2] */
#define _$PmultiSwitch1$Pexpr$lB2$rB(i) data->localData[i]->integerVars[2]
#define $PmultiSwitch1$Pexpr$lB2$rB _$PmultiSwitch1$Pexpr$lB2$rB(0)
#define $P$PRE$PmultiSwitch1$Pexpr$lB2$rB data->simulationInfo.integerVarsPre[2]
#define $P$ATTRIBUTE$PmultiSwitch1$Pexpr$lB2$rB data->modelData.integerVarsData[2].attribute
#define $P$ATTRIBUTE$P$PRE$PmultiSwitch1$Pexpr$lB2$rB $P$ATTRIBUTE$PmultiSwitch1$Pexpr$lB2$rB
#define $PmultiSwitch1$Pexpr$lB2$rB__varInfo data->modelData.integerVarsData[2].info
#define $P$PRE$PmultiSwitch1$Pexpr$lB2$rB__varInfo data->modelData.integerVarsData[2].info
#define _$P$PRE$PmultiSwitch1$Pexpr$lB2$rB(i) $P$PRE$PmultiSwitch1$Pexpr$lB2$rB


/* multiSwitch1.firstActiveIndex */
#define _$PmultiSwitch1$PfirstActiveIndex(i) data->localData[i]->integerVars[3]
#define $PmultiSwitch1$PfirstActiveIndex _$PmultiSwitch1$PfirstActiveIndex(0)
#define $P$PRE$PmultiSwitch1$PfirstActiveIndex data->simulationInfo.integerVarsPre[3]
#define $P$ATTRIBUTE$PmultiSwitch1$PfirstActiveIndex data->modelData.integerVarsData[3].attribute
#define $P$ATTRIBUTE$P$PRE$PmultiSwitch1$PfirstActiveIndex $P$ATTRIBUTE$PmultiSwitch1$PfirstActiveIndex
#define $PmultiSwitch1$PfirstActiveIndex__varInfo data->modelData.integerVarsData[3].info
#define $P$PRE$PmultiSwitch1$PfirstActiveIndex__varInfo data->modelData.integerVarsData[3].info
#define _$P$PRE$PmultiSwitch1$PfirstActiveIndex(i) $P$PRE$PmultiSwitch1$PfirstActiveIndex


/* multiSwitch1.y */
#define _$PmultiSwitch1$Py(i) data->localData[i]->integerVars[4]
#define $PmultiSwitch1$Py _$PmultiSwitch1$Py(0)
#define $P$PRE$PmultiSwitch1$Py data->simulationInfo.integerVarsPre[4]
#define $P$ATTRIBUTE$PmultiSwitch1$Py data->modelData.integerVarsData[4].attribute
#define $P$ATTRIBUTE$P$PRE$PmultiSwitch1$Py $P$ATTRIBUTE$PmultiSwitch1$Py
#define $PmultiSwitch1$Py__varInfo data->modelData.integerVarsData[4].info
#define $P$PRE$PmultiSwitch1$Py__varInfo data->modelData.integerVarsData[4].info
#define _$P$PRE$PmultiSwitch1$Py(i) $P$PRE$PmultiSwitch1$Py


/* showValue.number */
#define _$PshowValue$Pnumber(i) data->localData[i]->integerVars[5]
#define $PshowValue$Pnumber _$PshowValue$Pnumber(0)
#define $P$PRE$PshowValue$Pnumber data->simulationInfo.integerVarsPre[5]
#define $P$ATTRIBUTE$PshowValue$Pnumber data->modelData.integerVarsData[5].attribute
#define $P$ATTRIBUTE$P$PRE$PshowValue$Pnumber $P$ATTRIBUTE$PshowValue$Pnumber
#define $PshowValue$Pnumber__varInfo data->modelData.integerVarsData[5].info
#define $P$PRE$PshowValue$Pnumber__varInfo data->modelData.integerVarsData[5].info
#define _$P$PRE$PshowValue$Pnumber(i) $P$PRE$PshowValue$Pnumber


/* showValue1.number */
#define _$PshowValue1$Pnumber(i) data->localData[i]->integerVars[6]
#define $PshowValue1$Pnumber _$PshowValue1$Pnumber(0)
#define $P$PRE$PshowValue1$Pnumber data->simulationInfo.integerVarsPre[6]
#define $P$ATTRIBUTE$PshowValue1$Pnumber data->modelData.integerVarsData[6].attribute
#define $P$ATTRIBUTE$P$PRE$PshowValue1$Pnumber $P$ATTRIBUTE$PshowValue1$Pnumber
#define $PshowValue1$Pnumber__varInfo data->modelData.integerVarsData[6].info
#define $P$PRE$PshowValue1$Pnumber__varInfo data->modelData.integerVarsData[6].info
#define _$P$PRE$PshowValue1$Pnumber(i) $P$PRE$PshowValue1$Pnumber


/* showValue2.number */
#define _$PshowValue2$Pnumber(i) data->localData[i]->integerVars[7]
#define $PshowValue2$Pnumber _$PshowValue2$Pnumber(0)
#define $P$PRE$PshowValue2$Pnumber data->simulationInfo.integerVarsPre[7]
#define $P$ATTRIBUTE$PshowValue2$Pnumber data->modelData.integerVarsData[7].attribute
#define $P$ATTRIBUTE$P$PRE$PshowValue2$Pnumber $P$ATTRIBUTE$PshowValue2$Pnumber
#define $PshowValue2$Pnumber__varInfo data->modelData.integerVarsData[7].info
#define $P$PRE$PshowValue2$Pnumber__varInfo data->modelData.integerVarsData[7].info
#define _$P$PRE$PshowValue2$Pnumber(i) $P$PRE$PshowValue2$Pnumber


/* triggeredAdd.local_set */
#define _$PtriggeredAdd$Plocal_set(i) data->localData[i]->integerVars[8]
#define $PtriggeredAdd$Plocal_set _$PtriggeredAdd$Plocal_set(0)
#define $P$PRE$PtriggeredAdd$Plocal_set data->simulationInfo.integerVarsPre[8]
#define $P$ATTRIBUTE$PtriggeredAdd$Plocal_set data->modelData.integerVarsData[8].attribute
#define $P$ATTRIBUTE$P$PRE$PtriggeredAdd$Plocal_set $P$ATTRIBUTE$PtriggeredAdd$Plocal_set
#define $PtriggeredAdd$Plocal_set__varInfo data->modelData.integerVarsData[8].info
#define $P$PRE$PtriggeredAdd$Plocal_set__varInfo data->modelData.integerVarsData[8].info
#define _$P$PRE$PtriggeredAdd$Plocal_set(i) $P$PRE$PtriggeredAdd$Plocal_set


/* triggeredAdd.y */
#define _$PtriggeredAdd$Py(i) data->localData[i]->integerVars[9]
#define $PtriggeredAdd$Py _$PtriggeredAdd$Py(0)
#define $P$PRE$PtriggeredAdd$Py data->simulationInfo.integerVarsPre[9]
#define $P$ATTRIBUTE$PtriggeredAdd$Py data->modelData.integerVarsData[9].attribute
#define $P$ATTRIBUTE$P$PRE$PtriggeredAdd$Py $P$ATTRIBUTE$PtriggeredAdd$Py
#define $PtriggeredAdd$Py__varInfo data->modelData.integerVarsData[9].info
#define $P$PRE$PtriggeredAdd$Py__varInfo data->modelData.integerVarsData[9].info
#define _$P$PRE$PtriggeredAdd$Py(i) $P$PRE$PtriggeredAdd$Py


/* y */
#define _$Py(i) data->localData[i]->integerVars[10]
#define $Py _$Py(0)
#define $P$PRE$Py data->simulationInfo.integerVarsPre[10]
#define $P$ATTRIBUTE$Py data->modelData.integerVarsData[10].attribute
#define $P$ATTRIBUTE$P$PRE$Py $P$ATTRIBUTE$Py
#define $Py__varInfo data->modelData.integerVarsData[10].info
#define $P$PRE$Py__varInfo data->modelData.integerVarsData[10].info
#define _$P$PRE$Py(i) $P$PRE$Py


/* y1 */
#define _$Py1(i) data->localData[i]->integerVars[11]
#define $Py1 _$Py1(0)
#define $P$PRE$Py1 data->simulationInfo.integerVarsPre[11]
#define $P$ATTRIBUTE$Py1 data->modelData.integerVarsData[11].attribute
#define $P$ATTRIBUTE$P$PRE$Py1 $P$ATTRIBUTE$Py1
#define $Py1__varInfo data->modelData.integerVarsData[11].info
#define $P$PRE$Py1__varInfo data->modelData.integerVarsData[11].info
#define _$P$PRE$Py1(i) $P$PRE$Py1


/* y2 */
#define _$Py2(i) data->localData[i]->integerVars[12]
#define $Py2 _$Py2(0)
#define $P$PRE$Py2 data->simulationInfo.integerVarsPre[12]
#define $P$ATTRIBUTE$Py2 data->modelData.integerVarsData[12].attribute
#define $P$ATTRIBUTE$P$PRE$Py2 $P$ATTRIBUTE$Py2
#define $Py2__varInfo data->modelData.integerVarsData[12].info
#define $P$PRE$Py2__varInfo data->modelData.integerVarsData[12].info
#define _$P$PRE$Py2(i) $P$PRE$Py2


/* y3 */
#define _$Py3(i) data->localData[i]->integerVars[13]
#define $Py3 _$Py3(0)
#define $P$PRE$Py3 data->simulationInfo.integerVarsPre[13]
#define $P$ATTRIBUTE$Py3 data->modelData.integerVarsData[13].attribute
#define $P$ATTRIBUTE$P$PRE$Py3 $P$ATTRIBUTE$Py3
#define $Py3__varInfo data->modelData.integerVarsData[13].info
#define $P$PRE$Py3__varInfo data->modelData.integerVarsData[13].info
#define _$P$PRE$Py3(i) $P$PRE$Py3


/* y4 */
#define _$Py4(i) data->localData[i]->integerVars[14]
#define $Py4 _$Py4(0)
#define $P$PRE$Py4 data->simulationInfo.integerVarsPre[14]
#define $P$ATTRIBUTE$Py4 data->modelData.integerVarsData[14].attribute
#define $P$ATTRIBUTE$P$PRE$Py4 $P$ATTRIBUTE$Py4
#define $Py4__varInfo data->modelData.integerVarsData[14].info
#define $P$PRE$Py4__varInfo data->modelData.integerVarsData[14].info
#define _$P$PRE$Py4(i) $P$PRE$Py4


/* Algebraic Integer Parameter */
/* integerConstant.k */
#define $PintegerConstant$Pk data->simulationInfo.integerParameter[0]
#define _$PintegerConstant$Pk(i) $PintegerConstant$Pk
#define $P$ATTRIBUTE$PintegerConstant$Pk data->modelData.integerParameterData[0].attribute
#define $P$ATTRIBUTE$P$PRE$PintegerConstant$Pk $P$ATTRIBUTE$PintegerConstant$Pk
#define $PintegerConstant$Pk__varInfo data->modelData.integerParameterData[0].info


/* multiSwitch1.nu */
#define $PmultiSwitch1$Pnu data->simulationInfo.integerParameter[1]
#define _$PmultiSwitch1$Pnu(i) $PmultiSwitch1$Pnu
#define $P$ATTRIBUTE$PmultiSwitch1$Pnu data->modelData.integerParameterData[1].attribute
#define $P$ATTRIBUTE$P$PRE$PmultiSwitch1$Pnu $P$ATTRIBUTE$PmultiSwitch1$Pnu
#define $PmultiSwitch1$Pnu__varInfo data->modelData.integerParameterData[1].info


/* multiSwitch1.y_default */
#define $PmultiSwitch1$Py_default data->simulationInfo.integerParameter[2]
#define _$PmultiSwitch1$Py_default(i) $PmultiSwitch1$Py_default
#define $P$ATTRIBUTE$PmultiSwitch1$Py_default data->modelData.integerParameterData[2].attribute
#define $P$ATTRIBUTE$P$PRE$PmultiSwitch1$Py_default $P$ATTRIBUTE$PmultiSwitch1$Py_default
#define $PmultiSwitch1$Py_default__varInfo data->modelData.integerParameterData[2].info


/* product.nu */
#define $Pproduct$Pnu data->simulationInfo.integerParameter[3]
#define _$Pproduct$Pnu(i) $Pproduct$Pnu
#define $P$ATTRIBUTE$Pproduct$Pnu data->modelData.integerParameterData[3].attribute
#define $P$ATTRIBUTE$P$PRE$Pproduct$Pnu $P$ATTRIBUTE$Pproduct$Pnu
#define $Pproduct$Pnu__varInfo data->modelData.integerParameterData[3].info


/* sum.k */
#define $Psum$Pk data->simulationInfo.integerParameter[4]

#define $Psum$Pk_index(i_1)    (&$Psum$Pk)[calc_base_index_dims_subs(1, 3, i_1)]

/* sum.k[1] */
#define $Psum$Pk$lB1$rB data->simulationInfo.integerParameter[4]
#define $P$ATTRIBUTE$Psum$Pk$lB1$rB data->modelData.integerParameterData[4].attribute
#define $P$ATTRIBUTE$P$PRE$Psum$Pk$lB1$rB $P$ATTRIBUTE$Psum$Pk$lB1$rB
#define _$Psum$Pk$lB1$rB(i) $Psum$Pk$lB1$rB
#define $Psum$Pk$lB1$rB__varInfo data->modelData.integerParameterData[4].info


/* sum.k[2] */
#define $Psum$Pk$lB2$rB data->simulationInfo.integerParameter[5]
#define _$Psum$Pk$lB2$rB(i) $Psum$Pk$lB2$rB
#define $P$ATTRIBUTE$Psum$Pk$lB2$rB data->modelData.integerParameterData[5].attribute
#define $P$ATTRIBUTE$P$PRE$Psum$Pk$lB2$rB $P$ATTRIBUTE$Psum$Pk$lB2$rB
#define $Psum$Pk$lB2$rB__varInfo data->modelData.integerParameterData[5].info


/* sum.k[3] */
#define $Psum$Pk$lB3$rB data->simulationInfo.integerParameter[6]
#define _$Psum$Pk$lB3$rB(i) $Psum$Pk$lB3$rB
#define $P$ATTRIBUTE$Psum$Pk$lB3$rB data->modelData.integerParameterData[6].attribute
#define $P$ATTRIBUTE$P$PRE$Psum$Pk$lB3$rB $P$ATTRIBUTE$Psum$Pk$lB3$rB
#define $Psum$Pk$lB3$rB__varInfo data->modelData.integerParameterData[6].info


/* sum.nu */
#define $Psum$Pnu data->simulationInfo.integerParameter[7]
#define _$Psum$Pnu(i) $Psum$Pnu
#define $P$ATTRIBUTE$Psum$Pnu data->modelData.integerParameterData[7].attribute
#define $P$ATTRIBUTE$P$PRE$Psum$Pnu $P$ATTRIBUTE$Psum$Pnu
#define $Psum$Pnu__varInfo data->modelData.integerParameterData[7].info


/* triggeredAdd.y_start */
#define $PtriggeredAdd$Py_start data->simulationInfo.integerParameter[8]
#define _$PtriggeredAdd$Py_start(i) $PtriggeredAdd$Py_start
#define $P$ATTRIBUTE$PtriggeredAdd$Py_start data->modelData.integerParameterData[8].attribute
#define $P$ATTRIBUTE$P$PRE$PtriggeredAdd$Py_start $P$ATTRIBUTE$PtriggeredAdd$Py_start
#define $PtriggeredAdd$Py_start__varInfo data->modelData.integerParameterData[8].info


/* Algebraic Boolean Vars */
/* $whenCondition1 */
#define _$P$whenCondition1(i) data->localData[i]->booleanVars[0]
#define $P$whenCondition1 _$P$whenCondition1(0)
#define $P$PRE$P$whenCondition1 data->simulationInfo.booleanVarsPre[0]
#define $P$ATTRIBUTE$P$whenCondition1 data->modelData.booleanVarsData[0].attribute
#define $P$ATTRIBUTE$P$PRE$P$whenCondition1 $P$ATTRIBUTE$P$whenCondition1
#define $P$whenCondition1__varInfo data->modelData.booleanVarsData[0].info
#define $P$PRE$P$whenCondition1__varInfo data->modelData.booleanVarsData[0].info
#define _$P$PRE$P$whenCondition1(i) $P$PRE$P$whenCondition1


/* $whenCondition2 */
#define _$P$whenCondition2(i) data->localData[i]->booleanVars[1]
#define $P$whenCondition2 _$P$whenCondition2(0)
#define $P$PRE$P$whenCondition2 data->simulationInfo.booleanVarsPre[1]
#define $P$ATTRIBUTE$P$whenCondition2 data->modelData.booleanVarsData[1].attribute
#define $P$ATTRIBUTE$P$PRE$P$whenCondition2 $P$ATTRIBUTE$P$whenCondition2
#define $P$whenCondition2__varInfo data->modelData.booleanVarsData[1].info
#define $P$PRE$P$whenCondition2__varInfo data->modelData.booleanVarsData[1].info
#define _$P$PRE$P$whenCondition2(i) $P$PRE$P$whenCondition2


/* $whenCondition3 */
#define _$P$whenCondition3(i) data->localData[i]->booleanVars[2]
#define $P$whenCondition3 _$P$whenCondition3(0)
#define $P$PRE$P$whenCondition3 data->simulationInfo.booleanVarsPre[2]
#define $P$ATTRIBUTE$P$whenCondition3 data->modelData.booleanVarsData[2].attribute
#define $P$ATTRIBUTE$P$PRE$P$whenCondition3 $P$ATTRIBUTE$P$whenCondition3
#define $P$whenCondition3__varInfo data->modelData.booleanVarsData[2].info
#define $P$PRE$P$whenCondition3__varInfo data->modelData.booleanVarsData[2].info
#define _$P$PRE$P$whenCondition3(i) $P$PRE$P$whenCondition3


/* $whenCondition4 */
#define _$P$whenCondition4(i) data->localData[i]->booleanVars[3]
#define $P$whenCondition4 _$P$whenCondition4(0)
#define $P$PRE$P$whenCondition4 data->simulationInfo.booleanVarsPre[3]
#define $P$ATTRIBUTE$P$whenCondition4 data->modelData.booleanVarsData[3].attribute
#define $P$ATTRIBUTE$P$PRE$P$whenCondition4 $P$ATTRIBUTE$P$whenCondition4
#define $P$whenCondition4__varInfo data->modelData.booleanVarsData[3].info
#define $P$PRE$P$whenCondition4__varInfo data->modelData.booleanVarsData[3].info
#define _$P$PRE$P$whenCondition4(i) $P$PRE$P$whenCondition4


/* multiSwitch1.u */
#define _$PmultiSwitch1$Pu(i) data->localData[i]->booleanVars[4]
#define $PmultiSwitch1$Pu _$PmultiSwitch1$Pu(0)
#define $P$PRE$PmultiSwitch1$Pu data->simulationInfo.booleanVarsPre[4]

#define $PmultiSwitch1$Pu_index(i_1)    (&$PmultiSwitch1$Pu)[calc_base_index_dims_subs(1, 2, i_1)]
#define $P$PRE$PmultiSwitch1$Pu_index(i_1)    (&$P$PRE$PmultiSwitch1$Pu)[calc_base_index_dims_subs(1, 2, i_1)]

/* multiSwitch1.u[1] */
#define _$PmultiSwitch1$Pu$lB1$rB(i) data->localData[i]->booleanVars[4]
#define $PmultiSwitch1$Pu$lB1$rB _$PmultiSwitch1$Pu$lB1$rB(0)
#define $P$PRE$PmultiSwitch1$Pu$lB1$rB data->simulationInfo.booleanVarsPre[4]
#define $P$ATTRIBUTE$PmultiSwitch1$Pu$lB1$rB data->modelData.booleanVarsData[4].attribute
#define $P$ATTRIBUTE$P$PRE$PmultiSwitch1$Pu$lB1$rB $P$ATTRIBUTE$PmultiSwitch1$Pu$lB1$rB
#define $PmultiSwitch1$Pu$lB1$rB__varInfo data->modelData.booleanVarsData[4].info
#define $P$PRE$PmultiSwitch1$Pu$lB1$rB__varInfo data->modelData.booleanVarsData[4].info


/* multiSwitch1.u[2] */
#define _$PmultiSwitch1$Pu$lB2$rB(i) data->localData[i]->booleanVars[5]
#define $PmultiSwitch1$Pu$lB2$rB _$PmultiSwitch1$Pu$lB2$rB(0)
#define $P$PRE$PmultiSwitch1$Pu$lB2$rB data->simulationInfo.booleanVarsPre[5]
#define $P$ATTRIBUTE$PmultiSwitch1$Pu$lB2$rB data->modelData.booleanVarsData[5].attribute
#define $P$ATTRIBUTE$P$PRE$PmultiSwitch1$Pu$lB2$rB $P$ATTRIBUTE$PmultiSwitch1$Pu$lB2$rB
#define $PmultiSwitch1$Pu$lB2$rB__varInfo data->modelData.booleanVarsData[5].info
#define $P$PRE$PmultiSwitch1$Pu$lB2$rB__varInfo data->modelData.booleanVarsData[5].info
#define _$P$PRE$PmultiSwitch1$Pu$lB2$rB(i) $P$PRE$PmultiSwitch1$Pu$lB2$rB


/* triggeredAdd.local_reset */
#define _$PtriggeredAdd$Plocal_reset(i) data->localData[i]->booleanVars[6]
#define $PtriggeredAdd$Plocal_reset _$PtriggeredAdd$Plocal_reset(0)
#define $P$PRE$PtriggeredAdd$Plocal_reset data->simulationInfo.booleanVarsPre[6]
#define $P$ATTRIBUTE$PtriggeredAdd$Plocal_reset data->modelData.booleanVarsData[6].attribute
#define $P$ATTRIBUTE$P$PRE$PtriggeredAdd$Plocal_reset $P$ATTRIBUTE$PtriggeredAdd$Plocal_reset
#define $PtriggeredAdd$Plocal_reset__varInfo data->modelData.booleanVarsData[6].info
#define $P$PRE$PtriggeredAdd$Plocal_reset__varInfo data->modelData.booleanVarsData[6].info
#define _$P$PRE$PtriggeredAdd$Plocal_reset(i) $P$PRE$PtriggeredAdd$Plocal_reset


/* Algebraic Boolean Parameters */
/* multiSwitch1.use_pre_as_default */
#define $PmultiSwitch1$Puse_pre_as_default data->simulationInfo.booleanParameter[0]
#define _$PmultiSwitch1$Puse_pre_as_default(i) $PmultiSwitch1$Puse_pre_as_default
#define $P$ATTRIBUTE$PmultiSwitch1$Puse_pre_as_default data->modelData.booleanParameterData[0].attribute
#define $P$ATTRIBUTE$P$PRE$PmultiSwitch1$Puse_pre_as_default $P$ATTRIBUTE$PmultiSwitch1$Puse_pre_as_default
#define $PmultiSwitch1$Puse_pre_as_default__varInfo data->modelData.booleanParameterData[0].info


/* showValue.use_numberPort */
#define $PshowValue$Puse_numberPort data->simulationInfo.booleanParameter[1]
#define _$PshowValue$Puse_numberPort(i) $PshowValue$Puse_numberPort
#define $P$ATTRIBUTE$PshowValue$Puse_numberPort data->modelData.booleanParameterData[1].attribute
#define $P$ATTRIBUTE$P$PRE$PshowValue$Puse_numberPort $P$ATTRIBUTE$PshowValue$Puse_numberPort
#define $PshowValue$Puse_numberPort__varInfo data->modelData.booleanParameterData[1].info


/* showValue1.use_numberPort */
#define $PshowValue1$Puse_numberPort data->simulationInfo.booleanParameter[2]
#define _$PshowValue1$Puse_numberPort(i) $PshowValue1$Puse_numberPort
#define $P$ATTRIBUTE$PshowValue1$Puse_numberPort data->modelData.booleanParameterData[2].attribute
#define $P$ATTRIBUTE$P$PRE$PshowValue1$Puse_numberPort $P$ATTRIBUTE$PshowValue1$Puse_numberPort
#define $PshowValue1$Puse_numberPort__varInfo data->modelData.booleanParameterData[2].info


/* showValue2.use_numberPort */
#define $PshowValue2$Puse_numberPort data->simulationInfo.booleanParameter[3]
#define _$PshowValue2$Puse_numberPort(i) $PshowValue2$Puse_numberPort
#define $P$ATTRIBUTE$PshowValue2$Puse_numberPort data->modelData.booleanParameterData[3].attribute
#define $P$ATTRIBUTE$P$PRE$PshowValue2$Puse_numberPort $P$ATTRIBUTE$PshowValue2$Puse_numberPort
#define $PshowValue2$Puse_numberPort__varInfo data->modelData.booleanParameterData[3].info


/* showValue3.use_numberPort */
#define $PshowValue3$Puse_numberPort data->simulationInfo.booleanParameter[4]
#define _$PshowValue3$Puse_numberPort(i) $PshowValue3$Puse_numberPort
#define $P$ATTRIBUTE$PshowValue3$Puse_numberPort data->modelData.booleanParameterData[4].attribute
#define $P$ATTRIBUTE$P$PRE$PshowValue3$Puse_numberPort $P$ATTRIBUTE$PshowValue3$Puse_numberPort
#define $PshowValue3$Puse_numberPort__varInfo data->modelData.booleanParameterData[4].info


/* triggeredAdd.use_reset */
#define $PtriggeredAdd$Puse_reset data->simulationInfo.booleanParameter[5]
#define _$PtriggeredAdd$Puse_reset(i) $PtriggeredAdd$Puse_reset
#define $P$ATTRIBUTE$PtriggeredAdd$Puse_reset data->modelData.booleanParameterData[5].attribute
#define $P$ATTRIBUTE$P$PRE$PtriggeredAdd$Puse_reset $P$ATTRIBUTE$PtriggeredAdd$Puse_reset
#define $PtriggeredAdd$Puse_reset__varInfo data->modelData.booleanParameterData[5].info


/* triggeredAdd.use_set */
#define $PtriggeredAdd$Puse_set data->simulationInfo.booleanParameter[6]
#define _$PtriggeredAdd$Puse_set(i) $PtriggeredAdd$Puse_set
#define $P$ATTRIBUTE$PtriggeredAdd$Puse_set data->modelData.booleanParameterData[6].attribute
#define $P$ATTRIBUTE$P$PRE$PtriggeredAdd$Puse_set $P$ATTRIBUTE$PtriggeredAdd$Puse_set
#define $PtriggeredAdd$Puse_set__varInfo data->modelData.booleanParameterData[6].info


/* Algebraic String Variables */

/* Algebraic String Parameter */

/* sample */
#define $P$sample1 data->simulationInfo.samples[0]
#define $P$sample2 data->simulationInfo.samples[1]

#define Modelica_Math_BooleanVectors_firstTrueIndex_index 0
