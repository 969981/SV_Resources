/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d1a58c; name: FUN_00d1a58c
 */


void FUN_00d1a58c(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  short *psVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  plVar3 = (long *)(param_2 + 0x8038);
  uVar9 = FUN_00d1a7a0(param_2 + 0x8040);
  uVar13 = uVar9 & 0xffffffff;
  plVar4 = (long *)(param_2 + 0x8130);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar8) {
      *plVar4 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_00d1a5f0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x8138));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x8138));
        while (*plVar4 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *plVar4 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00d1a5f0;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar8) {
      *plVar4 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00d1a5f0:
  lVar10 = param_2 + 0x30;
  lVar11 = *(long *)(lVar10 + *plVar3 * 0x20);
  uVar12 = *(ulong *)(lVar11 + 0x8000);
  uVar14 = uVar12 + *plVar3 * 0x400;
  if (uVar14 <= uVar13) {
    do {
      if (uVar12 == 0x400) {
        FUN_00d1adec(param_2 + 0x28);
        lVar11 = *plVar3;
        *plVar3 = lVar11 + 1;
        lVar11 = *(long *)(lVar10 + (lVar11 + 1) * 0x20);
        uVar12 = *(ulong *)(lVar11 + 0x8000);
      }
      if (0x3ff < uVar12) goto LAB_00d1a79c;
      puVar5 = (ulong *)(lVar11 + uVar12 * 0x20);
      *puVar5 = uVar14 & 0xffffffff;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0xffffffff00000000;
      *(long *)(lVar11 + 0x8000) = *(long *)(lVar11 + 0x8000) + 1;
      lVar11 = *(long *)(lVar10 + *plVar3 * 0x20);
      uVar12 = *(ulong *)(lVar11 + 0x8000);
      uVar14 = uVar12 + *plVar3 * 0x400;
    } while (uVar14 <= uVar13);
  }
  lVar10 = *(long *)(lVar10 + (uVar13 >> 5 & 0x7ffffe0));
  if ((uVar9 & 0x3ff) < *(ulong *)(lVar10 + 0x8000)) {
    lVar11 = lVar10 + (uVar9 & 0x3ff) * 0x20;
    iVar1 = *(int *)(lVar11 + 4) + 1;
    if (*(int *)(lVar11 + 4) == -1) {
      iVar1 = 1;
    }
    *(undefined8 *)(lVar11 + 0x10) = param_3;
    *(int *)(lVar11 + 4) = iVar1;
    *param_1 = lVar11;
    if (lVar10 != 0) {
      psVar2 = (short *)(lVar11 + 0x18);
      do {
        sVar6 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar6 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x2b,"Reference counter overflows.");
      }
    }
    *plVar4 = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x8138));
    return;
  }
LAB_00d1a79c:
                    /* WARNING: Subroutine does not return */
  abort();
}


