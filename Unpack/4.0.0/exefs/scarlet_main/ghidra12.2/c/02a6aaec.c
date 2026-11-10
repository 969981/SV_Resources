/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a6aaec; name: FUN_02a6aaec
 */


undefined8 FUN_02a6aaec(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  long local_80;
  undefined8 *puStack_78;
  
  if (*(long *)(param_2 + 0x1f8) == 0) {
    local_b0 = *(undefined8 *)(param_2 + 8);
    FUN_0103caf0(&local_98,local_b0,&local_b0);
    lVar11 = local_98;
    local_98 = 0;
    lVar14 = *(long *)(param_2 + 0x1f8);
    *(long *)(param_2 + 0x1f8) = lVar11;
    if (lVar14 == 0) {
      *(long *)(param_2 + 0x210) = local_80;
      *(undefined8 **)(param_2 + 0x208) = local_88;
      *(undefined8 **)(param_2 + 0x200) = local_90;
    }
    else {
      FUN_0103e9d8(param_2 + 0x200);
      lVar11 = local_98;
      *(long *)(param_2 + 0x210) = local_80;
      *(undefined8 **)(param_2 + 0x208) = local_88;
      *(undefined8 **)(param_2 + 0x200) = local_90;
      local_98 = 0;
      if (lVar11 != 0) {
        FUN_0103e9d8(&local_90);
      }
    }
  }
  local_98 = -0xfffffffd;
  uVar10 = FUN_0103b2e0(param_2 + 0xe8,&local_98);
  plVar16 = (long *)(param_2 + 0x48);
  lVar14 = *plVar16;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 == lVar14) {
    plVar16 = (long *)0x0;
    bVar4 = true;
  }
  else {
    lVar11 = nn::os::GetCurrentThread();
    do {
      if (*plVar16 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
          while (*plVar16 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *plVar16 = lVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02a6abb0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02a6abb0:
    bVar4 = false;
  }
  local_b0 = *param_3;
  local_a8 = param_3[1];
  puVar1 = (undefined8 *)(param_2 + 0x78);
  local_a0 = param_3[2];
  puVar2 = *(undefined8 **)(param_2 + 0x68);
  if (puVar2 < *(undefined8 **)(param_2 + 0x70)) {
    uVar15 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_02a6aef4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar15;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    puVar2[4] = param_2;
    puVar2[5] = uVar10;
    puVar2[6] = param_2;
    puVar5 = PTR_FUN_047dc5b0;
    puVar2[7] = local_b0;
    puVar2[8] = local_a8;
    puVar2[9] = local_a0;
    *(undefined4 *)(puVar2 + 10) = param_1;
    puVar6 = PTR_LAB_047dc5b8;
    puVar2[0xb] = param_4;
    puVar8 = PTR_LAB_047dc5c8;
    puVar7 = PTR_LAB_047dc5c0;
    *puVar2 = puVar5;
    puVar2[1] = puVar6;
    puVar2[2] = puVar7;
    puVar2[3] = puVar8;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *(undefined8 **)(param_2 + 0x68) = puVar2 + 0x20;
  }
  else {
    lVar12 = FUN_01fee8c8(param_2 + 0x60,((long)puVar2 - *(long *)(param_2 + 0x60) >> 8) + 1);
    lVar11 = *(long *)(param_2 + 0x60);
    lVar14 = *(long *)(param_2 + 0x68);
    local_80 = 0;
    puStack_78 = puVar1;
    if (lVar12 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,lVar12 << 8,0x10);
      if (lVar13 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    puVar2 = (undefined8 *)(lVar13 + (lVar14 - lVar11 >> 8) * 0x100);
    local_80 = lVar13 + lVar12 * 0x100;
    uVar15 = *puVar1;
    local_98 = lVar13;
    local_90 = puVar2;
    local_88 = puVar2;
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02a6aef4;
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar15;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = param_2;
    puVar2[4] = param_2;
    puVar2[5] = uVar10;
    puVar2[7] = local_b0;
    puVar2[8] = local_a8;
    puVar2[9] = local_a0;
    puVar5 = PTR_FUN_047dc5b0;
    *(undefined4 *)(puVar2 + 10) = param_1;
    puVar6 = PTR_LAB_047dc5b8;
    puVar2[0xb] = param_4;
    puVar8 = PTR_LAB_047dc5c8;
    puVar7 = PTR_LAB_047dc5c0;
    *puVar2 = puVar5;
    puVar2[1] = puVar6;
    puVar2[2] = puVar7;
    puVar2[3] = puVar8;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    local_88 = local_88 + 0x20;
    FUN_0103b38c(param_2 + 0x60,&local_98);
    FUN_0103bbd0(&local_98);
  }
  if (!bVar4) {
    *plVar16 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar16 + 1));
  }
  return uVar10;
}


