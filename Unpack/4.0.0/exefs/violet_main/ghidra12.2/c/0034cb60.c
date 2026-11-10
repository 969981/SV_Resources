/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034cb60; name: FUN_0034cb60
 */


undefined8 FUN_0034cb60(uint param_1)

{
  if (param_1 < 3) {
    return *(undefined8 *)
            (*(long *)PTR_DAT_047ccae0 + *(long *)(&DAT_03cd7570 + (long)(int)param_1 * 8) * 8);
  }
  return 0;
}


