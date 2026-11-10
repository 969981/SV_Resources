/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd1c40; name: FUN_01dd1c40
 */


void FUN_01dd1c40(long param_1,int *param_2,int *param_3)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  char *pcVar8;
  code *pcVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  int iVar15;
  short sVar16;
  long *plVar17;
  undefined8 *local_f0 [2];
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 *local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  
  if ((param_2[1] == 0) && (*param_3 != 0)) {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar11 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar11;
    local_e0 = 0x7aee18080d2405b4;
    local_d8 = "PLAY_UI_BOX_MOVEMENT";
    local_d0 = 0x14;
    local_c8 = (long *)0x0;
    if (*(long *)(lVar11 + 0x48) == 0) {
      uVar12 = 0xffffffffffffffff;
    }
    else {
      uVar12 = FUN_00cf8198();
    }
    memset(&local_c0,0,0x80);
    plVar17 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
    iVar10 = (**(code **)(*plVar17 + 0xd0))
                       (plVar17,"PLAY_UI_BOX_MOVEMENT",uVar12,1,&LAB_01080c70,lVar11,0,0,0);
    if (iVar10 != 0) {
      FUN_0104f218(*(undefined8 *)(lVar11 + 0x220),&local_e0,iVar10,uVar12,0,&local_c0,0);
      pcVar9 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = (undefined8 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar9)(auStack_a0);
      }
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    FUN_01dd2988(param_1,*param_3);
    return;
  }
  if (*(char *)(param_1 + 500) != '\0') {
    return;
  }
  if (*param_2 == 5) {
    if (0 < *param_3) goto LAB_01dd1dc4;
  }
  else if ((*param_2 == 0) && (*param_3 < 0)) {
LAB_01dd1dc4:
    uVar14 = *(uint *)(param_1 + 0x298);
    if (uVar14 < 2) {
      FUN_01dd29cc(local_f0,param_1,1);
      local_c0 = (undefined8 *)((ulong)(param_2[1] - 1) << 0x20);
      FUN_014e4eac(param_1,&local_c0);
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      lVar11 = *(long *)PTR_DAT_047d8288;
      *(long *)PTR_DAT_047d8290 = lVar11;
      local_e0 = 0xab49936982f33827;
      local_d8 = "PLAY_UI_COMMON_SELECT";
      local_d0 = 0x15;
      local_c8 = (long *)0x0;
      if (*(long *)(lVar11 + 0x48) == 0) {
        uVar12 = 0xffffffffffffffff;
      }
      else {
        uVar12 = FUN_00cf8198();
      }
      pcVar8 = local_d8;
      memset(&local_c0,0,0x80);
      plVar17 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
      iVar10 = (**(code **)(*plVar17 + 0xd0))(plVar17,pcVar8,uVar12,1,&LAB_01080c70,lVar11,0,0,0);
      if (iVar10 != 0) {
        FUN_0104f218(*(undefined8 *)(lVar11 + 0x220),&local_e0,iVar10,uVar12,0,&local_c0,0);
        pcVar9 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = 0;
          uStack_a8 = 0;
          local_c0 = (undefined8 *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar9)(auStack_a0);
        }
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      puVar7 = local_f0[0];
      if (local_f0[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_f0[0] + 3);
        do {
          sVar16 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar16 == 1) {
          piVar2 = (int *)((long)local_f0[0] + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_c0 = (undefined8 *)*puVar7;
            FUN_00c44438(lVar11 + 0x8040,&local_c0);
          }
        }
        else if (sVar16 == 0) goto LAB_01dd2100;
      }
      uVar14 = *(uint *)(param_1 + 0x298);
    }
    if (uVar14 == 2) {
      FUN_01dd29cc(local_f0,param_1,2);
      local_c0 = (undefined8 *)((ulong)(uint)param_2[1] << 0x20);
      FUN_014e4eac(param_1,&local_c0);
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      lVar11 = *(long *)PTR_DAT_047d8288;
      *(long *)PTR_DAT_047d8290 = lVar11;
      local_e0 = 0xab49936982f33827;
      local_d8 = "PLAY_UI_COMMON_SELECT";
      local_d0 = 0x15;
      local_c8 = (long *)0x0;
      if (*(long *)(lVar11 + 0x48) == 0) {
        uVar12 = 0xffffffffffffffff;
      }
      else {
        uVar12 = FUN_00cf8198();
      }
      pcVar8 = local_d8;
      memset(&local_c0,0,0x80);
      plVar17 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
      iVar10 = (**(code **)(*plVar17 + 0xd0))(plVar17,pcVar8,uVar12,1,&LAB_01080c70,lVar11,0,0,0);
      if (iVar10 != 0) {
        FUN_0104f218(*(undefined8 *)(lVar11 + 0x220),&local_e0,iVar10,uVar12,0,&local_c0,0);
        pcVar9 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = 0;
          uStack_a8 = 0;
          local_c0 = (undefined8 *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar9)(auStack_a0);
        }
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      if (local_f0[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_f0[0] + 3);
        do {
          sVar16 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar16 == 1) {
          piVar2 = (int *)((long)local_f0[0] + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_c0 = (undefined8 *)*local_f0[0];
            FUN_00c44438(lVar11 + 0x8040,&local_c0);
          }
        }
        else if (sVar16 == 0) goto LAB_01dd2100;
      }
    }
  }
  if (param_2[1] == 5) {
    if (param_3[1] < 1) {
      return;
    }
  }
  else {
    if (param_2[1] != 0) {
      return;
    }
    if (-1 < param_3[1]) {
      return;
    }
  }
  if (*param_2 < 3) {
    FUN_01dd29cc(&local_c0,param_1,3);
    puVar7 = local_c0;
    if (local_c0 == (undefined8 *)0x0) goto LAB_01dd20c4;
    if (*(short *)((long)local_c0 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_c0 + 0x1a);
      sVar16 = *(short *)((long)local_c0 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01dd2080;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01dd2080:
          bVar6 = false;
        }
        if (bVar6) {
          plVar17 = (long *)0x0;
          if (local_c0[2] != 0) {
            plVar17 = (long *)(local_c0[2] + -0x28);
          }
          goto LAB_01dd22a4;
        }
        sVar16 = sVar4;
      } while (sVar4 != 0);
    }
    plVar17 = (long *)0x0;
LAB_01dd22a4:
    psVar1 = (short *)(local_c0 + 3);
    do {
      sVar16 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_e0 = *puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_e0);
      }
    }
    else if (sVar16 == 0) goto LAB_01dd2100;
    if (plVar17 == (long *)0x0) goto LAB_01dd20c4;
    FUN_014e974c(plVar17,param_1 + 0x184,1,0);
    iVar3 = *(int *)(param_1 + 0x1d8);
    iVar15 = *(int *)(param_1 + 0x108);
    iVar10 = 0;
    if (*(int *)(param_1 + 0x1dc) != 0) {
      iVar10 = *(int *)(param_1 + 0x1dc) + -1;
    }
    if (iVar15 == 0) {
      lVar11 = FUN_01195854();
      uVar14 = (uint)*(byte *)(lVar11 + 0x570);
      iVar15 = *(int *)(param_1 + 0x108);
    }
    else if (iVar15 - 1U < 2) {
      uVar14 = *(uint *)(param_1 + 0x2a4);
    }
    else {
      uVar14 = 0xffffffff;
    }
    if (iVar15 == 0) {
      iVar10 = iVar3 + iVar10 * 6;
    }
    else if ((iVar15 != 1) && (iVar15 != 2)) {
      iVar10 = 1;
    }
    FUN_014e89c0(param_1,0,uVar14,iVar10);
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar11 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar11;
    local_e0 = 0xab49936982f33827;
    local_d8 = "PLAY_UI_COMMON_SELECT";
    local_d0 = 0x15;
    local_c8 = (long *)0x0;
    if (*(long *)(lVar11 + 0x48) == 0) {
      uVar12 = 0xffffffffffffffff;
    }
    else {
      uVar12 = FUN_00cf8198();
    }
    pcVar8 = local_d8;
    memset(&local_c0,0,0x80);
    plVar13 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
    iVar10 = (**(code **)(*plVar13 + 0xd0))(plVar13,pcVar8,uVar12,1,&LAB_01080c70,lVar11,0,0,0);
    if (iVar10 != 0) {
      FUN_0104f218(*(undefined8 *)(lVar11 + 0x220),&local_e0,iVar10,uVar12,0,&local_c0,0);
      pcVar9 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = (undefined8 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar9)(auStack_a0);
      }
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    lVar11 = plVar17[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    FUN_01dd29cc(&local_c0,param_1,3);
    puVar7 = local_c0;
    if (local_c0 == (undefined8 *)0x0) goto LAB_01dd20c4;
    if (*(short *)((long)local_c0 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_c0 + 0x1a);
      sVar16 = *(short *)((long)local_c0 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01dd227c;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01dd227c:
          bVar6 = false;
        }
        if (bVar6) {
          plVar17 = (long *)0x0;
          if (local_c0[2] != 0) {
            plVar17 = (long *)(local_c0[2] + -0x28);
          }
          goto LAB_01dd242c;
        }
        sVar16 = sVar4;
      } while (sVar4 != 0);
    }
    plVar17 = (long *)0x0;
LAB_01dd242c:
    psVar1 = (short *)(local_c0 + 3);
    do {
      sVar16 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_e0 = *puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_e0);
      }
    }
    else if (sVar16 == 0) {
LAB_01dd2100:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar17 == (long *)0x0) goto LAB_01dd20c4;
    FUN_014e974c(plVar17,param_1 + 0x17c,1,0);
    iVar3 = *(int *)(param_1 + 0x1d8);
    iVar15 = *(int *)(param_1 + 0x108);
    iVar10 = 0;
    if (*(int *)(param_1 + 0x1dc) != 0) {
      iVar10 = *(int *)(param_1 + 0x1dc) + -1;
    }
    if (iVar15 == 0) {
      lVar11 = FUN_01195854();
      uVar14 = (uint)*(byte *)(lVar11 + 0x570);
      iVar15 = *(int *)(param_1 + 0x108);
    }
    else if (iVar15 - 1U < 2) {
      uVar14 = *(uint *)(param_1 + 0x2a4);
    }
    else {
      uVar14 = 0xffffffff;
    }
    if (iVar15 == 0) {
      iVar10 = iVar3 + iVar10 * 6;
    }
    else if ((iVar15 != 1) && (iVar15 != 2)) {
      iVar10 = 1;
    }
    FUN_014e89c0(param_1,0,uVar14,iVar10);
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar11 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar11;
    local_e0 = 0xab49936982f33827;
    local_d8 = "PLAY_UI_COMMON_SELECT";
    local_d0 = 0x15;
    local_c8 = (long *)0x0;
    if (*(long *)(lVar11 + 0x48) == 0) {
      uVar12 = 0xffffffffffffffff;
    }
    else {
      uVar12 = FUN_00cf8198();
    }
    pcVar8 = local_d8;
    memset(&local_c0,0,0x80);
    plVar13 = *(long **)(*(long *)(lVar11 + 0x200) + 0x60);
    iVar10 = (**(code **)(*plVar13 + 0xd0))(plVar13,pcVar8,uVar12,1,&LAB_01080c70,lVar11,0,0,0);
    if (iVar10 != 0) {
      FUN_0104f218(*(undefined8 *)(lVar11 + 0x220),&local_e0,iVar10,uVar12,0,&local_c0,0);
      pcVar9 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = (undefined8 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar9)(auStack_a0);
      }
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    lVar11 = plVar17[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (sVar16 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar17 + 0x50))(plVar17);
  }
  else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_01dd20c4:
  *(int *)(param_1 + 0x1e8) = *param_2;
  return;
}


