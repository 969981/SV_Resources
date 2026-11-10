/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c5978; name: FUN_011c5978
 */


void FUN_011c5978(long param_1,long *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  
  plVar6 = *(long **)(param_1 + 0x30);
  if (plVar6 != *(long **)(param_1 + 0x38)) {
    do {
      if (*plVar6 == *param_2) {
        FUN_011c5e34((long *)(param_1 + 0x30));
        break;
      }
      plVar6 = plVar6 + 2;
    } while (*(long **)(param_1 + 0x38) != plVar6);
  }
  lVar13 = *param_2;
  if (lVar13 != 0) {
    piVar1 = (int *)(lVar13 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 < *(long **)(param_1 + 0x40)) {
    uVar15 = *(undefined8 *)(param_1 + 0x48);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 == 0) {
      *plVar6 = lVar13;
      *(undefined4 *)(plVar6 + 1) = param_3;
    }
    else {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_011c5dd4;
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar15;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *plVar6 = lVar13;
      *(undefined4 *)(plVar6 + 1) = param_3;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    *(long **)(param_1 + 0x38) = plVar6 + 2;
  }
  else {
    uVar10 = *(ulong *)(param_1 + 0x50);
    lVar12 = (long)plVar6 - *(long *)(param_1 + 0x30) >> 4;
    uVar5 = lVar12 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = (long)*(long **)(param_1 + 0x40) - *(long *)(param_1 + 0x30);
    uVar8 = lVar7 >> 3;
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (uVar10 >> 1 <= (ulong)(lVar7 >> 4)) {
      uVar5 = uVar10;
    }
    if (uVar5 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                        (*(long **)(param_1 + 0x48),uVar5 << 4,8);
      if (lVar7 == 0) {
        (**(code **)(**(long **)(param_1 + 0x48) + 0xe8))();
      }
    }
    plVar6 = (long *)(lVar7 + lVar12 * 0x10);
    uVar15 = *(undefined8 *)(param_1 + 0x48);
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 == 0) {
      *plVar6 = lVar13;
      *(undefined4 *)(plVar6 + 1) = param_3;
    }
    else {
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_011c5dd4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar15;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *plVar6 = lVar13;
      *(undefined4 *)(plVar6 + 1) = param_3;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    plVar11 = *(long **)(param_1 + 0x30);
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 == plVar11) {
      plVar9 = plVar6;
      plVar14 = plVar11;
    }
    else {
      lVar13 = 0;
      do {
        uVar15 = *(undefined8 *)(param_1 + 0x48);
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 == 0) {
          uVar15 = *(undefined8 *)((long)plVar9 + lVar13 + -0x10);
          *(undefined8 *)((long)plVar9 + lVar13 + -0x10) = 0;
          *(undefined8 *)((long)plVar6 + lVar13 + -0x10) = uVar15;
          *(undefined4 *)((long)plVar6 + lVar13 + -8) = *(undefined4 *)((long)plVar9 + lVar13 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_011c5dd4;
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar15;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          uVar15 = *(undefined8 *)((long)plVar9 + lVar13 + -0x10);
          *(undefined8 *)((long)plVar9 + lVar13 + -0x10) = 0;
          *(undefined8 *)((long)plVar6 + lVar13 + -0x10) = uVar15;
          *(undefined4 *)((long)plVar6 + lVar13 + -8) = *(undefined4 *)((long)plVar9 + lVar13 + -8);
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        lVar13 = lVar13 + -0x10;
      } while ((long)plVar11 - (long)plVar9 != lVar13);
      plVar9 = (long *)((long)plVar6 + lVar13);
      plVar11 = *(long **)(param_1 + 0x30);
      plVar14 = *(long **)(param_1 + 0x38);
    }
    lVar13 = *(long *)(param_1 + 0x40);
    *(long **)(param_1 + 0x30) = plVar9;
    *(long **)(param_1 + 0x38) = plVar6 + 2;
    *(ulong *)(param_1 + 0x40) = lVar7 + uVar5 * 0x10;
    while (plVar14 != plVar11) {
      plVar14 = plVar14 + -2;
      plVar6 = (long *)*plVar14;
      if (plVar6 != (long *)0x0) {
        plVar9 = plVar6 + 5;
        do {
          lVar12 = *plVar9;
          iVar4 = (int)lVar12 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    if (plVar11 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x48);
      lVar13 = lVar13 - (long)plVar11;
      uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar5 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar11,lVar13,8);
      }
      else {
        FUN_00c48fe8(plVar6,plVar11,lVar13,8);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x99) = 1;
  return;
}


