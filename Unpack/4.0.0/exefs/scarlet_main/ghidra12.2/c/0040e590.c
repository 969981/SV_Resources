/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040e590; name: FUN_0040e590
 */


undefined8 FUN_0040e590(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 400) == (code *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0040e59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 400))();
  return uVar1;
}


