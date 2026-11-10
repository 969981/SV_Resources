/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03042318; name: FUN_03042318
 */


void FUN_03042318(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  puVar3 = PTR_PTR_047d1a50;
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < 1) {
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
  }
  else {
    puVar7 = (undefined8 *)*param_2;
    puVar4 = (undefined8 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar2 << 4);
    *param_1 = (long)puVar4;
    *(uint *)(param_1 + 1) = uVar2;
    *(uint *)((long)param_1 + 0xc) = uVar2;
    if (uVar2 != 1) {
      iVar6 = -(uVar2 & 0xfffffffe);
      puVar5 = puVar4;
      do {
        puVar5[1] = puVar7[1];
        *puVar5 = *puVar7;
        puVar5[3] = puVar7[3];
        puVar1 = puVar7 + 2;
        puVar4 = puVar5 + 4;
        puVar7 = puVar7 + 4;
        iVar6 = iVar6 + 2;
        puVar5[2] = *puVar1;
        puVar5 = puVar4;
      } while (iVar6 != 0);
    }
    if ((uVar2 & 1) != 0) {
      puVar4[1] = puVar7[1];
      *puVar4 = *puVar7;
    }
  }
  param_1[2] = 0;
  param_1[3] = -0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 3);
  if ((int)uVar2 < 1) {
    param_1[2] = 0;
    param_1[3] = -0x8000000000000000;
  }
  else {
    puVar7 = (undefined8 *)param_2[2];
    puVar4 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x18))(puVar3,(ulong)uVar2 << 4);
    param_1[2] = (long)puVar4;
    *(uint *)(param_1 + 3) = uVar2;
    *(uint *)((long)param_1 + 0x1c) = uVar2;
    if (uVar2 != 1) {
      iVar6 = -(uVar2 & 0xfffffffe);
      puVar5 = puVar4;
      do {
        puVar5[1] = puVar7[1];
        *puVar5 = *puVar7;
        puVar5[3] = puVar7[3];
        puVar1 = puVar7 + 2;
        puVar4 = puVar5 + 4;
        puVar7 = puVar7 + 4;
        iVar6 = iVar6 + 2;
        puVar5[2] = *puVar1;
        puVar5 = puVar4;
      } while (iVar6 != 0);
    }
    if ((uVar2 & 1) != 0) {
      puVar4[1] = puVar7[1];
      *puVar4 = *puVar7;
    }
  }
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 5);
  if ((int)uVar2 < 1) {
    param_1[4] = 0;
    param_1[5] = -0x8000000000000000;
  }
  else {
    puVar7 = (undefined8 *)param_2[4];
    puVar4 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x18))(puVar3,(ulong)uVar2 << 4);
    param_1[4] = (long)puVar4;
    *(uint *)(param_1 + 5) = uVar2;
    *(uint *)((long)param_1 + 0x2c) = uVar2;
    if (uVar2 != 1) {
      iVar6 = -(uVar2 & 0xfffffffe);
      puVar5 = puVar4;
      do {
        puVar5[1] = puVar7[1];
        *puVar5 = *puVar7;
        puVar5[3] = puVar7[3];
        puVar1 = puVar7 + 2;
        puVar4 = puVar5 + 4;
        puVar7 = puVar7 + 4;
        iVar6 = iVar6 + 2;
        puVar5[2] = *puVar1;
        puVar5 = puVar4;
      } while (iVar6 != 0);
    }
    if ((uVar2 & 1) != 0) {
      puVar4[1] = puVar7[1];
      *puVar4 = *puVar7;
    }
  }
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 7);
  if ((int)uVar2 < 1) {
    param_1[6] = 0;
    param_1[7] = -0x8000000000000000;
  }
  else {
    puVar7 = (undefined8 *)param_2[6];
    puVar4 = (undefined8 *)(**(code **)(*(long *)puVar3 + 0x18))(puVar3,(ulong)uVar2 << 4);
    param_1[6] = (long)puVar4;
    *(uint *)(param_1 + 7) = uVar2;
    *(uint *)((long)param_1 + 0x3c) = uVar2;
    if (uVar2 != 1) {
      iVar6 = -(uVar2 & 0xfffffffe);
      puVar5 = puVar4;
      do {
        puVar5[1] = puVar7[1];
        *puVar5 = *puVar7;
        puVar5[3] = puVar7[3];
        puVar1 = puVar7 + 2;
        puVar4 = puVar5 + 4;
        puVar7 = puVar7 + 4;
        iVar6 = iVar6 + 2;
        puVar5[2] = *puVar1;
        puVar5 = puVar4;
      } while (iVar6 != 0);
    }
    if ((uVar2 & 1) != 0) {
      puVar4[1] = puVar7[1];
      *puVar4 = *puVar7;
    }
  }
  return;
}


