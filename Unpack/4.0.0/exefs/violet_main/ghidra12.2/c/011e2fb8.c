/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e2fb8; name: FUN_011e2fb8
 */


void FUN_011e2fb8(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  
  if (param_1[1] != param_1[2]) {
    plVar12 = (long *)param_1[1];
    lVar15 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 != 0) {
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar15;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    }
    lVar15 = *param_2;
    *plVar12 = lVar15;
    if (lVar15 != 0) {
      piVar1 = (int *)(lVar15 + 0x28);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    param_1[1] = (long)(plVar12 + 1);
    return;
  }
  uVar11 = param_1[4];
  lVar15 = param_1[1] - *param_1 >> 3;
  uVar7 = lVar15 + 1;
  if (0x7ffffffffffffffe < uVar11) {
    uVar11 = 0x7fffffffffffffff;
  }
  if (uVar11 < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1;
  uVar10 = lVar9 >> 2;
  if (uVar7 <= uVar10) {
    uVar7 = uVar10;
  }
  plVar12 = param_1 + 3;
  if (uVar11 >> 1 <= (ulong)(lVar9 >> 3)) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar7 << 3,8);
    if (lVar9 == 0) {
      (**(code **)(*(long *)*plVar12 + 0xe8))();
    }
  }
  lVar16 = *plVar12;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar16;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  lVar16 = *param_2;
  plVar8 = (long *)(lVar9 + lVar15 * 8);
  *plVar8 = lVar16;
  if (lVar16 != 0) {
    piVar1 = (int *)(lVar16 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  plVar13 = (long *)*param_1;
  plVar14 = (long *)param_1[1];
  plVar2 = plVar8 + 1;
  if (plVar14 == plVar13) {
    plVar14 = plVar13;
  }
  else {
    do {
      plVar8 = plVar8 + -1;
      plVar14 = plVar14 + -1;
      FUN_011e37d0(plVar12,plVar8,plVar14);
    } while (plVar13 != plVar14);
    plVar13 = (long *)*param_1;
    plVar14 = (long *)param_1[1];
  }
  *param_1 = (long)plVar8;
  param_1[1] = (long)plVar2;
  lVar15 = param_1[2];
  param_1[2] = lVar9 + uVar7 * 8;
  while (plVar14 != plVar13) {
    plVar14 = plVar14 + -1;
    plVar8 = (long *)*plVar14;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
      do {
        lVar9 = *plVar2;
        iVar5 = (int)lVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if (plVar13 == (long *)0x0) {
    return;
  }
  plVar12 = (long *)*plVar12;
  uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
  if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x011e31ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar12 + 0x18))(plVar12,plVar13,lVar15 - (long)plVar13,8);
    return;
  }
  FUN_00c48fe8(plVar12,plVar13,lVar15 - (long)plVar13,8);
  return;
}


