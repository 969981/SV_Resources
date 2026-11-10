/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f50c64; name: FUN_02f50c64
 */


void FUN_02f50c64(long *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  int iVar23;
  int iVar24;
  undefined1 auVar22 [16];
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float local_290 [2];
  undefined8 uStack_288;
  undefined8 auStack_280 [63];
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  
  puVar5 = PTR_PTR_047d1a50;
  lVar17 = *(long *)(param_2 + 0x150);
  local_78 = 0;
  local_70 = 0x8000000000000000;
  local_88 = 0;
  local_80 = 0x8000000000000000;
  auVar31._8_4_ = 0x7f7fffee;
  auVar31._0_8_ = 0x7f7fffee7f7fffee;
  auVar31._12_4_ = 0x7f7fffee;
  auVar22._8_4_ = 0xff7fffee;
  auVar22._0_8_ = 0xff7fffeeff7fffee;
  auVar22._12_4_ = 0xff7fffee;
  uVar16 = *(uint *)(param_2 + 0x174);
  uVar8 = 0;
  do {
    lVar12 = lVar17 + uVar8 * 0x80;
    if (*(int *)(lVar12 + 0x4c) != 0 && *(int *)(lVar12 + 0x4c) != 0x7fffffff) {
      fVar26 = (float)*(double *)(lVar12 + 0x18);
      lVar9 = (long)(int)local_70;
      fVar19 = (float)*(double *)(lVar12 + 0x10);
      fVar20 = (float)*(double *)(lVar12 + 0x20);
      if ((int)(local_70._4_4_ & 0x7fffffff) <= (int)local_70) {
        FUN_02e9b11c(&local_78,puVar5,lVar9 + 1);
      }
      puVar13 = (undefined8 *)(local_78 + (long)(int)local_70 * 0x10);
      puVar13[1] = (ulong)(uint)fVar20;
      *puVar13 = CONCAT44(fVar26,fVar19);
      lVar10 = (long)(int)local_80;
      local_70 = CONCAT44(local_70._4_4_,(int)(lVar9 + 1));
      if ((int)(local_80._4_4_ & 0x7fffffff) <= (int)local_80) {
        FUN_02eea048(&local_88,puVar5,lVar10 + 1);
      }
      auVar3._4_4_ = fVar26;
      auVar3._0_4_ = fVar19;
      auVar3._8_4_ = fVar20;
      auVar3._12_4_ = 0;
      auVar31 = NEON_fmin(auVar31,auVar3,4);
      auVar4._4_4_ = fVar26;
      auVar4._0_4_ = fVar19;
      auVar4._8_4_ = fVar20;
      auVar4._12_4_ = 0;
      auVar22 = NEON_fmax(auVar22,auVar4,4);
      *(undefined1 *)(local_88 + (int)local_80) = *(undefined1 *)(lVar12 + 0x5f);
      local_80 = CONCAT44(local_80._4_4_,(int)(lVar10 + 1));
    }
    uVar1 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar1;
  } while (uVar1 <= uVar16);
  uVar8 = (ulong)*(uint *)((long)param_1 + 0x1c);
  if (0 < (int)*(uint *)((long)param_1 + 0x1c)) {
    uVar11 = 0;
    do {
      fVar19 = (float)((uint)(uVar11 >> 2) & 0x3fffffff) * 0.25;
      (param_1 + uVar11 * 2 + 0x16)[1] =
           CONCAT44(auVar31._12_4_ + (auVar22._12_4_ - auVar31._12_4_) * 0.0,
                    auVar31._8_4_ + (auVar22._8_4_ - auVar31._8_4_) * fVar19);
      param_1[uVar11 * 2 + 0x16] =
           CONCAT44(auVar31._4_4_ + (auVar22._4_4_ - auVar31._4_4_) * fVar19,
                    auVar31._0_4_ +
                    (auVar22._0_4_ - auVar31._0_4_) * (float)((uint)uVar11 & 3) * 0.25);
      uVar11 = uVar11 + 1;
    } while (uVar8 != uVar11);
  }
  iVar18 = 0;
  *(int *)((long)param_1 + 0x24) = (int)local_70;
  while( true ) {
    uVar16 = (uint)uVar8;
    if (0 < (int)uVar16) {
      memset(local_290,0,uVar8 << 4);
      memset(param_1 + 5,0,uVar8 << 2);
    }
    uVar8 = local_70 & 0xffffffff;
    if (0 < (int)local_70) {
      lVar17 = 0;
      uVar11 = 0;
      lVar12 = local_78;
      do {
        iVar7 = (**(code **)(*param_1 + 0x20))(param_1,lVar12 + lVar17);
        lVar12 = local_78;
        lVar6 = local_88;
        lVar17 = lVar17 + 0x10;
        lVar9 = (long)iVar7;
        fVar19 = local_290[lVar9 * 4];
        fVar20 = local_290[lVar9 * 4 + 1];
        fVar26 = *(float *)((long)auStack_280 + lVar9 * 0x10 + -4);
        puVar13 = (undefined8 *)(local_78 + uVar11 * 0x10);
        uVar29 = puVar13[1];
        uVar21 = *puVar13;
        lVar10 = (long)iVar7;
        local_290[lVar10 * 4 + 2] = local_290[lVar9 * 4 + 2] + (float)uVar29;
        *(float *)((long)auStack_280 + lVar10 * 0x10 + -4) = fVar26 + (float)((ulong)uVar29 >> 0x20)
        ;
        local_290[lVar10 * 4] = fVar19 + (float)uVar21;
        local_290[lVar10 * 4 + 1] = fVar20 + (float)((ulong)uVar21 >> 0x20);
        pbVar14 = (byte *)(lVar6 + uVar11);
        uVar11 = uVar11 + 1;
        *(uint *)((long)param_1 + (long)iVar7 * 4 + 0x28) =
             *(int *)((long)param_1 + (long)iVar7 * 4 + 0x28) + (uint)*pbVar14;
      } while (uVar8 != uVar11);
      uVar16 = *(uint *)((long)param_1 + 0x1c);
    }
    if (0 < (int)uVar16) {
      if (uVar16 == 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        puVar13 = auStack_280;
        pbVar14 = (byte *)(param_1 + 0x18);
        puVar15 = (undefined4 *)((long)param_1 + 0x2c);
        do {
          uVar21 = NEON_scvtf(CONCAT44(puVar15[-1],puVar15[-1]),4);
          uVar8 = uVar8 + 2;
          fVar19 = (float)uVar21;
          fVar26 = (float)puVar13[-2] / fVar19;
          fVar20 = (float)((ulong)uVar21 >> 0x20);
          fVar27 = (float)((ulong)puVar13[-2] >> 0x20) / fVar20;
          fVar28 = (float)puVar13[-1] / fVar19;
          fVar30 = (float)((ulong)puVar13[-1] >> 0x20) / fVar20;
          iVar7 = -(uint)(fVar19 == 0.0);
          iVar23 = -(uint)(fVar20 == 0.0);
          iVar24 = -(uint)(fVar19 == 0.0);
          iVar25 = -(uint)(fVar20 == 0.0);
          pbVar14[-8] = SUB41(fVar28,0) & ~(byte)iVar24;
          pbVar14[-7] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar24 >> 8);
          pbVar14[-6] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
          pbVar14[-5] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
          pbVar14[-4] = SUB41(fVar30,0) & ~(byte)iVar25;
          pbVar14[-3] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar25 >> 8);
          pbVar14[-2] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
          pbVar14[-1] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
          pbVar14[-0x10] = SUB41(fVar26,0) & ~(byte)iVar7;
          pbVar14[-0xf] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar7 >> 8);
          pbVar14[-0xe] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
          pbVar14[-0xd] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
          pbVar14[-0xc] = SUB41(fVar27,0) & ~(byte)iVar23;
          pbVar14[-0xb] = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar23 >> 8);
          pbVar14[-10] = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
          pbVar14[-9] = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
          uVar2 = *puVar15;
          puVar15 = puVar15 + 2;
          uVar21 = NEON_scvtf(CONCAT44(uVar2,uVar2),4);
          fVar19 = (float)uVar21;
          fVar26 = (float)*puVar13 / fVar19;
          fVar20 = (float)((ulong)uVar21 >> 0x20);
          fVar27 = (float)((ulong)*puVar13 >> 0x20) / fVar20;
          fVar28 = (float)puVar13[1] / fVar19;
          fVar30 = (float)((ulong)puVar13[1] >> 0x20) / fVar20;
          iVar7 = -(uint)(fVar19 == 0.0);
          iVar23 = -(uint)(fVar20 == 0.0);
          iVar24 = -(uint)(fVar19 == 0.0);
          iVar25 = -(uint)(fVar20 == 0.0);
          pbVar14[8] = SUB41(fVar28,0) & ~(byte)iVar24;
          pbVar14[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar24 >> 8);
          pbVar14[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
          pbVar14[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
          pbVar14[0xc] = SUB41(fVar30,0) & ~(byte)iVar25;
          pbVar14[0xd] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar25 >> 8);
          pbVar14[0xe] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
          pbVar14[0xf] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
          *pbVar14 = SUB41(fVar26,0) & ~(byte)iVar7;
          pbVar14[1] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar7 >> 8);
          pbVar14[2] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
          pbVar14[3] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
          pbVar14[4] = SUB41(fVar27,0) & ~(byte)iVar23;
          pbVar14[5] = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar23 >> 8);
          pbVar14[6] = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
          pbVar14[7] = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
          puVar13 = puVar13 + 4;
          pbVar14 = pbVar14 + 0x20;
        } while (((ulong)uVar16 & 0xfffffffe) != uVar8);
      }
      if ((uVar16 & 1) != 0) {
        uVar2 = *(undefined4 *)((long)param_1 + uVar8 * 4 + 0x28);
        uVar21 = NEON_scvtf(CONCAT44(uVar2,uVar2),4);
        fVar19 = (float)uVar21;
        fVar26 = (float)*(undefined8 *)(local_290 + uVar8 * 4) / fVar19;
        fVar20 = (float)((ulong)uVar21 >> 0x20);
        fVar27 = (float)((ulong)*(undefined8 *)(local_290 + uVar8 * 4) >> 0x20) / fVar20;
        fVar28 = (float)*(undefined8 *)(local_290 + uVar8 * 4 + 2) / fVar19;
        fVar30 = (float)((ulong)*(undefined8 *)(local_290 + uVar8 * 4 + 2) >> 0x20) / fVar20;
        iVar7 = -(uint)(fVar19 == 0.0);
        iVar23 = -(uint)(fVar20 == 0.0);
        iVar24 = -(uint)(fVar19 == 0.0);
        iVar25 = -(uint)(fVar20 == 0.0);
        *(byte *)(param_1 + uVar8 * 2 + 0x17) = SUB41(fVar28,0) & ~(byte)iVar24;
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xb9) =
             (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar24 >> 8);
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xba) =
             (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xbb) =
             (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xbc) = SUB41(fVar30,0) & ~(byte)iVar25;
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xbd) =
             (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar25 >> 8);
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xbe) =
             (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xbf) =
             (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
        *(byte *)(param_1 + uVar8 * 2 + 0x16) = SUB41(fVar26,0) & ~(byte)iVar7;
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xb1) =
             (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar7 >> 8);
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xb2) =
             (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10);
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xb3) =
             (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18);
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xb4) = SUB41(fVar27,0) & ~(byte)iVar23;
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xb5) =
             (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar23 >> 8);
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xb6) =
             (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
        *(byte *)((long)param_1 + uVar8 * 0x10 + 0xb7) =
             (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
      }
    }
    FUN_02f51020(param_1,uVar16);
    uVar8 = local_80;
    puVar5 = PTR_PTR_047d1a50;
    iVar18 = iVar18 + 1;
    if (iVar18 == 0x14) break;
    uVar8 = (ulong)*(uint *)((long)param_1 + 0x1c);
  }
  local_80 = local_80 & 0xffffffff00000000;
  if ((-1 < (long)uVar8) && (local_88 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50);
  }
  uVar8 = local_70;
  uVar11 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (long)uVar8) && (local_78 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,local_78,uVar11 << 4);
  }
  return;
}


