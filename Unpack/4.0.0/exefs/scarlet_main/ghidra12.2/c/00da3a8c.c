/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da3a8c; name: FUN_00da3a8c
 */


void FUN_00da3a8c(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long local_38;
  
  plVar5 = *(long **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar6 = *param_2;
  *param_2 = 0;
  *(long *)(param_1 + 0x1b0) = lVar6;
  *(ulong *)(lVar6 + 0x1b8) = *(ulong *)(lVar6 + 0x1b8) & 0xfffffffffffffffb;
  local_38 = *(long *)(param_1 + 0x1b0);
  plVar5 = *(long **)(param_1 + 0xf8);
  plVar7 = *(long **)(param_1 + 0x100);
  if ((plVar5 != plVar7) && (*plVar5 != local_38)) {
    do {
      plVar5 = plVar5 + 1;
      if (plVar7 == plVar5) {
        plVar5 = plVar7;
        goto LAB_00da3b3c;
      }
    } while (*plVar5 != local_38);
  }
LAB_00da3b3c:
  if (plVar7 == plVar5) {
    FUN_00e22354((long *)(param_1 + 0xf8),&local_38);
    FUN_00e22b60(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100));
  }
  if (((uint)*(ulong *)(param_1 + 0x1b8) >> 1 & 1) != 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x1e8);
  *(ulong *)(param_1 + 0x1b8) = *(ulong *)(param_1 + 0x1b8) | 2;
  plVar5 = (long *)(lVar8 + 0x50);
  local_38 = param_1;
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar4) {
      *plVar5 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00da3b9c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x58));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x58));
        while (*plVar5 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00da3b9c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar4) {
      *plVar5 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00da3b9c:
  FUN_00e227ac(lVar8 + 0xd0,&local_38);
  *(undefined8 *)(lVar8 + 0x50) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x58));
  return;
}


