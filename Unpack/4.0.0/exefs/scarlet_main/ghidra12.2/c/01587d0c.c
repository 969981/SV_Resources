/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01587d0c; name: FUN_01587d0c
 */


void FUN_01587d0c(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long local_38;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 == '\x01') {
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar3 = (long *)(*(long *)(param_1 + 8) + lVar1);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x01587d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar3,*param_4,*param_5,*param_6,*param_7,*param_8);
    return;
  }
  if (cVar2 == '\x03') {
    FUN_01caf9dc(&local_38,param_1 + 8);
    if (local_38 != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_38 + lVar1));
      }
      (*UNRECOVERED_JUMPTABLE)
                ((long *)(local_38 + lVar1),*param_4,*param_5,*param_6,*param_7,*param_8);
    }
    FUN_019bae24(&local_38);
    return;
  }
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 == 0)) {
      return;
    }
    plVar3 = (long *)(lVar4 + lVar1 + -0x28);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x01587df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar3,*param_4,*param_5,*param_6,*param_7,*param_8);
    return;
  }
  if (cVar2 != '\0') {
    return;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  plVar3 = (long *)(*(long *)(param_1 + 8) + lVar1);
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x01587db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar3,*param_4,*param_5,*param_6,*param_7,*param_8);
  return;
}


