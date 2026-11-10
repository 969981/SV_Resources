/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e99880; name: FUN_02e99880
 */


void FUN_02e99880(long *param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined4 uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined4 uVar20;
  long *plVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  int iVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int iVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_150;
  undefined8 local_148;
  long local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  ulong local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  float fStack_98;
  float fStack_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  ulong uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  
  uVar1 = *(ushort *)((long)param_1 + 0x1c);
  if ((ulong)uVar1 != 0) {
    lVar4 = param_2[1];
    plVar15 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
    lVar18 = *plVar15;
    lVar7 = 0;
    if (*param_1 != 0) {
      lVar7 = *param_1 + (long)param_1;
    }
    lVar17 = 0;
    if (lVar18 != 0) {
      lVar17 = lVar18 + (long)plVar15;
    }
    if ((*(uint *)(lVar17 + ((ulong)(uVar1 >> 3) & 0x1ffc)) >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
      puVar8 = (undefined8 *)(lVar7 + (ulong)uVar1 * 0x20);
      iVar22 = -(uint)((float)param_3[2] <= *(float *)(puVar8 + 2));
      iVar27 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= *(float *)((long)puVar8 + 0x14));
      iVar30 = -(uint)((float)param_3[3] <= *(float *)(puVar8 + 3));
      iVar31 = -(uint)((float)*puVar8 <= (float)param_3[4]);
      iVar35 = -(uint)((float)((ulong)*puVar8 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
      iVar36 = -(uint)((float)puVar8[1] <= (float)param_3[5]);
      if (CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                   (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar22 >> 0x18) &
                   (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar30 >> 0x18),
                   CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                            (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar22 >> 0x10) &
                            (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar30 >> 0x10),
                            CONCAT11((byte)((uint)iVar35 >> 8) & (byte)((uint)iVar27 >> 8) &
                                     (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar22 >> 8) &
                                     (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar30 >> 8),
                                     (byte)iVar35 & (byte)iVar27 & (byte)iVar31 & (byte)iVar22 &
                                     (byte)iVar36 & (byte)iVar30))) != 0) {
        auVar25 = NEON_fmov(0x3f800000,4);
        puVar13 = (ulong *)((ulong)&local_100 | 4);
        auVar26._8_4_ = 0xdf7ffff0;
        auVar26._0_8_ = 0xdf7ffff0df7ffff0;
        auVar26._12_4_ = 0xdf7ffff0;
LAB_02e99984:
        do {
          uVar1 = *(ushort *)((long)puVar8 + 0x1c);
          if ((ulong)uVar1 == 0) {
            lVar7 = *param_3;
            lVar18 = *(long *)(lVar7 + 8);
            uVar1 = *(ushort *)((long)puVar8 + 0x1e);
            puVar8 = (undefined8 *)(lVar18 + 0x48 + (ulong)uVar1 * 0x40 + *(long *)(lVar18 + 0x48));
            if ((*(byte *)((long)puVar8 + 0x1e) >> 6 & 1) != 0) {
              plVar21 = puVar8 + 6;
              plVar15 = (long *)(*(long *)(lVar7 + 0x10) + 0x28);
              plVar19 = *(long **)(lVar7 + 0x70);
              lVar17 = 0;
              if (*plVar21 != 0) {
                lVar17 = *plVar21 + (long)plVar21;
              }
              local_100 = **(undefined8 **)(lVar7 + 0x58);
              uStack_f8 = (*(undefined8 **)(lVar7 + 0x58))[1];
              uVar14 = *(undefined8 *)((long)plVar15 + (ulong)uVar1 * 8 + *plVar15);
              puVar9 = *(undefined8 **)(lVar7 + 0x60);
              uVar16 = puVar9[3];
              iVar22 = (int)(uVar16 >> 0x20) + (uint)*(byte *)(lVar18 + 0x1c);
              uVar16 = (ulong)((uVar1 + 1 << (ulong)(-iVar22 & 0x1f)) - 1) |
                       uVar16 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar16 >> 0x20) * 4);
              plVar15 = (long *)**(long **)(lVar7 + 0x48);
              uVar20 = (undefined4)uVar16;
              if (plVar15 != (long *)0x0) {
                lVar6 = 0;
                if (*plVar21 != 0) {
                  lVar6 = *plVar21 + (long)plVar21;
                }
                (**(code **)(*plVar15 + 0x40))
                          (plVar15,*(undefined2 *)((long)puVar8 + 0x2c),6,*puVar9,puVar9[1],lVar18,
                           uVar16,lVar6,&local_100);
                lVar6 = *(long *)(lVar7 + 0x48);
                if (*(long *)(lVar6 + 8) != 0) {
                  local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar6 + 0x10));
                  uVar10 = *(undefined8 *)(lVar6 + 0x14);
                  *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                       *(undefined4 *)(lVar6 + 0x1c);
                  *(undefined8 *)((ulong)&local_f0 | 4) = uVar10;
                  puVar9 = *(undefined8 **)(lVar7 + 0x50);
                  local_e0 = *puVar9;
                  local_d8 = puVar9[1];
                  local_d0 = puVar9[2];
                  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar9 + 3));
                  local_c0 = 0;
                  local_160 = CONCAT62(local_160._2_6_,(undefined2)local_100);
                  uVar16 = *puVar13;
                  *(int *)((ulong *)((ulong)&local_160 | 4) + 1) = (int)puVar13[1];
                  *(ulong *)((ulong)&local_160 | 4) = uVar16;
                  local_150 = **(long **)(lVar7 + 0x60);
                  local_148 = (*(long **)(lVar7 + 0x60))[1];
                  local_138 = CONCAT44(local_138._4_4_,uVar20);
                  local_130 = 0;
                  if (*plVar21 != 0) {
                    local_130 = *plVar21 + (long)plVar21;
                  }
                  local_140 = lVar18;
                  uVar16 = (**(code **)(**(long **)(lVar6 + 8) + 0x40))
                                     (*(long **)(lVar6 + 8),6,1,&local_f0,&local_160);
                  if ((uVar16 & 1) == 0) goto LAB_02e9a0e4;
                }
              }
              if (*(char *)(lVar17 + 0x19) == '\x03') {
                memcpy(&local_f0,*(void **)(lVar7 + 0x48),0x60);
                bVar11 = *(byte *)((long)puVar8 + 0x1e);
                if ((bVar11 >> 3 & 1) == 0) {
                  fVar23 = *(float *)(puVar8 + 2);
                  fVar28 = *(float *)((long)puVar8 + 0x14);
                  fStack_98 = *(float *)(puVar8 + 3);
                  if ((bVar11 >> 2 & 1) == 0) {
                    local_b0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20) -
                                        fVar28,(float)*(undefined8 *)(lVar7 + 0x20) - fVar23);
                    uStack_a8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x28) >> 0x20) - 0.0
                                         ,(float)*(undefined8 *)(lVar7 + 0x28) - fStack_98);
                    fStack_98 = (float)*(undefined8 *)(lVar7 + 0x38) - fStack_98;
                    fStack_94 = (float)((ulong)*(undefined8 *)(lVar7 + 0x38) >> 0x20) - 0.0;
                    local_a0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x30) >> 0x20) -
                                        fVar28,(float)*(undefined8 *)(lVar7 + 0x30) - fVar23);
                  }
                  else {
                    fVar24 = (float)*puVar8;
                    fVar29 = (float)((ulong)*puVar8 >> 0x20);
                    fVar38 = fVar29 + fVar29;
                    fVar33 = (float)puVar8[1];
                    fVar39 = fVar33 + fVar33;
                    fVar37 = (float)*(undefined8 *)(lVar7 + 0x20);
                    fVar52 = (float)*(undefined8 *)(lVar7 + 0x30);
                    fVar47 = (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20);
                    fVar55 = (float)((ulong)*(undefined8 *)(lVar7 + 0x30) >> 0x20);
                    fVar48 = (float)*(undefined8 *)(lVar7 + 0x28);
                    fVar44 = (float)*(undefined8 *)(lVar7 + 0x38);
                    fVar43 = (fVar24 + fVar24) * fVar24;
                    fVar34 = (float)((ulong)puVar8[1] >> 0x20);
                    fVar32 = (fVar24 + fVar24) * fVar34;
                    fVar46 = 1.0 - fVar33 * fVar39;
                    fVar54 = fVar38 * fVar24 + fVar39 * fVar34;
                    fVar51 = fVar38 * fVar24 - fVar39 * fVar34;
                    fVar40 = (fVar52 - fVar37) * 0.5;
                    fVar41 = (fVar55 - fVar47) * 0.5;
                    fVar42 = (fVar44 - fVar48) * 0.5;
                    fVar23 = (fVar37 + fVar52) * 0.5 - fVar23;
                    fVar28 = (fVar47 + fVar55) * 0.5 - fVar28;
                    fStack_98 = (fVar48 + fVar44) * 0.5 - fStack_98;
                    fVar55 = fVar46 - fVar38 * fVar29;
                    fVar46 = fVar46 - fVar43;
                    fVar52 = fVar39 * fVar24 - fVar38 * fVar34;
                    fVar47 = fVar39 * fVar29 + fVar32;
                    fVar32 = fVar39 * fVar29 - fVar32;
                    fVar48 = fVar39 * fVar24 + fVar38 * fVar34;
                    fVar33 = (1.0 - fVar43) - fVar38 * fVar29;
                    fVar34 = ABS(fVar52 * fVar42) + ABS(fVar55 * fVar40) + ABS(fVar54 * fVar41);
                    fVar38 = ABS(fVar47 * fVar42) + ABS(fVar51 * fVar40) + ABS(fVar46 * fVar41);
                    fVar39 = ABS(fVar33 * fVar42) + ABS(fVar48 * fVar40) + ABS(fVar32 * fVar41);
                    fVar37 = ABS(fVar42 * 0.0) + ABS(fVar32 * fVar40) + ABS(fVar41 * 0.0);
                    fVar24 = fVar52 * fStack_98 + fVar55 * fVar23 + fVar54 * fVar28;
                    fVar29 = fVar47 * fStack_98 + fVar51 * fVar23 + fVar46 * fVar28;
                    fVar33 = fVar33 * fStack_98 + fVar48 * fVar23 + fVar32 * fVar28;
                    fStack_94 = fStack_98 * 0.0 + fVar32 * fVar23 + fVar28 * 0.0;
                    local_b0 = CONCAT44(fVar29 - fVar38,fVar24 - fVar34);
                    uStack_a8 = CONCAT44(fStack_94 - fVar37,fVar33 - fVar39);
                    fStack_98 = fVar33 + fVar39;
                    fStack_94 = fStack_94 + fVar37;
                    local_a0 = CONCAT44(fVar29 + fVar38,fVar24 + fVar34);
                  }
                }
                else {
                  fVar23 = *(float *)(lVar7 + 0x20);
                  fVar28 = *(float *)(lVar7 + 0x24);
                  local_b0 = *(ulong *)(lVar7 + 0x20);
                  fVar24 = *(float *)(lVar7 + 0x28);
                  uStack_a8 = *(ulong *)(lVar7 + 0x28);
                  fVar29 = (float)*(undefined8 *)(lVar7 + 0x30);
                  iVar27 = -(uint)(fVar29 < fVar23);
                  fVar33 = (float)((ulong)*(undefined8 *)(lVar7 + 0x30) >> 0x20);
                  iVar30 = -(uint)(fVar33 < fVar28);
                  fVar32 = (float)*(undefined8 *)(lVar7 + 0x38);
                  iVar31 = -(uint)(fVar32 < fVar24);
                  if (CONCAT13((byte)((uint)iVar30 >> 0x18) | (byte)((uint)iVar27 >> 0x18) |
                               (byte)((uint)iVar31 >> 0x18),
                               CONCAT12((byte)((uint)iVar30 >> 0x10) | (byte)((uint)iVar27 >> 0x10)
                                        | (byte)((uint)iVar31 >> 0x10),
                                        CONCAT11((byte)((uint)iVar30 >> 8) |
                                                 (byte)((uint)iVar27 >> 8) |
                                                 (byte)((uint)iVar31 >> 8),
                                                 (byte)iVar30 | (byte)iVar27 | (byte)iVar31))) == 0)
                  {
                    fVar37 = auVar25._0_4_ / (float)puVar8[4];
                    fVar40 = auVar25._4_4_ / (float)((ulong)puVar8[4] >> 0x20);
                    fVar47 = auVar25._8_4_ / (float)puVar8[5];
                    fVar41 = auVar25._12_4_ / 1.0;
                    fVar34 = (float)*puVar8;
                    fVar39 = (float)((ulong)*puVar8 >> 0x20);
                    fVar44 = fVar39 + fVar39;
                    fVar48 = (float)puVar8[1];
                    fVar46 = fVar48 + fVar48;
                    fVar51 = (fVar34 + fVar34) * fVar34;
                    fVar43 = (float)((ulong)puVar8[1] >> 0x20);
                    fVar38 = (fVar34 + fVar34) * fVar43;
                    fVar49 = 1.0 - fVar48 * fVar46;
                    fVar53 = fVar46 * fVar39 - fVar38;
                    fVar50 = *(float *)(puVar8 + 3);
                    fVar48 = fVar37 * (fVar49 - fVar44 * fVar39);
                    fVar42 = fVar40 * (fVar44 * fVar34 - fVar46 * fVar43);
                    fVar52 = fVar47 * (fVar46 * fVar34 + fVar44 * fVar43);
                    fVar55 = fVar41 * fVar53;
                    fVar54 = fVar37 * (fVar44 * fVar34 + fVar46 * fVar43);
                    fVar49 = fVar40 * (fVar49 - fVar51);
                    fVar53 = fVar47 * fVar53;
                    fVar45 = fVar41 * 0.0;
                    fVar37 = fVar37 * (fVar46 * fVar34 - fVar44 * fVar43);
                    fVar40 = fVar40 * (fVar46 * fVar39 + fVar38);
                    fVar47 = fVar47 * ((1.0 - fVar51) - fVar44 * fVar39);
                    fVar41 = fVar41 * 0.0;
                    fVar43 = (float)puVar8[2];
                    fVar44 = (float)((ulong)puVar8[2] >> 0x20);
                    fVar34 = (fVar29 - fVar23) * 0.5;
                    fVar38 = (fVar33 - fVar28) * 0.5;
                    fVar39 = (fVar32 - fVar24) * 0.5;
                    fVar23 = (fVar23 + fVar29) * 0.5;
                    fVar28 = (fVar28 + fVar33) * 0.5;
                    fVar46 = (fVar24 + fVar32) * 0.5;
                    fVar24 = ABS(fVar37 * fVar39) + ABS(fVar48 * fVar34) + ABS(fVar54 * fVar38);
                    fVar29 = ABS(fVar40 * fVar39) + ABS(fVar42 * fVar34) + ABS(fVar49 * fVar38);
                    fVar33 = ABS(fVar47 * fVar39) + ABS(fVar52 * fVar34) + ABS(fVar53 * fVar38);
                    fVar32 = ABS(fVar41 * fVar39) + ABS(fVar55 * fVar34) + ABS(fVar45 * fVar38);
                    fVar34 = fVar37 * fVar46 + fVar48 * fVar23 + fVar54 * fVar28 +
                             -(fVar37 * fVar50 + fVar48 * fVar43 + fVar54 * fVar44);
                    fVar38 = fVar40 * fVar46 + fVar42 * fVar23 + fVar49 * fVar28 +
                             -(fVar40 * fVar50 + fVar42 * fVar43 + fVar49 * fVar44);
                    fVar39 = fVar47 * fVar46 + fVar52 * fVar23 + fVar53 * fVar28 +
                             -(fVar47 * fVar50 + fVar52 * fVar43 + fVar53 * fVar44);
                    fVar37 = fVar41 * fVar46 + fVar55 * fVar23 + fVar45 * fVar28 +
                             fVar41 * fVar50 + fVar55 * fVar43 + fVar45 * fVar44;
                    fVar23 = fVar24 + fVar34;
                    fVar28 = fVar29 + fVar38;
                    fStack_98 = fVar33 + fVar39;
                    fStack_94 = fVar32 + fVar37;
                    local_b0 = CONCAT44(fVar38 - fVar29,fVar34 - fVar24);
                    uStack_a8 = CONCAT44(fVar37 - fVar32,fVar39 - fVar33);
                  }
                  else {
                    fVar23 = *(float *)(lVar7 + 0x30);
                    fVar28 = *(float *)(lVar7 + 0x34);
                    fStack_98 = *(float *)(lVar7 + 0x38);
                    fStack_94 = *(float *)(lVar7 + 0x3c);
                  }
                  local_a0 = CONCAT44(fVar28,fVar23);
                }
                puVar8 = *(undefined8 **)(lVar7 + 0x60);
                uVar16 = (ulong)local_130 >> 8;
                local_160 = *puVar8;
                uStack_158 = puVar8[1];
                local_140 = puVar8[4];
                uStack_118 = puVar8[9];
                local_120 = puVar8[8];
                uStack_110 = puVar8[10];
                uStack_108 = puVar8[0xb];
                uStack_128 = *(undefined4 *)(puVar8 + 7);
                local_130 = CONCAT44(*(undefined4 *)((long)puVar8 + 0x34),
                                     (int)CONCAT71((int7)uVar16,*(undefined1 *)(puVar8 + 6)));
                local_148 = CONCAT44(iVar22,uVar20);
                local_180 = 0xdf7ffff0df7ffff0;
                uStack_168 = 0x5f7ffff05f7ffff0;
                uStack_170 = 0x5f7ffff05f7ffff0;
                uStack_178 = auVar26._8_8_;
                local_150 = lVar17;
                local_138 = uVar14;
                (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar17 + 0x18) * 0x200 +
                            0xe8))(lVar17,*(undefined8 *)(lVar7 + 0x40),&local_f0,
                                   *(undefined8 *)(lVar7 + 0x50),&local_100,&local_160,plVar19,
                                   &local_180);
              }
              else {
                lVar17 = **(long **)(lVar7 + 0x50);
                lVar18 = **(long **)(lVar7 + 0x60);
                uVar12 = 0xffffff;
                local_b8 = 0xffffffff;
                local_e0 = 0;
                local_d8 = 0;
                local_f0 = 0;
                uStack_e8 = 0;
                local_b4 = 0xf;
                local_8c = 0xf;
                local_d0 = local_d0 & 0xffffffff00000000;
                local_78 = 6;
                uStack_74 = 0;
                if (lVar17 == 0) {
                  local_c8 = 0xffffffffffffffff;
                }
                else {
                  local_c8 = *(undefined8 *)(lVar17 + 0xb0);
                  uVar12 = *(undefined4 *)(lVar17 + 0x50);
                }
                local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar12);
                local_b0 = CONCAT62((int6)(local_b0 >> 0x10),
                                    *(undefined2 *)(*(long *)(lVar7 + 0x48) + 0x10)) & 0xffffffff;
                uStack_a8 = *(ulong *)(*(long *)(lVar7 + 0x48) + 0x14) >> 0x20;
                if (lVar18 == 0) {
                  fStack_98 = 2.3509886e-38;
                  local_a0 = 0xffffffffffffffff;
                }
                else {
                  local_a0 = *(undefined8 *)(lVar18 + 0xb0);
                  fStack_98 = *(float *)(lVar18 + 0x50);
                }
                local_88 = (undefined2)local_100;
                local_84 = (undefined4)*puVar13;
                uStack_80 = *puVar13 >> 0x20;
                local_90 = uVar20;
                (**(code **)(*plVar19 + 0x28))(plVar19,&local_f0);
              }
            }
            goto LAB_02e9a0e4;
          }
          uVar2 = *(ushort *)((long)puVar8 + 0x1e);
          lVar7 = 0;
          if (*param_1 != 0) {
            lVar7 = *param_1 + (long)param_1;
          }
          puVar9 = (undefined8 *)(lVar7 + (ulong)uVar2 * 0x20);
          puVar8 = (undefined8 *)(lVar7 + (ulong)uVar1 * 0x20);
          auVar3 = *(undefined1 (*) [16])(puVar9 + 2);
          plVar15 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
          lVar18 = *plVar15;
          lVar7 = 0;
          if (lVar18 != 0) {
            lVar7 = lVar18 + (long)plVar15;
          }
          if ((*(uint *)(lVar7 + ((ulong)(uVar1 >> 3) & 0x1ffc)) >> (ulong)(uVar1 & 0x1f) & 1) == 0)
          {
            bVar5 = false;
          }
          else {
            iVar22 = -(uint)((float)param_3[2] <= (float)puVar8[2]);
            iVar27 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)puVar8[2] >> 0x20)
                            );
            iVar30 = -(uint)((float)param_3[3] <= (float)puVar8[3]);
            iVar31 = -(uint)((float)*puVar8 <= (float)param_3[4]);
            iVar35 = -(uint)((float)((ulong)*puVar8 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
            iVar36 = -(uint)((float)puVar8[1] <= (float)param_3[5]);
            bVar5 = CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                             (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar22 >> 0x18) &
                             (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar30 >> 0x18),
                             CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                                      (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar22 >> 0x10) &
                                      (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar30 >> 0x10),
                                      CONCAT11((byte)((uint)iVar35 >> 8) & (byte)((uint)iVar27 >> 8)
                                               & (byte)((uint)iVar31 >> 8) &
                                                 (byte)((uint)iVar22 >> 8) &
                                               (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar30 >> 8)
                                               ,(byte)iVar35 & (byte)iVar27 &
                                                (byte)iVar31 & (byte)iVar22 &
                                                (byte)iVar36 & (byte)iVar30))) != 0;
          }
          if ((*(uint *)(lVar7 + ((ulong)(uVar2 >> 3) & 0x1ffc)) >> (ulong)(uVar2 & 0x1f) & 1) == 0)
          {
LAB_02e99c64:
            bVar11 = 0;
          }
          else {
            iVar31 = -(uint)((float)*puVar9 <= (float)param_3[4]);
            iVar35 = -(uint)((float)((ulong)*puVar9 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
            iVar36 = -(uint)((float)puVar9[1] <= (float)param_3[5]);
            iVar22 = -(uint)((float)param_3[2] <= auVar3._0_4_);
            iVar27 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= auVar3._4_4_);
            iVar30 = -(uint)((float)param_3[3] <= auVar3._8_4_);
            if (CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                         (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar22 >> 0x18) &
                         (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar30 >> 0x18),
                         CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                                  (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar22 >> 0x10) &
                                  (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar30 >> 0x10),
                                  CONCAT11((byte)((uint)iVar35 >> 8) & (byte)((uint)iVar27 >> 8) &
                                           (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar22 >> 8) &
                                           (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar30 >> 8),
                                           (byte)iVar35 & (byte)iVar27 & (byte)iVar31 & (byte)iVar22
                                           & (byte)iVar36 & (byte)iVar30))) == 0) goto LAB_02e99c64;
            bVar11 = 2;
          }
          bVar11 = bVar11 | bVar5;
        } while (bVar11 == 1);
        if (bVar11 == 3) {
          iVar22 = (int)param_2[1];
          lVar7 = (long)iVar22;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar22) {
            FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar7 + 1);
            iVar22 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar7 + 1);
          *(ushort *)(*param_2 + (long)iVar22 * 2) = uVar2;
          goto LAB_02e99984;
        }
        puVar8 = puVar9;
        if (bVar11 == 2) goto LAB_02e99984;
LAB_02e9a0e4:
        if ((int)lVar4 < (int)param_2[1]) {
          iVar22 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar22;
          lVar7 = 0;
          if (*param_1 != 0) {
            lVar7 = *param_1 + (long)param_1;
          }
          puVar8 = (undefined8 *)(lVar7 + (ulong)*(ushort *)(*param_2 + (long)iVar22 * 2) * 0x20);
          goto LAB_02e99984;
        }
      }
    }
  }
  return;
}


