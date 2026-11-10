/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dc4890; name: FUN_00dc4890
 */


void FUN_00dc4890(long param_1,ulong *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  lVar13 = *(long *)(param_1 + 0x40);
  uVar7 = FUN_00dc4b38(lVar13);
  if (((uVar7 & 0xff) != 0) || (uVar7 = FUN_00dc50dc(lVar13), (uVar7 & 0xff) != 0)) {
    lVar13 = lVar13 + (uVar7 >> 0x20) * 0x78;
    uVar7 = *(ulong *)(lVar13 + 0x40);
    if (uVar7 != 0) {
      uVar10 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      plVar1 = (long *)(lVar13 + 0x38);
      uVar9 = *param_2;
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar7 - 1 & uVar9;
      }
      else {
        uVar11 = uVar9;
        if (uVar7 <= uVar9) {
          uVar11 = 0;
          if (uVar7 != 0) {
            uVar11 = uVar9 / uVar7;
          }
          uVar11 = uVar9 - uVar11 * uVar7;
        }
      }
      plVar12 = *(long **)(*plVar1 + uVar11 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar12[1] == uVar9) {
              if (plVar12[2] == uVar9) {
LAB_00dc4a18:
                FUN_00dc4e58(*param_3,plVar1,param_2);
                return;
              }
            }
            else if ((plVar12[1] & uVar7 - 1) != uVar11) break;
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar12[1];
            if (uVar10 == uVar9) {
              if (plVar12[2] == uVar9) goto LAB_00dc4a18;
            }
            else {
              if (uVar7 <= uVar10) {
                uVar6 = 0;
                if (uVar7 != 0) {
                  uVar6 = uVar10 / uVar7;
                }
                uVar10 = uVar10 - uVar6 * uVar7;
              }
              if (uVar10 != uVar11) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
  }
  plVar1 = (long *)(param_1 + 0x70);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x78) == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar13;
      *(undefined8 *)(param_1 + 0x78) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00dc49d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x78) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x78) == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar13;
            *(undefined8 *)(param_1 + 0x78) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00dc49d0;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar13;
      *(undefined8 *)(param_1 + 0x78) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00dc49d0:
  FUN_00dc506c(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  do {
    lVar13 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x78);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar13;
      *(long *)(param_1 + 0x78) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar2 != lVar13 || lVar3 != lVar4) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00dc4a9c;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x74) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_00dc4a9c:
  if (!bVar8) {
    do {
      lVar13 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x78);
      if (lVar13 != lVar2 || lVar4 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00dc4af8;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x74) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x00dc4af8:
    if (!bVar8) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x78);
        if (lVar2 != lVar13 || lVar3 != lVar4) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar13 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x00dc4af8;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x74) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar13 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x00dc4af8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


