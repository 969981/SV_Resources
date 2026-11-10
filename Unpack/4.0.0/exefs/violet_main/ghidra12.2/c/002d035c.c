/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d035c; name: FUN_002d035c
 */


void FUN_002d035c(uint *param_1,uint param_2,int param_3)

{
  *param_1 = *param_1 & 8 | param_3 << 4 | 4;
  param_1[1] = param_2;
  return;
}


