/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c7314; name: FUN_011c7314
 */


void FUN_011c7314(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  int *piVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long local_88;
  long *local_80;
  long *local_78;
  long local_70;
  long *plStack_68;
  
  plVar4 = (long *)param_1[1];
  plVar1 = param_1 + 3;
  if (plVar4 == (long *)param_1[2]) {
    uVar13 = param_1[4];
    lVar14 = (long)plVar4 - *param_1 >> 3;
    uVar2 = lVar14 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = param_1[2] - *param_1;
    uVar11 = lVar10 >> 2;
    local_70 = 0;
    if (uVar2 <= uVar11) {
      uVar2 = uVar11;
    }
    if (uVar13 >> 1 <= (ulong)(lVar10 >> 3)) {
      uVar2 = uVar13;
    }
    plStack_68 = plVar1;
    if (uVar2 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar2 << 3,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
    }
    plVar4 = (long *)(local_88 + lVar14 * 8);
    local_70 = local_88 + uVar2 * 8;
    lVar14 = *plVar1;
    local_80 = plVar4;
    local_78 = plVar4;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 != 0) {
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_011c76a8;
      *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar14;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    }
    lVar14 = *param_2;
    *plVar4 = lVar14;
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == -1) goto LAB_011c76ac;
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    puVar7 = PTR_LAB_047d3900;
    local_78 = local_78 + 1;
    lVar14 = *param_1;
    lVar10 = param_1[1];
    if (lVar10 == lVar14) {
      lVar10 = lVar14;
    }
    else {
      do {
        plVar4 = local_80;
        lVar12 = *plVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar7,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar9 == 0) {
          lVar12 = *(long *)(lVar10 + -8);
          *(undefined8 *)(lVar10 + -8) = 0;
          plVar4[-1] = lVar12;
        }
        else {
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_011c76a8;
          *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar12;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          lVar12 = *(long *)(lVar10 + -8);
          *(undefined8 *)(lVar10 + -8) = 0;
          plVar4[-1] = lVar12;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar10 = lVar10 + -8;
        local_80 = local_80 + -1;
      } while (lVar14 != lVar10);
      lVar14 = *param_1;
      lVar10 = param_1[1];
    }
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    lVar12 = param_1[2];
    param_1[2] = local_70;
    local_88 = lVar14;
    local_80 = (long *)lVar14;
    local_78 = (long *)lVar10;
    local_70 = lVar12;
    FUN_011c76ec(&local_88);
  }
  else {
    lVar14 = *plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 != 0) {
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_011c76a8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar14;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    }
    lVar14 = *param_2;
    *plVar4 = lVar14;
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = iVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == -1) {
LAB_011c76ac:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    param_1[1] = (long)(plVar4 + 1);
  }
  return;
}


