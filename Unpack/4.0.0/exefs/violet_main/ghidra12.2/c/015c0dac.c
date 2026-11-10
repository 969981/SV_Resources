/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c0dac; name: FUN_015c0dac
 */


void FUN_015c0dac(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  short *psVar3;
  long *plVar4;
  long *plVar5;
  short sVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *local_60;
  long *local_58;
  
  lVar14 = param_1[0xe];
  puVar2 = PTR_DAT_047dcd48 + 0x298;
  *param_1 = (long)(PTR_DAT_047dcd48 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[0xe] = 0;
  if (lVar14 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar7 = *(int *)(lVar11 + 0x12c8);
    iVar1 = iVar7 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar1;
    if (*(int *)(lVar11 + 0x12cc) <= iVar7) {
      *(int *)(lVar11 + 0x12cc) = iVar1;
    }
    FUN_01a0c248(lVar14);
    plVar10 = (long *)param_1[0xf];
    lVar11 = param_1[0x10];
    lVar15 = param_1[0x11];
    uVar12 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar14,lVar11,lVar15);
    }
    else {
      FUN_00c48fe8(plVar10,lVar14,lVar11,lVar15);
    }
    lVar14 = FUN_00c4e600();
    iVar1 = *(int *)(lVar14 + 0x12c8) + -1;
    *(int *)(lVar14 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_60 = plVar10 + plVar10[600] * 3;
        local_58 = plVar10;
        FUN_00c4ea30(&local_58,&local_60);
        plVar16 = (long *)*plVar10;
        plVar5 = plVar10;
        if (plVar10[600] != 0) {
          plVar5 = plVar10 + plVar10[600] * 3;
        }
        if (plVar5 == plVar10) {
          uVar17 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10);
            plVar16 = (long *)*plVar10;
          }
          plVar4 = plVar10 + 3;
          if (plVar5 == plVar4) {
            uVar17 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar4 + 0xd0))();
            bVar9 = (long *)*plVar4 != plVar16;
            if (bVar9) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10 + 3);
              plVar16 = (long *)plVar10[3];
            }
            uVar17 = (ulong)bVar9;
            plVar4 = plVar10 + 6;
            if (plVar5 == plVar4) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar4 + 0xd0))();
              if ((long *)*plVar4 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 6);
                plVar16 = (long *)plVar10[6];
                uVar17 = 2;
              }
              plVar4 = plVar10 + 9;
              if (plVar5 == plVar4) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar4 + 0xd0))();
                if ((long *)*plVar4 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 9);
                  plVar16 = (long *)plVar10[9];
                  uVar17 = 3;
                }
                plVar4 = plVar10 + 0xc;
                if (plVar5 == plVar4) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar4 + 0xd0))();
                  if ((long *)*plVar4 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xc);
                    plVar16 = (long *)plVar10[0xc];
                    uVar17 = 4;
                  }
                  plVar4 = plVar10 + 0xf;
                  if (plVar5 == plVar4) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar4 + 0xd0))();
                    if ((long *)*plVar4 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xf);
                      plVar16 = (long *)plVar10[0xf];
                      uVar17 = 5;
                    }
                    uVar12 = 6;
                    for (plVar4 = plVar10 + 0x12; plVar5 != plVar4; plVar4 = plVar4 + 3) {
                      (**(code **)(*(long *)*plVar4 + 0xd0))();
                      if ((long *)*plVar4 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar4);
                        plVar16 = (long *)*plVar4;
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
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + uVar12 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar14 + 0x12cc) = 0;
    }
  }
  lVar14 = param_1[10];
  param_1[10] = 0;
  if (lVar14 != 0) {
    FUN_015c1218(param_1 + 0xb);
  }
  plVar10 = (long *)param_1[9];
  if (plVar10 != (long *)0x0) {
    lVar14 = plVar10[6];
    psVar3 = (short *)(lVar14 + 0x1a);
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
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


