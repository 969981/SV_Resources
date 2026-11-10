/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0084ea7c; name: FUN_0084ea7c
 */


void FUN_0084ea7c(long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  
  uVar15 = (ulong)param_4;
  if (0 < (int)param_4) {
    uVar16 = (long)(int)param_4 - 1;
    lVar6 = param_1 + 0x10;
    puVar14 = (undefined8 *)(lVar6 + (ulong)param_4 * 0xb0);
    puVar7 = (undefined8 *)(lVar6 + uVar16 * 0xb0);
    uVar17 = *puVar7;
    puVar14[1] = puVar7[1];
    *puVar14 = uVar17;
    uVar17 = puVar7[2];
    puVar14[3] = puVar7[3];
    puVar14[2] = uVar17;
    puVar14[4] = puVar7[4];
    if (uVar15 != uVar16) {
      lVar9 = lVar6 + uVar16 * 0xb0;
      iVar1 = *(int *)(lVar9 + 0x38);
      pvVar5 = *(void **)(lVar9 + 0x30);
      if ((int)(*(uint *)(lVar6 + uVar15 * 0xb0 + 0x3c) & 0x7fffffff) < iVar1) {
        FUN_02f0842c(puVar14 + 6,PTR_PTR_047d1a50,(long)iVar1);
      }
      lVar9 = param_1 + 0x10 + uVar15 * 0xb0;
      memcpy((void *)puVar14[6],pvVar5,(long)iVar1 << 4);
      lVar6 = param_1 + 0x10 + uVar16 * 0xb0;
      *(int *)(lVar9 + 0x38) = iVar1;
      pvVar5 = *(void **)(lVar6 + 0x80);
      iVar1 = *(int *)(lVar6 + 0x88);
      if ((int)(*(uint *)(lVar9 + 0x8c) & 0x7fffffff) < iVar1) {
        FUN_02f0842c((undefined8 *)(lVar9 + 0x80),PTR_PTR_047d1a50,(long)iVar1);
      }
      memcpy(*(void **)(lVar9 + 0x80),pvVar5,(long)iVar1 << 4);
      *(int *)(param_1 + uVar15 * 0xb0 + 0x98) = iVar1;
    }
    FUN_0084ed5c(puVar14,param_2 + -2);
  }
  *(uint *)(param_1 + 0xc) = param_4;
  if (((int)param_4 < 4) && (0 < (int)param_3)) {
    uVar16 = 0;
    lVar6 = -0x100000000;
    puVar7 = param_2;
    while( true ) {
      lVar9 = param_1 + (long)(int)uVar15 * 0xb0;
      uVar18 = (param_2 + uVar16 * 2)[1];
      uVar17 = param_2[uVar16 * 2];
      fVar19 = (float)uVar17 - (float)*(undefined8 *)(lVar9 + 0x10);
      fVar20 = (float)((ulong)uVar17 >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar9 + 0x10) >> 0x20);
      fVar21 = (float)uVar18 - (float)*(undefined8 *)(lVar9 + 0x18);
      fVar22 = (float)((ulong)uVar18 >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20);
      fVar19 = fVar19 * fVar19;
      fVar20 = fVar20 * fVar20;
      fVar21 = fVar21 * fVar21;
      fVar22 = fVar22 * fVar22;
      auVar23._4_4_ = fVar20;
      auVar23._0_4_ = fVar19;
      auVar23._8_4_ = fVar21;
      auVar23._12_4_ = fVar22;
      auVar3._4_4_ = fVar20;
      auVar3._0_4_ = fVar19;
      auVar3._8_4_ = fVar21;
      auVar3._12_4_ = fVar22;
      auVar23 = NEON_ext(auVar23,auVar3,8,1);
      if ((float)*(undefined8 *)(lVar9 + 0x30) <= fVar19 + fVar20 + auVar23._0_4_) {
        if (uVar16 != 0) {
          uVar15 = uVar16;
          if ((uVar16 & 3) != 0) {
            lVar8 = 0;
            lVar9 = lVar6;
            do {
              lVar10 = lVar9 >> 0x1c;
              lVar9 = lVar9 + -0x100000000;
              puVar14 = (undefined8 *)((long)param_2 + lVar10);
              uVar4 = *puVar14;
              (puVar7 + lVar8 * 2)[1] = puVar14[1];
              puVar7[lVar8 * 2] = uVar4;
              lVar8 = lVar8 + -1;
            } while (-lVar8 != (uVar16 & 3));
            uVar15 = uVar16 + lVar8;
          }
          if (2 < uVar16 - 1) {
            lVar9 = uVar15 + 4;
            lVar11 = uVar15 << 0x20;
            puVar14 = param_2 + uVar15 * 2 + -2;
            lVar8 = lVar11 + -0x200000000;
            lVar10 = lVar11 + -0x300000000;
            lVar12 = lVar11 + -0x100000000;
            do {
              lVar11 = lVar11 + -0x400000000;
              lVar13 = lVar12 >> 0x1c;
              lVar12 = lVar12 + -0x400000000;
              lVar9 = lVar9 + -4;
              puVar2 = (undefined8 *)((long)param_2 + lVar13);
              uVar4 = *puVar2;
              puVar14[3] = puVar2[1];
              puVar14[2] = uVar4;
              puVar2 = (undefined8 *)((long)param_2 + (lVar8 >> 0x1c));
              uVar4 = *puVar2;
              puVar14[1] = puVar2[1];
              *puVar14 = uVar4;
              puVar2 = (undefined8 *)((long)param_2 + (lVar10 >> 0x1c));
              uVar4 = *puVar2;
              puVar14[-1] = puVar2[1];
              puVar14[-2] = uVar4;
              lVar8 = lVar8 + -0x400000000;
              puVar2 = (undefined8 *)((long)param_2 + (lVar11 >> 0x1c));
              uVar4 = *puVar2;
              puVar14[-3] = puVar2[1];
              puVar14[-4] = uVar4;
              puVar14 = puVar14 + -8;
              lVar10 = lVar10 + -0x400000000;
            } while (4 < lVar9);
          }
        }
        param_2[1] = uVar18;
        *param_2 = uVar17;
        FUN_0084ea7c(param_1,param_2 + 2,uVar16 & 0xffffffff,param_4 + 1);
      }
      uVar16 = uVar16 + 1;
      if (uVar16 == param_3) break;
      uVar15 = (ulong)*(uint *)(param_1 + 0xc);
      puVar7 = puVar7 + 2;
      lVar6 = lVar6 + 0x100000000;
    }
  }
  return;
}


