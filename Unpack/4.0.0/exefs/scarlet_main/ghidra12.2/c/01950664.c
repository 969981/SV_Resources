/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01950664; name: FUN_01950664
 */


void FUN_01950664(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  lVar1 = param_2[3];
  lStack_48 = param_2[4];
  local_40 = param_2[5];
  lStack_38 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = local_40;
  param_1[6] = lStack_38;
  param_1[3] = lVar1;
  param_1[4] = lStack_48;
  if (param_2[1] - *param_2 != 0) {
    lVar1 = param_2[1] - *param_2 >> 5;
    FUN_019506f8(param_1,lVar1);
    lStack_48 = param_1[1];
    local_40 = lStack_48 + lVar1 * 0x20;
    FUN_01950780(param_1 + 3,*param_2,param_2[1],&lStack_48);
    param_1[1] = lStack_48;
  }
  return;
}


