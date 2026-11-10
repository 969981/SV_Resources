/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cf66fc; name: FUN_01cf66fc
 */


ulong FUN_01cf66fc(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,ulong param_8)

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
    case 0:
      if (*(long *)(param_1 + 8) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x01cf6750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar2,*param_4,*param_5,*param_6,*param_7,param_8);
        return uVar3;
      }
      break;
    case 1:
      if (*(long *)(param_1 + 8) == 0) {
        return 0;
      }
      plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x01cf67b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar2,*param_4,*param_5,*param_6,*param_7,param_8);
      return uVar3;
    case 2:
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 == 0)) {
        return 0;
      }
      plVar2 = (long *)(lVar4 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x01cf67f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar2,*param_4,*param_5,*param_6,*param_7,param_8);
      return uVar3;
    case 3:
      FUN_01cf6424(&local_38,param_1 + 8);
      if (local_38 == 0) {
        uVar5 = 0;
      }
      else {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_38 + lVar1));
        }
        param_8 = (*UNRECOVERED_JUMPTABLE)
                            ((long *)(local_38 + lVar1),*param_4,*param_5,*param_6,*param_7,param_8)
        ;
        param_8 = param_8 & 0xffffffff;
        uVar5 = 1;
      }
      FUN_01cf6248(&local_38);
      return (ulong)((uint)param_8 & uVar5);
    }
  }
  return 0;
}


