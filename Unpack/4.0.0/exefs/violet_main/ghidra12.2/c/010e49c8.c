/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010e49c8; name: FUN_010e49c8
 */


ulong FUN_010e49c8(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

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
                    /* WARNING: Could not recover jumptable at 0x010e49f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)();
    return uVar4;
  }
  if (cVar2 == '\x03') {
    if (*(long *)(param_1 + 8) == 0) {
      local_30 = 0;
    }
    else {
      FUN_01bab324(&local_28);
      local_30 = local_28;
      if (local_28 != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_28 + lVar1));
        }
        uVar3 = (*UNRECOVERED_JUMPTABLE)();
        FUN_01bab3b0(&local_30);
        return (ulong)(uVar3 & 1);
      }
    }
    FUN_01bab3b0(&local_30);
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
                    /* WARNING: Could not recover jumptable at 0x010e4a4c. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x010e4a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)();
  return uVar4;
}


