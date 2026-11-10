/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0308b9f8; name: FUN_0308b9f8
 */


uint FUN_0308b9f8(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined1 auVar15 [16];
  int iVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined *local_a0;
  long lStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  local_90 = *(long *)(param_1 + 0x20);
  if ((*(uint *)(param_2 + 8) >> (ulong)(*(uint *)(*(long *)(local_90 + 0x20) + 0x180) & 0x1f) & 1)
      == 0) {
    uVar4 = 0;
  }
  else {
    auVar3 = *(undefined1 (*) [16])(local_90 + 0x60);
    pauVar2 = (undefined1 (*) [12])(local_90 + 0x70);
    uVar24 = (undefined4)((ulong)*(undefined8 *)(local_90 + 0x78) >> 0x20);
    fVar22 = (float)*(undefined8 *)*pauVar2;
    fVar23 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    auVar15._12_4_ = uVar24;
    auVar15._0_12_ = *pauVar2;
    auVar21._12_4_ = uVar24;
    auVar21._0_12_ = *pauVar2;
    auVar26 = NEON_ext(auVar15,auVar21,8,1);
    auVar25 = NEON_ext(auVar3,auVar3,8,1);
    auVar15 = *(undefined1 (*) [16])(local_90 + 0x80);
    auVar27 = NEON_ext(auVar15,auVar15,8,1);
    fVar16 = auVar15._4_4_;
    fVar11 = (float)*(undefined8 *)(local_90 + 0x90);
    fVar5 = (float)*(undefined8 *)(param_2 + 0x30) - fVar11;
    fVar12 = (float)((ulong)*(undefined8 *)(local_90 + 0x90) >> 0x20);
    fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) - fVar12;
    fVar13 = (float)*(undefined8 *)(local_90 + 0x98);
    fVar9 = (float)*(undefined8 *)(param_2 + 0x38) - fVar13;
    fVar19 = auVar27._4_4_;
    fVar6 = auVar25._0_4_ * fVar9 + auVar3._0_4_ * fVar5 + auVar3._4_4_ * fVar7;
    fVar8 = auVar26._0_4_ * fVar9 + fVar22 * fVar5 + fVar23 * fVar7;
    local_80 = CONCAT44(fVar8,fVar6);
    fVar10 = auVar27._0_4_ * fVar9 + auVar15._0_4_ * fVar5 + fVar16 * fVar7;
    uStack_78 = CONCAT44(fVar19 * fVar9 + fVar16 * fVar5 + fVar19 * fVar7,fVar10);
    local_a0 = &DAT_0464cb28;
    local_50 = 0xffffffff;
    fVar11 = *(float *)(param_2 + 0x40) - fVar11;
    fVar12 = *(float *)(param_2 + 0x44) - fVar12;
    fVar13 = *(float *)(param_2 + 0x48) - fVar13;
    auVar21 = NEON_fmov(0x3f800000,4);
    fVar5 = auVar25._0_4_ * fVar13 + auVar3._0_4_ * fVar11 + auVar3._4_4_ * fVar12;
    fVar7 = auVar26._0_4_ * fVar13 + fVar22 * fVar11 + fVar23 * fVar12;
    local_40 = CONCAT44(fVar7,fVar5);
    fVar9 = auVar27._0_4_ * fVar13 + auVar15._0_4_ * fVar11 + fVar16 * fVar12;
    uStack_38 = CONCAT44(fVar19 * fVar13 + fVar16 * fVar11 + fVar19 * fVar12,fVar9);
    auVar15 = ZEXT816(0x3f800000);
    fVar5 = fVar5 - fVar6;
    fVar7 = fVar7 - fVar8;
    fVar9 = fVar9 - fVar10;
    iVar14 = -(uint)(fVar5 == 0.0);
    iVar17 = -(uint)(fVar7 == 0.0);
    iVar18 = -(uint)(fVar9 == 0.0);
    iVar20 = -(uint)(auVar15._0_4_ == 0.0);
    fVar5 = (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                            CONCAT12((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                     CONCAT11((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                              SUB41(fVar5,0) & ~(byte)iVar14)));
    uStack_70 = CONCAT17((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                         CONCAT16((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                  CONCAT15((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                           CONCAT14(SUB41(fVar7,0) & ~(byte)iVar17,fVar5))));
    fVar7 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                            CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                     CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar18 >> 8),
                                              SUB41(fVar9,0) & ~(byte)iVar18)));
    uStack_68 = CONCAT17(auVar15[3] & ~(byte)((uint)iVar20 >> 0x18),
                         CONCAT16(auVar15[2] & ~(byte)((uint)iVar20 >> 0x10),(uint6)(uint)fVar7));
    auVar27._0_4_ = auVar21._0_4_ / fVar5;
    fVar6 = (float)((ulong)uStack_70 >> 0x20);
    auVar27._4_4_ = auVar21._4_4_ / fVar6;
    auVar27._8_4_ = auVar21._8_4_ / fVar7;
    fVar8 = (float)((ulong)uStack_68 >> 0x20);
    auVar27._12_4_ = auVar21._12_4_ / fVar8;
    iVar14 = -(uint)(fVar5 == 0.0);
    iVar17 = -(uint)(fVar6 == 0.0);
    iVar18 = -(uint)(fVar7 == 0.0);
    iVar20 = -(uint)(fVar8 == 0.0);
    auVar26[0] = ~(byte)iVar14;
    auVar26[1] = ~(byte)((uint)iVar14 >> 8);
    auVar26[2] = ~(byte)((uint)iVar14 >> 0x10);
    auVar26[3] = ~(byte)((uint)iVar14 >> 0x18);
    auVar26[4] = ~(byte)iVar17;
    auVar26[5] = ~(byte)((uint)iVar17 >> 8);
    auVar26[6] = ~(byte)((uint)iVar17 >> 0x10);
    auVar26[7] = ~(byte)((uint)iVar17 >> 0x18);
    auVar26[8] = ~(byte)iVar18;
    auVar26[9] = ~(byte)((uint)iVar18 >> 8);
    auVar26[10] = ~(byte)((uint)iVar18 >> 0x10);
    auVar26[0xb] = ~(byte)((uint)iVar18 >> 0x18);
    auVar26[0xc] = ~(byte)iVar20;
    auVar26[0xd] = ~(byte)((uint)iVar20 >> 8);
    auVar26[0xe] = ~(byte)((uint)iVar20 >> 0x10);
    auVar26[0xf] = ~(byte)((uint)iVar20 >> 0x18);
    local_48 = NEON_fmov(0x3f800000,4);
    auVar3._8_4_ = 0x7f7fffee;
    auVar3._0_8_ = 0x7f7fffee7f7fffee;
    auVar3._12_4_ = 0x7f7fffee;
    auVar25._8_4_ = 0x7f7fffee;
    auVar25._0_8_ = 0x7f7fffee7f7fffee;
    auVar25._12_4_ = 0x7f7fffee;
    auVar25 = auVar25 ^ (auVar3 ^ auVar27) & auVar26;
    uStack_58 = auVar25._8_8_;
    local_60 = auVar25._0_8_;
    lStack_98 = param_2;
    uStack_30 = local_80;
    uStack_28 = uStack_78;
    uVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                      (*(long **)(param_1 + 0x18),&uStack_30,&local_40,&local_a0);
    if ((uVar4 & 1) != 0) {
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x20) + 0x20) + 0x17c);
      *(uint *)(param_3 + 1) = local_50 | (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 0x16;
      *param_3 = local_48;
    }
  }
  return uVar4 & 1;
}


