/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004996e0; name: FUN_004996e0
 */


long FUN_004996e0(uint param_1)

{
  long lVar1;
  
  if ((int)param_1 < 0) {
    return 0;
  }
  if ((int)param_1 < 9) {
    return (ulong)param_1 * 0x30 + 0x44c37a0;
  }
  lVar1 = FUN_0047e450(DAT_047f43e8,param_1 - 9);
  return lVar1;
}


