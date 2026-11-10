/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e4f414; name: FUN_00e4f414
 */


void FUN_00e4f414(long param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong uVar19;
  long *local_68;
  long *local_48;
  
  plVar12 = (long *)*(long *)(param_1 + 0x308);
  while (plVar12 != (long *)0x0) {
    plVar18 = (long *)*plVar12;
    FUN_00e4fbc0(plVar12 + 6);
    if ((long *)plVar12[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar12[5] + 0x20))();
    }
    plVar16 = *(long **)(param_1 + 0x310);
    uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar10 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar12,0x98,8);
      plVar12 = plVar18;
    }
    else {
      FUN_00c48fe8(plVar16,plVar12,0x98,8);
      plVar12 = plVar18;
    }
  }
  lVar14 = *(long *)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  if (lVar14 != 0) {
    lVar11 = *(long *)(param_1 + 0x2e0) << 3;
    plVar12 = *(long **)(param_1 + 0x2e8);
    uVar10 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar10 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar14,lVar11,8);
    }
    else {
      FUN_00c48fe8(plVar12,lVar14,lVar11,8);
    }
  }
  FUN_010f0260(param_1 + 0x270,*(undefined8 *)(param_1 + 0x2a0));
  lVar14 = *(long *)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x270) = 0;
  if (lVar14 != 0) {
    lVar11 = *(long *)(param_1 + 0x278) << 3;
    plVar12 = *(long **)(param_1 + 0x280);
    uVar10 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar10 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar14,lVar11,8);
    }
    else {
      FUN_00c48fe8(plVar12,lVar14,lVar11,8);
    }
  }
  FUN_00e4fde8(param_1 + 0x208);
  FUN_00e4fde8(param_1 + 0x1a0);
  FUN_00e4fde8(param_1 + 0x138);
  if (*(long **)(param_1 + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x128) + 0x20))();
  }
  if (*(long **)(param_1 + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x108) + 0x20))();
  }
  lVar14 = *(long *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (lVar14 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar6 = *(int *)(lVar11 + 0x12c8);
    iVar9 = iVar6 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar9;
    if (*(int *)(lVar11 + 0x12cc) <= iVar6) {
      *(int *)(lVar11 + 0x12cc) = iVar9;
    }
    FUN_00db239c(lVar14);
    plVar12 = *(long **)(param_1 + 0xd8);
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    uVar17 = *(undefined8 *)(param_1 + 0xe8);
    uVar10 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar14,uVar5,uVar17);
    }
    else {
      FUN_00c48fe8(plVar12,lVar14,uVar5,uVar17);
    }
    lVar14 = FUN_00c4e600();
    iVar9 = *(int *)(lVar14 + 0x12c8) + -1;
    *(int *)(lVar14 + 0x12c8) = iVar9;
    if (iVar9 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_68 = plVar12 + plVar12[600] * 3;
        local_48 = plVar12;
        FUN_00c4ea30(&local_48,&local_68);
        plVar16 = (long *)*plVar12;
        plVar18 = plVar12;
        if (plVar12[600] != 0) {
          plVar18 = plVar12 + plVar12[600] * 3;
        }
        if (plVar18 == plVar12) {
          uVar19 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar12,plVar12);
            plVar16 = (long *)*plVar12;
          }
          plVar3 = plVar12 + 3;
          if (plVar18 == plVar3) {
            uVar19 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            bVar8 = (long *)*plVar3 != plVar16;
            if (bVar8) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar12,plVar12 + 3);
              plVar16 = (long *)plVar12[3];
            }
            uVar19 = (ulong)bVar8;
            plVar3 = plVar12 + 6;
            if (plVar18 == plVar3) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar19 * 3,plVar12 + 6);
                plVar16 = (long *)plVar12[6];
                uVar19 = 2;
              }
              plVar3 = plVar12 + 9;
              if (plVar18 == plVar3) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar19 * 3,plVar12 + 9);
                  plVar16 = (long *)plVar12[9];
                  uVar19 = 3;
                }
                plVar3 = plVar12 + 0xc;
                if (plVar18 == plVar3) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar19 * 3,plVar12 + 0xc);
                    plVar16 = (long *)plVar12[0xc];
                    uVar19 = 4;
                  }
                  plVar3 = plVar12 + 0xf;
                  if (plVar18 == plVar3) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar19 * 3,plVar12 + 0xf);
                      plVar16 = (long *)plVar12[0xf];
                      uVar19 = 5;
                    }
                    uVar10 = 6;
                    for (plVar3 = plVar12 + 0x12; plVar18 != plVar3; plVar3 = plVar3 + 3) {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar19 * 3,plVar3);
                        plVar16 = (long *)*plVar3;
                        uVar19 = uVar10;
                      }
                      uVar10 = uVar10 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar12 + uVar19 * 3,plVar12 + uVar10 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar14 + 0x12cc) = 0;
    }
  }
  FUN_00db239c(param_1 + 0x90);
  puVar15 = *(undefined8 **)(param_1 + 0x80);
  if (puVar15 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar15 + 3);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_48 = (long *)*puVar15;
        FUN_00c44438(lVar14 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_00e4f594;
  }
  puVar15 = *(undefined8 **)(param_1 + 0x68);
  if (puVar15 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar15 + 3);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_48 = (long *)*puVar15;
        FUN_00c44438(lVar14 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) {
LAB_00e4f594:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x20))();
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  }
  return;
}


