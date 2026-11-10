/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010745a4; name: FUN_010745a4
 */


void FUN_010745a4(undefined8 *param_1,long param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  plVar11 = (long *)(param_2 + 0x178);
  lVar12 = *plVar11;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar12) {
    lVar4 = nn::os::GetCurrentThread();
LAB_0107473c:
    if (*plVar11 == 0) goto code_r0x01074744;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x180));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x180));
          while (*plVar11 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = lVar4;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0107474c;
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
LAB_0107474c:
    bVar2 = false;
    goto LAB_010745e0;
  }
  plVar11 = (long *)0x0;
  bVar2 = true;
LAB_010745e0:
  uVar7 = *(ulong *)(param_2 + 0x30);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar5 = *param_3;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar5;
    }
    else if (uVar5 < uVar7) {
      uVar9 = uVar5;
    }
    else {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uVar5 / uVar7;
      }
      uVar9 = uVar5 - uVar9 * uVar7;
    }
    plVar10 = *(long **)(*(long *)(param_2 + 0x28) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar5) {
            if (plVar10[2] == uVar5) goto LAB_010746b4;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar5) {
            if (plVar10[2] == uVar5) goto LAB_010746b4;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar3 = 0;
              if (uVar7 != 0) {
                uVar3 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar3 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_01074640:
  *param_1 = 0;
  param_1[1] = 0;
joined_r0x010746d4:
  if (bVar2) {
    return;
  }
  *plVar11 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
  return;
code_r0x01074744:
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar2) {
    *plVar11 = lVar4;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0107474c;
  goto LAB_0107473c;
LAB_010746b4:
  piVar6 = (int *)plVar10[6];
  if (*piVar6 == 4) {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00ca1a48(param_1,piVar6 + 10);
    goto joined_r0x010746d4;
  }
  goto LAB_01074640;
}


