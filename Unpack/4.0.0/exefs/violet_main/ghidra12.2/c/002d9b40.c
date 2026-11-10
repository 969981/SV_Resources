/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d9b40; name: FUN_002d9b40
 */


void FUN_002d9b40(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  size_t __n;
  bool bVar3;
  long lVar4;
  undefined8 *__src;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  
  __src = (undefined8 *)param_1[1];
  if (__src == (undefined8 *)*param_1) {
    uVar5 = param_1[2];
    uVar2 = param_1[3];
    if (uVar5 < uVar2) {
      lVar8 = (long)(uVar2 - uVar5) >> 3;
      lVar6 = lVar8 + 2;
      if (-1 < lVar8 + 1) {
        lVar6 = lVar8 + 1;
      }
      __n = uVar5 - (long)__src;
      puVar12 = (undefined8 *)(uVar5 + (lVar6 >> 1) * 8);
      if (__n == 0) {
        __src = puVar12;
      }
      else {
        puVar12 = (undefined8 *)((long)puVar12 - __n);
        memmove(puVar12,__src,__n);
        uVar5 = param_1[2];
        __src = puVar12;
      }
      param_1[1] = (long)__src;
      param_1[2] = uVar5 + (lVar6 >> 1) * 8;
    }
    else {
      lVar8 = uVar2 - *param_1;
      lVar6 = lVar8 >> 2;
      if (lVar8 == 0) {
        lVar6 = 1;
      }
      uVar5 = lVar6 + 3U >> 2;
      lVar4 = FUN_0049e770(PTR_FUN_047cba38,lVar6 * 8);
      puVar12 = (undefined8 *)param_1[1];
      __src = (undefined8 *)(lVar4 + uVar5 * 8);
      lVar8 = param_1[2] - (long)puVar12;
      if (lVar8 == 0) {
        puVar7 = __src;
      }
      else {
        uVar1 = ((uint)(lVar8 - 8U >> 3) & 0x1fffffff) + 1;
        puVar10 = __src;
        if ((uVar1 & 3) != 0) {
          lVar11 = -((ulong)uVar1 & 3);
          puVar7 = puVar12;
          puVar9 = __src;
          do {
            puVar12 = puVar7 + 1;
            bVar3 = lVar11 != -1;
            lVar11 = lVar11 + 1;
            puVar10 = puVar9 + 1;
            *puVar9 = *puVar7;
            puVar7 = puVar12;
            puVar9 = puVar10;
          } while (bVar3);
        }
        puVar7 = (undefined8 *)((long)__src + lVar8);
        if (0x17 < lVar8 - 8U) {
          do {
            *puVar10 = *puVar12;
            puVar10[1] = puVar12[1];
            puVar10[2] = puVar12[2];
            puVar10[3] = puVar12[3];
            puVar10 = puVar10 + 4;
            puVar12 = puVar12 + 4;
          } while ((undefined8 *)(lVar4 + (lVar8 >> 3) * 8 + uVar5 * 8) != puVar10);
        }
      }
      lVar8 = *param_1;
      *param_1 = lVar4;
      param_1[1] = (long)__src;
      param_1[2] = (long)puVar7;
      param_1[3] = lVar4 + lVar6 * 8;
      if (lVar8 != 0) {
        FUN_0049e790(PTR_LAB_047cba48,lVar8);
        __src = (undefined8 *)param_1[1];
      }
    }
  }
  __src[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


