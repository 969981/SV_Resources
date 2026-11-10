/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01445c68; name: FUN_01445c68
 */


void FUN_01445c68(long *param_1)

{
  short *psVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 local_28;
  
  *param_1 = (long)&PTR_FUN_04545290;
  param_1[4] = (long)&PTR_LAB_04545308;
  param_1[5] = (long)&PTR_LAB_04545358;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x79));
  plVar9 = (long *)param_1[0x76];
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 5;
    do {
      lVar14 = *plVar16;
      iVar8 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_01446148;
  }
  puVar13 = (undefined8 *)param_1[0x6f];
  if (puVar13 != (undefined8 *)0x0) {
    plVar9 = (long *)*puVar13;
    FUN_01446674(puVar13 + 3);
    plVar16 = (long *)param_1[0x70];
    uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,puVar13,0x80,8);
    }
    else {
      FUN_00c48fe8(plVar16,puVar13,0x80,8);
    }
    if (plVar9 != (long *)0x0) {
      plVar16 = (long *)*plVar9;
      FUN_01446674(plVar9 + 3);
      plVar17 = (long *)param_1[0x70];
      uVar10 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,plVar9,0x80,8);
      }
      else {
        FUN_00c48fe8(plVar17,plVar9,0x80,8);
      }
      while (plVar16 != (long *)0x0) {
        plVar17 = (long *)*plVar16;
        FUN_01446674(plVar16 + 3);
        plVar9 = (long *)param_1[0x70];
        uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,plVar16,0x80,8);
          plVar16 = plVar17;
        }
        else {
          FUN_00c48fe8(plVar9,plVar16,0x80,8);
          plVar16 = plVar17;
        }
      }
    }
  }
  lVar14 = param_1[0x69];
  param_1[0x69] = 0;
  if (lVar14 != 0) {
    lVar11 = param_1[0x6a];
    plVar9 = (long *)param_1[0x6b];
    uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar10 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar14,lVar11 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar14,lVar11 << 3,8);
    }
  }
  lVar14 = param_1[0x62];
  if (lVar14 != 0) {
    lVar15 = param_1[99];
    lVar11 = lVar14;
    if (lVar15 != lVar14) {
      FUN_00f91cdc(lVar15 + -0x40);
      if ((lVar15 + -0x40 != lVar14) && (FUN_00f91cdc(lVar15 + -0x80), lVar15 + -0x80 != lVar14)) {
        do {
          FUN_00f91cdc(lVar15 + -0xc0);
          lVar15 = lVar15 + -0x40;
        } while (lVar14 + 0x80 != lVar15);
      }
      lVar11 = param_1[0x62];
    }
    lVar15 = param_1[100];
    param_1[99] = lVar14;
    plVar9 = (long *)param_1[0x65];
    uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,lVar15 - lVar11,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar11,lVar15 - lVar11,8);
    }
  }
  plVar9 = (long *)param_1[0x61];
  if (plVar9 != (long *)0x0) {
    lVar14 = plVar9[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_014464f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00fdcd28(param_1 + 0x59);
  if ((long *)param_1[0x57] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x57] + 0x20))();
  }
  if ((long *)param_1[0x53] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x53] + 0x20))();
  }
  plVar9 = (long *)param_1[0x52];
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 5;
    do {
      lVar14 = *plVar16;
      iVar8 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar14 == 0) {
LAB_01446148:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_01024ab4(param_1 + 0x4a);
  puVar13 = (undefined8 *)param_1[0x48];
  if (puVar13 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar13 + 3);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_28 = *puVar13;
        FUN_00c44438(lVar14 + 0x8040,&local_28);
      }
    }
    else if (sVar5 == 0) goto LAB_01446104;
  }
  pcVar12 = (code *)param_1[0x39];
  if (pcVar12 != (code *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (*pcVar12)(param_1 + 0x3c);
  }
  plVar9 = (long *)param_1[0x31];
  while (plVar9 != (long *)0x0) {
    plVar17 = (long *)*plVar9;
    plVar16 = (long *)plVar9[3];
    if (plVar16 != (long *)0x0) {
      lVar14 = plVar16[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar16 + 0x50))();
      }
      else if (sVar5 == 0) goto LAB_014464f0;
    }
    plVar16 = (long *)param_1[0x32];
    uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar9,0x20,8);
      plVar9 = plVar17;
    }
    else {
      FUN_00c48fe8(plVar16,plVar9,0x20,8);
      plVar9 = plVar17;
    }
  }
  lVar14 = param_1[0x2b];
  param_1[0x2b] = 0;
  if (lVar14 != 0) {
    lVar11 = param_1[0x2c];
    plVar9 = (long *)param_1[0x2d];
    uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar10 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar14,lVar11 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar14,lVar11 << 3,8);
    }
  }
  plVar9 = (long *)param_1[0x24];
  while (plVar9 != (long *)0x0) {
    plVar17 = (long *)*plVar9;
    plVar16 = (long *)plVar9[3];
    if (plVar16 != (long *)0x0) {
      lVar14 = plVar16[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar16 + 0x50))();
      }
      else if (sVar5 == 0) goto LAB_014464f0;
    }
    plVar16 = (long *)param_1[0x25];
    uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar9,0x20,8);
      plVar9 = plVar17;
    }
    else {
      FUN_00c48fe8(plVar16,plVar9,0x20,8);
      plVar9 = plVar17;
    }
  }
  lVar14 = param_1[0x1e];
  param_1[0x1e] = 0;
  if (lVar14 != 0) {
    lVar11 = param_1[0x1f];
    plVar9 = (long *)param_1[0x20];
    uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar10 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar14,lVar11 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar14,lVar11 << 3,8);
    }
  }
  puVar13 = (undefined8 *)param_1[0x17];
  if (puVar13 != (undefined8 *)0x0) {
    plVar9 = (long *)*puVar13;
    FUN_01185de0(puVar13 + 3);
    plVar16 = (long *)param_1[0x18];
    uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,puVar13,0x58,8);
    }
    else {
      FUN_00c48fe8(plVar16,puVar13,0x58,8);
    }
    if (plVar9 != (long *)0x0) {
      plVar16 = (long *)*plVar9;
      FUN_01185de0(plVar9 + 3);
      plVar17 = (long *)param_1[0x18];
      uVar10 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,plVar9,0x58,8);
      }
      else {
        FUN_00c48fe8(plVar17,plVar9,0x58,8);
      }
      while (plVar16 != (long *)0x0) {
        plVar17 = (long *)*plVar16;
        FUN_01185de0(plVar16 + 3);
        plVar9 = (long *)param_1[0x18];
        uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,plVar16,0x58,8);
          plVar16 = plVar17;
        }
        else {
          FUN_00c48fe8(plVar9,plVar16,0x58,8);
          plVar16 = plVar17;
        }
      }
    }
  }
  lVar14 = param_1[0x11];
  param_1[0x11] = 0;
  if (lVar14 != 0) {
    lVar11 = param_1[0x12];
    plVar9 = (long *)param_1[0x13];
    uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar10 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar14,lVar11 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar14,lVar11 << 3,8);
    }
  }
  FUN_00db239c(param_1 + 9);
  puVar2 = PTR_DAT_047d8c78 + 0x88;
  puVar3 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  puVar13 = (undefined8 *)param_1[6];
  if (puVar13 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar13 + 3);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_28 = *puVar13;
        FUN_00c44438(lVar14 + 0x8040,&local_28);
      }
    }
    else if (sVar5 == 0) {
LAB_01446104:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


