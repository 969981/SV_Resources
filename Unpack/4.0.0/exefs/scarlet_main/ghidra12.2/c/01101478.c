/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01101478; name: FUN_01101478
 */


void FUN_01101478(long *param_1,long param_2,ulong *param_3)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  
  plVar1 = (long *)(param_2 + 0xb0);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar10 = *plVar1;
    lVar12 = *(long *)(param_2 + 0xb8);
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0xb8) = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_011014b4:
  while ((lVar10 != 0 && (lVar7 != lVar10))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xc0));
    do {
      lVar10 = *plVar1;
      lVar12 = *(long *)(param_2 + 0xb8);
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar10;
        *(long *)(param_2 + 0xb8) = lVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar10 || *(long *)(param_2 + 0xb8) != lVar12) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_011014e4;
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar10;
      *(long *)(param_2 + 0xb4) = lVar12 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar9 = true;
LAB_011014e4:
  if (!bVar9) {
    lVar10 = lVar3;
    lVar12 = *(long *)(param_2 + 0xb8);
    goto LAB_011014b4;
  }
  uVar13 = *(ulong *)(param_2 + 0x48);
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar11 = *param_3;
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = uVar13 - 1 & uVar11;
    }
    else if (uVar11 < uVar13) {
      uVar15 = uVar11;
    }
    else {
      uVar15 = 0;
      if (uVar13 != 0) {
        uVar15 = uVar11 / uVar13;
      }
      uVar15 = uVar11 - uVar15 * uVar13;
    }
    plVar16 = *(long **)(*(long *)(param_2 + 0x40) + uVar15 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == uVar11) {
            if (plVar16[2] == uVar11) goto LAB_01101580;
          }
          else if ((plVar16[1] & uVar13 - 1) != uVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar16[1];
          if (uVar14 == uVar11) {
            if (plVar16[2] == uVar11) goto LAB_01101580;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar6 = 0;
              if (uVar13 != 0) {
                uVar6 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar6 * uVar13;
            }
            if (uVar14 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
LAB_011015bc:
  do {
    lVar7 = *plVar1;
    lVar10 = *(long *)(param_2 + 0xb8);
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0xb8) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar12 = *plVar1;
    lVar3 = *(long *)(param_2 + 0xb8);
    if (lVar12 != lVar7 || lVar3 != lVar10) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_011015f8;
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(long *)(param_2 + 0xb4) = lVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar9 = true;
LAB_011015f8:
  if (!bVar9) {
    do {
      lVar7 = *plVar1;
      lVar10 = *(long *)(param_2 + 0xb8);
      if (lVar7 != lVar12 || lVar10 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x011016dc;
      }
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar12;
        *(long *)(param_2 + 0xb4) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar9 = true;
joined_r0x011016dc:
    if (!bVar9) {
      do {
        lVar12 = *plVar1;
        lVar3 = *(long *)(param_2 + 0xb8);
        if (lVar12 != lVar7 || lVar3 != lVar10) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar7 = lVar12;
          lVar10 = lVar3;
          goto joined_r0x011016dc;
        }
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar7;
          *(long *)(param_2 + 0xb4) = lVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar9 = true;
      lVar7 = lVar12;
      lVar10 = lVar3;
      goto joined_r0x011016dc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xc0));
  return;
LAB_01101580:
  lVar7 = plVar16[6];
  *param_1 = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar7 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar8;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  goto LAB_011015bc;
}


