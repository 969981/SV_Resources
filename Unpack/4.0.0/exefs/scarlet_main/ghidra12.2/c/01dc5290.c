/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc5290; name: FUN_01dc5290
 */


void FUN_01dc5290(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
                 int param_5)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int iVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  if (param_5 == 5) {
    lVar11 = 0x68f8;
  }
  else {
    if (param_5 != 3) {
      return;
    }
    lVar11 = 0x68b0;
  }
  lVar15 = 0;
  uVar14 = 0;
  local_a8 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffffffffff;
  iVar18 = -1;
  local_b0 = 0xffffffffffffffff;
  do {
    bVar3 = *(byte *)(param_4 + 0x68b6 + lVar15);
    plVar12 = *(long **)(param_4 + 0x6cd0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x58))(plVar12);
    }
    plVar13 = *(long **)(param_4 + (ulong)bVar3 * 0x98 + 0x30);
    local_d0 = (long *)PTR_DAT_047d8b70;
    if (plVar13 != (long *)0x0) {
      local_d0 = plVar13 + 6;
    }
    local_d0 = (long *)*local_d0;
    plVar2 = (long *)PTR_PTR_047d4508;
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 7;
    }
    lStack_c8 = *plVar2;
    if (plVar13 == (long *)0x0) {
      local_c0 = 0;
    }
    else {
      local_c0 = plVar13[8];
      local_b8 = (long *)0x0;
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    local_b8 = plVar13;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x58))(plVar12);
      lVar8 = FUN_00c8c7b4(plVar12[0x2e],&local_d0);
      (**(code **)(*plVar12 + 0x60))(plVar12);
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      }
    }
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x60))(plVar12);
    }
    bVar3 = *(byte *)(param_4 + lVar11 + lVar15);
    local_d8 = *(long **)(param_4 + 0x6cd0);
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x58))();
    }
    plVar12 = *(long **)(param_4 + (ulong)bVar3 * 0x98 + 0x30);
    local_d0 = (long *)PTR_DAT_047d8b70;
    if (plVar12 != (long *)0x0) {
      local_d0 = plVar12 + 6;
    }
    local_d0 = (long *)*local_d0;
    plVar13 = (long *)PTR_PTR_047d4508;
    if (plVar12 != (long *)0x0) {
      plVar13 = plVar12 + 7;
    }
    lStack_c8 = *plVar13;
    if (plVar12 == (long *)0x0) {
      local_c0 = 0;
    }
    else {
      local_c0 = plVar12[8];
      local_b8 = (long *)0x0;
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    local_b8 = plVar12;
    uVar9 = FUN_01dc5bfc(&local_d8,&local_d0);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    if (local_d8 == (long *)0x0) {
      if ((uVar9 & 1) == 0) goto LAB_01dc5484;
LAB_01dc5468:
      *(int *)((long)&local_b0 + (long)(int)uVar14 * 4) = (int)lVar15;
      uVar14 = uVar14 + 1;
    }
    else {
      (**(code **)(*local_d8 + 0x60))();
      if ((uVar9 & 1) != 0) goto LAB_01dc5468;
LAB_01dc5484:
      iVar4 = (int)lVar15;
      if (iVar18 != -1) {
        iVar4 = iVar18;
      }
      iVar18 = iVar4;
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 6);
  FUN_01967b00(&local_d0);
  uVar7 = FUN_01dc4ca0(local_d0);
  if (local_d0 != (long *)0x0) {
    plVar12 = local_d0 + 5;
    do {
      lVar15 = *plVar12;
      iVar4 = (int)lVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
    else if ((int)lVar15 == 0) {
LAB_01dc5b88:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (0 < (int)uVar14) {
    uVar9 = 0;
    do {
      pfVar10 = (float *)FUN_01dc3bc0(param_4);
      if (pfVar10 == (float *)0x0) {
        return;
      }
      iVar4 = *(int *)((long)&local_b0 + uVar9 * 4);
      lVar15 = (long)iVar4;
      pbVar1 = (byte *)(param_4 + lVar15 + 0x68b6);
      uVar16 = (ulong)*pbVar1;
      if (iVar18 < iVar4) {
        plVar12 = *(long **)(param_4 + 0x6cd0);
        bVar3 = *(byte *)(param_4 + lVar11 + lVar15);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x58))(plVar12);
        }
        plVar13 = *(long **)(param_4 + (ulong)bVar3 * 0x98 + 0x30);
        local_d0 = (long *)PTR_DAT_047d8b70;
        if (plVar13 != (long *)0x0) {
          local_d0 = plVar13 + 6;
        }
        local_d0 = (long *)*local_d0;
        plVar2 = (long *)PTR_PTR_047d4508;
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 7;
        }
        lStack_c8 = *plVar2;
        if (plVar13 == (long *)0x0) {
          local_c0 = 0;
        }
        else {
          local_c0 = plVar13[8];
          local_b8 = (long *)0x0;
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        local_b8 = plVar13;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x58))(plVar12);
          lVar8 = FUN_00c8c7b4(plVar12[0x2e],&local_d0);
          (**(code **)(*plVar12 + 0x60))(plVar12);
          if (lVar8 != 0) {
            *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
          }
        }
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x60))(plVar12);
        }
        plVar12 = *(long **)(param_4 + 0x6cd0);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x58))(plVar12);
        }
        puVar17 = (undefined8 *)(param_4 + uVar16 * 0x98 + 0x30);
        plVar13 = (long *)*puVar17;
        local_d0 = (long *)PTR_DAT_047d8b70;
        if (plVar13 != (long *)0x0) {
          local_d0 = plVar13 + 6;
        }
        local_d0 = (long *)*local_d0;
        plVar2 = (long *)PTR_PTR_047d4508;
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 7;
        }
        lStack_c8 = *plVar2;
        if (plVar13 == (long *)0x0) {
          local_c0 = 0;
        }
        else {
          local_c0 = plVar13[8];
          local_b8 = (long *)0x0;
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        local_b8 = plVar13;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x58))(plVar12);
          lVar8 = FUN_00c8c7b4(plVar12[0x2e],&local_d0);
          (**(code **)(*plVar12 + 0x60))(plVar12);
          if (lVar8 != 0) {
            *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
          }
        }
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x60))(plVar12);
        }
        local_e0 = *(long **)(param_4 + 0x6cd0);
        if (local_e0 != (long *)0x0) {
          (**(code **)(*local_e0 + 0x58))();
        }
        plVar12 = *(long **)(param_4 + lVar15 * 8 + 0x6b00);
        local_d0 = (long *)PTR_DAT_047d8b70;
        if (plVar12 != (long *)0x0) {
          local_d0 = plVar12 + 6;
        }
        local_d0 = (long *)*local_d0;
        plVar13 = (long *)PTR_PTR_047d4508;
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12 + 7;
        }
        lStack_c8 = *plVar13;
        if (plVar12 == (long *)0x0) {
          local_c0 = 0;
        }
        else {
          local_c0 = plVar12[8];
          local_b8 = (long *)0x0;
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        local_b8 = plVar12;
        uVar20 = FUN_01dc1eb0(&local_e0,&local_d0);
        uVar22 = param_2;
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
        fVar21 = (float)uVar22;
        if (local_e0 != (long *)0x0) {
          (**(code **)(*local_e0 + 0x60))();
        }
        local_e8 = *(long **)(param_4 + 0x6cd0);
        if (local_e8 != (long *)0x0) {
          (**(code **)(*local_e8 + 0x58))();
        }
        plVar12 = *(long **)(param_4 + uVar9 * 8 + 0x6b00);
        local_d0 = (long *)PTR_DAT_047d8b70;
        if (plVar12 != (long *)0x0) {
          local_d0 = plVar12 + 6;
        }
        local_d0 = (long *)*local_d0;
        plVar13 = (long *)PTR_PTR_047d4508;
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12 + 7;
        }
        lStack_c8 = *plVar13;
        if (plVar12 == (long *)0x0) {
          local_c0 = 0;
        }
        else {
          local_c0 = plVar12[8];
          local_b8 = (long *)0x0;
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        local_b8 = plVar12;
        fVar19 = (float)FUN_01dc1eb0(&local_e8,&local_d0);
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
        if (local_e8 != (long *)0x0) {
          (**(code **)(*local_e8 + 0x60))();
        }
        *(byte *)((long)pfVar10 + 9) = *pbVar1;
        *(undefined2 *)((long)pfVar10 + 10) = 0x104;
        *pfVar10 = (fVar19 - (float)uVar20) * 0.25;
        pfVar10[1] = (fVar21 - (float)param_2) * 0.25;
        *(undefined1 *)(pfVar10 + 2) = 0;
        FUN_01dc0268(&local_d0);
        plVar12 = (long *)thunk_FUN_010f26f8(local_d0,2,uVar7,uVar9 & 0xffffffff);
        FUN_0149c1c0(&local_d0);
        local_f0 = plVar12;
        if (plVar12 == (long *)0x0) {
          FUN_014e63f0(param_4,&local_f0,4,iVar4,0);
        }
        else {
          plVar13 = plVar12 + 5;
          do {
            lVar15 = *plVar13;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *(int *)plVar13 = (int)lVar15 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar15 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          FUN_014e63f0(param_4,&local_f0,4,iVar4,0);
          if (plVar12 != (long *)0x0) {
            plVar13 = plVar12 + 5;
            do {
              lVar15 = *plVar13;
              iVar4 = (int)lVar15 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *(int *)plVar13 = iVar4;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
            else if ((int)lVar15 == 0) goto LAB_01dc5b88;
          }
        }
        local_f8 = *(long **)(param_4 + 0x6cd0);
        if (local_f8 != (long *)0x0) {
          (**(code **)(*local_f8 + 0x58))();
        }
        plVar12 = (long *)*puVar17;
        local_d0 = (long *)PTR_DAT_047d8b70;
        if (plVar12 != (long *)0x0) {
          local_d0 = plVar12 + 6;
        }
        local_d0 = (long *)*local_d0;
        plVar13 = (long *)PTR_PTR_047d4508;
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12 + 7;
        }
        lStack_c8 = *plVar13;
        if (plVar12 == (long *)0x0) {
          local_c0 = 0;
        }
        else {
          local_c0 = plVar12[8];
          local_b8 = (long *)0x0;
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        local_b8 = plVar12;
        FUN_01442568(uVar20,param_2,param_3,&local_f8,&local_d0);
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
        if (local_f8 != (long *)0x0) {
          lVar15 = *local_f8;
          plVar12 = local_f8;
LAB_01dc5a18:
          (**(code **)(lVar15 + 0x60))(plVar12);
        }
      }
      else {
        plVar12 = *(long **)(param_4 + 0x6cd0);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x58))(plVar12);
        }
        plVar13 = *(long **)(param_4 + uVar16 * 0x98 + 0x30);
        local_d0 = (long *)PTR_DAT_047d8b70;
        if (plVar13 != (long *)0x0) {
          local_d0 = plVar13 + 6;
        }
        local_d0 = (long *)*local_d0;
        plVar2 = (long *)PTR_PTR_047d4508;
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 7;
        }
        lStack_c8 = *plVar2;
        if (plVar13 == (long *)0x0) {
          local_c0 = 0;
        }
        else {
          local_c0 = plVar13[8];
          local_b8 = (long *)0x0;
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        local_b8 = plVar13;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x58))(plVar12);
          lVar15 = FUN_00c8c7b4(plVar12[0x2e],&local_d0);
          (**(code **)(*plVar12 + 0x60))(plVar12);
          if (lVar15 != 0) {
            *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
          }
        }
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
        if (plVar12 != (long *)0x0) {
          lVar15 = *plVar12;
          goto LAB_01dc5a18;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar14);
  }
  return;
}


