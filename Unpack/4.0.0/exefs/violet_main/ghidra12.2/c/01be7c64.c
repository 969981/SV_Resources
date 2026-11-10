/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01be7c64; name: FUN_01be7c64
 */


void FUN_01be7c64(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_38;
  long local_18;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
joined_r0x01be7cc4:
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x01be7ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar2,param_4);
      return;
    }
    break;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 != 0)) {
      plVar2 = (long *)(lVar3 + lVar1 + -0x28);
      goto joined_r0x01be7cc4;
    }
    break;
  case 3:
    if (*(long *)(param_1 + 8) == 0) {
      local_38 = 0;
    }
    else {
      FUN_01be7a30(&local_18);
      local_38 = local_18;
      if (local_18 != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
        }
        (*UNRECOVERED_JUMPTABLE)((long *)(local_18 + lVar1),param_4);
      }
    }
    FUN_01be7abc(&local_38);
    return;
  }
  return;
}


