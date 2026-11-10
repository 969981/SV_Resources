/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ecc64; name: FUN_018ecc64
 */


void FUN_018ecc64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  long *local_170;
  undefined1 auStack_138 [64];
  long *local_f8 [4];
  long *local_d8;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  char *local_48;
  
  FUN_01fb1c48();
  *param_1 = &PTR_FUN_0456a0a0;
  param_1[4] = &PTR_LAB_0456a0d0;
  param_1[5] = param_2;
  nn::prepo::PlayReport::PlayReport((PlayReport *)(param_1 + 6));
  plVar4 = (long *)param_1[5];
  uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4,0x2000,8);
  param_1[0xd] = uVar1;
  param_1[0xe] = plVar4;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0x2000;
  param_1[0x10] = 8;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x25),false,0);
  nn::prepo::PlayReport::SetBuffer((PlayReport *)(param_1 + 6),param_1[0xd]);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_c8 = PTR_DAT_047d8e88 + 0x10;
  uStack_80 = 0;
  uStack_c0 = 0;
  local_f8[0] = (long *)0x3c27a87;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_88 = local_c8;
  FUN_00e52f24(&local_190,local_f8);
  uVar2 = FUN_00dc5c18(&local_88,0,&local_190,0,param_1[1]);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    local_48 = "world/data/playreport/playreport_key_data/playreport_key_data_array.bfbs";
    FUN_00e52f24(local_f8,&local_48);
    uVar3 = FUN_00dc5c18(&local_c8,0,local_f8,0,param_1[1]);
    uVar3 = uVar3 & 0xffffffff;
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if (local_f8[0] != (long *)0x0) {
      (**(code **)(*local_f8[0] + 0x20))();
    }
  }
  if (local_170 != (long *)0x0) {
    (**(code **)(*local_170 + 0x20))();
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    FUN_00fb9e50(&local_190,&local_88,&local_c8);
    param_1[0x12] = local_190;
    param_1[0x13] = local_188;
    param_1[0x14] = uStack_180;
    if (*(char *)(param_1 + 0x11) == '\0') {
      FUN_00fb9f24(param_1 + 0x15,auStack_178);
      FUN_00fb9f24(param_1 + 0x1d,auStack_138);
      *(undefined1 *)(param_1 + 0x11) = 1;
    }
    else {
      FUN_00fb9ce0();
      FUN_00fb9ce0(param_1 + 0x1d,auStack_138);
    }
    FUN_00db239c(auStack_138);
    FUN_00db239c(auStack_178);
  }
  FUN_00db239c(&local_c8);
  FUN_00db239c(&local_88);
  return;
}


