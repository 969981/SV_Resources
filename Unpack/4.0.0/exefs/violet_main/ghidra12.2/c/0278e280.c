/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278e280; name: FUN_0278e280
 */


ulong FUN_0278e280(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  return ((ulong)(*(byte *)(param_1 + (uVar1 >> 3)) >> (uVar1 & 7) & 1) |
         (ulong)(*(byte *)(param_1 + (uVar1 + 1 >> 3)) >> (uVar1 + 1 & 7) & 1) << 1) << 8 |
         ((ulong)(*(byte *)(param_1 + (uVar1 + 2 >> 3)) >> (uVar1 + 2 & 7) & 1) |
         (ulong)(*(byte *)(param_1 + (uVar1 + 3 >> 3)) >> (uVar1 + 3 & 7) & 1) << 1) << 10 | 1;
}


