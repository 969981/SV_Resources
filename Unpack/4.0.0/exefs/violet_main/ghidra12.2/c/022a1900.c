/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022a1900; name: FUN_022a1900
 */


undefined1  [16]
FUN_022a1900(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if (((*param_1 != '\x01') && (*param_1 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
    return ZEXT816(0);
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x022a1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_4);
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}


