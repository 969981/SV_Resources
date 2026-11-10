/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297abcc; name: FUN_0297abcc
 */


void FUN_0297abcc(long *param_1)

{
  FUN_00f13ad8(param_1[9]);
                    /* WARNING: Could not recover jumptable at 0x0297abf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e0))(param_1);
  return;
}


