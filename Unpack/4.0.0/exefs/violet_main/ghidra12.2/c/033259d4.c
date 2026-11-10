/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033259d4; name: FUN_033259d4
 */


undefined1  [16] FUN_033259d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  long local_70;
  undefined8 local_68;
  ulong local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
  
  FUN_03323960(&local_70);
  if (local_70 != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = local_68;
    goto LAB_03325b14;
  }
  puVar8 = *(ulong **)(param_1 + 8);
  puVar9 = puVar8;
  if ((*puVar8 & 1) == 0) {
    do {
      puVar9 = (ulong *)puVar9[1];
    } while ((*puVar9 & 1) == 0);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  if ((puVar9[2] & 0x1f) != 8) {
    puVar8 = (ulong *)0x0;
  }
  if (puVar8 != (ulong *)0x0) {
    puVar9 = puVar8;
LAB_03325a48:
    uVar10 = *puVar9;
    if (((uint)uVar10 >> 2 & 1) == 0) goto code_r0x03325a50;
    uVar10 = puVar9[(uVar10 >> 1 & 1) + (uVar10 & 1) + 2];
    if ((uVar10 & 1) != 0) {
      plVar6 = (long *)(uVar10 & 0xfffffffffffffffe);
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar12 = false;
      goto LAB_03325a84;
    }
    goto LAB_03325a7c;
  }
  uVar10 = 0;
  goto LAB_03325a7c;
code_r0x03325a50:
  puVar9 = (ulong *)puVar9[1];
  if (puVar9 == (ulong *)0x0) goto code_r0x03325a58;
  goto LAB_03325a48;
code_r0x03325a58:
  uVar10 = 0;
LAB_03325a7c:
  plVar6 = (long *)(uVar10 & 0xfffffffffffffffe);
  bVar12 = true;
LAB_03325a84:
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  (**(code **)(*plVar6 + 0x50))(plVar6,uVar7,puVar8,&local_50);
  uVar7 = local_48;
  if ((local_38 & 1) != 0) {
    plVar5 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  if (!bVar12) {
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
LAB_03325b14:
  if ((local_60 & 1) != 0) {
    plVar6 = (long *)(local_60 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  auVar13._8_8_ = uVar7;
  auVar13._0_8_ = uVar11;
  return auVar13;
}


