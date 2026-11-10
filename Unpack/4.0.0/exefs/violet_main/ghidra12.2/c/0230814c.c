/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0230814c; name: FUN_0230814c
 */


void FUN_0230814c(undefined8 *param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE_00,
                 ulong param_4,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_38;
  
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) != 0) {
      plVar2 = (long *)(*(long *)(param_2 + 8) + lVar1);
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x02308190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar2,param_5);
      return;
    }
  default:
    *param_1 = 0;
    return;
  case 2:
    break;
  case 3:
    FUN_02307c4c(&local_38,param_2 + 8);
    if (local_38 == 0) {
      FUN_01774eac(&local_38);
      *param_1 = 0;
    }
    else {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 =
             *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_38 + lVar1));
      }
      (*UNRECOVERED_JUMPTABLE_00)(param_1,(long *)(local_38 + lVar1),param_5);
      FUN_01774eac(&local_38);
    }
    return;
  }
  if ((*(long *)(param_2 + 8) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar3 == 0)) {
    *param_1 = 0;
    return;
  }
  plVar2 = (long *)(lVar3 + lVar1 + -0x28);
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x023081e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar2,param_5);
  return;
}


