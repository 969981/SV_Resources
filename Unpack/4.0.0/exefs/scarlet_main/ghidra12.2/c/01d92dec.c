/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d92dec; name: FUN_01d92dec
 */


void FUN_01d92dec(byte *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_48;
  long local_28;
  
  if (*param_1 < 4) {
    lVar1 = (long)param_3 >> 1;
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x01d92e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(*param_6,plVar2,*param_4,*param_5);
        return;
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 == 0)) {
        return;
      }
      plVar2 = (long *)(lVar3 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x01d92e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(*param_6,plVar2,*param_4,*param_5);
      return;
    case 3:
      if (*(long *)(param_1 + 8) == 0) {
        local_48 = 0;
      }
      else {
        FUN_01d92b4c(&local_28);
        local_48 = local_28;
        if (local_28 != 0) {
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_28 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE_00)(*param_6,(long *)(local_28 + lVar1),*param_4,*param_5);
        }
      }
      FUN_01d92bd8(&local_48);
      return;
    }
  }
  return;
}


