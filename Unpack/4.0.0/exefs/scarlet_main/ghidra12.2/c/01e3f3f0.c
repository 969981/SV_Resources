/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3f3f0; name: FUN_01e3f3f0
 */


void FUN_01e3f3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  undefined8 local_30;
  int local_28;
  undefined8 local_20;
  int local_18;
  
  local_28 = *(int *)(param_6 + 1);
  local_18 = (int)param_3;
  local_30 = *param_6;
  if (local_28 == local_18) {
    local_20 = local_30;
    FUN_01e3f660(param_1,param_2,param_3,param_4,param_5,&local_20);
  }
  else {
    FUN_01e3f7c0(param_1,param_2,param_3,param_4,param_5,&local_30);
  }
  return;
}


