/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278e224; name: FUN_0278e224
 */


ulong FUN_0278e224(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0x101;
  if ((*(byte *)(param_1 + (uVar2 >> 3)) >> (uVar2 & 7) & 1) == 0) {
    uVar1 = 1;
  }
  return uVar1 | ((ulong)(*(byte *)(param_1 + (uVar2 + 1 >> 3)) >> (uVar2 + 1 & 7) & 1) |
                 (ulong)(*(byte *)(param_1 + (uVar2 + 2 >> 3)) >> (uVar2 + 2 & 7) & 1) << 1) << 9;
}


