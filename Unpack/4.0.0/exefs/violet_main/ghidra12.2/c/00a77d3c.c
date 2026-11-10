/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a77d3c; name: FUN_00a77d3c
 */


void FUN_00a77d3c(long param_1)

{
  int *piVar1;
  long *plVar2;
  ulong *puVar3;
  short *psVar4;
  uint uVar5;
  short sVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  char *pcVar12;
  ulong *puVar13;
  code *pcVar14;
  undefined1 uVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  undefined8 uVar19;
  uint uVar20;
  long lVar21;
  bool bVar22;
  short sVar23;
  undefined8 *local_118;
  undefined8 uStack_110;
  ulong local_108;
  char *local_100;
  undefined8 local_f8;
  long *local_f0;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  long *local_c8;
  ulong *local_c0;
  code *local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined1 auStack_a0 [96];
  
  if (((*PTR_DAT_047d8550 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar16 != 0)) {
    FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8550);
  }
  lVar21 = *(long *)PTR_DAT_047d8558;
  *(long *)PTR_DAT_047d8560 = lVar21;
  lVar21 = *(long *)(lVar21 + 0x140);
  if (lVar21 != 0) {
    piVar1 = (int *)(lVar21 + 0x28);
    do {
      iVar16 = *piVar1;
      cVar7 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar22) {
        *piVar1 = iVar16 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar16 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar18 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar18 != (long *)0x0) {
    plVar2 = plVar18 + 5;
    do {
      lVar9 = *plVar2;
      iVar16 = (int)lVar9 + -1;
      cVar7 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar22) {
        *(int *)plVar2 = iVar16;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_00a784b0;
  }
  *(long *)(param_1 + 0x30) = lVar21;
  FUN_01df05ac(&local_c8,lVar21);
  plVar18 = local_c8;
  FUN_015d81e0(local_c8[6],0);
  FUN_01decbb8(plVar18);
  FUN_01df060c(&local_108,local_c8);
  local_c0 = *(ulong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_014a3154(&local_c0);
  uVar11 = local_108;
  local_108 = 0;
  *(ulong *)(param_1 + 0x38) = uVar11;
  FUN_014a3154(&local_108);
  lVar21 = FUN_01195854();
  *(uint *)(param_1 + 100) = (uint)*(byte *)(lVar21 + 0x570);
  iVar16 = FUN_014a24ec();
  uVar15 = 4;
  if (iVar16 != 0) {
    uVar15 = 6;
  }
  *(undefined1 *)(param_1 + 0x68) = uVar15;
  iVar16 = FUN_014a24ec();
  uVar15 = 8;
  if (iVar16 != 2) {
    uVar15 = 4;
  }
  *(undefined1 *)(param_1 + 0x69) = uVar15;
  iVar16 = *(int *)(*(long *)(*(long *)(param_1 + 0x30) + 0x1b8) + 0x34);
  FUN_01dddd44();
  local_c0 = (ulong *)0x0;
  local_b8 = (code *)0x0;
  FUN_00f3e8f8(&local_c0,*(long *)(param_1 + 0x30) + 0x68);
  FUN_01524070((long *)(param_1 + 0x50),&local_c0);
  puVar13 = local_c0;
  if (local_c0 != (ulong *)0x0) {
    puVar3 = local_c0 + 3;
    do {
      sVar23 = (short)*puVar3;
      cVar7 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar22) {
        *(short *)puVar3 = sVar23 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar23 == 1) {
      piVar1 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar17 = *piVar1;
        cVar7 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar22) {
          *piVar1 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar17 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar21 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar21;
        local_108 = *puVar13;
        FUN_00c44438(lVar21 + 0x8040,&local_108);
      }
    }
    else if (sVar23 == 0) goto LAB_00a78500;
  }
  if ((iVar16 == 0x1e) || (iVar16 == 0x22)) {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  else {
    FUN_0129e570(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x150));
    plVar18 = *(long **)(*(long *)(param_1 + 0x30) + 0x30);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x58))(plVar18);
    }
    local_c0 = (ulong *)0xfdb103dce8e1725c;
    local_b8 = (code *)0x3be8b93;
    local_b0 = 6;
    local_a8 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      lVar21 = FUN_00e895f4(plVar18[0x2e],&local_c0);
      if (lVar21 != 0) {
        FUN_00dfcea4();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      (**(code **)(*plVar18 + 0x60))(plVar18);
    }
    lVar21 = *(long *)(*(long *)(param_1 + 0x30) + 0x30);
    local_e8 = 0x2aaa42a2e98f9513;
    pcStack_e0 = "L_lr_00";
    local_d8 = 7;
    local_d0 = (long *)0x0;
    if (lVar21 != 0) {
      lVar21 = FUN_00c8c7ac(lVar21,&local_e8);
      if (lVar21 != 0) {
        *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) & 0xfe;
      }
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
    }
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar16 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar21 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar21;
    local_108 = 0x2e48dbf7dd0394d8;
    local_100 = "PLAY_UI_COMMON_SLIDE";
    local_f8 = 0x14;
    local_f0 = (long *)0x0;
    if (*(long *)(lVar21 + 0x48) == 0) {
      uVar19 = 0xffffffffffffffff;
    }
    else {
      uVar19 = FUN_00cf8198();
    }
    pcVar12 = local_100;
    memset(&local_c0,0,0x80);
    plVar18 = *(long **)(*(long *)(lVar21 + 0x200) + 0x60);
    iVar16 = (**(code **)(*plVar18 + 0xd0))(plVar18,pcVar12,uVar19,1,&LAB_01080c70,lVar21,0,0,0);
    if ((iVar16 != 0) &&
       (FUN_0104f218(*(undefined8 *)(lVar21 + 0x220),&local_108,iVar16,uVar19,0,&local_c0,0),
       pcVar14 = local_b8, local_b8 != (code *)0x0)) {
      local_b0 = 0;
      local_a8 = (long *)0x0;
      local_c0 = (ulong *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar14)(auStack_a0);
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    uVar5 = *(uint *)(param_1 + 100);
    uVar20 = (uint)*(byte *)(param_1 + 0x69);
    if (uVar5 == 0x20) {
      local_108 = 0;
      uVar20 = uVar20 - 1;
    }
    else {
      uVar8 = 0;
      if (uVar20 != 0) {
        uVar8 = uVar5 / uVar20;
      }
      uVar20 = uVar5 - uVar8 * uVar20;
      local_108 = (ulong)(uVar8 + 1) << 0x20;
    }
    local_108 = local_108 | uVar20;
    lVar21 = *(long *)(param_1 + 0x50);
    if ((lVar21 != 0) && (*(short *)(lVar21 + 0x1a) != 0)) {
      psVar4 = (short *)(lVar21 + 0x1a);
      sVar23 = *(short *)(lVar21 + 0x1a);
      do {
        sVar6 = *psVar4;
        if (sVar6 == sVar23) {
          cVar7 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(psVar4,0x10);
          if (bVar22) {
            *psVar4 = sVar23 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_00a78320;
          bVar22 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a78320:
          bVar22 = false;
        }
        if (bVar22) {
          lVar21 = *(long *)(lVar21 + 0x10);
          plVar18 = (long *)0x0;
          if (lVar21 != 0) {
            plVar18 = (long *)(lVar21 + -0x28);
          }
          FUN_014e974c(plVar18,&local_108,1,0);
          if (lVar21 != 0) {
            lVar21 = plVar18[6];
            psVar4 = (short *)(lVar21 + 0x1a);
            do {
              sVar23 = *psVar4;
              cVar7 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(psVar4,0x10);
              if (bVar22) {
                *psVar4 = sVar23 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar23 == 1) {
              *(undefined8 *)(lVar21 + 0x10) = 0;
              (**(code **)(*plVar18 + 0x50))(plVar18);
            }
            else if (sVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          goto LAB_00a780d8;
        }
        sVar23 = sVar6;
      } while (sVar6 != 0);
    }
    FUN_014e974c(0,&local_108,1,0);
LAB_00a780d8:
    local_c0 = (ulong *)0x2a61fcefe7006747;
    local_b8 = (code *)0x3bfcb92;
    local_b0 = 0x10;
    local_a8 = (long *)0x0;
    FUN_01282188(&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  local_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  FUN_01084328(&local_118,*(long *)(param_1 + 0x30) + 0x130);
  uVar15 = FUN_01df1ca8(*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x284));
  local_c0 = (ulong *)(CONCAT71(local_c0._1_7_,uVar15) & 0xffffffffffffff01);
  FUN_01de0af4(&local_118,s_F3179DD50C98C45F5_04542380,&local_c0);
  puVar10 = local_118;
  if (local_118 != (undefined8 *)0x0) {
    psVar4 = (short *)(local_118 + 3);
    do {
      sVar23 = *psVar4;
      cVar7 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar22) {
        *psVar4 = sVar23 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar23 == 1) {
      piVar1 = (int *)((long)local_118 + 0x1c);
      do {
        iVar16 = *piVar1;
        cVar7 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar22) {
          *piVar1 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar16 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar21 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar21;
        local_c0 = (ulong *)*puVar10;
        FUN_00c44438(lVar21 + 0x8040,&local_c0);
      }
    }
    else if (sVar23 == 0) {
LAB_00a78500:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_c8 != (long *)0x0) {
    plVar18 = local_c8 + 5;
    do {
      lVar21 = *plVar18;
      iVar16 = (int)lVar21 + -1;
      cVar7 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar22) {
        *(int *)plVar18 = iVar16;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    else if ((int)lVar21 == 0) {
LAB_00a784b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


