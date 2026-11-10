/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a8abc; name: FUN_030a8abc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030a8abc(long param_1,long param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auVar2 [16];
  byte bVar7;
  undefined1 auVar3 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined *local_50;
  long lStack_48;
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_40 = *(long *)(param_1 + 0x20);
  if ((*(uint *)(param_2 + 8) >> (ulong)(*(uint *)(*(long *)(local_40 + 0x20) + 0x98) & 0x1f) & 1)
      != 0) {
    auVar10 = *(undefined1 (*) [16])(param_2 + 0x40);
    local_30._0_4_ = (float)*(undefined8 *)(param_2 + 0x30);
    local_30._4_4_ = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
    uStack_28._0_4_ = (float)*(undefined8 *)(param_2 + 0x38);
    uStack_28._4_4_ = (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
    auVar3._0_8_ = CONCAT44(local_30._4_4_ - *(float *)(local_40 + 0x54),
                            (float)local_30 - *(float *)(local_40 + 0x50));
    auVar3._8_4_ = (float)uStack_28 - *(float *)(local_40 + 0x58);
    auVar3._12_4_ = uStack_28._4_4_ - *(float *)(local_40 + 0x5c);
    auVar1._0_8_ = CONCAT44(auVar10._4_4_ - *(float *)(local_40 + 0x54),
                            auVar10._0_4_ - *(float *)(local_40 + 0x50));
    auVar1._8_4_ = auVar10._8_4_ - *(float *)(local_40 + 0x58);
    auVar1._12_4_ = auVar10._12_4_ - *(float *)(local_40 + 0x5c);
    uStack_28 = auVar3._8_8_;
    uStack_18 = auVar1._8_8_;
    local_30 = auVar3._0_8_;
    local_20 = auVar1._0_8_;
    if ((ulong)*(byte *)(local_40 + 0x40) != 0) {
      bVar4 = PTR_DAT_047e5050[*(byte *)(local_40 + 0x40)];
      auVar19._8_8_ = _UNK_03cab238;
      auVar19._0_8_ = _DAT_03cab230;
      auVar20._8_8_ = _UNK_03cac2d8;
      auVar20._0_8_ = _DAT_03cac2d0;
      auVar16._1_3_ = 0;
      auVar16[0] = bVar4;
      auVar16[4] = bVar4;
      auVar16._5_3_ = 0;
      auVar16[8] = bVar4;
      auVar16._9_3_ = 0;
      auVar16[0xc] = bVar4;
      auVar16._13_3_ = 0;
      iVar12 = -(uint)bVar4;
      auVar18._4_4_ = iVar12;
      auVar18._0_4_ = iVar12;
      auVar18._8_4_ = iVar12;
      auVar18._12_4_ = iVar12;
      auVar2._8_8_ = _UNK_03cabbd8;
      auVar2._0_8_ = _DAT_03cabbd0;
      auVar10 = NEON_ushl(auVar19,auVar16,4);
      auVar8._8_8_ = _UNK_03cabbc8;
      auVar8._0_8_ = _DAT_03cabbc0;
      auVar17 = NEON_ushl(auVar20,auVar16,4);
      auVar21._8_8_ = _UNK_03cabec8;
      auVar21._0_8_ = _DAT_03cabec0;
      auVar11._0_4_ = -(uint)(-1 < auVar10._0_4_);
      auVar11._4_4_ = -(uint)(-1 < auVar10._4_4_);
      auVar11._8_4_ = -(uint)(-1 < auVar10._8_4_);
      auVar11._12_4_ = -(uint)(-1 < auVar10._8_8_);
      iVar12 = -(uint)(-1 < auVar17._0_4_);
      iVar13 = -(uint)(-1 < auVar17._4_4_);
      iVar14 = -(uint)(-1 < auVar17._8_4_);
      iVar15 = -(uint)(-1 < auVar17._12_4_);
      auVar19 = NEON_ushl(auVar21,auVar18,4);
      auVar22 = a64_TBL(ZEXT816(0),auVar3,auVar2);
      auVar10 = a64_TBL(ZEXT816(0),auVar1,auVar2);
      auVar17 = a64_TBL(ZEXT816(0),auVar3,auVar8);
      auVar9 = a64_TBL(ZEXT816(0),auVar1,auVar8);
      auVar1 = auVar1 ^ (auVar1 ^ auVar10) & ~auVar11;
      auVar10._4_4_ = iVar13;
      auVar10._0_4_ = iVar12;
      auVar10._8_4_ = iVar14;
      auVar10._12_4_ = iVar15;
      auVar17 = auVar17 ^ (auVar17 ^ auVar22 ^ (auVar22 ^ auVar3) & auVar11) & auVar10;
      auVar22._0_3_ = auVar17._0_3_;
      bVar4 = (byte)((uint)(auVar19._0_4_ << 0x1f) >> 0x18);
      auVar22[3] = bVar4 ^ auVar17[3];
      auVar22[4] = auVar17[4];
      auVar22[5] = auVar17[5];
      auVar22[6] = auVar17[6];
      bVar5 = (byte)((uint)(auVar19._4_4_ << 0x1f) >> 0x18);
      auVar22[7] = bVar5 ^ auVar17[7];
      auVar22[8] = auVar17[8];
      auVar22[9] = auVar17[9];
      auVar22[10] = auVar17[10];
      bVar6 = (byte)((uint)(auVar19._8_4_ << 0x1f) >> 0x18);
      auVar22[0xb] = bVar6 ^ auVar17[0xb];
      auVar22[0xc] = auVar17[0xc];
      auVar22[0xd] = auVar17[0xd];
      auVar22[0xe] = auVar17[0xe];
      bVar7 = (byte)((uint)(auVar19._12_4_ << 0x1f) >> 0x18);
      auVar22[0xf] = bVar7 ^ auVar17[0xf];
      auVar17._4_4_ = iVar13;
      auVar17._0_4_ = iVar12;
      auVar17._8_4_ = iVar14;
      auVar17._12_4_ = iVar15;
      auVar1 = auVar1 ^ (auVar1 ^ auVar9) & ~auVar17;
      auVar9._0_3_ = auVar1._0_3_;
      auVar9[3] = auVar1[3] ^ bVar4;
      auVar9[4] = auVar1[4];
      auVar9[5] = auVar1[5];
      auVar9[6] = auVar1[6];
      auVar9[7] = auVar1[7] ^ bVar5;
      auVar9[8] = auVar1[8];
      auVar9[9] = auVar1[9];
      auVar9[10] = auVar1[10];
      auVar9[0xb] = auVar1[0xb] ^ bVar6;
      auVar9[0xc] = auVar1[0xc];
      auVar9[0xd] = auVar1[0xd];
      auVar9[0xe] = auVar1[0xe];
      auVar9[0xf] = auVar1[0xf] ^ bVar7;
      auVar3 = NEON_fmin(auVar22,auVar9,4);
      auVar10 = NEON_fmax(auVar22,auVar9,4);
      uStack_28 = auVar3._8_8_;
      local_30 = auVar3._0_8_;
      uStack_18 = auVar10._8_8_;
      local_20 = auVar10._0_8_;
    }
    local_50 = &DAT_0464d1f0;
    lStack_48 = param_2;
    uStack_38 = param_3;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
              (*(long **)(param_1 + 0x18),&local_30,&local_50);
  }
  return;
}


