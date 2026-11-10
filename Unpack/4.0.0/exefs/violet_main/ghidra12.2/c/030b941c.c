/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030b941c; name: FUN_030b941c
 */


void FUN_030b941c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  puVar4 = PTR_PTR_047d1a50;
  uVar3 = *(uint *)(param_2 + 1);
  if ((int)uVar3 < 1) {
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
  }
  else {
    puVar8 = (undefined4 *)*param_2;
    puVar5 = (undefined4 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar3 << 2);
    uVar2 = uVar3 & 3;
    *param_1 = puVar5;
    *(uint *)(param_1 + 1) = uVar3;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    if (2 < uVar3 - 1) {
      iVar7 = -(uVar3 & 0xfffffffc);
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar8;
        puVar6[1] = puVar8[1];
        puVar6[2] = puVar8[2];
        puVar1 = puVar8 + 3;
        puVar5 = puVar6 + 4;
        puVar8 = puVar8 + 4;
        iVar7 = iVar7 + 4;
        puVar6[3] = *puVar1;
        puVar6 = puVar5;
      } while (iVar7 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar8;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 3);
  if ((int)uVar3 < 1) {
    param_1[2] = 0;
    param_1[3] = 0x8000000000000000;
  }
  else {
    puVar8 = (undefined4 *)param_2[2];
    puVar5 = (undefined4 *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,(ulong)uVar3 << 2);
    uVar2 = uVar3 & 3;
    param_1[2] = puVar5;
    *(uint *)(param_1 + 3) = uVar3;
    *(uint *)((long)param_1 + 0x1c) = uVar3;
    if (2 < uVar3 - 1) {
      iVar7 = -(uVar3 & 0xfffffffc);
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar8;
        puVar6[1] = puVar8[1];
        puVar6[2] = puVar8[2];
        puVar1 = puVar8 + 3;
        puVar5 = puVar6 + 4;
        puVar8 = puVar8 + 4;
        iVar7 = iVar7 + 4;
        puVar6[3] = *puVar1;
        puVar6 = puVar5;
      } while (iVar7 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar8;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
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
    puVar8 = (undefined4 *)param_2[4];
    puVar5 = (undefined4 *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,(ulong)uVar3 << 2);
    uVar2 = uVar3 & 3;
    param_1[4] = puVar5;
    *(uint *)(param_1 + 5) = uVar3;
    *(uint *)((long)param_1 + 0x2c) = uVar3;
    if (2 < uVar3 - 1) {
      iVar7 = -(uVar3 & 0xfffffffc);
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar8;
        puVar6[1] = puVar8[1];
        puVar6[2] = puVar8[2];
        puVar1 = puVar8 + 3;
        puVar5 = puVar6 + 4;
        puVar8 = puVar8 + 4;
        iVar7 = iVar7 + 4;
        puVar6[3] = *puVar1;
        puVar6 = puVar5;
      } while (iVar7 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar8;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 7);
  if ((int)uVar3 < 1) {
    param_1[6] = 0;
    param_1[7] = 0x8000000000000000;
  }
  else {
    puVar8 = (undefined4 *)param_2[6];
    puVar5 = (undefined4 *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,(ulong)uVar3 << 2);
    uVar2 = uVar3 & 3;
    param_1[6] = puVar5;
    *(uint *)(param_1 + 7) = uVar3;
    *(uint *)((long)param_1 + 0x3c) = uVar3;
    if (2 < uVar3 - 1) {
      iVar7 = -(uVar3 & 0xfffffffc);
      puVar6 = puVar5;
      do {
        *puVar6 = *puVar8;
        puVar6[1] = puVar8[1];
        puVar6[2] = puVar8[2];
        puVar1 = puVar8 + 3;
        puVar5 = puVar6 + 4;
        puVar8 = puVar8 + 4;
        iVar7 = iVar7 + 4;
        puVar6[3] = *puVar1;
        puVar6 = puVar5;
      } while (iVar7 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar8;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  memcpy(param_1 + 8,param_2 + 8,0x60);
  return;
}


