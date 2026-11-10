/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0214f580; name: FUN_0214f580
 */


void FUN_0214f580(long *param_1,uint param_2)

{
  FUN_017e0d98(param_1,param_2 & 1);
                    /* WARNING: Could not recover jumptable at 0x0214f5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))(param_1,param_2 & 1);
  return;
}


