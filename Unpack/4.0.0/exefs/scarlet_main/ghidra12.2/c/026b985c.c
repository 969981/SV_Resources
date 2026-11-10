/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026b985c; name: FUN_026b985c
 */


void FUN_026b985c(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_18;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
joined_r0x026b98bc:
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x026b98a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar2,param_4);
      return;
    }
    break;
  case 2:
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 != 0)) {
      plVar2 = (long *)(lVar3 + lVar1 + -0x28);
      goto joined_r0x026b98bc;
    }
    break;
  case 3:
    FUN_026b9930(&local_18,param_1 + 8);
    if (local_18 != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
      }
      (*UNRECOVERED_JUMPTABLE)((long *)(local_18 + lVar1),param_4);
    }
    FUN_026b96d4(&local_18);
    return;
  }
  return;
}


