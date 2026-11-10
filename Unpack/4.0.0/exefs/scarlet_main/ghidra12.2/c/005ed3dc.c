/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005ed3dc; name: FUN_005ed3dc
 */


void FUN_005ed3dc(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x005ed404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005ed3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


