/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ed24a8; name: FUN_02ed24a8
 */


void FUN_02ed24a8(long *param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long *plVar15;
  long local_58;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_047e34c8 + 0x10);
  param_1[1] = 0xffffffff;
  plVar15 = param_1 + 4;
  *plVar15 = 0;
  param_1[5] = 0;
  lVar2 = *(long *)(param_2 + 0x38);
  lVar10 = *(long *)(param_2 + 0x40);
  lVar3 = *(long *)(param_2 + 0x48);
  param_1[6] = *(long *)(param_2 + 0x30);
  param_1[7] = lVar2;
  param_1[8] = lVar10;
  param_1[9] = lVar3;
  lVar10 = *(long *)(param_2 + 0x20);
  uVar4 = *(uint *)(param_2 + 0x28);
  puVar1 = (undefined4 *)0x0;
  if (lVar10 != 0) {
    puVar1 = (undefined4 *)(lVar10 + param_2 + 0x20);
  }
  if (0 < (int)uVar4 && puVar1 != (undefined4 *)0x0) {
    uVar7 = uVar4 - 1 | (int)(uVar4 - 1) >> 0x10;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    puVar8 = PTR_DAT_047d1a08;
    uVar7 = uVar7 | (int)uVar7 >> 8;
    uVar7 = uVar7 | (int)uVar7 >> 4;
    uVar7 = uVar7 | (int)uVar7 >> 2;
    uVar7 = (uVar7 | (int)uVar7 >> 1) + 1;
    if ((int)uVar7 < (int)uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    local_58 = (long)(int)uVar7 * 6;
    puVar9 = (undefined4 *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    puVar13 = (undefined4 *)0x0;
    if (param_1[4] != 0) {
      puVar13 = (undefined4 *)(param_1[4] + (long)plVar15);
    }
    uVar5 = *(uint *)(param_1 + 5);
    if (0 < (int)uVar5) {
      if (uVar5 == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        puVar12 = puVar13;
        puVar14 = puVar9;
        do {
          uVar6 = *puVar12;
          uVar11 = uVar11 + 2;
          *(undefined2 *)(puVar14 + 1) = *(undefined2 *)(puVar12 + 1);
          *puVar14 = uVar6;
          uVar6 = *(undefined4 *)((long)puVar12 + 6);
          *(undefined2 *)((long)puVar14 + 10) = *(undefined2 *)((long)puVar12 + 10);
          *(undefined4 *)((long)puVar14 + 6) = uVar6;
          puVar14 = puVar14 + 3;
          puVar12 = puVar12 + 3;
        } while (((ulong)uVar5 & 0xfffffffe) != uVar11);
      }
      if ((uVar5 & 1) != 0) {
        puVar13 = (undefined4 *)((long)puVar13 + uVar11 * 6);
        puVar14 = (undefined4 *)((long)puVar9 + uVar11 * 6);
        uVar6 = *puVar13;
        *(undefined2 *)(puVar14 + 1) = *(undefined2 *)(puVar13 + 1);
        *puVar14 = uVar6;
      }
    }
    if (*(int *)((long)param_1 + 0x2c) < 0) {
      lVar10 = 0;
      if (*plVar15 != 0) {
        lVar10 = *plVar15 + (long)plVar15;
      }
      (**(code **)(puVar8 + 8))(0,lVar10,0);
    }
    lVar10 = 0;
    if (puVar9 != (undefined4 *)0x0) {
      lVar10 = (long)puVar9 - (long)plVar15;
    }
    uVar11 = 0;
    param_1[4] = lVar10;
    *(uint *)(param_1 + 5) = uVar4;
    *(uint *)((long)param_1 + 0x2c) = uVar7 | 0x80000000;
    if (uVar4 != 1) {
      uVar11 = 0;
      puVar9 = puVar1;
      puVar13 = (undefined4 *)(lVar10 + (long)plVar15);
      do {
        uVar6 = *puVar9;
        uVar11 = uVar11 + 2;
        *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar9 + 1);
        *puVar13 = uVar6;
        uVar6 = *(undefined4 *)((long)puVar9 + 6);
        *(undefined2 *)((long)puVar13 + 10) = *(undefined2 *)((long)puVar9 + 10);
        *(undefined4 *)((long)puVar13 + 6) = uVar6;
        puVar13 = puVar13 + 3;
        puVar9 = puVar9 + 3;
      } while (((ulong)uVar4 & 0xfffffffe) != uVar11);
    }
    if ((uVar4 & 1) != 0) {
      puVar13 = (undefined4 *)(lVar10 + (long)plVar15 + uVar11 * 6);
      puVar1 = (undefined4 *)((long)puVar1 + uVar11 * 6);
      uVar6 = *puVar1;
      *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar1 + 1);
      *puVar13 = uVar6;
    }
  }
  FUN_02e8a7a8(param_1 + 10,param_2 + 0x50);
  param_1[0xd] = 0;
  return;
}


