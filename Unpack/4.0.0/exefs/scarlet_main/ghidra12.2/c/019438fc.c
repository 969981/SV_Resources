/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019438fc; name: FUN_019438fc
 */


void FUN_019438fc(long *param_1)

{
  short *psVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  long *plVar5;
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
  ulong uVar20;
  long *local_68;
  long *local_48;
  
  lVar16 = param_1[0x169];
  *param_1 = (long)&DAT_04598ea0;
  param_1[4] = (long)&PTR_LAB_04599030;
  param_1[5] = (long)&DAT_04599080;
  param_1[0x27] = (long)&PTR_LAB_045990d8;
  param_1[0x28] = (long)&PTR_LAB_04599110;
  if (lVar16 != 0) {
    lVar14 = param_1[0x16b];
    param_1[0x16a] = lVar16;
    plVar18 = (long *)param_1[0x16c];
    uVar12 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar16,lVar14 - lVar16,4);
    }
    else {
      FUN_00c48fe8(plVar18,lVar16,lVar14 - lVar16,4);
    }
  }
  if ((long *)param_1[0x15f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15f] + 0x20))();
  }
  if ((long *)param_1[0x15b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15b] + 0x20))();
  }
  if ((long *)param_1[0x157] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x157] + 0x20))();
  }
  if ((long *)param_1[0x153] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x153] + 0x20))();
  }
  if ((long *)param_1[0x14f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14f] + 0x20))();
  }
  if ((long *)param_1[0x14b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14b] + 0x20))();
  }
  if ((long *)param_1[0x13b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13b] + 0x20))();
  }
  if ((long *)param_1[0x137] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x137] + 0x20))();
  }
  if ((long *)param_1[0x131] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x131] + 0x20))();
  }
  lVar16 = param_1[0x12a];
  param_1[0x12a] = 0;
  if (lVar16 != 0) {
    FUN_017a0d80(param_1 + 299);
  }
  lVar16 = param_1[0x126];
  param_1[0x126] = 0;
  if (lVar16 != 0) {
    FUN_0174ec70(param_1 + 0x127);
  }
  lVar16 = param_1[0x122];
  param_1[0x122] = 0;
  if (lVar16 != 0) {
    FUN_0174e8ac(param_1 + 0x123);
  }
  plVar18 = (long *)param_1[0x120];
  if (plVar18 != (long *)0x0) {
    lVar16 = plVar18[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar18 + 0x50))();
    }
    else if (sVar7 == 0) goto LAB_01943d1c;
  }
  lVar16 = param_1[0x118];
  param_1[0x118] = 0;
  if (lVar16 != 0) {
    FUN_019442b4(param_1 + 0x119);
  }
  lVar16 = param_1[0x114];
  param_1[0x114] = 0;
  if (lVar16 != 0) {
    FUN_0174f024(param_1 + 0x115);
  }
  puVar17 = (undefined8 *)param_1[0x110];
  param_1[0x110] = 0;
  if (puVar17 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar16 = FUN_00c4e600();
    iVar8 = *(int *)(lVar16 + 0x12c8);
    iVar11 = iVar8 + 1;
    *(int *)(lVar16 + 0x12c8) = iVar11;
    if (*(int *)(lVar16 + 0x12cc) <= iVar8) {
      *(int *)(lVar16 + 0x12cc) = iVar11;
    }
    (**(code **)*puVar17)(puVar17);
    plVar18 = (long *)param_1[0x111];
    lVar16 = param_1[0x112];
    lVar14 = param_1[0x113];
    uVar12 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,puVar17,lVar16,lVar14);
    }
    else {
      FUN_00c48fe8(plVar18,puVar17,lVar16,lVar14);
    }
    lVar16 = FUN_00c4e600();
    iVar11 = *(int *)(lVar16 + 0x12c8) + -1;
    *(int *)(lVar16 + 0x12c8) = iVar11;
    if (iVar11 == 0) {
      plVar18 = (long *)FUN_00c4e600();
      if (plVar18[600] != 0) {
        local_68 = plVar18 + plVar18[600] * 3;
        local_48 = plVar18;
        FUN_00c4ea30(&local_48,&local_68);
        plVar19 = (long *)*plVar18;
        plVar6 = plVar18;
        if (plVar18[600] != 0) {
          plVar6 = plVar18 + plVar18[600] * 3;
        }
        if (plVar6 == plVar18) {
          uVar20 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar18 + 0xd0))();
          if ((long *)*plVar18 != plVar19) {
            (**(code **)(*plVar19 + 0x100))(plVar19,plVar18,plVar18);
            plVar19 = (long *)*plVar18;
          }
          plVar5 = plVar18 + 3;
          if (plVar6 == plVar5) {
            uVar20 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar5 + 0xd0))();
            bVar10 = (long *)*plVar5 != plVar19;
            if (bVar10) {
              (**(code **)(*plVar19 + 0x100))(plVar19,plVar18,plVar18 + 3);
              plVar19 = (long *)plVar18[3];
            }
            uVar20 = (ulong)bVar10;
            plVar5 = plVar18 + 6;
            if (plVar6 == plVar5) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar5 + 0xd0))();
              if ((long *)*plVar5 != plVar19) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar18 + uVar20 * 3,plVar18 + 6);
                plVar19 = (long *)plVar18[6];
                uVar20 = 2;
              }
              plVar5 = plVar18 + 9;
              if (plVar6 == plVar5) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar5 + 0xd0))();
                if ((long *)*plVar5 != plVar19) {
                  (**(code **)(*plVar19 + 0x100))(plVar19,plVar18 + uVar20 * 3,plVar18 + 9);
                  plVar19 = (long *)plVar18[9];
                  uVar20 = 3;
                }
                plVar5 = plVar18 + 0xc;
                if (plVar6 == plVar5) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar5 + 0xd0))();
                  if ((long *)*plVar5 != plVar19) {
                    (**(code **)(*plVar19 + 0x100))(plVar19,plVar18 + uVar20 * 3,plVar18 + 0xc);
                    plVar19 = (long *)plVar18[0xc];
                    uVar20 = 4;
                  }
                  plVar5 = plVar18 + 0xf;
                  if (plVar6 == plVar5) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar5 + 0xd0))();
                    if ((long *)*plVar5 != plVar19) {
                      (**(code **)(*plVar19 + 0x100))(plVar19,plVar18 + uVar20 * 3,plVar18 + 0xf);
                      plVar19 = (long *)plVar18[0xf];
                      uVar20 = 5;
                    }
                    uVar12 = 6;
                    for (plVar5 = plVar18 + 0x12; plVar6 != plVar5; plVar5 = plVar5 + 3) {
                      (**(code **)(*(long *)*plVar5 + 0xd0))();
                      if ((long *)*plVar5 != plVar19) {
                        (**(code **)(*plVar19 + 0x100))(plVar19,plVar18 + uVar20 * 3,plVar5);
                        plVar19 = (long *)*plVar5;
                        uVar20 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar19 + 0x100))(plVar19,plVar18 + uVar20 * 3,plVar18 + uVar12 * 3);
        plVar18[600] = 0;
      }
      *(undefined4 *)(lVar16 + 0x12cc) = 0;
    }
  }
  if ((long *)param_1[0x10c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10c] + 0x20))();
  }
  if ((long *)param_1[0x108] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x108] + 0x20))();
  }
  if ((long *)param_1[0x104] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x104] + 0x20))();
  }
  if ((long *)param_1[0x100] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x100] + 0x20))();
  }
  if ((long *)param_1[0xfc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xfc] + 0x20))();
  }
  if ((long *)param_1[0xf2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf2] + 0x20))();
  }
  if ((long *)param_1[0xee] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xee] + 0x20))();
  }
  pcVar15 = (code *)param_1[0xdb];
  if (pcVar15 != (code *)0x0) {
    param_1[0xdd] = 0;
    param_1[0xdc] = 0;
    param_1[0xdb] = 0;
    param_1[0xda] = 0;
    (*pcVar15)(param_1 + 0xde);
  }
  pcVar15 = (code *)param_1[0xcb];
  if (pcVar15 != (code *)0x0) {
    param_1[0xcd] = 0;
    param_1[0xcc] = 0;
    param_1[0xcb] = 0;
    param_1[0xca] = 0;
    (*pcVar15)(param_1 + 0xce);
  }
  pcVar15 = (code *)param_1[0xbb];
  if (pcVar15 != (code *)0x0) {
    param_1[0xbd] = 0;
    param_1[0xbc] = 0;
    param_1[0xbb] = 0;
    param_1[0xba] = 0;
    (*pcVar15)(param_1 + 0xbe);
  }
  pcVar15 = (code *)param_1[0xab];
  if (pcVar15 != (code *)0x0) {
    param_1[0xad] = 0;
    param_1[0xac] = 0;
    param_1[0xab] = 0;
    param_1[0xaa] = 0;
    (*pcVar15)(param_1 + 0xae);
  }
  pcVar15 = (code *)param_1[0x9b];
  if (pcVar15 != (code *)0x0) {
    param_1[0x9d] = 0;
    param_1[0x9c] = 0;
    param_1[0x9b] = 0;
    param_1[0x9a] = 0;
    (*pcVar15)(param_1 + 0x9e);
  }
  pcVar15 = (code *)param_1[0x8b];
  if (pcVar15 != (code *)0x0) {
    param_1[0x8d] = 0;
    param_1[0x8c] = 0;
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
    (*pcVar15)(param_1 + 0x8e);
  }
  pcVar15 = (code *)param_1[0x7b];
  if (pcVar15 != (code *)0x0) {
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7b] = 0;
    param_1[0x7a] = 0;
    (*pcVar15)(param_1 + 0x7e);
  }
  pcVar15 = (code *)param_1[0x6b];
  if (pcVar15 != (code *)0x0) {
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    (*pcVar15)(param_1 + 0x6e);
  }
  pcVar15 = (code *)param_1[0x5b];
  if (pcVar15 != (code *)0x0) {
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    (*pcVar15)(param_1 + 0x5e);
  }
  pcVar15 = (code *)param_1[0x4b];
  if (pcVar15 != (code *)0x0) {
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    (*pcVar15)(param_1 + 0x4e);
  }
  pcVar15 = (code *)param_1[0x3b];
  if (pcVar15 != (code *)0x0) {
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    (*pcVar15)(param_1 + 0x3e);
  }
  pcVar15 = (code *)param_1[0x2b];
  if (pcVar15 != (code *)0x0) {
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    (*pcVar15)(param_1 + 0x2e);
  }
  plVar18 = (long *)param_1[0x29];
  if (plVar18 != (long *)0x0) {
    lVar16 = plVar18[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar18 + 0x50))();
    }
    else if (sVar7 == 0) {
LAB_01943d1c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar2 = PTR_DAT_047dd1e0 + 0x150;
  puVar3 = PTR_DAT_047dd1e0 + 0x1a0;
  *param_1 = (long)(PTR_DAT_047dd1e0 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  if ((long *)param_1[0x26] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x26] + 0x20))();
  }
  puVar17 = (undefined8 *)param_1[0x21];
  if (puVar17 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar17 + 3);
    do {
      sVar7 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar4 = (int *)((long)puVar17 + 0x1c);
      do {
        iVar11 = *piVar4;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar10) {
          *piVar4 = -1;
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


