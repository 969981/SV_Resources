/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a7e44c; name: FUN_00a7e44c
 */


void FUN_00a7e44c(long param_1)

{
  int *piVar1;
  long *plVar2;
  short *psVar3;
  uint uVar4;
  short sVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  code *pcVar11;
  undefined1 uVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  bool bVar19;
  short sVar20;
  undefined8 *local_118;
  undefined8 uStack_110;
  ulong local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 *local_c0;
  code *local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined1 auStack_a0 [96];
  long *local_28;
  
  if (((*PTR_DAT_047d8550 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8550);
  }
  lVar18 = *(long *)PTR_DAT_047d8558;
  *(long *)PTR_DAT_047d8560 = lVar18;
  lVar18 = *(long *)(lVar18 + 0x140);
  if (lVar18 != 0) {
    piVar1 = (int *)(lVar18 + 0x28);
    do {
      iVar13 = *piVar1;
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar19) {
        *piVar1 = iVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar14 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 5;
    do {
      lVar8 = *plVar2;
      iVar13 = (int)lVar8 + -1;
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar19) {
        *(int *)plVar2 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_00a7eba8;
  }
  *(long *)(param_1 + 0x30) = lVar18;
  FUN_0129e570(*(undefined8 *)(lVar18 + 0x150));
  plVar14 = *(long **)(*(long *)(param_1 + 0x30) + 0x30);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x58))(plVar14);
  }
  local_c0 = (undefined8 *)0xfdb103dce8e1725c;
  local_b8 = (code *)0x3be8b93;
  local_b0 = 6;
  local_a8 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    lVar18 = FUN_00e895f4(plVar14[0x2e],&local_c0);
    if (lVar18 != 0) {
      FUN_00dfcea4();
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    (**(code **)(*plVar14 + 0x60))(plVar14);
  }
  lVar18 = *(long *)(*(long *)(param_1 + 0x30) + 0x30);
  local_e0 = 0x2aaa42a2e98f9513;
  pcStack_d8 = "L_lr_00";
  local_d0 = 7;
  local_c8 = (long *)0x0;
  if (lVar18 != 0) {
    lVar18 = FUN_00c8c7ac(lVar18,&local_e0);
    if (lVar18 != 0) {
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  FUN_01dddd44(*(undefined8 *)(param_1 + 0x30));
  if (((*PTR_DAT_047d8280 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar18 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar18;
  local_100 = 0x2e48dbf7dd0394d8;
  local_f8 = "PLAY_UI_COMMON_SLIDE";
  local_f0 = 0x14;
  local_e8 = (long *)0x0;
  if (*(long *)(lVar18 + 0x48) == 0) {
    uVar15 = 0xffffffffffffffff;
  }
  else {
    uVar15 = FUN_00cf8198();
  }
  pcVar10 = local_f8;
  memset(&local_c0,0,0x80);
  plVar14 = *(long **)(*(long *)(lVar18 + 0x200) + 0x60);
  iVar13 = (**(code **)(*plVar14 + 0xd0))(plVar14,pcVar10,uVar15,1,&LAB_01080c70,lVar18,0,0,0);
  if ((iVar13 != 0) &&
     (FUN_0104f218(*(undefined8 *)(lVar18 + 0x220),&local_100,iVar13,uVar15,0,&local_c0,0),
     pcVar11 = local_b8, local_b8 != (code *)0x0)) {
    local_b0 = 0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined8 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar11)(auStack_a0);
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  FUN_01df05ac(&local_28,*(undefined8 *)(param_1 + 0x30));
  plVar14 = local_28;
  FUN_015d81e0(local_28[6],0);
  FUN_01decbb8(plVar14);
  FUN_01df060c(&local_100,local_28);
  local_c0 = *(undefined8 **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_014a3154(&local_c0);
  uVar15 = local_100;
  local_100 = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar15;
  FUN_014a3154(&local_100);
  FUN_015d8984(*(undefined8 *)(param_1 + 0x38),4,PTR_DAT_047d90b8);
  lVar18 = FUN_01195854();
  *(uint *)(param_1 + 100) = (uint)*(byte *)(lVar18 + 0x570);
  iVar13 = FUN_014a24ec();
  uVar12 = 4;
  if (iVar13 != 0) {
    uVar12 = 6;
  }
  *(undefined1 *)(param_1 + 0x68) = uVar12;
  iVar13 = FUN_014a24ec();
  uVar4 = *(uint *)(param_1 + 100);
  uVar16 = 8;
  if (iVar13 != 2) {
    uVar16 = 4;
  }
  uVar17 = uVar16 - 1;
  *(char *)(param_1 + 0x69) = (char)uVar16;
  if (uVar4 == 0x20) {
    local_108 = 0;
  }
  else {
    uVar7 = 0;
    if (uVar16 != 0) {
      uVar7 = uVar4 / uVar16;
    }
    uVar17 = uVar17 & uVar4;
    local_108 = (ulong)(uVar7 + 1) << 0x20;
  }
  local_108 = local_108 | uVar17;
  local_c0 = (undefined8 *)0x0;
  local_b8 = (code *)0x0;
  FUN_00f3e8f8(&local_c0,*(long *)(param_1 + 0x30) + 0x68);
  FUN_01524070((long *)(param_1 + 0x50),&local_c0);
  puVar9 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    psVar3 = (short *)(local_c0 + 3);
    do {
      sVar20 = *psVar3;
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar19) {
        *psVar3 = sVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar20 == 1) {
      piVar1 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar13 = *piVar1;
        cVar6 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_100 = *puVar9;
        FUN_00c44438(lVar18 + 0x8040,&local_100);
      }
    }
    else if (sVar20 == 0) goto LAB_00a7ebf8;
  }
  lVar18 = *(long *)(param_1 + 0x50);
  if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
    psVar3 = (short *)(lVar18 + 0x1a);
    sVar20 = *(short *)(lVar18 + 0x1a);
    do {
      sVar5 = *psVar3;
      if (sVar5 == sVar20) {
        cVar6 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar19) {
          *psVar3 = sVar20 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_00a7ea18;
        bVar19 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a7ea18:
        bVar19 = false;
      }
      if (bVar19) {
        lVar18 = *(long *)(lVar18 + 0x10);
        plVar14 = (long *)0x0;
        if (lVar18 != 0) {
          plVar14 = (long *)(lVar18 + -0x28);
        }
        FUN_014e974c(plVar14,&local_108,1,0);
        if (lVar18 != 0) {
          lVar18 = plVar14[6];
          psVar3 = (short *)(lVar18 + 0x1a);
          do {
            sVar20 = *psVar3;
            cVar6 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar19) {
              *psVar3 = sVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar20 == 1) {
            *(undefined8 *)(lVar18 + 0x10) = 0;
            (**(code **)(*plVar14 + 0x50))(plVar14);
          }
          else if (sVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        goto LAB_00a7e7d0;
      }
      sVar20 = sVar5;
    } while (sVar5 != 0);
  }
  FUN_014e974c(0,&local_108,1,0);
LAB_00a7e7d0:
  local_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  FUN_01084328(&local_118,*(long *)(param_1 + 0x30) + 0x130);
  uVar12 = FUN_01df1ca8(*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x284));
  local_c0 = (undefined8 *)(CONCAT71(local_c0._1_7_,uVar12) & 0xffffffffffffff01);
  FUN_01de0af4(&local_118,s_F3179DD50C98C45F5_04542758,&local_c0);
  puVar9 = local_118;
  if (local_118 != (undefined8 *)0x0) {
    psVar3 = (short *)(local_118 + 3);
    do {
      sVar20 = *psVar3;
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar19) {
        *psVar3 = sVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar20 == 1) {
      piVar1 = (int *)((long)local_118 + 0x1c);
      do {
        iVar13 = *piVar1;
        cVar6 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_c0 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar18 + 0x8040,&local_c0);
      }
    }
    else if (sVar20 == 0) {
LAB_00a7ebf8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  local_c0 = (undefined8 *)0x2a61fcefe7006747;
  local_b8 = (code *)0x3bfcb92;
  local_b0 = 0x10;
  local_a8 = (long *)0x0;
  FUN_01282188(&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (local_28 != (long *)0x0) {
    plVar14 = local_28 + 5;
    do {
      lVar18 = *plVar14;
      iVar13 = (int)lVar18 + -1;
      cVar6 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar19) {
        *(int *)plVar14 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar18 == 0) {
LAB_00a7eba8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


