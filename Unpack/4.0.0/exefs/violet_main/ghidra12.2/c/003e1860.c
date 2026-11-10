/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e1860; name: FUN_003e1860
 */


undefined8 FUN_003e1860(uint param_1)

{
  if (param_1 < 0x1f) {
    return *(undefined8 *)(&DAT_03cdd430 + (ulong)param_1 * 8);
  }
  return 0;
}


