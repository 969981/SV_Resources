/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1c638; name: FUN_01e1c638
 */


ulong FUN_01e1c638(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    return (ulong)*(uint *)(param_1 + 300);
  }
  uVar1 = FUN_00e97b78(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70));
  return uVar1;
}


