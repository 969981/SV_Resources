/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00273fd8; name: FUN_00273fd8
 */


void FUN_00273fd8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1] - lVar1;
  *param_2 = lVar2 >> 5;
  if (lVar2 != 0) {
    param_2[1] = lVar1;
  }
  return;
}


