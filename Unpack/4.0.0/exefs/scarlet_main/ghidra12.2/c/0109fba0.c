/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0109fba0; name: FUN_0109fba0
 */


void FUN_0109fba0(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long local_30;
  long local_28;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar3 + lVar1 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x0109fbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    if (cVar2 == '\x03') {
      if (*(long *)(param_1 + 8) == 0) {
        local_30 = 0;
      }
      else {
        FUN_01bb04a4(&local_28);
        local_30 = local_28;
        if (local_28 != 0) {
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_28 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE)();
        }
      }
      FUN_01bb0530(&local_30);
      return;
    }
    if (cVar2 == '\x01') {
      if (*(long *)(param_1 + 8) != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
        }
                    /* WARNING: Could not recover jumptable at 0x0109fc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    else if ((cVar2 == '\0') && (*(long *)(param_1 + 8) != 0)) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x0109fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}


