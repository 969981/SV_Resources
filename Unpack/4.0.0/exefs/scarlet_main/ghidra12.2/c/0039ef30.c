/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0039ef30; name: FUN_0039ef30
 */


void FUN_0039ef30(ulong *param_1)

{
  long lVar1;
  void *pvVar2;
  size_t __n;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  ulong uVar5;
  void *__src;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar8 = (undefined8 *)param_1[2];
  if (puVar8 == (undefined8 *)param_1[3]) {
    pvVar2 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar2 || (long)__src - (long)pvVar2 == 0) {
      lVar1 = (long)param_1[3] - (long)pvVar2;
      uVar7 = (lVar1 >> 4) * 0x5555555555555556;
      if (lVar1 == 0) {
        uVar7 = 1;
      }
      uVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar7 * 0x30);
      puVar10 = (undefined8 *)(uVar5 + (uVar7 >> 2) * 0x30);
      puVar11 = (undefined8 *)param_1[1];
      lVar1 = param_1[2] - (long)puVar11;
      if (lVar1 == 0) {
        puVar8 = puVar10;
      }
      else {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = lVar1 - 0x30U;
        puVar12 = puVar10;
        if ((SUB164(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 5 & 1) == 0) {
          uVar14 = puVar11[1];
          uVar13 = *puVar11;
          puVar8 = puVar11 + 3;
          uVar15 = puVar11[2];
          uVar17 = puVar11[5];
          uVar16 = puVar11[4];
          puVar11 = puVar11 + 6;
          puVar10[3] = *puVar8;
          puVar10[2] = uVar15;
          puVar10[5] = uVar17;
          puVar10[4] = uVar16;
          puVar10[1] = uVar14;
          *puVar10 = uVar13;
          puVar12 = puVar10 + 6;
        }
        puVar8 = (undefined8 *)((long)puVar10 + lVar1);
        if (0x2f < lVar1 - 0x30U) {
          do {
            uVar14 = puVar11[1];
            uVar13 = *puVar11;
            uVar15 = puVar11[2];
            uVar17 = puVar11[5];
            uVar16 = puVar11[4];
            puVar12[3] = puVar11[3];
            puVar12[2] = uVar15;
            puVar12[5] = uVar17;
            puVar12[4] = uVar16;
            puVar12[1] = uVar14;
            *puVar12 = uVar13;
            uVar14 = puVar11[7];
            uVar13 = puVar11[6];
            puVar4 = puVar11 + 9;
            uVar15 = puVar11[8];
            uVar17 = puVar11[0xb];
            uVar16 = puVar11[10];
            puVar11 = puVar11 + 0xc;
            puVar12[9] = *puVar4;
            puVar12[8] = uVar15;
            puVar12[0xb] = uVar17;
            puVar12[10] = uVar16;
            puVar12[7] = uVar14;
            puVar12[6] = uVar13;
            puVar12 = puVar12 + 0xc;
          } while ((undefined8 *)(uVar5 + (uVar7 >> 2) * 0x30 + (lVar1 >> 4) * 0x10) != puVar12);
        }
      }
      uVar6 = *param_1;
      *param_1 = uVar5;
      param_1[1] = (ulong)puVar10;
      param_1[2] = (ulong)puVar8;
      param_1[3] = uVar5 + uVar7 * 0x30;
      if (uVar6 != 0) {
        FUN_0049e790(PTR_LAB_047cba48);
        puVar8 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar9 = ((long)__src - (long)pvVar2 >> 4) * -0x5555555555555555;
      lVar1 = lVar9 + 2;
      if (-1 < lVar9 + 1) {
        lVar1 = lVar9 + 1;
      }
      __n = (long)puVar8 - (long)__src;
      pvVar2 = (void *)((long)__src + (lVar1 >> 1) * -0x30);
      if (__n != 0) {
        memmove(pvVar2,__src,__n);
        __src = (void *)param_1[1];
      }
      puVar8 = (undefined8 *)((long)pvVar2 + __n);
      param_1[1] = (ulong)((long)__src + (lVar1 >> 1) * -0x30);
      param_1[2] = (ulong)puVar8;
    }
  }
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[2] = 0x7b2;
  *(undefined4 *)(puVar8 + 3) = 0x101;
  *(undefined1 *)((long)puVar8 + 0x1c) = 0;
  puVar8[4] = 0x7b2;
  *(undefined4 *)(puVar8 + 5) = 0x101;
  *(undefined1 *)((long)puVar8 + 0x2c) = 0;
  puVar8[1] = 0;
  *puVar8 = 0;
  param_1[2] = param_1[2] + 0x30;
  return;
}


