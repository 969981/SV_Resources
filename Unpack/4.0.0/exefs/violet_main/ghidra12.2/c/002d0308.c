/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d0308; name: FUN_002d0308
 */


void FUN_002d0308(uint *param_1,int param_2,uint param_3)

{
  *param_1 = *param_1 & 8 | param_2 << 4;
  param_1[1] = param_3;
  return;
}


