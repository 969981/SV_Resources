/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00464860; name: FUN_00464860
 */


ulong FUN_00464860(long param_1)

{
  ulong uVar1;
  
  if (*(ulong *)(param_1 + 0x30) < *(ulong *)(param_1 + 0x38)) {
    return 0;
  }
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x18) <= *(ulong *)(param_1 + 8)) {
    uVar1 = *(ulong *)(param_1 + 0x30);
  }
  return uVar1;
}


