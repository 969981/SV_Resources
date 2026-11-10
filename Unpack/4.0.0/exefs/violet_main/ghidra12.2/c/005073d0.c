/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005073d0; name: FUN_005073d0
 */


void FUN_005073d0(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__src;
  size_t __n;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar8 = param_1 + 1;
  plVar9 = (long *)*plVar8;
  if (plVar9 == (long *)0x0) {
    plVar10 = plVar8;
LAB_00507438:
    puVar6 = (undefined8 *)*plVar8;
    plVar9 = plVar8;
  }
  else {
    plVar8 = param_1 + 1;
    while( true ) {
      while (plVar10 = plVar9, (ulong)plVar9[4] <= param_2) {
        if (param_2 <= (ulong)plVar9[4]) goto LAB_00507438;
        plVar8 = plVar9 + 1;
        if ((long *)*plVar8 == (long *)0x0) goto LAB_00507438;
        plVar9 = (long *)*plVar8;
      }
      if ((long *)*plVar9 == (long *)0x0) break;
      plVar8 = plVar9;
      plVar9 = (long *)*plVar9;
    }
    puVar6 = (undefined8 *)*plVar9;
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x40);
    puVar6[4] = param_2;
    puVar6[5] = 0;
    puVar6[2] = plVar10;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    *plVar9 = (long)puVar6;
    if (*(long *)*param_1 == 0) {
      puVar2 = puVar6;
    }
    else {
      *param_1 = *(long *)*param_1;
      puVar2 = (undefined8 *)*plVar9;
    }
    FUN_010108e0(param_1[1],puVar2);
    param_1[2] = param_1[2] + 1;
    puVar2 = (undefined8 *)puVar6[6];
    puVar3 = (undefined8 *)puVar6[7];
    if (puVar2 != puVar3) goto LAB_0050744c;
  }
  else {
    puVar2 = (undefined8 *)puVar6[6];
    puVar3 = (undefined8 *)puVar6[7];
    if (puVar2 != puVar3) {
LAB_0050744c:
      *puVar2 = param_3;
      puVar6[6] = puVar2 + 1;
      return;
    }
  }
  lVar4 = puVar6[5];
  lVar7 = (long)puVar2 - lVar4 >> 3;
  uVar1 = lVar7 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = (long)puVar3 - lVar4;
  uVar5 = lVar4 >> 2;
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
  }
  puVar2 = (undefined8 *)(lVar4 + lVar7 * 8);
  *puVar2 = param_3;
  __src = (void *)puVar6[5];
  __n = puVar6[6] - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar2 - __n),__src,__n);
    __src = (void *)puVar6[5];
  }
  puVar6[5] = (void *)((long)puVar2 - __n);
  puVar6[6] = puVar2 + 1;
  puVar6[7] = lVar4 + uVar1 * 8;
  if (__src == (void *)0x0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48);
  return;
}


