/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c9f57c; name: FUN_01c9f57c
 */


void FUN_01c9f57c(undefined8 *param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x01c9f5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar1,*param_5);
      return;
    }
    break;
  case 2:
    FUN_01c9f758(param_2 + 8,UNRECOVERED_JUMPTABLE);
    return;
  case 3:
    FUN_01c9f79c(param_2 + 8,UNRECOVERED_JUMPTABLE);
    return;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


