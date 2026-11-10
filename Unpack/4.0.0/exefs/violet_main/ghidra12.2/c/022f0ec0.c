/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022f0ec0; name: FUN_022f0ec0
 */


undefined1  [16]
FUN_022f0ec0(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_var;
  undefined8 extraout_var_02;
  undefined1 auVar2 [16];
  undefined4 extraout_var_00;
  undefined8 extraout_var_03;
  undefined1 auVar3 [16];
  undefined4 extraout_var_01;
  undefined8 extraout_var_04;
  undefined1 auVar4 [16];
  
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x022f0f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar1,*param_4);
      auVar2._4_4_ = extraout_var;
      auVar2._0_4_ = extraout_s0;
      auVar2._8_8_ = extraout_var_02;
      return auVar2;
    }
    break;
  case 2:
    FUN_022f3dcc(param_1 + 8,UNRECOVERED_JUMPTABLE);
    auVar3._4_4_ = extraout_var_00;
    auVar3._0_4_ = extraout_s0_00;
    auVar3._8_8_ = extraout_var_03;
    return auVar3;
  case 3:
    FUN_022f3e04(param_1 + 8,UNRECOVERED_JUMPTABLE);
    auVar4._4_4_ = extraout_var_01;
    auVar4._0_4_ = extraout_s0_01;
    auVar4._8_8_ = extraout_var_04;
    return auVar4;
  }
  return ZEXT816(0);
}


