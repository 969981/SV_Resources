/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f77fa4; name: FUN_02f77fa4
 */


void FUN_02f77fa4(undefined1 param_1 [16],undefined4 *param_2,long param_3,float *param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  long lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  float *pfVar14;
  uint uVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int iVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  fVar19 = param_1._8_4_;
  fVar18 = param_1._4_4_;
  fVar17 = param_1._0_4_;
  lVar11 = *(long *)(param_3 + 0x1bf8);
  *(long *)(param_2 + 2) = lVar11;
  uVar27 = *(undefined4 *)(lVar11 + 0x10);
  bVar4 = *(byte *)(lVar11 + 0x14);
  *(byte *)(param_2 + 0x26) = bVar4;
  param_2[0x25] = uVar27;
  bVar5 = *(byte *)((long)param_2 + 0x99);
  bVar13 = bVar5 & 0xfc | bVar4 & 3;
  *(byte *)((long)param_2 + 0x99) = bVar13;
  if ((bVar4 & 3) == 2) {
    bVar13 = bVar4 & 3 | (*(byte *)((long)param_2 + (ulong)(bVar4 >> 6) + 0x94) & 3) << 2;
    *(byte *)((long)param_2 + 0x99) = bVar5 & 0xf0 | bVar13;
    bVar13 = bVar5 & 0xc0 |
             bVar13 | (*(byte *)((long)param_2 + (ulong)(bVar4 >> 6) + 0x95) & 3) << 4;
    *(byte *)((long)param_2 + 0x99) = bVar13;
  }
  *(undefined1 *)((long)param_2 + 0x9a) = 0x80;
  *(byte *)((long)param_2 + 0x99) = bVar13 | 0x40;
  *(undefined8 *)(param_2 + 0x16) = 0xffffffffffffffff;
  param_2[0x18] = 0xffffffff;
  auVar20 = ZEXT816(0xff7fffeeff7fffee);
  param_2[0x23] = *(undefined4 *)(param_3 + 0x1c3c);
  param_2[0x24] = *(undefined4 *)(lVar11 + 0x9c);
  lVar12 = *(long *)(param_3 + 0x3c0);
  uVar15 = *(uint *)(lVar12 + 0x44);
  *(char *)(param_2 + 0x15) = (char)uVar15;
  param_2[0x13] = *(undefined4 *)(lVar12 + 0x20);
  iVar31 = *(int *)(lVar12 + 0x40);
  lVar11 = 0;
  lVar3 = 0;
  if (iVar31 != 0) {
    lVar3 = (long)iVar31 + lVar12 + 0x40;
  }
  pfVar14 = (float *)(param_2 + 6);
  while( true ) {
    iVar6 = (uVar15 & 0xff) - 1;
    iVar31 = (int)lVar11;
    if (iVar6 <= lVar11) {
      iVar31 = iVar6;
    }
    puVar16 = (undefined8 *)(lVar3 + (long)iVar31 * 0xc);
    uVar9 = *puVar16;
    pauVar1 = (undefined1 (*) [12])(param_3 + 0xc0);
    uVar32 = (undefined4)((ulong)*(undefined8 *)(param_3 + 200) >> 0x20);
    fVar23 = (float)uVar9 - (float)*(undefined8 *)(param_3 + 0xd0);
    fVar24 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)*(undefined8 *)(param_3 + 0xd0) >> 0x20)
    ;
    fVar25 = *(float *)(puVar16 + 1) - (float)*(undefined8 *)(param_3 + 0xd8);
    pauVar2 = (undefined1 (*) [12])(param_3 + 0xa0);
    uVar27 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0xa8) >> 0x20);
    pauVar7 = (undefined1 (*) [16])(param_3 + 0xb0);
    auVar34 = NEON_ext(*pauVar7,*pauVar7,8,1);
    auVar33._12_4_ = uVar27;
    auVar33._0_12_ = *pauVar2;
    auVar35._12_4_ = uVar27;
    auVar35._0_12_ = *pauVar2;
    auVar33 = NEON_ext(auVar33,auVar35,8,1);
    auVar21._12_4_ = uVar32;
    auVar21._0_12_ = *pauVar1;
    auVar22._12_4_ = uVar32;
    auVar22._0_12_ = *pauVar1;
    auVar35 = NEON_ext(auVar21,auVar22,8,1);
    fVar28 = auVar33._0_4_ * fVar25 +
             (float)*(undefined8 *)*pauVar2 * fVar23 +
             (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20) * fVar24;
    fVar29 = auVar34._0_4_ * fVar25 +
             (float)*(undefined8 *)*pauVar7 * fVar23 +
             (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20) * fVar24;
    fVar30 = auVar35._0_4_ * fVar25 +
             (float)*(undefined8 *)*pauVar1 * fVar23 +
             (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar24;
    fVar23 = (float)*(undefined8 *)param_4 * fVar28;
    fVar25 = (float)((ulong)*(undefined8 *)param_4 >> 0x20) * fVar29;
    fVar26 = (float)*(undefined8 *)(param_4 + 2) * fVar30;
    fVar24 = fVar23 + fVar25 + fVar26;
    fVar26 = fVar23 + fVar25 + fVar26;
    uVar10 = CONCAT44(-(uint)(auVar20._4_4_ < fVar26),-(uint)(auVar20._0_4_ < fVar24)) & 0x100000001
    ;
    iVar31 = (int)uVar10;
    *(ulong *)(pfVar14 + -2) = CONCAT44(fVar29,fVar28);
    fVar17 = (float)((uint)fVar17 ^ ((uint)fVar17 ^ (uint)fVar28) & (iVar31 << 0x1f) >> 0x1f);
    fVar18 = (float)((uint)fVar18 ^
                    ((uint)fVar18 ^ (uint)fVar29) & ((int)(uVar10 >> 0x20) << 0x1f) >> 0x1f);
    fVar19 = (float)((uint)fVar19 ^ ((uint)fVar19 ^ (uint)fVar30) & (iVar31 << 0x1f) >> 0x1f);
    *pfVar14 = fVar30;
    if (lVar11 == 3) break;
    uVar15 = (uint)*(byte *)(param_2 + 0x15);
    lVar11 = lVar11 + 1;
    auVar20._0_8_ = NEON_fmax(CONCAT44(fVar26,fVar24),auVar20._0_8_,4);
    pfVar14 = pfVar14 + 3;
  }
  iVar31 = *(int *)(lVar12 + 0x48);
  auVar20 = *(undefined1 (*) [16])(param_3 + 0xa0);
  auVar33 = *(undefined1 (*) [16])(param_3 + 0xb0);
  pauVar1 = (undefined1 (*) [12])(param_3 + 0xc0);
  uVar27 = (undefined4)((ulong)*(undefined8 *)(param_3 + 200) >> 0x20);
  uVar9 = *(undefined8 *)*pauVar1;
  pfVar14 = (float *)0x0;
  if (iVar31 != 0) {
    pfVar14 = (float *)((long)iVar31 + lVar12 + 0x48);
  }
  auVar35 = NEON_ext(auVar20,auVar20,8,1);
  auVar21 = NEON_ext(auVar33,auVar33,8,1);
  auVar34._12_4_ = uVar27;
  auVar34._0_12_ = *pauVar1;
  auVar8._12_4_ = uVar27;
  auVar8._0_12_ = *pauVar1;
  auVar22 = NEON_ext(auVar34,auVar8,8,1);
  fVar23 = *pfVar14;
  fVar24 = pfVar14[1];
  fVar25 = pfVar14[2];
  *(ulong *)(param_2 + 0x10) =
       CONCAT44(auVar21._0_4_ * fVar25 + auVar33._0_4_ * fVar23 + auVar33._4_4_ * fVar24,
                auVar35._0_4_ * fVar25 + auVar20._0_4_ * fVar23 + auVar20._4_4_ * fVar24);
  param_2[0x12] =
       auVar22._0_4_ * fVar25 + (float)uVar9 * fVar23 + (float)((ulong)uVar9 >> 0x20) * fVar24;
  fVar24 = (float)param_2[0x13];
  fVar23 = param_4[2];
  *(ulong *)(param_2 + 0x19) = CONCAT44(param_4[1] * fVar24 + fVar18,*param_4 * fVar24 + fVar17);
  param_2[0x1b] = fVar23 * fVar24 + fVar19;
  param_2[0x1f] = 0;
  fVar17 = param_4[1];
  fVar18 = param_4[2];
  param_2[0x1c] = *param_4;
  param_2[0x1d] = fVar17;
  param_2[0x1e] = fVar18;
  param_2[0x14] = *param_2;
  *(undefined8 *)(param_2 + 0x20) = 0;
  param_2[0x22] = 0;
  *(undefined2 *)((long)param_2 + 0x55) = 1;
  return;
}


