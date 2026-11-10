/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143cea8; name: FUN_0143cea8
 */


void FUN_0143cea8(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [96];
  long *local_50;
  long *local_48;
  
  FUN_00c9e664(&local_50,param_1 + 0x1d);
  if (local_48 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = local_48[9];
  }
  plVar7 = (long *)(lVar10 + 0x110);
  lVar8 = *plVar7;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar8) {
    lVar6 = nn::os::GetCurrentThread();
LAB_0143cef8:
    if (*plVar7 == 0) goto code_r0x0143cf00;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
          while (*plVar7 == 0) {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar9) {
              *plVar7 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0143cf08;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *plVar7 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0143cf08:
    bVar9 = false;
    goto LAB_0143cf0c;
  }
  bVar9 = true;
LAB_0143cf0c:
  plVar7 = (long *)FUN_0143cdd0(*(undefined8 *)(lVar10 + 0x128),*(undefined8 *)(lVar10 + 0x130));
  if ((*(long **)(lVar10 + 0x130) == plVar7) || (*plVar7 == 0)) {
    plVar7 = (long *)FUN_0143cdd0(*(undefined8 *)(lVar10 + 0x160),*(undefined8 *)(lVar10 + 0x168));
    if (*(long **)(lVar10 + 0x168) == plVar7) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (*plVar7 != 0) {
        lVar6 = *plVar7 + -0x20;
      }
    }
  }
  else {
    lVar6 = *plVar7 + -0x20;
  }
  if (!bVar9) {
    *(undefined8 *)(lVar10 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x118));
  }
  if (local_48 != (long *)0x0) {
    plVar7 = local_48 + 5;
    do {
      lVar10 = *plVar7;
      iVar4 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *(int *)plVar7 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_0143d0e8;
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x60))();
  }
  if (lVar6 != 0) {
    lVar10 = *(long *)(lVar6 + 0x120);
    if (lVar10 != 0) {
      piVar1 = (int *)(lVar10 + 0x28);
      do {
        iVar4 = *piVar1;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar4 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar7 = (long *)param_1[0x24];
    param_1[0x24] = lVar10;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 5;
      do {
        lVar10 = *plVar2;
        iVar4 = (int)lVar10 + -1;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *(int *)plVar2 = iVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar10 == 0) {
LAB_0143d0e8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    (**(code **)(*param_1 + 0x130))(param_1);
    local_d0 = &LAB_02bda804;
    local_c8 = FUN_02bda808;
    local_c0 = &LAB_02bda80c;
    puStack_b8 = &LAB_02bda810;
    FUN_014911dc(lVar6,&local_d0);
    pcVar5 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar5)(auStack_b0);
    }
  }
  return;
code_r0x0143cf00:
  cVar3 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar9) {
    *plVar7 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0143cf08;
  goto LAB_0143cef8;
}


