/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cedec0; name: FUN_01cedec0
 */


void FUN_01cedec0(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  short *psVar3;
  long *plVar4;
  short sVar5;
  int iVar6;
  char cVar7;
  undefined8 uVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char local_88 [8];
  long local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  long *local_60;
  long *plStack_58;
  
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_00d8e6c4(&local_c0);
  local_b0 = *(long *)(param_2 + 0x10);
  if (local_b0 != 0) {
    lVar12 = *(long *)(local_b0 + 0x30);
    if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar3 = (short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar3;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar9) {
        *psVar3 = sVar5 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar14;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  FUN_00d8ed68(&local_a8,&local_c0);
  local_80 = local_a8;
  local_78 = local_a0;
  local_a8 = 0;
  local_88[0] = '\x01';
  local_70 = local_98;
  local_68 = local_90;
  FUN_00d8e9e0(param_1,local_88);
  lVar12 = local_80;
  if ((local_88[0] == '\x01') && (local_80 = 0, lVar12 != 0)) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar6 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar6 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar6) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    FUN_00d8e444(lVar12);
    uVar8 = local_68;
    uVar14 = local_70;
    plVar13 = local_78;
    uVar11 = (**(code **)(*local_78 + 0xf8))(local_78);
    if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar12,uVar14,uVar8);
    }
    else {
      FUN_00c48fe8(plVar13,lVar12,uVar14,uVar8);
    }
    lVar12 = FUN_00c4e600();
    iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_60 = plVar13 + plVar13[600] * 3;
        plStack_58 = plVar13;
        FUN_00c4ea30(&plStack_58,&local_60);
        plVar15 = (long *)*plVar13;
        plVar4 = plVar13;
        if (plVar13[600] != 0) {
          plVar4 = plVar13 + plVar13[600] * 3;
        }
        if (plVar4 == plVar13) {
          uVar16 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar13 + 0xd0))();
          if ((long *)*plVar13 != plVar15) {
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar13,plVar13);
            plVar15 = (long *)*plVar13;
          }
          plVar2 = plVar13 + 3;
          if (plVar4 == plVar2) {
            uVar16 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar9 = (long *)*plVar2 != plVar15;
            if (bVar9) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar13,plVar13 + 3);
              plVar15 = (long *)plVar13[3];
            }
            uVar16 = (ulong)bVar9;
            plVar2 = plVar13 + 6;
            if (plVar4 == plVar2) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + uVar16 * 3,plVar13 + 6);
                plVar15 = (long *)plVar13[6];
                uVar16 = 2;
              }
              plVar2 = plVar13 + 9;
              if (plVar4 == plVar2) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + uVar16 * 3,plVar13 + 9);
                  plVar15 = (long *)plVar13[9];
                  uVar16 = 3;
                }
                plVar2 = plVar13 + 0xc;
                if (plVar4 == plVar2) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + uVar16 * 3,plVar13 + 0xc);
                    plVar15 = (long *)plVar13[0xc];
                    uVar16 = 4;
                  }
                  plVar2 = plVar13 + 0xf;
                  if (plVar4 == plVar2) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + uVar16 * 3,plVar13 + 0xf);
                      plVar15 = (long *)plVar13[0xf];
                      uVar16 = 5;
                    }
                    uVar11 = 6;
                    for (plVar2 = plVar13 + 0x12; plVar4 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + uVar16 * 3,plVar2);
                        plVar15 = (long *)*plVar2;
                        uVar16 = uVar11;
                      }
                      uVar11 = uVar11 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + uVar16 * 3,plVar13 + uVar11 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  lVar12 = local_a8;
  local_a8 = 0;
  if (lVar12 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar6 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar6 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar6) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    FUN_00d8e444(lVar12);
    uVar11 = (**(code **)(*local_a0 + 0xf8))(local_a0);
    if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*local_a0 + 0x18))(local_a0,lVar12,local_98,local_90);
    }
    else {
      FUN_00c48fe8(local_a0,lVar12,local_98,local_90);
    }
    lVar12 = FUN_00c4e600();
    iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_60 = plVar13 + plVar13[600] * 3;
        plStack_58 = plVar13;
        FUN_00c4ea30(&plStack_58,&local_60);
        plVar15 = (long *)*plVar13;
        plVar4 = plVar13;
        if (plVar13[600] != 0) {
          plVar4 = plVar13 + plVar13[600] * 3;
        }
        if (plVar4 == plVar13) {
          uVar16 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar13 + 0xd0))();
          if ((long *)*plVar13 != plVar15) {
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar13,plVar13);
            plVar15 = (long *)*plVar13;
          }
          plVar2 = plVar13 + 3;
          if (plVar4 == plVar2) {
            uVar16 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar9 = (long *)*plVar2 != plVar15;
            if (bVar9) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar13,plVar13 + 3);
              plVar15 = (long *)plVar13[3];
            }
            uVar16 = (ulong)bVar9;
            plVar2 = plVar13 + 6;
            if (plVar4 == plVar2) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + uVar16 * 3,plVar13 + 6);
                plVar15 = (long *)plVar13[6];
                uVar16 = 2;
              }
              plVar2 = plVar13 + 9;
              if (plVar4 == plVar2) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + uVar16 * 3,plVar13 + 9);
                  plVar15 = (long *)plVar13[9];
                  uVar16 = 3;
                }
                plVar2 = plVar13 + 0xc;
                if (plVar4 == plVar2) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + uVar16 * 3,plVar13 + 0xc);
                    plVar15 = (long *)plVar13[0xc];
                    uVar16 = 4;
                  }
                  plVar2 = plVar13 + 0xf;
                  if (plVar4 == plVar2) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + uVar16 * 3,plVar13 + 0xf);
                      plVar15 = (long *)plVar13[0xf];
                      uVar16 = 5;
                    }
                    uVar11 = 6;
                    for (plVar2 = plVar13 + 0x12; plVar4 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + uVar16 * 3,plVar2);
                        plVar15 = (long *)*plVar2;
                        uVar16 = uVar11;
                      }
                      uVar11 = uVar11 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + uVar16 * 3,plVar13 + uVar11 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  FUN_00d8e444(&local_c0);
  return;
}


