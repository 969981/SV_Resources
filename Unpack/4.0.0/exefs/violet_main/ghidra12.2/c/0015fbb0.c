/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015fbb0; name: FUN_0015fbb0
 */


int FUN_0015fbb0(long param_1,uint param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 auVar26 [16];
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  
  if ((param_2 & 1) == 0) {
    if (0 < param_4) {
      iVar10 = 0;
      iVar11 = 0;
      iVar12 = 0;
      iVar13 = 0;
      iVar20 = 0;
      iVar21 = 0;
      iVar18 = 0;
      iVar19 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar22 = 0;
      iVar23 = 0;
      iVar14 = 0;
      iVar15 = 0;
      iVar16 = 0;
      iVar17 = 0;
      iVar9 = 0;
      do {
        uVar6 = ((undefined8 *)(param_3 + iVar9))[1];
        uVar5 = *(undefined8 *)(param_3 + iVar9);
        puVar1 = (undefined8 *)(param_1 + (long)iVar9 * 4);
        iVar9 = iVar9 + 0x10;
        iVar10 = iVar10 + (int)*puVar1 * (int)(short)(char)uVar5;
        iVar11 = iVar11 + (int)((ulong)*puVar1 >> 0x20) * (int)(short)(char)((ulong)uVar5 >> 8);
        iVar12 = iVar12 + (int)puVar1[1] * (int)(short)(char)((ulong)uVar5 >> 0x10);
        iVar13 = iVar13 + (int)((ulong)puVar1[1] >> 0x20) * (int)(short)(char)((ulong)uVar5 >> 0x18)
        ;
        iVar18 = iVar18 + *(int *)(puVar1 + 2) * (int)(short)(char)((ulong)uVar5 >> 0x20);
        iVar19 = iVar19 + *(int *)((long)puVar1 + 0x14) * (int)(short)(char)((ulong)uVar5 >> 0x28);
        iVar20 = iVar20 + *(int *)(puVar1 + 3) * (int)(short)(char)((ulong)uVar5 >> 0x30);
        iVar21 = iVar21 + *(int *)((long)puVar1 + 0x1c) * (int)(short)(char)((ulong)uVar5 >> 0x38);
        iVar22 = iVar22 + (int)puVar1[4] * (int)(short)(char)uVar6;
        iVar23 = iVar23 + (int)((ulong)puVar1[4] >> 0x20) * (int)(short)(char)((ulong)uVar6 >> 8);
        iVar24 = iVar24 + (int)puVar1[5] * (int)(short)(char)((ulong)uVar6 >> 0x10);
        iVar25 = iVar25 + (int)((ulong)puVar1[5] >> 0x20) * (int)(short)(char)((ulong)uVar6 >> 0x18)
        ;
        iVar14 = iVar14 + (int)puVar1[6] * (int)(short)(char)((ulong)uVar6 >> 0x20);
        iVar15 = iVar15 + (int)((ulong)puVar1[6] >> 0x20) * (int)(short)(char)((ulong)uVar6 >> 0x28)
        ;
        iVar16 = iVar16 + (int)puVar1[7] * (int)(short)(char)((ulong)uVar6 >> 0x30);
        iVar17 = iVar17 + (int)((ulong)puVar1[7] >> 0x20) * (int)(short)(char)((ulong)uVar6 >> 0x38)
        ;
      } while (iVar9 < param_4);
      goto LAB_0015fc90;
    }
  }
  else if (0 < param_4) {
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    iVar13 = 0;
    iVar20 = 0;
    iVar21 = 0;
    iVar18 = 0;
    iVar19 = 0;
    iVar24 = 0;
    iVar25 = 0;
    iVar22 = 0;
    iVar23 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    iVar9 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + (long)iVar9 * 4);
      uVar6 = ((undefined8 *)(param_3 + iVar9))[1];
      uVar5 = *(undefined8 *)(param_3 + iVar9);
      sVar35 = (short)(char)uVar5;
      sVar36 = (short)(char)((ulong)uVar5 >> 8);
      sVar37 = (short)(char)((ulong)uVar5 >> 0x10);
      sVar38 = (short)(char)((ulong)uVar5 >> 0x18);
      sVar39 = (short)(char)((ulong)uVar5 >> 0x20);
      sVar40 = (short)(char)((ulong)uVar5 >> 0x28);
      sVar41 = (short)(char)((ulong)uVar5 >> 0x30);
      sVar42 = (short)(char)((ulong)uVar5 >> 0x38);
      sVar27 = (short)(char)uVar6;
      sVar28 = (short)(char)((ulong)uVar6 >> 8);
      sVar29 = (short)(char)((ulong)uVar6 >> 0x10);
      sVar30 = (short)(char)((ulong)uVar6 >> 0x18);
      sVar31 = (short)(char)((ulong)uVar6 >> 0x20);
      sVar32 = (short)(char)((ulong)uVar6 >> 0x28);
      sVar33 = (short)(char)((ulong)uVar6 >> 0x30);
      sVar34 = (short)(char)((ulong)uVar6 >> 0x38);
      iVar10 = iVar10 + (int)(short)*puVar1 * (int)sVar35;
      iVar11 = iVar11 + (int)(short)((ulong)*puVar1 >> 0x20) * (int)sVar36;
      iVar12 = iVar12 + (int)(short)puVar1[1] * (int)sVar37;
      iVar13 = iVar13 + (int)(short)((ulong)puVar1[1] >> 0x20) * (int)sVar38;
      auVar7._2_2_ = sVar36;
      auVar7._0_2_ = sVar35;
      auVar7._4_2_ = sVar37;
      auVar7._6_2_ = sVar38;
      auVar7._8_2_ = sVar39;
      auVar7._10_2_ = sVar40;
      auVar7._12_2_ = sVar41;
      auVar7._14_2_ = sVar42;
      auVar8._2_2_ = sVar36;
      auVar8._0_2_ = sVar35;
      auVar8._4_2_ = sVar37;
      auVar8._6_2_ = sVar38;
      auVar8._8_2_ = sVar39;
      auVar8._10_2_ = sVar40;
      auVar8._12_2_ = sVar41;
      auVar8._14_2_ = sVar42;
      auVar26 = NEON_ext(auVar7,auVar8,8,1);
      iVar18 = iVar18 + (int)*(short *)(puVar1 + 2) * (int)auVar26._0_2_;
      iVar19 = iVar19 + (int)*(short *)((long)puVar1 + 0x14) * (int)auVar26._2_2_;
      iVar20 = iVar20 + (int)*(short *)(puVar1 + 3) * (int)auVar26._4_2_;
      iVar21 = iVar21 + (int)*(short *)((long)puVar1 + 0x1c) * (int)auVar26._6_2_;
      iVar22 = iVar22 + (int)(short)puVar1[4] * (int)sVar27;
      iVar23 = iVar23 + (int)(short)((ulong)puVar1[4] >> 0x20) * (int)sVar28;
      iVar24 = iVar24 + (int)(short)puVar1[5] * (int)sVar29;
      iVar25 = iVar25 + (int)(short)((ulong)puVar1[5] >> 0x20) * (int)sVar30;
      auVar26._2_2_ = sVar28;
      auVar26._0_2_ = sVar27;
      auVar26._4_2_ = sVar29;
      auVar26._6_2_ = sVar30;
      auVar26._8_2_ = sVar31;
      auVar26._10_2_ = sVar32;
      auVar26._12_2_ = sVar33;
      auVar26._14_2_ = sVar34;
      auVar4._2_2_ = sVar28;
      auVar4._0_2_ = sVar27;
      auVar4._4_2_ = sVar29;
      auVar4._6_2_ = sVar30;
      auVar4._8_2_ = sVar31;
      auVar4._10_2_ = sVar32;
      auVar4._12_2_ = sVar33;
      auVar4._14_2_ = sVar34;
      auVar26 = NEON_ext(auVar26,auVar4,8,1);
      iVar14 = iVar14 + (int)(short)puVar1[6] * (int)auVar26._0_2_;
      iVar15 = iVar15 + (int)(short)((ulong)puVar1[6] >> 0x20) * (int)auVar26._2_2_;
      iVar16 = iVar16 + (int)(short)puVar1[7] * (int)auVar26._4_2_;
      iVar17 = iVar17 + (int)(short)((ulong)puVar1[7] >> 0x20) * (int)auVar26._6_2_;
      iVar9 = iVar9 + 0x10;
    } while (iVar9 < param_4);
    goto LAB_0015fc90;
  }
  iVar22 = 0;
  iVar23 = 0;
  iVar14 = 0;
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar24 = 0;
  iVar25 = 0;
  iVar20 = 0;
  iVar21 = 0;
  iVar12 = 0;
  iVar13 = 0;
  iVar10 = 0;
  iVar11 = 0;
  iVar18 = iVar22;
  iVar19 = iVar23;
LAB_0015fc90:
  iVar10 = iVar22 + iVar14 + iVar18 + iVar10;
  iVar11 = iVar23 + iVar15 + iVar19 + iVar11;
  iVar12 = iVar24 + iVar16 + iVar20 + iVar12;
  iVar13 = iVar25 + iVar17 + iVar21 + iVar13;
  auVar2._4_4_ = iVar11;
  auVar2._0_4_ = iVar10;
  auVar2._8_4_ = iVar12;
  auVar2._12_4_ = iVar13;
  auVar3._4_4_ = iVar11;
  auVar3._0_4_ = iVar10;
  auVar3._8_4_ = iVar12;
  auVar3._12_4_ = iVar13;
  auVar26 = NEON_ext(auVar2,auVar3,8,1);
  return auVar26._0_4_ + iVar10 + auVar26._4_4_ + iVar11;
}


