/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4c40c; name: FUN_00c4c40c
 */


undefined * FUN_00c4c40c(long param_1,short param_2)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  
  plVar1 = (long *)(param_1 + 0x450);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x458);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x458) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c4c444:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x458);
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x458) = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_1 + 0x458) != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c4c474;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x454) = lVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_00c4c474:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar8 = *(long *)(param_1 + 0x458);
    goto LAB_00c4c444;
  }
  if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 1)) {
    uVar3 = *(ushort *)(*(long *)(param_1 + 0xa0) + (long)param_2 * 2);
    uVar10 = (ulong)(short)uVar3;
    if ((*(uint *)(*(long *)(param_1 + 0x110) + (uVar10 >> 3 & 0x1ffffffffffffffc)) >>
         (ulong)(uVar3 & 0x1f) & 1) != 0) {
      FUN_00c66040(param_1,uVar10 & 0xffffffff);
    }
    puVar9 = (undefined *)(*(long *)(param_1 + 0x280) + uVar10 * 0x40);
  }
  else {
    puVar9 = &UNK_03d65090;
  }
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x458);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x458) = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar8 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x458);
    if (lVar8 != lVar5 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c4c500;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x454) = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_00c4c500:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x458);
      if (lVar5 != lVar8 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c4c57c;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x454) = lVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x00c4c57c:
    if (!bVar6) {
      do {
        lVar8 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x458);
        if (lVar8 != lVar5 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar8;
          lVar7 = lVar2;
          goto joined_r0x00c4c57c;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0x454) = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar5 = lVar8;
      lVar7 = lVar2;
      goto joined_r0x00c4c57c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x460));
  return puVar9;
}


