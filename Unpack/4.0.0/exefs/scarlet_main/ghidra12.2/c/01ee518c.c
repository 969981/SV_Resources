/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ee518c; name: FUN_01ee518c
 */


void FUN_01ee518c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_70 = *param_3;
  uStack_68 = param_3[1];
  local_60 = param_3[2];
  local_38 = (long *)param_3[3];
  local_58 = (long *)0x0;
  local_50 = local_70;
  uStack_48 = uStack_68;
  local_40 = local_60;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
    local_70 = *param_3;
    uStack_68 = param_3[1];
    local_60 = param_3[2];
    local_58 = (long *)param_3[3];
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_01eea7e0(param_1,param_2,&local_50,auStack_78);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


