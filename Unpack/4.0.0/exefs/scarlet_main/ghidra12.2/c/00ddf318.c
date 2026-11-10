/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ddf318; name: FUN_00ddf318
 */


ulong FUN_00ddf318(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x70) + 8) == 0) {
    uVar1 = FUN_00f13ef0();
    return (ulong)(uVar1 & 0xffff);
  }
  uVar2 = FUN_00ddf348(*(long *)(param_1 + 0x70));
  return uVar2;
}


