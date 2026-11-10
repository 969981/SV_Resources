/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030c9b7c; name: FUN_030c9b7c
 */


void FUN_030c9b7c(long *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  
  puVar5 = PTR_DAT_047e5100;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[5] = *(long *)(param_2 + 0x28);
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  puVar5 = PTR_PTR_047d1a50;
  uVar4 = *(uint *)(param_2 + 0x38);
  if ((int)uVar4 < 1) {
    param_1[6] = 0;
    param_1[7] = -0x8000000000000000;
  }
  else {
    puVar12 = *(undefined8 **)(param_2 + 0x30);
    puVar6 = (undefined8 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 << 4);
    param_1[6] = (long)puVar6;
    *(uint *)(param_1 + 7) = uVar4;
    *(uint *)((long)param_1 + 0x3c) = uVar4;
    if (uVar4 != 1) {
      iVar10 = -(uVar4 & 0xfffffffe);
      puVar7 = puVar6;
      do {
        puVar7[1] = puVar12[1];
        *puVar7 = *puVar12;
        puVar7[3] = puVar12[3];
        puVar2 = puVar12 + 2;
        puVar6 = puVar7 + 4;
        puVar12 = puVar12 + 4;
        iVar10 = iVar10 + 2;
        puVar7[2] = *puVar2;
        puVar7 = puVar6;
      } while (iVar10 != 0);
    }
    if ((uVar4 & 1) != 0) {
      puVar6[1] = puVar12[1];
      *puVar6 = *puVar12;
    }
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = 0;
  param_1[10] = -0x8000000000000000;
  uVar4 = *(uint *)(param_2 + 0x50);
  if ((int)uVar4 < 1) {
    param_1[9] = 0;
    param_1[10] = -0x8000000000000000;
  }
  else {
    puVar11 = *(undefined4 **)(param_2 + 0x48);
    puVar8 = (undefined4 *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,(ulong)uVar4 << 2);
    uVar3 = uVar4 & 3;
    param_1[9] = (long)puVar8;
    *(uint *)(param_1 + 10) = uVar4;
    *(uint *)((long)param_1 + 0x54) = uVar4;
    if (2 < uVar4 - 1) {
      iVar10 = -(uVar4 & 0xfffffffc);
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar11;
        puVar9[1] = puVar11[1];
        puVar9[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar8 = puVar9 + 4;
        puVar11 = puVar11 + 4;
        iVar10 = iVar10 + 4;
        puVar9[3] = *puVar1;
        puVar9 = puVar8;
      } while (iVar10 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar8 = *puVar11;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  memcpy(param_1 + 0xb,(void *)(param_2 + 0x58),0x68);
  return;
}


