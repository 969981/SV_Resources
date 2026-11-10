/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e2ec6c; name: FUN_01e2ec6c
 */


void FUN_01e2ec6c(long param_1)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  bool bVar9;
  long *local_50;
  long *local_48;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    if ((*(char *)(param_1 + 0x58) != -0x7e) || (*(char *)(param_1 + 0x59) != -0x7e)) {
      uVar1 = *(undefined2 *)(param_1 + 0x58);
      plVar5 = (long *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x58) = 0x8282;
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(param_1 + 0x48),plVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x01e2eee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x20))(plVar5,uVar1);
      return;
    }
  }
  else {
    plVar5 = (long *)(param_1 + 0x148);
    lVar8 = *plVar5;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar8) {
      lVar4 = nn::os::GetCurrentThread();
LAB_01e2ecac:
      if (*plVar5 == 0) goto code_r0x01e2ecb4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
      do {
        if (*plVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x150));
            while (*plVar5 == 0) {
              cVar7 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar9) {
                *plVar5 = lVar4;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_01e2ecbc;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar9) {
          *plVar5 = lVar4;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_01e2ecbc:
      if (*(long *)(param_1 + 0x138) != 0) {
        bVar9 = false;
        goto LAB_01e2ecc8;
      }
      goto LAB_01e2edf0;
    }
    bVar9 = true;
LAB_01e2ecc8:
    FUN_00c9e664(&local_50,param_1 + 0xe8);
    if (local_48 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = local_48[9];
    }
    plVar5 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x28))((undefined8 *)(lVar4 + 0x28));
    if (((*PTR_DAT_047d6520 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar3 != 0)) {
      uVar6 = FUN_0151c130();
      *(undefined8 *)PTR_DAT_047d6528 = uVar6;
      __cxa_guard_release(PTR_DAT_047d6520);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_047d6528) goto LAB_01e2ed28;
    }
    lVar4 = 0;
LAB_01e2ed28:
    if (local_48 != (long *)0x0) {
      plVar5 = local_48 + 5;
      do {
        lVar8 = *plVar5;
        iVar3 = (int)lVar8 + -1;
        cVar7 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar3;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x60))();
    }
    FUN_00cebc38(&local_50,lVar4);
    if (local_50 != (long *)0x0) {
      lVar4 = local_50[0x89];
      cVar7 = *(char *)(*(long *)(param_1 + 0x138) + 0x140);
      if (((char)lVar4 == '\x03') && (cVar7 == '\0')) {
        *(undefined1 *)(*(long *)(param_1 + 0x138) + 0x140) = 1;
        cVar7 = *(char *)(*(long *)(param_1 + 0x138) + 0x140);
      }
      if ((((char)lVar4 == '\x03') && (cVar7 != '\0')) &&
         ((*(char *)(param_1 + 0x58) != -0x7e || (*(char *)(param_1 + 0x59) != -0x7e)))) {
        uVar1 = *(undefined2 *)(param_1 + 0x58);
        plVar5 = (long *)(param_1 + 0x38);
        *(undefined2 *)(param_1 + 0x58) = 0x8282;
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_00c6a584(*(long *)(param_1 + 0x48),plVar5);
        }
        (**(code **)(*plVar5 + 0x20))(plVar5,uVar1);
      }
      (**(code **)(*local_50 + 0x60))(local_50);
    }
    if (!bVar9) {
LAB_01e2edf0:
      *(undefined8 *)(param_1 + 0x148) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x150));
    }
  }
  return;
code_r0x01e2ecb4:
  cVar7 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar9) {
    *plVar5 = lVar4;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_01e2ecbc;
  goto LAB_01e2ecac;
}


