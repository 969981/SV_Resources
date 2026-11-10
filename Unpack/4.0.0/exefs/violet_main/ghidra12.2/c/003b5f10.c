/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b5f10; name: FUN_003b5f10
 */


ulong FUN_003b5f10(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (((*(long *)(param_1 + 0x5d0) == 0) ||
      (uVar1 = *(byte *)(*(long *)(param_1 + 0x5d0) + 0x250) - 1, 3 < uVar1)) ||
     (uVar2 = (ulong)(uint)(0x200 << (ulong)(uVar1 & 0x1f)), *(ulong *)(param_1 + 0x6b8) <= uVar2))
  {
    uVar1 = (uint)*(ulong *)(param_1 + 0x6b8);
    if (*(ulong *)(param_1 + 0x6c0) < *(ulong *)(param_1 + 0x6b8)) {
      uVar1 = (uint)*(ulong *)(param_1 + 0x6c0);
    }
    uVar2 = (ulong)uVar1;
  }
  return uVar2;
}


