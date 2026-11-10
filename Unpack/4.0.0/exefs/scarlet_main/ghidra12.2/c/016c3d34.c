/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c3d34; name: FUN_016c3d34
 */


void FUN_016c3d34(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long *plVar15;
  undefined4 *puVar16;
  long *plVar17;
  undefined4 uVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined8 *local_68;
  
  local_88 = (undefined4 *)(*(long *)(param_1 + 0x318) - *(long *)(param_1 + 0x310) >> 5);
  FUN_0131ab5c(param_1 + 400,param_2,&local_88);
  FUN_0131ae74(param_1 + 0x310,param_2);
  uVar18 = (undefined4)((ulong)param_3 >> 0x20);
  local_8c = uVar18;
  if (*(ulong *)(param_1 + 0x238) < *(ulong *)(param_1 + 0x240)) {
    FUN_016c44ac(param_1 + 0x230,&local_8c);
  }
  else {
    uVar14 = *(ulong *)(param_1 + 0x250);
    lVar19 = (long)(*(ulong *)(param_1 + 0x238) - *(long *)(param_1 + 0x230)) >> 2;
    uVar9 = lVar19 + 1;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < uVar9) goto LAB_016c416c;
    lVar10 = *(ulong *)(param_1 + 0x240) - *(long *)(param_1 + 0x230);
    uVar11 = lVar10 >> 1;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    puVar1 = (undefined8 *)(param_1 + 0x248);
    local_70 = (undefined4 *)0x0;
    if (uVar14 >> 1 <= (ulong)(lVar10 >> 2)) {
      uVar9 = uVar14;
    }
    local_68 = puVar1;
    if (uVar9 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)(**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar9 << 2,4);
      if (puVar6 == (undefined4 *)0x0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    puVar13 = puVar6 + lVar19;
    local_70 = puVar6 + uVar9;
    uVar20 = *puVar1;
    local_88 = puVar6;
    local_80 = puVar13;
    local_78 = puVar13;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar19 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar19 == 0) {
      *puVar13 = uVar18;
    }
    else {
      if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_016c4378;
      *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar20;
      *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
      *puVar13 = uVar18;
      *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
      puVar13 = local_78;
    }
    local_78 = puVar13 + 1;
    FUN_016c438c(puVar1,*(undefined8 *)(param_1 + 0x230),*(undefined8 *)(param_1 + 0x238),&local_80)
    ;
    puVar16 = *(undefined4 **)(param_1 + 0x230);
    *(undefined4 **)(param_1 + 0x230) = local_80;
    puVar13 = *(undefined4 **)(param_1 + 0x238);
    *(undefined4 **)(param_1 + 0x238) = local_78;
    puVar6 = *(undefined4 **)(param_1 + 0x240);
    *(undefined4 **)(param_1 + 0x240) = local_70;
    local_78 = puVar13;
    if ((long)puVar13 - (long)puVar16 != 0) {
      local_78 = puVar13 + (((long)puVar13 - (long)puVar16) - 4U >> 2 ^ 0xffffffffffffffff);
    }
    local_88 = puVar16;
    local_80 = puVar16;
    local_70 = puVar6;
    if (puVar16 != (undefined4 *)0x0) {
      plVar8 = (long *)*local_68;
      uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if ((uVar9 & 1) != 0) {
        lVar19 = FUN_00c4e600();
        if (0 < *(int *)(lVar19 + 0x12c8)) {
          FUN_00c48fe8(plVar8,puVar16,(long)puVar6 - (long)puVar16,4);
          goto LAB_016c3eec;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar16,(long)puVar6 - (long)puVar16,4);
    }
  }
LAB_016c3eec:
  if (*(long *)(param_1 + 0x2a8) != *(long *)(param_1 + 0x2b0)) {
    FUN_016c459c(param_1 + 0x2a0,param_4);
    return;
  }
  uVar14 = *(ulong *)(param_1 + 0x2c0);
  lVar19 = *(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 3;
  uVar9 = lVar19 + 1;
  if (0x7ffffffffffffffe < uVar14) {
    uVar14 = 0x7fffffffffffffff;
  }
  if (uVar9 <= uVar14) {
    lVar10 = *(long *)(param_1 + 0x2b0) - *(long *)(param_1 + 0x2a0);
    uVar11 = lVar10 >> 2;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar14 >> 1 <= (ulong)(lVar10 >> 3)) {
      uVar9 = uVar14;
    }
    if (uVar9 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(**(long **)(param_1 + 0x2b8) + 0x10))
                         (*(long **)(param_1 + 0x2b8),uVar9 << 3,8);
      if (lVar10 == 0) {
        (**(code **)(**(long **)(param_1 + 0x2b8) + 0xe8))();
      }
    }
    uVar20 = *(undefined8 *)(param_1 + 0x2b8);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_016c4378:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar20;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    }
    lVar12 = *param_4;
    plVar8 = (long *)(lVar10 + lVar19 * 8);
    *plVar8 = lVar12;
    if (lVar12 != 0) {
      piVar2 = (int *)(lVar12 + 0x28);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    plVar21 = *(long **)(param_1 + 0x2a0);
    plVar15 = *(long **)(param_1 + 0x2a8);
    plVar17 = plVar8;
    if (plVar15 == plVar21) {
      plVar15 = plVar21;
    }
    else {
      do {
        uVar20 = *(undefined8 *)(param_1 + 0x2b8);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar19 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar19 == 0) {
          lVar19 = plVar15[-1];
          plVar15[-1] = 0;
          plVar17[-1] = lVar19;
        }
        else {
          if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_016c4378;
          *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar20;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
          lVar7 = plVar15[-1];
          plVar15[-1] = 0;
          plVar17[-1] = lVar7;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
        }
        plVar15 = plVar15 + -1;
        plVar17 = plVar17 + -1;
      } while (plVar21 != plVar15);
      plVar21 = *(long **)(param_1 + 0x2a0);
      plVar15 = *(long **)(param_1 + 0x2a8);
    }
    lVar19 = *(long *)(param_1 + 0x2b0);
    *(long **)(param_1 + 0x2a0) = plVar17;
    *(long **)(param_1 + 0x2a8) = plVar8 + 1;
    *(ulong *)(param_1 + 0x2b0) = lVar10 + uVar9 * 8;
    do {
      while( true ) {
        do {
          if (plVar15 == plVar21) {
            if (plVar21 == (long *)0x0) {
              return;
            }
            plVar8 = *(long **)(param_1 + 0x2b8);
            lVar19 = lVar19 - (long)plVar21;
            uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
            if ((uVar9 & 1) != 0) {
              lVar10 = FUN_00c4e600();
              if (0 < *(int *)(lVar10 + 0x12c8)) {
                FUN_00c48fe8(plVar8,plVar21,lVar19,8);
                return;
              }
            }
                    /* WARNING: Could not recover jumptable at 0x016c42bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar8 + 0x18))(plVar8,plVar21,lVar19,8);
            return;
          }
          plVar15 = plVar15 + -1;
          plVar8 = (long *)*plVar15;
        } while (plVar8 == (long *)0x0);
        plVar17 = plVar8 + 5;
        do {
          lVar10 = *plVar17;
          iVar5 = (int)lVar10 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar4) {
            *(int *)plVar17 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 != 0) break;
        (**(code **)(*plVar8 + 0x10))();
      }
    } while ((int)lVar10 != 0);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
LAB_016c416c:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}


