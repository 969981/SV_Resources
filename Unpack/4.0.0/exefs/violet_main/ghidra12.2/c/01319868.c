/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01319868; name: FUN_01319868
 */


void FUN_01319868(long param_1,ulong *param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  undefined4 uVar21;
  long *plVar22;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  uVar14 = *(ulong *)(param_1 + 0x130);
  plVar20 = (long *)(param_1 + 0x128);
  uVar21 = (undefined4)((ulong)param_3 >> 0x20);
  if (uVar14 != 0) {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar12 = *param_2;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & uVar12;
    }
    else if (uVar12 < uVar14) {
      uVar16 = uVar12;
    }
    else {
      uVar16 = 0;
      if (uVar14 != 0) {
        uVar16 = uVar12 / uVar14;
      }
      uVar16 = uVar12 - uVar16 * uVar14;
    }
    plVar17 = *(long **)(*plVar20 + uVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar17[1] == uVar12) {
            if (plVar17[2] == uVar12) goto LAB_01319948;
          }
          else if ((plVar17[1] & uVar14 - 1) != uVar16) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar17[1];
          if (uVar15 == uVar12) {
            if (plVar17[2] == uVar12) {
LAB_01319948:
              plVar20 = (long *)FUN_00c8f0cc(plVar20,param_2);
              lVar19 = *plVar20;
              lVar10 = *(long *)(param_1 + 0x1f8);
              local_98 = CONCAT44(local_98._4_4_,uVar21);
              uVar9 = FUN_0131a314(param_1 + 0x58,&local_98);
              FUN_0131a7a8(lVar10 + lVar19 * 0x38,uVar9);
              return;
            }
          }
          else {
            if (uVar14 <= uVar15) {
              uVar7 = 0;
              if (uVar14 != 0) {
                uVar7 = uVar15 / uVar14;
              }
              uVar15 = uVar15 - uVar7 * uVar14;
            }
            if (uVar15 != uVar16) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  plStack_80 = *(long **)(param_1 + 0x50);
  local_98 = 0;
  local_90 = 0;
  local_78 = 0x1fffffffffffffff;
  uStack_70 = 0;
  local_68 = 0;
  local_a0 = CONCAT44(local_a0._4_4_,uVar21);
  local_88 = 0;
  uVar9 = FUN_0131a314(param_1 + 0x58,&local_a0);
  FUN_0131a7a8(&local_98,uVar9);
  local_a0 = *(long *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8) >> 5;
  FUN_0131ab5c(plVar20,param_2,&local_a0);
  FUN_0131ae74(param_1 + 0x2d8,param_2);
  lVar19 = *(long *)(param_1 + 0x200);
  if (lVar19 == *(long *)(param_1 + 0x208)) {
    uVar14 = *(ulong *)(param_1 + 0x218);
    lVar19 = lVar19 - *(long *)(param_1 + 0x1f8) >> 3;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    uVar15 = lVar19 * 0x6db6db6db6db6db7 + 1;
    if (uVar14 < uVar15) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = *(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x1f8) >> 3;
    uVar12 = lVar10 * -0x2492492492492492;
    if (uVar15 <= uVar12) {
      uVar15 = uVar12;
    }
    if (uVar14 >> 1 <= (ulong)(lVar10 * 0x6db6db6db6db6db7)) {
      uVar15 = uVar14;
    }
    if (uVar15 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(**(long **)(param_1 + 0x210) + 0x10))
                         (*(long **)(param_1 + 0x210),uVar15 * 0x38,8);
      if (lVar10 == 0) {
        (**(code **)(**(long **)(param_1 + 0x210) + 0xe8))();
      }
    }
    lVar19 = lVar10 + lVar19 * 8;
    uVar9 = *(undefined8 *)(param_1 + 0x210);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      FUN_0131a5fc(lVar19,&local_98);
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_0131a2a8;
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar9;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      FUN_0131a5fc(lVar19,&local_98);
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    plVar20 = *(long **)(param_1 + 0x1f8);
    plVar17 = *(long **)(param_1 + 0x200);
    if (plVar17 == plVar20) {
      lVar11 = lVar19;
      plVar17 = plVar20;
    }
    else {
      lVar11 = 0;
      do {
        uVar9 = *(undefined8 *)(param_1 + 0x210);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 != 0) {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_0131a2a8;
          *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar9;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        }
        lVar2 = lVar19 + lVar11;
        *(undefined8 *)(lVar2 + -0x38) = 0;
        *(undefined8 *)(lVar2 + -0x30) = 0;
        *(undefined8 *)(lVar2 + -0x28) = 0;
        uVar9 = *(undefined8 *)((long)plVar17 + lVar11 + -0x20);
        uVar3 = *(undefined8 *)((long)plVar17 + lVar11 + -0x18);
        uVar4 = *(undefined8 *)((long)plVar17 + lVar11 + -8);
        *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)((long)plVar17 + lVar11 + -0x10);
        *(undefined8 *)(lVar2 + -8) = uVar4;
        *(undefined8 *)(lVar2 + -0x20) = uVar9;
        *(undefined8 *)(lVar2 + -0x18) = uVar3;
        *(undefined8 *)(lVar2 + -0x38) = *(undefined8 *)((long)plVar17 + lVar11 + -0x38);
        *(undefined8 *)(lVar2 + -0x30) = *(undefined8 *)((long)plVar17 + lVar11 + -0x30);
        *(undefined8 *)(lVar2 + -0x28) = *(undefined8 *)((long)plVar17 + lVar11 + -0x28);
        *(undefined8 *)((long)plVar17 + lVar11 + -0x38) = 0;
        *(undefined8 *)((long)plVar17 + lVar11 + -0x30) = 0;
        *(undefined8 *)((long)plVar17 + lVar11 + -0x28) = 0;
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        lVar11 = lVar11 + -0x38;
      } while ((long)plVar20 - (long)plVar17 != lVar11);
      plVar20 = *(long **)(param_1 + 0x200);
      lVar11 = lVar19 + lVar11;
      plVar17 = *(long **)(param_1 + 0x1f8);
    }
    lVar13 = *(long *)(param_1 + 0x208);
    *(ulong *)(param_1 + 0x208) = lVar10 + uVar15 * 0x38;
    *(long *)(param_1 + 0x1f8) = lVar11;
    *(long *)(param_1 + 0x200) = lVar19 + 0x38;
    if (plVar20 != plVar17) {
      do {
        plVar18 = plVar20 + -7;
        lVar19 = *plVar18;
        if (lVar19 != 0) {
          lVar10 = plVar20[-5];
          plVar22 = (long *)plVar20[-4];
          plVar20[-6] = lVar19;
          uVar14 = (**(code **)(*plVar22 + 0xf8))(plVar22);
          if (((uVar14 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
            (**(code **)(*plVar22 + 0x18))(plVar22,lVar19,lVar10 - lVar19,8);
          }
          else {
            FUN_00c48fe8(plVar22,lVar19,lVar10 - lVar19,8);
          }
        }
        plVar20 = plVar18;
      } while (plVar17 != plVar18);
    }
    if (plVar17 != (long *)0x0) {
      plVar20 = *(long **)(param_1 + 0x210);
      lVar13 = lVar13 - (long)plVar17;
      uVar14 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar14 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,plVar17,lVar13,8);
      }
      else {
        FUN_00c48fe8(plVar20,plVar17,lVar13,8);
      }
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x210);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      FUN_0131a5fc(lVar19,&local_98);
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0131a2a8;
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar9;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      FUN_0131a5fc(lVar19,&local_98);
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    *(long *)(param_1 + 0x200) = lVar19 + 0x38;
  }
  plVar20 = *(long **)(param_1 + 0x270);
  if (plVar20 == *(long **)(param_1 + 0x278)) {
    uVar15 = *(ulong *)(param_1 + 0x288);
    lVar19 = (long)plVar20 - *(long *)(param_1 + 0x268) >> 3;
    uVar14 = lVar19 + 1;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar14) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (long)*(long **)(param_1 + 0x278) - *(long *)(param_1 + 0x268);
    uVar12 = lVar10 >> 2;
    if (uVar14 <= uVar12) {
      uVar14 = uVar12;
    }
    if (uVar15 >> 1 <= (ulong)(lVar10 >> 3)) {
      uVar14 = uVar15;
    }
    if (uVar14 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(**(long **)(param_1 + 0x280) + 0x10))
                         (*(long **)(param_1 + 0x280),uVar14 << 3,8);
      if (lVar10 == 0) {
        (**(code **)(**(long **)(param_1 + 0x280) + 0xe8))();
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x280);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_0131a2a8;
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar9;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    lVar13 = *param_4;
    plVar20 = (long *)(lVar10 + lVar19 * 8);
    *plVar20 = lVar13;
    if (lVar13 != 0) {
      piVar1 = (int *)(lVar13 + 0x28);
      do {
        iVar8 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == -1) goto LAB_0131a2cc;
    }
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    plVar22 = *(long **)(param_1 + 0x268);
    plVar18 = *(long **)(param_1 + 0x270);
    plVar17 = plVar20;
    if (plVar18 == plVar22) {
      plVar18 = plVar22;
    }
    else {
      do {
        uVar9 = *(undefined8 *)(param_1 + 0x280);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar19 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar19 == 0) {
          lVar19 = plVar18[-1];
          plVar18[-1] = 0;
          plVar17[-1] = lVar19;
        }
        else {
          if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_0131a2a8;
          *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar9;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
          lVar11 = plVar18[-1];
          plVar18[-1] = 0;
          plVar17[-1] = lVar11;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
        }
        plVar18 = plVar18 + -1;
        plVar17 = plVar17 + -1;
      } while (plVar22 != plVar18);
      plVar22 = *(long **)(param_1 + 0x268);
      plVar18 = *(long **)(param_1 + 0x270);
    }
    lVar19 = *(long *)(param_1 + 0x278);
    *(long **)(param_1 + 0x268) = plVar17;
    *(long **)(param_1 + 0x270) = plVar20 + 1;
    *(ulong *)(param_1 + 0x278) = lVar10 + uVar14 * 8;
    while (plVar18 != plVar22) {
      plVar18 = plVar18 + -1;
      plVar20 = (long *)*plVar18;
      if (plVar20 != (long *)0x0) {
        plVar17 = plVar20 + 5;
        do {
          lVar10 = *plVar17;
          iVar8 = (int)lVar10 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar20 + 0x10))();
        }
        else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    if (plVar22 != (long *)0x0) {
      plVar20 = *(long **)(param_1 + 0x280);
      lVar19 = lVar19 - (long)plVar22;
      uVar14 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar14 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,plVar22,lVar19,8);
      }
      else {
        FUN_00c48fe8(plVar20,plVar22,lVar19,8);
      }
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x280);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar19 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar19 != 0) {
      if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_0131a2a8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar9;
      *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
    }
    lVar10 = *param_4;
    *plVar20 = lVar10;
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x28);
      do {
        iVar8 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == -1) {
LAB_0131a2cc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (lVar19 != 0) {
      *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
    }
    *(long **)(param_1 + 0x270) = plVar20 + 1;
  }
  plVar20 = plStack_80;
  lVar19 = local_98;
  if (local_98 != 0) {
    local_90 = local_98;
    lVar10 = local_88 - local_98;
    uVar14 = (**(code **)(*plStack_80 + 0xf8))(plStack_80);
    if (((uVar14 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,lVar19,lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar20,lVar19,lVar10,8);
    }
  }
  return;
}


