/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3fbc0; name: FUN_01e3fbc0
 */


void FUN_01e3fbc0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  int local_18;
  
  local_48 = *(int *)(param_2 + 1);
  local_68 = *(int *)(param_4 + 1);
  local_50 = *param_2;
  if (local_48 == local_68) {
    local_30 = *param_3;
    local_28 = *(undefined4 *)(param_3 + 1);
    local_40 = *param_4;
    local_38 = local_48;
    local_20 = local_50;
    local_18 = local_48;
    FUN_01e3fc60(&local_20,&local_30,&local_40);
  }
  else {
    local_60 = *param_3;
    local_58 = *(undefined4 *)(param_3 + 1);
    local_70 = *param_4;
    FUN_01e3fde0(param_1,&local_50,&local_60,&local_70);
  }
  return;
}


