/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0109c094; name: FUN_0109c094
 */


undefined8 FUN_0109c094(undefined4 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long *local_60;
  undefined4 local_58;
  undefined8 local_48;
  
  if (*(long *)(param_2 + 0x1d8) == 0) {
    local_48 = *(undefined8 *)(param_2 + 8);
    FUN_0109bc40(&local_88,local_48,&local_48);
    lVar6 = local_88;
    local_88 = 0;
    lVar8 = *(long *)(param_2 + 0x1d8);
    *(long *)(param_2 + 0x1d8) = lVar6;
    if (lVar8 == 0) {
      *(long *)(param_2 + 0x1e8) = local_78;
      *(undefined8 *)(param_2 + 0x1f0) = local_70;
      *(undefined8 *)(param_2 + 0x1e0) = local_80;
    }
    else {
      FUN_01e33098(param_2 + 0x1e0);
      lVar6 = local_88;
      *(undefined8 *)(param_2 + 0x1e0) = local_80;
      *(long *)(param_2 + 0x1e8) = local_78;
      *(undefined8 *)(param_2 + 0x1f0) = local_70;
      local_88 = 0;
      if (lVar6 != 0) {
        FUN_01e33098(&local_80);
      }
    }
  }
  local_88 = -0xfffffffe;
  uVar5 = FUN_0103b2e0(param_2 + 0xe8,&local_88);
  plVar9 = (long *)(param_2 + 0x48);
  lVar8 = *plVar9;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar8) {
    plVar9 = (long *)0x0;
    bVar7 = true;
LAB_0109c110:
    local_70 = *param_3;
    local_68 = param_3[1];
    local_60 = (long *)param_3[2];
    local_88 = param_2;
    local_80 = uVar5;
    local_78 = param_2;
    if (local_60 != (long *)0x0) {
      plVar1 = local_60 + 5;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar2) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    local_58 = param_1;
    FUN_01e33454(param_2 + 0x60,&local_88);
    if (local_60 != (long *)0x0) {
      plVar1 = local_60 + 5;
      do {
        lVar6 = *plVar1;
        iVar4 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar2) {
          *(int *)plVar1 = iVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (!bVar7) {
      *plVar9 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
    }
    return uVar5;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar7) {
      *plVar9 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0109c10c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar7) {
            *plVar9 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0109c10c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar7) {
      *plVar9 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0109c10c:
  bVar7 = false;
  goto LAB_0109c110;
}


