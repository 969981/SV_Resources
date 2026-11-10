/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016bb3b8; name: FUN_016bb3b8
 */


void FUN_016bb3b8(long *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *plStack_48;
  
  plVar10 = (long *)param_1[1];
  plVar1 = param_1 + 3;
  if (plVar10 == (long *)param_1[2]) {
    uVar9 = param_1[4];
    lVar11 = (long)plVar10 - *param_1 >> 3;
    uVar6 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1;
    uVar8 = lVar7 >> 2;
    local_50 = (long *)0x0;
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if (uVar9 >> 1 <= (ulong)(lVar7 >> 3)) {
      uVar6 = uVar9;
    }
    plStack_48 = plVar1;
    if (uVar6 == 0) {
      local_68 = (long *)0x0;
    }
    else {
      local_68 = (long *)(**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar6 << 3,8);
      if (local_68 == (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))((long *)*plVar1);
      }
    }
    plVar10 = local_68 + lVar11;
    local_50 = local_68 + uVar6;
    lVar11 = *plVar1;
    local_60 = plVar10;
    local_58 = plVar10;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_016bb704:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar11;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    }
    lVar11 = *param_2;
    *plVar10 = lVar11;
    if (lVar11 != 0) {
      piVar2 = (int *)(lVar11 + 0x28);
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
LAB_016bb708:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    local_58 = local_58 + 1;
    FUN_016bb7d8(plVar1,*param_1,param_1[1],&local_60);
    local_68 = (long *)*param_1;
    lVar7 = param_1[1];
    *param_1 = (long)local_60;
    param_1[1] = (long)local_58;
    lVar11 = param_1[2];
    param_1[2] = (long)local_50;
    local_60 = local_68;
    local_58 = (long *)lVar7;
    local_50 = (long *)lVar11;
    FUN_016bb738(&local_68);
    plVar1 = local_68;
    if (local_68 != (long *)0x0) {
      lVar11 = (long)local_50 - (long)local_68;
      plVar10 = (long *)*plStack_48;
      uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar6 & 1) != 0) && (lVar7 = FUN_00c4e600(), 0 < *(int *)(lVar7 + 0x12c8))) {
        FUN_00c48fe8(plVar10,plVar1,lVar11,8);
        return;
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar1,lVar11,8);
    }
  }
  else {
    lVar11 = *plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_016bb704;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar11;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    }
    lVar11 = *param_2;
    *plVar10 = lVar11;
    if (lVar11 != 0) {
      piVar2 = (int *)(lVar11 + 0x28);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == -1) goto LAB_016bb708;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    param_1[1] = (long)(plVar10 + 1);
  }
  return;
}


