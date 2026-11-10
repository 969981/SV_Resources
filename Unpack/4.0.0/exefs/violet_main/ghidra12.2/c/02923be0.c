/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02923be0; name: FUN_02923be0
 */


undefined2 FUN_02923be0(uint param_1)

{
  if (param_1 < 6) {
    return *(undefined2 *)(&DAT_03d69dc4 + (ulong)param_1 * 2);
  }
  return 0;
}


