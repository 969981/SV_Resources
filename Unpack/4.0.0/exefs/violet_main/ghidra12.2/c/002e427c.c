/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e427c; name: FUN_002e427c
 */


void FUN_002e427c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  size_t __n;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar11;
  ulong uVar12;
  
  __src = (undefined8 *)param_1[1];
  if (__src == (undefined8 *)*param_1) {
    uVar12 = param_1[2];
    uVar7 = param_1[3];
    if (uVar12 < uVar7) {
      lVar6 = (long)(uVar7 - uVar12) >> 3;
      lVar2 = lVar6 + 2;
      if (-1 < lVar6 + 1) {
        lVar2 = lVar6 + 1;
      }
      __n = uVar12 - (long)__src;
      __dest = (undefined8 *)(uVar12 + (lVar2 >> 1) * 8);
      if (__n != 0) {
        __dest = (undefined8 *)((long)__dest - __n);
        memmove(__dest,__src,__n);
        uVar12 = param_1[2];
      }
      param_1[1] = (long)__dest;
      param_1[2] = uVar12 + (lVar2 >> 1) * 8;
    }
    else {
      lVar2 = uVar7 - *param_1;
      uVar7 = lVar2 >> 2;
      if (lVar2 == 0) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_002e36d0();
      }
      uVar11 = uVar7 + 3 >> 2;
      pvVar5 = operator_new(uVar7 * 8);
      __dest = (undefined8 *)((long)pvVar5 + uVar11 * 8);
      pvVar3 = (void *)((long)pvVar5 + uVar7 * 8);
      lVar2 = uVar12 - (long)__src;
      if (lVar2 == 0) {
        *param_1 = (long)pvVar5;
        param_1[1] = (long)__dest;
        param_1[2] = (long)__dest;
        param_1[3] = (long)pvVar3;
      }
      else {
        uVar1 = ((uint)(lVar2 - 8U >> 3) & 0x1fffffff) + 1;
        puVar9 = __dest;
        if ((uVar1 & 3) != 0) {
          lVar6 = -((ulong)uVar1 & 3);
          puVar8 = __dest;
          puVar10 = __src;
          do {
            __src = puVar10 + 1;
            bVar4 = lVar6 != -1;
            lVar6 = lVar6 + 1;
            puVar9 = puVar8 + 1;
            *puVar8 = *puVar10;
            puVar8 = puVar9;
            puVar10 = __src;
          } while (bVar4);
        }
        if (0x17 < lVar2 - 8U) {
          do {
            *puVar9 = *__src;
            puVar9[1] = __src[1];
            puVar9[2] = __src[2];
            puVar9[3] = __src[3];
            puVar9 = puVar9 + 4;
            __src = __src + 4;
          } while ((undefined8 *)((long)pvVar5 + (lVar2 >> 3) * 8 + uVar11 * 8) != puVar9);
        }
        __src = (undefined8 *)*param_1;
        *param_1 = (long)pvVar5;
        param_1[1] = (long)__dest;
        param_1[2] = (long)__dest + lVar2;
        param_1[3] = (long)pvVar3;
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(__src);
        __dest = (undefined8 *)param_1[1];
      }
    }
  }
  else {
    __dest = __src;
  }
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


