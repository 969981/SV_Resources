/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ba6ec; name: FUN_010ba6ec
 */


void FUN_010ba6ec(long *param_1)

{
  int iVar1;
  long *plVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *local_68;
  long *local_48;
  
  *param_1 = (long)&DAT_04608c10;
  param_1[4] = (long)&PTR_LAB_04608ca8;
  param_1[5] = (long)&DAT_04608cf8;
  plVar9 = (long *)param_1[0x4e];
  while (plVar9 != (long *)0x0) {
    lVar13 = plVar9[6];
    plVar9[6] = 0;
    plVar16 = (long *)*plVar9;
    if (lVar13 != 0) {
      FUN_010bad58(plVar9 + 7);
    }
    if ((long *)plVar9[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[5] + 0x20))();
    }
    plVar15 = (long *)param_1[0x4f];
    uVar11 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar9,0x50,8);
      plVar9 = plVar16;
    }
    else {
      FUN_00c48fe8(plVar15,plVar9,0x50,8);
      plVar9 = plVar16;
    }
  }
  lVar13 = param_1[0x48];
  param_1[0x48] = 0;
  if (lVar13 != 0) {
    FUN_010bacd0(param_1 + 0x49);
  }
  lVar13 = param_1[0x44];
  param_1[0x44] = 0;
  if (lVar13 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar5 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar5) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    FUN_01093d74(lVar13);
    plVar9 = (long *)param_1[0x45];
    lVar10 = param_1[0x46];
    lVar14 = param_1[0x47];
    uVar11 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,lVar10,lVar14);
    }
    else {
      FUN_00c48fe8(plVar9,lVar13,lVar10,lVar14);
    }
    lVar13 = FUN_00c4e600();
    iVar1 = *(int *)(lVar13 + 0x12c8) + -1;
    *(int *)(lVar13 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_68 = plVar9 + plVar9[600] * 3;
        local_48 = plVar9;
        FUN_00c4ea30(&local_48,&local_68);
        plVar15 = (long *)*plVar9;
        plVar16 = plVar9;
        if (plVar9[600] != 0) {
          plVar16 = plVar9 + plVar9[600] * 3;
        }
        if (plVar16 == plVar9) {
          uVar17 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar15) {
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar9,plVar9);
            plVar15 = (long *)*plVar9;
          }
          plVar2 = plVar9 + 3;
          if (plVar16 == plVar2) {
            uVar17 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar8 = (long *)*plVar2 != plVar15;
            if (bVar8) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar9,plVar9 + 3);
              plVar15 = (long *)plVar9[3];
            }
            uVar17 = (ulong)bVar8;
            plVar2 = plVar9 + 6;
            if (plVar16 == plVar2) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar9 + uVar17 * 3,plVar9 + 6);
                plVar15 = (long *)plVar9[6];
                uVar17 = 2;
              }
              plVar2 = plVar9 + 9;
              if (plVar16 == plVar2) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar9 + uVar17 * 3,plVar9 + 9);
                  plVar15 = (long *)plVar9[9];
                  uVar17 = 3;
                }
                plVar2 = plVar9 + 0xc;
                if (plVar16 == plVar2) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar9 + uVar17 * 3,plVar9 + 0xc);
                    plVar15 = (long *)plVar9[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar9 + 0xf;
                  if (plVar16 == plVar2) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar9 + uVar17 * 3,plVar9 + 0xf);
                      plVar15 = (long *)plVar9[0xf];
                      uVar17 = 5;
                    }
                    uVar11 = 6;
                    for (plVar2 = plVar9 + 0x12; plVar16 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar9 + uVar17 * 3,plVar2);
                        plVar15 = (long *)*plVar2;
                        uVar17 = uVar11;
                      }
                      uVar11 = uVar11 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar15 + 0x100))(plVar15,plVar9 + uVar17 * 3,plVar9 + uVar11 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar13 + 0x12cc) = 0;
    }
  }
  plVar9 = (long *)param_1[0x43];
  if (plVar9 != (long *)0x0) {
    lVar13 = plVar9[6];
    psVar3 = (short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar8) {
        *psVar3 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar7 = PTR_DAT_047d9260;
  *param_1 = (long)(PTR_DAT_047d9260 + 0x10);
  param_1[4] = (long)(puVar7 + 0xa8);
  param_1[5] = (long)(puVar7 + 0xf8);
  FUN_010bac30(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}


