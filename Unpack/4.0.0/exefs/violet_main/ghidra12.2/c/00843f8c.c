/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00843f8c; name: FUN_00843f8c
 */


void FUN_00843f8c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  long lVar15;
  undefined *puVar16;
  int iVar17;
  int iVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  ulong uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 local_160;
  ulong uStack_158;
  undefined8 local_150;
  ulong local_148;
  ulong local_140;
  byte *local_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
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
  
  puVar16 = PTR_DAT_047d19b0;
  if ((int)param_1[1] != 0) {
    lVar15 = param_2[1];
    lVar1 = param_3 + 0x250;
    uStack_f8 = param_1[3];
    local_100 = param_1[2];
    lVar2 = param_3 + 0x1d0;
    uStack_e8 = param_1[5];
    local_f0 = param_1[4];
    uVar34 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    lVar3 = param_3 + 0x210;
    local_e0 = 0;
    local_d8 = (byte *)(*param_1 + (long)param_1);
    uVar29 = NEON_fmax(uVar34,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
    fVar27 = (float)((ulong)uVar29 >> 0x20);
    local_a0[0] = CONCAT44(fVar27 * fVar27,(float)uVar29 * (float)uVar29);
    FUN_03241a80(lVar1,&local_100,&local_160);
    iVar17 = FUN_02eb4dd4(*(undefined8 *)(param_3 + 0xc0),lVar2,lVar3,&local_160,local_a0,auStack_c0
                         );
    if (iVar17 != 0) {
      uVar29 = *(undefined8 *)(puVar16 + 0x1e0);
      fVar27 = (float)uVar29;
LAB_008440d4:
      while ((char)local_d8[3] < '\0') {
        lVar22 = (long)(int)local_e0 + 1;
        local_120 = (float)local_f0;
        local_130 = (float)local_100;
        fStack_11c = (float)(local_f0 >> 0x20);
        fStack_12c = (float)(local_100 >> 0x20);
        fStack_118 = (float)uStack_e8;
        fStack_128 = (float)uStack_f8;
        local_140._0_4_ = (uint)lVar22;
        lVar4 = ((ulong)local_d8[4] << 1 | ((ulong)local_d8[3] & 0x7f) << 9) + (long)(int)local_e0;
        local_110 = (uint)lVar4;
        local_138 = (byte *)((long)param_1 + lVar22 * 5 + *param_1);
        local_108 = (byte *)((long)param_1 + lVar4 * 5 + *param_1);
        bVar10 = *local_138 >> 4;
        bVar11 = local_138[1] >> 4;
        bVar5 = local_138[1] & 0xf;
        bVar6 = *local_138 & 0xf;
        fVar28 = (local_120 - local_130) * fVar27;
        fVar32 = (fStack_11c - fStack_12c) * (float)((ulong)uVar29 >> 0x20);
        fVar33 = (fStack_118 - fStack_128) * fVar27;
        bVar7 = local_138[2] & 0xf;
        bVar9 = local_138[2] >> 4;
        uStack_158 = (ulong)(uint)((float)(byte)(bVar9 * bVar9) * fVar33 + fStack_128);
        local_160 = CONCAT44((float)(byte)(bVar11 * bVar11) * fVar32 + fStack_12c,
                             (float)(byte)(bVar10 * bVar10) * fVar28 + local_130);
        bVar12 = *local_108 >> 4;
        bVar13 = local_108[1] >> 4;
        bVar14 = local_108[2] >> 4;
        bVar9 = *local_108 & 0xf;
        bVar10 = local_108[1] & 0xf;
        bVar11 = local_108[2] & 0xf;
        local_150 = CONCAT44(fStack_11c - (float)(byte)(bVar5 * bVar5) * fVar32,
                             local_120 - (float)(byte)(bVar6 * bVar6) * fVar28);
        local_148 = (ulong)(uint)(fStack_118 - (float)(byte)(bVar7 * bVar7) * fVar33);
        uStack_114 = 0;
        local_130 = local_130 + (float)(byte)(bVar12 * bVar12) * fVar28;
        uStack_124 = 0;
        fStack_12c = (float)(byte)(bVar13 * bVar13) * fVar32 + fStack_12c;
        fStack_128 = (float)(byte)(bVar14 * bVar14) * fVar33 + fStack_128;
        local_120 = local_120 - (float)(byte)(bVar9 * bVar9) * fVar28;
        fStack_11c = fStack_11c - (float)(byte)(bVar10 * bVar10) * fVar32;
        fStack_118 = fStack_118 - (float)(byte)(bVar11 * bVar11) * fVar33;
        uVar31 = NEON_fmax(uVar34,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
        fVar28 = (float)((ulong)uVar31 >> 0x20);
        local_68 = CONCAT44(fVar28 * fVar28,(float)uVar31 * (float)uVar31);
        FUN_03241a80(lVar1,&local_160,local_a0);
        FUN_03241a80(lVar1,&local_130,auStack_c0);
        iVar17 = FUN_02eb4dd4(*(undefined8 *)(param_3 + 0xc0),lVar2,lVar3,local_a0,&local_68,
                              auStack_c8);
        iVar18 = FUN_02eb4dd4(*(undefined8 *)(param_3 + 0xc0),lVar2,lVar3,auStack_c0,&local_68,
                              local_d0);
        bVar5 = iVar17 != 0 | (iVar18 != 0) << 1;
        if (bVar5 == 3) {
          fVar28 = local_d0._0_4_;
          fVar32 = auStack_c8._0_4_;
          *(uint *)(param_3 + 0x1c4) = (uint)(fVar28 < fVar32);
          iVar17 = (int)param_2[1];
          lVar22 = (long)iVar17;
          uVar26 = (ulong)(fVar28 >= fVar32);
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar17) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar22 + 1);
            iVar17 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar22 + 1);
          uVar30 = (&local_140)[uVar26 * 6 + -4];
          puVar19 = (ulong *)(*param_2 + (long)iVar17 * 0x30);
          uVar20 = (ulong)(fVar28 < fVar32);
          puVar19[1] = (&local_140)[uVar26 * 6 + -3];
          *puVar19 = uVar30;
          uVar30 = (&local_140)[uVar26 * 6 + -2];
          puVar19[3] = (&local_140)[uVar26 * 6 + -1];
          puVar19[2] = uVar30;
          *(int *)(puVar19 + 4) = (int)(&local_140)[uVar26 * 6];
          local_e0 = (uint)(&local_140)[uVar20 * 6];
          uStack_f8 = (&local_140)[uVar20 * 6 + -3];
          local_100 = (&local_140)[uVar20 * 6 + -4];
          uStack_e8 = (&local_140)[uVar20 * 6 + -1];
          local_f0 = (&local_140)[uVar20 * 6 + -2];
          local_d8 = (byte *)(&local_140)[uVar20 * 6 + 1];
        }
        else if (bVar5 == 2) {
          local_e0 = local_110;
          uStack_f8 = CONCAT44(uStack_124,fStack_128);
          local_100 = CONCAT44(fStack_12c,local_130);
          uStack_e8 = CONCAT44(uStack_114,fStack_118);
          local_f0 = CONCAT44(fStack_11c,local_120);
          local_d8 = local_108;
        }
        else {
          if (bVar5 != 1) goto LAB_0084427c;
          local_e0 = (uint)local_140;
          uStack_f8 = uStack_158;
          local_100 = local_160;
          uStack_e8 = local_148;
          local_f0 = local_150;
          local_d8 = local_138;
        }
      }
      lVar22 = *(long *)(param_3 + 0xa8);
      if (lVar22 != 0) {
        lVar23 = *(long *)(lVar22 + 0x20);
        lVar4 = 0;
        if (lVar23 != 0) {
          lVar4 = lVar23 + lVar22 + 0x20;
        }
        lVar25 = *(long *)(lVar4 + 0x48);
        lVar23 = 0;
        if (lVar25 != 0) {
          lVar23 = lVar25 + lVar4 + 0x48;
        }
        uVar8 = local_e0 + 0x1f;
        if (-1 < (int)local_e0) {
          uVar8 = local_e0;
        }
        if ((*(uint *)(lVar22 + 0x28 +
                      (long)((int)uVar8 >> 5) * 4 +
                      (long)(*(int *)(lVar23 + 0x68) << 3) * 4 + *(long *)(lVar22 + 0x28)) >>
             (ulong)(local_e0 & 0x1f) & 1) == 0) goto LAB_0084427c;
      }
      lVar23 = (long)(param_1 + 8) + (ulong)CONCAT11(local_d8[3],local_d8[4]) * 0x60 + param_1[8];
      lVar25 = *(long *)(param_3 + 0x50);
      lVar21 = *(long *)(lVar25 + 0x40);
      lVar22 = lVar21 + lVar25 + 0x40;
      lVar4 = 0;
      if (lVar21 != 0) {
        lVar4 = lVar22;
      }
      iVar17 = (int)(lVar23 - lVar4 >> 5) * -0x55555555;
      if (*(int *)(param_3 + 0x94) != iVar17 || *(int *)(param_3 + 0x98) != iVar17) {
        lVar22 = lVar22 + (long)iVar17 * 0x60;
        *(long *)(param_3 + 0x60) = lVar22;
        *(int *)(param_3 + 0x94) = iVar17;
        *(int *)(param_3 + 0x98) = iVar17;
        lVar21 = *(long *)(lVar25 + 0x70);
        lVar4 = 0;
        if (lVar21 != 0) {
          lVar4 = lVar21 + lVar25 + 0x70;
        }
        *(ulong *)(param_3 + 0x70) = lVar4 + (ulong)*(uint *)(lVar22 + 0x48) * 4;
        lVar21 = *(long *)(lVar25 + 0x80);
        lVar4 = 0;
        if (lVar21 != 0) {
          lVar4 = lVar21 + lVar25 + 0x80;
        }
        *(ulong *)(param_3 + 0x78) = lVar4 + (ulong)*(byte *)(lVar22 + 0x5b) * 0x80000;
        lVar21 = *(long *)(lVar25 + 0x60);
        lVar4 = 0;
        if (lVar21 != 0) {
          lVar4 = lVar21 + lVar25 + 0x60;
        }
        lVar4 = lVar4 + (ulong)*(uint *)(lVar22 + 0x4c) * 2;
        *(long *)(param_3 + 0x80) = lVar4;
        lVar24 = *(long *)(lVar25 + 0x90);
        lVar21 = 0;
        if (lVar24 != 0) {
          lVar21 = lVar24 + lVar25 + 0x90;
        }
        *(ulong *)(param_3 + 0x88) = lVar21 + (ulong)*(uint *)(lVar22 + 0x54) * 4;
        *(uint *)(param_3 + 0x90) = (uint)*(byte *)(lVar22 + 0x58);
        lVar24 = *(long *)(lVar25 + 0x50);
        lVar21 = 0;
        if (lVar24 != 0) {
          lVar21 = lVar24 + lVar25 + 0x50;
        }
        *(ulong *)(param_3 + 0x68) = lVar21 + (ulong)*(uint *)(lVar22 + 0x50) * 4;
        uVar31 = *(undefined8 *)(lVar22 + 0x30);
        *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar22 + 0x38);
        *(undefined8 *)(param_3 + 0x30) = uVar31;
        uVar31 = *(undefined8 *)(lVar22 + 0x3c);
        *(ulong *)(param_3 + 0x48) = (ulong)*(uint *)(lVar22 + 0x44);
        *(undefined8 *)(param_3 + 0x40) = uVar31;
        *(ulong *)(param_3 + 0x80) = lVar4 + (ulong)*(byte *)(lVar22 + 0x58) * -2;
      }
      FUN_008445c0(lVar23,param_2,param_3);
LAB_0084427c:
      if ((int)lVar15 < (int)param_2[1]) {
        iVar17 = (int)param_2[1] + -1;
        puVar19 = (ulong *)(*param_2 + (long)iVar17 * 0x30);
        *(int *)(param_2 + 1) = iVar17;
        local_e0 = (uint)puVar19[4];
        local_d8 = (byte *)((long)param_1 + (long)(int)puVar19[4] * 5 + *param_1);
        uStack_f8 = puVar19[1];
        local_100 = *puVar19;
        uStack_e8 = puVar19[3];
        local_f0 = puVar19[2];
        goto LAB_008440d4;
      }
    }
  }
  return;
}


