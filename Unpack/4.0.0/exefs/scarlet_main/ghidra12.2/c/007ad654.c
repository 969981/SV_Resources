/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ad654; name: FUN_007ad654
 */


void FUN_007ad654(long *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0078cdf4();
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007ad678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}


