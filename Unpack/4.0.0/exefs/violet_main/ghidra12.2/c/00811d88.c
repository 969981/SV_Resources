/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00811d88; name: thunk_FUN_0078ccbc
 */


void thunk_FUN_0078ccbc(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d08f8 + 0x10);
  if ((param_1[3] != 0) && (param_1[4] != 0)) {
    if (*(long *)PTR_DAT_047d0900 != 0) {
      FUN_0078f48c(*(long *)PTR_DAT_047d0900,param_1);
      return;
    }
  }
  return;
}


