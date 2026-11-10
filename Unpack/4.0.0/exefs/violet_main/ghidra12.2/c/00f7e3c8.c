/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f7e3c8; name: FUN_00f7e3c8
 */


long FUN_00f7e3c8(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 < 5) {
    lVar1 = param_1 + (ulong)param_2 * 0x38 + 0x28;
  }
  return lVar1;
}


