/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02983c58; name: FUN_02983c58
 */


undefined4 FUN_02983c58(uint param_1)

{
  if ((int)param_1 < 5) {
    return *(undefined4 *)(&DAT_03d6a518 + (ulong)param_1 * 4);
  }
  return 0;
}


