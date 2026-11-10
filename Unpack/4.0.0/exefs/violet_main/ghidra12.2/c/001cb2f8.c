/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cb2f8; name: FUN_001cb2f8
 */


byte FUN_001cb2f8(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 < 0x80) && (param_1 != 0x20)) {
    bVar1 = (&DAT_03cc05ae)[param_1] & 0x5f;
  }
  return bVar1;
}


