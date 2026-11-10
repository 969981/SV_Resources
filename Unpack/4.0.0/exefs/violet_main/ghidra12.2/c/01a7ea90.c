/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a7ea90; name: FUN_01a7ea90
 */


void FUN_01a7ea90(long param_1)

{
  short *psVar1;
  int *piVar2;
  undefined8 *puVar3;
  long **pplVar4;
  long *plVar5;
  undefined8 *puVar6;
  short sVar7;
  char cVar8;
  undefined *puVar9;
  long *plVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  long *plVar16;
  byte bVar17;
  undefined8 local_150;
  char *pcStack_148;
  undefined8 local_140;
  long *local_138;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined1 *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_48;
  
  local_90 = *(undefined8 *)(param_1 + 0x110);
  uStack_88 = *(undefined8 *)(param_1 + 0x118);
  local_80 = *(undefined8 *)(param_1 + 0x120);
  plVar16 = *(long **)(param_1 + 0x128);
  local_78 = plVar16;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_70,param_1 + 0x30,&local_90);
    plVar16 = local_78;
  }
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  if (local_70 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_70 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_70 + 0x1a);
    sVar15 = *(short *)((long)local_70 + 0x1a);
    do {
      sVar7 = *psVar1;
      if (sVar7 == sVar15) {
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar15 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_01a7eb74;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a7eb74:
        bVar11 = false;
      }
      if (bVar11) {
        lVar14 = local_70[2];
        if (lVar14 == 0) goto LAB_01a7ee74;
        lVar13 = FUN_0196fffc(lVar14 + 0xe0,&local_d8);
        if (lVar13 == 0) goto LAB_01a7ee5c;
        FUN_00d8fb98(&local_d8,PTR_DAT_047d9c40);
        lVar13 = FUN_01132f14(lVar13,&local_d8);
        if (lVar13 == 0) {
          local_48 = (long *)0x0;
        }
        else {
          FUN_00f422c8(&local_48,lVar13,&local_f8);
        }
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 0x20))();
        }
        if (local_48 == (long *)0x0) goto LAB_01a7ee5c;
        local_f8 = &DAT_94ed70272cac328;
        pcStack_f0 = "Target";
        local_e8 = 6;
        local_e0 = (long *)0x0;
        FUN_01315eac(&local_d8,param_1,&local_f8);
        puVar9 = PTR_DAT_047d3e28;
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        puVar6 = (undefined8 *)PTR_DAT_047d3e30;
        bVar11 = (char)local_d8 != '\0';
        puVar3 = (undefined8 *)PTR_DAT_047d3e30;
        if (bVar11) {
          puVar3 = &local_d0;
        }
        local_b0 = *puVar3;
        puVar3 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
        if (bVar11) {
          puVar3 = &local_c8;
        }
        local_a8 = *puVar3;
        pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x10);
        if (bVar11) {
          pplVar4 = &local_c0;
        }
        local_a0 = *pplVar4;
        pplVar4 = (long **)(PTR_DAT_047d3e30 + 0x18);
        if (bVar11) {
          pplVar4 = &local_b8;
        }
        local_98 = *pplVar4;
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x18))();
        }
        if (*(code **)(param_1 + 0x10) == (code *)0x0) {
          plVar16 = (long *)0x0;
          local_130 = (undefined8 *)0x0;
          uStack_128 = 0;
          goto LAB_01a7ecc4;
        }
        (**(code **)(param_1 + 0x10))(&local_130,param_1 + 0x30,&local_b0);
        puVar3 = local_130;
        if (local_130 == (undefined8 *)0x0) {
          plVar16 = (long *)0x0;
          goto LAB_01a7ecc4;
        }
        if (*(short *)((long)local_130 + 0x1a) == 0) goto LAB_01a7f1b4;
        psVar1 = (short *)((long)local_130 + 0x1a);
        sVar15 = *(short *)((long)local_130 + 0x1a);
        goto LAB_01a7f180;
      }
      sVar15 = sVar7;
    } while (sVar7 != 0);
    goto LAB_01a7ee70;
  }
  goto LAB_01a7ee74;
  while (sVar15 = sVar7, sVar7 != 0) {
LAB_01a7f180:
    sVar7 = *psVar1;
    if (sVar7 == sVar15) {
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar15 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 != '\0') goto LAB_01a7f1a4;
      bVar11 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a7f1a4:
      bVar11 = false;
    }
    if (bVar11) {
      plVar16 = (long *)0x0;
      if (local_130[2] != 0) {
        plVar16 = (long *)(local_130[2] + -0x28);
      }
      goto LAB_01a7f1cc;
    }
  }
LAB_01a7f1b4:
  plVar16 = (long *)0x0;
LAB_01a7f1cc:
  psVar1 = (short *)(local_130 + 3);
  do {
    sVar15 = *psVar1;
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar11) {
      *psVar1 = sVar15 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar15 == 1) {
    piVar2 = (int *)((long)local_130 + 0x1c);
    do {
      iVar12 = *piVar2;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar11) {
        *piVar2 = -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar12 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar13 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar13;
      local_150 = *puVar3;
      FUN_00c44438(lVar13 + 0x8040,&local_150);
    }
  }
  else if (sVar15 == 0) goto LAB_01a7ee94;
LAB_01a7ecc4:
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if ((char)local_d8 != '\0') {
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    local_d8 = (undefined8 *)((ulong)local_d8 & 0xffffffffffffff00);
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  plVar10 = local_48;
  (**(code **)(*plVar16 + 0x18))(&local_d8,plVar16);
  local_108 = (undefined8 *)0x0;
  uStack_100 = 0;
  plVar5 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar5 = plVar16 + 5;
  }
  if ((long *)local_d8[2] == plVar5) {
    FUN_00c9ea00(&local_108,&local_d8);
  }
  puVar3 = local_d8;
  if (local_d8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_d8 + 3);
    do {
      sVar15 = *psVar1;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_d8 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_f8 = (undefined1 *)*puVar3;
        FUN_00c44438(lVar13 + 0x8040,&local_f8);
      }
    }
    else if (sVar15 == 0) goto LAB_01a7ee94;
  }
  local_f8 = (undefined1 *)0x352b79c017918034;
  pcStack_f0 = "JointName";
  local_e8 = 9;
  local_e0 = (long *)0x0;
  FUN_01315eac(&local_d8,param_1,&local_f8);
  if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_150 = 0xa1a5a39f1e539c0a;
  pcStack_148 = "Offset";
  local_140 = 6;
  local_138 = (long *)0x0;
  if ((char)local_d8 != '\0') {
    puVar6 = &local_d0;
  }
  FUN_015eea10(&local_130,param_1,&local_150);
  bVar17 = -((char)local_130 == '\0');
  FUN_01420578(CONCAT13((byte)((ulong)local_120 >> 0x18) & ~bVar17,
                        CONCAT12((byte)((ulong)local_120 >> 0x10) & ~bVar17,
                                 CONCAT11((byte)((ulong)local_120 >> 8) & ~bVar17,
                                          (byte)local_120 & ~bVar17))),local_120,plVar10,&local_108,
               puVar6,0);
  if ((char)local_130 != '\0') {
    local_130 = (undefined8 *)((ulong)local_130 & 0xffffffffffffff00);
  }
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if ((char)local_d8 != '\0') {
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    local_d8 = (undefined8 *)((ulong)local_d8 & 0xffffffffffffff00);
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  puVar3 = local_108;
  if (local_108 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_108 + 3);
    do {
      sVar15 = *psVar1;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_108 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_d8 = (undefined8 *)*puVar3;
        FUN_00c44438(lVar13 + 0x8040,&local_d8);
      }
    }
    else if (sVar15 == 0) goto LAB_01a7ee94;
  }
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x60))(plVar16);
  }
  if (local_48 != (long *)0x0) {
    lVar13 = local_48[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_01a7ee5c:
  (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))((long *)(lVar14 + -0x28));
LAB_01a7ee70:
  if (local_70 == (undefined8 *)0x0) {
    return;
  }
LAB_01a7ee74:
  puVar3 = local_70;
  psVar1 = (short *)(local_70 + 3);
  do {
    sVar15 = *psVar1;
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar11) {
      *psVar1 = sVar15 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar15 == 1) {
    piVar2 = (int *)((long)local_70 + 0x1c);
    do {
      iVar12 = *piVar2;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar11) {
        *piVar2 = -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar12 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar14 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar14;
      local_d8 = (undefined8 *)*puVar3;
      FUN_00c44438(lVar14 + 0x8040,&local_d8);
    }
  }
  else if (sVar15 == 0) {
LAB_01a7ee94:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}


