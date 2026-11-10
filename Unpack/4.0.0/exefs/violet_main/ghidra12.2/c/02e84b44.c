/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e84b44; name: FUN_02e84b44
 */


undefined8 FUN_02e84b44(long param_1,uint *param_2,long param_3,long *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float *pfVar5;
  uint uVar6;
  byte bVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  int iVar18;
  code *pcVar19;
  uint uVar20;
  byte *pbVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_220;
  ulong uStack_218;
  undefined8 local_210;
  ulong uStack_208;
  undefined8 local_200;
  ulong uStack_1f8;
  ulong local_1f0;
  float fStack_1e8;
  uint6 local_1b0;
  undefined2 uStack_1aa;
  ulong uStack_1a8;
  undefined8 local_1a0;
  ulong uStack_198;
  undefined8 local_190;
  ulong uStack_188;
  ulong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 uStack_160;
  long local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined *local_100;
  long *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 auStack_e0 [128];
  
  if (*(long *)(param_2 + 2) == 0) {
    pcVar19 = (code *)0x0;
  }
  else {
    pcVar19 = *(code **)(*(long *)PTR_DAT_047d19f0 +
                         (ulong)*(byte *)(*(long *)(param_2 + 2) + 0x18) * 0x40 + 0x4040);
  }
  plVar1 = (long *)(param_1 + 0x48);
  uVar6 = 0;
  do {
    uVar20 = uVar6;
    if ((*(uint *)(param_1 + 0x50) & ((int)*(uint *)(param_1 + 0x50) >> 0x1f ^ 0xffffffffU)) ==
        uVar20) goto LAB_02e850dc;
    lVar14 = *plVar1;
    uVar6 = uVar20 + 1;
  } while ((*(byte *)((long)plVar1 + (ulong)(uVar20 & 0xffff) * 0x40 + lVar14 + 0x1e) & 1) != 0);
  if (uVar20 + 1 != 0) {
    auVar24 = NEON_fmov(0x3f800000,4);
    puVar2 = PTR_DAT_047d1b28 + 0x10;
    puVar3 = PTR_DAT_047e3378 + 0x10;
    puVar4 = PTR_DAT_047d1b30 + 0x10;
    do {
      uVar6 = uVar20 & 0xffff;
      pfVar5 = (float *)((long)plVar1 + (ulong)uVar6 * 0x40 + lVar14);
      pbVar21 = (byte *)((long)pfVar5 + 0x1e);
      if (((*pbVar21 >> 6 & 1) != 0) &&
         ((*(long *)(param_2 + 2) == 0 ||
          (uVar13 = (*pcVar19)(*(long *)(param_2 + 2),(ulong)uVar6), (uVar13 & 1) != 0)))) {
        lVar17 = *(long *)(pfVar5 + 0xc);
        lVar14 = 0;
        if (lVar17 != 0) {
          lVar14 = lVar17 + (long)(pfVar5 + 0xc);
        }
        local_f8 = (long *)0x0;
        local_e8 = 0x70;
        local_100 = puVar2;
        puStack_f0 = auStack_e0;
        if (*(char *)(lVar14 + 0x18) == '\0' && (*pbVar21 & 8) != 0) {
          auVar25._0_12_ = SUB1612(*(undefined1 (*) [16])(pfVar5 + 8),0);
          auVar25._12_4_ = 0x3f800000;
          uStack_1a8 = auVar25._8_8_;
          _local_1b0 = SUB168(*(undefined1 (*) [16])(pfVar5 + 8),0);
          lVar17 = 0;
          if ((*(ushort *)(lVar14 + 0x1a) & 1) != 0) {
            lVar17 = lVar14;
          }
          lVar14 = FUN_02eeea3c(&local_100,lVar17,&local_1b0,(*pbVar21 >> 5 ^ 0xff) & 1);
          fVar9 = *pfVar5;
          fVar10 = pfVar5[1];
          fVar23 = pfVar5[2];
          fVar11 = pfVar5[3];
          local_1f0 = *(ulong *)(pfVar5 + 4);
          fStack_1e8 = (float)*(undefined8 *)(pfVar5 + 6);
          fVar27 = fVar10 + fVar10;
          fVar28 = fVar23 + fVar23;
          fVar29 = (fVar9 + fVar9) * fVar9;
          fVar22 = (fVar9 + fVar9) * fVar11;
          fVar31 = 1.0 - fVar23 * fVar28;
          fVar32 = fVar28 * fVar10 - fVar22;
          fVar30 = fVar28 * fVar9 + fVar27 * fVar11;
          uStack_208 = CONCAT44(fVar30,fVar28 * fVar10 + fVar22);
          uStack_1f8 = CONCAT44(fVar32,fVar28 * fVar9 - fVar27 * fVar11);
          fVar23 = (1.0 - fVar29) - fVar27 * fVar10;
          local_220 = CONCAT44(fVar32,fVar30);
          local_210 = CONCAT44(fVar31 - fVar29,fVar27 * fVar9 - fVar28 * fVar11);
          local_200 = CONCAT44(fVar27 * fVar9 + fVar28 * fVar11,fVar31 - fVar27 * fVar10);
        }
        else {
          fVar9 = *pfVar5;
          fVar10 = pfVar5[1];
          fVar23 = pfVar5[2];
          fVar11 = pfVar5[3];
          fVar27 = fVar10 + fVar10;
          fVar28 = fVar23 + fVar23;
          fVar29 = (fVar9 + fVar9) * fVar9;
          fVar22 = (fVar9 + fVar9) * fVar11;
          fVar31 = 1.0 - fVar23 * fVar28;
          fVar23 = pfVar5[8];
          fVar30 = pfVar5[9];
          local_200 = CONCAT44((fVar27 * fVar9 + fVar28 * fVar11) * fVar23,
                               (fVar31 - fVar27 * fVar10) * fVar23);
          uStack_1f8 = (ulong)(uint)((fVar28 * fVar9 - fVar27 * fVar11) * fVar23);
          uStack_208 = (ulong)(uint)((fVar28 * fVar10 + fVar22) * fVar30);
          local_210 = CONCAT44((fVar31 - fVar29) * fVar30,
                               (fVar27 * fVar9 - fVar28 * fVar11) * fVar30);
          fVar30 = pfVar5[10];
          fVar23 = ((1.0 - fVar29) - fVar27 * fVar10) * fVar30;
          local_1f0 = *(ulong *)(pfVar5 + 4);
          local_220 = CONCAT44((fVar28 * fVar10 - fVar22) * fVar30,
                               (fVar28 * fVar9 + fVar27 * fVar11) * fVar30);
          fStack_1e8 = pfVar5[6];
        }
        uStack_218 = (ulong)(uint)fVar23;
        local_128 = 1;
        local_120 = 0;
        uStack_130 = 0xffffffff;
        local_118 = -0x8000000000000000;
        local_110 = 0;
        local_108 = 0x8000000000000000;
        local_148 = 0;
        local_140 = -0x8000000000000000;
        local_1b0 = (uint6)*param_2;
        uStack_1a8 = 0;
        local_1a0 = CONCAT71(local_1a0._1_7_,1);
        local_168 = 0;
        local_170 = 0;
        local_180 = local_180 & 0xffffffff00000000;
        local_164 = 0;
        uStack_160 = 0xbf800000;
        local_190 = auVar24._0_8_;
        uStack_188 = auVar24._8_8_;
        local_138 = puVar3;
        (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar14 + 0x18) * 0x200 + 0x110))
                  (lVar14,&local_1b0,&local_138,&local_148);
        if (*(char *)((long)param_2 + 5) == '\0') {
          if (0 < (int)local_108) {
            lVar14 = (local_108 & 0xffffffff) + 1;
            lVar17 = (local_108 & 0xffffffff) * 0x10 + -4;
            do {
              lVar14 = lVar14 + -1;
              *(uint *)(local_110 + lVar17) = (uint)*(ushort *)(pfVar5 + 0xb);
              lVar17 = lVar17 + -0x10;
            } while (1 < lVar14);
          }
        }
        else if (0 < (int)local_108) {
          bVar7 = *(byte *)(param_1 + 0x1c);
          lVar14 = (local_108 & 0xffffffff) + 1;
          lVar17 = (local_108 & 0xffffffff) * 0x10 + -4;
          do {
            lVar14 = lVar14 + -1;
            *(uint *)(local_110 + lVar17) =
                 uVar6 << (ulong)(-(uint)bVar7 & 0x1f) | 0xffffffffU >> (ulong)(bVar7 & 0x1f);
            lVar17 = lVar17 + -0x10;
          } while (1 < lVar14);
        }
        uStack_1a8 = uStack_1f8 & 0xffffffff;
        uStack_198 = uStack_208 & 0xffffffff;
        uStack_188 = uStack_218;
        uStack_178 = CONCAT44(0x3f800000,fStack_1e8);
        _local_1b0 = local_200;
        local_1a0 = local_210;
        local_190 = local_220;
        local_180 = local_1f0;
        FUN_03241cc4(param_3,&local_138,&local_1b0);
        if ((char)param_2[1] != '\0') {
          lVar17 = param_4[1];
          lVar14 = (long)(int)lVar17 + (long)(int)local_140;
          iVar18 = (int)lVar14;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < iVar18) {
            FUN_02e8df28(param_4,PTR_PTR_047d1a50,lVar14);
          }
          lVar14 = *param_4;
          *(int *)(param_4 + 1) = iVar18;
          if (0 < (int)local_140) {
            lVar15 = 0;
            do {
              pfVar5 = (float *)(local_148 + lVar15 * 0x10);
              auVar26._0_8_ =
                   CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
                            pfVar5[1] * (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20),
                            (float)*(undefined8 *)(param_2 + 0x10) +
                            *pfVar5 * (float)*(undefined8 *)(param_2 + 8));
              auVar26._8_4_ =
                   (float)*(undefined8 *)(param_2 + 0x12) +
                   pfVar5[2] * (float)*(undefined8 *)(param_2 + 10);
              auVar26._12_4_ =
                   (float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) +
                   pfVar5[3] * (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
              puVar8 = (undefined8 *)(lVar14 + (long)(int)lVar17 * 0x10 + lVar15 * 0x10);
              puVar8[1] = auVar26._8_8_;
              *puVar8 = auVar26._0_8_;
              lVar15 = lVar15 + 1;
            } while (lVar15 < (int)local_140);
          }
        }
        lVar14 = local_140;
        uVar13 = (ulong)local_140._4_4_;
        local_140 = (ulong)local_140._4_4_ << 0x20;
        if ((-1 < lVar14) && (local_148 != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_148,uVar13 << 4);
        }
        uVar12 = local_108;
        uVar13 = local_108 >> 0x20;
        local_108 = uVar13 << 0x20;
        local_138 = PTR_DAT_047e3378 + 0x10;
        if ((-1 < (long)uVar12) && (local_110 != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_110,uVar13 << 4);
        }
        lVar14 = local_118;
        local_108 = CONCAT44(0x80000000,(int)local_108);
        uVar13 = (ulong)local_118._4_4_;
        local_110 = 0;
        local_118 = (ulong)local_118._4_4_ << 0x20;
        if ((-1 < lVar14) && (local_120 != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_120,uVar13 << 4);
        }
        local_100 = puVar4;
        if (local_f8 != (long *)0x0) {
          (**(code **)(*local_f8 + 8))();
        }
      }
      uVar6 = uVar20 + 1;
      do {
        uVar20 = uVar6;
        if (*(int *)(param_1 + 0x50) <= (int)uVar20) goto LAB_02e850dc;
        lVar14 = *plVar1;
        uVar6 = uVar20 + 1;
      } while ((*(byte *)((long)plVar1 + (ulong)(uVar20 & 0xffff) * 0x40 + lVar14 + 0x1e) & 1) != 0)
      ;
    } while (uVar20 + 1 != 0);
  }
LAB_02e850dc:
  uVar16 = 0x80040200;
  if (*(int *)(param_3 + 0x30) != 0) {
    uVar16 = 0;
  }
  return uVar16;
}


