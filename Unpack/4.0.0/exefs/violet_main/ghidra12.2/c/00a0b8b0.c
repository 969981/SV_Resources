/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a0b8b0; name: FUN_00a0b8b0
 */


undefined2 FUN_00a0b8b0(long param_1,byte param_2)

{
  if (param_2 < 4) {
    return *(undefined2 *)(param_1 + (ulong)param_2 * 2 + 8);
  }
  return 0;
}


