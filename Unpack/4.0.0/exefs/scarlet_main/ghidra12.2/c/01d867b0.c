/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d867b0; name: FUN_01d867b0
 */


void FUN_01d867b0(undefined1 *param_1,undefined1 param_2 [16],double param_3,double param_4)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  thunk_FUN_01df5630(&local_50,param_2,(float)param_3,(float)param_4);
  *param_1 = 1;
  local_38 = local_50;
  uStack_30 = uStack_48;
  local_28 = local_40;
  FUN_00e1e2cc(param_1 + 8,&local_38);
  return;
}


