/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a05c0; name: FUN_017a05c0
 */


void FUN_017a05c0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  short *psVar4;
  int *piVar5;
  long *plVar6;
  short sVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *local_68;
  long *local_48;
  
  puVar1 = PTR_DAT_047dd0c8 + 0x178;
  puVar2 = PTR_DAT_047dd0c8 + 0x1c8;
  puVar3 = PTR_DAT_047dd0c8 + 0x220;
  *param_1 = (long)(PTR_DAT_047dd0c8 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  param_1[0x27] = (long)puVar3;
  plVar19 = (long *)param_1[0xaf];
  while (plVar19 != (long *)0x0) {
    plVar21 = (long *)*plVar19;
    if ((long *)plVar19[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar19[5] + 0x20))();
    }
    plVar18 = (long *)param_1[0xb0];
    uVar12 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar12 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,plVar19,0x48,8);
      plVar19 = plVar21;
    }
    else {
      FUN_00c48fe8(plVar18,plVar19,0x48,8);
      plVar19 = plVar21;
    }
  }
  lVar16 = param_1[0xa9];
  param_1[0xa9] = 0;
  if (lVar16 != 0) {
    lVar14 = param_1[0xaa];
    plVar19 = (long *)param_1[0xab];
    uVar12 = (**(code **)(*plVar19 + 0xf8))(plVar19);
    if (((uVar12 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar16,lVar14 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar19,lVar16,lVar14 << 3,8);
    }
  }
  if ((long *)param_1[0xa8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa8] + 0x20))();
  }
  if ((long *)param_1[0xa4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa4] + 0x20))();
  }
  if ((long *)param_1[0xa0] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xa0] + 0x20))();
  }
  lVar16 = param_1[0x99];
  param_1[0x99] = 0;
  if (lVar16 != 0) {
    FUN_017a0d80(param_1 + 0x9a);
  }
  lVar16 = param_1[0x95];
  param_1[0x95] = 0;
  if (lVar16 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar14 = FUN_00c4e600();
    iVar8 = *(int *)(lVar14 + 0x12c8);
    iVar11 = iVar8 + 1;
    *(int *)(lVar14 + 0x12c8) = iVar11;
    if (*(int *)(lVar14 + 0x12cc) <= iVar8) {
      *(int *)(lVar14 + 0x12cc) = iVar11;
    }
    FUN_017a119c(lVar16);
    plVar19 = (long *)param_1[0x96];
    lVar14 = param_1[0x97];
    lVar20 = param_1[0x98];
    uVar12 = (**(code **)(*plVar19 + 0xf8))(plVar19);
    if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar16,lVar14,lVar20);
    }
    else {
      FUN_00c48fe8(plVar19,lVar16,lVar14,lVar20);
    }
    lVar16 = FUN_00c4e600();
    iVar11 = *(int *)(lVar16 + 0x12c8) + -1;
    *(int *)(lVar16 + 0x12c8) = iVar11;
    if (iVar11 == 0) {
      plVar19 = (long *)FUN_00c4e600();
      if (plVar19[600] != 0) {
        local_68 = plVar19 + plVar19[600] * 3;
        local_48 = plVar19;
        FUN_00c4ea30(&local_48,&local_68);
        plVar18 = (long *)*plVar19;
        plVar21 = plVar19;
        if (plVar19[600] != 0) {
          plVar21 = plVar19 + plVar19[600] * 3;
        }
        if (plVar21 == plVar19) {
          uVar22 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar19 + 0xd0))();
          if ((long *)*plVar19 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar19,plVar19);
            plVar18 = (long *)*plVar19;
          }
          plVar6 = plVar19 + 3;
          if (plVar21 == plVar6) {
            uVar22 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar6 + 0xd0))();
            bVar10 = (long *)*plVar6 != plVar18;
            if (bVar10) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar19,plVar19 + 3);
              plVar18 = (long *)plVar19[3];
            }
            uVar22 = (ulong)bVar10;
            plVar6 = plVar19 + 6;
            if (plVar21 == plVar6) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar6 + 0xd0))();
              if ((long *)*plVar6 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar22 * 3,plVar19 + 6);
                plVar18 = (long *)plVar19[6];
                uVar22 = 2;
              }
              plVar6 = plVar19 + 9;
              if (plVar21 == plVar6) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar6 + 0xd0))();
                if ((long *)*plVar6 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar22 * 3,plVar19 + 9);
                  plVar18 = (long *)plVar19[9];
                  uVar22 = 3;
                }
                plVar6 = plVar19 + 0xc;
                if (plVar21 == plVar6) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar6 + 0xd0))();
                  if ((long *)*plVar6 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar22 * 3,plVar19 + 0xc);
                    plVar18 = (long *)plVar19[0xc];
                    uVar22 = 4;
                  }
                  plVar6 = plVar19 + 0xf;
                  if (plVar21 == plVar6) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar6 + 0xd0))();
                    if ((long *)*plVar6 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar22 * 3,plVar19 + 0xf);
                      plVar18 = (long *)plVar19[0xf];
                      uVar22 = 5;
                    }
                    uVar12 = 6;
                    for (plVar6 = plVar19 + 0x12; plVar21 != plVar6; plVar6 = plVar6 + 3) {
                      (**(code **)(*(long *)*plVar6 + 0xd0))();
                      if ((long *)*plVar6 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar22 * 3,plVar6);
                        plVar18 = (long *)*plVar6;
                        uVar22 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar19 + uVar22 * 3,plVar19 + uVar12 * 3);
        plVar19[600] = 0;
      }
      *(undefined4 *)(lVar16 + 0x12cc) = 0;
    }
  }
  if ((long *)param_1[0x8f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8f] + 0x20))();
  }
  plVar19 = (long *)param_1[0x8b];
  if (plVar19 != (long *)0x0) {
    lVar16 = plVar19[6];
    psVar4 = (short *)(lVar16 + 0x1a);
    do {
      sVar7 = *psVar4;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar10) {
        *psVar4 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar19 + 0x50))();
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  pcVar15 = (code *)param_1[0x79];
  if (pcVar15 != (code *)0x0) {
    param_1[0x7b] = 0;
    param_1[0x7a] = 0;
    param_1[0x79] = 0;
    param_1[0x78] = 0;
    (*pcVar15)(param_1 + 0x7c);
  }
  pcVar15 = (code *)param_1[0x69];
  if (pcVar15 != (code *)0x0) {
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    (*pcVar15)(param_1 + 0x6c);
  }
  pcVar15 = (code *)param_1[0x59];
  if (pcVar15 != (code *)0x0) {
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    (*pcVar15)(param_1 + 0x5c);
  }
  pcVar15 = (code *)param_1[0x49];
  if (pcVar15 != (code *)0x0) {
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    (*pcVar15)(param_1 + 0x4c);
  }
  pcVar15 = (code *)param_1[0x39];
  if (pcVar15 != (code *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (*pcVar15)(param_1 + 0x3c);
  }
  pcVar15 = (code *)param_1[0x29];
  if (pcVar15 != (code *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (*pcVar15)(param_1 + 0x2c);
  }
  *param_1 = (long)&PTR_LAB_04597858;
  param_1[4] = (long)&PTR_LAB_04597998;
  param_1[5] = (long)&DAT_045979e8;
  if ((long *)param_1[0x26] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x26] + 0x20))();
  }
  puVar17 = (undefined8 *)param_1[0x21];
  if (puVar17 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar17 + 3);
    do {
      sVar7 = *psVar4;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar10) {
        *psVar4 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)puVar17 + 0x1c);
      do {
        iVar11 = *piVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar10) {
          *piVar5 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_48 = (long *)*puVar17;
        FUN_00c44438(lVar16 + 0x8040,&local_48);
      }
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_0116e6b0(param_1);
  return;
}


