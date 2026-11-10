/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f3d94; name: FUN_007f3d94
 */


undefined4 FUN_007f3d94(long param_1,byte param_2)

{
  if (param_2 < *(byte *)(param_1 + 0x5a)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 0x40);
  }
  return 0;
}


