/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01401b58; name: FUN_01401b58
 */


ulong FUN_01401b58(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long local_30;
  long local_28;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 == 0)) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar4 + lVar1 + -0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x01401b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)();
    return uVar3;
  }
  if (cVar2 == '\x03') {
    if (*(long *)(param_1 + 8) == 0) {
      local_30 = 0;
    }
    else {
      FUN_01b0b704(&local_28);
      local_30 = local_28;
      if (local_28 != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_28 + lVar1));
        }
        uVar3 = (*UNRECOVERED_JUMPTABLE)();
        FUN_01b0b790(&local_30);
        return uVar3 & 0xffffffff;
      }
    }
    FUN_01b0b790(&local_30);
    return 0;
  }
  if (cVar2 == '\x01') {
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x01401bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)();
    return uVar3;
  }
  if (cVar2 != '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
  }
                    /* WARNING: Could not recover jumptable at 0x01401bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)();
  return uVar3;
}


