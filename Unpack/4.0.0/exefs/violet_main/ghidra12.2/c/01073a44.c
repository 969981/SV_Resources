/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01073a44; name: FUN_01073a44
 */


undefined8 FUN_01073a44(long param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  lVar13 = *(long *)(param_1 + 0x40);
  uVar3 = FUN_00e49208(lVar13);
  if (((uVar3 & 0xff) != 0) || (uVar3 = FUN_00e4b4ec(lVar13), (uVar3 & 0xff) != 0)) {
    uVar7 = *(ulong *)(lVar13 + (uVar3 >> 0x20) * 0x78 + 0x40);
    if (uVar7 != 0) {
      uVar10 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar5 = *param_2;
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar7 - 1 & uVar5;
      }
      else if (uVar5 < uVar7) {
        uVar11 = uVar5;
      }
      else {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = uVar5 / uVar7;
        }
        uVar11 = uVar5 - uVar11 * uVar7;
      }
      plVar12 = *(long **)(*(long *)(lVar13 + (uVar3 >> 0x20) * 0x78 + 0x38) + uVar11 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar12[1] == uVar5) {
              if (plVar12[2] == uVar5) goto LAB_01073cbc;
            }
            else if ((plVar12[1] & uVar7 - 1) != uVar11) break;
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar3 = plVar12[1];
            if (uVar3 == uVar5) {
              if (plVar12[2] == uVar5) {
LAB_01073cbc:
                uVar4 = FUN_01073ce0(*(undefined8 *)(param_1 + 0x40),param_2);
                return uVar4;
              }
            }
            else {
              if (uVar7 <= uVar3) {
                uVar10 = 0;
                if (uVar7 != 0) {
                  uVar10 = uVar3 / uVar7;
                }
                uVar3 = uVar3 - uVar10 * uVar7;
              }
              if (uVar3 != uVar11) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
  }
  plVar12 = (long *)(param_1 + 0x70);
  lVar13 = nn::os::GetCurrentThread();
  do {
    lVar6 = *plVar12;
    lVar8 = *(long *)(param_1 + 0x78);
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = lVar6;
      *(long *)(param_1 + 0x78) = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01073b50:
  while ((lVar6 != 0 && (lVar13 != lVar6))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar6 = *plVar12;
      lVar8 = *(long *)(param_1 + 0x78);
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = lVar6;
        *(long *)(param_1 + 0x78) = lVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  do {
    lVar1 = *plVar12;
    if (lVar1 != lVar6 || *(long *)(param_1 + 0x78) != lVar8) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_01073b80;
    }
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = lVar6;
      *(long *)(param_1 + 0x74) = lVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar9 = true;
LAB_01073b80:
  if (!bVar9) {
    lVar6 = lVar1;
    lVar8 = *(long *)(param_1 + 0x78);
    goto LAB_01073b50;
  }
  uVar4 = FUN_01073ce0(*(undefined8 *)(param_1 + 0x48),param_2);
  do {
    lVar13 = *plVar12;
    lVar6 = *(long *)(param_1 + 0x78);
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = lVar13;
      *(long *)(param_1 + 0x78) = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    lVar8 = *plVar12;
    lVar1 = *(long *)(param_1 + 0x78);
    if (lVar8 != lVar13 || lVar1 != lVar6) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto joined_r0x01073bec;
    }
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar9) {
      *plVar12 = lVar13;
      *(long *)(param_1 + 0x74) = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar9 = true;
joined_r0x01073bec:
  do {
    if (bVar9) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
      return uVar4;
    }
    do {
      lVar13 = *plVar12;
      lVar6 = *(long *)(param_1 + 0x78);
      if (lVar13 != lVar8 || lVar6 != lVar1) {
        bVar9 = false;
        ClearExclusiveLocal();
        lVar8 = lVar13;
        lVar1 = lVar6;
        goto joined_r0x01073bec;
      }
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = lVar8;
        *(long *)(param_1 + 0x74) = lVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar9 = true;
    lVar8 = lVar13;
    lVar1 = lVar6;
  } while( true );
}


