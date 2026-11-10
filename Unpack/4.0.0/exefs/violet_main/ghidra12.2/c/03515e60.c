/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03515e60; name: FUN_03515e60
 */


undefined8 FUN_03515e60(undefined8 *param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined4 local_54;
  undefined1 auStack_38 [8];
  
  piVar10 = (int *)((long)param_1 + 0x24);
  if ((*piVar10 == 0) ||
     (puVar11 = (uint *)((long)param_1 + 0x3c), *(uint *)(param_1 + 8) <= *puVar11)) {
    return 0;
  }
  lVar13 = param_1[3];
  uVar14 = (ulong)*(ushort *)((long)param_1 + 0x22);
  lVar12 = param_1[6];
  uVar2 = *(ushort *)(param_1 + 7);
  if (*(char *)(lVar13 + uVar14 * 0x5f0 + 0x5ec) != '\0') {
    uVar8 = (**(code **)(*(long *)*param_1 + 0x18))();
    if ((uVar8 & 1) != 0) {
      (**(code **)(*(long *)*param_1 + 0x28))();
    }
    iVar7 = (**(code **)(*(long *)*param_1 + 0x20))
                      ((long *)*param_1,*(undefined4 *)(param_1 + 9),
                       *(undefined4 *)((long)param_1 + 0x4c),param_1[1],param_1[2]);
    if (iVar7 != 0) goto LAB_03515f3c;
  }
  uVar3 = *(int *)((long)param_1 + 0x4c) * *(int *)(param_1 + 10);
  lVar9 = lVar13 + uVar14 * 0x5f0;
  iVar7 = (**(code **)(*(long *)*param_1 + 0x48))
                    ((long *)*param_1,auStack_38,&local_54,lVar12 + (ulong)uVar2 * 0xf08,
                     -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1,lVar9,
                     *(undefined4 *)(lVar9 + 0x5e4));
  if (iVar7 == 0) {
    lVar13 = lVar13 + uVar14 * 0x5f0;
    if (*(uint *)(lVar13 + 0x5e8) < *(uint *)(param_1 + 10)) {
      lVar12 = lVar12 + (ulong)uVar2 * 0xf08;
      *(undefined4 *)(lVar12 + 0xf00) = local_54;
      *(undefined4 *)(lVar12 + 0xf04) = *(undefined4 *)(lVar13 + 0x5e8);
      uVar3 = *(uint *)(param_1 + 8);
      sVar6 = 0;
      if (uVar3 != 0) {
        sVar6 = (short)((*(ushort *)(param_1 + 7) + 1) / uVar3);
      }
      *(short *)(param_1 + 7) = (short)(*(ushort *)(param_1 + 7) + 1) - sVar6 * (short)uVar3;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar11,0x10);
        if (bVar5) {
          *puVar11 = *puVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar3 = *(ushort *)((long)param_1 + 0x22) + 1;
    uVar1 = *(uint *)(param_1 + 5);
    sVar6 = 0;
    if (uVar1 != 0) {
      sVar6 = (short)(uVar3 / uVar1);
    }
    *(short *)((long)param_1 + 0x22) = (short)uVar3 - sVar6 * (short)uVar1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = *piVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    return 1;
  }
LAB_03515f3c:
  *(undefined1 *)((long)param_1 + 0x54) = 1;
  return 0;
}


