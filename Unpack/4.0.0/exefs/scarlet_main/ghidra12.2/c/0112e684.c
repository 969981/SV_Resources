/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0112e684; name: FUN_0112e684
 */


void FUN_0112e684(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined1 local_70;
  undefined1 local_6f;
  long *local_68;
  long *local_60;
  undefined1 auStack_58 [8];
  
  puVar4 = PTR_DAT_047d6c20;
  if (*(long *)(param_1 + 0x138) != 0) {
    if (((*PTR_DAT_047d6c20 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c20);
    }
    puVar6 = PTR_DAT_047d6c30;
    puVar5 = PTR_DAT_047d6c28;
    lVar8 = *(long *)PTR_DAT_047d6c28;
    *(long *)PTR_DAT_047d6c30 = lVar8;
    if ((*(byte *)(lVar8 + 0x629) & 1) == 0) {
      plVar1 = (long *)(param_1 + 0x148);
      lVar9 = *plVar1;
      lVar8 = nn::os::GetCurrentThread();
      if (lVar8 == lVar9) {
        *(ulong *)(param_1 + 0x168) = *(ulong *)(param_1 + 0x168) | 1L << (param_2 & 0x3f);
        FUN_0112e9a4(*(undefined8 *)(param_1 + 0x138),1);
        return;
      }
      lVar8 = nn::os::GetCurrentThread();
      while (*plVar1 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_0112e710;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar8;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_0112e710;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0112e710:
      if (*(long *)(param_1 + 0x138) != 0) {
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d6c20);
        }
        lVar8 = *(long *)puVar5;
        *(long *)puVar6 = lVar8;
        if ((*(byte *)(lVar8 + 0x629) & 1) == 0) {
          *(ulong *)(param_1 + 0x168) = *(ulong *)(param_1 + 0x168) | 1L << (param_2 & 0x3f);
          FUN_0112e9a4(*(undefined8 *)(param_1 + 0x138),1);
          goto LAB_0112e754;
        }
      }
      FUN_00c9e664(&local_68,param_1 + 0xe8);
      if (local_60 == (long *)0x0) {
        lVar8 = 0;
      }
      else {
        lVar8 = local_60[9];
      }
      local_70 = 1;
      local_6f = (char)param_2;
      FUN_0112efdc(auStack_58,lVar8,&local_70);
      if (local_60 != (long *)0x0) {
        plVar1 = local_60 + 5;
        do {
          lVar8 = *plVar1;
          iVar7 = (int)lVar8 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
        else if ((int)lVar8 == 0) goto LAB_0112e97c;
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x60))();
      }
LAB_0112e754:
      *(undefined8 *)(param_1 + 0x148) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
      return;
    }
  }
  FUN_00c9e664(&local_68,param_1 + 0xe8);
  if (local_60 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = local_60[9];
  }
  local_70 = 1;
  local_6f = (char)param_2;
  FUN_0112efdc(auStack_58,lVar8,&local_70);
  if (local_60 != (long *)0x0) {
    plVar1 = local_60 + 5;
    do {
      lVar8 = *plVar1;
      iVar7 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_0112e97c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x60))();
  }
  return;
}


