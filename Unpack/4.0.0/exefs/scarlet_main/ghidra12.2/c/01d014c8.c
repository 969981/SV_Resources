/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d014c8; name: FUN_01d014c8
 */


void FUN_01d014c8(undefined8 *param_1,byte *param_2,code *UNRECOVERED_JUMPTABLE_00,ulong param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_28;
  
  if (*param_2 < 4) {
    lVar1 = (long)param_4 >> 1;
    switch(*param_2) {
    default:
      if (*(long *)(param_2 + 8) != 0) {
        plVar2 = (long *)(*(long *)(param_2 + 8) + lVar1);
        if ((param_4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x01d01510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(plVar2,*param_5,*param_6);
        return;
      }
      break;
    case 2:
      if ((*(long *)(param_2 + 8) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar3 == 0)) {
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
      plVar2 = (long *)(lVar3 + lVar1 + -0x28);
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x01d01564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar2,*param_5,*param_6);
      return;
    case 3:
      FUN_01cfc674(&local_28,param_2 + 8);
      if (local_28 == 0) {
        FUN_01cfc6c0(&local_28);
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        if ((param_4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 =
               *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_28 + lVar1));
        }
        (*UNRECOVERED_JUMPTABLE_00)(param_1,(long *)(local_28 + lVar1),*param_5,*param_6);
        FUN_01cfc6c0(&local_28);
      }
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


