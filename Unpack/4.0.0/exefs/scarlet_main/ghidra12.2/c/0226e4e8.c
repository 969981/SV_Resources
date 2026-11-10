/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


