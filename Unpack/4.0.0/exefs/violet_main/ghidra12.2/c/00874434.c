/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00874434; name: FUN_00874434
 */


void FUN_00874434(long *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long *plVar13;
  long local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_047d1d08 + 0x10);
  param_1[1] = 0xffffffff;
  plVar13 = param_1 + 4;
  *plVar13 = 0;
  param_1[5] = 0;
  lVar8 = *(long *)(param_2 + 0x48);
  param_1[7] = *(long *)(param_2 + 0x38);
  param_1[9] = lVar8;
  lVar8 = *(long *)(param_2 + 0x30);
  param_1[8] = *(long *)(param_2 + 0x40);
  param_1[6] = lVar8;
  lVar8 = *(long *)(param_2 + 0x20);
  uVar2 = *(uint *)(param_2 + 0x28);
  puVar1 = (undefined4 *)0x0;
  if (lVar8 != 0) {
    puVar1 = (undefined4 *)(lVar8 + param_2 + 0x20);
  }
  if (0 < (int)uVar2 && puVar1 != (undefined4 *)0x0) {
    uVar5 = uVar2 - 1 | (int)(uVar2 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = (uVar5 | (int)uVar5 >> 1) + 1;
    if ((int)uVar5 < (int)uVar2) {
      local_58 = 0;
      local_68 = 0;
      puStack_60 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow",&local_68);
    }
    puVar6 = PTR_DAT_047d1a08;
    local_68 = (long)(int)uVar5 * 6;
    puVar7 = (undefined4 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    uVar3 = *(uint *)(param_1 + 5);
    puVar12 = (undefined4 *)0x0;
    if (param_1[4] != 0) {
      puVar12 = (undefined4 *)(param_1[4] + (long)plVar13);
    }
    if (0 < (int)uVar3) {
      if (uVar3 == 1) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        puVar10 = puVar12;
        puVar11 = puVar7;
        do {
          uVar4 = *puVar10;
          lVar8 = lVar8 + 2;
          *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(puVar10 + 1);
          *puVar11 = uVar4;
          uVar4 = *(undefined4 *)((long)puVar10 + 6);
          *(undefined2 *)((long)puVar11 + 10) = *(undefined2 *)((long)puVar10 + 10);
          *(undefined4 *)((long)puVar11 + 6) = uVar4;
          puVar11 = puVar11 + 3;
          puVar10 = puVar10 + 3;
        } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar8);
      }
      if ((uVar3 & 1) != 0) {
        puVar12 = (undefined4 *)((long)puVar12 + lVar8 * 6);
        puVar11 = (undefined4 *)((long)puVar7 + lVar8 * 6);
        uVar4 = *puVar12;
        *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(puVar12 + 1);
        *puVar11 = uVar4;
      }
    }
    if (*(int *)((long)param_1 + 0x2c) < 0) {
      lVar8 = 0;
      if (*plVar13 != 0) {
        lVar8 = *plVar13 + (long)plVar13;
      }
      (**(code **)(puVar6 + 8))(0,lVar8,0);
    }
    lVar8 = 0;
    if (puVar7 != (undefined4 *)0x0) {
      lVar8 = (long)puVar7 - (long)plVar13;
    }
    *(uint *)(param_1 + 5) = uVar2;
    *(uint *)((long)param_1 + 0x2c) = uVar5 | 0x80000000;
    param_1[4] = lVar8;
    lVar9 = 0;
    if (uVar2 != 1) {
      lVar9 = 0;
      puVar7 = puVar1;
      puVar12 = (undefined4 *)(lVar8 + (long)plVar13);
      do {
        uVar4 = *puVar7;
        lVar9 = lVar9 + 2;
        *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(puVar7 + 1);
        *puVar12 = uVar4;
        uVar4 = *(undefined4 *)((long)puVar7 + 6);
        *(undefined2 *)((long)puVar12 + 10) = *(undefined2 *)((long)puVar7 + 10);
        *(undefined4 *)((long)puVar12 + 6) = uVar4;
        puVar12 = puVar12 + 3;
        puVar7 = puVar7 + 3;
      } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar9);
    }
    if ((uVar2 & 1) != 0) {
      puVar12 = (undefined4 *)(lVar8 + (long)plVar13 + lVar9 * 6);
      puVar1 = (undefined4 *)((long)puVar1 + lVar9 * 6);
      uVar4 = *puVar1;
      *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(puVar1 + 1);
      *puVar12 = uVar4;
    }
  }
  return;
}


