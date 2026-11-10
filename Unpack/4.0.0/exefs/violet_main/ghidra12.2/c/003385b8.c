/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003385b8; name: FUN_003385b8
 */


void FUN_003385b8(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  
  puVar2 = PTR_LAB_047cba48;
  uVar3 = *param_1;
  if ((uVar3 & 1) == 0) {
    puVar10 = param_1 + 1;
    uVar5 = 4;
    if (param_3 < 5) goto LAB_003385f8;
LAB_00338628:
    puVar11 = (ulong *)(uVar3 >> 1);
    uVar3 = param_3;
    if (param_3 <= uVar5 << 1) {
      uVar3 = uVar5 << 1;
    }
    puVar9 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar3 << 3);
    puVar8 = puVar9;
    uVar5 = param_3;
  }
  else {
    puVar10 = (ulong *)param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < param_3) goto LAB_00338628;
LAB_003385f8:
    uVar3 = uVar3 >> 1;
    puVar11 = (ulong *)(uVar3 - param_3);
    puVar8 = puVar10;
    if (uVar3 < param_3) {
      puVar11 = (ulong *)0x0;
      puVar9 = puVar10 + uVar3;
      uVar5 = param_3 - uVar3;
      puVar10 = (ulong *)0x0;
    }
    else {
      uVar5 = 0;
      puVar9 = (ulong *)0x0;
      puVar10 = puVar10 + param_3;
      uVar3 = param_3;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar4 = *param_2;
      *param_2 = 0;
      puVar7 = (undefined8 *)*puVar8;
      *puVar8 = uVar4;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7);
        FUN_0049e790(puVar2,puVar7);
      }
      param_2 = param_2 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar3 = 0;
    puVar8 = (ulong *)0x0;
    if (uVar5 == 0) goto LAB_00338720;
  }
  if (uVar5 == 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar6 = *param_2;
      puVar1 = puVar9 + uVar4;
      *param_2 = 0;
      *puVar1 = uVar6;
      uVar6 = param_2[1];
      uVar4 = uVar4 + 2;
      param_2[1] = 0;
      param_2 = param_2 + 2;
      puVar1[1] = uVar6;
    } while ((uVar5 & 0xfffffffffffffffe) != uVar4);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = *param_2;
    *param_2 = 0;
    puVar9[uVar4] = uVar5;
  }
LAB_00338720:
  puVar2 = PTR_LAB_047cba48;
  puVar9 = puVar10;
  if (puVar11 != (ulong *)0x0) {
    while (puVar9 != (ulong *)0x0) {
      puVar9 = (ulong *)((long)puVar11 + -1);
      puVar7 = (undefined8 *)puVar10[(long)puVar11 + -1];
      puVar10[(long)puVar11 + -1] = 0;
      puVar11 = puVar9;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7);
        FUN_0049e790(puVar2,puVar7);
      }
    }
  }
  uVar5 = *param_1;
  if (puVar8 != (ulong *)0x0) {
    if ((uVar5 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar5 = *param_1;
    }
    uVar5 = uVar5 | 1;
    param_1[1] = (ulong)puVar8;
    param_1[2] = uVar3;
    *param_1 = uVar5;
  }
  *param_1 = uVar5 & 1 | param_3 << 1;
  return;
}


