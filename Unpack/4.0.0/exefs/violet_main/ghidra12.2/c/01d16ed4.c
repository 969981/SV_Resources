/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d16ed4; name: FUN_01d16ed4
 */


void FUN_01d16ed4(undefined8 param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  long lVar1;
  long lVar2;
  long local_18;
  
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) == 0) {
      FUN_01d0f450();
      return;
    }
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x01d16f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      FUN_01d0f450();
      return;
    }
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x01d16f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 2:
    break;
  case 3:
    FUN_01d16cfc(&local_18,param_2 + 8);
    if (local_18 == 0) {
      FUN_01cfe4d8(&local_18);
      FUN_01d0f450(param_1);
      return;
    }
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
    }
    (*UNRECOVERED_JUMPTABLE)(param_1);
    FUN_01cfe4d8(&local_18);
    return;
  default:
    FUN_01d0f450();
    return;
  }
  if ((*(long *)(param_2 + 8) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar2 == 0)) {
    FUN_01d0f450();
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + lVar1 + -0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x01d16f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


