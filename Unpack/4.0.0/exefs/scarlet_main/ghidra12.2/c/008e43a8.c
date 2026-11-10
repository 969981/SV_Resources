/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e43a8; name: FUN_008e43a8
 */


void FUN_008e43a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar3 = *param_7;
  uVar4 = param_7[1];
  uVar15 = param_8[5];
  uVar14 = param_8[4];
  uVar11 = param_8[1];
  uVar8 = *param_8;
  uVar12 = param_8[3];
  uVar9 = param_8[2];
  uVar13 = param_8[9];
  uVar10 = param_8[8];
  iVar5 = *(int *)(param_8 + 0xe);
  iVar6 = *(int *)(param_6 + 0x28);
  uVar1 = *(undefined4 *)(param_8 + 0x10);
  uVar2 = *(undefined4 *)((long)param_8 + 0x84);
  local_70 = 0;
  uStack_68 = 0;
  puVar7 = (undefined8 *)FUN_00c5b304(param_3,&local_70,0x60);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_008d43d0(0,0x8000);
    iVar5 = *(int *)(param_6 + 8);
  }
  else {
    puVar7[1] = uVar15;
    *puVar7 = uVar14;
    *(undefined4 *)(puVar7 + 9) = 0;
    *(undefined4 *)((long)puVar7 + 0x4c) = uVar2;
    puVar7[5] = uVar11;
    puVar7[4] = uVar8;
    puVar7[7] = uVar12;
    puVar7[6] = uVar9;
    *(undefined4 *)(puVar7 + 8) = uVar1;
    *(float *)((long)puVar7 + 0x44) = (float)(iVar5 + iVar6 * (iVar5 + -1));
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
    puVar7[10] = uVar10;
    *(int *)(puVar7 + 0xb) = (int)uVar13;
    *(undefined4 *)((long)puVar7 + 0x5c) = 0;
    iVar5 = *(int *)(param_5 + 0x148);
    if (*(int *)(param_5 + 0x144) != -1) {
      FUN_008f1150(param_1,*(int *)(param_5 + 0x144),0,&local_70,0x60);
    }
    if (iVar5 != -1) {
      FUN_008f1150(param_1,iVar5,4,&local_70,0x60);
    }
    FUN_00c5af84(param_3);
    FUN_00d8d0f0(param_1,4,*(undefined4 *)(param_8 + 0xf),
                 *(int *)(param_7 + 4) * *(int *)((long)param_8 + 0x7c));
    iVar5 = *(int *)(param_6 + 8);
  }
  if (iVar5 == 1) {
    uVar3 = *param_7;
    uVar4 = param_7[1];
    uVar15 = param_8[5];
    uVar14 = param_8[4];
    uVar11 = param_8[1];
    uVar8 = *param_8;
    uVar12 = param_8[3];
    uVar9 = param_8[2];
    uVar13 = param_8[9];
    uVar10 = param_8[8];
    iVar5 = *(int *)(param_8 + 0xe);
    iVar6 = *(int *)(param_6 + 0x28);
    uVar1 = *(undefined4 *)(param_8 + 0x10);
    uVar2 = *(undefined4 *)((long)param_8 + 0x84);
    local_70 = 0;
    uStack_68 = 0;
    puVar7 = (undefined8 *)FUN_00c5b304(param_3,&local_70,0x60);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_008d43d0(0,0x8000);
    }
    else {
      puVar7[1] = uVar15;
      *puVar7 = uVar14;
      *(undefined4 *)(puVar7 + 8) = uVar1;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      *(undefined4 *)(puVar7 + 9) = 0x3f800000;
      *(undefined4 *)((long)puVar7 + 0x4c) = uVar2;
      *(float *)((long)puVar7 + 0x44) = (float)(iVar5 + iVar6 * (iVar5 + -1));
      puVar7[5] = uVar11;
      puVar7[4] = uVar8;
      puVar7[7] = uVar12;
      puVar7[6] = uVar9;
      puVar7[10] = uVar10;
      *(int *)(puVar7 + 0xb) = (int)uVar13;
      *(undefined4 *)((long)puVar7 + 0x5c) = 0;
      iVar5 = *(int *)(param_5 + 0x148);
      if (*(int *)(param_5 + 0x144) != -1) {
        FUN_008f1150(param_1,*(int *)(param_5 + 0x144),0,&local_70,0x60);
      }
      if (iVar5 != -1) {
        FUN_008f1150(param_1,iVar5,4,&local_70,0x60);
      }
      FUN_00c5af84(param_3);
      FUN_00d8d0f0(param_1,4,*(undefined4 *)(param_8 + 0xf),
                   *(int *)(param_7 + 4) * *(int *)((long)param_8 + 0x7c));
    }
  }
  return;
}


