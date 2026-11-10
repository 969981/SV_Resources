/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f77d10; name: FUN_02f77d10
 */


void FUN_02f77d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,undefined8 *param_7,byte param_8)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  long lVar12;
  byte bVar13;
  undefined8 uVar14;
  float *pfVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  lVar11 = *(long *)(param_6 + 0x1bf8);
  *(long *)(param_5 + 8) = lVar11;
  uVar24 = *(undefined4 *)(lVar11 + 0x10);
  bVar4 = *(byte *)(lVar11 + 0x14);
  *(byte *)(param_5 + 0x98) = bVar4;
  *(undefined4 *)(param_5 + 0x94) = uVar24;
  bVar5 = *(byte *)(param_5 + 0x99);
  bVar13 = bVar5 & 0xfc | bVar4 & 3;
  *(byte *)(param_5 + 0x99) = bVar13;
  if ((bVar4 & 3) == 2) {
    lVar2 = param_5 + (ulong)(bVar4 >> 6);
    bVar13 = bVar4 & 3 | (*(byte *)(lVar2 + 0x94) & 3) << 2;
    *(byte *)(param_5 + 0x99) = bVar5 & 0xf0 | bVar13;
    bVar13 = bVar5 & 0xc0 | bVar13 | (*(byte *)(lVar2 + 0x95) & 3) << 4;
    *(byte *)(param_5 + 0x99) = bVar13;
  }
  *(byte *)(param_5 + 0x99) = bVar13 | 0x40;
  *(undefined1 *)(param_5 + 0x9a) = 0x80;
  *(undefined8 *)(param_5 + 0x58) = 0xffffffffffffffff;
  *(undefined4 *)(param_5 + 0x60) = 0xffffffff;
  uVar24 = *(undefined4 *)(param_6 + 0x1c3c);
  *(undefined4 *)(param_5 + 0x8c) = uVar24;
  uVar18 = 0;
  if ((*(int *)(lVar11 + 0x1c) != 0xaaa00) && (*(float *)(lVar11 + 0x9c) <= 0.0)) {
    uVar18 = uVar24;
  }
  *(undefined4 *)(param_5 + 0x90) = uVar18;
  lVar12 = *(long *)(param_6 + 0x3c0);
  uVar16 = *(uint *)(lVar12 + 0x44);
  *(char *)(param_5 + 0x54) = (char)uVar16;
  *(undefined4 *)(param_5 + 0x4c) = *(undefined4 *)(lVar12 + 0x20);
  iVar6 = *(int *)(lVar12 + 0x40);
  lVar11 = 0;
  lVar2 = 0;
  if (iVar6 != 0) {
    lVar2 = (long)iVar6 + lVar12 + 0x40;
  }
  pfVar15 = (float *)(param_5 + 0x18);
  while( true ) {
    iVar7 = (uVar16 & 0xff) - 1;
    iVar6 = (int)lVar11;
    if (iVar7 <= lVar11) {
      iVar6 = iVar7;
    }
    puVar17 = (undefined8 *)(lVar2 + (long)iVar6 * 0xc);
    uVar8 = *puVar17;
    auVar9 = *(undefined1 (*) [16])(param_6 + 0xc0);
    fVar19 = (float)uVar8 - *(float *)(param_6 + 0xd0);
    fVar21 = (float)((ulong)uVar8 >> 0x20) - *(float *)(param_6 + 0xd4);
    fVar23 = *(float *)(puVar17 + 1) - *(float *)(param_6 + 0xd8);
    auVar10 = *(undefined1 (*) [16])(param_6 + 0xa0);
    auVar28 = *(undefined1 (*) [16])(param_6 + 0xb0);
    auVar25 = NEON_ext(auVar10,auVar10,8,1);
    auVar27 = NEON_ext(auVar28,auVar28,8,1);
    auVar26 = NEON_ext(auVar9,auVar9,8,1);
    *(ulong *)(pfVar15 + -2) =
         CONCAT44(auVar27._0_4_ * fVar23 + auVar28._0_4_ * fVar19 + auVar28._4_4_ * fVar21,
                  auVar25._0_4_ * fVar23 + auVar10._0_4_ * fVar19 + auVar10._4_4_ * fVar21);
    *pfVar15 = auVar26._0_4_ * fVar23 + auVar9._0_4_ * fVar19 + auVar9._4_4_ * fVar21;
    if (lVar11 == 3) break;
    uVar16 = (uint)*(byte *)(param_5 + 0x54);
    lVar11 = lVar11 + 1;
    pfVar15 = pfVar15 + 3;
  }
  iVar6 = *(int *)(lVar12 + 0x48);
  pauVar1 = (undefined1 (*) [12])(param_6 + 0xa0);
  uVar24 = (undefined4)((ulong)*(undefined8 *)(param_6 + 0xa8) >> 0x20);
  auVar9 = *(undefined1 (*) [16])(param_6 + 0xb0);
  auVar28 = NEON_ext(auVar9,auVar9,8,1);
  auVar10 = *(undefined1 (*) [16])(param_6 + 0xc0);
  auVar25 = NEON_ext(auVar10,auVar10,8,1);
  pfVar15 = (float *)0x0;
  if (iVar6 != 0) {
    pfVar15 = (float *)((long)iVar6 + lVar12 + 0x48);
  }
  auVar26._12_4_ = uVar24;
  auVar26._0_12_ = *pauVar1;
  auVar27._12_4_ = uVar24;
  auVar27._0_12_ = *pauVar1;
  auVar26 = NEON_ext(auVar26,auVar27,8,1);
  fVar19 = *pfVar15;
  fVar21 = pfVar15[1];
  fVar23 = pfVar15[2];
  fVar20 = auVar26._0_4_ * fVar23 +
           (float)*(undefined8 *)*pauVar1 * fVar19 +
           (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar21;
  fVar22 = auVar28._0_4_ * fVar23 + auVar9._0_4_ * fVar19 + auVar9._4_4_ * fVar21;
  fVar19 = auVar25._0_4_ * fVar23 + auVar10._0_4_ * fVar19 + auVar10._4_4_ * fVar21;
  *(ulong *)(param_5 + 0x40) = CONCAT44(fVar22,fVar20);
  *(float *)(param_5 + 0x48) = fVar19;
  uVar8 = *param_7;
  uVar3 = param_7[1];
  uVar14 = param_7[2];
  uVar24 = *(undefined4 *)(param_7 + 3);
  *(byte *)(param_5 + 0x56) = param_8 & 1;
  *(undefined8 *)(param_5 + 100) = uVar8;
  bVar13 = *(byte *)(param_5 + 0x99) & 3;
  *(undefined4 *)(param_5 + 0x80) = param_1;
  *(undefined4 *)(param_5 + 0x7c) = uVar24;
  *(undefined8 *)(param_5 + 0x74) = uVar14;
  *(undefined8 *)(param_5 + 0x6c) = uVar3;
  *(undefined4 *)(param_5 + 0x84) = param_2;
  *(undefined4 *)(param_5 + 0x88) = param_3;
  *(undefined4 *)(param_5 + 0x50) = param_4;
  *(undefined1 *)(param_5 + 0x57) = 0;
  *(undefined1 *)(param_5 + 0x55) = 0;
  if (bVar13 != 3) {
    fVar21 = 0.9999;
    if ((bVar13 == 2) && (*(char *)(param_5 + 0x54) == '\x04')) {
      lVar11 = param_5 + (ulong)(*(byte *)(param_5 + 0x98) >> 6);
      iVar7 = (uint)*(byte *)(lVar11 + 0x94) - (uint)*(byte *)(lVar11 + 0x95);
      iVar6 = -iVar7;
      if (-1 < iVar7) {
        iVar6 = iVar7;
      }
      fVar21 = *(float *)(&DAT_03cb54e8 + (ulong)(iVar6 == 2) * 4);
    }
    if (fVar21 <= ABS(fVar20 * (float)*(undefined8 *)(param_5 + 0x70) +
                      fVar22 * (float)((ulong)*(undefined8 *)(param_5 + 0x70) >> 0x20) +
                      fVar19 * *(float *)(param_5 + 0x78))) {
      *(byte *)(param_5 + 0x99) = *(byte *)(param_5 + 0x99) | 3;
    }
  }
  return;
}


