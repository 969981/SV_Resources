/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00842b0c; name: FUN_00842b0c
 */


void FUN_00842b0c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  long lVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 local_160;
  ulong uStack_158;
  undefined8 local_150;
  ulong local_148;
  ulong local_140;
  byte *local_138;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 local_120;
  ulong uStack_118;
  uint local_110;
  byte *local_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  uint local_e0;
  byte *local_d8;
  undefined1 local_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [32];
  undefined8 local_a0 [6];
  undefined8 local_68;
  
  puVar15 = PTR_DAT_047d19b0;
  if ((int)param_1[1] != 0) {
    lVar14 = param_2[1];
    uStack_f8 = param_1[3];
    local_100 = param_1[2];
    uVar39 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    uStack_e8 = param_1[5];
    local_f0 = param_1[4];
    local_e0 = 0;
    local_d8 = (byte *)(*param_1 + (long)param_1);
    uVar28 = NEON_fmax(uVar39,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
    fVar26 = (float)((ulong)uVar28 >> 0x20);
    local_a0[0] = CONCAT44(fVar26 * fVar26,(float)uVar28 * (float)uVar28);
    lVar1 = param_3 + 0x1d0;
    lVar2 = param_3 + 0x210;
    FUN_03241a80(*(undefined8 *)(*(long *)(param_3 + 0xe0) + 0x20),&local_100,&local_160);
    iVar16 = FUN_02eb4dd4(*(undefined8 *)(param_3 + 0xc0),lVar1,lVar2,&local_160,local_a0,auStack_c0
                         );
    if (iVar16 != 0) {
      uVar28 = *(undefined8 *)(puVar15 + 0x1e0);
      fVar26 = (float)uVar28;
LAB_00842c4c:
      while ((char)local_d8[3] < '\0') {
        lVar21 = (long)(int)local_e0 + 1;
        fVar33 = (float)local_f0;
        fVar36 = (float)local_100;
        fVar34 = (float)(local_f0 >> 0x20);
        fVar37 = (float)(local_100 >> 0x20);
        fVar35 = (float)uStack_e8;
        fVar38 = (float)uStack_f8;
        local_140._0_4_ = (uint)lVar21;
        lVar3 = ((ulong)local_d8[4] << 1 | ((ulong)local_d8[3] & 0x7f) << 9) + (long)(int)local_e0;
        local_110 = (uint)lVar3;
        local_138 = (byte *)((long)param_1 + lVar21 * 5 + *param_1);
        local_108 = (byte *)((long)param_1 + lVar3 * 5 + *param_1);
        fVar27 = (fVar33 - fVar36) * fVar26;
        fVar31 = (fVar34 - fVar37) * (float)((ulong)uVar28 >> 0x20);
        fVar32 = (fVar35 - fVar38) * fVar26;
        bVar8 = *local_138 >> 4;
        bVar4 = *local_138 & 0xf;
        bVar9 = local_138[1] >> 4;
        bVar13 = local_138[1] & 0xf;
        bVar10 = local_138[2] >> 4;
        bVar5 = local_138[2] & 0xf;
        bVar11 = *local_108 >> 4;
        bVar6 = *local_108 & 0xf;
        bVar12 = local_108[2] >> 4;
        local_160 = CONCAT44((float)(byte)(bVar9 * bVar9) * fVar31 + fVar37,
                             (float)(byte)(bVar8 * bVar8) * fVar27 + fVar36);
        uStack_158 = (ulong)(uint)((float)(byte)(bVar10 * bVar10) * fVar32 + fVar38);
        local_150 = CONCAT44(fVar34 - (float)(byte)(bVar13 * bVar13) * fVar31,
                             fVar33 - (float)(byte)(bVar4 * bVar4) * fVar27);
        bVar13 = local_108[1] >> 4;
        bVar4 = local_108[2] & 0xf;
        local_148 = (ulong)(uint)(fVar35 - (float)(byte)(bVar5 * bVar5) * fVar32);
        local_130 = CONCAT44((float)(byte)(bVar13 * bVar13) * fVar31 + fVar37,
                             fVar36 + (float)(byte)(bVar11 * bVar11) * fVar27);
        bVar13 = local_108[1] & 0xf;
        uStack_128 = (ulong)(uint)((float)(byte)(bVar12 * bVar12) * fVar32 + fVar38);
        local_120 = CONCAT44(fVar34 - (float)(byte)(bVar13 * bVar13) * fVar31,
                             fVar33 - (float)(byte)(bVar6 * bVar6) * fVar27);
        uStack_118 = (ulong)(uint)(fVar35 - (float)(byte)(bVar4 * bVar4) * fVar32);
        uVar30 = NEON_fmax(uVar39,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
        fVar27 = (float)((ulong)uVar30 >> 0x20);
        local_68 = CONCAT44(fVar27 * fVar27,(float)uVar30 * (float)uVar30);
        FUN_03241a80(*(undefined8 *)(*(long *)(param_3 + 0xe0) + 0x20),&local_160,local_a0);
        FUN_03241a80(*(undefined8 *)(*(long *)(param_3 + 0xe0) + 0x20),&local_130,auStack_c0);
        iVar16 = FUN_02eb4dd4(*(undefined8 *)(param_3 + 0xc0),lVar1,lVar2,local_a0,&local_68,
                              auStack_c8);
        iVar17 = FUN_02eb4dd4(*(undefined8 *)(param_3 + 0xc0),lVar1,lVar2,auStack_c0,&local_68,
                              local_d0);
        bVar4 = iVar16 != 0 | (iVar17 != 0) << 1;
        if (bVar4 == 3) {
          fVar27 = local_d0._0_4_;
          fVar31 = auStack_c8._0_4_;
          *(uint *)(param_3 + 0x1c4) = (uint)(fVar27 < fVar31);
          uVar25 = (ulong)(fVar27 >= fVar31);
          iVar16 = (int)param_2[1];
          lVar21 = (long)iVar16;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar16) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar21 + 1);
            iVar16 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar21 + 1);
          puVar18 = (ulong *)(*param_2 + (long)iVar16 * 0x30);
          uVar29 = (&local_140)[uVar25 * 6 + -4];
          uVar19 = (ulong)(fVar27 < fVar31);
          puVar18[1] = (&local_140)[uVar25 * 6 + -3];
          *puVar18 = uVar29;
          uVar29 = (&local_140)[uVar25 * 6 + -2];
          puVar18[3] = (&local_140)[uVar25 * 6 + -1];
          puVar18[2] = uVar29;
          *(int *)(puVar18 + 4) = (int)(&local_140)[uVar25 * 6];
          local_e0 = (uint)(&local_140)[uVar19 * 6];
          uStack_f8 = (&local_140)[uVar19 * 6 + -3];
          local_100 = (&local_140)[uVar19 * 6 + -4];
          uStack_e8 = (&local_140)[uVar19 * 6 + -1];
          local_f0 = (&local_140)[uVar19 * 6 + -2];
          local_d8 = (byte *)(&local_140)[uVar19 * 6 + 1];
        }
        else if (bVar4 == 2) {
          local_e0 = local_110;
          uStack_f8 = uStack_128;
          local_100 = local_130;
          uStack_e8 = uStack_118;
          local_f0 = local_120;
          local_d8 = local_108;
        }
        else {
          if (bVar4 != 1) goto LAB_00842dec;
          local_e0 = (uint)local_140;
          uStack_f8 = uStack_158;
          local_100 = local_160;
          uStack_e8 = local_148;
          local_f0 = local_150;
          local_d8 = local_138;
        }
      }
      lVar21 = *(long *)(param_3 + 0xa8);
      if (lVar21 != 0) {
        lVar22 = *(long *)(lVar21 + 0x20);
        lVar3 = 0;
        if (lVar22 != 0) {
          lVar3 = lVar22 + lVar21 + 0x20;
        }
        lVar24 = *(long *)(lVar3 + 0x48);
        lVar22 = 0;
        if (lVar24 != 0) {
          lVar22 = lVar24 + lVar3 + 0x48;
        }
        uVar7 = local_e0 + 0x1f;
        if (-1 < (int)local_e0) {
          uVar7 = local_e0;
        }
        if ((*(uint *)(lVar21 + 0x28 +
                      (long)((int)uVar7 >> 5) * 4 +
                      (long)(*(int *)(lVar22 + 0x68) << 3) * 4 + *(long *)(lVar21 + 0x28)) >>
             (ulong)(local_e0 & 0x1f) & 1) == 0) goto LAB_00842dec;
      }
      lVar22 = (long)(param_1 + 8) + (ulong)CONCAT11(local_d8[3],local_d8[4]) * 0x60 + param_1[8];
      lVar24 = *(long *)(param_3 + 0x50);
      lVar20 = *(long *)(lVar24 + 0x40);
      lVar21 = lVar20 + lVar24 + 0x40;
      lVar3 = 0;
      if (lVar20 != 0) {
        lVar3 = lVar21;
      }
      iVar16 = (int)(lVar22 - lVar3 >> 5) * -0x55555555;
      if (*(int *)(param_3 + 0x94) != iVar16 || *(int *)(param_3 + 0x98) != iVar16) {
        lVar21 = lVar21 + (long)iVar16 * 0x60;
        *(long *)(param_3 + 0x60) = lVar21;
        *(int *)(param_3 + 0x94) = iVar16;
        *(int *)(param_3 + 0x98) = iVar16;
        lVar20 = *(long *)(lVar24 + 0x70);
        lVar3 = 0;
        if (lVar20 != 0) {
          lVar3 = lVar20 + lVar24 + 0x70;
        }
        *(ulong *)(param_3 + 0x70) = lVar3 + (ulong)*(uint *)(lVar21 + 0x48) * 4;
        lVar20 = *(long *)(lVar24 + 0x80);
        lVar3 = 0;
        if (lVar20 != 0) {
          lVar3 = lVar20 + lVar24 + 0x80;
        }
        *(ulong *)(param_3 + 0x78) = lVar3 + (ulong)*(byte *)(lVar21 + 0x5b) * 0x80000;
        lVar20 = *(long *)(lVar24 + 0x60);
        lVar3 = 0;
        if (lVar20 != 0) {
          lVar3 = lVar20 + lVar24 + 0x60;
        }
        lVar3 = lVar3 + (ulong)*(uint *)(lVar21 + 0x4c) * 2;
        *(long *)(param_3 + 0x80) = lVar3;
        lVar23 = *(long *)(lVar24 + 0x90);
        lVar20 = 0;
        if (lVar23 != 0) {
          lVar20 = lVar23 + lVar24 + 0x90;
        }
        *(ulong *)(param_3 + 0x88) = lVar20 + (ulong)*(uint *)(lVar21 + 0x54) * 4;
        *(uint *)(param_3 + 0x90) = (uint)*(byte *)(lVar21 + 0x58);
        lVar23 = *(long *)(lVar24 + 0x50);
        lVar20 = 0;
        if (lVar23 != 0) {
          lVar20 = lVar23 + lVar24 + 0x50;
        }
        *(ulong *)(param_3 + 0x68) = lVar20 + (ulong)*(uint *)(lVar21 + 0x50) * 4;
        uVar30 = *(undefined8 *)(lVar21 + 0x30);
        *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar21 + 0x38);
        *(undefined8 *)(param_3 + 0x30) = uVar30;
        uVar30 = *(undefined8 *)(lVar21 + 0x3c);
        *(ulong *)(param_3 + 0x48) = (ulong)*(uint *)(lVar21 + 0x44);
        *(undefined8 *)(param_3 + 0x40) = uVar30;
        *(ulong *)(param_3 + 0x80) = lVar3 + (ulong)*(byte *)(lVar21 + 0x58) * -2;
      }
      FUN_00843124(lVar22,param_2,param_3);
LAB_00842dec:
      if ((int)lVar14 < (int)param_2[1]) {
        iVar16 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar16;
        puVar18 = (ulong *)(*param_2 + (long)iVar16 * 0x30);
        local_e0 = (uint)puVar18[4];
        local_d8 = (byte *)((long)param_1 + (long)(int)puVar18[4] * 5 + *param_1);
        uStack_f8 = puVar18[1];
        local_100 = *puVar18;
        uStack_e8 = puVar18[3];
        local_f0 = puVar18[2];
        goto LAB_00842c4c;
      }
    }
  }
  return;
}


