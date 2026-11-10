/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c369e0; name: FUN_01c369e0
 */


ulong FUN_01c369e0(byte *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined1 *param_4,
                  ulong param_5)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long local_38;
  
  if (*param_1 < 4) {
    lVar1 = (long)param_3 >> 1;
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x01c36a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE_00)(plVar2,*param_4,param_5);
        return uVar3;
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 == 0)) {
        return 0;
      }
      plVar2 = (long *)(lVar4 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x01c36a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(plVar2,*param_4,param_5);
      return uVar3;
    case 3:
      FUN_01c361f4(&local_38,param_1 + 8);
      if (local_38 == 0) {
        uVar5 = 0;
      }
      else {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 =
               *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_38 + lVar1));
        }
        param_5 = (*UNRECOVERED_JUMPTABLE_00)((long *)(local_38 + lVar1),*param_4,param_5);
        param_5 = param_5 & 0xffffffff;
        uVar5 = 1;
      }
      FUN_01c36018(&local_38);
      return (ulong)((uint)param_5 & uVar5);
    }
  }
  return 0;
}


