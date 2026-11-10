/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01edac64; name: FUN_01edac64
 */


byte FUN_01edac64(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 < 0x800) {
    return *(byte *)(param_1 + (ulong)(uVar1 >> 3) + 0x7bb0) >> (ulong)(uVar1 & 7) & 1;
  }
  return 0;
}


