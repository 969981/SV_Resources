/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c73ff4; name: FUN_02c73ff4
 */


undefined8 FUN_02c73ff4(long param_1,int param_2)

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
  undefined8 uVar10;
  
  plVar9 = (long *)(param_1 + 0x128);
  lVar4 = nn::os::GetCurrentThread();
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_02c7402c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_02c7402c:
  uVar5 = *(ulong *)(param_1 + 0x10);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar8 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar6 = (ulong)param_2;
    if (uVar8 < 2) {
      uVar7 = uVar5 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar5 <= uVar6) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        uVar7 = uVar6 - uVar7 * uVar5;
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 8) + uVar7 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar9[1] == uVar6) {
            if ((int)plVar9[2] == param_2) goto LAB_02c74178;
          }
          else if ((plVar9[1] & uVar5 - 1) != uVar7) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar9[1];
          if (uVar8 == uVar6) {
            if ((int)plVar9[2] == param_2) goto LAB_02c74178;
          }
          else {
            if (uVar5 <= uVar8) {
              uVar3 = 0;
              if (uVar5 != 0) {
                uVar3 = uVar8 / uVar5;
              }
              uVar8 = uVar8 - uVar3 * uVar5;
            }
            if (uVar8 != uVar7) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  uVar10 = 0;
LAB_02c74150:
  *(undefined8 *)(param_1 + 0x128) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x130));
  return uVar10;
LAB_02c74178:
  if ((char)plVar9[5] != '\0') {
    nn::fs::Unmount((char *)(plVar9 + 3));
    *(undefined1 *)(plVar9 + 5) = 0;
  }
  uVar10 = 1;
  goto LAB_02c74150;
}


