/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f07fe8; name: FUN_02f07fe8
 */


void FUN_02f07fe8(long param_1,float *param_2,float *param_3,int param_4,float *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  int iVar27;
  float fVar28;
  int iVar31;
  int iVar33;
  undefined1 auVar29 [16];
  float fVar32;
  float fVar34;
  float fVar35;
  int iVar36;
  undefined1 auVar30 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined8 local_70;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((param_1 == 0) || ((*(ushort *)(param_1 + 0x1a) & 1) == 0)) {
    memcpy(&local_70,param_2,0x40);
    fVar19 = *param_3;
    fVar13 = param_3[1];
    fVar15 = param_3[2];
    local_70 = CONCAT44(local_70._4_4_ * fVar19,(float)local_70 * fVar19);
    uStack_68 = CONCAT44(uStack_68._4_4_ * fVar19,(float)uStack_68 * fVar19);
    fStack_60 = fStack_60 * fVar13;
    fStack_5c = fStack_5c * fVar13;
    fStack_58 = fStack_58 * fVar13;
    fStack_54 = fStack_54 * fVar13;
    auVar22._0_8_ = CONCAT44((float)((ulong)local_50 >> 0x20) * fVar15,(float)local_50 * fVar15);
    auVar22._8_4_ = (float)uStack_48 * fVar15;
    auVar22._12_4_ = (float)((ulong)uStack_48 >> 0x20) * fVar15;
    uStack_48 = auVar22._8_8_;
    local_50 = auVar22._0_8_;
    (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x18))
              (param_1,&local_70,param_5);
  }
  else {
    auVar14._8_4_ = 0x3a83126f;
    auVar14._0_8_ = 0x3a83126f3a83126f;
    auVar14._12_4_ = 0x3a83126f;
    auVar29._0_4_ = ABS(*param_3);
    auVar29._4_4_ = ABS(param_3[1]);
    auVar29._8_4_ = ABS(param_3[2]);
    auVar29._12_4_ = ABS(param_3[3]);
    iVar27 = *(int *)(param_1 + 0x40);
    auVar22 = NEON_fmax(auVar29,auVar14,4);
    puVar5 = (undefined8 *)0x0;
    if (iVar27 != 0) {
      puVar5 = (undefined8 *)((long)iVar27 + param_1 + 0x40);
    }
    uVar1 = *(uint *)(param_1 + 0x44);
    uVar9 = CONCAT17((char)(-(uint)(param_3[1] < 0.0) >> 0x18),
                     (uint7)((byte)(-(uint)(*param_3 < 0.0) >> 0x18) & 0x80) << 0x18) &
            0x80ffffffffffffff;
    fVar19 = *(float *)(param_1 + 0x20);
    auVar11._0_4_ = (float)CONCAT13((byte)(uVar9 >> 0x18) ^ auVar22[3],auVar22._0_3_);
    auVar10._0_8_ =
         CONCAT17((byte)(uVar9 >> 0x38) ^ auVar22[7],
                  CONCAT16(auVar22[6],CONCAT15(auVar22[5],CONCAT14(auVar22[4],auVar11._0_4_))));
    auVar10[8] = auVar22[8];
    auVar10[9] = auVar22[9];
    auVar10[10] = auVar22[10];
    auVar10[0xb] = (byte)(-(uint)(param_3[2] < 0.0) >> 0x18) & 0x80 ^ auVar22[0xb];
    if ((int)uVar1 < 3) {
      fVar19 = fVar19 * auVar22._0_4_;
      auVar11._4_4_ = auVar11._0_4_;
      auVar11._8_4_ = auVar11._0_4_;
      auVar25 = SUB1612(ZEXT816(0),0);
      auVar10 = auVar11;
    }
    else {
      auVar25 = SUB1612(ZEXT816(0),0);
      if ((param_4 == 0) && (1e-05 < ABS(fVar19))) {
        auVar29 = NEON_fmov(0xbf800000,4);
        fVar13 = (float)((ulong)auVar10._0_8_ >> 0x20);
        fVar15 = auVar10._8_4_;
        iVar27 = -(uint)(ABS(auVar11._0_4_ + auVar29._0_4_) <= 1.1920929e-07);
        iVar31 = -(uint)(ABS(fVar13 + auVar29._4_4_) <= 1.1920929e-07);
        iVar33 = -(uint)(ABS(fVar15 + auVar29._8_4_) <= 1.1920929e-07);
        if (CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                     (byte)((uint)iVar33 >> 0x18),
                     CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                              (byte)((uint)iVar33 >> 0x10),
                              CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar27 >> 8) &
                                       (byte)((uint)iVar33 >> 8),
                                       (byte)iVar31 & (byte)iVar27 & (byte)iVar33))) == 0) {
          uVar20 = CONCAT44(*(undefined4 *)(puVar5 + 1),*(undefined4 *)(puVar5 + 1));
          auVar26._0_8_ = *puVar5;
          lVar7 = (ulong)uVar1 - 1;
          puVar8 = (undefined4 *)((long)puVar5 + 0x14);
          auVar26._8_8_ = uVar20;
          auVar37._8_8_ = uVar20;
          auVar37._0_8_ = auVar26._0_8_;
          do {
            uVar2 = *puVar8;
            lVar7 = lVar7 + -1;
            puVar6 = (undefined8 *)(puVar8 + -2);
            puVar8 = puVar8 + 3;
            uVar39 = (undefined1)uVar2;
            uVar40 = (undefined1)((uint)uVar2 >> 8);
            uVar41 = (undefined1)((uint)uVar2 >> 0x10);
            uVar42 = (undefined1)((uint)uVar2 >> 0x18);
            auVar3[8] = uVar39;
            auVar3._0_8_ = *puVar6;
            auVar3[9] = uVar40;
            auVar3[10] = uVar41;
            auVar3[0xb] = uVar42;
            auVar3[0xc] = uVar39;
            auVar3[0xd] = uVar40;
            auVar3[0xe] = uVar41;
            auVar3[0xf] = uVar42;
            auVar37 = NEON_fmin(auVar37,auVar3,4);
            auVar4[8] = uVar39;
            auVar4._0_8_ = *puVar6;
            auVar4[9] = uVar40;
            auVar4[10] = uVar41;
            auVar4[0xb] = uVar42;
            auVar4[0xc] = uVar39;
            auVar4[0xd] = uVar40;
            auVar4[0xe] = uVar41;
            auVar4[0xf] = uVar42;
            auVar26 = NEON_fmax(auVar26,auVar4,4);
          } while (lVar7 != 0);
          uVar20 = CONCAT44(fVar19,fVar19);
          fVar28 = (auVar26._0_4_ - auVar37._0_4_) * 0.5;
          fVar32 = (auVar26._4_4_ - auVar37._4_4_) * 0.5;
          fVar34 = (auVar26._8_4_ - auVar37._8_4_) * 0.5;
          fVar35 = (auVar26._12_4_ - auVar37._12_4_) * 0.5;
          fVar38 = fVar19 + fVar35;
          fVar16 = auVar22._0_4_ * (fVar19 + fVar28);
          fVar17 = auVar22._4_4_ * (fVar19 + fVar32);
          fVar24 = auVar22._8_4_ * (fVar19 + fVar34);
          iVar27 = -(uint)(fVar19 < fVar16);
          iVar31 = -(uint)(fVar19 < fVar17);
          iVar33 = -(uint)(fVar19 < fVar24);
          if (CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                       (byte)((uint)iVar33 >> 0x18),
                       CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                                (byte)((uint)iVar33 >> 0x10),
                                CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar27 >> 8) &
                                         (byte)((uint)iVar33 >> 8),
                                         (byte)iVar31 & (byte)iVar27 & (byte)iVar33))) == 0) {
            uVar20 = NEON_fminp(CONCAT44(fVar17,fVar16),CONCAT44(fVar17,fVar16),4);
            uVar20 = NEON_fmin(CONCAT44(fVar24,fVar24),uVar20,4);
          }
          fVar19 = (float)uVar20;
          fVar21 = (float)((ulong)uVar20 >> 0x20);
          fVar16 = (fVar16 - fVar19) / fVar28;
          fVar17 = (fVar17 - fVar21) / fVar32;
          fVar24 = (fVar24 - fVar19) / fVar34;
          fVar38 = (auVar22._12_4_ * fVar38 - fVar21) / fVar35;
          iVar27 = -(uint)(fVar28 == 0.0);
          iVar31 = -(uint)(fVar32 == 0.0);
          iVar33 = -(uint)(fVar34 == 0.0);
          iVar36 = -(uint)(fVar35 == 0.0);
          auVar23[0] = SUB41(fVar16,0) & ~(byte)iVar27;
          auVar23[1] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar27 >> 8);
          auVar23[2] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
          auVar23[3] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
          auVar23[4] = SUB41(fVar17,0) & ~(byte)iVar31;
          auVar23[5] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar31 >> 8);
          auVar23[6] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
          auVar23[7] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
          auVar23[8] = SUB41(fVar24,0) & ~(byte)iVar33;
          auVar23[9] = (byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar33 >> 8);
          auVar23[10] = (byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
          auVar23[0xb] = (byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
          auVar23[0xc] = SUB41(fVar38,0) & ~(byte)iVar36;
          auVar23[0xd] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar36 >> 8);
          auVar23[0xe] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
          auVar23[0xf] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
          auVar22 = NEON_fmax(auVar23,auVar14,4);
          uVar9 = CONCAT17((char)(-(uint)(fVar13 < 0.0) >> 0x18),
                           (uint7)((byte)(-(uint)(auVar11._0_4_ < 0.0) >> 0x18) & 0x80) << 0x18) &
                  0x80ffffffffffffff;
          fVar16 = (float)CONCAT13((byte)(uVar9 >> 0x18) ^ auVar22[3],auVar22._0_3_);
          auVar10._0_8_ =
               CONCAT17((byte)(uVar9 >> 0x38) ^ auVar22[7],
                        CONCAT16(auVar22[6],CONCAT15(auVar22[5],CONCAT14(auVar22[4],fVar16))));
          auVar10[8] = auVar22[8];
          auVar10[9] = auVar22[9];
          auVar10[10] = auVar22[10];
          auVar10[0xb] = (byte)(-(uint)(fVar15 < 0.0) >> 0x18) & 0x80 ^ auVar22[0xb];
          auVar25._0_4_ = (auVar37._0_4_ + auVar26._0_4_) * 0.5 * (auVar11._0_4_ - fVar16);
          auVar25._4_4_ =
               (auVar37._4_4_ + auVar26._4_4_) * 0.5 *
               (fVar13 - (float)((ulong)auVar10._0_8_ >> 0x20));
          auVar25._8_4_ = (auVar37._8_4_ + auVar26._8_4_) * 0.5 * (fVar15 - auVar10._8_4_);
        }
      }
    }
    fVar24 = auVar25._4_4_;
    fVar17 = auVar25._0_4_;
    fVar28 = auVar25._8_4_;
    fVar13 = param_2[0xc] + param_2[8] * fVar28 + *param_2 * fVar17 + param_2[4] * fVar24;
    fVar15 = param_2[0xd] + param_2[9] * fVar28 + param_2[1] * fVar17 + param_2[5] * fVar24;
    fVar16 = param_2[0xe] + param_2[10] * fVar28 + param_2[2] * fVar17 + param_2[6] * fVar24;
    fVar17 = param_2[0xf] + param_2[0xb] * fVar28 + param_2[3] * fVar17 + param_2[7] * fVar24;
    if (uVar1 == 0) {
      auVar12._8_4_ = 0xff7fffee;
      auVar12._0_8_ = 0xff7fffeeff7fffee;
      auVar12._12_4_ = 0xff7fffee;
      auVar18._8_4_ = 0x7f7fffee;
      auVar18._0_8_ = 0x7f7fffee7f7fffee;
      auVar18._12_4_ = 0x7f7fffee;
    }
    else {
      fVar24 = auVar10._0_4_;
      fVar28 = auVar10._4_4_;
      auVar18._8_4_ = 0x7f7fffee;
      auVar18._0_8_ = 0x7f7fffee7f7fffee;
      auVar18._12_4_ = 0x7f7fffee;
      fVar32 = auVar10._8_4_;
      puVar6 = (undefined8 *)((long)puVar5 + (long)(int)uVar1 * 0xc);
      auVar12._8_4_ = 0xff7fffee;
      auVar12._0_8_ = 0xff7fffeeff7fffee;
      auVar12._12_4_ = 0xff7fffee;
      do {
        fVar35 = (float)*puVar5;
        fVar38 = (float)((ulong)*puVar5 >> 0x20);
        fVar34 = *(float *)(puVar5 + 1);
        puVar5 = (undefined8 *)((long)puVar5 + 0xc);
        auVar30._0_4_ =
             *param_2 * fVar24 * fVar35 + param_2[4] * fVar28 * fVar38 +
             param_2[8] * fVar32 * fVar34;
        auVar30._4_4_ =
             param_2[1] * fVar24 * fVar35 + param_2[5] * fVar28 * fVar38 +
             param_2[9] * fVar32 * fVar34;
        auVar30._8_4_ =
             param_2[2] * fVar24 * fVar35 + param_2[6] * fVar28 * fVar38 +
             param_2[10] * fVar32 * fVar34;
        auVar30._12_4_ =
             param_2[3] * fVar24 * fVar35 + param_2[7] * fVar28 * fVar38 +
             param_2[0xb] * fVar32 * fVar34;
        auVar18 = NEON_fmin(auVar18,auVar30,4);
        auVar12 = NEON_fmax(auVar12,auVar30,4);
      } while (puVar5 != puVar6);
    }
    param_5[2] = (fVar16 + auVar18._8_4_) - fVar19;
    param_5[3] = (fVar17 + auVar18._12_4_) - fVar19;
    *param_5 = (fVar13 + auVar18._0_4_) - fVar19;
    param_5[1] = (fVar15 + auVar18._4_4_) - fVar19;
    param_5[6] = fVar19 + fVar16 + auVar12._8_4_;
    param_5[7] = fVar19 + fVar17 + auVar12._12_4_;
    param_5[4] = fVar19 + fVar13 + auVar12._0_4_;
    param_5[5] = fVar19 + fVar15 + auVar12._4_4_;
  }
  return;
}


