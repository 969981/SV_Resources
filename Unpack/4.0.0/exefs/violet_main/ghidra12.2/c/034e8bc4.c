/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e8bc4; name: FUN_034e8bc4
 */


undefined8 * FUN_034e8bc4(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  if (uVar2 == 0) {
    if (lVar3 == 0) {
      iVar10 = *(int *)((long)param_1 + 0xc);
      if (iVar10 == 0) {
        iVar10 = 1;
        lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,8);
        if (lVar3 == 0) {
          return (undefined8 *)0x0;
        }
        *param_1 = lVar3;
        *(undefined4 *)((long)param_1 + 0xc) = 1;
      }
      else {
        lVar3 = 0;
      }
      if (iVar10 == 0) {
        return (undefined8 *)0x0;
      }
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      return (undefined8 *)(lVar3 + (ulong)uVar2 * 8);
    }
    uVar9 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = uVar2;
    do {
      uVar9 = uVar4 + (uVar6 >> 1);
      uVar8 = *(ulong *)(*(long *)(lVar3 + (long)(int)uVar9 * 8) + 0x20);
      if (uVar8 == param_2) goto LAB_034e8c2c;
      if (param_2 <= uVar8) {
        uVar4 = uVar9 + 1;
      }
      uVar6 = uVar6 - (param_2 <= uVar8) >> 1;
    } while (uVar6 != 0);
    uVar9 = uVar4;
  }
LAB_034e8c2c:
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 <= uVar2) {
    iVar10 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar10 = 1;
    }
    uVar4 = iVar10 + uVar4;
    lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,lVar3,(ulong)uVar4 << 3);
    if (lVar3 == 0) {
      return (undefined8 *)0x0;
    }
    *param_1 = lVar3;
    *(uint *)((long)param_1 + 0xc) = uVar4;
  }
  if (uVar4 <= uVar2) {
    return (undefined8 *)0x0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (uVar2 <= uVar9) {
    return (undefined8 *)(lVar3 + (ulong)uVar9 * 8);
  }
  puVar7 = (undefined8 *)(lVar3 + (ulong)uVar2 * 8);
  do {
    puVar5 = puVar7 + -1;
    *puVar7 = *puVar5;
    puVar1 = (undefined8 *)(*param_1 + (ulong)uVar9 * 8);
    puVar7 = puVar5;
  } while (puVar1 < puVar5);
  return puVar1;
}


