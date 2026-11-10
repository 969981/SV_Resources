/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e974c; name: FUN_014e974c
 */


void FUN_014e974c(long *param_1,int *param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long *local_38;
  
  plVar1 = param_1 + 0x1e;
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_014e9790;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1f));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1f));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_014e9790;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_014e9790:
  local_38 = param_1;
  FUN_01327aa8(param_1,&local_38);
  if ((param_4 & 1) != 0) {
    FUN_014e9f44(param_1);
  }
  lVar8 = param_1[0x95];
  uVar4 = *(undefined4 *)(lVar8 + 8);
  if (*(int *)(lVar8 + 0x1c) == 0) {
    iVar10 = *param_2 + *(int *)(lVar8 + 0xc) * param_2[1];
  }
  else {
    iVar10 = param_2[1] + *(int *)(lVar8 + 0x10) * *param_2;
  }
  *(int *)(lVar8 + 8) = iVar10;
  if (param_1[0x21] == 0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_02152218(&local_38);
    plVar1 = local_38;
    if (local_38 == (long *)0x0) goto LAB_014e97d4;
    lVar8 = local_38[6];
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar9;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    bVar7 = FUN_02152368(param_1[0x95],*(undefined4 *)(param_1[0x95] + 8));
    *(byte *)((long)plVar1 + 0x271) = bVar7 & 1;
    lVar8 = plVar1[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar1 + 0x50))(plVar1);
    }
    else if (sVar3 == 0) goto LAB_014e990c;
    if (local_38 != (long *)0x0) {
      lVar8 = local_38[6];
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar3 == 0) {
LAB_014e990c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
LAB_014e97d4:
  if ((param_3 & 1) != 0) {
    FUN_014e99dc(param_1,iVar10,uVar4,0,0);
  }
  param_1[0x1e] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1f));
  return;
}


