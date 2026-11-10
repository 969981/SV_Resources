/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026961a8; name: FUN_026961a8
 */


void FUN_026961a8(byte *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined8 param_4,
                 char *param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
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
                    /* WARNING: Could not recover jumptable at 0x026961f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(plVar2,param_4,*param_5);
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
                    /* WARNING: Could not recover jumptable at 0x02696240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar2,param_4,*param_5);
      return;
    case 3:
      FUN_02692f24(&local_38,param_1 + 8);
      if (local_38 != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 =
               *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_38 + lVar1));
        }
        (*UNRECOVERED_JUMPTABLE_00)((long *)(local_38 + lVar1),param_4,*param_5 != '\0');
      }
      FUN_02692cc8(&local_38);
      return;
    }
  }
  return;
}


