/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bd7fe0; name: FUN_02bd7fe0
 */


undefined8 FUN_02bd7fe0(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 local_50;
  undefined7 uStack_4f;
  long *local_28;
  
  if (*(char *)*param_1 == '\0') {
    uVar8 = (ulong)*(uint *)(param_2 + 0x18);
    if (0 < (int)*(uint *)(param_2 + 0x18)) {
      pcVar7 = (char *)(*(long *)(param_2 + 0x10) + uVar8);
      iVar4 = 0;
      do {
        uVar3 = (int)uVar8 - 1;
        uVar8 = (ulong)uVar3;
        if (*(char *)(*(long *)(param_2 + 0x10) + uVar8) == ':') {
          if ((iVar4 == 0) || (local_28 = (long *)0x0, *pcVar7 == '\0')) {
            local_28 = (long *)0x0;
            plVar6 = (long *)FUN_00d44228();
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x18))(plVar6);
            }
          }
          else {
            if (((*PTR_DAT_047d4240 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar4 != 0)) {
              FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d4240);
            }
            uVar5 = *(undefined8 *)PTR_DAT_047d4248;
            *(undefined8 *)PTR_DAT_047d4250 = uVar5;
            FUN_00cf9884(&local_50,uVar5,pcVar7);
            plVar6 = local_28;
            local_28 = (long *)0x0;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))();
            }
            plVar6 = (long *)CONCAT71(uStack_4f,local_50);
          }
          local_28 = plVar6;
          goto LAB_02bd8114;
        }
        pcVar7 = pcVar7 + -1;
        iVar4 = iVar4 + 1;
      } while (0 < (int)uVar3);
    }
    FUN_00daf940(&local_28,param_2 + 8);
LAB_02bd8114:
    plVar6 = (long *)PTR_DAT_047d8b70;
    if (local_28 != (long *)0x0) {
      plVar6 = local_28 + 6;
    }
    lVar9 = *plVar6;
    lVar10 = *(long *)param_1[1];
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))(local_28);
    }
    if (lVar9 != lVar10) {
      return 1;
    }
  }
  else if (*(long *)(param_2 + 8) != *(long *)param_1[1]) {
    return 1;
  }
  FUN_00c5ecb4(&local_28,*(undefined8 *)param_1[2],param_2 + 0x50);
  local_50 = 0;
  FUN_010e88e0(local_28,param_1[3],param_1[4],&local_50);
  if (local_28 != (long *)0x0) {
    plVar6 = local_28 + 5;
    do {
      lVar9 = *plVar6;
      iVar4 = (int)lVar9 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return 0;
}


