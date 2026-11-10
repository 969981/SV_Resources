/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b523c; name: FUN_029b523c
 */


void FUN_029b523c(long *param_1)

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
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long *local_60;
  long *local_58;
  
  plVar16 = (long *)param_1[0x2e];
  *param_1 = (long)&PTR_FUN_04604b10;
  param_1[0xd] = (long)&PTR_LAB_04604d30;
  param_1[4] = (long)&PTR_LAB_04604c28;
  param_1[5] = (long)&PTR_LAB_04604cd8;
  if (plVar16 != (long *)0x0) {
    plVar15 = (long *)*plVar16;
    if ((long *)plVar16[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar16[5] + 0x20))();
    }
    plVar18 = (long *)param_1[0x2f];
    uVar11 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,plVar16,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar18,plVar16,0x38,8);
    }
    while (plVar15 != (long *)0x0) {
      plVar16 = (long *)*plVar15;
      if ((long *)plVar15[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar15[5] + 0x20))();
      }
      plVar18 = (long *)param_1[0x2f];
      uVar11 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,plVar15,0x38,8);
        plVar15 = plVar16;
      }
      else {
        FUN_00c48fe8(plVar18,plVar15,0x38,8);
        plVar15 = plVar16;
      }
    }
  }
  lVar13 = param_1[0x28];
  param_1[0x28] = 0;
  if (lVar13 != 0) {
    lVar17 = param_1[0x29];
    plVar16 = (long *)param_1[0x2a];
    uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar13,lVar17 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar16,lVar13,lVar17 << 3,8);
    }
  }
  puVar14 = (undefined8 *)param_1[0x17];
  param_1[0x17] = 0;
  if (puVar14 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar13 = FUN_00c4e600();
    iVar7 = *(int *)(lVar13 + 0x12c8);
    iVar10 = iVar7 + 1;
    *(int *)(lVar13 + 0x12c8) = iVar10;
    if (*(int *)(lVar13 + 0x12cc) <= iVar7) {
      *(int *)(lVar13 + 0x12cc) = iVar10;
    }
    (**(code **)*puVar14)(puVar14);
    plVar16 = (long *)param_1[0x18];
    lVar13 = param_1[0x19];
    lVar17 = param_1[0x1a];
    uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,puVar14,lVar13,lVar17);
    }
    else {
      FUN_00c48fe8(plVar16,puVar14,lVar13,lVar17);
    }
    lVar13 = FUN_00c4e600();
    iVar10 = *(int *)(lVar13 + 0x12c8) + -1;
    *(int *)(lVar13 + 0x12c8) = iVar10;
    if (iVar10 == 0) {
      plVar16 = (long *)FUN_00c4e600();
      if (plVar16[600] != 0) {
        local_60 = plVar16 + plVar16[600] * 3;
        local_58 = plVar16;
        FUN_00c4ea30(&local_58,&local_60);
        plVar18 = (long *)*plVar16;
        plVar15 = plVar16;
        if (plVar16[600] != 0) {
          plVar15 = plVar16 + plVar16[600] * 3;
        }
        if (plVar15 == plVar16) {
          uVar19 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar16 + 0xd0))();
          if ((long *)*plVar16 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar16,plVar16);
            plVar18 = (long *)*plVar16;
          }
          plVar5 = plVar16 + 3;
          if (plVar15 == plVar5) {
            uVar19 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar5 + 0xd0))();
            bVar9 = (long *)*plVar5 != plVar18;
            if (bVar9) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar16,plVar16 + 3);
              plVar18 = (long *)plVar16[3];
            }
            uVar19 = (ulong)bVar9;
            plVar5 = plVar16 + 6;
            if (plVar15 == plVar5) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar5 + 0xd0))();
              if ((long *)*plVar5 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar16 + uVar19 * 3,plVar16 + 6);
                plVar18 = (long *)plVar16[6];
                uVar19 = 2;
              }
              plVar5 = plVar16 + 9;
              if (plVar15 == plVar5) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar5 + 0xd0))();
                if ((long *)*plVar5 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar16 + uVar19 * 3,plVar16 + 9);
                  plVar18 = (long *)plVar16[9];
                  uVar19 = 3;
                }
                plVar5 = plVar16 + 0xc;
                if (plVar15 == plVar5) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar5 + 0xd0))();
                  if ((long *)*plVar5 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar16 + uVar19 * 3,plVar16 + 0xc);
                    plVar18 = (long *)plVar16[0xc];
                    uVar19 = 4;
                  }
                  plVar5 = plVar16 + 0xf;
                  if (plVar15 == plVar5) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar5 + 0xd0))();
                    if ((long *)*plVar5 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar16 + uVar19 * 3,plVar16 + 0xf);
                      plVar18 = (long *)plVar16[0xf];
                      uVar19 = 5;
                    }
                    uVar11 = 6;
                    for (plVar5 = plVar16 + 0x12; plVar15 != plVar5; plVar5 = plVar5 + 3) {
                      (**(code **)(*(long *)*plVar5 + 0xd0))();
                      if ((long *)*plVar5 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))(plVar18,plVar16 + uVar19 * 3,plVar5);
                        plVar18 = (long *)*plVar5;
                        uVar19 = uVar11;
                      }
                      uVar11 = uVar11 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar16 + uVar19 * 3,plVar16 + uVar11 * 3);
        plVar16[600] = 0;
      }
      *(undefined4 *)(lVar13 + 0x12cc) = 0;
    }
  }
  FUN_01123498(param_1 + 0xf);
  puVar1 = PTR_DAT_047e3088;
  *param_1 = (long)(PTR_DAT_047e3088 + 0x10);
  param_1[4] = (long)(puVar1 + 0xc0);
  param_1[5] = (long)(puVar1 + 0x170);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 9));
  puVar1 = PTR_DAT_047e3080 + 0x88;
  puVar2 = PTR_DAT_047e3080 + 0x138;
  *param_1 = (long)(PTR_DAT_047e3080 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar14 = (undefined8 *)param_1[6];
  if (puVar14 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar14 + 3);
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
      piVar4 = (int *)((long)puVar14 + 0x1c);
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
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_58 = (long *)*puVar14;
        FUN_00c44438(lVar13 + 0x8040,&local_58);
      }
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


