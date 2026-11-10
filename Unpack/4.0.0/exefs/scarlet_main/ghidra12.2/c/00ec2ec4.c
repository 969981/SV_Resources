/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ec2ec4; name: FUN_00ec2ec4
 */


void FUN_00ec2ec4(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  
  plVar7 = *(long **)(param_1 + 0x50);
  plVar11 = *(long **)(param_1 + 0x58);
  if (plVar7 != plVar11) {
    plVar13 = plVar7;
    do {
      plVar14 = plVar13 + 1;
      if (*plVar13 == *param_2) {
        return;
      }
      plVar13 = plVar14;
    } while (plVar11 != plVar14);
  }
  if (plVar11 != *(long **)(param_1 + 0x60)) {
    FUN_00ee4dec((long *)(param_1 + 0x50),param_2);
    return;
  }
  uVar12 = *(ulong *)(param_1 + 0x70);
  lVar15 = (long)plVar11 - (long)plVar7 >> 3;
  uVar6 = lVar15 + 1;
  if (0x7ffffffffffffffe < uVar12) {
    uVar12 = 0x7fffffffffffffff;
  }
  if (uVar12 < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = (long)*(long **)(param_1 + 0x60) - (long)plVar7;
  uVar9 = lVar8 >> 2;
  if (uVar6 <= uVar9) {
    uVar6 = uVar9;
  }
  if (uVar12 >> 1 <= (ulong)(lVar8 >> 3)) {
    uVar6 = uVar12;
  }
  if (uVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                      (*(long **)(param_1 + 0x68),uVar6 << 3,8);
    if (lVar8 == 0) {
      (**(code **)(**(long **)(param_1 + 0x68) + 0xe8))();
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 0x68);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00ec32a0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar16;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  lVar10 = *param_2;
  plVar7 = (long *)(lVar8 + lVar15 * 8);
  *plVar7 = lVar10;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
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
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  plVar11 = *(long **)(param_1 + 0x50);
  plVar13 = *(long **)(param_1 + 0x58);
  plVar14 = plVar7;
  if (plVar13 == plVar11) {
    plVar13 = plVar11;
  }
  else {
    do {
      uVar16 = *(undefined8 *)(param_1 + 0x68);
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar15 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar15 == 0) {
        lVar15 = plVar13[-1];
        plVar13[-1] = 0;
        plVar14[-1] = lVar15;
      }
      else {
        if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_00ec32a0;
        *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar16;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
        lVar5 = plVar13[-1];
        plVar13[-1] = 0;
        plVar14[-1] = lVar5;
        *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
      }
      plVar13 = plVar13 + -1;
      plVar14 = plVar14 + -1;
    } while (plVar11 != plVar13);
    plVar11 = *(long **)(param_1 + 0x50);
    plVar13 = *(long **)(param_1 + 0x58);
  }
  lVar15 = *(long *)(param_1 + 0x60);
  *(long **)(param_1 + 0x50) = plVar14;
  *(long **)(param_1 + 0x58) = plVar7 + 1;
  *(ulong *)(param_1 + 0x60) = lVar8 + uVar6 * 8;
  while (plVar13 != plVar11) {
    plVar13 = plVar13 + -1;
    plVar7 = (long *)*plVar13;
    if (plVar7 != (long *)0x0) {
      plVar14 = plVar7 + 5;
      do {
        lVar8 = *plVar14;
        iVar4 = (int)lVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *(int *)plVar14 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x68);
  lVar15 = lVar15 - (long)plVar11;
  uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00ec30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar11,lVar15,8);
    return;
  }
  FUN_00c48fe8(plVar7,plVar11,lVar15,8);
  return;
}


