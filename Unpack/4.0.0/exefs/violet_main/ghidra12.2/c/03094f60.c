/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03094f60; name: FUN_03094f60
 */


void FUN_03094f60(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined4 *puVar10;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  puVar5 = PTR_PTR_047d1a50;
  uVar3 = *(uint *)(param_2 + 1);
  uVar9 = (ulong)uVar3;
  if ((int)uVar3 < 1) {
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
  }
  else {
    puVar10 = (undefined4 *)*param_2;
    puVar6 = (undefined4 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar9 * 0x14);
    *param_1 = puVar6;
    *(uint *)(param_1 + 1) = uVar3;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    do {
      *puVar6 = *puVar10;
      puVar6[1] = puVar10[1];
      uVar4 = puVar10[4];
      uVar3 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar3;
      *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar10 + 2);
      puVar6[4] = uVar4;
      puVar10 = puVar10 + 5;
      puVar6 = puVar6 + 5;
    } while (uVar3 != 0);
  }
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 3);
  if ((int)uVar3 < 1) {
    param_1[2] = 0;
    param_1[3] = 0x8000000000000000;
  }
  else {
    puVar6 = (undefined4 *)param_2[2];
    puVar10 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,(ulong)uVar3 << 2);
    uVar2 = uVar3 & 3;
    param_1[2] = puVar10;
    *(uint *)(param_1 + 3) = uVar3;
    *(uint *)((long)param_1 + 0x1c) = uVar3;
    if (2 < uVar3 - 1) {
      iVar8 = -(uVar3 & 0xfffffffc);
      puVar7 = puVar10;
      do {
        *puVar7 = *puVar6;
        puVar7[1] = puVar6[1];
        puVar7[2] = puVar6[2];
        puVar1 = puVar6 + 3;
        puVar10 = puVar7 + 4;
        puVar6 = puVar6 + 4;
        iVar8 = iVar8 + 4;
        puVar7[3] = *puVar1;
        puVar7 = puVar10;
      } while (iVar8 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar10 = *puVar6;
      puVar10 = puVar10 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 5);
  if ((int)uVar3 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    puVar6 = (undefined4 *)param_2[4];
    puVar10 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,(ulong)uVar3 << 2);
    uVar2 = uVar3 & 3;
    param_1[4] = puVar10;
    *(uint *)(param_1 + 5) = uVar3;
    *(uint *)((long)param_1 + 0x2c) = uVar3;
    if (2 < uVar3 - 1) {
      iVar8 = -(uVar3 & 0xfffffffc);
      puVar7 = puVar10;
      do {
        *puVar7 = *puVar6;
        puVar7[1] = puVar6[1];
        puVar7[2] = puVar6[2];
        puVar1 = puVar6 + 3;
        puVar10 = puVar7 + 4;
        puVar6 = puVar6 + 4;
        iVar8 = iVar8 + 4;
        puVar7[3] = *puVar1;
        puVar7 = puVar10;
      } while (iVar8 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar10 = *puVar6;
      puVar10 = puVar10 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return;
}


