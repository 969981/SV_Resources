/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a8b44; name: FUN_015a8b44
 */


void FUN_015a8b44(undefined8 param_1,long param_2,ulong *param_3)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_2 + 0x40);
  uVar3 = FUN_00e48eec(lVar12);
  if (((uVar3 & 0xff) != 0) || (uVar3 = FUN_00e4b87c(lVar12), (uVar3 & 0xff) != 0)) {
    uVar6 = *(ulong *)(lVar12 + (uVar3 >> 0x20) * 0x78 + 0x40);
    if (uVar6 != 0) {
      uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar4 = *param_3;
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar10 = uVar6 - 1 & uVar4;
      }
      else {
        uVar10 = uVar4;
        if (uVar6 <= uVar4) {
          uVar10 = 0;
          if (uVar6 != 0) {
            uVar10 = uVar4 / uVar6;
          }
          uVar10 = uVar4 - uVar10 * uVar6;
        }
      }
      plVar11 = *(long **)(*(long *)(lVar12 + (uVar3 >> 0x20) * 0x78 + 0x38) + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar11[1] == uVar4) {
              if (plVar11[2] == uVar4) {
LAB_015a8ce0:
                lVar12 = *(long *)(param_2 + 0x40);
                uVar3 = FUN_00e48eec(lVar12);
                if ((uVar3 & 0xff) == 0) {
                  uVar3 = FUN_00e4b87c(lVar12);
                }
                if ((uVar3 & 0xff) == 0) {
                  lVar12 = lVar12 + 0xec0;
                }
                else {
                  lVar12 = lVar12 + (uVar3 >> 0x20) * 0x78 + 0x38;
                }
                FUN_015a8e50(param_1,lVar12,param_3);
                return;
              }
            }
            else if ((plVar11[1] & uVar6 - 1) != uVar10) break;
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            uVar3 = plVar11[1];
            if (uVar3 == uVar4) {
              if (plVar11[2] == uVar4) goto LAB_015a8ce0;
            }
            else {
              if (uVar6 <= uVar3) {
                uVar9 = 0;
                if (uVar6 != 0) {
                  uVar9 = uVar3 / uVar6;
                }
                uVar3 = uVar3 - uVar9 * uVar6;
              }
              if (uVar3 != uVar10) break;
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
  }
  plVar11 = (long *)(param_2 + 0x70);
  lVar12 = nn::os::GetCurrentThread();
  do {
    lVar5 = *plVar11;
    lVar7 = *(long *)(param_2 + 0x78);
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = lVar5;
      *(long *)(param_2 + 0x78) = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_015a8c84:
  while ((lVar5 != 0 && (lVar12 != lVar5))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x80));
    do {
      lVar5 = *plVar11;
      lVar7 = *(long *)(param_2 + 0x78);
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar5;
        *(long *)(param_2 + 0x78) = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  do {
    lVar1 = *plVar11;
    if (lVar1 != lVar5 || *(long *)(param_2 + 0x78) != lVar7) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_015a8cb4;
    }
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = lVar5;
      *(long *)(param_2 + 0x74) = lVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar8 = true;
LAB_015a8cb4:
  if (!bVar8) {
    lVar5 = lVar1;
    lVar7 = *(long *)(param_2 + 0x78);
    goto LAB_015a8c84;
  }
  lVar12 = *(long *)(param_2 + 0x48);
  uVar3 = FUN_00e48eec(lVar12);
  if ((uVar3 & 0xff) == 0) {
    uVar3 = FUN_00e4b87c(lVar12);
  }
  lVar5 = lVar12 + 0xec0;
  if ((uVar3 & 0xff) != 0) {
    lVar5 = lVar12 + (uVar3 >> 0x20) * 0x78 + 0x38;
  }
  FUN_015a8e50(param_1,lVar5,param_3);
  do {
    lVar12 = *plVar11;
    lVar5 = *(long *)(param_2 + 0x78);
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = lVar12;
      *(long *)(param_2 + 0x78) = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    lVar7 = *plVar11;
    lVar1 = *(long *)(param_2 + 0x78);
    if (lVar7 != lVar12 || lVar1 != lVar5) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto joined_r0x015a8dac;
    }
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = lVar12;
      *(long *)(param_2 + 0x74) = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar8 = true;
joined_r0x015a8dac:
  do {
    if (bVar8) {
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x80));
      return;
    }
    do {
      lVar12 = *plVar11;
      lVar5 = *(long *)(param_2 + 0x78);
      if (lVar12 != lVar7 || lVar5 != lVar1) {
        bVar8 = false;
        ClearExclusiveLocal();
        lVar7 = lVar12;
        lVar1 = lVar5;
        goto joined_r0x015a8dac;
      }
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar7;
        *(long *)(param_2 + 0x74) = lVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar8 = true;
    lVar7 = lVar12;
    lVar1 = lVar5;
  } while( true );
}


