/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6ade8; name: FUN_01f6ade8
 */


void FUN_01f6ade8(long *param_1)

{
  *(undefined4 *)(param_1 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x01f6adf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))();
  return;
}


