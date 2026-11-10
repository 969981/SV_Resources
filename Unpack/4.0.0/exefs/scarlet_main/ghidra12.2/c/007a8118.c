/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a8118; name: FUN_007a8118
 */


undefined8 FUN_007a8118(long *param_1)

{
  undefined8 uVar1;
  
  if (*(short *)((long)param_1 + 0x1a) == -1) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x007a8130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x60))();
  return uVar1;
}


