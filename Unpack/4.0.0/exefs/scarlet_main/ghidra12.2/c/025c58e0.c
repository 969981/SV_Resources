/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025c58e0; name: FUN_025c58e0
 */


uint FUN_025c58e0(double param_1,double param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  float local_18;
  float local_14;
  
  local_14 = (float)param_1;
  local_18 = (float)param_2;
  uVar1 = FUN_025cf180(param_4,*param_3,param_3[1],&local_14,&local_18);
  return uVar1 & 1;
}


