/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f9860; name: FUN_028f9860
 */


void FUN_028f9860(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    FUN_012d3d80(lVar1 + -0x50);
    FUN_012d3dcc(lVar1 + -0x10);
    lVar1 = lVar1 + -0x50;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


