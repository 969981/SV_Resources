/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197a394; name: FUN_0197a394
 */


void FUN_0197a394(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 200);
  if (*(char *)(param_1 + 0x7a8) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0197a3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 200))(plVar1,param_1 + 0x778,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0197a3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xd0))(plVar1,param_1 + 0x798,param_1 + 0x7a0);
  return;
}


