/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4ccf8; name: FUN_00c4ccf8
 */


void FUN_00c4ccf8(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  FUN_00c4d200();
  plVar1 = (long *)(param_1 + 0x70);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x78);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x78) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c4cd2c:
  while ((lVar7 != 0 && (lVar5 != lVar7))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x78);
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x78) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar7 || *(long *)(param_1 + 0x78) != lVar9) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c4cd5c;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x74) = lVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_00c4cd5c:
  if (!bVar6) {
    lVar7 = lVar2;
    lVar9 = *(long *)(param_1 + 0x78);
    goto LAB_00c4cd2c;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x30);
  puVar8 = *(undefined8 **)(param_1 + 0x38);
  if (puVar8 != puVar10) {
    if ((**(int **)(param_1 + 0x90) == 0) || (**(int **)(param_1 + 0x90) == 3)) {
      FUN_00c4cf3c(*puVar10);
      puVar10 = *(undefined8 **)(param_1 + 0x30);
      puVar8 = *(undefined8 **)(param_1 + 0x38);
    }
    if (1 < (ulong)((long)puVar8 - (long)puVar10 >> 3)) {
      iVar3 = *(int *)(*(long *)(param_1 + 0x90) + 4);
      if ((iVar3 == 0) || (iVar3 == 3)) {
        FUN_00c4cf3c(puVar10[1]);
        puVar10 = *(undefined8 **)(param_1 + 0x30);
        puVar8 = *(undefined8 **)(param_1 + 0x38);
      }
      if (2 < (ulong)((long)puVar8 - (long)puVar10 >> 3)) {
        iVar3 = *(int *)(*(long *)(param_1 + 0x90) + 8);
        if ((iVar3 == 0) || (iVar3 == 3)) {
          FUN_00c4cf3c(puVar10[2]);
          puVar10 = *(undefined8 **)(param_1 + 0x30);
          puVar8 = *(undefined8 **)(param_1 + 0x38);
        }
        if (3 < (ulong)((long)puVar8 - (long)puVar10 >> 3)) {
          uVar11 = 3;
          do {
            iVar3 = *(int *)(*(long *)(param_1 + 0x90) + uVar11 * 4);
            if (iVar3 == 0 || iVar3 == 3) {
              FUN_00c4cf3c(puVar10[uVar11]);
              puVar10 = *(undefined8 **)(param_1 + 0x30);
              puVar8 = *(undefined8 **)(param_1 + 0x38);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < (ulong)((long)puVar8 - (long)puVar10 >> 3));
        }
      }
    }
  }
  do {
    lVar5 = *plVar1;
    lVar7 = *(long *)(param_1 + 0x78);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x78) = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar9 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar9 != lVar5 || lVar2 != lVar7) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c4ce08;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x74) = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_00c4ce08:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar7 = *(long *)(param_1 + 0x78);
      if (lVar5 != lVar9 || lVar7 != lVar2) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c4ceec;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x74) = lVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x00c4ceec:
    if (!bVar6) {
      do {
        lVar9 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x78);
        if (lVar9 != lVar5 || lVar2 != lVar7) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar9;
          lVar7 = lVar2;
          goto joined_r0x00c4ceec;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar5;
          *(long *)(param_1 + 0x74) = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar5 = lVar9;
      lVar7 = lVar2;
      goto joined_r0x00c4ceec;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


