/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f693c; name: FUN_008f693c
 */


ulong FUN_008f693c(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long local_30;
  long local_28;
  
  if (*param_1 < 4) {
    lVar1 = (long)param_3 >> 1;
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        plVar4 = (long *)(*(long *)(param_1 + 8) + lVar1);
joined_r0x008f69c0:
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar4);
        }
                    /* WARNING: Could not recover jumptable at 0x008f69a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar4,*param_4);
        return uVar3;
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 8) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 != 0)) {
        plVar4 = (long *)(lVar5 + lVar1 + -0x28);
        goto joined_r0x008f69c0;
      }
      break;
    case 3:
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
          uVar2 = (*UNRECOVERED_JUMPTABLE)((long *)(local_28 + lVar1),*param_4);
          FUN_01b0b790(&local_30);
          return (ulong)(uVar2 & 1);
        }
      }
      FUN_01b0b790(&local_30);
    }
  }
  return 0;
}


