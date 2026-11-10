/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c5a1bc; name: FUN_01c5a1bc
 */


void FUN_01c5a1bc(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined2 *param_4,
                 undefined1 *param_5)

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
                    /* WARNING: Could not recover jumptable at 0x01c5a204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar1,*param_4,*param_5);
      return;
    }
    break;
  case 2:
    FUN_01c5a8b8(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return;
  case 3:
    FUN_01c5a8f0(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}


