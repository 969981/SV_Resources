/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f9c80c; name: FUN_01f9c80c
 */


void FUN_01f9c80c(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  
  plVar7 = (long *)param_1[1];
  if (plVar7 == (long *)param_1[2]) {
    uVar10 = param_1[4];
    lVar13 = (long)plVar7 - *param_1 >> 3;
    uVar8 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - *param_1;
    uVar9 = lVar5 >> 2;
    if (uVar8 <= uVar9) {
      uVar8 = uVar9;
    }
    if (uVar10 >> 1 <= (ulong)(lVar5 >> 3)) {
      uVar8 = uVar10;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 3,8);
      if (lVar5 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar15 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01f9cc50;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    lVar15 = *param_2;
    plVar7 = (long *)(lVar5 + lVar13 * 8);
    *plVar7 = lVar15;
    if (lVar15 != 0) {
      piVar1 = (int *)(lVar15 + 0x28);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == -1) goto LAB_01f9cc54;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    plVar12 = (long *)*param_1;
    plVar11 = (long *)param_1[1];
    plVar14 = plVar7;
    if (plVar11 == plVar12) {
      plVar11 = plVar12;
    }
    else {
      do {
        lVar13 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar15 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar15 == 0) {
          lVar13 = plVar11[-1];
          plVar11[-1] = 0;
          plVar14[-1] = lVar13;
        }
        else {
          if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_01f9cc50;
          *(long *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = lVar13;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
          lVar13 = plVar11[-1];
          plVar11[-1] = 0;
          plVar14[-1] = lVar13;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
        }
        plVar11 = plVar11 + -1;
        plVar14 = plVar14 + -1;
      } while (plVar12 != plVar11);
      plVar12 = (long *)*param_1;
      plVar11 = (long *)param_1[1];
    }
    lVar13 = param_1[2];
    *param_1 = (long)plVar14;
    param_1[1] = (long)(plVar7 + 1);
    param_1[2] = lVar5 + uVar8 * 8;
    while (plVar11 != plVar12) {
      plVar11 = plVar11 + -1;
      plVar7 = (long *)*plVar11;
      if (plVar7 != (long *)0x0) {
        plVar14 = plVar7 + 5;
        do {
          lVar5 = *plVar14;
          iVar4 = (int)lVar5 + -1;
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
        else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    if (plVar12 != (long *)0x0) {
      plVar7 = (long *)param_1[3];
      uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if ((uVar8 & 1) != 0) {
        lVar5 = FUN_00c4e600();
        if (0 < *(int *)(lVar5 + 0x12c8)) {
          FUN_00c48fe8(plVar7,plVar12,lVar13 - (long)plVar12,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01f9cae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar12,lVar13 - (long)plVar12,8);
      return;
    }
  }
  else {
    lVar13 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_01f9cc50:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar13;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    lVar13 = *param_2;
    *plVar7 = lVar13;
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
LAB_01f9cc54:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    param_1[1] = (long)(plVar7 + 1);
  }
  return;
}


