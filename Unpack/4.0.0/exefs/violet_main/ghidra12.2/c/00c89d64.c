/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c89d64; name: FUN_00c89d64
 */


void FUN_00c89d64(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  plVar1 = (long *)(param_1 + 0x70);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x78);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x78) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00c89d9c:
  while ((lVar7 != 0 && (lVar4 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x78);
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x78) = lVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_1 + 0x78) != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c89dcc;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x74) = lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_00c89dcc:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar8 = *(long *)(param_1 + 0x78);
    goto LAB_00c89d9c;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if ((int)((ulong)(*(long *)(param_1 + 0x38) - lVar4) >> 3) != 0) {
    uVar9 = 0;
    do {
      plVar5 = (long *)(*(long *)(*param_2 + 0x48) + 0x30);
      (**(code **)(*plVar5 + 0x10))(plVar5,*(long *)(lVar4 + uVar9 * 8) + 200,0x1f);
      lVar4 = *(long *)(param_1 + 0x30);
      uVar9 = uVar9 + 1;
    } while (uVar9 < ((ulong)(*(long *)(param_1 + 0x38) - lVar4) >> 3 & 0xffffffff));
  }
  do {
    lVar4 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x78);
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x78) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar8 != lVar4 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c89e68;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x74) = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar6 = true;
LAB_00c89e68:
  if (!bVar6) {
    do {
      lVar4 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x78);
      if (lVar4 != lVar8 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c89ecc;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x74) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar6 = true;
joined_r0x00c89ecc:
    if (!bVar6) {
      do {
        lVar8 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x78);
        if (lVar8 != lVar4 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar4 = lVar8;
          lVar7 = lVar2;
          goto joined_r0x00c89ecc;
        }
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar4;
          *(long *)(param_1 + 0x74) = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar6 = true;
      lVar4 = lVar8;
      lVar7 = lVar2;
      goto joined_r0x00c89ecc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


