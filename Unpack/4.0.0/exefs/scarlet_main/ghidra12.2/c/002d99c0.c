/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d99c0; name: FUN_002d99c0
 */


void FUN_002d99c0(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  size_t __n;
  bool bVar4;
  ulong uVar5;
  void *__src;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  void *pvVar13;
  
  puVar8 = (undefined8 *)param_1[2];
  if (puVar8 == (undefined8 *)param_1[3]) {
    pvVar13 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar13 || (long)__src - (long)pvVar13 == 0) {
      lVar2 = (long)param_1[3] - (long)pvVar13;
      uVar7 = lVar2 >> 2;
      if (lVar2 == 0) {
        uVar7 = 1;
      }
      uVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar7 * 8);
      puVar10 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)(uVar5 + (uVar7 >> 2) * 8);
      lVar2 = param_1[2] - (long)puVar10;
      if (lVar2 == 0) {
        puVar8 = puVar3;
      }
      else {
        uVar1 = ((uint)(lVar2 - 8U >> 3) & 0x1fffffff) + 1;
        puVar12 = puVar3;
        if ((uVar1 & 3) != 0) {
          lVar9 = -((ulong)uVar1 & 3);
          puVar8 = puVar10;
          puVar11 = puVar3;
          do {
            puVar10 = puVar8 + 1;
            bVar4 = lVar9 != -1;
            lVar9 = lVar9 + 1;
            puVar12 = puVar11 + 1;
            *puVar11 = *puVar8;
            puVar8 = puVar10;
            puVar11 = puVar12;
          } while (bVar4);
        }
        puVar8 = (undefined8 *)((long)puVar3 + lVar2);
        if (0x17 < lVar2 - 8U) {
          do {
            *puVar12 = *puVar10;
            puVar12[1] = puVar10[1];
            puVar12[2] = puVar10[2];
            puVar12[3] = puVar10[3];
            puVar12 = puVar12 + 4;
            puVar10 = puVar10 + 4;
          } while ((undefined8 *)(uVar5 + (lVar2 >> 3) * 8 + (uVar7 >> 2) * 8) != puVar12);
        }
      }
      uVar6 = *param_1;
      *param_1 = uVar5;
      param_1[1] = (ulong)puVar3;
      param_1[2] = (ulong)puVar8;
      param_1[3] = uVar5 + uVar7 * 8;
      if (uVar6 != 0) {
        FUN_0049e790(PTR_LAB_047cba48);
        puVar8 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar9 = (long)__src - (long)pvVar13 >> 3;
      lVar2 = lVar9 + 2;
      if (-1 < lVar9 + 1) {
        lVar2 = lVar9 + 1;
      }
      __n = (long)puVar8 - (long)__src;
      pvVar13 = (void *)((long)__src + (lVar2 >> 1) * -8);
      if (__n != 0) {
        memmove(pvVar13,__src,__n);
        __src = (void *)param_1[1];
      }
      puVar8 = (undefined8 *)((long)pvVar13 + __n);
      param_1[1] = (ulong)((long)__src + (lVar2 >> 1) * -8);
      param_1[2] = (ulong)puVar8;
    }
  }
  *puVar8 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


