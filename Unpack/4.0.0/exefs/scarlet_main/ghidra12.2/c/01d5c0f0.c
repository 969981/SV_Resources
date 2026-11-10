/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d5c0f0; name: FUN_01d5c0f0
 */


void FUN_01d5c0f0(undefined8 param_1,char *param_2,byte *param_3,undefined8 param_4,
                 undefined4 param_5,byte *param_6,byte param_7)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  long lVar9;
  byte *pbVar10;
  short sVar11;
  undefined8 *puVar12;
  byte local_b4 [4];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0 [2];
  undefined4 local_8c;
  undefined2 local_88;
  undefined2 local_86;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  long *local_38;
  
  uVar6 = DAT_04831018;
  cVar2 = *param_2;
  if (cVar2 == '\x02') {
    lVar9 = *(long *)(param_2 + 8);
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar11 = *(short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar11) {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01d5c318;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01d5c318:
          bVar5 = false;
        }
        if (bVar5) {
          local_38 = (long *)0x0;
          if (*(long *)(lVar9 + 0x10) != 0) {
            local_38 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
          }
          goto LAB_01d5c144;
        }
        sVar11 = sVar4;
      } while (sVar4 != 0);
    }
  }
  else if ((cVar2 == '\x01') || (cVar2 == '\0')) {
    local_38 = *(long **)(param_2 + 8);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x58))();
    }
    goto LAB_01d5c144;
  }
  local_38 = (long *)0x0;
LAB_01d5c144:
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_68 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_60 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_58 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    local_60 = strlen((char *)param_3);
    bVar3 = *param_3;
    local_70 = &DAT_cbf29ce484222645;
    pbVar10 = param_3;
    while (bVar3 != 0) {
      pbVar10 = pbVar10 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_3;
  }
  puVar8 = (undefined2 *)FUN_017c262c(param_4);
  local_88 = *puVar8;
  local_86 = puVar8[1];
  local_84 = *(undefined1 *)(puVar8 + 2);
  local_83 = *(undefined1 *)((long)puVar8 + 5);
  local_82 = *(undefined1 *)(puVar8 + 3);
  local_80 = *(undefined4 *)(puVar8 + 4);
  uStack_7c = *(undefined4 *)(puVar8 + 6);
  local_78 = *(undefined4 *)(puVar8 + 8);
  local_a0[0] = param_1;
  local_8c = param_5;
  if ((1 < *param_6) ||
     (puVar12 = *(undefined8 **)(param_6 + 8), *(undefined8 **)(param_6 + 8) == (undefined8 *)0x0))
  {
    if ((*PTR_DAT_047d3c18 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_047d3c18);
      puVar12 = (undefined8 *)PTR_DAT_047d3c20;
      if (iVar7 != 0) {
        *(undefined8 *)PTR_DAT_047d3c20 = 0;
        *(undefined8 *)((long)puVar12 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d3c18);
      }
    }
    else {
      puVar12 = (undefined8 *)PTR_DAT_047d3c20;
    }
  }
  uStack_a8 = puVar12[1];
  local_b0 = *puVar12;
  local_b4[0] = param_7 & 1;
  FUN_01d5e6d0(uVar6,&local_38,&local_70,&local_88,&local_8c,local_a0,&local_b0,local_b4);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x60))();
  }
  return;
}


