/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0131b8a8; name: FUN_0131b8a8
 */


ulong FUN_0131b8a8(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long local_30;
  long local_28;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 == 0)) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar5 + lVar1 + -0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x0131b8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)();
    return uVar4;
  }
  if (cVar2 == '\x03') {
    if (*(long *)(param_1 + 8) == 0) {
      local_30 = 0;
    }
    else {
      FUN_01beac5c(&local_28);
      local_30 = local_28;
      if (local_28 != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_28 + lVar1));
        }
        uVar3 = (*UNRECOVERED_JUMPTABLE)();
        FUN_01beace8(&local_30);
        return (ulong)(uVar3 & 1);
      }
    }
    FUN_01beace8(&local_30);
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
                    /* WARNING: Could not recover jumptable at 0x0131b92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)();
    return uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x0131b908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)();
  return uVar4;
}


