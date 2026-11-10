/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019184a4; name: FUN_019184a4
 */


void FUN_019184a4(long *param_1,long *param_2)

{
  long lVar1;
  long *local_30 [2];
  
  FUN_01776494();
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    FUN_01918504(local_30);
    lVar1 = 0;
    if (local_30[0] != (long *)0x0) {
      lVar1 = *local_30[0];
    }
    param_1[1] = lVar1;
    FUN_01775eb8(local_30);
  }
  return;
}


