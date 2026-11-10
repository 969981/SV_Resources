/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00843b5c; name: FUN_00843b5c
 */


void FUN_00843b5c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  ulong uVar22;
  float fVar24;
  undefined8 uVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
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
  
  puVar12 = PTR_DAT_047d19b0;
  if ((int)param_1[1] != 0) {
    lVar11 = param_2[1];
    lVar1 = param_3 + 0x1d0;
    uStack_f8 = param_1[3];
    local_100 = param_1[2];
    uVar32 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    uStack_e8 = param_1[5];
    local_f0 = param_1[4];
    local_e0 = 0;
    local_d8 = (byte *)(*param_1 + (long)param_1);
    uVar21 = NEON_fmax(uVar32,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
    fVar19 = (float)((ulong)uVar21 >> 0x20);
    local_a0[0] = CONCAT44(fVar19 * fVar19,(float)uVar21 * (float)uVar21);
    FUN_03241a80(lVar1,&local_100,&local_160);
    iVar13 = FUN_02eb45a0(*(undefined8 *)(param_3 + 0xc0),&local_160,local_a0,auStack_c0);
    if (iVar13 != 0) {
      uVar21 = *(undefined8 *)(puVar12 + 0x1e0);
      fVar19 = (float)uVar21;
LAB_00843c74:
      while ((local_d8[3] & 1) != 0) {
        local_140._0_4_ = local_e0 + 1;
        fVar26 = (float)local_f0;
        fVar29 = (float)local_100;
        fVar27 = (float)(local_f0 >> 0x20);
        fVar30 = (float)(local_100 >> 0x20);
        fVar28 = (float)uStack_e8;
        fVar31 = (float)uStack_f8;
        local_110 = local_e0 + (local_d8[3] & 0xfe);
        local_138 = (byte *)((long)param_1 + (long)(int)local_140 * 4 + *param_1);
        local_108 = (byte *)((long)param_1 + (long)local_110 * 4 + *param_1);
        fVar20 = (fVar26 - fVar29) * fVar19;
        fVar24 = (fVar27 - fVar30) * (float)((ulong)uVar21 >> 0x20);
        fVar25 = (fVar28 - fVar31) * fVar19;
        bVar6 = *local_138 >> 4;
        bVar7 = local_138[1] >> 4;
        bVar2 = local_138[1] & 0xf;
        bVar3 = local_138[2] & 0xf;
        bVar5 = local_138[2] >> 4;
        bVar4 = *local_138 & 0xf;
        local_160 = CONCAT44((float)(byte)(bVar7 * bVar7) * fVar24 + fVar30,
                             (float)(byte)(bVar6 * bVar6) * fVar20 + fVar29);
        uStack_158 = (ulong)(uint)((float)(byte)(bVar5 * bVar5) * fVar25 + fVar31);
        bVar8 = *local_108 >> 4;
        bVar9 = local_108[1] >> 4;
        bVar10 = local_108[2] >> 4;
        bVar5 = *local_108 & 0xf;
        bVar6 = local_108[1] & 0xf;
        bVar7 = local_108[2] & 0xf;
        local_150 = CONCAT44(fVar27 - (float)(byte)(bVar2 * bVar2) * fVar24,
                             fVar26 - (float)(byte)(bVar4 * bVar4) * fVar20);
        local_148 = (ulong)(uint)(fVar28 - (float)(byte)(bVar3 * bVar3) * fVar25);
        local_130 = CONCAT44((float)(byte)(bVar9 * bVar9) * fVar24 + fVar30,
                             fVar29 + (float)(byte)(bVar8 * bVar8) * fVar20);
        uStack_128 = (ulong)(uint)((float)(byte)(bVar10 * bVar10) * fVar25 + fVar31);
        local_120 = CONCAT44(fVar27 - (float)(byte)(bVar6 * bVar6) * fVar24,
                             fVar26 - (float)(byte)(bVar5 * bVar5) * fVar20);
        uStack_118 = (ulong)(uint)(fVar28 - (float)(byte)(bVar7 * bVar7) * fVar25);
        uVar23 = NEON_fmax(uVar32,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
        fVar20 = (float)((ulong)uVar23 >> 0x20);
        local_68 = CONCAT44(fVar20 * fVar20,(float)uVar23 * (float)uVar23);
        FUN_03241a80(lVar1,&local_160,local_a0);
        FUN_03241a80(lVar1,&local_130,auStack_c0);
        iVar13 = FUN_02eb45a0(*(undefined8 *)(param_3 + 0xc0),local_a0,&local_68,auStack_c8);
        iVar14 = FUN_02eb45a0(*(undefined8 *)(param_3 + 0xc0),auStack_c0,&local_68,local_d0);
        bVar2 = iVar13 != 0 | (iVar14 != 0) << 1;
        if (bVar2 == 3) {
          fVar20 = local_d0._0_4_;
          fVar24 = auStack_c8._0_4_;
          *(uint *)(param_3 + 0x1c4) = (uint)(fVar20 < fVar24);
          uVar18 = (ulong)(fVar20 >= fVar24);
          iVar13 = (int)param_2[1];
          lVar15 = (long)iVar13;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar13) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar15 + 1);
            iVar13 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar15 + 1);
          puVar16 = (ulong *)(*param_2 + (long)iVar13 * 0x30);
          uVar17 = (&local_140)[uVar18 * 6 + -4];
          puVar16[1] = (&local_140)[uVar18 * 6 + -3];
          *puVar16 = uVar17;
          uVar22 = (&local_140)[uVar18 * 6 + -2];
          uVar17 = (ulong)(fVar20 < fVar24);
          puVar16[3] = (&local_140)[uVar18 * 6 + -1];
          puVar16[2] = uVar22;
          *(int *)(puVar16 + 4) = (int)(&local_140)[uVar18 * 6];
          local_e0 = (int)(&local_140)[uVar17 * 6];
          uStack_f8 = (&local_140)[uVar17 * 6 + -3];
          local_100 = (&local_140)[uVar17 * 6 + -4];
          uStack_e8 = (&local_140)[uVar17 * 6 + -1];
          local_f0 = (&local_140)[uVar17 * 6 + -2];
          local_d8 = (byte *)(&local_140)[uVar17 * 6 + 1];
        }
        else if (bVar2 == 2) {
          local_e0 = local_110;
          uStack_f8 = uStack_128;
          local_100 = local_130;
          uStack_e8 = uStack_118;
          local_f0 = local_120;
          local_d8 = local_108;
        }
        else {
          if (bVar2 != 1) goto LAB_00843c88;
          local_e0 = (int)local_140;
          uStack_f8 = uStack_158;
          local_100 = local_160;
          uStack_e8 = local_148;
          local_f0 = local_150;
          local_d8 = local_138;
        }
      }
      FUN_00841604(param_3,&local_100);
LAB_00843c88:
      if ((int)lVar11 < (int)param_2[1]) {
        iVar13 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar13;
        puVar16 = (ulong *)(*param_2 + (long)iVar13 * 0x30);
        local_e0 = (int)puVar16[4];
        local_d8 = (byte *)((long)param_1 + (long)(int)puVar16[4] * 4 + *param_1);
        uStack_f8 = puVar16[1];
        local_100 = *puVar16;
        uStack_e8 = puVar16[3];
        local_f0 = puVar16[2];
        goto LAB_00843c74;
      }
    }
  }
  return;
}


