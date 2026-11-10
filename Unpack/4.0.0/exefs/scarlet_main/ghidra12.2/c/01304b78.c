/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01304b78; name: FUN_01304b78
 */


void FUN_01304b78(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[1] - *param_1 >> 4;
  uVar2 = lVar1 * -0x5075075075075075;
  if (uVar2 < param_2) {
    FUN_0130682c(param_1,param_2 + lVar1 * 0x5075075075075075);
    return;
  }
  if (uVar2 != param_2) {
    param_1[1] = *param_1 + param_2 * 0x230;
  }
  return;
}


