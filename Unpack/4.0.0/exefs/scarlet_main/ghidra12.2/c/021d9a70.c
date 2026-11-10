/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d9a70; name: FUN_021d9a70
 */


long FUN_021d9a70(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_2 == 0) {
    lVar7 = (**(code **)(*(long *)param_1[4] + 0x108))((long *)param_1[4],0,param_3);
    if (lVar7 != 0) {
      plVar1 = param_1 + 8;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar6 = 0;
      goto LAB_021d9afc;
    }
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x38))(param_1);
    lVar7 = (**(code **)(*(long *)param_1[4] + 0x108))((long *)param_1[4],param_2,param_3);
    if (lVar7 != 0) {
LAB_021d9afc:
      if ((param_3 < uVar6) || ((char)param_1[10] == '\0')) {
        lVar8 = (**(code **)(*param_1 + 0x38))(param_1,lVar7);
      }
      else {
        lVar8 = FUN_00fe5860(param_3,8);
      }
      plVar1 = param_1 + 7;
      do {
        lVar9 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar9 + (lVar8 - uVar6);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puVar2 = (ulong *)(param_1 + 9);
      uVar11 = param_1[9];
      uVar6 = (lVar8 - uVar6) + lVar9;
      uVar10 = *puVar2;
      uVar3 = uVar11;
      if (uVar11 <= uVar6) {
        uVar3 = uVar6;
      }
      if (uVar10 == uVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          return lVar7;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        uVar11 = *puVar2;
        uVar3 = uVar10;
        if (uVar10 <= uVar6) {
          uVar3 = uVar6;
        }
        if (uVar11 == uVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_021d9bb0;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_021d9bb0:
          bVar5 = false;
        }
        uVar10 = uVar11;
        if (bVar5) {
          return lVar7;
        }
      } while( true );
    }
    plVar1 = param_1 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar10 = param_1[7];
    puVar2 = (ulong *)(param_1 + 7);
    uVar3 = 0;
    if (uVar6 <= uVar10) {
      uVar3 = uVar10 - uVar6;
    }
    uVar11 = *puVar2;
    if (uVar11 == uVar10) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_021d9c44;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      uVar3 = 0;
      if (uVar6 <= uVar11) {
        uVar3 = uVar11 - uVar6;
      }
      uVar10 = *puVar2;
      if (uVar10 == uVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_021d9c38;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_021d9c38:
        bVar5 = false;
      }
      uVar11 = uVar10;
    } while (!bVar5);
  }
LAB_021d9c44:
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("0","OnAllocationFailed",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\mem/branch_resource.h"
               ,0x147,"Allocation failed. request size = %lu",param_3);
  }
  return 0;
}


