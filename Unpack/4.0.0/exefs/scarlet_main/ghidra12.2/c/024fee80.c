/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024fee80; name: FUN_024fee80
 */


void FUN_024fee80(undefined1 *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_30;
  float local_4;
  
  local_4 = (float)param_2;
  FUN_025011c0(param_7,*param_6,param_6[1],&local_4);
  *param_1 = 1;
  local_60 = CONCAT44(extraout_var,extraout_s0);
  uStack_58 = extraout_var_00;
  uStack_50 = param_3;
  local_40 = param_4;
  uStack_30 = param_5;
  FUN_00d319d0(param_1 + 8,&local_60);
  return;
}


