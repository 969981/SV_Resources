/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b0d8a4; name: FUN_01b0d8a4
 */


undefined2 FUN_01b0d8a4(long param_1,byte param_2,byte param_3)

{
  if ((param_2 < 5) && (param_3 < 6)) {
    return *(undefined2 *)(param_1 + (ulong)param_2 * 0x60 + (ulong)param_3 * 0x10 + 0x14);
  }
  return 0;
}


