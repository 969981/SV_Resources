/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01edc278; name: FUN_01edc278
 */


void FUN_01edc278(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 < 0x800) {
    param_1 = param_1 + (ulong)(uVar1 >> 3);
    *(byte *)(param_1 + 0x7bb0) = *(byte *)(param_1 + 0x7bb0) | (byte)(1 << (ulong)(uVar1 & 7));
  }
  return;
}


