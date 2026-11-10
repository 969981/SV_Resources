/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00455560; name: FUN_00455560
 */


void FUN_00455560(byte *param_1,byte *param_2,int param_3,undefined8 param_4,
                 undefined1 (*param_5) [16],int param_6,code *param_7)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar8;
  undefined8 uVar6;
  byte bVar9;
  byte bVar11;
  undefined8 uVar10;
  undefined1 auVar7 [16];
  byte bVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined1 auVar13 [16];
  byte bVar17;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte bVar23;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar35;
  int iVar36;
  int iVar37;
  undefined1 local_60 [2];
  byte abStack_5e [6];
  undefined1 auStack_58 [2];
  byte abStack_56 [38];
  
  _auStack_58 = SUB168(*param_5,8);
  _local_60 = SUB168(*param_5,0);
  (*param_7)(param_5,param_5,param_4);
  bVar5 = (*param_5)[0] ^ *param_1;
  abStack_56[6] = *param_1;
  if (param_6 != 0) {
    abStack_56[6] = bVar5;
  }
  iVar35 = param_3 + 7;
  if (-1 < param_3) {
    iVar35 = param_3;
  }
  *param_2 = bVar5;
  uVar1 = iVar35 >> 3;
  param_3 = param_3 % 8;
  if (param_3 == 0) {
    bVar23 = auStack_58[uVar1];
    bVar26 = auStack_58[(ulong)uVar1 + 1];
    bVar27 = abStack_56[uVar1];
    bVar28 = abStack_56[(ulong)uVar1 + 1];
    bVar5 = abStack_56[(ulong)uVar1 + 2];
    bVar8 = abStack_56[(ulong)uVar1 + 3];
    bVar9 = abStack_56[(ulong)uVar1 + 4];
    bVar11 = abStack_56[(ulong)uVar1 + 5];
    bVar17 = local_60[uVar1];
    bVar20 = local_60[(ulong)uVar1 + 1];
    bVar21 = abStack_5e[uVar1];
    bVar22 = abStack_5e[(ulong)uVar1 + 1];
    bVar12 = abStack_5e[(ulong)uVar1 + 2];
    bVar14 = abStack_5e[(ulong)uVar1 + 3];
    bVar15 = abStack_5e[(ulong)uVar1 + 4];
    bVar16 = abStack_5e[(ulong)uVar1 + 5];
  }
  else {
    uVar10 = *(undefined8 *)(auStack_58 + (long)(int)uVar1 + 1);
    uVar6 = *(undefined8 *)(local_60 + (long)(int)uVar1 + 1);
    auVar34._1_3_ = 0;
    auVar34[0] = local_60[(int)uVar1];
    uVar3 = (undefined1)((ulong)uVar6 >> 8);
    auVar32._4_4_ = param_3;
    auVar32._0_4_ = param_3;
    auVar32._8_4_ = param_3;
    auVar32._12_4_ = param_3;
    uVar4 = (undefined1)((ulong)uVar10 >> 8);
    auVar24._6_2_ = 0;
    auVar24._0_6_ =
         (uint6)CONCAT14(uVar3,(uint)CONCAT12(uVar3,(ushort)(byte)uVar6)) & 0xffff0000ffff;
    auVar24[8] = (char)((ulong)uVar6 >> 0x10);
    auVar24._9_3_ = 0;
    auVar24[0xc] = (char)((ulong)uVar6 >> 0x18);
    auVar24._13_3_ = 0;
    auVar18._1_3_ = 0;
    auVar18[0] = (byte)((ulong)uVar6 >> 0x20);
    auVar18[4] = (char)((ulong)uVar6 >> 0x28);
    auVar18._5_3_ = 0;
    auVar18[8] = (char)((ulong)uVar6 >> 0x30);
    auVar18._9_3_ = 0;
    auVar18[0xc] = (char)((ulong)uVar6 >> 0x38);
    auVar18._13_3_ = 0;
    auVar34[4] = (byte)uVar6;
    auVar34._5_3_ = 0;
    auVar30._1_3_ = 0;
    auVar30[0] = abStack_56[(long)(int)uVar1 + 2];
    auVar34[8] = abStack_5e[(int)uVar1];
    auVar30[4] = abStack_56[(long)(int)uVar1 + 3];
    auVar31._1_3_ = 0;
    auVar31[0] = auStack_58[(int)uVar1];
    auVar29._1_3_ = 0;
    auVar29[0] = abStack_5e[(long)(int)uVar1 + 2];
    auVar30._5_3_ = 0;
    auVar30[8] = abStack_56[(long)(int)uVar1 + 4];
    auVar31[4] = auStack_58[(long)(int)uVar1 + 1];
    auVar29[4] = abStack_5e[(long)(int)uVar1 + 3];
    auVar30._9_3_ = 0;
    auVar30[0xc] = abStack_56[(long)(int)uVar1 + 5];
    auVar30._13_3_ = 0;
    auVar29._5_3_ = 0;
    auVar29[8] = abStack_5e[(long)(int)uVar1 + 4];
    auVar31._5_3_ = 0;
    auVar31[8] = abStack_56[(int)uVar1];
    auVar31._9_3_ = 0;
    auVar31[0xc] = abStack_56[(long)(int)uVar1 + 1];
    auVar31._13_3_ = 0;
    param_3 = 8 - param_3;
    auVar29._9_3_ = 0;
    auVar29[0xc] = abStack_5e[(long)(int)uVar1 + 5];
    auVar29._13_3_ = 0;
    auVar34._9_3_ = 0;
    auVar34[0xc] = abStack_5e[(long)(int)uVar1 + 1];
    auVar34._13_3_ = 0;
    auVar13 = NEON_ushl(auVar29,auVar32,4);
    iVar35 = -param_3;
    iVar36 = -param_3;
    iVar37 = -param_3;
    param_3 = -param_3;
    auVar31 = NEON_ushl(auVar31,auVar32,4);
    auVar30 = NEON_ushl(auVar30,auVar32,4);
    auVar29 = NEON_ushl(auVar34,auVar32,4);
    auVar33._6_2_ = 0;
    auVar33._0_6_ =
         (uint6)CONCAT14(uVar4,(uint)CONCAT12(uVar4,(ushort)(byte)uVar10)) & 0xffff0000ffff;
    auVar33[8] = (char)((ulong)uVar10 >> 0x10);
    auVar33._9_3_ = 0;
    auVar33[0xc] = (char)((ulong)uVar10 >> 0x18);
    auVar33._13_3_ = 0;
    auVar7._1_3_ = 0;
    auVar7[0] = (byte)((ulong)uVar10 >> 0x20);
    auVar7[4] = (char)((ulong)uVar10 >> 0x28);
    auVar7._5_3_ = 0;
    auVar7[8] = (char)((ulong)uVar10 >> 0x30);
    auVar7._9_3_ = 0;
    auVar7[0xc] = (char)((ulong)uVar10 >> 0x38);
    auVar7._13_3_ = 0;
    auVar19._4_4_ = iVar36;
    auVar19._0_4_ = iVar35;
    auVar19._8_4_ = iVar37;
    auVar19._12_4_ = param_3;
    auVar34 = NEON_ushl(auVar33,auVar19,4);
    auVar25._4_4_ = iVar36;
    auVar25._0_4_ = iVar35;
    auVar25._8_4_ = iVar37;
    auVar25._12_4_ = param_3;
    auVar25 = NEON_ushl(auVar24,auVar25,4);
    auVar2._4_4_ = iVar36;
    auVar2._0_4_ = iVar35;
    auVar2._8_4_ = iVar37;
    auVar2._12_4_ = param_3;
    auVar19 = NEON_ushl(auVar18,auVar2,4);
    bVar12 = auVar19[0] | auVar13[0];
    bVar14 = auVar19[4] | auVar13[4];
    bVar15 = auVar19[8] | auVar13[8];
    bVar16 = auVar19[0xc] | auVar13[0xc];
    auVar13._4_4_ = iVar36;
    auVar13._0_4_ = iVar35;
    auVar13._8_4_ = iVar37;
    auVar13._12_4_ = param_3;
    auVar19 = NEON_ushl(auVar7,auVar13,4);
    bVar17 = auVar25[0] | auVar29[0];
    bVar20 = auVar25[4] | auVar29[4];
    bVar21 = auVar25[8] | auVar29[8];
    bVar22 = auVar25[0xc] | auVar29[0xc];
    bVar23 = auVar34[0] | auVar31[0];
    bVar26 = auVar34[4] | auVar31[4];
    bVar27 = auVar34[8] | auVar31[8];
    bVar28 = auVar34[0xc] | auVar31[0xc];
    bVar5 = auVar19[0] | auVar30[0];
    bVar8 = auVar19[4] | auVar30[4];
    bVar9 = auVar19[8] | auVar30[8];
    bVar11 = auVar19[0xc] | auVar30[0xc];
  }
  (*param_5)[8] = bVar23;
  (*param_5)[9] = bVar26;
  (*param_5)[10] = bVar27;
  (*param_5)[0xb] = bVar28;
  (*param_5)[0xc] = bVar5;
  (*param_5)[0xd] = bVar8;
  (*param_5)[0xe] = bVar9;
  (*param_5)[0xf] = bVar11;
  (*param_5)[0] = bVar17;
  (*param_5)[1] = bVar20;
  (*param_5)[2] = bVar21;
  (*param_5)[3] = bVar22;
  (*param_5)[4] = bVar12;
  (*param_5)[5] = bVar14;
  (*param_5)[6] = bVar15;
  (*param_5)[7] = bVar16;
  return;
}


