/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d2b918; name: FUN_00d2b918
 */


long FUN_00d2b918(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  plVar10 = (long *)(param_1 + 0x210);
  lVar5 = nn::os::GetCurrentThread();
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x218));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d2b950;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d2b950:
  if ((*(long *)(param_1 + 0x2a0) == 0) || (param_2 == 0)) {
    lVar5 = *(long *)(param_1 + 0x228);
    goto LAB_00d2bac0;
  }
  plVar10 = *(long **)(param_2 + 8);
  puVar1 = (ulong *)PTR_DAT_047d8b70;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 6);
  }
  uVar11 = *puVar1;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  uVar6 = *(ulong *)(param_1 + 0x250);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & uVar11;
    }
    else if (uVar11 < uVar6) {
      uVar8 = uVar11;
    }
    else {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar11 / uVar6;
      }
      uVar8 = uVar11 - uVar8 * uVar6;
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x248) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == uVar11) {
            if (plVar9[2] == uVar11) goto LAB_00d2bab4;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar11) {
            if (plVar9[2] == uVar11) goto LAB_00d2bab4;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar4 * uVar6;
            }
            if (uVar7 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  plVar9 = (long *)(param_1 + 0x228);
LAB_00d2bab8:
  lVar5 = *plVar9;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
LAB_00d2bac0:
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x218));
  return lVar5;
LAB_00d2bab4:
  plVar9 = plVar9 + 7;
  goto LAB_00d2bab8;
}


