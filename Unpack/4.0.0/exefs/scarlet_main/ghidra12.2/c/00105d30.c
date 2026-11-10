/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00105d30; name: FUN_00105d30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105d30(ulong param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                 uint param_6,int param_7)

{
  uint uVar1;
  short *psVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar12;
  short sVar13;
  short sVar14;
  undefined8 uVar11;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_38 [8];
  
  param_4 = param_4 & 0xffffffff;
  if ((param_1 & 1) != 0) {
    FUN_00106660(param_2,(ulong)(auStack_38 + (0x37 - (param_4 * 4 + 0x4f & 0x7fffffff0))) &
                         0xffffffffffffffc0,param_3,param_4);
  }
  if (param_7 == 0) {
    if (param_6 == 0) {
      return;
    }
  }
  else {
    if (param_6 == 0) {
      return;
    }
    param_7 = -param_7;
    sVar5 = (short)(param_6 >> 1);
    uVar4 = 0;
    uVar18 = _DAT_03caa570;
    uVar11 = _UNK_03caa578;
    do {
      uVar1 = (int)uVar4 + 0x10;
      sVar6 = (short)uVar18;
      sVar7 = (short)((ulong)uVar18 >> 0x10);
      sVar8 = (short)((ulong)uVar18 >> 0x20);
      sVar9 = (short)((ulong)uVar18 >> 0x30);
      sVar10 = (short)uVar11;
      sVar12 = (short)((ulong)uVar11 >> 0x10);
      sVar13 = (short)((ulong)uVar11 >> 0x20);
      sVar14 = (short)((ulong)uVar11 >> 0x30);
      psVar2 = (short *)(param_5 + uVar4);
      uVar18 = ((undefined8 *)(param_2 + uVar4))[1];
      uVar17 = *(undefined8 *)(param_2 + uVar4);
      auVar15._0_4_ =
           (int)psVar2[4] * (int)(short)(sVar5 - sVar10) + (int)(short)uVar18 * (int)sVar10;
      auVar15._4_4_ =
           (int)psVar2[5] * (int)(short)(sVar5 - sVar12) +
           (int)(short)((ulong)uVar18 >> 0x10) * (int)sVar12;
      auVar15._8_4_ =
           (int)psVar2[6] * (int)(short)(sVar5 - sVar13) +
           (int)(short)((ulong)uVar18 >> 0x20) * (int)sVar13;
      auVar15._12_4_ =
           (int)psVar2[7] * (int)(short)(sVar5 - sVar14) +
           (int)(short)((ulong)uVar18 >> 0x30) * (int)sVar14;
      uVar18 = CONCAT26(sVar9 + 8,CONCAT24(sVar8 + 8,CONCAT22(sVar7 + 8,sVar6 + 8)));
      uVar11 = CONCAT26(sVar14 + 8,CONCAT24(sVar13 + 8,CONCAT22(sVar12 + 8,sVar10 + 8)));
      auVar16._4_4_ = param_7;
      auVar16._0_4_ = param_7;
      auVar16._8_4_ = param_7;
      auVar16._12_4_ = param_7;
      auVar19._4_4_ =
           (int)psVar2[1] * (int)(short)(sVar5 - sVar7) +
           (int)(short)((ulong)uVar17 >> 0x10) * (int)sVar7;
      auVar19._0_4_ = (int)*psVar2 * (int)(short)(sVar5 - sVar6) + (int)(short)uVar17 * (int)sVar6;
      auVar19._8_4_ =
           (int)psVar2[2] * (int)(short)(sVar5 - sVar8) +
           (int)(short)((ulong)uVar17 >> 0x20) * (int)sVar8;
      auVar19._12_4_ =
           (int)psVar2[3] * (int)(short)(sVar5 - sVar9) +
           (int)(short)((ulong)uVar17 >> 0x30) * (int)sVar9;
      auVar19 = NEON_sshl(auVar19,auVar16,4);
      auVar3._4_4_ = param_7;
      auVar3._0_4_ = param_7;
      auVar3._8_4_ = param_7;
      auVar3._12_4_ = param_7;
      auVar16 = NEON_sshl(auVar15,auVar3,4);
      ((undefined8 *)(param_2 + uVar4))[1] =
           CONCAT26(auVar16._12_2_,CONCAT24(auVar16._8_2_,CONCAT22(auVar16._4_2_,auVar16._0_2_)));
      *(undefined8 *)(param_2 + uVar4) =
           CONCAT26(auVar19._12_2_,CONCAT24(auVar19._8_2_,CONCAT22(auVar19._4_2_,auVar19._0_2_)));
      uVar4 = (ulong)uVar1;
    } while (uVar1 < param_6);
  }
  FUN_00106020(param_5,(param_2 + param_4 * 2) - (ulong)param_6,param_6);
  return;
}


