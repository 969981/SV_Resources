/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe22c0; name: FUN_00fe22c0
 */


undefined8 FUN_00fe22c0(long param_1,ulong *param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  
  plVar12 = (long *)(param_1 + 0x178);
  lVar11 = *plVar12;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar11) {
    lVar3 = nn::os::GetCurrentThread();
LAB_00fe243c:
    if (*plVar12 == 0) goto code_r0x00fe2444;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
          while (*plVar12 == 0) {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = lVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00fe244c;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00fe244c:
    bVar4 = false;
    goto LAB_00fe22f8;
  }
  plVar12 = (long *)0x0;
  bVar4 = true;
LAB_00fe22f8:
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
            if (plVar9[2] == uVar5) goto LAB_00fe23dc;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_00fe23dc;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar2 * uVar6;
            }
            if (uVar7 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_00fe2358:
  uVar10 = 0;
LAB_00fe235c:
  if (!bVar4) {
    *plVar12 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
  }
  return uVar10;
code_r0x00fe2444:
  cVar1 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar4) {
    *plVar12 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00fe244c;
  goto LAB_00fe243c;
LAB_00fe23dc:
  if (*(int *)plVar9[6] == 4) {
    uVar10 = 1;
    goto LAB_00fe235c;
  }
  goto LAB_00fe2358;
}


