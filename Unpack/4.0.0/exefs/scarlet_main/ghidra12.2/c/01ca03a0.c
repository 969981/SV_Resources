/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ca03a0; name: FUN_01ca03a0
 */


void FUN_01ca03a0(undefined8 *param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  long lVar1;
  long lVar2;
  long local_38;
  long local_18;
  
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) != 0) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x01ca03dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    break;
  case 1:
    if (*(long *)(param_2 + 8) != 0) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x01ca03f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    break;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar2 == 0)) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + lVar1 + -0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x01ca0438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 3:
    if (*(long *)(param_2 + 8) == 0) {
      local_38 = 0;
    }
    else {
      FUN_0196c1b4(&local_18);
      local_38 = local_18;
      if (local_18 != 0) {
        if ((param_4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
        }
        (*UNRECOVERED_JUMPTABLE)(param_1);
        FUN_01ca0328(&local_38);
        return;
      }
    }
    FUN_01ca0328(&local_38);
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


