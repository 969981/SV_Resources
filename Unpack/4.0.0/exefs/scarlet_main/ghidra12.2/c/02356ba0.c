/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02356ba0; name: FUN_02356ba0
 */


void FUN_02356ba0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  char local_48 [8];
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_a0 = *param_2;
  uStack_98 = param_2[1];
  local_90 = param_2[2];
  local_88 = (long *)param_2[3];
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x18))();
  }
  local_80 = param_2[4];
  uStack_78 = param_2[5];
  local_70 = (long *)param_2[6];
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  FUN_023553b4(&local_68,&local_a0);
  local_40 = local_68;
  uStack_38 = uStack_60;
  local_68 = 0;
  local_48[0] = '\x01';
  local_30 = local_58;
  uStack_28 = uStack_50;
  FUN_0234f630(param_1,local_48);
  lVar1 = local_40;
  if (local_48[0] == '\x01') {
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_0234f714(&uStack_38);
    }
  }
  local_68 = 0;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  return;
}


