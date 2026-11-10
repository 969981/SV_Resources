/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e2f634; name: FUN_01e2f634
 */


void FUN_01e2f634(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined1 auStack_58 [8];
  
  *(undefined1 *)(param_1 + 0x162) = 1;
  puVar3 = PTR_DAT_047d6c20;
  if (*(long *)(param_1 + 0x138) != 0) {
    if (((*PTR_DAT_047d6c20 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c20);
    }
    puVar5 = PTR_DAT_047d6c30;
    puVar4 = PTR_DAT_047d6c28;
    lVar7 = *(long *)PTR_DAT_047d6c28;
    *(long *)PTR_DAT_047d6c30 = lVar7;
    if ((*(byte *)(lVar7 + 0x629) & 1) == 0) {
      plVar1 = (long *)(param_1 + 0x148);
      lVar8 = *plVar1;
      lVar7 = nn::os::GetCurrentThread();
      if (lVar7 == lVar8) {
        bVar10 = true;
LAB_01e2f870:
        local_a8 = *param_2;
        uStack_a0 = param_2[1];
        uVar9 = *(undefined8 *)(param_1 + 0x138);
        local_98 = param_2[2];
        local_90 = (long *)param_2[3];
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x18))();
        }
        FUN_01e2fd70(uVar9,&local_a8);
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        if (bVar10) {
          return;
        }
LAB_01e2f858:
        *(undefined8 *)(param_1 + 0x148) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
        return;
      }
      lVar7 = nn::os::GetCurrentThread();
LAB_01e2f6b8:
      if (*plVar1 == 0) goto code_r0x01e2f6c0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar10) {
                *plVar1 = lVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01e2f6c8;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01e2f6c8:
      if (*(long *)(param_1 + 0x138) == 0) {
LAB_01e2f7b4:
        FUN_00c9e664(&local_68,param_1 + 0xe8);
        if (local_60 == (long *)0x0) {
          lVar7 = 0;
        }
        else {
          lVar7 = local_60[9];
        }
        local_88 = *param_2;
        uStack_80 = param_2[1];
        local_78 = param_2[2];
        plVar1 = (long *)param_2[3];
        local_70 = plVar1;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
        FUN_01e2fa20(auStack_58,lVar7,&local_88);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1);
        }
        if (local_60 != (long *)0x0) {
          plVar1 = local_60 + 5;
          do {
            lVar7 = *plVar1;
            iVar6 = (int)lVar7 + -1;
            cVar2 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *(int *)plVar1 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_60 + 0x10))();
          }
          else if ((int)lVar7 == 0) goto LAB_01e2f9f8;
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x60))();
        }
        goto LAB_01e2f858;
      }
      if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c20);
      }
      lVar7 = *(long *)puVar4;
      *(long *)puVar5 = lVar7;
      if ((*(byte *)(lVar7 + 0x629) & 1) != 0) goto LAB_01e2f7b4;
      bVar10 = false;
      goto LAB_01e2f870;
    }
  }
  FUN_00c9e664(&local_68,param_1 + 0xe8);
  if (local_60 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = local_60[9];
  }
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  plVar1 = (long *)param_2[3];
  local_70 = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  FUN_01e2fa20(auStack_58,lVar7,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (local_60 != (long *)0x0) {
    plVar1 = local_60 + 5;
    do {
      lVar7 = *plVar1;
      iVar6 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_01e2f9f8:
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
code_r0x01e2f6c0:
  cVar2 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar10) {
    *plVar1 = lVar7;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01e2f6c8;
  goto LAB_01e2f6b8;
}


