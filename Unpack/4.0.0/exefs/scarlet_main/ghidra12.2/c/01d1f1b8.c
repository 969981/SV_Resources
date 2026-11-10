/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d1f1b8; name: FUN_01d1f1b8
 */


ulong FUN_01d1f1b8(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long local_18;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar3 = (long *)(*(long *)(param_1 + 8) + lVar1);
joined_r0x01d1f218:
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x01d1f1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(plVar3,param_4);
      return uVar2;
    }
    break;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 != 0)) {
      plVar3 = (long *)(lVar4 + lVar1 + -0x28);
      goto joined_r0x01d1f218;
    }
    break;
  case 3:
    FUN_01d1e9f8(&local_18,param_1 + 8);
    if (local_18 == 0) {
      uVar5 = 0;
    }
    else {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
      }
      param_4 = (*UNRECOVERED_JUMPTABLE)((long *)(local_18 + lVar1),param_4);
      param_4 = param_4 & 0xffffffff;
      uVar5 = 1;
    }
    FUN_01d1e3b8(&local_18);
    return (ulong)((uint)param_4 & uVar5);
  }
  return 0;
}


