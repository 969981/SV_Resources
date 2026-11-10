/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0190c0b0; name: FUN_0190c0b0
 */


void FUN_0190c0b0(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined4 *param_4)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long local_18;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x03') {
      FUN_01d93d88(&local_18,param_1 + 8);
      if (local_18 != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 =
               *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(local_18 + lVar1));
        }
        (*UNRECOVERED_JUMPTABLE_00)((long *)(local_18 + lVar1),*param_4);
      }
      FUN_01847410(&local_18);
      return;
    }
    if (cVar2 == '\x02') {
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 == 0)) {
        return;
      }
      plVar3 = (long *)(lVar4 + lVar1 + -0x28);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x0190c13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar3,*param_4);
      return;
    }
    if (cVar2 != '\0') {
      return;
    }
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  plVar3 = (long *)(*(long *)(param_1 + 8) + lVar1);
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0190c0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar3,*param_4);
  return;
}


