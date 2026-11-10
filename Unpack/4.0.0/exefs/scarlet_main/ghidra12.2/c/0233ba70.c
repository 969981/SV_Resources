/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0233ba70; name: FUN_0233ba70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0233ba70(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  fVar10 = param_2._0_4_ - param_1._0_4_;
  fVar11 = param_2._4_4_ - param_1._4_4_;
  fVar12 = param_2._8_4_ - param_1._8_4_;
  fVar13 = param_2._12_4_ - param_1._12_4_;
  auVar1._4_4_ = fVar11;
  auVar1._0_4_ = fVar10;
  auVar1._8_4_ = fVar12;
  auVar1._12_4_ = fVar13;
  uVar15 = a64_TBL(ZEXT816(0),auVar1,DAT_03cb56c8);
  auVar2._4_4_ = fVar11;
  auVar2._0_4_ = fVar10;
  auVar2._8_4_ = fVar12;
  auVar2._12_4_ = fVar13;
  uVar17 = a64_TBL(ZEXT816(0),auVar2,DAT_03cb54d8);
  auVar6._8_8_ = _UNK_03cabe68;
  auVar6._0_8_ = _DAT_03cabe60;
  uVar19 = a64_TBL(ZEXT816(0),auVar6,DAT_03cb5488);
  auVar3._4_4_ = fVar11;
  auVar3._0_4_ = fVar10;
  auVar3._8_4_ = fVar12;
  auVar3._12_4_ = fVar13;
  uVar18 = a64_TBL(ZEXT816(0),auVar3,DAT_03cb5488);
  auVar4._4_4_ = fVar11;
  auVar4._0_4_ = fVar10;
  auVar4._8_4_ = fVar12;
  auVar4._12_4_ = fVar13;
  uVar5 = a64_TBL(ZEXT816(0),auVar4,DAT_03cb54c0);
  auVar7._8_8_ = _UNK_03cabe68;
  auVar7._0_8_ = _DAT_03cabe60;
  uVar20 = a64_TBL(ZEXT816(0),auVar7,DAT_03cb54c0);
  auVar8._8_8_ = _UNK_03cabe68;
  auVar8._0_8_ = _DAT_03cabe60;
  uVar14 = a64_TBL(ZEXT816(0),auVar8,DAT_03cb56c8);
  auVar9._8_8_ = _UNK_03cabe68;
  auVar9._0_8_ = _DAT_03cabe60;
  uVar16 = a64_TBL(ZEXT816(0),auVar9,DAT_03cb54d8);
  FUN_0233b71c(param_1._0_4_,(float)uVar15 * (float)uVar19 - (float)uVar18 * (float)uVar14,param_3,
               param_4,CONCAT44((float)((ulong)uVar17 >> 0x20) * (float)((ulong)uVar20 >> 0x20) -
                                (float)((ulong)uVar5 >> 0x20) * (float)((ulong)uVar16 >> 0x20),
                                (float)uVar17 * (float)uVar20 - (float)uVar5 * (float)uVar16));
  return;
}


