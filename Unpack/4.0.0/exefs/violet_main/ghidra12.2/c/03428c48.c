/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03428c48; name: FUN_03428c48
 */


ulong * FUN_03428c48(long *param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar10;
  undefined8 *puVar9;
  undefined8 *puVar11;
  ulong uVar12;
  
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 == 0) {
    uVar12 = 0;
  }
  else {
    uVar7 = 0;
    do {
      iVar1 = uVar7 + (uVar8 >> 1);
      puVar5 = (ulong *)(*param_1 + (long)iVar1 * 0x40);
      uVar12 = *puVar5;
      uVar2 = puVar5[1];
      if (uVar12 == param_2 && uVar2 == param_3) {
        *param_4 = 1;
        return (ulong *)(*param_1 + (long)iVar1 * 0x40);
      }
      bVar4 = uVar2 < param_3;
      if (uVar12 != param_2) {
        bVar4 = uVar12 < param_2;
      }
      if (bVar4 != 0) {
        uVar7 = iVar1 + 1;
      }
      uVar8 = uVar8 - bVar4 >> 1;
    } while (uVar8 != 0);
    uVar12 = (ulong)uVar7;
  }
  *param_4 = 0;
  uVar7 = *(uint *)(param_1 + 1);
  uVar8 = *(uint *)((long)param_1 + 0xc);
  lVar6 = *param_1;
  if (lVar6 == 0) {
    if (uVar8 <= uVar7) {
      uVar8 = uVar8 + 0x20;
      lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,0,(ulong)uVar8 << 6);
      if (lVar6 == 0) {
        return (ulong *)0x0;
      }
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = uVar8;
    }
    else {
      lVar6 = 0;
    }
    if (uVar8 <= uVar7) {
      return (ulong *)0x0;
    }
    puVar5 = (ulong *)(lVar6 + (ulong)*(uint *)(param_1 + 1) * 0x40);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (lVar6 != 0) {
      *puVar5 = 0xffffffffffffffff;
      puVar5[1] = 0xffffffffffffffff;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[2] = (ulong)(PTR_DAT_047e6e80 + 0x10);
      puVar5[3] = 0;
      goto LAB_03428e68;
    }
  }
  else {
    if (uVar8 <= uVar7) {
      uVar8 = uVar8 + 0x20;
      lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,lVar6,(ulong)uVar8 << 6);
      if (lVar6 == 0) {
        return (ulong *)0x0;
      }
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = uVar8;
    }
    if (uVar8 <= uVar7) {
      return (ulong *)0x0;
    }
    puVar9 = (undefined8 *)(lVar6 + (ulong)*(uint *)(param_1 + 1) * 0x40);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    puVar9[4] = 0;
    *puVar9 = 0xffffffffffffffff;
    puVar9[1] = 0xffffffffffffffff;
    *(undefined4 *)(puVar9 + 5) = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar3 = PTR_DAT_047e6e80;
    puVar9[2] = PTR_DAT_047e6e80 + 0x10;
    puVar9[3] = 0;
    lVar6 = *param_1;
    puVar11 = (undefined8 *)(lVar6 + uVar12 * 0x40);
    if (puVar11 < puVar9) {
      do {
        puVar10 = puVar9 + -8;
        *puVar9 = *puVar10;
        puVar9[1] = puVar9[-7];
        puVar9[6] = puVar9[-2];
        puVar9[7] = puVar9[-1];
        puVar9[3] = puVar9[-5];
        *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar9 + -4);
        *(undefined8 *)((long)puVar9 + 0x24) = *(undefined8 *)((long)puVar9 + -0x1c);
        lVar6 = *param_1;
        puVar11 = (undefined8 *)(lVar6 + uVar12 * 0x40);
        puVar9 = puVar10;
      } while (puVar11 < puVar10);
    }
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      *puVar11 = 0xffffffffffffffff;
      puVar11[1] = 0xffffffffffffffff;
      lVar6 = lVar6 + uVar12 * 0x40;
      *(undefined4 *)(lVar6 + 0x28) = 0;
      *(undefined **)(lVar6 + 0x10) = puVar3 + 0x10;
      *(undefined8 *)(lVar6 + 0x30) = 0;
      *(undefined8 *)(lVar6 + 0x38) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(undefined8 *)(lVar6 + 0x20) = 0;
      lVar6 = *param_1;
    }
    puVar5 = (ulong *)(lVar6 + uVar12 * 0x40);
  }
  if (puVar5 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
LAB_03428e68:
  *puVar5 = param_2;
  puVar5[1] = param_3;
  return puVar5;
}


