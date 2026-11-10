/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017b0548; name: FUN_017b0548
 */


void FUN_017b0548(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
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
  puVar1 = PTR_DAT_047d8c78;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar4;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar5 = param_1 + 5;
  *plVar5 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar5);
  *param_1 = (long)&PTR_FUN_045eede8;
  param_1[4] = (long)&PTR_LAB_045eee68;
  *plVar5 = (long)&PTR_LAB_045eeeb8;
  local_80 = param_1[1];
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uStack_78 = 0x1fffffffffffffff;
  uStack_48 = 0x1fffffffffffffff;
  local_90 = 0;
  uStack_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_40 = 0;
  local_38 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_60 = 0;
  uStack_58 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_50 = local_80;
  memcpy(param_1 + 0xe,&uStack_88,0x28);
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  param_1[0x13] = 0;
  memcpy(param_1 + 0x14,&uStack_58,0x28);
  local_60 = 0;
  uStack_58 = 0;
  FUN_017b070c(&local_a0);
  return;
}


