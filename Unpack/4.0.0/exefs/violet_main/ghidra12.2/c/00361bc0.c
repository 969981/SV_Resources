/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00361bc0; name: FUN_00361bc0
 */


void FUN_00361bc0(ulong param_1)

{
  if ((param_1 & 1) == 0) {
    FUN_00361a70();
    return;
  }
  FUN_0038db40(&DAT_047ef840);
  if ((DAT_047ef800 & 1) == 0) {
    DAT_047ef800 = 1;
    FUN_00361c60();
    return;
  }
  FUN_0038db60(&DAT_047ef840);
  return;
}


