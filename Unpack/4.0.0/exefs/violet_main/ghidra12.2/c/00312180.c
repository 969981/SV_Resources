/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00312180; name: FUN_00312180
 */


void FUN_00312180(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_30;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  
  param_2 = param_2 & 0xfffffffffffffffc;
  if ((*(ulong *)(param_2 + 8) < 5) ||
     (plVar5 = (long *)(param_2 + 0x20),
     *(int *)(*(long *)(param_2 + 0x10) + *(ulong *)(param_2 + 8) + -4) != 0x6e69622d)) {
    puVar4 = *(undefined8 **)(param_2 + 0x20);
    if ((puVar4 != (undefined8 *)0x0) && (plVar5 = (long *)*puVar4, plVar5 != (long *)0x0)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar4 = *(undefined8 **)(param_2 + 0x20);
    }
    lVar7 = *(long *)(param_2 + 0x20);
    lVar9 = *(long *)(param_2 + 0x38);
    lVar8 = *(long *)(param_2 + 0x30);
    param_1[1] = *(long *)(param_2 + 0x28);
    *param_1 = lVar7;
    param_1[3] = lVar9;
    param_1[2] = lVar8;
    *(undefined2 *)(param_1 + 4) = 0;
    uVar1 = *(ulong *)(param_2 + 0x28) & 0xff;
    if (puVar4 != (undefined8 *)0x0) {
      uVar1 = *(ulong *)(param_2 + 0x28);
    }
    param_1[5] = uVar1;
    return;
  }
  if ((param_3 & 1) == 0) {
    FUN_00312450(&local_30);
    *(undefined2 *)(param_1 + 4) = 0x80;
    uVar1 = uStack_28 & 0xff;
    if (local_30 != 0) {
      uVar1 = uStack_28;
    }
    param_1[1] = uStack_28;
    *param_1 = local_30;
    param_1[3] = lStack_18;
    param_1[2] = lStack_20;
    param_1[5] = uVar1;
    return;
  }
  puVar4 = (undefined8 *)*plVar5;
  if ((puVar4 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar4, plVar6 != (long *)0x0)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar4 = (undefined8 *)*plVar5;
  }
  lVar8 = *(long *)(param_2 + 0x28);
  lVar7 = *plVar5;
  lVar10 = *(long *)(param_2 + 0x38);
  lVar9 = *(long *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 4) = 0x100;
  param_1[1] = lVar8;
  *param_1 = lVar7;
  param_1[3] = lVar10;
  param_1[2] = lVar9;
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xff;
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *(ulong *)(param_2 + 0x28);
  }
  param_1[5] = uVar1 + 1;
  return;
}


