/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00427f70; name: FUN_00427f70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427f70(undefined8 *param_1,ushort *param_2,long param_3,ushort *param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_10a0 [64];
  undefined1 auStack_1060 [64];
  undefined1 auStack_1020 [64];
  undefined1 auStack_fe0 [64];
  undefined1 auStack_fa0 [64];
  undefined1 auStack_f60 [64];
  undefined1 auStack_f20 [64];
  undefined1 auStack_ee0 [64];
  undefined1 auStack_ea0 [64];
  undefined1 auStack_e60 [64];
  undefined1 auStack_e20 [64];
  undefined1 auStack_de0 [64];
  undefined1 auStack_da0 [64];
  undefined1 auStack_d60 [64];
  undefined1 auStack_d20 [64];
  undefined1 auStack_ce0 [64];
  undefined1 auStack_ca0 [64];
  undefined1 auStack_c60 [64];
  undefined1 auStack_c20 [64];
  undefined1 auStack_be0 [64];
  undefined1 auStack_ba0 [64];
  undefined1 auStack_b60 [64];
  undefined1 auStack_b20 [64];
  undefined1 auStack_ae0 [64];
  undefined1 auStack_aa0 [64];
  undefined1 auStack_a60 [64];
  undefined1 auStack_a20 [64];
  undefined1 auStack_9e0 [64];
  undefined1 auStack_9a0 [64];
  undefined1 auStack_960 [64];
  undefined1 auStack_920 [64];
  undefined1 auStack_8e0 [72];
  int local_898 [2];
  undefined8 auStack_890 [75];
  undefined8 uStack_638;
  int local_630 [2];
  undefined8 auStack_628 [112];
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [64];
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [64];
  undefined1 auStack_1e0 [64];
  undefined1 auStack_1a0 [64];
  undefined1 auStack_160 [64];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [64];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar7 = (ulong)*param_2;
  uVar11 = 1;
  iVar5 = 0x4b;
  uStack_638 = 0xffffffff;
  do {
    if (uVar11 < 0x1c) {
      uVar7 = (uint)((int)(*(ulong *)(param_2 + (ulong)(uVar11 >> 2) * 4) >> ((uVar11 & 3) << 4)) <<
                    0x10) + uVar7;
    }
    if ((uVar7 & 0xffff) != 0) {
      piVar13 = (int *)(((ulong)local_898 | 4) + (long)iVar5 * 8);
      do {
        uVar6 = (uint)uVar7;
        uVar14 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
        uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
        uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
        uVar6 = uVar6 >> (ulong)(uVar14 & 0x1f);
        iVar17 = (uVar6 & 0x3f) - (uVar6 & 0x40);
        uVar7 = uVar7 - (long)(iVar17 << (ulong)(uVar14 & 0x1f));
        piVar13[-1] = uVar11 * 0x10 + -0x10 + uVar14;
        *piVar13 = iVar17;
        piVar13 = piVar13 + -2;
        iVar5 = iVar5 + -1;
      } while ((uVar7 & 0xffff) != 0);
    }
    uVar11 = uVar11 + 1;
    uVar7 = uVar7 >> 0x10;
  } while (uVar11 != 0x1e);
  uVar11 = 0x4c - iVar5;
  if (uVar11 != 0) {
    uVar7 = (ulong)uVar11;
    if (uVar11 < 8) {
LAB_00428050:
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      if (((uint)(uVar7 - 1) <= -iVar5 - 2U) && (uVar7 - 1 >> 0x20 == 0)) {
        uVar12 = (ulong)(iVar5 + 1);
        if ((local_898 < local_898 + (uVar7 + uVar12) * 2) &&
           (local_898 + uVar12 * 2 < local_898 + uVar7 * 2)) goto LAB_00428050;
        uVar9 = uVar7 & 0xfffffff8;
        puVar10 = auStack_890 + 3;
        uVar15 = uVar9;
        do {
          uVar15 = uVar15 - 8;
          uVar18 = *(undefined8 *)(local_898 + uVar12 * 2);
          uVar20 = auStack_890[uVar12 + 2];
          uVar19 = auStack_890[uVar12 + 1];
          uVar22 = auStack_890[uVar12 + 4];
          uVar21 = auStack_890[uVar12 + 3];
          uVar24 = auStack_890[uVar12 + 6];
          uVar23 = auStack_890[uVar12 + 5];
          puVar10[-3] = auStack_890[uVar12];
          puVar10[-4] = uVar18;
          puVar10[-1] = uVar20;
          puVar10[-2] = uVar19;
          puVar10[1] = uVar22;
          *puVar10 = uVar21;
          puVar10[3] = uVar24;
          puVar10[2] = uVar23;
          uVar12 = (ulong)((int)uVar12 + 8);
          puVar10 = puVar10 + 8;
        } while (uVar15 != 0);
        if (uVar9 == uVar7) goto LAB_004280b4;
      }
    }
    uVar12 = ~uVar9;
    if ((uVar11 & 1) != 0) {
      *(undefined8 *)(local_898 + uVar9 * 2) =
           *(undefined8 *)(local_898 + (ulong)(uint)(iVar5 + 1 + (int)uVar9) * 2);
      uVar9 = uVar9 | 1;
    }
    if (uVar12 + uVar7 != 0) {
      lVar8 = uVar7 - uVar9;
      uVar11 = (int)uVar9 + iVar5 + 1;
      puVar10 = auStack_890 + uVar9;
      do {
        puVar10[-1] = *(undefined8 *)(local_898 + (ulong)uVar11 * 2);
        uVar6 = uVar11 + 1;
        uVar11 = uVar11 + 2;
        lVar8 = lVar8 + -2;
        *puVar10 = *(undefined8 *)(local_898 + (ulong)uVar6 * 2);
        puVar10 = puVar10 + 2;
      } while (lVar8 != 0);
    }
  }
LAB_004280b4:
  uVar7 = (ulong)*param_4;
  uVar11 = 1;
  iVar5 = 0x70;
  uStack_2a8 = 0xffffffff;
  do {
    if (uVar11 < 0x1c) {
      uVar7 = (uint)((int)(*(ulong *)(param_4 + (ulong)(uVar11 >> 2) * 4) >> ((uVar11 & 3) << 4)) <<
                    0x10) + uVar7;
    }
    if ((uVar7 & 0xffff) != 0) {
      piVar13 = (int *)(((ulong)local_630 | 4) + (long)iVar5 * 8);
      do {
        uVar6 = (uint)uVar7;
        uVar14 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
        uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
        uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
        uVar6 = uVar6 >> (ulong)(uVar14 & 0x1f);
        iVar17 = (uVar6 & 0xf) - (uVar6 & 0x10);
        uVar7 = uVar7 - (long)(iVar17 << (ulong)(uVar14 & 0x1f));
        piVar13[-1] = uVar11 * 0x10 + -0x10 + uVar14;
        *piVar13 = iVar17;
        piVar13 = piVar13 + -2;
        iVar5 = iVar5 + -1;
      } while ((uVar7 & 0xffff) != 0);
    }
    uVar11 = uVar11 + 1;
    uVar7 = uVar7 >> 0x10;
  } while (uVar11 != 0x1e);
  uVar11 = 0x71 - iVar5;
  if (uVar11 == 0) goto LAB_004281cc;
  uVar7 = (ulong)uVar11;
  if (uVar11 < 8) {
LAB_00428168:
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (((uint)(uVar7 - 1) <= -iVar5 - 2U) && (uVar7 - 1 >> 0x20 == 0)) {
      uVar12 = (ulong)(iVar5 + 1);
      if ((local_630 < local_630 + (uVar7 + uVar12) * 2) &&
         (local_630 + uVar12 * 2 < local_630 + uVar7 * 2)) goto LAB_00428168;
      uVar9 = uVar7 & 0xfffffff8;
      puVar10 = auStack_628 + 3;
      uVar15 = uVar9;
      do {
        uVar15 = uVar15 - 8;
        uVar18 = *(undefined8 *)(local_630 + uVar12 * 2);
        uVar20 = auStack_628[uVar12 + 2];
        uVar19 = auStack_628[uVar12 + 1];
        uVar22 = auStack_628[uVar12 + 4];
        uVar21 = auStack_628[uVar12 + 3];
        uVar24 = auStack_628[uVar12 + 6];
        uVar23 = auStack_628[uVar12 + 5];
        puVar10[-3] = auStack_628[uVar12];
        puVar10[-4] = uVar18;
        puVar10[-1] = uVar20;
        puVar10[-2] = uVar19;
        puVar10[1] = uVar22;
        *puVar10 = uVar21;
        puVar10[3] = uVar24;
        puVar10[2] = uVar23;
        uVar12 = (ulong)((int)uVar12 + 8);
        puVar10 = puVar10 + 8;
      } while (uVar15 != 0);
      if (uVar9 == uVar7) goto LAB_004281cc;
    }
  }
  uVar12 = ~uVar9;
  if ((uVar11 & 1) != 0) {
    *(undefined8 *)(local_630 + uVar9 * 2) =
         *(undefined8 *)(local_630 + (ulong)(uint)(iVar5 + 1 + (int)uVar9) * 2);
    uVar9 = uVar9 | 1;
  }
  if (uVar12 + uVar7 != 0) {
    lVar8 = uVar7 - uVar9;
    uVar11 = (int)uVar9 + iVar5 + 1;
    puVar10 = auStack_628 + uVar9;
    do {
      puVar10[-1] = *(undefined8 *)(local_630 + (ulong)uVar11 * 2);
      uVar6 = uVar11 + 1;
      uVar11 = uVar11 + 2;
      lVar8 = lVar8 + -2;
      *puVar10 = *(undefined8 *)(local_630 + (ulong)uVar6 * 2);
      puVar10 = puVar10 + 2;
    } while (lVar8 != 0);
  }
LAB_004281cc:
  FUN_0042ab30(auStack_10a0,param_3 + 0x40,param_3);
  FUN_0042a790(auStack_1060,param_3,param_3 + 0x40);
  FUN_0042b9b0(auStack_1020,param_3 + 0xc0,0x13154);
  FUN_0042ab30(auStack_1020,&DAT_03ced4e0,auStack_1020);
  FUN_0042a790(auStack_fe0,param_3 + 0x80,param_3 + 0x80);
  FUN_00424690(auStack_1a0,param_3,0);
  FUN_0042ab30(auStack_2a0,auStack_160,auStack_1a0);
  FUN_0042a790(auStack_260,auStack_1a0,auStack_160);
  FUN_0042b9b0(auStack_220,auStack_e0,0x13154);
  FUN_0042ab30(auStack_220,&DAT_03ced4e0,auStack_220);
  FUN_0042a790(auStack_1e0,&local_120,&local_120);
  FUN_0042b500(&local_a0,&local_120,auStack_fe0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_00426110(auStack_1a0,auStack_10a0,0);
  FUN_0042ab30(auStack_fa0,auStack_160,auStack_1a0);
  FUN_0042a790(auStack_f60,auStack_1a0,auStack_160);
  FUN_0042b9b0(auStack_f20,auStack_e0,0x13154);
  FUN_0042ab30(auStack_f20,&DAT_03ced4e0,auStack_f20);
  FUN_0042a790(auStack_ee0,&local_120,&local_120);
  FUN_0042b500(&local_a0,&local_120,auStack_1e0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_00426110(auStack_1a0,auStack_2a0,0);
  FUN_0042ab30(auStack_ea0,auStack_160,auStack_1a0);
  FUN_0042a790(auStack_e60,auStack_1a0,auStack_160);
  FUN_0042b9b0(auStack_e20,auStack_e0,0x13154);
  FUN_0042ab30(auStack_e20,&DAT_03ced4e0,auStack_e20);
  FUN_0042a790(auStack_de0,&local_120,&local_120);
  FUN_0042b500(&local_a0,&local_120,auStack_1e0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_00426110(auStack_1a0,auStack_2a0,0);
  FUN_0042ab30(auStack_da0,auStack_160,auStack_1a0);
  FUN_0042a790(auStack_d60,auStack_1a0,auStack_160);
  FUN_0042b9b0(auStack_d20,auStack_e0,0x13154);
  FUN_0042ab30(auStack_d20,&DAT_03ced4e0,auStack_d20);
  FUN_0042a790(auStack_ce0,&local_120,&local_120);
  FUN_0042b500(&local_a0,&local_120,auStack_1e0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_00426110(auStack_1a0,auStack_2a0,0);
  FUN_0042ab30(auStack_ca0,auStack_160,auStack_1a0);
  FUN_0042a790(auStack_c60,auStack_1a0,auStack_160);
  FUN_0042b9b0(auStack_c20,auStack_e0,0x13154);
  FUN_0042ab30(auStack_c20,&DAT_03ced4e0,auStack_c20);
  FUN_0042a790(auStack_be0,&local_120,&local_120);
  FUN_0042b500(&local_a0,&local_120,auStack_1e0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_00426110(auStack_1a0,auStack_2a0,0);
  FUN_0042ab30(auStack_ba0,auStack_160,auStack_1a0);
  FUN_0042a790(auStack_b60,auStack_1a0,auStack_160);
  FUN_0042b9b0(auStack_b20,auStack_e0,0x13154);
  FUN_0042ab30(auStack_b20,&DAT_03ced4e0,auStack_b20);
  FUN_0042a790(auStack_ae0,&local_120,&local_120);
  FUN_0042b500(&local_a0,&local_120,auStack_1e0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_00426110(auStack_1a0,auStack_2a0,0);
  FUN_0042ab30(auStack_aa0,auStack_160,auStack_1a0);
  FUN_0042a790(auStack_a60,auStack_1a0,auStack_160);
  FUN_0042b9b0(auStack_a20,auStack_e0,0x13154);
  FUN_0042ab30(auStack_a20,&DAT_03ced4e0,auStack_a20);
  FUN_0042a790(auStack_9e0,&local_120,&local_120);
  FUN_0042b500(&local_a0,&local_120,auStack_1e0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_00426110(auStack_1a0,auStack_2a0,0);
  FUN_0042ab30(auStack_9a0,auStack_160,auStack_1a0);
  FUN_0042a790(auStack_960,auStack_1a0,auStack_160);
  FUN_0042b9b0(auStack_920,auStack_e0,0x13154);
  FUN_0042ab30(auStack_920,&DAT_03ced4e0,auStack_920);
  FUN_0042a790(auStack_8e0,&local_120,&local_120);
  FUN_00453300(auStack_1a0,0x100);
  FUN_00453300(auStack_2a0,0x100);
  puVar4 = PTR_DAT_047cd2e0;
  if (local_630[0] < 0) {
    uVar18 = *(undefined8 *)(PTR_DAT_047cd2e0 + 0x20);
    uVar20 = *(undefined8 *)(PTR_DAT_047cd2e0 + 0x38);
    uVar19 = *(undefined8 *)(PTR_DAT_047cd2e0 + 0x30);
    param_1[5] = *(undefined8 *)(PTR_DAT_047cd2e0 + 0x28);
    param_1[4] = uVar18;
    param_1[7] = uVar20;
    param_1[6] = uVar19;
    uVar18 = *(undefined8 *)puVar4;
    uVar20 = *(undefined8 *)(puVar4 + 0x18);
    uVar19 = *(undefined8 *)(puVar4 + 0x10);
    param_1[1] = *(undefined8 *)(puVar4 + 8);
    *param_1 = uVar18;
    param_1[3] = uVar20;
    param_1[2] = uVar19;
    uVar19 = *(undefined8 *)(puVar4 + 0x48);
    uVar18 = *(undefined8 *)(puVar4 + 0x40);
    uVar21 = *(undefined8 *)(puVar4 + 0x58);
    uVar20 = *(undefined8 *)(puVar4 + 0x50);
    uVar22 = *(undefined8 *)(puVar4 + 0x60);
    uVar24 = *(undefined8 *)(puVar4 + 0x78);
    uVar23 = *(undefined8 *)(puVar4 + 0x70);
    param_1[0xd] = *(undefined8 *)(puVar4 + 0x68);
    param_1[0xc] = uVar22;
    param_1[0xf] = uVar24;
    param_1[0xe] = uVar23;
    param_1[9] = uVar19;
    param_1[8] = uVar18;
    param_1[0xb] = uVar21;
    param_1[10] = uVar20;
    uVar19 = *(undefined8 *)(puVar4 + 0x88);
    uVar18 = *(undefined8 *)(puVar4 + 0x80);
    uVar21 = *(undefined8 *)(puVar4 + 0x98);
    uVar20 = *(undefined8 *)(puVar4 + 0x90);
    uVar22 = *(undefined8 *)(puVar4 + 0xa0);
    uVar24 = *(undefined8 *)(puVar4 + 0xb8);
    uVar23 = *(undefined8 *)(puVar4 + 0xb0);
    param_1[0x15] = *(undefined8 *)(puVar4 + 0xa8);
    param_1[0x14] = uVar22;
    param_1[0x17] = uVar24;
    param_1[0x16] = uVar23;
    param_1[0x11] = uVar19;
    param_1[0x10] = uVar18;
    param_1[0x13] = uVar21;
    param_1[0x12] = uVar20;
    uVar19 = *(undefined8 *)(puVar4 + 200);
    uVar18 = *(undefined8 *)(puVar4 + 0xc0);
    uVar21 = *(undefined8 *)(puVar4 + 0xd8);
    uVar20 = *(undefined8 *)(puVar4 + 0xd0);
    uVar22 = *(undefined8 *)(puVar4 + 0xe0);
    uVar24 = *(undefined8 *)(puVar4 + 0xf8);
    uVar23 = *(undefined8 *)(puVar4 + 0xf0);
    param_1[0x1d] = *(undefined8 *)(puVar4 + 0xe8);
    param_1[0x1c] = uVar22;
    param_1[0x1f] = uVar24;
    param_1[0x1e] = uVar23;
    param_1[0x19] = uVar19;
    param_1[0x18] = uVar18;
    param_1[0x1b] = uVar21;
    param_1[0x1a] = uVar20;
  }
  else {
    if (local_898[0] < local_630[0]) {
      lVar8 = ((long)((ulong)(uint)local_630[1] << 0x20) >> 0x21) * 0x100;
      FUN_0042a790(&local_a0,auStack_1060 + lVar8,auStack_10a0 + lVar8);
      puVar10 = param_1 + 8;
      FUN_0042ab30(puVar10,auStack_1060 + lVar8,auStack_10a0 + lVar8);
      FUN_0042b500(param_1 + 0x18,puVar10,&local_a0);
      puVar2 = auStack_fe0 + lVar8;
      FUN_0042b500(param_1,puVar2,puVar10);
      FUN_0042b500(puVar10,puVar2,&local_a0);
      FUN_0042bb00(param_1 + 0x10,puVar2);
      uVar9 = 0;
      uVar7 = 1;
    }
    else if (local_630[0] == local_898[0]) {
      lVar8 = ((long)((ulong)(uint)local_630[1] << 0x20) >> 0x21) * 0x100;
      FUN_0042a790(&local_a0,auStack_1060 + lVar8,auStack_10a0 + lVar8);
      puVar10 = param_1 + 8;
      FUN_0042ab30(puVar10,auStack_1060 + lVar8,auStack_10a0 + lVar8);
      FUN_0042b500(param_1 + 0x18,puVar10,&local_a0);
      puVar2 = auStack_fe0 + lVar8;
      FUN_0042b500(param_1,puVar2,puVar10);
      FUN_0042b500(puVar10,puVar2,&local_a0);
      FUN_0042bb00(param_1 + 0x10,puVar2);
      FUN_00426110(param_1,*(long *)PTR_PTR_047cd2e8 + (long)(local_898[1] >> 1) * 0xc0,local_630[0]
                  );
      uVar7 = 1;
      uVar9 = 1;
    }
    else {
      lVar8 = *(long *)PTR_PTR_047cd2e8 + (long)(local_898[1] >> 1) * 0xc0;
      FUN_0042a790(param_1 + 8,lVar8 + 0x40,lVar8);
      FUN_0042ab30(param_1,lVar8 + 0x40,lVar8);
      FUN_0042b500(param_1 + 0x18,param_1 + 8,param_1);
      uVar20 = _UNK_03ced598;
      uVar19 = _DAT_03ced590;
      uVar18 = _DAT_03ced580;
      uVar7 = 0;
      param_1[0x15] = _UNK_03ced588;
      param_1[0x14] = uVar18;
      param_1[0x17] = uVar20;
      param_1[0x16] = uVar19;
      uVar20 = _UNK_03ced578;
      uVar19 = _DAT_03ced570;
      uVar18 = _DAT_03ced560;
      uVar9 = 1;
      param_1[0x11] = _UNK_03ced568;
      param_1[0x10] = uVar18;
      param_1[0x13] = uVar20;
      param_1[0x12] = uVar19;
      local_630[0] = local_898[0];
    }
    if (0 < local_630[0]) {
      puVar10 = param_1 + 0x10;
      iVar5 = local_630[0];
      do {
        iVar16 = iVar5 + -1;
        iVar17 = *(int *)((long)local_630 + (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3));
        iVar3 = *(int *)((long)local_898 + (-(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3));
        FUN_00424690(param_1,param_1,iVar16 != 0 && (iVar16 != iVar17 && iVar16 != iVar3));
        if (iVar16 == iVar17) {
          iVar17 = (int)uVar7;
          uVar11 = *(uint *)((long)auStack_628 + (long)iVar17 * 8 + -4);
          if ((int)uVar11 < 1) {
            lVar8 = ((long)((ulong)-uVar11 << 0x20) >> 0x21) * 0x100;
            FUN_0042b500(&local_a0,puVar10,auStack_fe0 + lVar8);
            param_1[0x15] = uStack_78;
            param_1[0x14] = local_80;
            param_1[0x17] = uStack_68;
            param_1[0x16] = local_70;
            param_1[0x11] = uStack_98;
            *puVar10 = local_a0;
            param_1[0x13] = uStack_88;
            param_1[0x12] = local_90;
            FUN_00428c40(param_1,auStack_10a0 + lVar8,iVar16 != 0 && iVar16 != iVar3);
            uVar7 = (ulong)(iVar17 + 1);
          }
          else {
            lVar8 = ((ulong)uVar11 & 0xfffffffe) * 0x80;
            FUN_0042b500(&local_a0,puVar10,auStack_fe0 + lVar8);
            param_1[0x15] = uStack_78;
            param_1[0x14] = local_80;
            param_1[0x17] = uStack_68;
            param_1[0x16] = local_70;
            param_1[0x11] = uStack_98;
            *puVar10 = local_a0;
            param_1[0x13] = uStack_88;
            param_1[0x12] = local_90;
            FUN_00426110(param_1,auStack_10a0 + lVar8,iVar16 != 0 && iVar16 != iVar3);
            uVar7 = (ulong)(iVar17 + 1);
          }
        }
        if (iVar16 == iVar3) {
          uVar11 = *(uint *)((long)auStack_890 + (long)(int)uVar9 * 8 + -4);
          if ((int)uVar11 < 1) {
            FUN_00428c40(param_1,*(long *)PTR_PTR_047cd2e8 + (long)((int)-uVar11 >> 1) * 0xc0,iVar16
                        );
          }
          else {
            FUN_00426110(param_1,*(long *)PTR_PTR_047cd2e8 + (ulong)(uVar11 >> 1) * 0xc0,iVar16);
          }
          uVar9 = (ulong)((int)uVar9 + 1);
        }
        bVar1 = 1 < iVar5;
        iVar5 = iVar16;
      } while (bVar1);
    }
    FUN_00453300(local_630,0x390);
    FUN_00453300(local_898,0x268);
    FUN_00453300(auStack_10a0,0x800);
  }
  return;
}


