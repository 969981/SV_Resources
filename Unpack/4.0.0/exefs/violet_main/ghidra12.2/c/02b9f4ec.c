/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9f4ec; name: FUN_02b9f4ec
 */


bool FUN_02b9f4ec(undefined8 *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (((0.0 <= (float)param_1[1]) && (0.0 <= (float)*param_1)) &&
     (0.0 <= (float)((ulong)*param_1 >> 0x20))) {
    bVar1 = (float)((ulong)param_1[1] >> 0x20) < 0.0;
  }
  return bVar1;
}


