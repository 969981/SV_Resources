/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6ed18; name: FUN_01f6ed18
 */


void FUN_01f6ed18(long *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *local_90;
  long local_88;
  long lStack_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 auStack_70 [16];
  byte local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  long *plStack_48;
  long local_40;
  long local_38;
  
  puVar3 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  puVar3 = PTR_DAT_047d8c78;
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar8 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar8;
  param_1[4] = (long)(puVar3 + 0x88);
  plVar9 = param_1 + 5;
  *plVar9 = (long)(puVar3 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar9);
  *param_1 = (long)&PTR_FUN_0455c900;
  param_1[4] = (long)&PTR_LAB_0455c978;
  *plVar9 = (long)&DAT_0455c9c8;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = *param_2;
  lVar5 = param_2[1];
  param_1[10] = lVar5;
  if (lVar5 != 0) {
    plVar9 = (long *)(lVar5 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(undefined8 *)((long)param_1 + 0x65) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_01cfa5b0(param_1 + 0xe,param_3);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  local_40 = 0;
  local_38 = 0;
  if (param_2[1] == 0) {
    local_38 = 0;
  }
  else {
    local_38 = std::__shared_weak_count::lock();
    if (local_38 != 0) {
      lVar5 = *param_2;
      local_40 = lVar5;
      if (lVar5 != 0) {
        uVar6 = FUN_01f6ef48();
        FUN_01f6ef54(auStack_70,lVar5 + 0x10,uVar6);
        local_90 = param_1;
        FUN_01f6f044(&local_88,auStack_70,&local_90);
        lVar8 = lStack_80;
        lVar5 = local_88;
        local_88 = 0;
        lStack_80 = 0;
        lVar7 = param_1[0xc];
        param_1[0xb] = lVar5;
        param_1[0xc] = lVar8;
        if (lVar7 != 0) {
          std::__shared_weak_count::__release_weak();
        }
        *(undefined1 *)((long)param_1 + 0x6c) = local_74;
        *(undefined4 *)(param_1 + 0xd) = local_78;
        FUN_01f6f118(&local_88);
        if ((local_60 & 1) != 0) {
          (**(code **)(*plStack_48 + 0x18))
                    (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
        }
        FUN_01f6f158(auStack_70);
      }
    }
  }
  FUN_01f6f1b0(&local_40);
  return;
}


