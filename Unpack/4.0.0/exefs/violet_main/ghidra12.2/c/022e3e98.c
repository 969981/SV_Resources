/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022e3e98; name: FUN_022e3e98
 */


void FUN_022e3e98(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_18;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
joined_r0x022e3ef8:
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x022e3edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar2,param_4);
      return;
    }
    break;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 != 0)) {
      plVar2 = (long *)(lVar3 + lVar1 + -0x28);
      goto joined_r0x022e3ef8;
    }
    break;
  case 3:
    FUN_022e3f6c(&local_18,param_1 + 8);
    if (local_18 != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
      }
      (*UNRECOVERED_JUMPTABLE)((long *)(local_18 + lVar1),param_4);
    }
    FUN_022e3ab8(&local_18);
    return;
  }
  return;
}


