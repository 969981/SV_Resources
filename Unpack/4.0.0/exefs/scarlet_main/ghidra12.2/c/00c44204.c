/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c44204; name: FUN_00c44204
 */


void FUN_00c44204(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  plVar1 = (long *)(param_2 + 0x8110);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_2 + 0x8118);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x8118) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c44254:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x8120));
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_2 + 0x8118);
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_2 + 0x8118) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar8 || *(long *)(param_2 + 0x8118) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00c44284;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x8114) = lVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00c44284:
  if (!bVar7) {
    lVar8 = lVar3;
    lVar9 = *(long *)(param_2 + 0x8118);
    goto LAB_00c44254;
  }
  uVar5 = (int)param_3 - *(int *)(param_2 + 0x8040);
  uVar10 = *(ulong *)(*(long *)(param_2 + 0x80c8) + ((ulong)(uVar5 >> 3) & 0x1ffffff8));
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_2 + 0x8118);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0x8118) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar9 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x8118);
    if (lVar9 != lVar6 || lVar3 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00c442ec;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0x8114) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00c442ec:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_2 + 0x8118);
      if (lVar6 != lVar9 || lVar8 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c443bc;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0x8114) = lVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x00c443bc:
    if (!bVar7) {
      do {
        lVar9 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x8118);
        if (lVar9 != lVar6 || lVar3 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar9;
          lVar8 = lVar3;
          goto joined_r0x00c443bc;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar6;
          *(long *)(param_2 + 0x8114) = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar6 = lVar9;
      lVar8 = lVar3;
      goto joined_r0x00c443bc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x8120));
  if ((uVar10 >> ((ulong)uVar5 & 0x3f) & 1) != 0) {
    lVar6 = *(long *)(param_2 + (param_3 >> 10 & 0x3fffff) * 0x20 + 0x30);
    if (*(ulong *)(lVar6 + 0x8000) <= (param_3 & 0x3ff)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar2 = (ulong *)(lVar6 + (param_3 & 0x3ff) * 0x20);
    if (*puVar2 == param_3) {
      *param_1 = (long)puVar2;
      puVar2 = puVar2 + 3;
      do {
        uVar10 = *puVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *(short *)puVar2 = (short)uVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((short)uVar10 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x2b,"Reference counter overflows.");
      }
      return;
    }
  }
  *param_1 = 0;
  return;
}


