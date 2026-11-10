/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0170c22c; name: FUN_0170c22c
 */


void FUN_0170c22c(long param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  short *psVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  
  plVar1 = (long *)(param_1 + 0x230);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x238) == 0) {
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0x238) = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_0170c26c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x240));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x238) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x240));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x238) == 0) {
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar10;
            *(undefined8 *)(param_1 + 0x238) = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_0170c26c;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0x238) = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_0170c26c:
  uVar13 = *(ulong *)(param_1 + 0x70);
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar12 = *param_2;
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & uVar12;
    }
    else if (uVar12 < uVar13) {
      uVar15 = uVar12;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar12 / uVar13;
      }
      uVar15 = uVar12 - uVar15 * uVar13;
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x68) + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] != uVar12) {
            if ((plVar16[1] & uVar13 - 1) == uVar15) goto LAB_0170c42c;
            break;
          }
          if (plVar16[2] == uVar12) goto LAB_0170c2f0;
LAB_0170c42c:
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar16[1];
          if (uVar14 == uVar12) {
            if (plVar16[2] == uVar12) goto LAB_0170c2f0;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar9 = 0;
              if (uVar13 != 0) {
                uVar9 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar9 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
LAB_0170c334:
  do {
    lVar10 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x238);
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0x238) = lVar7;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar4 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x238);
    if (lVar4 != lVar10 || lVar5 != lVar7) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_0170c3bc;
    }
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x234) = lVar7;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar11 = true;
LAB_0170c3bc:
  if (!bVar11) {
    do {
      lVar10 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x238);
      if (lVar10 != lVar4 || lVar7 != lVar5) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x0170c488;
      }
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x234) = lVar5;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar11 = true;
joined_r0x0170c488:
    if (!bVar11) {
      do {
        lVar4 = *plVar1;
        lVar5 = *(long *)(param_1 + 0x238);
        if (lVar4 != lVar10 || lVar5 != lVar7) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar10 = lVar4;
          lVar7 = lVar5;
          goto joined_r0x0170c488;
        }
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x234) = lVar7;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar11 = true;
      lVar10 = lVar4;
      lVar7 = lVar5;
      goto joined_r0x0170c488;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x240));
  return;
LAB_0170c2f0:
  plVar16 = (long *)(*(long *)(param_1 + 0x30) + (long)(int)plVar16[3] * 0x38);
  if (param_3 < (ulong)(plVar16[1] - *plVar16 >> 5)) {
    *(undefined1 *)(*plVar16 + param_3 * 0x20 + 0x18) = 0;
    pcVar3 = (char *)(*plVar16 + param_3 * 0x20);
    if (*pcVar3 != '\0') {
      if (*(long *)(pcVar3 + 8) != 0) {
        psVar2 = (short *)(*(long *)(pcVar3 + 8) + 0x18);
        do {
          sVar6 = *psVar2;
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar11) {
            *psVar2 = sVar6 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar6 == 1) {
          FUN_0116e168();
        }
        else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      *pcVar3 = '\0';
    }
  }
  goto LAB_0170c334;
}


