/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03422e74; name: FUN_03422e74
 */


ulong * FUN_03422e74(long *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  uVar9 = *(uint *)(param_1 + 1);
  if (uVar9 == 0) {
    uVar10 = 0;
  }
  else {
    uVar5 = 0;
    do {
      iVar1 = uVar5 + (uVar9 >> 1);
      uVar10 = *(ulong *)(*param_1 + (long)iVar1 * 0x90);
      if (uVar10 == param_2) {
        *param_3 = 1;
        return (ulong *)(*param_1 + (long)iVar1 * 0x90);
      }
      if (uVar10 < param_2) {
        uVar5 = iVar1 + 1;
      }
      uVar9 = uVar9 - (uVar10 < param_2) >> 1;
    } while (uVar9 != 0);
    uVar10 = (ulong)uVar5;
  }
  *param_3 = 0;
  uVar9 = *(uint *)(param_1 + 1);
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if (*param_1 == 0) {
    if (uVar5 <= uVar9) {
      iVar1 = uVar5 + (uVar5 >> 1);
      if (uVar5 == 0) {
        iVar1 = 1;
      }
      uVar10 = FUN_034230cc(param_1,iVar1);
      if ((uVar10 & 1) == 0) {
        return (ulong *)0x0;
      }
      uVar5 = *(uint *)((long)param_1 + 0xc);
    }
    if (uVar5 <= uVar9) {
      return (ulong *)0x0;
    }
    uVar9 = *(uint *)(param_1 + 1);
    lVar7 = *param_1;
    *(uint *)(param_1 + 1) = uVar9 + 1;
    puVar4 = (ulong *)(lVar7 + (ulong)uVar9 * 0x90);
    if (lVar7 != 0) {
      *puVar4 = 0xffffffffffffffff;
      lVar7 = lVar7 + (ulong)uVar9 * 0x90;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0;
      *(undefined4 *)(lVar7 + 0x20) = 0;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined ***)(lVar7 + 8) = &PTR_LAB_047bf588;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined4 *)(lVar7 + 0x78) = 0;
      *(undefined8 *)(lVar7 + 0x80) = 0;
      *(undefined4 *)(lVar7 + 0x88) = 0;
      *(undefined1 *)(lVar7 + 0x8c) = 0;
      *(undefined8 *)(lVar7 + 0x50) = 0;
      *(undefined8 *)(lVar7 + 0x58) = 0;
      *(undefined8 *)(lVar7 + 0x68) = 0;
      *(undefined8 *)(lVar7 + 0x70) = 0;
      goto LAB_034230ac;
    }
  }
  else {
    if (uVar5 <= uVar9) {
      iVar1 = uVar5 + (uVar5 >> 1);
      if (uVar5 == 0) {
        iVar1 = 1;
      }
      uVar2 = FUN_034230cc(param_1,iVar1);
      if ((uVar2 & 1) == 0) {
        return (ulong *)0x0;
      }
      uVar5 = *(uint *)((long)param_1 + 0xc);
    }
    if (uVar5 <= uVar9) {
      return (ulong *)0x0;
    }
    uVar9 = *(uint *)(param_1 + 1);
    lVar6 = *param_1;
    *(uint *)(param_1 + 1) = uVar9 + 1;
    puVar3 = (undefined8 *)(lVar6 + (ulong)uVar9 * 0x90);
    lVar7 = 0;
    if (lVar6 != 0) {
      *puVar3 = 0xffffffffffffffff;
      lVar6 = lVar6 + (ulong)uVar9 * 0x90;
      *(undefined8 *)(lVar6 + 0x28) = 0;
      *(undefined8 *)(lVar6 + 0x30) = 0;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(undefined4 *)(lVar6 + 0x20) = 0;
      *(undefined ***)(lVar6 + 8) = &PTR_LAB_047bf588;
      *(undefined8 *)(lVar6 + 0x38) = 0;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(undefined4 *)(lVar6 + 0x78) = 0;
      *(undefined8 *)(lVar6 + 0x80) = 0;
      *(undefined4 *)(lVar6 + 0x88) = 0;
      *(undefined1 *)(lVar6 + 0x8c) = 0;
      *(undefined8 *)(lVar6 + 0x50) = 0;
      *(undefined8 *)(lVar6 + 0x58) = 0;
      *(undefined8 *)(lVar6 + 0x68) = 0;
      *(undefined8 *)(lVar6 + 0x70) = 0;
      lVar7 = *param_1;
    }
    puVar8 = (undefined8 *)(lVar7 + uVar10 * 0x90);
    if (puVar8 < puVar3) {
      do {
        puVar11 = puVar3 + -0x12;
        FUN_034115a8(puVar3,puVar11);
        puVar8 = (undefined8 *)(*param_1 + uVar10 * 0x90);
        puVar3 = puVar11;
      } while (puVar8 < puVar11);
    }
    FUN_03411470(puVar8);
    lVar7 = 0;
    if (*param_1 != 0) {
      puVar3 = (undefined8 *)(*param_1 + uVar10 * 0x90);
      puVar3[5] = 0;
      puVar3[6] = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      *puVar3 = 0xffffffffffffffff;
      puVar3[1] = &PTR_LAB_047bf588;
      puVar3[0x10] = 0;
      *(undefined4 *)(puVar3 + 0x11) = 0;
      *(undefined1 *)((long)puVar3 + 0x8c) = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      lVar7 = *param_1;
    }
    puVar4 = (ulong *)(lVar7 + uVar10 * 0x90);
  }
  if (puVar4 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
LAB_034230ac:
  *puVar4 = param_2;
  return puVar4;
}


