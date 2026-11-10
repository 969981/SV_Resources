/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b0f48; name: FUN_029b0f48
 */


void FUN_029b0f48(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[1] - *param_1 >> 5;
  uVar2 = lVar1 * -0x5555555555555555;
  if (uVar2 < param_2) {
    FUN_029b0f98(param_1,param_2 + lVar1 * 0x5555555555555555);
    return;
  }
  if (uVar2 == param_2) {
    return;
  }
  FUN_018dbb30(param_1,*param_1 + param_2 * 0x60);
  return;
}


