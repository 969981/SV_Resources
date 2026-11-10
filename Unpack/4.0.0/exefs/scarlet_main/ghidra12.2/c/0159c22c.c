/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159c22c; name: FUN_0159c22c
 */


undefined8 FUN_0159c22c(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long local_58;
  long lStack_50;
  long local_48;
  long *local_40;
  undefined8 local_38;
  
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x25) = 1;
    *(undefined4 *)(param_1 + 0x28) = 1;
    uVar11 = param_2[1];
    uVar1 = param_2[2];
    uVar10 = *param_2;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    *(undefined8 *)(param_1 + 0x38) = uVar11;
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    *(undefined4 *)(param_1 + 0x38) = 0;
    return 1;
  }
  if (0.0 < *(float *)(param_2 + 1)) {
    *(undefined1 *)(param_1 + 0x25) = 1;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 1);
    uVar11 = param_2[1];
    uVar1 = param_2[2];
    uVar10 = *param_2;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 0x38) = uVar11;
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    *(undefined4 *)(param_1 + 0x38) = 0;
    uVar8 = 2;
    goto LAB_0159c35c;
  }
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar6 == (long *)0x0) {
    if (((*PTR_DAT_047d8a70 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a70);
    }
    uVar11 = *(undefined8 *)PTR_DAT_047d8a78;
    *(undefined8 *)PTR_DAT_047d8a80 = uVar11;
    plVar13 = *(long **)(param_1 + 0x18);
    plVar6 = (long *)PTR_DAT_047d8b70;
    if (plVar13 != (long *)0x0) {
      plVar6 = plVar13 + 6;
    }
    local_58 = *plVar6;
    plVar6 = (long *)PTR_PTR_047d4508;
    if (plVar13 != (long *)0x0) {
      plVar6 = plVar13 + 7;
    }
    lStack_50 = *plVar6;
    if (plVar13 == (long *)0x0) {
      local_48 = 0;
    }
    else {
      local_48 = plVar13[8];
    }
    local_40 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    local_40 = plVar13;
    FUN_0159c680(&local_38,uVar11,&local_58);
    plVar6 = *(long **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (plVar6 != (long *)0x0) {
      plVar13 = plVar6 + 5;
      do {
        iVar5 = (int)*plVar13;
        iVar4 = iVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
joined_r0x0159c4a0:
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if (iVar5 == 0) {
LAB_0159c658:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
LAB_0159c308:
    uVar11 = local_38;
    local_38 = 0;
    *(undefined8 *)(param_1 + 0x58) = uVar11;
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
  }
  else if (((((char)plVar6[0xb] != '\0') || (*(char *)((long)plVar6 + 0x59) != '\0')) ||
           (*(char *)((long)plVar6 + 0x61) != '\0')) || ((char)plVar6[0xc] != '\0')) {
    if (plVar6[6] == param_1) {
      plVar6[6] = 0;
      plVar6 = *(long **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (plVar6 != (long *)0x0) goto LAB_0159c3e4;
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
LAB_0159c3e4:
      plVar13 = plVar6 + 5;
      do {
        lVar12 = *plVar13;
        iVar5 = (int)lVar12 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar12 == 0) goto LAB_0159c658;
    }
    if (((*PTR_DAT_047d8a70 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a70);
    }
    uVar11 = *(undefined8 *)PTR_DAT_047d8a78;
    *(undefined8 *)PTR_DAT_047d8a80 = uVar11;
    plVar13 = *(long **)(param_1 + 0x18);
    plVar6 = (long *)PTR_DAT_047d8b70;
    if (plVar13 != (long *)0x0) {
      plVar6 = plVar13 + 6;
    }
    local_58 = *plVar6;
    plVar6 = (long *)PTR_PTR_047d4508;
    if (plVar13 != (long *)0x0) {
      plVar6 = plVar13 + 7;
    }
    lStack_50 = *plVar6;
    if (plVar13 == (long *)0x0) {
      local_48 = 0;
    }
    else {
      local_48 = plVar13[8];
    }
    local_40 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    local_40 = plVar13;
    FUN_0159c680(&local_38,uVar11,&local_58);
    plVar6 = *(long **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (plVar6 != (long *)0x0) {
      plVar13 = plVar6 + 5;
      do {
        iVar5 = (int)*plVar13;
        iVar4 = iVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto joined_r0x0159c4a0;
    }
    goto LAB_0159c308;
  }
  *(long *)(*(long *)(param_1 + 0x58) + 0x30) = param_1;
  lVar12 = *(long *)(param_1 + 0x58);
  if (((lVar12 == 0) || (*(int *)(lVar12 + 0x4c) == 0)) || (*(int *)(lVar12 + 0x38) == 0)) {
    if (*(long *)(param_1 + 0x50) == 0) {
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      lVar9 = *(long *)PTR_DAT_047d8288;
      *(long *)PTR_DAT_047d8290 = lVar9;
      if (*(long *)(lVar9 + 0x48) != 0) goto LAB_0159c33c;
      uVar11 = 0xffffffffffffffff;
    }
    else {
LAB_0159c33c:
      uVar11 = FUN_00cf8198();
    }
    uVar7 = FUN_0159d474(lVar12,uVar11);
  }
  else {
    uVar7 = FUN_0159cb84(*(undefined4 *)param_2,lVar12,*(undefined4 *)(param_2 + 2));
  }
  if ((uVar7 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return 0;
  }
  uVar8 = 3;
  *(undefined1 *)(param_1 + 0x25) = 1;
LAB_0159c35c:
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  return 1;
}


