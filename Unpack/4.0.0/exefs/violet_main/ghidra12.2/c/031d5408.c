/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d5408; name: FUN_031d5408
 */


undefined8 FUN_031d5408(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_047e5b40;
  if (((((uint)*param_1 >> 5 & 1) != 0) &&
      (plVar8 = (long *)param_1[(ulong)(byte)POPCOUNT((byte)*param_1 & 0x1f) + 2],
      plVar8 != (long *)0x0)) && (*plVar8 != 0)) {
    lVar10 = *plVar8 << 4;
    do {
      plVar7 = plVar8 + 2;
      uVar6 = FUN_0221d7c0(*plVar7,puVar5);
      if ((uVar6 & 1) != 0) {
        puVar2 = (undefined8 *)plVar8[1];
        puVar9 = (ulong *)*plVar7;
        goto joined_r0x031d5484;
      }
      lVar10 = lVar10 + -0x10;
      plVar8 = plVar7;
    } while (lVar10 != 0);
  }
  return 0;
joined_r0x031d5484:
  if (puVar9 == (ulong *)0x0) {
LAB_031d54fc:
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    (*(code *)*puVar2)(param_1,puVar2[1],puVar2[2]);
    return 1;
  }
  uVar6 = *puVar9;
  if (((uint)uVar6 >> 2 & 1) != 0) {
    uVar6 = puVar9[(uVar6 >> 1 & 1) + (uVar6 & 1) + 2];
    if ((uVar6 & 1) != 0) {
      piVar1 = (int *)((uVar6 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7 = (long *)(uVar6 & 0xfffffffffffffffe);
      plVar8 = plVar7 + 1;
      do {
        lVar10 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar10 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    goto LAB_031d54fc;
  }
  puVar9 = (ulong *)puVar9[1];
  goto joined_r0x031d5484;
}


