/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0193eb3c; name: FUN_0193eb3c
 */


void FUN_0193eb3c(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  undefined8 uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  long *local_60;
  long *local_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar11 = FUN_00c4e600();
  iVar7 = *(int *)(lVar11 + 0x12c8);
  iVar10 = iVar7 + 1;
  *(int *)(lVar11 + 0x12c8) = iVar10;
  if (*(int *)(lVar11 + 0x12cc) <= iVar7) {
    *(int *)(lVar11 + 0x12cc) = iVar10;
  }
  puVar15 = (undefined8 *)*param_2;
  if (puVar15 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar15 + 3);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_58 = (long *)*puVar15;
        FUN_00c44438(lVar11 + 0x8040,&local_58);
      }
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  plVar13 = (long *)*param_1;
  uVar6 = param_1[1];
  uVar14 = param_1[2];
  uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
  if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
    (**(code **)(*plVar13 + 0x18))(plVar13,param_2,uVar6,uVar14);
  }
  else {
    FUN_00c48fe8(plVar13,param_2,uVar6,uVar14);
  }
  lVar11 = FUN_00c4e600();
  iVar10 = *(int *)(lVar11 + 0x12c8) + -1;
  *(int *)(lVar11 + 0x12c8) = iVar10;
  if (iVar10 == 0) {
    plVar13 = (long *)FUN_00c4e600();
    if (plVar13[600] != 0) {
      local_60 = plVar13 + plVar13[600] * 3;
      local_58 = plVar13;
      FUN_00c4ea30(&local_58,&local_60);
      plVar16 = (long *)*plVar13;
      plVar4 = plVar13;
      if (plVar13[600] != 0) {
        plVar4 = plVar13 + plVar13[600] * 3;
      }
      if (plVar4 == plVar13) {
        uVar17 = 0;
        uVar12 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar13 + 0xd0))();
        if ((long *)*plVar13 != plVar16) {
          (**(code **)(*plVar16 + 0x100))(plVar16,plVar13,plVar13);
          plVar16 = (long *)*plVar13;
        }
        plVar3 = plVar13 + 3;
        if (plVar4 == plVar3) {
          uVar17 = 0;
          uVar12 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar3 + 0xd0))();
          bVar9 = (long *)*plVar3 != plVar16;
          if (bVar9) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar13,plVar13 + 3);
            plVar16 = (long *)plVar13[3];
          }
          uVar17 = (ulong)bVar9;
          plVar3 = plVar13 + 6;
          if (plVar4 == plVar3) {
            uVar12 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            if ((long *)*plVar3 != plVar16) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar13 + uVar17 * 3,plVar13 + 6);
              plVar16 = (long *)plVar13[6];
              uVar17 = 2;
            }
            plVar3 = plVar13 + 9;
            if (plVar4 == plVar3) {
              uVar12 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar13 + uVar17 * 3,plVar13 + 9);
                plVar16 = (long *)plVar13[9];
                uVar17 = 3;
              }
              plVar3 = plVar13 + 0xc;
              if (plVar4 == plVar3) {
                uVar12 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar13 + uVar17 * 3,plVar13 + 0xc);
                  plVar16 = (long *)plVar13[0xc];
                  uVar17 = 4;
                }
                plVar3 = plVar13 + 0xf;
                if (plVar4 == plVar3) {
                  uVar12 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar13 + uVar17 * 3,plVar13 + 0xf);
                    plVar16 = (long *)plVar13[0xf];
                    uVar17 = 5;
                  }
                  uVar12 = 6;
                  for (plVar3 = plVar13 + 0x12; plVar4 != plVar3; plVar3 = plVar3 + 3) {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar13 + uVar17 * 3,plVar3);
                      plVar16 = (long *)*plVar3;
                      uVar17 = uVar12;
                    }
                    uVar12 = uVar12 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar16 + 0x100))(plVar16,plVar13 + uVar17 * 3,plVar13 + uVar12 * 3);
      plVar13[600] = 0;
    }
    *(undefined4 *)(lVar11 + 0x12cc) = 0;
  }
  return;
}


