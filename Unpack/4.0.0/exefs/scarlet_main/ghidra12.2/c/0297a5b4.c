/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297a5b4; name: FUN_0297a5b4
 */


ulong FUN_0297a5b4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x70);
  if (*(long *)(lVar3 + 8) == 0) {
    uVar1 = FUN_00f13ef0();
    return (ulong)(uVar1 & 0xffff);
  }
  uVar2 = FUN_00d75438(lVar3);
  return uVar2;
}


