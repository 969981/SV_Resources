/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00514b28; name: FUN_00514b28
 */


undefined8 * FUN_00514b28(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  size_t __n;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar13 = (long)param_4 - (long)param_3;
  if (lVar13 < 1) {
    return param_2;
  }
  puVar3 = (undefined8 *)param_1[1];
  lVar12 = lVar13 >> 4;
  if (param_1[2] - (long)puVar3 >> 4 < lVar12) {
    lVar8 = *param_1;
    uVar1 = lVar12 + ((long)puVar3 - lVar8 >> 4);
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - lVar8;
    uVar9 = lVar5 >> 3;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x7fffffffffffffe < (ulong)(lVar5 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    lVar8 = (long)param_2 - lVar8 >> 4;
    if (uVar1 == 0) {
      lVar5 = 0;
      puVar3 = (undefined8 *)(lVar8 << 4);
    }
    else {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 4);
      puVar3 = (undefined8 *)(lVar5 + lVar8 * 0x10);
    }
    if (((int)lVar13 - 0x10U >> 4 & 1) == 0) {
      uVar14 = *param_3;
      puVar3[1] = param_3[1];
      *puVar3 = uVar14;
      param_3 = param_3 + 2;
      puVar4 = puVar3 + 2;
    }
    else {
      puVar4 = puVar3;
    }
    puVar7 = puVar3 + lVar12 * 2;
    if (0xf < lVar13 - 0x10U) {
      do {
        uVar14 = *param_3;
        puVar4[1] = param_3[1];
        *puVar4 = uVar14;
        puVar6 = param_3 + 3;
        uVar14 = param_3[2];
        param_3 = param_3 + 4;
        puVar4[3] = *puVar6;
        puVar4[2] = uVar14;
        puVar4 = puVar4 + 4;
      } while (puVar7 != puVar4);
    }
    sVar2 = (long)param_2 - *param_1;
    if (0 < (long)sVar2) {
      memcpy((void *)((long)puVar3 - sVar2),(void *)*param_1,sVar2);
    }
    __n = param_1[1] - (long)param_2;
    if (0 < (long)__n) {
      memcpy(puVar7,param_2,__n);
      puVar7 = (undefined8 *)((long)puVar7 + __n);
    }
    lVar13 = *param_1;
    *param_1 = (long)((long)puVar3 - sVar2);
    param_1[1] = (long)puVar7;
    param_1[2] = lVar5 + uVar1 * 0x10;
    if (lVar13 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    return puVar3;
  }
  lVar13 = (long)puVar3 - (long)param_2 >> 4;
  puVar4 = puVar3;
  if (lVar13 < lVar12) {
    puVar7 = param_3 + lVar13 * 2;
    if (puVar7 != param_4) {
      puVar6 = puVar3;
      puVar10 = puVar7;
      do {
        puVar11 = puVar10 + 2;
        uVar14 = *puVar10;
        puVar4 = puVar6 + 2;
        puVar6[1] = puVar10[1];
        *puVar6 = uVar14;
        puVar6 = puVar4;
        puVar10 = puVar11;
      } while (param_4 != puVar11);
    }
    param_1[1] = (long)puVar4;
    if ((long)puVar3 - (long)param_2 < 1) {
      return param_2;
    }
    param_4 = puVar7;
  }
  sVar2 = (long)puVar4 - (long)(param_2 + lVar12 * 2);
  puVar7 = puVar4;
  if (puVar4 + lVar12 * -2 < puVar3) {
    puVar6 = puVar4;
    puVar10 = puVar4 + lVar12 * -2;
    do {
      puVar11 = puVar10 + 2;
      uVar14 = *puVar10;
      puVar7 = puVar6 + 2;
      puVar6[1] = puVar10[1];
      *puVar6 = uVar14;
      puVar6 = puVar7;
      puVar10 = puVar11;
    } while (puVar11 < puVar3);
  }
  param_1[1] = (long)puVar7;
  if (sVar2 != 0) {
    memmove(puVar4 + ((long)sVar2 >> 4) * -2,param_2,sVar2);
  }
  if (param_3 == param_4) {
    return param_2;
  }
  puVar3 = param_2;
  do {
    puVar4 = param_3 + 2;
    uVar14 = *param_3;
    puVar3[1] = param_3[1];
    *puVar3 = uVar14;
    puVar3 = puVar3 + 2;
    param_3 = puVar4;
  } while (param_4 != puVar4);
  return param_2;
}


