/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e17b9c; name: FUN_01e17b9c
 */


void FUN_01e17b9c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x178);
  plVar1 = *(long **)(param_1 + 0x180);
  if (plVar2 == plVar1) {
LAB_01e17bbc:
    if (((plVar2 != plVar1) && (*plVar2 != 0)) &&
       (plVar2 = *(long **)(*plVar2 + 0x38), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01e17bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x50))();
      return;
    }
  }
  else {
    do {
      if (*(long *)(*plVar2 + 0x1d0) == *param_4) goto LAB_01e17bbc;
      plVar2 = plVar2 + 1;
    } while (plVar1 != plVar2);
  }
  return;
}


