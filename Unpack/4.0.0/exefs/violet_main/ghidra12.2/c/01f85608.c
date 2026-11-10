/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f85608; name: FUN_01f85608
 */


void FUN_01f85608(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  short sVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long *local_68;
  long *local_48;
  
  puVar16 = (undefined8 *)param_1[0xb];
  *param_1 = (long)&PTR_FUN_04560f28;
  param_1[4] = (long)&PTR_LAB_04560fc0;
  param_1[5] = (long)&DAT_04561010;
  param_1[0xb] = 0;
  if (puVar16 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar15 = FUN_00c4e600();
    iVar8 = *(int *)(lVar15 + 0x12c8);
    iVar11 = iVar8 + 1;
    *(int *)(lVar15 + 0x12c8) = iVar11;
    if (*(int *)(lVar15 + 0x12cc) <= iVar8) {
      *(int *)(lVar15 + 0x12cc) = iVar11;
    }
    (**(code **)*puVar16)(puVar16);
    plVar13 = (long *)param_1[0xc];
    lVar15 = param_1[0xd];
    lVar17 = param_1[0xe];
    uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar16,lVar15,lVar17);
    }
    else {
      FUN_00c48fe8(plVar13,puVar16,lVar15,lVar17);
    }
    lVar15 = FUN_00c4e600();
    iVar11 = *(int *)(lVar15 + 0x12c8) + -1;
    *(int *)(lVar15 + 0x12c8) = iVar11;
    if (iVar11 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_68 = plVar13 + plVar13[600] * 3;
        local_48 = plVar13;
        FUN_00c4ea30(&local_48,&local_68);
        plVar18 = (long *)*plVar13;
        plVar6 = plVar13;
        if (plVar13[600] != 0) {
          plVar6 = plVar13 + plVar13[600] * 3;
        }
        if (plVar6 == plVar13) {
          uVar19 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar13 + 0xd0))();
          if ((long *)*plVar13 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar13,plVar13);
            plVar18 = (long *)*plVar13;
          }
          plVar5 = plVar13 + 3;
          if (plVar6 == plVar5) {
            uVar19 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar5 + 0xd0))();
            bVar10 = (long *)*plVar5 != plVar18;
            if (bVar10) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar13,plVar13 + 3);
              plVar18 = (long *)plVar13[3];
            }
            uVar19 = (ulong)bVar10;
            plVar5 = plVar13 + 6;
            if (plVar6 == plVar5) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar5 + 0xd0))();
              if ((long *)*plVar5 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar19 * 3,plVar13 + 6);
                plVar18 = (long *)plVar13[6];
                uVar19 = 2;
              }
              plVar5 = plVar13 + 9;
              if (plVar6 == plVar5) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar5 + 0xd0))();
                if ((long *)*plVar5 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar19 * 3,plVar13 + 9);
                  plVar18 = (long *)plVar13[9];
                  uVar19 = 3;
                }
                plVar5 = plVar13 + 0xc;
                if (plVar6 == plVar5) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar5 + 0xd0))();
                  if ((long *)*plVar5 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar19 * 3,plVar13 + 0xc);
                    plVar18 = (long *)plVar13[0xc];
                    uVar19 = 4;
                  }
                  plVar5 = plVar13 + 0xf;
                  if (plVar6 == plVar5) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar5 + 0xd0))();
                    if ((long *)*plVar5 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar19 * 3,plVar13 + 0xf);
                      plVar18 = (long *)plVar13[0xf];
                      uVar19 = 5;
                    }
                    uVar12 = 6;
                    for (plVar5 = plVar13 + 0x12; plVar6 != plVar5; plVar5 = plVar5 + 3) {
                      (**(code **)(*(long *)*plVar5 + 0xd0))();
                      if ((long *)*plVar5 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar19 * 3,plVar5);
                        plVar18 = (long *)*plVar5;
                        uVar19 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar13 + uVar19 * 3,plVar13 + uVar12 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar15 + 0x12cc) = 0;
    }
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar16 = (undefined8 *)param_1[6];
  if (puVar16 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar16 + 3);
    do {
      sVar7 = *psVar3;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar10) {
        *psVar3 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar4 = (int *)((long)puVar16 + 0x1c);
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
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_48 = (long *)*puVar16;
        FUN_00c44438(lVar15 + 0x8040,&local_48);
      }
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


