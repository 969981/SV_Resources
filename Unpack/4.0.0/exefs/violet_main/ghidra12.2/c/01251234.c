/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01251234; name: FUN_01251234
 */


long FUN_01251234(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 8 + (ulong)param_2 * 0x180;
  if (*(byte *)(param_1 + 0x2588) <= param_2) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


