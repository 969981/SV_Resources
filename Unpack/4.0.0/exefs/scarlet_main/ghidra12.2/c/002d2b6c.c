/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d2b6c; name: FUN_002d2b6c
 */


void FUN_002d2b6c(long param_1,uint param_2,uint *param_3,long *param_4,uint *param_5,long *param_6)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  size_t sVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  uint *__dest;
  undefined8 *puVar15;
  uint uVar16;
  
  *param_5 = 0;
  puVar8 = (uint *)*param_6;
  param_6[1] = (long)puVar8;
  if ((uint *)param_6[2] == puVar8) {
    puVar8 = (uint *)FUN_0049e770(PTR_FUN_047cba38,4);
    puVar9 = puVar8 + 1;
    pvVar5 = (void *)*param_6;
    sVar6 = param_6[1] - (long)pvVar5;
    __dest = (uint *)((long)puVar8 - sVar6);
    *puVar8 = param_2;
    if (0 < (long)sVar6) {
      memcpy(__dest,pvVar5,sVar6);
      pvVar5 = (void *)*param_6;
    }
    *param_6 = (long)__dest;
    param_6[2] = (long)(puVar8 + 1);
    param_6[1] = (long)puVar9;
    if (pvVar5 == (void *)0x0) {
      if (__dest == puVar9) {
        return;
      }
    }
    else {
      FUN_0049e790(PTR_LAB_047cba48);
      puVar9 = (uint *)param_6[1];
      if ((uint *)*param_6 == puVar9) {
        return;
      }
    }
  }
  else {
    puVar9 = puVar8 + 1;
    *puVar8 = param_2;
    param_6[1] = (long)puVar9;
  }
LAB_002d2ca8:
  uVar16 = puVar9[-1];
  param_6[1] = (long)(puVar9 + -1);
  lVar10 = *(long *)(param_5 + 6);
  if (lVar10 == 0) goto LAB_002d2d08;
LAB_002d2cb8:
  if (uVar16 < param_5[8]) {
    uVar7 = *(uint *)(*(long *)(param_5 + 2) + (long)(int)uVar16 * 4);
    if ((uVar7 < *param_5) && (*(uint *)(lVar10 + (long)(int)uVar7 * 4) == uVar16))
    goto LAB_002d2c9c;
    *(uint *)(*(long *)(param_5 + 2) + (long)(int)uVar16 * 4) = *param_5;
    *(uint *)(lVar10 + (long)(int)*param_5 * 4) = uVar16;
    *param_5 = *param_5 + 1;
  }
LAB_002d2d08:
  if ((((uVar16 == param_2) || (*(long *)(param_3 + 6) == 0)) || (param_3[8] <= uVar16)) ||
     ((uVar7 = *(uint *)(*(long *)(param_3 + 2) + (long)(int)uVar16 * 4), *param_3 <= uVar7 ||
      (*(uint *)(*(long *)(param_3 + 6) + (long)(int)uVar7 * 8) != uVar16)))) {
    lVar10 = *(long *)(param_1 + 0x60);
    puVar8 = (uint *)(lVar10 + (long)(int)uVar16 * 8);
    uVar7 = *puVar8;
    switch(uVar7 & 7) {
    case 0:
      goto switchD_002d2d64_caseD_0;
    case 1:
      puVar3 = (undefined8 *)param_4[1];
      if (puVar3 < (undefined8 *)param_4[2]) {
        puVar15 = puVar3 + 1;
        *puVar3 = 0;
        param_4[1] = (long)puVar15;
      }
      else {
        lVar13 = (long)puVar3 - *param_4 >> 3;
        uVar1 = lVar13 + 1;
        if (uVar1 >> 0x3d != 0) {
LAB_002d31e0:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar11 = param_4[2] - *param_4;
        uVar14 = lVar11 >> 2;
        if (uVar1 <= uVar14) {
          uVar1 = uVar14;
        }
        if (0xffffffffffffffe < (ulong)(lVar11 >> 3)) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
        }
        puVar3 = (undefined8 *)(lVar11 + lVar13 * 8);
        puVar15 = puVar3 + 1;
        *puVar3 = 0;
        pvVar5 = (void *)*param_4;
        sVar6 = param_4[1] - (long)pvVar5;
        if (0 < (long)sVar6) {
          memcpy((void *)((long)puVar3 - sVar6),pvVar5,sVar6);
          pvVar5 = (void *)*param_4;
        }
        *param_4 = (long)((long)puVar3 - sVar6);
        param_4[1] = (long)puVar15;
        param_4[2] = lVar11 + uVar1 * 8;
        if (pvVar5 != (void *)0x0) {
          FUN_0049e790(PTR_LAB_047cba48);
          puVar15 = (undefined8 *)param_4[1];
        }
      }
      lVar13 = *param_4;
      *(uint *)(puVar15 + -1) =
           *(uint *)(puVar15 + -1) & 8 | (int)((ulong)((long)puVar15 - lVar13) >> 3) << 4 | 1;
      *(int *)((long)puVar15 + -4) = (int)((ulong)((long)puVar15 - lVar13) >> 3) + 1;
      goto switchD_002d2d64_caseD_0;
    default:
      puVar3 = (undefined8 *)param_4[1];
      if (puVar3 < (undefined8 *)param_4[2]) {
        puVar15 = puVar3 + 1;
        *puVar3 = 0;
        param_4[1] = (long)puVar15;
      }
      else {
        lVar10 = (long)puVar3 - *param_4 >> 3;
        uVar1 = lVar10 + 1;
        if (uVar1 >> 0x3d != 0) goto LAB_002d31e0;
        lVar13 = param_4[2] - *param_4;
        uVar14 = lVar13 >> 2;
        if (uVar1 <= uVar14) {
          uVar1 = uVar14;
        }
        if (0xffffffffffffffe < (ulong)(lVar13 >> 3)) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
        }
        puVar3 = (undefined8 *)(lVar13 + lVar10 * 8);
        puVar15 = puVar3 + 1;
        *puVar3 = 0;
        pvVar5 = (void *)*param_4;
        sVar6 = param_4[1] - (long)pvVar5;
        if (0 < (long)sVar6) {
          memcpy((void *)((long)puVar3 - sVar6),pvVar5,sVar6);
          pvVar5 = (void *)*param_4;
        }
        *param_4 = (long)((long)puVar3 - sVar6);
        param_4[1] = (long)puVar15;
        param_4[2] = lVar13 + uVar1 * 8;
        if (pvVar5 != (void *)0x0) {
          FUN_0049e790(PTR_LAB_047cba48);
          puVar15 = (undefined8 *)param_4[1];
        }
      }
      puVar15[-1] = *(undefined8 *)puVar8;
      uVar16 = *(uint *)(param_4[1] + -8);
      *(uint *)(param_4[1] + -8) =
           uVar16 & 8 |
           *(int *)(*(long *)(param_3 + 6) +
                    (long)*(int *)(*(long *)(param_3 + 2) + ((ulong)(*puVar8 >> 2) & 0x3ffffffc)) *
                    8 + 4) << 4 | uVar16 & 7;
      goto LAB_002d2c9c;
    case 5:
    case 7:
      puVar3 = (undefined8 *)param_4[1];
      if (puVar3 < (undefined8 *)param_4[2]) {
        puVar15 = puVar3 + 1;
        *puVar3 = 0;
        param_4[1] = (long)puVar15;
      }
      else {
        lVar10 = (long)puVar3 - *param_4 >> 3;
        uVar1 = lVar10 + 1;
        if (uVar1 >> 0x3d != 0) goto LAB_002d31e0;
        lVar13 = param_4[2] - *param_4;
        uVar14 = lVar13 >> 2;
        if (uVar1 <= uVar14) {
          uVar1 = uVar14;
        }
        if (0xffffffffffffffe < (ulong)(lVar13 >> 3)) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
        }
        puVar3 = (undefined8 *)(lVar13 + lVar10 * 8);
        puVar15 = puVar3 + 1;
        *puVar3 = 0;
        pvVar5 = (void *)*param_4;
        sVar6 = param_4[1] - (long)pvVar5;
        if (0 < (long)sVar6) {
          memcpy((void *)((long)puVar3 - sVar6),pvVar5,sVar6);
          pvVar5 = (void *)*param_4;
        }
        *param_4 = (long)((long)puVar3 - sVar6);
        param_4[1] = (long)puVar15;
        param_4[2] = lVar13 + uVar1 * 8;
        if (pvVar5 != (void *)0x0) {
          FUN_0049e790(PTR_LAB_047cba48);
          puVar15 = (undefined8 *)param_4[1];
        }
      }
      puVar15[-1] = *(undefined8 *)puVar8;
      goto LAB_002d2c9c;
    case 6:
      goto switchD_002d2d64_caseD_6;
    }
  }
  puVar3 = (undefined8 *)param_4[1];
  if (puVar3 < (undefined8 *)param_4[2]) {
    puVar15 = puVar3 + 1;
    *puVar3 = 0;
    param_4[1] = (long)puVar15;
  }
  else {
    lVar10 = (long)puVar3 - *param_4 >> 3;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_002d31e0;
    lVar13 = param_4[2] - *param_4;
    uVar14 = lVar13 >> 2;
    if (uVar1 <= uVar14) {
      uVar1 = uVar14;
    }
    if (0xffffffffffffffe < (ulong)(lVar13 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
    }
    puVar3 = (undefined8 *)(lVar13 + lVar10 * 8);
    puVar15 = puVar3 + 1;
    *puVar3 = 0;
    pvVar5 = (void *)*param_4;
    sVar6 = param_4[1] - (long)pvVar5;
    if (0 < (long)sVar6) {
      memcpy((void *)((long)puVar3 - sVar6),pvVar5,sVar6);
      pvVar5 = (void *)*param_4;
    }
    *param_4 = (long)((long)puVar3 - sVar6);
    param_4[1] = (long)puVar15;
    param_4[2] = lVar13 + uVar1 * 8;
    if (pvVar5 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
      puVar15 = (undefined8 *)param_4[1];
    }
  }
  uVar7 = *(uint *)(puVar15 + -1);
  *(uint *)(puVar15 + -1) = uVar7 & 0xfffffff8 | 6;
  *(uint *)(puVar15 + -1) =
       uVar7 & 8 |
       *(int *)(*(long *)(param_3 + 6) +
                (long)*(int *)(*(long *)(param_3 + 2) + (long)(int)uVar16 * 4) * 8 + 4) << 4 | 6;
  goto LAB_002d2c9c;
switchD_002d2d64_caseD_0:
  uVar4 = *(undefined4 *)(lVar10 + (long)(int)uVar16 * 8 + 4);
  puVar12 = (undefined4 *)param_6[1];
  if (puVar12 < (undefined4 *)param_6[2]) {
    *puVar12 = uVar4;
    param_6[1] = (long)(puVar12 + 1);
  }
  else {
    pvVar5 = (void *)*param_6;
    lVar10 = (long)puVar12 - (long)pvVar5 >> 2;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = param_6[2] - (long)pvVar5;
    uVar14 = lVar13 >> 1;
    if (uVar1 <= uVar14) {
      uVar1 = uVar14;
    }
    if (0x1ffffffffffffffe < (ulong)(lVar13 >> 2)) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 2);
      pvVar5 = (void *)*param_6;
      puVar12 = (undefined4 *)param_6[1];
    }
    puVar2 = (undefined4 *)(lVar13 + lVar10 * 4);
    sVar6 = (long)puVar12 - (long)pvVar5;
    *puVar2 = uVar4;
    if (0 < (long)sVar6) {
      memcpy((void *)((long)puVar2 - sVar6),pvVar5,sVar6);
      pvVar5 = (void *)*param_6;
    }
    *param_6 = (long)((long)puVar2 - sVar6);
    param_6[1] = (long)(puVar2 + 1);
    param_6[2] = lVar13 + uVar1 * 4;
    if (pvVar5 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  uVar7 = *puVar8;
switchD_002d2d64_caseD_6:
  uVar16 = uVar7 >> 4;
  lVar10 = *(long *)(param_5 + 6);
  if (lVar10 != 0) goto LAB_002d2cb8;
  goto LAB_002d2d08;
LAB_002d2c9c:
  puVar9 = (uint *)param_6[1];
  if ((uint *)*param_6 == puVar9) {
    return;
  }
  goto LAB_002d2ca8;
}


