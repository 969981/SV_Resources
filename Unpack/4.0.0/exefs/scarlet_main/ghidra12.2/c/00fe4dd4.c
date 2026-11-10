/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe4dd4; name: FUN_00fe4dd4
 */


undefined1  [16] FUN_00fe4dd4(long param_1,ulong *param_2)

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
  undefined1 auVar13 [16];
  undefined8 uVar14;
  
  lVar12 = *(long *)(param_1 + 0x40);
  uVar3 = FUN_00e47950(lVar12);
  if (((uVar3 & 0xff) != 0) || (uVar3 = FUN_00e4b15c(lVar12), (uVar3 & 0xff) != 0)) {
    uVar6 = *(ulong *)(lVar12 + (uVar3 >> 0x20) * 0x78 + 0x40);
    if (uVar6 != 0) {
      uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar4 = *param_2;
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
LAB_00fe4efc:
                auVar13 = FUN_00fe5078(*(undefined8 *)(param_1 + 0x40),param_2);
                return auVar13;
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
              if (plVar11[2] == uVar4) goto LAB_00fe4efc;
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
  plVar11 = (long *)(param_1 + 0x70);
  lVar12 = nn::os::GetCurrentThread();
  do {
    lVar5 = *plVar11;
    lVar7 = *(long *)(param_1 + 0x78);
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = lVar5;
      *(long *)(param_1 + 0x78) = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00fe4f60:
  while ((lVar5 != 0 && (lVar12 != lVar5))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar5 = *plVar11;
      lVar7 = *(long *)(param_1 + 0x78);
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar5;
        *(long *)(param_1 + 0x78) = lVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  do {
    lVar1 = *plVar11;
    if (lVar1 != lVar5 || *(long *)(param_1 + 0x78) != lVar7) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00fe4f90;
    }
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = lVar5;
      *(long *)(param_1 + 0x74) = lVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar8 = true;
LAB_00fe4f90:
  if (!bVar8) {
    lVar5 = lVar1;
    lVar7 = *(long *)(param_1 + 0x78);
    goto LAB_00fe4f60;
  }
  auVar13 = FUN_00fe5078(*(undefined8 *)(param_1 + 0x48),param_2);
  uVar14 = auVar13._8_8_;
  do {
    lVar12 = *plVar11;
    lVar5 = *(long *)(param_1 + 0x78);
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = lVar12;
      *(long *)(param_1 + 0x78) = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    lVar7 = *plVar11;
    lVar1 = *(long *)(param_1 + 0x78);
    if (lVar7 != lVar12 || lVar1 != lVar5) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto joined_r0x00fe4ffc;
    }
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = lVar12;
      *(long *)(param_1 + 0x74) = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar8 = true;
joined_r0x00fe4ffc:
  do {
    if (bVar8) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
      auVar13._8_8_ = uVar14;
      return auVar13;
    }
    do {
      lVar12 = *plVar11;
      lVar5 = *(long *)(param_1 + 0x78);
      if (lVar12 != lVar7 || lVar5 != lVar1) {
        bVar8 = false;
        ClearExclusiveLocal();
        lVar7 = lVar12;
        lVar1 = lVar5;
        goto joined_r0x00fe4ffc;
      }
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar8) {
        *plVar11 = lVar7;
        *(long *)(param_1 + 0x74) = lVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar8 = true;
    lVar7 = lVar12;
    lVar1 = lVar5;
  } while( true );
}


