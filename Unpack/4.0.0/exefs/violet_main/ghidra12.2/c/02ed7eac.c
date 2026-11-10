/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ed7eac; name: FUN_02ed7eac
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02ed7eac(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  byte *pbVar15;
  char cVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  byte *local_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 uStack_74;
  uint local_70;
  byte *local_68;
  
  if ((int)param_1[1] != 0) {
    lVar8 = param_2[1];
    uStack_b8 = param_1[3];
    local_c0 = param_1[2];
    local_a8 = param_1[5];
    local_b0 = param_1[4];
    auVar34 = *(undefined1 (*) [16])(param_3 + 6);
    auVar31._0_4_ = (float)local_c0 - *(float *)(param_3 + 8);
    auVar31._4_4_ = (float)((ulong)local_c0 >> 0x20) - *(float *)((long)param_3 + 0x44);
    auVar31._8_4_ = (float)uStack_b8 - *(float *)(param_3 + 9);
    auVar31._12_4_ = (float)(uStack_b8 >> 0x20) - *(float *)((long)param_3 + 0x4c);
    auVar22._0_4_ = (float)local_b0 + *(float *)(param_3 + 8);
    auVar22._4_4_ = (float)((ulong)local_b0 >> 0x20) + *(float *)((long)param_3 + 0x44);
    auVar22._8_4_ = (float)local_a8 + *(float *)(param_3 + 9);
    auVar22._12_4_ = (float)(local_a8 >> 0x20) + *(float *)((long)param_3 + 0x4c);
    auVar31 = NEON_fmax(auVar31,auVar34,4);
    auVar22 = NEON_fmin(auVar22,auVar31,4);
    fVar20 = auVar34._0_4_ - auVar22._0_4_;
    fVar24 = auVar34._4_4_ - auVar22._4_4_;
    fVar25 = auVar34._8_4_ - auVar22._8_4_;
    fVar26 = auVar34._12_4_ - auVar22._12_4_;
    auVar34._0_4_ = fVar20 * fVar20;
    auVar34._4_4_ = fVar24 * fVar24;
    auVar34._8_4_ = fVar25 * fVar25;
    auVar34._12_4_ = fVar26 * fVar26;
    auVar22 = NEON_ext(auVar34,auVar34,8,1);
    if (auVar34._0_4_ + auVar34._4_4_ + auVar22._0_4_ <= (float)param_3[10]) {
      pbVar15 = (byte *)(*param_1 + (long)param_1);
      uVar10 = 0;
LAB_02ed7f70:
      while ((char)pbVar15[3] < '\0') {
        uVar13 = (long)(int)uVar10 + 1;
        local_80 = (float)local_b0;
        local_90 = (float)local_c0;
        fStack_7c = (float)((ulong)local_b0 >> 0x20);
        fStack_8c = (float)((ulong)local_c0 >> 0x20);
        local_78 = (float)local_a8;
        fStack_88 = (float)uStack_b8;
        local_a0._0_4_ = (int)uVar13;
        fVar20 = (local_80 - local_90) * 0.0044247787;
        fVar24 = (fStack_7c - fStack_8c) * 0.0044247787;
        fVar25 = (local_78 - fStack_88) * 0.0044247787;
        local_70 = ((uint)*(ushort *)(pbVar15 + 4) << 1 | (pbVar15[3] & 0x7f) << 0x11) + (int)uVar10
        ;
        uVar10 = (ulong)local_70;
        pbVar15 = (byte *)((long)param_1 + uVar13 * 6 + *param_1);
        local_68 = (byte *)((long)param_1 + (long)(int)local_70 * 6 + *param_1);
        local_98 = pbVar15;
        bVar3 = *pbVar15 >> 4;
        bVar1 = *pbVar15 & 0xf;
        bVar4 = pbVar15[1] >> 4;
        bVar5 = pbVar15[2] >> 4;
        fVar21 = local_90 + (float)(byte)(bVar3 * bVar3) * fVar20;
        fVar28 = fStack_8c + (float)(byte)(bVar4 * bVar4) * fVar24;
        bVar3 = pbVar15[2] & 0xf;
        bVar4 = pbVar15[1] & 0xf;
        bVar6 = *local_68 >> 4;
        bVar2 = *local_68 & 0xf;
        bVar7 = local_68[1] >> 4;
        local_c0 = CONCAT44(fVar28,fVar21);
        fVar29 = fStack_88 + (float)(byte)(bVar5 * bVar5) * fVar25;
        uStack_b8 = (ulong)(uint)fVar29;
        bVar5 = local_68[2] >> 4;
        fVar30 = local_80 - (float)(byte)(bVar1 * bVar1) * fVar20;
        fVar35 = fStack_7c - (float)(byte)(bVar4 * bVar4) * fVar24;
        local_b0 = CONCAT44(fVar35,fVar30);
        fVar36 = local_78 - (float)(byte)(bVar3 * bVar3) * fVar25;
        local_a8 = (ulong)(uint)fVar36;
        uStack_74 = 0;
        local_90 = local_90 + (float)(byte)(bVar6 * bVar6) * fVar20;
        fStack_8c = fStack_8c + (float)(byte)(bVar7 * bVar7) * fVar24;
        uStack_84 = 0;
        fStack_88 = fStack_88 + (float)(byte)(bVar5 * bVar5) * fVar25;
        bVar1 = local_68[1] & 0xf;
        bVar3 = local_68[2] & 0xf;
        local_80 = local_80 - (float)(byte)(bVar2 * bVar2) * fVar20;
        local_78 = local_78 - (float)(byte)(bVar3 * bVar3) * fVar25;
        fStack_7c = fStack_7c - (float)(byte)(bVar1 * bVar1) * fVar24;
        auVar34 = *(undefined1 (*) [16])(param_3 + 6);
        fVar20 = *(float *)(param_3 + 8);
        fVar24 = *(float *)((long)param_3 + 0x44);
        fVar25 = *(float *)(param_3 + 9);
        fVar26 = *(float *)((long)param_3 + 0x4c);
        auVar23._0_4_ = fVar20 + fVar30;
        auVar23._4_4_ = fVar24 + fVar35;
        auVar23._8_4_ = fVar25 + fVar36;
        auVar23._12_4_ = fVar26 + 0.0;
        auVar19._0_4_ = fVar21 - fVar20;
        auVar19._4_4_ = fVar28 - fVar24;
        auVar19._8_4_ = fVar29 - fVar25;
        auVar19._12_4_ = 0.0 - fVar26;
        auVar22 = NEON_fmax(auVar19,auVar34,4);
        auVar22 = NEON_fmin(auVar23,auVar22,4);
        fVar21 = auVar34._0_4_ - auVar22._0_4_;
        fVar28 = auVar34._4_4_ - auVar22._4_4_;
        fVar29 = auVar34._8_4_ - auVar22._8_4_;
        fVar30 = auVar34._12_4_ - auVar22._12_4_;
        auVar33._0_4_ = fVar21 * fVar21;
        auVar33._4_4_ = fVar28 * fVar28;
        auVar33._8_4_ = fVar29 * fVar29;
        auVar33._12_4_ = fVar30 * fVar30;
        auVar37._0_4_ = local_90 - fVar20;
        auVar37._4_4_ = fStack_8c - fVar24;
        auVar37._8_4_ = fStack_88 - fVar25;
        auVar37._12_4_ = 0.0 - fVar26;
        auVar27._0_4_ = fVar20 + local_80;
        auVar27._4_4_ = fVar24 + fStack_7c;
        auVar27._8_4_ = fVar25 + local_78;
        auVar27._12_4_ = fVar26 + 0.0;
        auVar22 = NEON_fmax(auVar37,auVar34,4);
        auVar31 = NEON_fmin(auVar27,auVar22,4);
        auVar22 = NEON_ext(auVar33,auVar33,8,1);
        fVar20 = auVar34._0_4_ - auVar31._0_4_;
        fVar24 = auVar34._4_4_ - auVar31._4_4_;
        fVar25 = auVar34._8_4_ - auVar31._8_4_;
        fVar26 = auVar34._12_4_ - auVar31._12_4_;
        auVar32._0_4_ = fVar20 * fVar20;
        auVar32._4_4_ = fVar24 * fVar24;
        auVar32._8_4_ = fVar25 * fVar25;
        auVar32._12_4_ = fVar26 * fVar26;
        fVar20 = auVar33._0_4_ + auVar33._4_4_ + auVar22._0_4_;
        auVar34 = NEON_ext(auVar32,auVar32,8,1);
        fVar24 = auVar32._0_4_ + auVar32._4_4_ + auVar34._0_4_;
        cVar16 = '\0';
        if (!(bool)(~(fVar24 <= (float)param_3[10]) & 1)) {
          cVar16 = '\x02';
        }
        cVar16 = cVar16 + (fVar20 <= (float)param_3[10]);
        if (cVar16 == '\x01') {
          uVar10 = uVar13 & 0xffffffff;
        }
        else if (cVar16 == '\x02') {
          local_a8 = (ulong)(uint)local_78;
          uStack_b8 = (ulong)(uint)fStack_88;
          pbVar15 = local_68;
          local_b0 = CONCAT44(fStack_7c,local_80);
          local_c0 = CONCAT44(fStack_8c,local_90);
        }
        else {
          if (cVar16 != '\x03') goto LAB_02ed7f90;
          uVar17 = -(uint)(fVar24 < fVar20);
          *(uint *)(param_3 + 0xb) = uVar17 & 1;
          uVar10 = (ulong)~uVar17 & 1;
          iVar9 = (int)param_2[1];
          lVar11 = (long)iVar9;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar9) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar11 + 1);
            iVar9 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar11 + 1);
          puVar12 = (undefined8 *)(*param_2 + (long)iVar9 * 0x30);
          uVar18 = (&local_a0)[uVar10 * 6 + -4];
          puVar12[1] = (&local_a0)[uVar10 * 6 + -3];
          *puVar12 = uVar18;
          uVar18 = (&local_a0)[uVar10 * 6 + -2];
          puVar12[3] = (&local_a0)[uVar10 * 6 + -1];
          puVar12[2] = uVar18;
          *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(&local_a0 + uVar10 * 6);
          uVar13 = (ulong)uVar17 & 1;
          uVar10 = (ulong)*(uint *)(&local_a0 + uVar13 * 6);
          pbVar15 = (byte *)(&local_a0)[uVar13 * 6 + 1];
          uStack_b8 = (&local_a0)[uVar13 * 6 + -3];
          local_c0 = (&local_a0)[uVar13 * 6 + -4];
          local_a8 = (&local_a0)[uVar13 * 6 + -1];
          local_b0 = (&local_a0)[uVar13 * 6 + -2];
        }
      }
      FUN_02ed6e00(*param_3,(ulong)CONCAT12(pbVar15[3],*(undefined2 *)(pbVar15 + 4)),param_3 + 10);
LAB_02ed7f90:
      if ((int)lVar8 < (int)param_2[1]) {
        iVar9 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar9;
        plVar14 = (long *)(*param_2 + (long)iVar9 * 0x30);
        uStack_b8 = plVar14[1];
        local_a8 = plVar14[3];
        uVar10 = (ulong)(int)plVar14[4];
        pbVar15 = (byte *)((long)param_1 + uVar10 * 6 + *param_1);
        local_b0 = plVar14[2];
        local_c0 = *plVar14;
        goto LAB_02ed7f70;
      }
    }
  }
  return;
}


