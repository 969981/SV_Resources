/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004c37dc; name: FUN_004c37dc
 */


void FUN_004c37dc(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  void *__s;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  
  __s = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s >> 3) < param_2) {
    lVar13 = (long)__s - *param_1 >> 3;
    uVar2 = lVar13 + param_2;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = param_1[2] - *param_1;
    uVar7 = lVar6 >> 2;
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (0xffffffffffffffe < (ulong)(lVar6 >> 3)) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_0049e770(PTR_FUN_047cba38,uVar2 << 3);
    }
    uVar7 = param_2 * 8 - 8;
    puVar12 = (undefined8 *)(lVar6 + lVar13 * 8);
    uVar1 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
    puVar10 = puVar12;
    if ((uVar1 & 7) != 0) {
      lVar13 = -((ulong)uVar1 & 7);
      puVar9 = puVar12;
      do {
        puVar10 = puVar9 + 1;
        *puVar9 = 0;
        bVar4 = lVar13 != -1;
        lVar13 = lVar13 + 1;
        puVar9 = puVar10;
      } while (bVar4);
    }
    if (0x37 < uVar7) {
      do {
        puVar10[2] = 0;
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[7] = 0;
        puVar10[4] = 0;
        puVar10[3] = 0;
        puVar10[6] = 0;
        puVar10[5] = 0;
        puVar10 = puVar10 + 8;
      } while (puVar12 + param_2 != puVar10);
    }
    puVar8 = puVar12 + param_2;
    puVar10 = (undefined8 *)*param_1;
    puVar9 = (undefined8 *)param_1[1];
    lVar6 = lVar6 + uVar2 * 8;
    if (puVar9 == puVar10) {
      *param_1 = (long)puVar12;
      param_1[1] = (long)puVar8;
      param_1[2] = lVar6;
    }
    else {
      do {
        puVar9 = puVar9 + -1;
        uVar11 = *puVar9;
        *puVar9 = 0;
        puVar12 = puVar12 + -1;
        *puVar12 = uVar11;
      } while (puVar10 != puVar9);
      puVar10 = (undefined8 *)*param_1;
      puVar9 = (undefined8 *)param_1[1];
      *param_1 = (long)puVar12;
      param_1[1] = (long)puVar8;
      param_1[2] = lVar6;
      puVar3 = PTR_LAB_047cba48;
      if (puVar9 != puVar10) {
        do {
          puVar9 = puVar9 + -1;
          puVar12 = (undefined8 *)*puVar9;
          *puVar9 = 0;
          if (puVar12 != (undefined8 *)0x0) {
            (**(code **)*puVar12)(puVar12);
            FUN_0049e790(puVar3,puVar12);
          }
        } while (puVar10 != puVar9);
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
      return;
    }
  }
  else {
    pvVar5 = __s;
    if (param_2 != 0) {
      pvVar5 = (void *)((long)__s + param_2 * 8);
      memset(__s,0,param_2 * 8);
    }
    param_1[1] = (long)pvVar5;
  }
  return;
}


