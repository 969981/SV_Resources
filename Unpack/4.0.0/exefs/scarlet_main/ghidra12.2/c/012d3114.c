/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012d3114; name: FUN_012d3114
 */


void FUN_012d3114(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    *(long *)(param_1 + 0x10) = lVar1 + -0x50;
    FUN_012d3d80();
    FUN_012d3dcc(lVar1 + -0x10);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return;
}


