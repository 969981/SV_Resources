/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0185fd0c; name: FUN_0185fd0c
 */


ulong FUN_0185fd0c(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long local_48;
  
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
                    /* WARNING: Could not recover jumptable at 0x0185fd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5,*param_6,*param_7);
    return uVar3;
  }
  if (cVar2 == '\x03') {
    FUN_01d84314(&local_48,param_1 + 8);
    if (local_48 == 0) {
      uVar5 = 0;
    }
    else {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_48 + lVar1));
      }
      uVar3 = (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5,*param_6,*param_7);
      UNRECOVERED_JUMPTABLE = (code *)(uVar3 & 0xffffffff);
      uVar5 = 1;
    }
    FUN_018509a0(&local_48);
    return (ulong)((uint)UNRECOVERED_JUMPTABLE & uVar5);
  }
  if (cVar2 == '\x01') {
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x0185fde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5,*param_6,*param_7);
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
                    /* WARNING: Could not recover jumptable at 0x0185fdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5,*param_6,*param_7);
  return uVar3;
}


