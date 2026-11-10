/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cec59c; name: FUN_00cec59c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00cec59c(undefined8 param_1,int *param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  uint *puVar11;
  ushort *puVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  undefined4 uVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xd) ||
     (uVar8 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar8 == 0)) {
    piVar10 = (int *)0x0;
  }
  else {
    puVar11 = (uint *)((long)param_2 + uVar8);
    piVar10 = (int *)((long)puVar11 + (ulong)*puVar11);
  }
  puVar12 = (ushort *)((long)piVar10 - (long)*piVar10);
  if (*puVar12 < 5) {
    lVar9 = 0;
LAB_00cec838:
    puVar11 = (uint *)0x0;
  }
  else {
    lVar9 = 0;
    if ((ulong)puVar12[2] != 0) {
      puVar11 = (uint *)((long)piVar10 + (ulong)puVar12[2]);
      lVar9 = (long)puVar11 + (ulong)*puVar11;
    }
    if ((*puVar12 < 7) || ((ulong)puVar12[3] == 0)) goto LAB_00cec838;
    puVar11 = (uint *)((long)piVar10 + (ulong)puVar12[3]);
    puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
  }
  uVar2 = *puVar11;
  uVar3 = *(uint *)(param_3 + 4);
  uVar8 = (ulong)uVar3;
  if (-1 < (int)uVar3) {
    if (uVar2 <= uVar3) {
      return param_1;
    }
    if (*(char *)(param_3 + 2) == '\0') goto LAB_00cec624;
    bVar20 = *(byte *)(lVar9 + uVar8 + 4);
    *(undefined1 *)(param_3 + 2) = 0;
    fVar24 = (float)NEON_ucvtf((uint)bVar20);
    if ((float)param_1 <= fVar24) goto LAB_00cec624;
    *(undefined4 *)(param_3 + 4) = 0xffffffff;
    *(undefined4 *)(param_3 + 0xc) = 1;
  }
  pbVar17 = (byte *)(lVar9 + 6);
  uVar8 = ~(ulong)pbVar17 + lVar9 + 4 + (ulong)uVar2;
  if (uVar8 != 0) {
    pbVar1 = pbVar17 + (uVar8 >> 1);
    bVar20 = *pbVar1;
    pbVar16 = pbVar17;
    while( true ) {
      uVar15 = uVar8 >> 1;
      pbVar17 = pbVar1 + 1;
      uVar8 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
      if ((float)param_1 <= (float)bVar20) {
        pbVar17 = pbVar16;
        uVar8 = uVar15;
      }
      if (uVar8 == 0) break;
      pbVar1 = pbVar17 + (uVar8 >> 1);
      bVar20 = *pbVar1;
      pbVar16 = pbVar17;
    }
  }
  uVar8 = (ulong)(((int)pbVar17 - (int)(lVar9 + 4)) - 2);
LAB_00cec624:
  uVar7 = _UNK_03cabb58;
  uVar6 = _DAT_03cabb50;
  uVar14 = (uint)uVar8;
  puVar13 = (ulong *)((long)puVar11 + uVar8 * 6 + 4);
  uVar18 = (ulong)(*(int *)(param_3 + 0xc) + 2U >> 2) & 1;
  uVar15 = 0;
  uVar3 = 0;
  if (uVar14 <= uVar2) {
    uVar3 = uVar2 - uVar14;
  }
  do {
    if (uVar3 == uVar15) break;
    uVar21 = NEON_ucvtf((uint)*(byte *)(lVar9 + uVar8 + 4 + uVar15));
    *(undefined4 *)(param_3 + uVar18 * 0x10 + 0x10 + uVar15 * 4) = uVar21;
    uVar19 = *puVar13;
    auVar25._0_8_ = CONCAT44((int)(uVar19 >> 0x12),(uint)uVar19 >> 3) & 0x7fff00007fff;
    auVar25._8_4_ = (uint)(uVar19 >> 0x21) & 0x7fff;
    auVar25._12_4_ = 0;
    uVar2 = (uint)uVar19 & 3;
    auVar25 = NEON_ucvtf(auVar25,4);
    auVar22._0_4_ = (float)uVar6 + auVar25._0_4_ * 4.7938363e-05;
    auVar22._4_4_ = (float)((ulong)uVar6 >> 0x20) + auVar25._4_4_ * 4.7938363e-05;
    auVar22._8_4_ = (float)uVar7 + auVar25._8_4_ * 4.7938363e-05;
    auVar27._12_4_ = (float)((ulong)uVar7 >> 0x20) + auVar25._12_4_ * 4.7938363e-05;
    auVar27._0_12_ = auVar22;
    fVar24 = 1.0 - (auVar22._0_4_ * auVar22._0_4_ + auVar22._4_4_ * auVar22._4_4_ +
                   auVar22._8_4_ * auVar22._8_4_ + auVar27._12_4_ * auVar27._12_4_);
    if (fVar24 <= 0.0) {
      fVar24 = 0.0;
    }
    fVar29 = (float)NEON_frsqrte(fVar24);
    fVar29 = fVar24 - (fVar29 * fVar24 * fVar29 * fVar24 - fVar24) * 0.5;
    fVar30 = (float)NEON_frsqrte(fVar29);
    fVar29 = fVar29 - (fVar30 * fVar29 * fVar30 * fVar29 - fVar24) * 0.5;
    fVar24 = (float)NEON_frsqrte(fVar29);
    fVar24 = fVar24 * fVar29;
    if (uVar2 == 3) {
      auVar23._12_4_ = fVar24;
      auVar23._0_12_ = auVar22;
    }
    else if (uVar2 == 1) {
      auVar28._4_4_ = auVar22._8_4_;
      auVar28._0_4_ = auVar22._0_4_;
      auVar28._8_4_ = auVar22._0_4_;
      auVar28._12_4_ = fVar24;
      auVar25 = NEON_ext(auVar27,auVar27,4,1);
      auVar23 = NEON_ext(auVar28,auVar25,8,1);
    }
    else if (uVar2 == 2) {
      auVar25 = NEON_ext(auVar27,auVar27,8,1);
      auVar27 = NEON_ext(auVar25,ZEXT416((uint)fVar24),4,1);
      auVar23 = NEON_ext(auVar27,auVar25,4,1);
    }
    else {
      auVar25 = NEON_ext(auVar27,ZEXT416((uint)fVar24),4,1);
      auVar23 = NEON_ext(auVar25,auVar27,0xc,1);
    }
    puVar13 = (ulong *)((long)puVar13 + 6);
    auVar26._0_8_ = -(ulong)((uVar19 & 4) == 0);
    auVar26._8_8_ = auVar26._0_8_;
    auVar5._4_4_ = -auVar23._4_4_;
    auVar5._0_4_ = -auVar23._0_4_;
    auVar5._8_4_ = -auVar23._8_4_;
    auVar5._12_4_ = -auVar23._12_4_;
    auVar23 = auVar23 ^ (auVar23 ^ auVar5) & ~auVar26;
    puVar4 = (undefined8 *)(param_3 + uVar18 * 0x40 + 0x30 + uVar15 * 0x10);
    puVar4[1] = auVar23._8_8_;
    *puVar4 = auVar23._0_8_;
    uVar15 = uVar15 + 1;
  } while (uVar15 != 4);
  *(uint *)(param_3 + 4) = uVar14 + 4;
  return 0;
}


