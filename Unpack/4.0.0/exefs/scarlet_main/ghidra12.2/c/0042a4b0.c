/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0042a4b0; name: FUN_0042a4b0
 */


void FUN_0042a4b0(uint *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar15 = (uint)*(undefined8 *)(param_1 + 0xd);
  uVar16 = (uint)((ulong)*(undefined8 *)(param_1 + 0xd) >> 0x20);
  uVar12 = param_1[0xf] >> 0x1c;
  uVar1 = param_1[8] + uVar12;
  uVar18 = CONCAT44(param_1[0xf],uVar16) & 0xfffffff0fffffff;
  uVar17 = (uint)((ulong)*(undefined8 *)(param_1 + 0xb) >> 0x20);
  uVar11 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 9);
  *(ulong *)(param_1 + 0xe) =
       CONCAT44((int)(uVar18 >> 0x20) + (uVar16 >> 0x1c),(int)uVar18 + (uVar15 >> 0x1c));
  auVar19 = NEON_ext(ZEXT416(uVar1),ZEXT416(uVar1),4,1);
  auVar20._12_4_ = uVar17;
  auVar20._0_12_ = *(undefined1 (*) [12])(param_1 + 9);
  auVar20 = NEON_ext(auVar19,auVar20,0xc,1);
  param_1[0xd] = (uVar15 & 0xfffffff) + (uVar17 >> 0x1c);
  uVar15 = param_1[7];
  *(ulong *)(param_1 + 0xb) =
       CONCAT44((uVar17 & 0xfffffff) + (auVar20._12_4_ >> 0x1c),
                ((uint)*(undefined8 *)(param_1 + 0xb) & 0xfffffff) + (auVar20._8_4_ >> 0x1c));
  *(ulong *)(param_1 + 9) =
       CONCAT44(((uint)((ulong)uVar11 >> 0x20) & 0xfffffff) + (auVar20._4_4_ >> 0x1c),
                ((uint)uVar11 & 0xfffffff) + (auVar20._0_4_ >> 0x1c));
  lVar2 = ((ulong)*param_1 & 0xfffffff) + (ulong)uVar12 + -0xfffffff;
  lVar3 = ((ulong)param_1[1] & 0xfffffff) + (ulong)(*param_1 >> 0x1c) + (lVar2 >> 0x1c) + -0xfffffff
  ;
  lVar4 = ((ulong)param_1[2] & 0xfffffff) + (ulong)(param_1[1] >> 0x1c) + (lVar3 >> 0x1c) +
          -0xfffffff;
  lVar5 = ((ulong)param_1[3] & 0xfffffff) + (ulong)(param_1[2] >> 0x1c) + (lVar4 >> 0x1c) +
          -0xfffffff;
  lVar6 = ((ulong)param_1[4] & 0xfffffff) + (ulong)(param_1[3] >> 0x1c) + (lVar5 >> 0x1c) +
          -0xfffffff;
  lVar7 = ((ulong)param_1[5] & 0xfffffff) + (ulong)(param_1[4] >> 0x1c) + (lVar6 >> 0x1c) +
          -0xfffffff;
  lVar8 = ((ulong)param_1[6] & 0xfffffff) + (ulong)(param_1[5] >> 0x1c) + (lVar7 >> 0x1c) +
          -0xfffffff;
  lVar9 = ((ulong)uVar15 & 0xfffffff) + (ulong)(param_1[6] >> 0x1c) + (lVar8 >> 0x1c) + -0xfffffff;
  param_1[6] = (uint)lVar8 & 0xfffffff;
  param_1[7] = (uint)lVar9 & 0xfffffff;
  *param_1 = (uint)lVar2 & 0xfffffff;
  param_1[1] = (uint)lVar3 & 0xfffffff;
  param_1[2] = (uint)lVar4 & 0xfffffff;
  param_1[3] = (uint)lVar5 & 0xfffffff;
  param_1[4] = (uint)lVar6 & 0xfffffff;
  param_1[5] = (uint)lVar7 & 0xfffffff;
  lVar2 = (ulong)((uVar1 & 0xfffffff) + (uVar15 >> 0x1c)) + (lVar9 >> 0x1c) + -0xffffffe;
  lVar3 = (ulong)param_1[9] + (lVar2 >> 0x1c) + -0xfffffff;
  param_1[8] = (uint)lVar2 & 0xfffffff;
  param_1[9] = (uint)lVar3 & 0xfffffff;
  lVar2 = (ulong)param_1[10] + (lVar3 >> 0x1c) + -0xfffffff;
  lVar3 = (ulong)param_1[0xb] + (lVar2 >> 0x1c) + -0xfffffff;
  param_1[10] = (uint)lVar2 & 0xfffffff;
  param_1[0xb] = (uint)lVar3 & 0xfffffff;
  lVar2 = (ulong)param_1[0xc] + (lVar3 >> 0x1c) + -0xfffffff;
  lVar3 = (ulong)param_1[0xd] + (lVar2 >> 0x1c) + -0xfffffff;
  param_1[0xc] = (uint)lVar2 & 0xfffffff;
  param_1[0xd] = (uint)lVar3 & 0xfffffff;
  lVar2 = (ulong)param_1[0xe] + (lVar3 >> 0x1c) + -0xfffffff;
  lVar3 = (ulong)param_1[0xf] + (lVar2 >> 0x1c) + -0xfffffff;
  uVar13 = lVar3 >> 0x1c;
  param_1[0xe] = (uint)lVar2 & 0xfffffff;
  param_1[0xf] = (uint)lVar3 & 0xfffffff;
  uVar14 = uVar13 & 0xfffffff;
  uVar18 = (ulong)param_1[1] + (uVar14 + *param_1 >> 0x1c) + uVar14;
  *param_1 = (uint)(uVar14 + *param_1) & 0xfffffff;
  param_1[1] = (uint)uVar18 & 0xfffffff;
  uVar18 = (ulong)param_1[2] + (uVar18 >> 0x1c) + uVar14;
  uVar10 = (ulong)param_1[3] + (uVar18 >> 0x1c) + uVar14;
  param_1[2] = (uint)uVar18 & 0xfffffff;
  param_1[3] = (uint)uVar10 & 0xfffffff;
  uVar18 = (ulong)param_1[4] + (uVar10 >> 0x1c) + uVar14;
  uVar10 = (ulong)param_1[5] + (uVar18 >> 0x1c) + uVar14;
  param_1[4] = (uint)uVar18 & 0xfffffff;
  param_1[5] = (uint)uVar10 & 0xfffffff;
  uVar18 = (ulong)param_1[6] + (uVar10 >> 0x1c) + uVar14;
  uVar10 = (ulong)param_1[7] + (uVar18 >> 0x1c) + uVar14;
  param_1[6] = (uint)uVar18 & 0xfffffff;
  param_1[7] = (uint)uVar10 & 0xfffffff;
  uVar18 = (ulong)param_1[8] + (uVar10 >> 0x1c) + (uVar13 & 0xffffffe);
  uVar10 = (ulong)param_1[9] + (uVar18 >> 0x1c) + uVar14;
  param_1[8] = (uint)uVar18 & 0xfffffff;
  param_1[9] = (uint)uVar10 & 0xfffffff;
  uVar18 = (ulong)param_1[10] + (uVar10 >> 0x1c) + uVar14;
  uVar10 = (ulong)param_1[0xb] + (uVar18 >> 0x1c) + uVar14;
  param_1[10] = (uint)uVar18 & 0xfffffff;
  param_1[0xb] = (uint)uVar10 & 0xfffffff;
  uVar18 = (ulong)param_1[0xc] + (uVar10 >> 0x1c) + uVar14;
  uVar10 = (ulong)param_1[0xd] + (uVar18 >> 0x1c) + uVar14;
  param_1[0xc] = (uint)uVar18 & 0xfffffff;
  param_1[0xd] = (uint)uVar10 & 0xfffffff;
  uVar14 = (ulong)param_1[0xe] + (uVar10 >> 0x1c) + uVar14;
  param_1[0xe] = (uint)uVar14 & 0xfffffff;
  param_1[0xf] = (int)(uVar14 >> 0x1c) + param_1[0xf] + (int)uVar13 & 0xfffffff;
  return;
}


