/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b63c0c; name: FUN_00b63c0c
 */


void FUN_00b63c0c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  long *plVar5;
  short sVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *local_68;
  long *local_48;
  
  lVar16 = param_1[0x28];
  *param_1 = (long)&PTR_FUN_045588e0;
  param_1[4] = (long)&PTR_LAB_04558960;
  param_1[5] = (long)&PTR_LAB_045589b0;
  param_1[0x28] = 0;
  if (lVar16 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar7 = *(int *)(lVar11 + 0x12c8);
    iVar10 = iVar7 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar10;
    if (*(int *)(lVar11 + 0x12cc) <= iVar7) {
      *(int *)(lVar11 + 0x12cc) = iVar10;
    }
    plVar13 = (long *)param_1[0x29];
    lVar11 = param_1[0x2a];
    lVar17 = param_1[0x2b];
    uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar16,lVar11,lVar17);
    }
    else {
      FUN_00c48fe8(plVar13,lVar16,lVar11,lVar17);
    }
    lVar16 = FUN_00c4e600();
    iVar10 = *(int *)(lVar16 + 0x12c8) + -1;
    *(int *)(lVar16 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_68 = plVar13 + plVar13[600] * 3;
        local_48 = plVar13;
        FUN_00c4ea30(&local_48,&local_68);
        plVar18 = (long *)*plVar13;
        plVar5 = plVar13;
        if (plVar13[600] != 0) {
          plVar5 = plVar13 + plVar13[600] * 3;
        }
        if (plVar5 == plVar13) {
          lVar17 = 0;
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          lVar17 = 0;
          plVar19 = plVar13;
          do {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            if ((long *)*plVar19 != plVar18) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + lVar17 * 3,plVar19);
              plVar18 = (long *)*plVar19;
              lVar17 = lVar11;
            }
            plVar19 = plVar19 + 3;
            lVar11 = lVar11 + 1;
          } while (plVar5 != plVar19);
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + lVar17 * 3,plVar13 + lVar11 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar16 + 0x12cc) = 0;
    }
  }
  lVar16 = param_1[0x22];
  param_1[0x22] = 0;
  if (lVar16 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar7 = *(int *)(lVar11 + 0x12c8);
    iVar10 = iVar7 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar10;
    if (*(int *)(lVar11 + 0x12cc) <= iVar7) {
      *(int *)(lVar11 + 0x12cc) = iVar10;
    }
    plVar13 = (long *)param_1[0x23];
    lVar11 = param_1[0x24];
    lVar17 = param_1[0x25];
    uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar16,lVar11,lVar17);
    }
    else {
      FUN_00c48fe8(plVar13,lVar16,lVar11,lVar17);
    }
    lVar16 = FUN_00c4e600();
    iVar10 = *(int *)(lVar16 + 0x12c8) + -1;
    *(int *)(lVar16 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_68 = plVar13 + plVar13[600] * 3;
        local_48 = plVar13;
        FUN_00c4ea30(&local_48,&local_68);
        plVar18 = (long *)*plVar13;
        plVar5 = plVar13;
        if (plVar13[600] != 0) {
          plVar5 = plVar13 + plVar13[600] * 3;
        }
        if (plVar5 == plVar13) {
          lVar17 = 0;
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          lVar17 = 0;
          plVar19 = plVar13;
          do {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            if ((long *)*plVar19 != plVar18) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + lVar17 * 3,plVar19);
              plVar18 = (long *)*plVar19;
              lVar17 = lVar11;
            }
            plVar19 = plVar19 + 3;
            lVar11 = lVar11 + 1;
          } while (plVar5 != plVar19);
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + lVar17 * 3,plVar13 + lVar11 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar16 + 0x12cc) = 0;
    }
  }
  lVar16 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar16 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar7 = *(int *)(lVar11 + 0x12c8);
    iVar10 = iVar7 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar10;
    if (*(int *)(lVar11 + 0x12cc) <= iVar7) {
      *(int *)(lVar11 + 0x12cc) = iVar10;
    }
    plVar13 = (long *)param_1[0x1d];
    lVar11 = param_1[0x1e];
    lVar17 = param_1[0x1f];
    uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar16,lVar11,lVar17);
    }
    else {
      FUN_00c48fe8(plVar13,lVar16,lVar11,lVar17);
    }
    lVar16 = FUN_00c4e600();
    iVar10 = *(int *)(lVar16 + 0x12c8) + -1;
    *(int *)(lVar16 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_68 = plVar13 + plVar13[600] * 3;
        local_48 = plVar13;
        FUN_00c4ea30(&local_48,&local_68);
        plVar18 = (long *)*plVar13;
        plVar5 = plVar13;
        if (plVar13[600] != 0) {
          plVar5 = plVar13 + plVar13[600] * 3;
        }
        if (plVar5 == plVar13) {
          lVar17 = 0;
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          lVar17 = 0;
          plVar19 = plVar13;
          do {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            if ((long *)*plVar19 != plVar18) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + lVar17 * 3,plVar19);
              plVar18 = (long *)*plVar19;
              lVar17 = lVar11;
            }
            plVar19 = plVar19 + 3;
            lVar11 = lVar11 + 1;
          } while (plVar5 != plVar19);
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + lVar17 * 3,plVar13 + lVar11 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar16 + 0x12cc) = 0;
    }
  }
  lVar16 = param_1[0x16];
  param_1[0x16] = 0;
  if (lVar16 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar7 = *(int *)(lVar11 + 0x12c8);
    iVar10 = iVar7 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar10;
    if (*(int *)(lVar11 + 0x12cc) <= iVar7) {
      *(int *)(lVar11 + 0x12cc) = iVar10;
    }
    plVar13 = (long *)param_1[0x17];
    lVar11 = param_1[0x18];
    lVar17 = param_1[0x19];
    uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar16,lVar11,lVar17);
    }
    else {
      FUN_00c48fe8(plVar13,lVar16,lVar11,lVar17);
    }
    lVar16 = FUN_00c4e600();
    iVar10 = *(int *)(lVar16 + 0x12c8) + -1;
    *(int *)(lVar16 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_68 = plVar13 + plVar13[600] * 3;
        local_48 = plVar13;
        FUN_00c4ea30(&local_48,&local_68);
        plVar18 = (long *)*plVar13;
        plVar5 = plVar13;
        if (plVar13[600] != 0) {
          plVar5 = plVar13 + plVar13[600] * 3;
        }
        if (plVar5 == plVar13) {
          lVar17 = 0;
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          lVar17 = 0;
          plVar19 = plVar13;
          do {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            if ((long *)*plVar19 != plVar18) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + lVar17 * 3,plVar19);
              plVar18 = (long *)*plVar19;
              lVar17 = lVar11;
            }
            plVar19 = plVar19 + 3;
            lVar11 = lVar11 + 1;
          } while (plVar5 != plVar19);
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + lVar17 * 3,plVar13 + lVar11 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar16 + 0x12cc) = 0;
    }
  }
  lVar16 = param_1[0x12];
  param_1[0x12] = 0;
  if (lVar16 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar7 = *(int *)(lVar11 + 0x12c8);
    iVar10 = iVar7 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar10;
    if (*(int *)(lVar11 + 0x12cc) <= iVar7) {
      *(int *)(lVar11 + 0x12cc) = iVar10;
    }
    plVar13 = (long *)param_1[0x13];
    lVar11 = param_1[0x14];
    lVar17 = param_1[0x15];
    uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar16,lVar11,lVar17);
    }
    else {
      FUN_00c48fe8(plVar13,lVar16,lVar11,lVar17);
    }
    lVar16 = FUN_00c4e600();
    iVar10 = *(int *)(lVar16 + 0x12c8) + -1;
    *(int *)(lVar16 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_68 = plVar13 + plVar13[600] * 3;
        local_48 = plVar13;
        FUN_00c4ea30(&local_48,&local_68);
        plVar18 = (long *)*plVar13;
        plVar5 = plVar13;
        if (plVar13[600] != 0) {
          plVar5 = plVar13 + plVar13[600] * 3;
        }
        if (plVar5 == plVar13) {
          lVar17 = 0;
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          lVar17 = 0;
          plVar19 = plVar13;
          do {
            (**(code **)(*(long *)*plVar19 + 0xd0))();
            if ((long *)*plVar19 != plVar18) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + lVar17 * 3,plVar19);
              plVar18 = (long *)*plVar19;
              lVar17 = lVar11;
            }
            plVar19 = plVar19 + 3;
            lVar11 = lVar11 + 1;
          } while (plVar5 != plVar19);
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + lVar17 * 3,plVar13 + lVar11 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar16 + 0x12cc) = 0;
    }
  }
  plVar13 = (long *)param_1[0xe];
  if (plVar13 != (long *)0x0) {
    plVar5 = plVar13 + 3;
    do {
      sVar6 = (short)*plVar5;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *(short *)plVar5 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar4 = (int *)((long)plVar13 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar9) {
          *piVar4 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_48 = (long *)*plVar13;
        FUN_00c44438(lVar16 + 0x8040,&local_48);
      }
    }
    else if (sVar6 == 0) goto LAB_00b64678;
  }
  plVar13 = (long *)param_1[9];
  if (plVar13 != (long *)0x0) {
    plVar5 = plVar13 + 3;
    do {
      sVar6 = (short)*plVar5;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *(short *)plVar5 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar4 = (int *)((long)plVar13 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar9) {
          *piVar4 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_48 = (long *)*plVar13;
        FUN_00c44438(lVar16 + 0x8040,&local_48);
      }
    }
    else if (sVar6 == 0) goto LAB_00b64678;
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar15 = (undefined8 *)param_1[6];
  if (puVar15 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar15 + 3);
    do {
      sVar6 = *psVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar9) {
        *psVar3 = sVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar6 == 1) {
      piVar4 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar9) {
          *piVar4 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_48 = (long *)*puVar15;
        FUN_00c44438(lVar16 + 0x8040,&local_48);
      }
    }
    else if (sVar6 == 0) {
LAB_00b64678:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


