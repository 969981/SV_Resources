/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d9c9e0; name: FUN_00d9c9e0
 */


void FUN_00d9c9e0(undefined8 *param_1,long param_2)

{
  int iVar1;
  short *psVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  undefined8 uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar10 = FUN_00c4e600();
  iVar7 = *(int *)(lVar10 + 0x12c8);
  iVar1 = iVar7 + 1;
  *(int *)(lVar10 + 0x12c8) = iVar1;
  if (*(int *)(lVar10 + 0x12cc) <= iVar7) {
    *(int *)(lVar10 + 0x12cc) = iVar1;
  }
  plVar11 = *(long **)(param_2 + 0x10);
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[6];
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar11 = (long *)*param_1;
  uVar6 = param_1[1];
  uVar13 = param_1[2];
  uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
  if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
    (**(code **)(*plVar11 + 0x18))(plVar11,param_2,uVar6,uVar13);
  }
  else {
    FUN_00c48fe8(plVar11,param_2,uVar6,uVar13);
  }
  lVar10 = FUN_00c4e600();
  iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
  *(int *)(lVar10 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar11 = (long *)FUN_00c4e600();
    if (plVar11[600] != 0) {
      local_60 = plVar11 + plVar11[600] * 3;
      plStack_58 = plVar11;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar14 = (long *)*plVar11;
      plVar4 = plVar11;
      if (plVar11[600] != 0) {
        plVar4 = plVar11 + plVar11[600] * 3;
      }
      if (plVar4 == plVar11) {
        uVar15 = 0;
        uVar12 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar11 + 0xd0))();
        if ((long *)*plVar11 != plVar14) {
          (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11);
          plVar14 = (long *)*plVar11;
        }
        plVar3 = plVar11 + 3;
        if (plVar4 == plVar3) {
          uVar15 = 0;
          uVar12 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar3 + 0xd0))();
          bVar9 = (long *)*plVar3 != plVar14;
          if (bVar9) {
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar11,plVar11 + 3);
            plVar14 = (long *)plVar11[3];
          }
          uVar15 = (ulong)bVar9;
          plVar3 = plVar11 + 6;
          if (plVar4 == plVar3) {
            uVar12 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            if ((long *)*plVar3 != plVar14) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 6);
              plVar14 = (long *)plVar11[6];
              uVar15 = 2;
            }
            plVar3 = plVar11 + 9;
            if (plVar4 == plVar3) {
              uVar12 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 9);
                plVar14 = (long *)plVar11[9];
                uVar15 = 3;
              }
              plVar3 = plVar11 + 0xc;
              if (plVar4 == plVar3) {
                uVar12 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 0xc);
                  plVar14 = (long *)plVar11[0xc];
                  uVar15 = 4;
                }
                plVar3 = plVar11 + 0xf;
                if (plVar4 == plVar3) {
                  uVar12 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + 0xf);
                    plVar14 = (long *)plVar11[0xf];
                    uVar15 = 5;
                  }
                  uVar12 = 6;
                  for (plVar3 = plVar11 + 0x12; plVar4 != plVar3; plVar3 = plVar3 + 3) {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar3);
                      plVar14 = (long *)*plVar3;
                      uVar15 = uVar12;
                    }
                    uVar12 = uVar12 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar14 + 0x100))(plVar14,plVar11 + uVar15 * 3,plVar11 + uVar12 * 3);
      plVar11[600] = 0;
    }
    *(undefined4 *)(lVar10 + 0x12cc) = 0;
  }
  return;
}


