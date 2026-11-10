/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d18754; name: FUN_01d18754
 */


void FUN_01d18754(undefined8 param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined4 *param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_38;
  
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) == 0) {
      FUN_01d0f450();
      return;
    }
    plVar2 = (long *)(*(long *)(param_2 + 8) + lVar1);
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x01d187b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar2,*param_5);
    return;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      FUN_01d0f450();
      return;
    }
    plVar2 = (long *)(*(long *)(param_2 + 8) + lVar1);
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x01d187e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar2,*param_5);
    return;
  case 2:
    break;
  case 3:
    FUN_01d1857c(&local_38,param_2 + 8);
    if (local_38 == 0) {
      FUN_01cff4e8(&local_38);
      FUN_01d0f450(param_1);
      return;
    }
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_38 + lVar1));
    }
    (*UNRECOVERED_JUMPTABLE)(param_1,(long *)(local_38 + lVar1),*param_5);
    FUN_01cff4e8(&local_38);
    return;
  default:
    FUN_01d0f450();
    return;
  }
  if ((*(long *)(param_2 + 8) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar3 == 0)) {
    FUN_01d0f450();
    return;
  }
  plVar2 = (long *)(lVar3 + lVar1 + -0x28);
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x01d18814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,*param_5);
  return;
}


