/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bce78; name: FUN_019bce78
 */


void FUN_019bce78(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  long *plVar1;
  
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x019bcec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar1,*param_4,param_5);
      return;
    }
    break;
  case 2:
    FUN_01b32eb0(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return;
  case 3:
    FUN_01b32ee8(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}


