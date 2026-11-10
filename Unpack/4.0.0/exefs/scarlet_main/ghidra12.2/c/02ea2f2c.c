/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ea2f2c; name: FUN_02ea2f2c
 */


void FUN_02ea2f2c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d1b30 + 0x10);
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x02ea2f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


