/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c295b4; name: FUN_01c295b4
 */


ulong FUN_01c295b4(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long local_18;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
joined_r0x01c29614:
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x01c295f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar2,param_4);
      return uVar3;
    }
    break;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 != 0)) {
      plVar2 = (long *)(lVar4 + lVar1 + -0x28);
      goto joined_r0x01c29614;
    }
    break;
  case 3:
    FUN_01c27d8c(&local_18,param_1 + 8);
    if (local_18 == 0) {
      uVar3 = 0;
    }
    else {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
      }
      uVar3 = (*UNRECOVERED_JUMPTABLE)((long *)(local_18 + lVar1),param_4);
      uVar3 = uVar3 & 0xffffffff;
    }
    FUN_01c1abf8(&local_18);
    return uVar3;
  }
  return 0;
}


