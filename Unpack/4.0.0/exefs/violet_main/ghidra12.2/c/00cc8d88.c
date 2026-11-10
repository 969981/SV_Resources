/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cc8d88; name: FUN_00cc8d88
 */


void FUN_00cc8d88(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045d3888;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_045d38c0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00cc9154(param_1 + 9);
  FUN_00cc8f64(param_1 + 0xd);
  FUN_00cc8fa4(param_1 + 0x1a);
  lVar3 = param_1[1];
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_78 = 0x3fffffffffffffff;
  local_60 = 0;
  uStack_58 = 0;
  uStack_48 = 0x3fffffffffffffff;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  local_80 = lVar3;
  local_50 = lVar3;
  memcpy(param_1 + 0x2d,&uStack_88,0x28);
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  param_1[0x32] = 0;
  memcpy(param_1 + 0x33,&uStack_58,0x28);
  local_60 = 0;
  uStack_58 = 0;
  FUN_00cc995c(&local_a0);
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)((long)param_1 + 0x22c) = 1;
  param_1[0x3b] = 0;
  param_1[0x3c] = lVar3;
  param_1[0x3d] = 0x1fffffffffffffff;
  param_1[0x3e] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x44,0,1);
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)((long)param_1 + 0x24c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x48,0,1);
  return;
}


