/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a096c8; name: FUN_00a096c8
 */


undefined4 FUN_00a096c8(long param_1,byte param_2)

{
  if (param_2 < 6) {
    return *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 4);
  }
  return 0;
}


