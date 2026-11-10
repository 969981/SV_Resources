/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4d200; name: FUN_00c4d200
 */


void FUN_00c4d200(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  
  if (*(char *)(param_1 + 0x19a) == '\0') {
    return;
  }
  plVar1 = (long *)(param_1 + 0x70);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar13 = *(long *)(param_1 + 0x78);
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x78) = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    while ((lVar8 != 0 && (lVar7 != lVar8))) {
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
      do {
        lVar8 = *plVar1;
        lVar13 = *(long *)(param_1 + 0x78);
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0x78) = lVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar8 || *(long *)(param_1 + 0x78) != lVar13) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_00c4d280;
      }
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x74) = lVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar12 = true;
LAB_00c4d280:
    lVar8 = lVar2;
    lVar13 = *(long *)(param_1 + 0x78);
  } while (!bVar12);
  lVar7 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != lVar7) {
    uVar14 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x178);
      if (lVar8 == 0) {
        uVar9 = *(uint *)(param_1 + 0x15c);
        lVar7 = *(long *)(lVar7 + uVar14 * 8);
        uVar3 = *(undefined4 *)(param_1 + 0x150);
        if (uVar9 < 2) {
          if (*(char *)(param_1 + 0x199) == '\0') {
            FUN_00c4db7c(*(undefined8 *)(lVar7 + 200),uVar3,*(undefined4 *)(param_1 + 0x154));
          }
          else {
            uVar4 = *(undefined4 *)(param_1 + 0x158);
            uVar9 = 0;
            uVar11 = 0;
            uVar5 = *(undefined4 *)(param_1 + 0x154);
LAB_00c4d320:
            FUN_00c4db90(*(undefined8 *)(lVar7 + 200),uVar3,uVar9,uVar4,uVar5,uVar11);
          }
        }
        else {
          if (*(char *)(param_1 + 0x199) != '\0') {
            uVar4 = *(undefined4 *)(param_1 + 0x158);
            uVar5 = *(undefined4 *)(param_1 + 0x154);
            uVar11 = *(undefined4 *)(param_1 + 0x160);
            goto LAB_00c4d320;
          }
          FUN_0193fd4c(*(undefined8 *)(lVar7 + 200),uVar3,uVar9,0,0);
        }
      }
      else {
        uVar10 = *(undefined8 *)(lVar8 + 8);
        if ((*(int *)(*(long *)(param_1 + 0x90) + uVar14 * 4) == 3) &&
           (*(char *)(param_1 + 0x168) != '\0')) {
          uVar10 = *(undefined8 *)(param_1 + 0x170);
        }
        lVar7 = *(long *)(lVar7 + uVar14 * 8);
        if (*(long *)(lVar8 + 0x10) == 0) {
          FUN_00c4d470(*(undefined8 *)(lVar7 + 200));
        }
        else {
          FUN_00c4e478(*(undefined8 *)(lVar7 + 200),lVar8,uVar10,(long *)(lVar8 + 0x10),
                       *(undefined8 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x20),
                       *(undefined4 *)(lVar8 + 0x24));
        }
      }
      lVar7 = *(long *)(param_1 + 0x30);
      uVar14 = uVar14 + 1;
    } while (uVar14 < (ulong)(*(long *)(param_1 + 0x38) - lVar7 >> 3));
  }
  *(undefined1 *)(param_1 + 0x19a) = 0;
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x78);
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x78) = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar13 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar13 != lVar7 || lVar2 != lVar8) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_00c4d2d0;
    }
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x74) = lVar8 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar12 = true;
LAB_00c4d2d0:
  if (!bVar12) {
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x78);
      if (lVar7 != lVar13 || lVar8 != lVar2) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c4d3e4;
      }
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar13;
        *(long *)(param_1 + 0x74) = lVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar12 = true;
joined_r0x00c4d3e4:
    if (!bVar12) {
      do {
        lVar13 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x78);
        if (lVar13 != lVar7 || lVar2 != lVar8) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar7 = lVar13;
          lVar8 = lVar2;
          goto joined_r0x00c4d3e4;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x74) = lVar8 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
      lVar7 = lVar13;
      lVar8 = lVar2;
      goto joined_r0x00c4d3e4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


