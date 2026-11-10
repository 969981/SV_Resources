/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cb8b7c; name: FUN_01cb8b7c
 */


void FUN_01cb8b7c(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01cb8ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_6,*param_8,plVar1,*param_4,*param_5,*param_7);
  return;
}


