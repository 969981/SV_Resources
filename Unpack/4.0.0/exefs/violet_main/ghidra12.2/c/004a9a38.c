/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a9a38; name: FUN_004a9a38
 */


void FUN_004a9a38(long param_1,long *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  FUN_004a9c04(*(undefined8 *)(param_1 + 0x10));
  piVar9 = (int *)param_2[1];
  piVar11 = (int *)param_2[2];
  if (piVar9 < piVar11) {
    piVar10 = piVar9 + 1;
    *piVar9 = 2;
    param_2[1] = (long)piVar10;
  }
  else {
    pvVar5 = (void *)*param_2;
    lVar8 = (long)piVar9 - (long)pvVar5 >> 2;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x3e != 0) goto LAB_004a9bfc;
    uVar7 = (long)piVar11 - (long)pvVar5 >> 1;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x1ffffffffffffffe < (ulong)((long)piVar11 - (long)pvVar5 >> 2)) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 2);
      pvVar5 = (void *)*param_2;
      piVar9 = (int *)param_2[1];
    }
    puVar2 = (undefined4 *)(lVar4 + lVar8 * 4);
    sVar6 = (long)piVar9 - (long)pvVar5;
    piVar11 = (int *)(lVar4 + uVar1 * 4);
    piVar10 = puVar2 + 1;
    *puVar2 = 2;
    if (0 < (long)sVar6) {
      memcpy((void *)((long)puVar2 - sVar6),pvVar5,sVar6);
      pvVar5 = (void *)*param_2;
    }
    *param_2 = (long)((long)puVar2 - sVar6);
    param_2[1] = (long)piVar10;
    param_2[2] = (long)piVar11;
    if (pvVar5 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
      piVar10 = (int *)param_2[1];
      piVar11 = (int *)param_2[2];
    }
  }
  iVar3 = (int)((ulong)(param_1 - *(long *)(*(long *)(param_1 + 0x10) + 0x20)) >> 3) * -0x3b13b13b;
  if (piVar10 < piVar11) {
    *piVar10 = iVar3;
    param_2[1] = (long)(piVar10 + 1);
  }
  else {
    pvVar5 = (void *)*param_2;
    lVar8 = (long)piVar10 - (long)pvVar5 >> 2;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x3e != 0) {
LAB_004a9bfc:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar7 = (long)piVar11 - (long)pvVar5 >> 1;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x1ffffffffffffffe < (ulong)((long)piVar11 - (long)pvVar5 >> 2)) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 2);
      pvVar5 = (void *)*param_2;
      piVar10 = (int *)param_2[1];
    }
    piVar11 = (int *)(lVar4 + lVar8 * 4);
    sVar6 = (long)piVar10 - (long)pvVar5;
    *piVar11 = iVar3;
    if (0 < (long)sVar6) {
      memcpy((void *)((long)piVar11 - sVar6),pvVar5,sVar6);
      pvVar5 = (void *)*param_2;
    }
    *param_2 = (long)((long)piVar11 - sVar6);
    param_2[1] = (long)(piVar11 + 1);
    param_2[2] = lVar4 + uVar1 * 4;
    if (pvVar5 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
      return;
    }
  }
  return;
}


