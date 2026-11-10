/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ed7cc; name: FUN_008ed7cc
 */


void FUN_008ed7cc(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5
                 ,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar17 = *(undefined8 **)(param_3 + 0x418);
  if (*(int *)((long)puVar17 + 0x24) != 0) {
    uVar15 = *(undefined8 *)(param_6 + 0x30);
    lVar18 = *(long *)(*(long *)(param_3 + 0x238) + 0x338);
    if (param_4 == 3) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(*(long *)(param_3 + 0x238) + (ulong)param_4 * 8 + 0x340);
    }
    uVar9 = FUN_008dfe14(param_2,param_3,param_4,lVar16);
    if ((uVar9 & 1) != 0) {
      uVar6 = *(undefined4 *)(*(long *)(param_3 + 0x238) + 0x3d0);
      uVar10 = FUN_008ee7cc(param_3 + 0x7a8,*(undefined4 *)(puVar17 + 5));
      FUN_008f0b9c(param_2,uVar6,uVar10,0x50,*(undefined8 *)(param_3 + 0x818));
      uVar12 = puVar17[2];
      uVar14 = puVar17[3];
      uVar10 = *puVar17;
      uVar3 = puVar17[1];
      lVar13 = *(long *)PTR_DAT_047d26b8;
      uVar1 = *(undefined8 *)(lVar13 + 8);
      uVar4 = *(undefined8 *)(lVar13 + 0x10);
      uVar2 = *(undefined8 *)(lVar13 + 8);
      uVar5 = *(undefined8 *)(lVar13 + 0x10);
      uVar6 = *(undefined4 *)(param_3 + 0x44);
      iVar7 = *(int *)((long)puVar17 + 0x24);
      iVar8 = *(int *)(*(long *)(param_3 + 0xa0) + 0x8b8);
      local_70 = 0;
      uStack_68 = 0;
      puVar11 = (undefined8 *)FUN_00c5b304(uVar15,&local_70,0x60);
      if (puVar11 == (undefined8 *)0x0) {
        FUN_008d43d0(0,0x8000);
        iVar7 = *(int *)(lVar18 + 8);
      }
      else {
        puVar11[2] = uVar10;
        puVar11[3] = uVar3;
        *puVar11 = uVar12;
        puVar11[1] = uVar14;
        *(undefined4 *)(puVar11 + 8) = uVar6;
        puVar11[6] = uVar2;
        puVar11[7] = uVar5;
        *(float *)((long)puVar11 + 0x44) = (float)iVar7 * 0.5;
        puVar11[4] = uVar1;
        puVar11[5] = uVar4;
        *(undefined4 *)(puVar11 + 9) = 0;
        *(float *)((long)puVar11 + 0x4c) = (float)iVar8;
        puVar11[10] = local_c0;
        puVar11[0xb] = uStack_b8;
        iVar7 = *(int *)(lVar16 + 0x148);
        if (*(int *)(lVar16 + 0x144) != -1) {
          FUN_008f1150(param_2,*(int *)(lVar16 + 0x144),0,&local_70,0x60);
        }
        if (iVar7 != -1) {
          FUN_008f1150(param_2,iVar7,4,&local_70,0x60);
        }
        FUN_00c5af84(uVar15);
        FUN_00d8d0f0(param_2,4,*(undefined4 *)((long)puVar17 + 0x24),0);
        iVar7 = *(int *)(lVar18 + 8);
      }
      if (iVar7 == 1) {
        uVar10 = puVar17[2];
        uVar4 = puVar17[3];
        uVar1 = *puVar17;
        uVar5 = puVar17[1];
        lVar18 = *(long *)PTR_DAT_047d26b8;
        uVar2 = *(undefined8 *)(lVar18 + 8);
        uVar12 = *(undefined8 *)(lVar18 + 0x10);
        uVar3 = *(undefined8 *)(lVar18 + 8);
        uVar14 = *(undefined8 *)(lVar18 + 0x10);
        uVar6 = *(undefined4 *)(param_3 + 0x44);
        iVar7 = *(int *)((long)puVar17 + 0x24);
        iVar8 = *(int *)(*(long *)(param_3 + 0xa0) + 0x8b8);
        local_70 = 0;
        uStack_68 = 0;
        puVar11 = (undefined8 *)FUN_00c5b304(uVar15,&local_70,0x60);
        if (puVar11 == (undefined8 *)0x0) {
          FUN_008d43d0(0,0x8000);
        }
        else {
          puVar11[2] = uVar1;
          puVar11[3] = uVar5;
          *puVar11 = uVar10;
          puVar11[1] = uVar4;
          *(undefined4 *)(puVar11 + 8) = uVar6;
          puVar11[4] = uVar2;
          puVar11[5] = uVar12;
          puVar11[6] = uVar3;
          puVar11[7] = uVar14;
          *(undefined4 *)(puVar11 + 9) = 0x3f800000;
          *(float *)((long)puVar11 + 0x44) = (float)iVar7 * 0.5;
          *(float *)((long)puVar11 + 0x4c) = (float)iVar8;
          puVar11[10] = local_c0;
          puVar11[0xb] = uStack_b8;
          iVar7 = *(int *)(lVar16 + 0x148);
          if (*(int *)(lVar16 + 0x144) != -1) {
            FUN_008f1150(param_2,*(int *)(lVar16 + 0x144),0,&local_70,0x60);
          }
          if (iVar7 != -1) {
            FUN_008f1150(param_2,iVar7,4,&local_70,0x60);
          }
          FUN_00c5af84(uVar15);
          FUN_00d8d0f0(param_2,4,*(undefined4 *)((long)puVar17 + 0x24),0);
        }
      }
    }
  }
  return;
}


