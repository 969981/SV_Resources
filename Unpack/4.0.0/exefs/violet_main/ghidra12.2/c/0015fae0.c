/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015fae0; name: FUN_0015fae0
 */


int FUN_0015fae0(long param_1,uint param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  int iVar8;
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
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined8 uVar26;
  
  iVar8 = 0;
  iVar9 = 0;
  iVar10 = 0;
  iVar11 = 0;
  iVar12 = 0;
  iVar13 = 0;
  iVar14 = 0;
  iVar15 = 0;
  iVar18 = 0;
  iVar19 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar22 = 0;
  iVar23 = 0;
  iVar20 = 0;
  iVar21 = 0;
  uVar5 = 0;
  pauVar6 = (undefined1 (*) [16])(param_3 + 0x10);
  puVar7 = (undefined8 *)(param_1 + 0x20);
  if ((param_2 & 1) == 0) {
    do {
      uVar25 = *(undefined8 *)(pauVar6[-1] + 8);
      uVar3 = *(undefined8 *)pauVar6[-1];
      uVar26 = *(undefined8 *)(*pauVar6 + 8);
      uVar4 = *(undefined8 *)*pauVar6;
      pauVar6 = pauVar6 + 2;
      uVar5 = uVar5 + 0x10;
      iVar8 = iVar8 + *(int *)(puVar7 + -4) * (int)(short)uVar3;
      iVar9 = iVar9 + *(int *)((long)puVar7 + -0x1c) * (int)(short)((ulong)uVar3 >> 0x10);
      iVar10 = iVar10 + *(int *)(puVar7 + -3) * (int)(short)((ulong)uVar3 >> 0x20);
      iVar11 = iVar11 + *(int *)((long)puVar7 + -0x14) * (int)(short)((ulong)uVar3 >> 0x30);
      iVar12 = iVar12 + (int)puVar7[-2] * (int)(short)uVar25;
      iVar13 = iVar13 + (int)((ulong)puVar7[-2] >> 0x20) * (int)(short)((ulong)uVar25 >> 0x10);
      iVar14 = iVar14 + (int)puVar7[-1] * (int)(short)((ulong)uVar25 >> 0x20);
      iVar15 = iVar15 + (int)((ulong)puVar7[-1] >> 0x20) * (int)(short)((ulong)uVar25 >> 0x30);
      iVar16 = iVar16 + (int)*puVar7 * (int)(short)uVar4;
      iVar17 = iVar17 + (int)((ulong)*puVar7 >> 0x20) * (int)(short)((ulong)uVar4 >> 0x10);
      iVar18 = iVar18 + (int)puVar7[1] * (int)(short)((ulong)uVar4 >> 0x20);
      iVar19 = iVar19 + (int)((ulong)puVar7[1] >> 0x20) * (int)(short)((ulong)uVar4 >> 0x30);
      iVar20 = iVar20 + (int)puVar7[2] * (int)(short)uVar26;
      iVar21 = iVar21 + (int)((ulong)puVar7[2] >> 0x20) * (int)(short)((ulong)uVar26 >> 0x10);
      iVar22 = iVar22 + (int)puVar7[3] * (int)(short)((ulong)uVar26 >> 0x20);
      iVar23 = iVar23 + (int)((ulong)puVar7[3] >> 0x20) * (int)(short)((ulong)uVar26 >> 0x30);
      puVar7 = puVar7 + 8;
    } while (uVar5 < 0x100);
  }
  else {
    do {
      uVar5 = uVar5 + 0x10;
      pauVar1 = pauVar6 + -1;
      uVar3 = *(undefined8 *)*pauVar1;
      uVar4 = *(undefined8 *)*pauVar6;
      iVar8 = iVar8 + (int)(short)uVar3 * (int)*(short *)(puVar7 + -4);
      iVar9 = iVar9 + (int)(short)((ulong)uVar3 >> 0x10) * (int)*(short *)((long)puVar7 + -0x1c);
      iVar10 = iVar10 + (int)(short)((ulong)uVar3 >> 0x20) * (int)*(short *)(puVar7 + -3);
      iVar11 = iVar11 + (int)(short)((ulong)uVar3 >> 0x30) * (int)*(short *)((long)puVar7 + -0x14);
      auVar24 = NEON_ext(*pauVar1,*pauVar1,8,1);
      iVar12 = iVar12 + (int)auVar24._0_2_ * (int)(short)puVar7[-2];
      iVar13 = iVar13 + (int)auVar24._2_2_ * (int)(short)((ulong)puVar7[-2] >> 0x20);
      iVar14 = iVar14 + (int)auVar24._4_2_ * (int)(short)puVar7[-1];
      iVar15 = iVar15 + (int)auVar24._6_2_ * (int)(short)((ulong)puVar7[-1] >> 0x20);
      iVar16 = iVar16 + (int)(short)uVar4 * (int)(short)*puVar7;
      iVar17 = iVar17 + (int)(short)((ulong)uVar4 >> 0x10) * (int)(short)((ulong)*puVar7 >> 0x20);
      iVar18 = iVar18 + (int)(short)((ulong)uVar4 >> 0x20) * (int)(short)puVar7[1];
      iVar19 = iVar19 + (int)(short)((ulong)uVar4 >> 0x30) * (int)(short)((ulong)puVar7[1] >> 0x20);
      auVar24 = NEON_ext(*pauVar6,*pauVar6,8,1);
      iVar20 = iVar20 + (int)auVar24._0_2_ * (int)(short)puVar7[2];
      iVar21 = iVar21 + (int)auVar24._2_2_ * (int)(short)((ulong)puVar7[2] >> 0x20);
      iVar22 = iVar22 + (int)auVar24._4_2_ * (int)(short)puVar7[3];
      iVar23 = iVar23 + (int)auVar24._6_2_ * (int)(short)((ulong)puVar7[3] >> 0x20);
      pauVar6 = pauVar6 + 2;
      puVar7 = puVar7 + 8;
    } while (uVar5 < 0x100);
  }
  iVar8 = iVar16 + iVar20 + iVar12 + iVar8;
  iVar9 = iVar17 + iVar21 + iVar13 + iVar9;
  iVar10 = iVar18 + iVar22 + iVar14 + iVar10;
  iVar11 = iVar19 + iVar23 + iVar15 + iVar11;
  auVar24._4_4_ = iVar9;
  auVar24._0_4_ = iVar8;
  auVar24._8_4_ = iVar10;
  auVar24._12_4_ = iVar11;
  auVar2._4_4_ = iVar9;
  auVar2._0_4_ = iVar8;
  auVar2._8_4_ = iVar10;
  auVar2._12_4_ = iVar11;
  auVar24 = NEON_ext(auVar24,auVar2,8,1);
  return auVar24._0_4_ + iVar8 + auVar24._4_4_ + iVar9;
}


