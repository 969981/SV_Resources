/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1bd14; name: FUN_01e1bd14
 */


ulong FUN_01e1bd14(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 0x330);
  if (*(long *)(param_1 + 0x328) == lVar2) {
    uVar3 = 0;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (ulong)*(uint *)(lVar2 + -8);
    uVar3 = (ulong)*(uint *)(lVar2 + -4) << 0x20;
  }
  return uVar3 | uVar1;
}


