/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024c3920; name: FUN_024c3920
 */


void FUN_024c3920(long *param_1)

{
  long lVar1;
  
  FUN_024c3960(param_1,param_1[6]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_024c3a10(param_1 + 1);
  return;
}


