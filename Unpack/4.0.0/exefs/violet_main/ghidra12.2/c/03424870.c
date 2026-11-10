/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03424870; name: FUN_03424870
 */


ulong * FUN_03424870(long *param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar7;
  undefined8 *puVar6;
  ulong uVar8;
  
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar1 = uVar4 + (uVar5 >> 1);
      uVar8 = *(ulong *)(*param_1 +
                        (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
      if (uVar8 == param_2) {
        *param_3 = 1;
        return (ulong *)(*param_1 + (long)(int)uVar1 * 0x10);
      }
      if (uVar8 < param_2) {
        uVar4 = uVar1 + 1;
      }
      uVar5 = uVar5 - (uVar8 < param_2) >> 1;
    } while (uVar5 != 0);
    uVar8 = (ulong)uVar4;
  }
  *param_3 = 0;
  uVar4 = *(uint *)(param_1 + 1);
  uVar5 = *(uint *)((long)param_1 + 0xc);
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (uVar5 <= uVar4) {
      uVar5 = uVar5 + 0x20;
      lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,0,(ulong)uVar5 << 4);
      if (lVar3 == 0) {
        return (ulong *)0x0;
      }
      *param_1 = lVar3;
      *(uint *)((long)param_1 + 0xc) = uVar5;
    }
    else {
      lVar3 = 0;
    }
    if (uVar5 <= uVar4) {
      return (ulong *)0x0;
    }
    puVar2 = (ulong *)(lVar3 + (ulong)*(uint *)(param_1 + 1) * 0x10);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (lVar3 != 0) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      goto LAB_03424a10;
    }
  }
  else {
    if (uVar5 <= uVar4) {
      uVar5 = uVar5 + 0x20;
      lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,lVar3,(ulong)uVar5 << 4);
      if (lVar3 == 0) {
        return (ulong *)0x0;
      }
      *param_1 = lVar3;
      *(uint *)((long)param_1 + 0xc) = uVar5;
    }
    if (uVar5 <= uVar4) {
      return (ulong *)0x0;
    }
    puVar6 = (undefined8 *)(lVar3 + (ulong)*(uint *)(param_1 + 1) * 0x10);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = 0;
    lVar3 = *param_1;
    if ((undefined8 *)(lVar3 + uVar8 * 0x10) < puVar6) {
      do {
        puVar7 = puVar6 + -2;
        *puVar6 = *puVar7;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar6 + -1);
        lVar3 = *param_1;
        puVar6 = puVar7;
      } while ((undefined8 *)(lVar3 + uVar8 * 0x10) < puVar7);
    }
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      puVar6 = (undefined8 *)(lVar3 + uVar8 * 0x10);
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      lVar3 = *param_1;
    }
    puVar2 = (ulong *)(lVar3 + uVar8 * 0x10);
  }
  if (puVar2 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
LAB_03424a10:
  *puVar2 = param_2;
  return puVar2;
}


