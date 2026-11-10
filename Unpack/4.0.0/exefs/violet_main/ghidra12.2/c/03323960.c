/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03323960; name: FUN_03323960
 */


void FUN_03323960(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  ulong uVar8;
  
  puVar6 = (undefined8 *)PTR_DAT_047e61d0;
  pbVar5 = (byte *)param_2[1];
  pbVar7 = pbVar5;
  if ((*pbVar5 & 1) == 0) {
    do {
      pbVar7 = *(byte **)(pbVar7 + 8);
    } while ((*pbVar7 & 1) == 0);
  }
  if ((*(ulong *)(pbVar7 + 0x10) & 0x1f) != 8) {
    pbVar5 = (byte *)0x0;
  }
  do {
    if ((*pbVar5 & 1) != 0) {
      if ((pbVar5 != (byte *)0x0) && ((int)((ulong)*(undefined8 *)(pbVar5 + 0x10) >> 8) != 0))
      goto LAB_03323a14;
      break;
    }
    pbVar5 = *(byte **)(pbVar5 + 8);
  } while (pbVar5 != (byte *)0x0);
  if ((int)*(uint *)*param_2 < 0) {
LAB_03323a14:
    uVar2 = *(undefined8 *)(PTR_DAT_047e61d0 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_047e61d0;
    param_1[1] = uVar2;
    uVar8 = *(ulong *)((long)puVar6 + 0x10);
    param_1[2] = uVar8;
    if ((uVar8 & 1) != 0) {
      piVar1 = (int *)((uVar8 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    puVar6 = (undefined8 *)(*(long *)(param_2[2] + 0x228) + (ulong)*(uint *)*param_2 * 0x20);
    uVar2 = puVar6[1];
    *param_1 = *puVar6;
    param_1[1] = uVar2;
    uVar8 = puVar6[2];
    param_1[2] = uVar8;
    if ((uVar8 & 1) != 0) {
      piVar1 = (int *)((uVar8 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar6 + 3);
  return;
}


