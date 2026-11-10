/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e4d50; name: FUN_029e4d50
 */


void FUN_029e4d50(long *param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  long *local_50;
  long *local_48;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
    return;
  }
  if (*(short *)(lVar8 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  sVar10 = *(short *)(lVar8 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar10) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_029e4dbc;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_029e4dbc:
      bVar5 = false;
    }
    if (bVar5) {
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 == 0) {
        return;
      }
      plVar11 = (long *)(lVar8 + -0x28);
      FUN_00c9e664(&local_50,lVar8 + 0xc0);
      if (((local_50 == (long *)0x0) || (lVar9 = *(long *)(lVar8 + 0xf8), lVar9 == 0)) ||
         (*(short *)(lVar9 + 0x1a) == 0)) goto LAB_029e4df8;
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar10 = *(short *)(lVar9 + 0x1a);
      goto LAB_029e4ebc;
    }
    sVar10 = sVar3;
    if (sVar3 == 0) {
      return;
    }
  } while( true );
LAB_029e4f1c:
  if (*plVar2 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x208));
    do {
      if (*plVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x208));
          while (*plVar2 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_029e4f2c;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_029e4f2c:
    if ((*(byte *)(lVar8 + 0x1f9) & 1) == 0) {
      FUN_029de608(plVar11);
    }
    else {
      *(undefined1 *)(lVar8 + 0x1f8) = 0;
    }
    *(undefined8 *)(lVar8 + 0x200) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x208));
LAB_029e4f50:
    (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))((long *)(lVar9 + -0x28));
    goto LAB_029e4e00;
  }
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar5) {
    *plVar2 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_029e4f2c;
  goto LAB_029e4f1c;
  while (sVar10 = sVar3, sVar3 != 0) {
LAB_029e4ebc:
    sVar3 = *psVar1;
    if (sVar3 == sVar10) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_029e4ee0;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_029e4ee0:
      bVar5 = false;
    }
    if (bVar5) {
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x108) == 3) {
          plVar2 = (long *)(lVar8 + 0x200);
          lVar7 = nn::os::GetCurrentThread();
          goto LAB_029e4f1c;
        }
        *(undefined1 *)(lVar8 + 0x1f8) = 0;
        goto LAB_029e4f50;
      }
      break;
    }
  }
LAB_029e4df8:
  *(undefined1 *)(lVar8 + 0x1f8) = 0;
LAB_029e4e00:
  if (local_48 != (long *)0x0) {
    plVar2 = local_48 + 5;
    do {
      lVar9 = *plVar2;
      iVar6 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
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
  lVar8 = *(long *)(lVar8 + 0x70);
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar10 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar10 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar11 + 0x50))(plVar11);
  }
  else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


