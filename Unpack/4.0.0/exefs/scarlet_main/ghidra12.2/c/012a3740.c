/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a3740; name: FUN_012a3740
 */


void FUN_012a3740(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 local_68 [2];
  long *local_60;
  long *local_58;
  undefined1 auStack_48 [8];
  
  *(undefined1 *)(param_2 + 0x161) = 1;
  uVar11 = (undefined4)param_1;
  *(undefined4 *)(param_2 + 0x134) = uVar11;
  pbVar6 = PTR_DAT_047d6c20;
  if (*(long *)(param_2 + 0x138) != 0) {
    if (((*PTR_DAT_047d6c20 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c20);
    }
    puVar8 = (undefined8 *)PTR_DAT_047d6c30;
    puVar7 = (undefined8 *)PTR_DAT_047d6c28;
    lVar5 = *(long *)PTR_DAT_047d6c28;
    *(long *)PTR_DAT_047d6c30 = lVar5;
    if ((*(byte *)(lVar5 + 0x629) & 1) == 0) {
      plVar1 = (long *)(param_2 + 0x148);
      lVar10 = *plVar1;
      lVar5 = nn::os::GetCurrentThread();
      if (lVar5 == lVar10) {
        bVar9 = true;
LAB_012a37c4:
        lVar5 = *(long *)(param_2 + 0x138);
        if (*(long *)(lVar5 + 0x60) != -1) {
          if (((*pbVar6 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar3 != 0)) {
            FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d6c20);
          }
          uVar4 = *puVar7;
          *puVar8 = uVar4;
          FUN_012a3ab8(param_1,uVar4,*(undefined8 *)(lVar5 + 0x60));
        }
        if (bVar9) {
          return;
        }
LAB_012a37f4:
        *(undefined8 *)(param_2 + 0x148) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x150));
        return;
      }
      lVar5 = nn::os::GetCurrentThread();
LAB_012a3928:
      if (*plVar1 == 0) goto code_r0x012a3930;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x150));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x150));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar9) {
                *plVar1 = lVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_012a3938;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_012a3938:
      if (*(long *)(param_2 + 0x138) == 0) {
LAB_012a39d8:
        FUN_00c9e664(&local_60,param_2 + 0xe8);
        if (local_58 == (long *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = local_58[9];
        }
        local_68[0] = uVar11;
        FUN_012a3f40(auStack_48,lVar5,local_68);
        if (local_58 != (long *)0x0) {
          plVar1 = local_58 + 5;
          do {
            lVar5 = *plVar1;
            iVar3 = (int)lVar5 + -1;
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *(int *)plVar1 = iVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*local_58 + 0x10))();
          }
          else if ((int)lVar5 == 0) goto LAB_012a3a3c;
        }
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x60))();
        }
        goto LAB_012a37f4;
      }
      if (((*PTR_DAT_047d6c20 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c20);
      }
      lVar5 = *(long *)PTR_DAT_047d6c28;
      *(long *)PTR_DAT_047d6c30 = lVar5;
      if ((*(byte *)(lVar5 + 0x629) & 1) != 0) goto LAB_012a39d8;
      bVar9 = false;
      pbVar6 = PTR_DAT_047d6c20;
      puVar7 = (undefined8 *)PTR_DAT_047d6c28;
      puVar8 = (undefined8 *)PTR_DAT_047d6c30;
      goto LAB_012a37c4;
    }
  }
  FUN_00c9e664(&local_60,param_2 + 0xe8);
  if (local_58 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = local_58[9];
  }
  local_68[0] = uVar11;
  FUN_012a3f40(auStack_48,lVar5,local_68);
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 5;
    do {
      lVar5 = *plVar1;
      iVar3 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = iVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
LAB_012a3a3c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x60))();
  }
  return;
code_r0x012a3930:
  cVar2 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar9) {
    *plVar1 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_012a3938;
  goto LAB_012a3928;
}


