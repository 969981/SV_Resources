/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124e4c0; name: FUN_0124e4c0
 */


undefined8 FUN_0124e4c0(long param_1,byte param_2)

{
  if (param_2 < *(byte *)(param_1 + 0x30)) {
    return *(undefined8 *)(param_1 + (ulong)param_2 * 8);
  }
  return 0;
}


