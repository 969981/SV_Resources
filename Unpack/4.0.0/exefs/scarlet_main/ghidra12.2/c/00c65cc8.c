/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c65cc8; name: FUN_00c65cc8
 */


void FUN_00c65cc8(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  
  plVar1 = (long *)(param_1 + 0x450);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x458);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x458) = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00c65cfc:
  while ((lVar8 != 0 && (lVar5 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x460));
    do {
      lVar8 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x458);
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x458) = lVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar8 || *(long *)(param_1 + 0x458) != lVar10) {
      bVar4 = false;
      ClearExclusiveLocal();
      goto LAB_00c65d2c;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x454) = lVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
LAB_00c65d2c:
  if (!bVar4) {
    lVar8 = lVar2;
    lVar10 = *(long *)(param_1 + 0x458);
    goto LAB_00c65cfc;
  }
  iVar12 = (int)(short)((short)((uint)(*(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x248)) >> 4)
                       * -0x5555);
  if (0 < iVar12) {
    uVar11 = 0;
    do {
      if ((*(uint *)(*(long *)(param_1 + 0x110) + (ulong)(uVar11 >> 5 & 0x7ff) * 4) >>
           (ulong)(uVar11 & 0x1f) & 1) != 0) {
        FUN_00c66040(param_1,uVar11);
      }
      uVar11 = (uint)(short)((short)uVar11 + 1);
    } while ((int)uVar11 < iVar12);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x398) + 0x30);
  (**(code **)(*plVar6 + 0x10))
            (plVar6,*(undefined8 *)(param_1 + 0x360),*(long *)(param_1 + 0x280),
             *(undefined8 *)(param_1 + 0x328),
             (ulong)(*(long *)(param_1 + 0x288) - *(long *)(param_1 + 0x280)) >> 6);
  if (*(long *)(param_1 + 0x3a0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3a0) + 0x30) + 0x18))();
  }
  lVar5 = *(long *)(param_1 + 0x440);
  if (lVar5 != 0) {
    uVar9 = (ulong)(*(long *)(lVar5 + 0x40) - *(long *)(lVar5 + 0x38)) >> 6;
    if (0 < (int)uVar9 * -0x33330000) {
      iVar12 = 0;
      do {
        FUN_00c663c0(lVar5,iVar12);
        iVar12 = iVar12 + 1;
      } while ((short)iVar12 < (short)((short)uVar9 * -0x3333));
    }
    FUN_00c6754c(lVar5);
    lVar8 = *(long *)(lVar5 + 0x38);
    lVar5 = *(long *)(lVar5 + 0x40);
    if (lVar8 != lVar5) {
      uVar9 = (lVar5 - lVar8) - 0x140;
      uVar11 = ((uint)(uVar9 / 0x140) & 0xffffff) + 1;
      if ((uVar11 & 3) != 0) {
        lVar10 = -((ulong)uVar11 & 3);
        do {
          *(undefined2 *)(lVar8 + 0x138) = 0;
          lVar8 = lVar8 + 0x140;
          bVar4 = lVar10 != -1;
          lVar10 = lVar10 + 1;
        } while (bVar4);
      }
      if (0x3bf < uVar9) {
        do {
          *(undefined2 *)(lVar8 + 0x138) = 0;
          *(undefined2 *)(lVar8 + 0x278) = 0;
          *(undefined2 *)(lVar8 + 0x3b8) = 0;
          *(undefined2 *)(lVar8 + 0x4f8) = 0;
          lVar8 = lVar8 + 0x500;
        } while (lVar5 != lVar8);
      }
    }
  }
  puVar7 = *(undefined4 **)(param_1 + 400);
  uVar9 = *(long *)(param_1 + 0x198) - (long)puVar7;
  if ((((0 < (long)uVar9) && (*puVar7 = 0, 4 < uVar9)) && (puVar7[1] = 0, 8 < uVar9)) &&
     (puVar7[2] = 0, 0xc < uVar9)) {
    lVar5 = (uVar9 >> 2) - 2;
    puVar7 = puVar7 + 3;
    do {
      lVar5 = lVar5 + -1;
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    } while (1 < lVar5);
  }
  puVar7 = *(undefined4 **)(param_1 + 0x1d0);
  uVar9 = *(long *)(param_1 + 0x1d8) - (long)puVar7;
  if (((0 < (long)uVar9) && (*puVar7 = 0, 4 < uVar9)) &&
     ((puVar7[1] = 0, 8 < uVar9 && (puVar7[2] = 0, 0xc < uVar9)))) {
    lVar5 = (uVar9 >> 2) - 2;
    puVar7 = puVar7 + 3;
    do {
      lVar5 = lVar5 + -1;
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    } while (1 < lVar5);
  }
  do {
    lVar5 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x458);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x458) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar10 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x458);
    if (lVar10 != lVar5 || lVar2 != lVar8) {
      bVar4 = false;
      ClearExclusiveLocal();
      goto LAB_00c65e8c;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x454) = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar4 = true;
LAB_00c65e8c:
  if (!bVar4) {
    do {
      lVar5 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x458);
      if (lVar5 != lVar10 || lVar8 != lVar2) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c65ff0;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x454) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
joined_r0x00c65ff0:
    if (!bVar4) {
      do {
        lVar10 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x458);
        if (lVar10 != lVar5 || lVar2 != lVar8) {
          bVar4 = false;
          ClearExclusiveLocal();
          lVar5 = lVar10;
          lVar8 = lVar2;
          goto joined_r0x00c65ff0;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0x454) = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = true;
      lVar5 = lVar10;
      lVar8 = lVar2;
      goto joined_r0x00c65ff0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x460));
  return;
}


