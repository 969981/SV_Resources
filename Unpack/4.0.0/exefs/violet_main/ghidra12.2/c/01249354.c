/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01249354; name: FUN_01249354
 */


long FUN_01249354(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)param_2 * 0x8c + 8;
  if (*(byte *)(param_1 + 0x2420) <= param_2) {
    lVar1 = 0;
  }
  return lVar1;
}


