/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0226e4e8; name: FUN_0226e4e8
 */


float FUN_0226e4e8(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float local_c;
  float fStack_8;
  float local_4;
  
  local_4 = *param_1 + *param_2;
  pfVar1 = &local_c;
  if (local_4 <= 1.0) {
    pfVar1 = &local_4;
  }
  pfVar2 = &fStack_8;
  if (-1.0 <= local_4) {
    pfVar2 = pfVar1;
  }
  local_c = 1.0;
  fStack_8 = -1.0;
  return *pfVar2;
}


