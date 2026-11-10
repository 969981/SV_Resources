/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015250cc; name: FUN_015250cc
 */


void FUN_015250cc(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long local_60;
  undefined8 *puStack_58;
  long *local_50;
  long *local_48;
  undefined8 local_28;
  
  FUN_00c9e664(&local_50,param_1 + 0xe8);
  if (local_50 != (long *)0x0) {
    local_28 = 0;
    if (local_48 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = local_48[9];
    }
    local_60 = (long)&local_28 + 4;
    puStack_58 = &local_28;
    plVar1 = (long *)(lVar8 + 0x110);
    lVar7 = *plVar1;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar7) {
      lVar5 = nn::os::GetCurrentThread();
LAB_01525134:
      if (*plVar1 == 0) goto code_r0x0152513c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
            while (*plVar1 == 0) {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01525144;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01525144:
      bVar6 = false;
      goto LAB_01525148;
    }
    bVar6 = true;
LAB_01525148:
    FUN_015252c0(*(undefined8 *)(lVar8 + 0x128),*(undefined8 *)(lVar8 + 0x130),&local_60);
    FUN_015252c0(*(undefined8 *)(lVar8 + 0x160),*(undefined8 *)(lVar8 + 0x168),&local_60);
    if (!bVar6) {
      *(undefined8 *)(lVar8 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x118));
    }
    if (((local_28._4_4_ == (int)local_28) && (0 < (int)local_28)) &&
       ((*(undefined1 *)(param_1 + 0x11e) = 1, *(char *)(param_1 + 0x58) != -0x7e ||
        (*(char *)(param_1 + 0x59) != -0x7e)))) {
      uVar2 = *(undefined2 *)(param_1 + 0x58);
      plVar1 = (long *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x58) = 0x8282;
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
    }
  }
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x60))();
  }
  return;
code_r0x0152513c:
  cVar3 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar6) {
    *plVar1 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01525144;
  goto LAB_01525134;
}


