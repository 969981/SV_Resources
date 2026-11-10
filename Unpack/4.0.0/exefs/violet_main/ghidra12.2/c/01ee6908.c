/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ee6908; name: FUN_01ee6908
 */


void FUN_01ee6908(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_01ee7c70(param_1,param_2,&local_50,auStack_78);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


