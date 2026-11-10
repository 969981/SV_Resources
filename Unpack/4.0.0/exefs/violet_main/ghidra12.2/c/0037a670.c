/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037a670; name: FUN_0037a670
 */


undefined4 FUN_0037a670(uint param_1)

{
  if (param_1 < 0xf) {
    return *(undefined4 *)(&DAT_03cd7f38 + (long)(int)param_1 * 4);
  }
  return 2;
}


