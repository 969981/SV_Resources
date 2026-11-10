/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01293f20; name: FUN_01293f20
 */


void FUN_01293f20(long param_1,byte param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  byte local_78 [8];
  long *local_70;
  long *local_68;
  undefined1 auStack_48 [8];
  
  *(undefined1 *)(param_1 + 0x160) = 1;
  bVar2 = param_2 & 1;
  *(byte *)(param_1 + 0x131) = bVar2;
  puVar5 = PTR_DAT_047d6c20;
  if (*(long *)(param_1 + 0x138) != 0) {
    if (((*PTR_DAT_047d6c20 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c20);
    }
    puVar7 = PTR_DAT_047d6c30;
    puVar6 = PTR_DAT_047d6c28;
    lVar9 = *(long *)PTR_DAT_047d6c28;
    *(long *)PTR_DAT_047d6c30 = lVar9;
    if ((*(byte *)(lVar9 + 0x629) & 1) == 0) {
      plVar1 = (long *)(param_1 + 0x148);
      lVar10 = *plVar1;
      lVar9 = nn::os::GetCurrentThread();
      if (lVar9 == lVar10) {
        FUN_01294224(*(undefined8 *)(param_1 + 0x138),param_2 & 1);
        return;
      }
      lVar9 = nn::os::GetCurrentThread();
      while (*plVar1 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_01293fc0;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
            while (*plVar1 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar9;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01293fc0;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01293fc0:
      if (*(long *)(param_1 + 0x138) != 0) {
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c20);
        }
        lVar9 = *(long *)puVar6;
        *(long *)puVar7 = lVar9;
        if ((*(byte *)(lVar9 + 0x629) & 1) == 0) {
          FUN_01294224(*(undefined8 *)(param_1 + 0x138),param_2 & 1);
          goto LAB_01293ff0;
        }
      }
      FUN_00c9e664(&local_70,param_1 + 0xe8);
      if (local_68 == (long *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = local_68[9];
      }
      local_78[0] = bVar2;
      FUN_01294420(auStack_48,lVar9,local_78);
      if (local_68 != (long *)0x0) {
        plVar1 = local_68 + 5;
        do {
          lVar9 = *plVar1;
          iVar8 = (int)lVar9 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_012941fc;
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x60))();
      }
LAB_01293ff0:
      *(undefined8 *)(param_1 + 0x148) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
      return;
    }
  }
  FUN_00c9e664(&local_70,param_1 + 0xe8);
  if (local_68 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = local_68[9];
  }
  local_78[0] = bVar2;
  FUN_01294420(auStack_48,lVar9,local_78);
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 5;
    do {
      lVar9 = *plVar1;
      iVar8 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
LAB_012941fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x60))();
  }
  return;
}


