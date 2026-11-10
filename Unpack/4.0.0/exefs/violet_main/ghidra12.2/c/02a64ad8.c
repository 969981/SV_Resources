/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a64ad8; name: FUN_02a64ad8
 */


undefined8 FUN_02a64ad8(undefined4 param_1,long param_2,void *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  long *plVar20;
  undefined8 uVar21;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8 [5];
  undefined8 local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  long local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  long local_80;
  undefined8 *puStack_78;
  
  if (*(long *)(param_2 + 0x1f8) == 0) {
    local_98 = *(long *)(param_2 + 8);
    FUN_0103caf0(&local_100,local_98,&local_98);
    lVar15 = local_100;
    local_100 = 0;
    lVar18 = *(long *)(param_2 + 0x1f8);
    *(long *)(param_2 + 0x1f8) = lVar15;
    if (lVar18 == 0) {
      *(undefined8 *)(param_2 + 0x210) = local_e8[0];
      *(long *)(param_2 + 0x208) = local_f0;
      *(undefined8 *)(param_2 + 0x200) = local_f8;
    }
    else {
      FUN_0103e9d8(param_2 + 0x200);
      lVar15 = local_100;
      *(undefined8 *)(param_2 + 0x210) = local_e8[0];
      *(long *)(param_2 + 0x208) = local_f0;
      *(undefined8 *)(param_2 + 0x200) = local_f8;
      local_100 = 0;
      if (lVar15 != 0) {
        FUN_0103e9d8(&local_f8);
      }
    }
  }
  local_100 = -0xfffffffd;
  uVar14 = FUN_0103b2e0(param_2 + 0xe8,&local_100);
  plVar20 = (long *)(param_2 + 0x48);
  lVar18 = *plVar20;
  lVar15 = nn::os::GetCurrentThread();
  if (lVar15 == lVar18) {
    plVar20 = (long *)0x0;
    bVar19 = true;
  }
  else {
    lVar15 = nn::os::GetCurrentThread();
    do {
      if (*plVar20 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
          while (*plVar20 == 0) {
            cVar7 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar19) {
              *plVar20 = lVar15;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_02a64ba0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar7 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar19) {
        *plVar20 = lVar15;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_02a64ba0:
    bVar19 = false;
  }
  local_100 = param_2;
  local_f8 = uVar14;
  local_f0 = param_2;
  memcpy(local_e8,param_3,0x28);
  local_c0 = *(undefined8 *)((long)param_3 + 0x28);
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  FUN_00f34110(&local_b8,(long)param_3 + 0x30);
  puVar1 = (undefined8 *)(param_2 + 0x78);
  puVar5 = *(undefined8 **)(param_2 + 0x68);
  local_a8 = param_1;
  local_a0 = param_4;
  if (puVar5 < *(undefined8 **)(param_2 + 0x70)) {
    uVar21 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar15 != 0) {
      if (0xf < *(ulong *)(lVar15 + 0x80)) {
LAB_02a65040:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar21;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    }
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = local_100;
    puVar5[5] = local_f8;
    puVar5[6] = local_f0;
    memcpy(puVar5 + 7,local_e8,0x28);
    puVar5[0xc] = local_c0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    FUN_00fd9730(puVar5 + 0xd,&local_b8);
    puVar10 = PTR_LAB_047dc218;
    puVar9 = PTR_FUN_047dc210;
    puVar8 = PTR_FUN_047dc208;
    puVar5[0xf] = CONCAT44(uStack_a4,local_a8);
    puVar5[0x10] = local_a0;
    puVar11 = PTR_LAB_047dc220;
    *puVar5 = puVar8;
    puVar5[1] = puVar9;
    puVar5[2] = puVar10;
    puVar5[3] = puVar11;
    if (lVar15 != 0) {
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    }
    *(undefined8 **)(param_2 + 0x68) = puVar5 + 0x20;
  }
  else {
    lVar16 = FUN_01fee8c8(param_2 + 0x60,((long)puVar5 - *(long *)(param_2 + 0x60) >> 8) + 1);
    lVar15 = *(long *)(param_2 + 0x60);
    lVar18 = *(long *)(param_2 + 0x68);
    local_80 = 0;
    puStack_78 = puVar1;
    if (lVar16 == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,lVar16 << 8,0x10);
      if (lVar17 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    puVar5 = (undefined8 *)(lVar17 + (lVar18 - lVar15 >> 8) * 0x100);
    local_80 = lVar17 + lVar16 * 0x100;
    uVar21 = *puVar1;
    local_98 = lVar17;
    puStack_90 = puVar5;
    local_88 = puVar5;
    if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar15 != 0) {
      if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02a65040;
      *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar21;
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    }
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = local_100;
    puVar5[5] = local_f8;
    puVar5[6] = local_f0;
    memcpy(puVar5 + 7,local_e8,0x28);
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xc] = local_c0;
    FUN_00fd9730(puVar5 + 0xd,&local_b8);
    puVar10 = PTR_LAB_047dc218;
    puVar9 = PTR_FUN_047dc210;
    puVar8 = PTR_FUN_047dc208;
    puVar5[0xf] = CONCAT44(uStack_a4,local_a8);
    puVar5[0x10] = local_a0;
    *puVar5 = puVar8;
    puVar5[1] = puVar9;
    puVar5[2] = puVar10;
    puVar5[3] = PTR_LAB_047dc220;
    if (lVar15 != 0) {
      *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    }
    local_88 = local_88 + 0x20;
    FUN_0103b38c(param_2 + 0x60,&local_98);
    FUN_0103bbd0(&local_98);
  }
  plVar12 = local_b8;
  if (local_b8 != (long *)0x0) {
    plVar2 = local_b8 + 3;
    do {
      sVar4 = (short)*plVar2;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(short *)plVar2 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_b8 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_98 = *plVar12;
        FUN_00c44438(lVar15 + 0x8040,&local_98);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (!bVar19) {
    *plVar20 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar20 + 1));
  }
  return uVar14;
}


