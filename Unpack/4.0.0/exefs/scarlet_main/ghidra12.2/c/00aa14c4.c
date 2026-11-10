/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00aa14c4; name: FUN_00aa14c4
 */


ulong FUN_00aa14c4(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = (long *)(param_1 + 0x178);
  lVar10 = *plVar11;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar10) {
    lVar4 = nn::os::GetCurrentThread();
LAB_00aa1658:
    if (*plVar11 == 0) goto code_r0x00aa1660;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
          while (*plVar11 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = lVar4;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00aa1668;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00aa1668:
    bVar2 = false;
    goto LAB_00aa14fc;
  }
  plVar11 = (long *)0x0;
  bVar2 = true;
LAB_00aa14fc:
  uVar6 = *(ulong *)(param_1 + 0x30);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar5 = *param_2;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & uVar5;
    }
    else if (uVar5 < uVar6) {
      uVar8 = uVar5;
    }
    else {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar5 / uVar6;
      }
      uVar8 = uVar5 - uVar8 * uVar6;
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x28) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_00aa15ec;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_00aa15ec;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar3 * uVar6;
            }
            if (uVar7 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_00aa1564:
  uVar6 = 0;
  uVar7 = 0;
joined_r0x00aa1600:
  if (!bVar2) {
    *plVar11 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
  }
  return uVar6 | uVar7;
code_r0x00aa1660:
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar2) {
    *plVar11 = lVar4;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00aa1668;
  goto LAB_00aa1658;
LAB_00aa15ec:
  if (plVar9[6] != 0) {
    uVar6 = (ulong)*(uint *)(plVar9[6] + 4) << 0x20;
    uVar7 = 1;
    goto joined_r0x00aa1600;
  }
  goto LAB_00aa1564;
}


