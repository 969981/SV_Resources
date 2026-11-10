/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0084357c; name: FUN_0084357c
 */


void FUN_0084357c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  long lVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
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
  
  puVar14 = PTR_DAT_047d19b0;
  if ((int)param_1[1] != 0) {
    lVar13 = param_2[1];
    lVar1 = param_3 + 0x1d0;
    uStack_f8 = param_1[3];
    local_100 = param_1[2];
    uVar38 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    uStack_e8 = param_1[5];
    local_f0 = param_1[4];
    local_e0 = 0;
    local_d8 = (byte *)(*param_1 + (long)param_1);
    uVar27 = NEON_fmax(uVar38,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
    fVar25 = (float)((ulong)uVar27 >> 0x20);
    local_a0[0] = CONCAT44(fVar25 * fVar25,(float)uVar27 * (float)uVar27);
    FUN_03241a80(lVar1,&local_100,&local_160);
    iVar15 = FUN_02eb45a0(*(undefined8 *)(param_3 + 0xc0),&local_160,local_a0,auStack_c0);
    if (iVar15 != 0) {
      uVar27 = *(undefined8 *)(puVar14 + 0x1e0);
      fVar25 = (float)uVar27;
LAB_008436a0:
      while ((char)local_d8[3] < '\0') {
        lVar20 = (long)(int)local_e0 + 1;
        fVar32 = (float)local_f0;
        fVar35 = (float)local_100;
        fVar33 = (float)(local_f0 >> 0x20);
        fVar36 = (float)(local_100 >> 0x20);
        fVar34 = (float)uStack_e8;
        fVar37 = (float)uStack_f8;
        local_140._0_4_ = (uint)lVar20;
        lVar2 = ((ulong)local_d8[4] << 1 | ((ulong)local_d8[3] & 0x7f) << 9) + (long)(int)local_e0;
        local_110 = (uint)lVar2;
        local_138 = (byte *)((long)param_1 + lVar20 * 5 + *param_1);
        local_108 = (byte *)((long)param_1 + lVar2 * 5 + *param_1);
        bVar8 = *local_138 >> 4;
        bVar9 = local_138[1] >> 4;
        bVar3 = local_138[1] & 0xf;
        bVar4 = *local_138 & 0xf;
        fVar26 = (fVar32 - fVar35) * fVar25;
        fVar30 = (fVar33 - fVar36) * (float)((ulong)uVar27 >> 0x20);
        fVar31 = (fVar34 - fVar37) * fVar25;
        bVar5 = local_138[2] & 0xf;
        bVar7 = local_138[2] >> 4;
        uStack_158 = (ulong)(uint)((float)(byte)(bVar7 * bVar7) * fVar31 + fVar37);
        local_160 = CONCAT44((float)(byte)(bVar9 * bVar9) * fVar30 + fVar36,
                             (float)(byte)(bVar8 * bVar8) * fVar26 + fVar35);
        bVar10 = *local_108 >> 4;
        bVar11 = local_108[1] >> 4;
        bVar12 = local_108[2] >> 4;
        bVar7 = *local_108 & 0xf;
        bVar8 = local_108[1] & 0xf;
        bVar9 = local_108[2] & 0xf;
        local_150 = CONCAT44(fVar33 - (float)(byte)(bVar3 * bVar3) * fVar30,
                             fVar32 - (float)(byte)(bVar4 * bVar4) * fVar26);
        local_148 = (ulong)(uint)(fVar34 - (float)(byte)(bVar5 * bVar5) * fVar31);
        local_130 = CONCAT44((float)(byte)(bVar11 * bVar11) * fVar30 + fVar36,
                             fVar35 + (float)(byte)(bVar10 * bVar10) * fVar26);
        uStack_128 = (ulong)(uint)((float)(byte)(bVar12 * bVar12) * fVar31 + fVar37);
        local_120 = CONCAT44(fVar33 - (float)(byte)(bVar8 * bVar8) * fVar30,
                             fVar32 - (float)(byte)(bVar7 * bVar7) * fVar26);
        uStack_118 = (ulong)(uint)(fVar34 - (float)(byte)(bVar9 * bVar9) * fVar31);
        uVar29 = NEON_fmax(uVar38,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
        fVar26 = (float)((ulong)uVar29 >> 0x20);
        local_68 = CONCAT44(fVar26 * fVar26,(float)uVar29 * (float)uVar29);
        FUN_03241a80(lVar1,&local_160,local_a0);
        FUN_03241a80(lVar1,&local_130,auStack_c0);
        iVar15 = FUN_02eb45a0(*(undefined8 *)(param_3 + 0xc0),local_a0,&local_68,auStack_c8);
        iVar16 = FUN_02eb45a0(*(undefined8 *)(param_3 + 0xc0),auStack_c0,&local_68,local_d0);
        bVar3 = iVar15 != 0 | (iVar16 != 0) << 1;
        if (bVar3 == 3) {
          fVar26 = local_d0._0_4_;
          fVar30 = auStack_c8._0_4_;
          *(uint *)(param_3 + 0x1c4) = (uint)(fVar26 < fVar30);
          uVar24 = (ulong)(fVar26 >= fVar30);
          iVar15 = (int)param_2[1];
          lVar20 = (long)iVar15;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar15) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar20 + 1);
            iVar15 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar20 + 1);
          uVar18 = (&local_140)[uVar24 * 6 + -4];
          puVar17 = (ulong *)(*param_2 + (long)iVar15 * 0x30);
          puVar17[1] = (&local_140)[uVar24 * 6 + -3];
          *puVar17 = uVar18;
          uVar28 = (&local_140)[uVar24 * 6 + -2];
          uVar18 = (ulong)(fVar26 < fVar30);
          puVar17[3] = (&local_140)[uVar24 * 6 + -1];
          puVar17[2] = uVar28;
          *(int *)(puVar17 + 4) = (int)(&local_140)[uVar24 * 6];
          local_e0 = (uint)(&local_140)[uVar18 * 6];
          local_d8 = (byte *)(&local_140)[uVar18 * 6 + 1];
          uStack_f8 = (&local_140)[uVar18 * 6 + -3];
          local_100 = (&local_140)[uVar18 * 6 + -4];
          uStack_e8 = (&local_140)[uVar18 * 6 + -1];
          local_f0 = (&local_140)[uVar18 * 6 + -2];
        }
        else if (bVar3 == 2) {
          local_e0 = local_110;
          uStack_f8 = uStack_128;
          local_100 = local_130;
          uStack_e8 = uStack_118;
          local_f0 = local_120;
          local_d8 = local_108;
        }
        else {
          if (bVar3 != 1) goto LAB_00843840;
          local_e0 = (uint)local_140;
          uStack_f8 = uStack_158;
          local_100 = local_160;
          uStack_e8 = local_148;
          local_f0 = local_150;
          local_d8 = local_138;
        }
      }
      lVar20 = *(long *)(param_3 + 0xa8);
      if (lVar20 != 0) {
        lVar21 = *(long *)(lVar20 + 0x20);
        lVar2 = 0;
        if (lVar21 != 0) {
          lVar2 = lVar21 + lVar20 + 0x20;
        }
        lVar23 = *(long *)(lVar2 + 0x48);
        lVar21 = 0;
        if (lVar23 != 0) {
          lVar21 = lVar23 + lVar2 + 0x48;
        }
        uVar6 = local_e0 + 0x1f;
        if (-1 < (int)local_e0) {
          uVar6 = local_e0;
        }
        if ((*(uint *)(lVar20 + 0x28 +
                      (long)((int)uVar6 >> 5) * 4 +
                      (long)(*(int *)(lVar21 + 0x68) << 3) * 4 + *(long *)(lVar20 + 0x28)) >>
             (ulong)(local_e0 & 0x1f) & 1) == 0) goto LAB_00843840;
      }
      lVar21 = (long)(param_1 + 8) + (ulong)CONCAT11(local_d8[3],local_d8[4]) * 0x60 + param_1[8];
      lVar23 = *(long *)(param_3 + 0x50);
      lVar19 = *(long *)(lVar23 + 0x40);
      lVar20 = lVar19 + lVar23 + 0x40;
      lVar2 = 0;
      if (lVar19 != 0) {
        lVar2 = lVar20;
      }
      iVar15 = (int)(lVar21 - lVar2 >> 5) * -0x55555555;
      if (*(int *)(param_3 + 0x94) != iVar15 || *(int *)(param_3 + 0x98) != iVar15) {
        lVar20 = lVar20 + (long)iVar15 * 0x60;
        *(long *)(param_3 + 0x60) = lVar20;
        *(int *)(param_3 + 0x94) = iVar15;
        *(int *)(param_3 + 0x98) = iVar15;
        lVar19 = *(long *)(lVar23 + 0x70);
        lVar2 = 0;
        if (lVar19 != 0) {
          lVar2 = lVar19 + lVar23 + 0x70;
        }
        *(ulong *)(param_3 + 0x70) = lVar2 + (ulong)*(uint *)(lVar20 + 0x48) * 4;
        lVar19 = *(long *)(lVar23 + 0x80);
        lVar2 = 0;
        if (lVar19 != 0) {
          lVar2 = lVar19 + lVar23 + 0x80;
        }
        *(ulong *)(param_3 + 0x78) = lVar2 + (ulong)*(byte *)(lVar20 + 0x5b) * 0x80000;
        lVar19 = *(long *)(lVar23 + 0x60);
        lVar2 = 0;
        if (lVar19 != 0) {
          lVar2 = lVar19 + lVar23 + 0x60;
        }
        lVar2 = lVar2 + (ulong)*(uint *)(lVar20 + 0x4c) * 2;
        *(long *)(param_3 + 0x80) = lVar2;
        lVar22 = *(long *)(lVar23 + 0x90);
        lVar19 = 0;
        if (lVar22 != 0) {
          lVar19 = lVar22 + lVar23 + 0x90;
        }
        *(ulong *)(param_3 + 0x88) = lVar19 + (ulong)*(uint *)(lVar20 + 0x54) * 4;
        *(uint *)(param_3 + 0x90) = (uint)*(byte *)(lVar20 + 0x58);
        lVar22 = *(long *)(lVar23 + 0x50);
        lVar19 = 0;
        if (lVar22 != 0) {
          lVar19 = lVar22 + lVar23 + 0x50;
        }
        *(ulong *)(param_3 + 0x68) = lVar19 + (ulong)*(uint *)(lVar20 + 0x50) * 4;
        uVar29 = *(undefined8 *)(lVar20 + 0x30);
        *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar20 + 0x38);
        *(undefined8 *)(param_3 + 0x30) = uVar29;
        uVar29 = *(undefined8 *)(lVar20 + 0x3c);
        *(ulong *)(param_3 + 0x48) = (ulong)*(uint *)(lVar20 + 0x44);
        *(undefined8 *)(param_3 + 0x40) = uVar29;
        *(ulong *)(param_3 + 0x80) = lVar2 + (ulong)*(byte *)(lVar20 + 0x58) * -2;
      }
      FUN_00843b5c(lVar21,param_2,param_3);
LAB_00843840:
      if ((int)lVar13 < (int)param_2[1]) {
        iVar15 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar15;
        puVar17 = (ulong *)(*param_2 + (long)iVar15 * 0x30);
        local_e0 = (uint)puVar17[4];
        local_d8 = (byte *)((long)param_1 + (long)(int)puVar17[4] * 5 + *param_1);
        uStack_f8 = puVar17[1];
        local_100 = *puVar17;
        uStack_e8 = puVar17[3];
        local_f0 = puVar17[2];
        goto LAB_008436a0;
      }
    }
  }
  return;
}


