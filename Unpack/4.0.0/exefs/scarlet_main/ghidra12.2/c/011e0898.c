/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011e0898; name: FUN_011e0898
 */


void FUN_011e0898(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  long lVar10;
  undefined1 local_70;
  undefined1 local_6f;
  long *local_68;
  long *local_60;
  undefined1 auStack_58 [8];
  
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
      lVar10 = *plVar1;
      lVar7 = nn::os::GetCurrentThread();
      if (lVar7 == lVar10) {
        bVar9 = true;
LAB_011e094c:
        uVar8 = *(ulong *)(param_1 + 0x168) & (1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
        *(ulong *)(param_1 + 0x168) = uVar8;
        if ((uVar8 & 3) == 0) {
          FUN_0112e9a4(*(undefined8 *)(param_1 + 0x138),0);
        }
        if (bVar9) {
          return;
        }
LAB_011e0978:
        *(undefined8 *)(param_1 + 0x148) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
        return;
      }
      lVar7 = nn::os::GetCurrentThread();
LAB_011e0914:
      if (*plVar1 == 0) goto code_r0x011e091c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar9) {
                *plVar1 = lVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_011e0924;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_011e0924:
      if (*(long *)(param_1 + 0x138) == 0) {
LAB_011e0a60:
        FUN_00c9e664(&local_68,param_1 + 0xe8);
        if (local_60 == (long *)0x0) {
          lVar7 = 0;
        }
        else {
          lVar7 = local_60[9];
        }
        local_70 = 0;
        local_6f = (char)param_2;
        FUN_0112efdc(auStack_58,lVar7,&local_70);
        if (local_60 != (long *)0x0) {
          plVar1 = local_60 + 5;
          do {
            lVar7 = *plVar1;
            iVar6 = (int)lVar7 + -1;
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *(int *)plVar1 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_60 + 0x10))();
          }
          else if ((int)lVar7 == 0) goto LAB_011e0b68;
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x60))();
        }
        goto LAB_011e0978;
      }
      if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c20);
      }
      lVar7 = *(long *)puVar4;
      *(long *)puVar5 = lVar7;
      if ((*(byte *)(lVar7 + 0x629) & 1) != 0) goto LAB_011e0a60;
      bVar9 = false;
      goto LAB_011e094c;
    }
  }
  FUN_00c9e664(&local_68,param_1 + 0xe8);
  if (local_60 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = local_60[9];
  }
  local_70 = 0;
  local_6f = (char)param_2;
  FUN_0112efdc(auStack_58,lVar7,&local_70);
  if (local_60 != (long *)0x0) {
    plVar1 = local_60 + 5;
    do {
      lVar7 = *plVar1;
      iVar6 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_011e0b68:
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
code_r0x011e091c:
  cVar2 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar9) {
    *plVar1 = lVar7;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_011e0924;
  goto LAB_011e0914;
}


