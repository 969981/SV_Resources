/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d4d694; name: FUN_00d4d694
 */


void FUN_00d4d694(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,char *param_4)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long local_38;
  long local_18;
  
  cVar2 = *param_1;
  lVar1 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 == 0)) {
      return;
    }
    plVar3 = (long *)(lVar4 + lVar1 + -0x28);
  }
  else {
    if (cVar2 == '\x03') {
      if (*(long *)(param_1 + 8) == 0) {
        local_38 = 0;
      }
      else {
        FUN_01bacaf0(&local_18);
        local_38 = local_18;
        if (local_18 != 0) {
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE)((long *)(local_18 + lVar1),*param_4 != '\0');
        }
      }
      FUN_01bacb7c(&local_38);
      return;
    }
    if ((cVar2 != '\x01') && (cVar2 != '\0')) {
      return;
    }
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar3 = (long *)(*(long *)(param_1 + 8) + lVar1);
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00d4d6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar3,*param_4);
  return;
}


