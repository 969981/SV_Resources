/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a8f14; name: FUN_007a8f14
 */


void FUN_007a8f14(long *param_1)

{
  ulong uVar1;
  
  FUN_007a8e40();
  uVar1 = FUN_0078cdf4(param_1);
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007a8f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}


