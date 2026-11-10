/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d2a450; name: FUN_00d2a450
 */


void FUN_00d2a450(long *param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  short sVar16;
  long *plVar17;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long *local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long local_70;
  long local_68;
  
  lVar14 = param_1[0x71];
  if ((lVar14 == 0) || (*(short *)(lVar14 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar14 + 0x1a);
  sVar16 = *(short *)(lVar14 + 0x1a);
LAB_00d2a4a8:
  sVar4 = *psVar1;
  if (sVar4 == sVar16) {
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar16 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_00d2a4d0;
    bVar13 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00d2a4d0:
    bVar13 = false;
  }
  if (!bVar13) {
    sVar16 = sVar4;
    if (sVar4 == 0) {
      return;
    }
    goto LAB_00d2a4a8;
  }
  lVar14 = *(long *)(lVar14 + 0x10);
  if (lVar14 == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x7c1) == '\0') goto LAB_00d2a548;
  if (((param_1[0xb8] == 0) || (**(char **)(param_1[0xb8] + 0x38) == '\0')) ||
     ((param_1[0xb9] != 0 && (*(short *)(param_1[0xb9] + 0x1a) != 0)))) {
    lVar15 = param_1[0xbc];
    if (lVar15 == 0) goto LAB_00d2a548;
    bVar13 = false;
    goto LAB_00d2a538;
  }
  lVar15 = FUN_01104bd8(lVar14 + 0xe0,&local_80);
  if (lVar15 == 0) goto LAB_00d2a548;
  (**(code **)(*(long *)(lVar15 + 0x128) + 0x20))(&local_80,lVar15 + 0x128);
  local_70 = lVar15 + 0x128;
  FUN_00c96b7c(param_1 + 0xb9,&local_80);
  plVar17 = local_80;
  param_1[0xbb] = local_70;
  if (local_80 != (long *)0x0) {
    plVar10 = local_80 + 3;
    do {
      sVar16 = (short)*plVar10;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar13) {
        *(short *)plVar10 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_a0 = (long *)*plVar17;
        FUN_00c44438(lVar15 + 0x8040,&local_a0);
      }
    }
    else if (sVar16 == 0) goto LAB_00d2ab48;
  }
  lVar15 = param_1[0xbc];
  if (lVar15 != 0) {
    bVar13 = true;
LAB_00d2a538:
    if ((**(char **)(lVar15 + 0x38) == '\0') ||
       ((param_1[0xbd] != 0 && (*(short *)(param_1[0xbd] + 0x1a) != 0)))) {
      if (!bVar13) goto LAB_00d2a548;
    }
    else {
      lVar15 = FUN_01104bd8(param_1 + 0x21,&local_80);
      if (lVar15 == 0) goto LAB_00d2a548;
      (**(code **)(*(long *)(lVar15 + 0x128) + 0x20))(&local_80,lVar15 + 0x128);
      local_70 = lVar15 + 0x128;
      FUN_00c96b7c(param_1 + 0xbd,&local_80);
      param_1[0xbf] = local_70;
      if (local_80 != (long *)0x0) {
        plVar17 = local_80 + 3;
        do {
          sVar16 = (short)*plVar17;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar13) {
            *(short *)plVar17 = sVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar16 == 1) {
          piVar2 = (int *)((long)local_80 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar13) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_a0 = (long *)*local_80;
            FUN_00c44438(lVar15 + 0x8040,&local_a0);
          }
        }
        else if (sVar16 == 0) goto LAB_00d2ab48;
      }
    }
  }
  plVar17 = param_1 + 0xbc;
  local_80 = (long *)param_1[0xb8];
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))();
  }
  local_78 = (long *)0x0;
  local_70 = 0;
  FUN_00c43ef0(&local_78,param_1 + 0xb9);
  local_68 = param_1[0xbb];
  local_a0 = (long *)*plVar17;
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))();
  }
  local_98 = (long *)0x0;
  uStack_90 = 0;
  FUN_00c43ef0(&local_98,param_1 + 0xbd);
  local_88 = (long *)param_1[0xbf];
  *(undefined1 *)(param_1 + 0xc0) = 0;
  (**(code **)(*param_1 + 0x98))(param_1);
  *(undefined1 *)(param_1 + 0xc0) = 1;
  if ((local_78 == (long *)0x0) || (*(short *)((long)local_78 + 0x1a) == 0)) {
    lVar15 = lVar14 + 0xd0;
  }
  else {
    if ((local_78 != (long *)0x0) && ((undefined8 *)local_78[2] != (undefined8 *)0x0)) {
      plVar10 = (long *)(*(code *)**(undefined8 **)local_78[2])();
      if (((*PTR_DAT_047d39b0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar7 = PTR_DAT_047d39c8, iVar9 != 0)) {
        if (((*PTR_DAT_047d39c0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
          *(undefined8 *)puVar7 = 0;
          __cxa_guard_release(PTR_DAT_047d39c0);
        }
        *(undefined **)PTR_DAT_047d39b8 = puVar7;
        __cxa_guard_release(PTR_DAT_047d39b0);
      }
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)PTR_DAT_047d39b8) {
          lVar15 = local_68;
          goto LAB_00d2a7b4;
        }
      }
    }
    lVar15 = 0;
  }
LAB_00d2a7b4:
  if ((local_98 == (long *)0x0) || (*(short *)((long)local_98 + 0x1a) == 0)) {
    plVar10 = param_1 + 0x1f;
  }
  else {
    if ((local_98 != (long *)0x0) && ((undefined8 *)local_98[2] != (undefined8 *)0x0)) {
      puVar12 = (undefined8 *)(*(code *)**(undefined8 **)local_98[2])();
      if (((*PTR_DAT_047d39b0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39b0), iVar9 != 0)) {
        if (((*PTR_DAT_047d39c0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
          *(undefined8 *)PTR_DAT_047d39c8 = 0;
          __cxa_guard_release(PTR_DAT_047d39c0);
        }
        *(undefined **)PTR_DAT_047d39b8 = PTR_DAT_047d39c8;
        __cxa_guard_release(PTR_DAT_047d39b0);
      }
      if (puVar12 != (undefined8 *)0x0) {
        do {
          if (puVar12 == (undefined8 *)PTR_DAT_047d39b8) {
            plVar10 = local_88;
            break;
          }
          puVar12 = (undefined8 *)*puVar12;
          plVar10 = (long *)0x0;
        } while (puVar12 != (undefined8 *)0x0);
        goto LAB_00d2a7d0;
      }
    }
    plVar10 = (long *)0x0;
  }
LAB_00d2a7d0:
  plVar8 = local_80;
  plVar6 = (long *)PTR_DAT_047d8b70;
  plVar3 = (long *)PTR_PTR_047d4508;
  plVar11 = (long *)PTR_DAT_047d8b70;
  if (local_80 != (long *)0x0) {
    plVar11 = local_80 + 6;
  }
  local_c0 = *plVar11;
  plVar11 = (long *)PTR_PTR_047d4508;
  if (local_80 != (long *)0x0) {
    plVar11 = local_80 + 7;
  }
  lStack_b8 = *plVar11;
  if (local_80 == (long *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = local_80[8];
  }
  local_a8 = (long *)0x0;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))(local_80);
  }
  plVar11 = local_a0;
  local_a8 = plVar8;
  if (local_a0 != (long *)0x0) {
    plVar3 = local_a0 + 7;
    plVar6 = local_a0 + 6;
  }
  local_e0 = *plVar6;
  lStack_d8 = *plVar3;
  if (local_a0 == (long *)0x0) {
    local_d0 = 0;
  }
  else {
    local_d0 = local_a0[8];
  }
  local_c8 = (long *)0x0;
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))(local_a0);
  }
  local_c8 = plVar11;
  (**(code **)(*param_1 + 0x90))(param_1,lVar15,&local_c0,plVar10,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  plVar10 = local_80;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))(local_80);
  }
  plVar11 = (long *)param_1[0xb8];
  param_1[0xb8] = (long)plVar10;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  FUN_00c43ef0(param_1 + 0xb9,&local_78);
  plVar10 = local_a0;
  param_1[0xbb] = local_68;
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))(local_a0);
  }
  plVar11 = (long *)*plVar17;
  *plVar17 = (long)plVar10;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  FUN_00c43ef0(param_1 + 0xbd,&local_98);
  plVar17 = local_98;
  param_1[0xbf] = (long)local_88;
  if (local_98 != (long *)0x0) {
    plVar10 = local_98 + 3;
    do {
      sVar16 = (short)*plVar10;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar13) {
        *(short *)plVar10 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_98 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_c0 = *plVar17;
        FUN_00c44438(lVar15 + 0x8040,&local_c0);
      }
    }
    else if (sVar16 == 0) goto LAB_00d2ab48;
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  plVar17 = local_78;
  if (local_78 != (long *)0x0) {
    plVar10 = local_78 + 3;
    do {
      sVar16 = (short)*plVar10;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar13) {
        *(short *)plVar10 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_a0 = (long *)*plVar17;
        FUN_00c44438(lVar15 + 0x8040,&local_a0);
      }
    }
    else if (sVar16 == 0) {
LAB_00d2ab48:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
LAB_00d2a548:
  (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))();
  return;
}


