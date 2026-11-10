/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01be37f4; name: FUN_01be37f4
 */


void FUN_01be37f4(char *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
      param_2 = *(long *)(param_1 + 8) + param_2;
      FUN_00d0a71c(param_2 + 8,param_3 + 8);
      FUN_00c6c994(param_2 + 0x18,param_3 + 0x18);
      plVar2 = *(long **)(param_3 + 0x28);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      plVar1 = *(long **)(param_2 + 0x28);
      *(long **)(param_2 + 0x28) = plVar2;
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01be390c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x20))();
        return;
      }
    }
    return;
  }
  if ((*param_1 == '\0') && (*(long *)(param_1 + 8) != 0)) {
    param_2 = *(long *)(param_1 + 8) + param_2;
    FUN_00d0a71c(param_2 + 8,param_3 + 8);
    FUN_00c6c994(param_2 + 0x18,param_3 + 0x18);
    plVar2 = *(long **)(param_3 + 0x28);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    plVar1 = *(long **)(param_2 + 0x28);
    *(long **)(param_2 + 0x28) = plVar2;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01be3890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))();
      return;
    }
  }
  return;
}


