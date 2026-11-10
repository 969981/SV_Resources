/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e60824; name: FUN_02e60824
 */


void FUN_02e60824(long *param_1,long param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  
  plVar2 = *(long **)(*param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    plVar2 = (long *)plVar2[1];
    if (plVar1 != plVar2) {
      do {
        if (*plVar1 == *(long *)(param_2 + 8)) goto LAB_02e60870;
        plVar1 = plVar1 + 0x24;
      } while (plVar2 != plVar1);
      plVar1 = plVar2;
    }
LAB_02e60870:
    if (*(int *)(param_2 + 0x28) == 2) {
      if ((plVar1 != plVar2) &&
         (UNRECOVERED_JUMPTABLE = (code *)plVar1[4], UNRECOVERED_JUMPTABLE != (code *)0x0)) {
        plVar1 = plVar1 + 8;
        goto LAB_02e608a8;
      }
    }
    else {
      if (*(int *)(param_2 + 0x2c) == 2) {
        if (plVar1 == plVar2) {
          return;
        }
      }
      else {
        if (plVar1 == plVar2) {
          return;
        }
        if ((code *)plVar1[4] != (code *)0x0) {
          (*(code *)plVar1[4])(plVar1 + 8,param_2);
        }
      }
      UNRECOVERED_JUMPTABLE = (code *)plVar1[0x14];
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        plVar1 = plVar1 + 0x18;
LAB_02e608a8:
                    /* WARNING: Could not recover jumptable at 0x02e608b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar1,param_2);
        return;
      }
    }
  }
  return;
}


