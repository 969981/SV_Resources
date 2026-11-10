/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ccc90; name: FUN_034ccc90
 */


ulong * FUN_034ccc90(long *param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar8;
  undefined8 *puVar7;
  ulong uVar9;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == 0) {
    uVar9 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar1 = uVar5 + (uVar6 >> 1);
      uVar9 = *(ulong *)(*param_1 +
                        (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
      if (uVar9 == param_2) {
        *param_3 = 1;
        return (ulong *)(*param_1 + (long)(int)uVar1 * 0x10);
      }
      if (uVar9 < param_2) {
        uVar5 = uVar1 + 1;
      }
      uVar6 = uVar6 - (uVar9 < param_2) >> 1;
    } while (uVar6 != 0);
    uVar9 = (ulong)uVar5;
  }
  *param_3 = 0;
  uVar5 = *(uint *)(param_1 + 1);
  uVar6 = *(uint *)((long)param_1 + 0xc);
  lVar4 = *param_1;
  if (lVar4 == 0) {
    if (uVar6 <= uVar5) {
      iVar2 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar2 = 1;
      }
      uVar6 = iVar2 + uVar6;
      lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,0,(ulong)uVar6 << 4);
      if (lVar4 == 0) {
        return (ulong *)0x0;
      }
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar6;
    }
    else {
      lVar4 = 0;
    }
    if (uVar6 <= uVar5) {
      return (ulong *)0x0;
    }
    puVar3 = (ulong *)(lVar4 + (ulong)*(uint *)(param_1 + 1) * 0x10);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (lVar4 != 0) {
      *puVar3 = 0xffffffffffffffff;
      goto LAB_034cce44;
    }
  }
  else {
    if (uVar6 <= uVar5) {
      iVar2 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar2 = 1;
      }
      uVar6 = iVar2 + uVar6;
      lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,lVar4,(ulong)uVar6 << 4);
      if (lVar4 == 0) {
        return (ulong *)0x0;
      }
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar6;
    }
    if (uVar6 <= uVar5) {
      return (ulong *)0x0;
    }
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6 + 1;
    puVar7 = (undefined8 *)(lVar4 + (ulong)uVar6 * 0x10);
    *puVar7 = 0xffffffffffffffff;
    lVar4 = *param_1;
    if ((undefined8 *)(lVar4 + uVar9 * 0x10) < puVar7) {
      do {
        puVar8 = puVar7 + -2;
        *puVar7 = *puVar8;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar7 + -1);
        lVar4 = *param_1;
        puVar7 = puVar8;
      } while ((undefined8 *)(lVar4 + uVar9 * 0x10) < puVar8);
    }
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      *(undefined8 *)(lVar4 + uVar9 * 0x10) = 0xffffffffffffffff;
      lVar4 = *param_1;
    }
    puVar3 = (ulong *)(lVar4 + uVar9 * 0x10);
  }
  if (puVar3 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
LAB_034cce44:
  *puVar3 = param_2;
  return puVar3;
}


