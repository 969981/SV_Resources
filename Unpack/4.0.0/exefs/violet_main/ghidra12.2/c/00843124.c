/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00843124; name: FUN_00843124
 */


void FUN_00843124(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  ulong uVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
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
  int local_110;
  byte *local_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  int local_e0;
  byte *local_d8;
  undefined1 local_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [32];
  undefined8 local_a0 [6];
  undefined8 local_68;
  
  puVar13 = PTR_DAT_047d19b0;
  if ((int)param_1[1] != 0) {
    lVar12 = param_2[1];
    uStack_f8 = param_1[3];
    local_100 = param_1[2];
    lVar1 = param_3 + 0x1d0;
    lVar2 = param_3 + 0x210;
    uVar33 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    uStack_e8 = param_1[5];
    local_f0 = param_1[4];
    local_e0 = 0;
    local_d8 = (byte *)(*param_1 + (long)param_1);
    uVar22 = NEON_fmax(uVar33,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
    fVar20 = (float)((ulong)uVar22 >> 0x20);
    local_a0[0] = CONCAT44(fVar20 * fVar20,(float)uVar22 * (float)uVar22);
    FUN_03241a80(*(undefined8 *)(*(long *)(param_3 + 0xe0) + 0x20),&local_100,&local_160);
    iVar14 = FUN_02eb4dd4(*(undefined8 *)(param_3 + 0xc0),lVar1,lVar2,&local_160,local_a0,auStack_c0
                         );
    if (iVar14 != 0) {
      uVar22 = *(undefined8 *)(puVar13 + 0x1e0);
      fVar20 = (float)uVar22;
LAB_0084324c:
      while ((local_d8[3] & 1) != 0) {
        local_140._0_4_ = local_e0 + 1;
        fVar27 = (float)local_f0;
        fVar30 = (float)local_100;
        fVar28 = (float)(local_f0 >> 0x20);
        fVar31 = (float)(local_100 >> 0x20);
        fVar29 = (float)uStack_e8;
        fVar32 = (float)uStack_f8;
        local_110 = local_e0 + (local_d8[3] & 0xfe);
        local_138 = (byte *)((long)param_1 + (long)(int)local_140 * 4 + *param_1);
        local_108 = (byte *)((long)param_1 + (long)local_110 * 4 + *param_1);
        bVar6 = *local_138 >> 4;
        bVar3 = *local_138 & 0xf;
        fVar21 = (fVar27 - fVar30) * fVar20;
        fVar25 = (fVar28 - fVar31) * (float)((ulong)uVar22 >> 0x20);
        fVar26 = (fVar29 - fVar32) * fVar20;
        bVar7 = local_138[1] >> 4;
        bVar4 = local_138[1] & 0xf;
        bVar8 = local_138[2] >> 4;
        bVar11 = local_138[2] & 0xf;
        bVar9 = *local_108 >> 4;
        bVar5 = *local_108 & 0xf;
        bVar10 = local_108[2] >> 4;
        local_160 = CONCAT44((float)(byte)(bVar7 * bVar7) * fVar25 + fVar31,
                             (float)(byte)(bVar6 * bVar6) * fVar21 + fVar30);
        uStack_158 = (ulong)(uint)((float)(byte)(bVar8 * bVar8) * fVar26 + fVar32);
        local_150 = CONCAT44(fVar28 - (float)(byte)(bVar4 * bVar4) * fVar25,
                             fVar27 - (float)(byte)(bVar3 * bVar3) * fVar21);
        bVar3 = local_108[2] & 0xf;
        local_148 = (ulong)(uint)(fVar29 - (float)(byte)(bVar11 * bVar11) * fVar26);
        bVar11 = local_108[1] >> 4;
        bVar4 = local_108[1] & 0xf;
        local_130 = CONCAT44((float)(byte)(bVar11 * bVar11) * fVar25 + fVar31,
                             fVar30 + (float)(byte)(bVar9 * bVar9) * fVar21);
        uStack_128 = (ulong)(uint)((float)(byte)(bVar10 * bVar10) * fVar26 + fVar32);
        local_120 = CONCAT44(fVar28 - (float)(byte)(bVar4 * bVar4) * fVar25,
                             fVar27 - (float)(byte)(bVar5 * bVar5) * fVar21);
        uStack_118 = (ulong)(uint)(fVar29 - (float)(byte)(bVar3 * bVar3) * fVar26);
        uVar24 = NEON_fmax(uVar33,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
        fVar21 = (float)((ulong)uVar24 >> 0x20);
        local_68 = CONCAT44(fVar21 * fVar21,(float)uVar24 * (float)uVar24);
        FUN_03241a80(*(undefined8 *)(*(long *)(param_3 + 0xe0) + 0x20),&local_160,local_a0);
        FUN_03241a80(*(undefined8 *)(*(long *)(param_3 + 0xe0) + 0x20),&local_130,auStack_c0);
        iVar14 = FUN_02eb4dd4(*(undefined8 *)(param_3 + 0xc0),lVar1,lVar2,local_a0,&local_68,
                              auStack_c8);
        iVar15 = FUN_02eb4dd4(*(undefined8 *)(param_3 + 0xc0),lVar1,lVar2,auStack_c0,&local_68,
                              local_d0);
        bVar3 = iVar14 != 0 | (iVar15 != 0) << 1;
        if (bVar3 == 3) {
          fVar21 = local_d0._0_4_;
          fVar25 = auStack_c8._0_4_;
          *(uint *)(param_3 + 0x1c4) = (uint)(fVar21 < fVar25);
          uVar19 = (ulong)(fVar21 >= fVar25);
          iVar14 = (int)param_2[1];
          lVar16 = (long)iVar14;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar14) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar16 + 1);
            iVar14 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar16 + 1);
          puVar17 = (ulong *)(*param_2 + (long)iVar14 * 0x30);
          uVar18 = (&local_140)[uVar19 * 6 + -4];
          puVar17[1] = (&local_140)[uVar19 * 6 + -3];
          *puVar17 = uVar18;
          uVar23 = (&local_140)[uVar19 * 6 + -2];
          uVar18 = (ulong)(fVar21 < fVar25);
          puVar17[3] = (&local_140)[uVar19 * 6 + -1];
          puVar17[2] = uVar23;
          *(int *)(puVar17 + 4) = (int)(&local_140)[uVar19 * 6];
          local_e0 = (int)(&local_140)[uVar18 * 6];
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
          if (bVar3 != 1) goto LAB_00843260;
          local_e0 = (int)local_140;
          uStack_f8 = uStack_158;
          local_100 = local_160;
          uStack_e8 = local_148;
          local_f0 = local_150;
          local_d8 = local_138;
        }
      }
      FUN_00841604(param_3,&local_100);
LAB_00843260:
      if ((int)lVar12 < (int)param_2[1]) {
        iVar14 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar14;
        puVar17 = (ulong *)(*param_2 + (long)iVar14 * 0x30);
        local_e0 = (int)puVar17[4];
        local_d8 = (byte *)((long)param_1 + (long)(int)puVar17[4] * 4 + *param_1);
        uStack_f8 = puVar17[1];
        local_100 = *puVar17;
        uStack_e8 = puVar17[3];
        local_f0 = puVar17[2];
        goto LAB_0084324c;
      }
    }
  }
  return;
}


