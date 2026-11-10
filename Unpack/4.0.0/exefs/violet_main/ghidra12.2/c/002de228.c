/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002de228; name: FUN_002de228
 */


void FUN_002de228(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  size_t __n;
  bool bVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *__src;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)param_1[2];
  if (puVar12 == (undefined8 *)param_1[3]) {
    puVar11 = (undefined8 *)*param_1;
    __src = (undefined8 *)param_1[1];
    if (__src < puVar11 || (long)__src - (long)puVar11 == 0) {
      lVar2 = (long)param_1[3] - (long)puVar11;
      uVar8 = lVar2 >> 2;
      if (lVar2 == 0) {
        uVar8 = 1;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_002dd010();
      }
      pvVar6 = operator_new(uVar8 * 8);
      puVar3 = (undefined8 *)((long)pvVar6 + (uVar8 >> 2) * 8);
      pvVar4 = (void *)((long)pvVar6 + uVar8 * 8);
      lVar2 = (long)puVar12 - (long)__src;
      if (lVar2 == 0) {
        *param_1 = (ulong)pvVar6;
        param_1[1] = (ulong)puVar3;
        param_1[2] = (ulong)puVar3;
        param_1[3] = (ulong)pvVar4;
        puVar12 = puVar3;
      }
      else {
        uVar1 = ((uint)(lVar2 - 8U >> 3) & 0x1fffffff) + 1;
        puVar12 = (undefined8 *)((long)puVar3 + lVar2);
        puVar11 = puVar3;
        if ((uVar1 & 3) != 0) {
          lVar7 = -((ulong)uVar1 & 3);
          puVar9 = puVar3;
          puVar10 = __src;
          do {
            __src = puVar10 + 1;
            bVar5 = lVar7 != -1;
            lVar7 = lVar7 + 1;
            puVar11 = puVar9 + 1;
            *puVar9 = *puVar10;
            puVar9 = puVar11;
            puVar10 = __src;
          } while (bVar5);
        }
        if (0x17 < lVar2 - 8U) {
          do {
            *puVar11 = *__src;
            puVar11[1] = __src[1];
            puVar11[2] = __src[2];
            puVar11[3] = __src[3];
            puVar11 = puVar11 + 4;
            __src = __src + 4;
          } while ((undefined8 *)((long)pvVar6 + (lVar2 >> 3) * 8 + (uVar8 >> 2) * 8) != puVar11);
        }
        puVar11 = (undefined8 *)*param_1;
        *param_1 = (ulong)pvVar6;
        param_1[1] = (ulong)puVar3;
        param_1[2] = (ulong)puVar12;
        param_1[3] = (ulong)pvVar4;
      }
      if (puVar11 != (undefined8 *)0x0) {
        operator_delete(puVar11);
        puVar12 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar7 = (long)__src - (long)puVar11 >> 3;
      lVar2 = lVar7 + 2;
      if (-1 < lVar7 + 1) {
        lVar2 = lVar7 + 1;
      }
      __n = (long)puVar12 - (long)__src;
      puVar12 = __src + -(lVar2 >> 1);
      if (__n != 0) {
        memmove(puVar12,__src,__n);
        __src = (undefined8 *)param_1[1];
      }
      puVar12 = (undefined8 *)((long)puVar12 + __n);
      param_1[1] = (ulong)(__src + -(lVar2 >> 1));
      param_1[2] = (ulong)puVar12;
    }
  }
  *puVar12 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


