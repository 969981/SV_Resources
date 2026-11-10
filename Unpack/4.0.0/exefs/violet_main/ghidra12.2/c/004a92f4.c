/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a92f4; name: FUN_004a92f4
 */


void FUN_004a92f4(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  size_t sVar4;
  undefined4 *puVar5;
  long *plVar6;
  int *piVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  if (*(char *)(param_1 + 0x43) == '\0') {
    FUN_004a908c(*(undefined8 *)(param_1 + 0x50),param_2);
    puVar5 = (undefined4 *)param_2[1];
    if ((undefined4 *)param_2[2] <= puVar5) {
      pvVar3 = (void *)*param_2;
      lVar12 = (long)puVar5 - (long)pvVar3 >> 2;
      uVar13 = lVar12 + 1;
      if (uVar13 >> 0x3e != 0) goto LAB_004a95fc;
      lVar9 = param_2[2] - (long)pvVar3;
      uVar11 = lVar9 >> 1;
      if (uVar13 <= uVar11) {
        uVar13 = uVar11;
      }
      if (0x1ffffffffffffffe < (ulong)(lVar9 >> 2)) {
        uVar13 = 0x3fffffffffffffff;
      }
      if (uVar13 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = FUN_0049e770(PTR_FUN_047cba38,uVar13 << 2);
        pvVar3 = (void *)*param_2;
        puVar5 = (undefined4 *)param_2[1];
      }
      puVar10 = (undefined4 *)(lVar9 + lVar12 * 4);
      uVar8 = 2;
      goto LAB_004a94a8;
    }
    *puVar5 = 2;
    param_2[1] = (long)(puVar5 + 1);
  }
  else if (*(long *)(param_1 + 0x60) == 0) {
    puVar5 = (undefined4 *)param_2[1];
    if ((undefined4 *)param_2[2] <= puVar5) {
      pvVar3 = (void *)*param_2;
      lVar12 = (long)puVar5 - (long)pvVar3 >> 2;
      uVar13 = lVar12 + 1;
      if (uVar13 >> 0x3e != 0) goto LAB_004a95fc;
      lVar9 = param_2[2] - (long)pvVar3;
      uVar11 = lVar9 >> 1;
      if (uVar13 <= uVar11) {
        uVar13 = uVar11;
      }
      if (0x1ffffffffffffffe < (ulong)(lVar9 >> 2)) {
        uVar13 = 0x3fffffffffffffff;
      }
      if (uVar13 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = FUN_0049e770(PTR_FUN_047cba38,uVar13 << 2);
        pvVar3 = (void *)*param_2;
        puVar5 = (undefined4 *)param_2[1];
      }
      puVar10 = (undefined4 *)(lVar9 + lVar12 * 4);
      uVar8 = 7;
      goto LAB_004a94a8;
    }
    *puVar5 = 7;
    param_2[1] = (long)(puVar5 + 1);
  }
  else {
    FUN_004a908c(*(long *)(param_1 + 0x60),param_2);
    puVar5 = (undefined4 *)param_2[1];
    if (puVar5 < (undefined4 *)param_2[2]) {
      *puVar5 = 6;
      param_2[1] = (long)(puVar5 + 1);
    }
    else {
      pvVar3 = (void *)*param_2;
      lVar12 = (long)puVar5 - (long)pvVar3 >> 2;
      uVar13 = lVar12 + 1;
      if (uVar13 >> 0x3e != 0) goto LAB_004a95fc;
      lVar9 = param_2[2] - (long)pvVar3;
      uVar11 = lVar9 >> 1;
      if (uVar13 <= uVar11) {
        uVar13 = uVar11;
      }
      if (0x1ffffffffffffffe < (ulong)(lVar9 >> 2)) {
        uVar13 = 0x3fffffffffffffff;
      }
      if (uVar13 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = FUN_0049e770(PTR_FUN_047cba38,uVar13 << 2);
        pvVar3 = (void *)*param_2;
        puVar5 = (undefined4 *)param_2[1];
      }
      puVar10 = (undefined4 *)(lVar9 + lVar12 * 4);
      uVar8 = 6;
LAB_004a94a8:
      sVar4 = (long)puVar5 - (long)pvVar3;
      *puVar10 = uVar8;
      if (0 < (long)sVar4) {
        memcpy((void *)((long)puVar10 - sVar4),pvVar3,sVar4);
        pvVar3 = (void *)*param_2;
      }
      *param_2 = (long)((long)puVar10 - sVar4);
      param_2[1] = (long)(puVar10 + 1);
      param_2[2] = lVar9 + uVar13 * 4;
      if (pvVar3 != (void *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
    }
  }
  if (*(char *)(param_1 + 0x43) == '\0') {
    plVar6 = (long *)(*(long *)(param_1 + 0x50) + 0x28);
  }
  else if (*(long *)(param_1 + 0x60) == 0) {
    plVar6 = (long *)(*(long *)(param_1 + 0x28) + 0x80);
  }
  else {
    plVar6 = (long *)(*(long *)(param_1 + 0x60) + 0x50);
  }
  iVar2 = (int)((ulong)(param_1 - *plVar6) >> 3) * 0x286bca1b;
  piVar7 = (int *)param_2[1];
  if (piVar7 < (int *)param_2[2]) {
    *piVar7 = iVar2;
    param_2[1] = (long)(piVar7 + 1);
  }
  else {
    pvVar3 = (void *)*param_2;
    lVar12 = (long)piVar7 - (long)pvVar3 >> 2;
    uVar13 = lVar12 + 1;
    if (uVar13 >> 0x3e != 0) {
LAB_004a95fc:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = param_2[2] - (long)pvVar3;
    uVar11 = lVar9 >> 1;
    if (uVar13 <= uVar11) {
      uVar13 = uVar11;
    }
    if (0x1ffffffffffffffe < (ulong)(lVar9 >> 2)) {
      uVar13 = 0x3fffffffffffffff;
    }
    if (uVar13 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = FUN_0049e770(PTR_FUN_047cba38,uVar13 << 2);
      pvVar3 = (void *)*param_2;
      piVar7 = (int *)param_2[1];
    }
    piVar1 = (int *)(lVar9 + lVar12 * 4);
    sVar4 = (long)piVar7 - (long)pvVar3;
    *piVar1 = iVar2;
    if (0 < (long)sVar4) {
      memcpy((void *)((long)piVar1 - sVar4),pvVar3,sVar4);
      pvVar3 = (void *)*param_2;
    }
    *param_2 = (long)((long)piVar1 - sVar4);
    param_2[1] = (long)(piVar1 + 1);
    param_2[2] = lVar9 + uVar13 * 4;
    if (pvVar3 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
      return;
    }
  }
  return;
}


