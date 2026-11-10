/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e7ddc; name: FUN_014e7ddc
 */


void FUN_014e7ddc(long *param_1,long param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined4 local_38 [2];
  
  if (*(short *)(param_2 + (ulong)param_3 * 0x22 + 0x40) == 0) {
    if (param_3 != 0x20) {
      if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8ac0);
      }
      uVar6 = *(undefined8 *)PTR_DAT_047d8ac8;
      local_48 = 7;
      local_40 = (long *)0x0;
      local_58 = (long *)0x49b5b2e8a6b4fb19;
      pcStack_50 = "boxname";
      *(undefined8 *)PTR_DAT_047d8ad0 = uVar6;
      FUN_0151370c(param_1,uVar6,&local_58,param_3,0);
      if (local_40 == (long *)0x0) {
        return;
      }
      pcVar8 = *(code **)(*local_40 + 0x20);
LAB_014e7e98:
      (*pcVar8)();
      return;
    }
    local_38[0] = 0x11;
    lVar7 = FUN_00ea5b00(&local_58,*(undefined8 *)(param_2 + 8),local_38);
    *param_1 = lVar7;
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x28);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == -1) goto LAB_014e7fe8;
      if (*param_1 != 0) {
        FUN_00eeb8d0(&local_58);
        FUN_0105453c(local_58,*param_1);
        if (local_58 == (long *)0x0) {
          return;
        }
        plVar2 = local_58 + 5;
        do {
          lVar7 = *plVar2;
          iVar5 = (int)lVar7 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 != 0) {
          if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
          return;
        }
        pcVar8 = *(code **)(*local_58 + 0x10);
        goto LAB_014e7e98;
      }
    }
  }
  local_58 = (long *)CONCAT44(local_58._4_4_,0x11);
  lVar7 = FUN_00ea5b00(local_38,*(undefined8 *)(param_2 + 8),&local_58);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
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
LAB_014e7fe8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  uVar6 = FUN_014e8e9c(param_2,param_3);
  FUN_019202d0(lVar7,uVar6);
  *param_1 = lVar7;
  return;
}


