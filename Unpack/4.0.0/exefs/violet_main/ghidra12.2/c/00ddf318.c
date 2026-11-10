/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


