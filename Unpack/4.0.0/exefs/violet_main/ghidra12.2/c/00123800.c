/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00123800; name: FUN_00123800
 */


void FUN_00123800(long param_1,long *param_2)

{
  param_2[2] = 0;
  param_2[3] = param_1;
  *param_2 = (long)(param_2 + 4);
  param_2[1] = 0x400;
  FUN_00122800();
  return;
}


