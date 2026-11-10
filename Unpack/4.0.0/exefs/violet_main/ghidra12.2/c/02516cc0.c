/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02516cc0; name: FUN_02516cc0
 */


void FUN_02516cc0(undefined1 *param_1,double param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined8 local_30;
  undefined8 uStack_28;
  float local_4;
  
  local_4 = (float)param_2;
  FUN_02517f58(param_4,*param_3,param_3[1],&local_4);
  *param_1 = 1;
  local_30 = CONCAT44(extraout_var,extraout_s0);
  uStack_28 = extraout_var_00;
  FUN_00d200a4(param_1 + 8,&local_30);
  return;
}


