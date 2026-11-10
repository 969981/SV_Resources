/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc43f8; name: FUN_01dc43f8
 */


void FUN_01dc43f8(undefined1 param_1 [16],ulong param_2,undefined8 param_3,long param_4,uint param_5
                 ,int param_6,int param_7,int param_8)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  short sVar10;
  undefined4 uVar11;
  int iVar12;
  float *pfVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  ulong uVar24;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  long *local_88;
  
  puVar9 = PTR_DAT_047d8b70;
  puVar8 = PTR_PTR_047d4508;
  if (param_7 == 5) {
    lVar15 = 0x68f8;
  }
  else {
    if (param_7 != 3) {
      return;
    }
    lVar15 = 0x68b0;
  }
  if (param_5 < 6) {
    uVar1 = param_6 + param_5;
    lVar16 = 0;
    lVar2 = (ulong)uVar1 + param_4 + 0x68b6;
    do {
      if (5 < uVar1 + (int)lVar16) break;
      local_88 = *(long **)(param_4 + 0x6cd0);
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x58))();
      }
      plVar17 = *(long **)(param_4 + (ulong)uVar1 * 8 + 0x6b00 + lVar16 * 8);
      plVar20 = (long *)puVar8;
      local_b0 = (long *)puVar9;
      if (plVar17 != (long *)0x0) {
        plVar20 = plVar17 + 7;
        local_b0 = plVar17 + 6;
      }
      local_b0 = (long *)*local_b0;
      lStack_a8 = *plVar20;
      if (plVar17 == (long *)0x0) {
        local_a0 = 0;
      }
      else {
        local_a0 = plVar17[8];
        local_98 = (long *)0x0;
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
      local_98 = plVar17;
      uVar22 = FUN_01dc1eb0(&local_88,&local_b0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x60))();
      }
      bVar4 = *(byte *)(lVar2 + lVar16);
      local_b8 = *(long **)(param_4 + 0x6cd0);
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x58))();
      }
      plVar17 = *(long **)(param_4 + (ulong)bVar4 * 0x98 + 0x30);
      plVar20 = (long *)puVar8;
      local_b0 = (long *)puVar9;
      if (plVar17 != (long *)0x0) {
        plVar20 = plVar17 + 7;
        local_b0 = plVar17 + 6;
      }
      local_b0 = (long *)*local_b0;
      lStack_a8 = *plVar20;
      if (plVar17 == (long *)0x0) {
        local_a0 = 0;
      }
      else {
        local_a0 = plVar17[8];
        local_98 = (long *)0x0;
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
      uVar24 = param_2;
      local_98 = plVar17;
      FUN_01442568(uVar22,param_2,param_3,&local_b8,&local_b0);
      fVar23 = (float)uVar24;
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x60))();
      }
      local_c0 = *(long **)(param_4 + 0x6cd0);
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x58))();
      }
      plVar17 = *(long **)(param_4 + (ulong)param_5 * 8 + 0x6b00 + lVar16 * 8);
      plVar20 = (long *)puVar8;
      local_b0 = (long *)puVar9;
      if (plVar17 != (long *)0x0) {
        plVar20 = plVar17 + 7;
        local_b0 = plVar17 + 6;
      }
      local_b0 = (long *)*local_b0;
      lStack_a8 = *plVar20;
      if (plVar17 == (long *)0x0) {
        local_a0 = 0;
      }
      else {
        local_a0 = plVar17[8];
        local_98 = (long *)0x0;
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
      local_98 = plVar17;
      fVar21 = (float)FUN_01dc1eb0(&local_c0,&local_b0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x60))();
      }
      pfVar13 = (float *)FUN_01dc3bc0(param_4);
      if (pfVar13 == (float *)0x0) {
        return;
      }
      fVar23 = (fVar23 - (float)param_2) * 0.25;
      param_2 = (ulong)(uint)fVar23;
      *pfVar13 = (fVar21 - (float)uVar22) * 0.25;
      pfVar13[1] = fVar23;
      uVar5 = *(undefined1 *)(lVar2 + lVar16);
      lVar16 = lVar16 + 1;
      *(undefined2 *)((long)pfVar13 + 10) = 0x104;
      *(undefined1 *)(pfVar13 + 2) = 0;
      *(undefined1 *)((long)pfVar13 + 9) = uVar5;
    } while (6 - (ulong)param_5 != lVar16);
  }
  FUN_01967b00(&local_b0);
  uVar11 = FUN_01dc4ca0(local_b0);
  if (local_b0 != (long *)0x0) {
    plVar20 = local_b0 + 5;
    do {
      lVar16 = *plVar20;
      iVar12 = (int)lVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *(int *)plVar20 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
    else if ((int)lVar16 == 0) {
LAB_01dc4bd0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (param_5 < 6) {
    plVar20 = (long *)PTR_DAT_047d8b70;
    do {
      uVar1 = param_5 + param_6;
      if (5 < uVar1) {
        return;
      }
      plVar17 = *(long **)(param_4 + 0x6cd0);
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x58))(plVar17);
      }
      pbVar3 = (byte *)(param_4 + (ulong)uVar1 + 0x68b6);
      plVar18 = *(long **)(param_4 + (ulong)*pbVar3 * 0x98 + 0x30);
      local_b0 = plVar20;
      if (plVar18 != (long *)0x0) {
        local_b0 = plVar18 + 6;
      }
      local_b0 = (long *)*local_b0;
      plVar19 = (long *)PTR_PTR_047d4508;
      if (plVar18 != (long *)0x0) {
        plVar19 = plVar18 + 7;
      }
      lStack_a8 = *plVar19;
      if (plVar18 == (long *)0x0) {
        local_a0 = 0;
      }
      else {
        local_a0 = plVar18[8];
        local_98 = (long *)0x0;
        (**(code **)(*plVar18 + 0x18))(plVar18);
      }
      local_98 = plVar18;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x58))(plVar17);
        lVar16 = FUN_00c8c7b4(plVar17[0x2e],&local_b0);
        (**(code **)(*plVar17 + 0x60))(plVar17);
        if (lVar16 != 0) {
          *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
        }
      }
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x20))(plVar18);
      }
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x60))(plVar17);
      }
      FUN_01dc0268(&local_b0);
      plVar17 = (long *)thunk_FUN_010f26f8(local_b0,1,uVar11,uVar1 + param_8);
      FUN_0149c1c0(&local_b0);
      if ((plVar17 != (long *)0x0) &&
         (((*(byte *)(*(long *)(plVar17[0xe] + 0x10) + 4) >> 2 & 1) != 0 ||
          (sVar10 = FUN_00cf44f4(), sVar10 != 0)))) {
        bVar4 = *pbVar3;
        plVar18 = *(long **)(param_4 + 0x6cd0);
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x58))(plVar18);
        }
        plVar19 = *(long **)(param_4 + (ulong)bVar4 * 0x98 + 0x30);
        if (plVar19 != (long *)0x0) {
          plVar20 = plVar19 + 6;
        }
        local_b0 = (long *)*plVar20;
        plVar20 = (long *)PTR_PTR_047d4508;
        if (plVar19 != (long *)0x0) {
          plVar20 = plVar19 + 7;
        }
        lStack_a8 = *plVar20;
        if (plVar19 == (long *)0x0) {
          local_a0 = 0;
        }
        else {
          local_a0 = plVar19[8];
          local_98 = (long *)0x0;
          (**(code **)(*plVar19 + 0x18))(plVar19);
        }
        local_98 = plVar19;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x58))(plVar18);
          lVar16 = FUN_00c8c7b4(plVar18[0x2e],&local_b0);
          (**(code **)(*plVar18 + 0x60))(plVar18);
          if (lVar16 != 0) {
            *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
          }
        }
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
        plVar20 = (long *)PTR_DAT_047d8b70;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x60))(plVar18);
        }
        bVar4 = *(byte *)(param_4 + lVar15 + (ulong)uVar1);
        plVar18 = *(long **)(param_4 + 0x6cd0);
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x58))(plVar18);
        }
        plVar19 = *(long **)(param_4 + (ulong)bVar4 * 0x98 + 0x30);
        if (plVar19 != (long *)0x0) {
          plVar20 = plVar19 + 6;
        }
        local_b0 = (long *)*plVar20;
        plVar20 = (long *)PTR_PTR_047d4508;
        if (plVar19 != (long *)0x0) {
          plVar20 = plVar19 + 7;
        }
        lStack_a8 = *plVar20;
        if (plVar19 == (long *)0x0) {
          local_a0 = 0;
        }
        else {
          local_a0 = plVar19[8];
          local_98 = (long *)0x0;
          (**(code **)(*plVar19 + 0x18))(plVar19);
        }
        local_98 = plVar19;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x58))(plVar18);
          lVar16 = FUN_00c8c7b4(plVar18[0x2e],&local_b0);
          (**(code **)(*plVar18 + 0x60))(plVar18);
          if (lVar16 != 0) {
            *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
          }
        }
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x20))(plVar19);
        }
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x60))(plVar18);
        }
        plVar18 = plVar17 + 5;
        do {
          lVar16 = *plVar18;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar7) {
            *(int *)plVar18 = (int)lVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          plVar20 = (long *)PTR_DAT_047d8b70;
        } while (cVar6 != '\0');
        local_c8 = plVar17;
        if ((int)lVar16 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        pcVar14 = (char *)FUN_013f728c(&local_c8);
        if (local_c8 != (long *)0x0) {
          plVar17 = local_c8 + 5;
          do {
            lVar16 = *plVar17;
            iVar12 = (int)lVar16 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *(int *)plVar17 = iVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*local_c8 + 0x10))();
          }
          else if ((int)lVar16 == 0) goto LAB_01dc4bd0;
        }
        bVar4 = *pbVar3;
        local_d0 = (long *)0x0;
        if (*pcVar14 == '\0') {
          plVar17 = (long *)FUN_00d44228();
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x18))(plVar17);
          }
          if (local_d0 != (long *)0x0) {
            lVar16 = *local_d0;
            local_d0 = plVar17;
            (**(code **)(lVar16 + 0x20))();
            plVar17 = local_d0;
          }
        }
        else {
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar22 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar22;
          FUN_00cf9884(&local_b0,uVar22,pcVar14);
          plVar17 = local_d0;
          local_d0 = (long *)0x0;
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x20))();
          }
          local_d0 = local_b0;
          plVar17 = local_d0;
        }
        local_d0 = plVar17;
        FUN_01dc1b80(bVar4,&local_d0);
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
      }
      param_5 = param_5 + 1;
    } while (param_5 != 6);
  }
  return;
}


