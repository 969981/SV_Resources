/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025c62e4; name: FUN_025c62e4
 */


uint FUN_025c62e4(double param_1,double param_2,double param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  uint uVar1;
  float local_1c;
  float fStack_18;
  float local_14;
  
  local_14 = (float)param_1;
  fStack_18 = (float)param_2;
  local_1c = (float)param_3;
  uVar1 = FUN_025cfc8c(param_5,*param_4,param_4[1],&local_14,&fStack_18,&local_1c);
  return uVar1 & 1;
}


