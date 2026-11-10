/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e95bc8; name: FUN_02e95bc8
 */


void FUN_02e95bc8(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  undefined4 uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  int iVar20;
  float fVar21;
  int iVar23;
  float fVar24;
  int iVar25;
  undefined1 auVar22 [16];
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
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
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 local_e0 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar2 = *(ushort *)((long)param_1 + 0x1c);
  if ((ulong)uVar2 != 0) {
    lVar5 = param_2[1];
    plVar14 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
    lVar17 = *plVar14;
    lVar8 = 0;
    if (*param_1 != 0) {
      lVar8 = *param_1 + (long)param_1;
    }
    lVar1 = 0;
    if (lVar17 != 0) {
      lVar1 = lVar17 + (long)plVar14;
    }
    if ((*(uint *)(lVar1 + ((ulong)(uVar2 >> 3) & 0x1ffc)) >> (ulong)(uVar2 & 0x1f) & 1) != 0) {
      puVar9 = (undefined8 *)(lVar8 + (ulong)uVar2 * 0x20);
      iVar20 = -(uint)((float)param_3[2] <= *(float *)(puVar9 + 2));
      iVar23 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= *(float *)((long)puVar9 + 0x14));
      iVar25 = -(uint)((float)param_3[3] <= *(float *)(puVar9 + 3));
      iVar26 = -(uint)((float)*puVar9 <= (float)param_3[4]);
      iVar30 = -(uint)((float)((ulong)*puVar9 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
      iVar31 = -(uint)((float)puVar9[1] <= (float)param_3[5]);
      if (CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                   (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar20 >> 0x18) &
                   (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                   CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                            (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar20 >> 0x10) &
                            (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                            CONCAT11((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar23 >> 8) &
                                     (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar20 >> 8) &
                                     (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar25 >> 8),
                                     (byte)iVar30 & (byte)iVar23 & (byte)iVar26 & (byte)iVar20 &
                                     (byte)iVar31 & (byte)iVar25))) != 0) {
        auVar22 = NEON_fmov(0x3f800000,4);
LAB_02e95cc0:
        do {
          uVar2 = *(ushort *)((long)puVar9 + 0x1c);
          if ((ulong)uVar2 == 0) {
            lVar8 = *param_3;
            lVar17 = *(long *)(lVar8 + 8);
            uVar2 = *(ushort *)((long)puVar9 + 0x1e);
            puVar9 = (undefined8 *)(lVar17 + 0x48 + (ulong)uVar2 * 0x40 + *(long *)(lVar17 + 0x48));
            if ((*(byte *)((long)puVar9 + 0x1e) >> 6 & 1) != 0) {
              plVar19 = puVar9 + 6;
              plVar14 = (long *)(*(long *)(lVar8 + 0x10) + 0x28);
              plVar18 = *(long **)(lVar8 + 0x70);
              lVar1 = 0;
              if (*plVar19 != 0) {
                lVar1 = *plVar19 + (long)plVar19;
              }
              local_78 = **(undefined8 **)(lVar8 + 0x58);
              uStack_70 = (*(undefined8 **)(lVar8 + 0x58))[1];
              uVar13 = *(undefined8 *)((long)plVar14 + (ulong)uVar2 * 8 + *plVar14);
              puVar10 = *(undefined8 **)(lVar8 + 0x60);
              uVar15 = puVar10[3];
              iVar20 = (int)(uVar15 >> 0x20) + (uint)*(byte *)(lVar17 + 0x1c);
              uVar15 = (ulong)((uVar2 + 1 << (ulong)(-iVar20 & 0x1f)) - 1) |
                       uVar15 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar15 >> 0x20) * 4);
              plVar14 = (long *)**(long **)(lVar8 + 0x48);
              uVar16 = (undefined4)uVar15;
              if (plVar14 != (long *)0x0) {
                lVar7 = 0;
                if (*plVar19 != 0) {
                  lVar7 = *plVar19 + (long)plVar19;
                }
                (**(code **)(*plVar14 + 0x40))
                          (plVar14,*(undefined2 *)((long)puVar9 + 0x2c),6,*puVar10,puVar10[1],lVar17
                           ,uVar15,lVar7,&local_78);
                lVar7 = *(long *)(lVar8 + 0x48);
                if (*(long *)(lVar7 + 8) != 0) {
                  local_e0[0] = *(undefined2 *)(lVar7 + 0x10);
                  uVar11 = *(undefined8 *)(lVar7 + 0x14);
                  *(undefined4 *)((undefined8 *)((ulong)local_e0 | 4) + 1) =
                       *(undefined4 *)(lVar7 + 0x1c);
                  *(undefined8 *)((ulong)local_e0 | 4) = uVar11;
                  puVar10 = *(undefined8 **)(lVar8 + 0x50);
                  local_d0 = *puVar10;
                  local_c8 = puVar10[1];
                  local_c0 = puVar10[2];
                  local_b8 = *(undefined4 *)(puVar10 + 3);
                  local_140 = CONCAT62(local_140._2_6_,(undefined2)local_78);
                  uVar11 = *(undefined8 *)((ulong)&local_78 | 4);
                  local_b0 = 0;
                  *(undefined4 *)((undefined8 *)((ulong)&local_140 | 4) + 1) =
                       *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
                  *(undefined8 *)((ulong)&local_140 | 4) = uVar11;
                  local_130 = **(long **)(lVar8 + 0x60);
                  local_128 = (*(long **)(lVar8 + 0x60))[1];
                  local_118 = CONCAT44(local_118._4_4_,uVar16);
                  local_110 = 0;
                  if (*plVar19 != 0) {
                    local_110 = *plVar19 + (long)plVar19;
                  }
                  local_120 = lVar17;
                  uVar15 = (**(code **)(**(long **)(lVar7 + 8) + 0x40))
                                     (*(long **)(lVar7 + 8),6,1,local_e0,&local_140);
                  if ((uVar15 & 1) == 0) goto LAB_02e96374;
                }
              }
              if (*(char *)(lVar1 + 0x19) == '\x03') {
                memcpy(local_e0,*(void **)(lVar8 + 0x48),0x60);
                bVar12 = *(byte *)((long)puVar9 + 0x1e);
                if ((bVar12 >> 3 & 1) == 0) {
                  local_90 = *(float *)(puVar9 + 2);
                  fStack_8c = *(float *)((long)puVar9 + 0x14);
                  fStack_88 = *(float *)(puVar9 + 3);
                  if ((bVar12 >> 2 & 1) == 0) {
                    local_a0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x20) >> 0x20) -
                                        fStack_8c,(float)*(undefined8 *)(lVar8 + 0x20) - local_90);
                    uStack_98 = CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x28) >> 0x20) - 0.0
                                         ,(float)*(undefined8 *)(lVar8 + 0x28) - fStack_88);
                    local_90 = (float)*(undefined8 *)(lVar8 + 0x30) - local_90;
                    fStack_8c = (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20) - fStack_8c;
                    fStack_88 = (float)*(undefined8 *)(lVar8 + 0x38) - fStack_88;
                    fStack_84 = (float)((ulong)*(undefined8 *)(lVar8 + 0x38) >> 0x20) - 0.0;
                  }
                  else {
                    fVar21 = (float)*puVar9;
                    fVar24 = (float)((ulong)*puVar9 >> 0x20);
                    fVar33 = fVar24 + fVar24;
                    fVar28 = (float)puVar9[1];
                    fVar34 = fVar28 + fVar28;
                    fVar32 = (float)*(undefined8 *)(lVar8 + 0x20);
                    fVar50 = (float)*(undefined8 *)(lVar8 + 0x30);
                    fVar45 = (float)((ulong)*(undefined8 *)(lVar8 + 0x20) >> 0x20);
                    fVar53 = (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20);
                    fVar46 = (float)*(undefined8 *)(lVar8 + 0x28);
                    fVar38 = (float)*(undefined8 *)(lVar8 + 0x38);
                    fVar39 = (fVar21 + fVar21) * fVar21;
                    fVar29 = (float)((ulong)puVar9[1] >> 0x20);
                    fVar27 = (fVar21 + fVar21) * fVar29;
                    fVar44 = 1.0 - fVar28 * fVar34;
                    fVar52 = fVar33 * fVar21 + fVar34 * fVar29;
                    fVar49 = fVar33 * fVar21 - fVar34 * fVar29;
                    fVar35 = (fVar50 - fVar32) * 0.5;
                    fVar36 = (fVar53 - fVar45) * 0.5;
                    fVar37 = (fVar38 - fVar46) * 0.5;
                    local_90 = (fVar32 + fVar50) * 0.5 - local_90;
                    fStack_8c = (fVar45 + fVar53) * 0.5 - fStack_8c;
                    fStack_88 = (fVar46 + fVar38) * 0.5 - fStack_88;
                    fVar53 = fVar44 - fVar33 * fVar24;
                    fVar44 = fVar44 - fVar39;
                    fVar50 = fVar34 * fVar21 - fVar33 * fVar29;
                    fVar45 = fVar34 * fVar24 + fVar27;
                    fVar27 = fVar34 * fVar24 - fVar27;
                    fVar46 = fVar34 * fVar21 + fVar33 * fVar29;
                    fVar28 = (1.0 - fVar39) - fVar33 * fVar24;
                    fVar29 = ABS(fVar50 * fVar37) + ABS(fVar53 * fVar35) + ABS(fVar52 * fVar36);
                    fVar33 = ABS(fVar45 * fVar37) + ABS(fVar49 * fVar35) + ABS(fVar44 * fVar36);
                    fVar34 = ABS(fVar28 * fVar37) + ABS(fVar46 * fVar35) + ABS(fVar27 * fVar36);
                    fVar32 = ABS(fVar37 * 0.0) + ABS(fVar27 * fVar35) + ABS(fVar36 * 0.0);
                    fVar21 = fVar50 * fStack_88 + fVar53 * local_90 + fVar52 * fStack_8c;
                    fVar24 = fVar45 * fStack_88 + fVar49 * local_90 + fVar44 * fStack_8c;
                    fVar28 = fVar28 * fStack_88 + fVar46 * local_90 + fVar27 * fStack_8c;
                    fStack_84 = fStack_88 * 0.0 + fVar27 * local_90 + fStack_8c * 0.0;
                    local_a0 = CONCAT44(fVar24 - fVar33,fVar21 - fVar29);
                    uStack_98 = CONCAT44(fStack_84 - fVar32,fVar28 - fVar34);
                    local_90 = fVar21 + fVar29;
                    fStack_8c = fVar24 + fVar33;
                    fStack_88 = fVar28 + fVar34;
                    fStack_84 = fStack_84 + fVar32;
                  }
                }
                else {
                  fVar21 = *(float *)(lVar8 + 0x20);
                  fVar24 = *(float *)(lVar8 + 0x24);
                  local_a0 = *(undefined8 *)(lVar8 + 0x20);
                  fVar28 = *(float *)(lVar8 + 0x28);
                  uStack_98 = *(undefined8 *)(lVar8 + 0x28);
                  fVar27 = (float)*(undefined8 *)(lVar8 + 0x30);
                  iVar23 = -(uint)(fVar27 < fVar21);
                  fVar29 = (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20);
                  iVar25 = -(uint)(fVar29 < fVar24);
                  fVar33 = (float)*(undefined8 *)(lVar8 + 0x38);
                  iVar26 = -(uint)(fVar33 < fVar28);
                  if (CONCAT13((byte)((uint)iVar25 >> 0x18) | (byte)((uint)iVar23 >> 0x18) |
                               (byte)((uint)iVar26 >> 0x18),
                               CONCAT12((byte)((uint)iVar25 >> 0x10) | (byte)((uint)iVar23 >> 0x10)
                                        | (byte)((uint)iVar26 >> 0x10),
                                        CONCAT11((byte)((uint)iVar25 >> 8) |
                                                 (byte)((uint)iVar23 >> 8) |
                                                 (byte)((uint)iVar26 >> 8),
                                                 (byte)iVar25 | (byte)iVar23 | (byte)iVar26))) == 0)
                  {
                    fVar45 = auVar22._0_4_ / (float)puVar9[4];
                    fVar36 = auVar22._4_4_ / (float)((ulong)puVar9[4] >> 0x20);
                    fVar46 = auVar22._8_4_ / (float)puVar9[5];
                    fVar37 = auVar22._12_4_ / 1.0;
                    fVar34 = (float)*puVar9;
                    fVar35 = (float)((ulong)*puVar9 >> 0x20);
                    fVar49 = fVar35 + fVar35;
                    fVar50 = (float)puVar9[1];
                    fVar52 = fVar50 + fVar50;
                    fVar40 = (fVar34 + fVar34) * fVar34;
                    fVar38 = (float)((ulong)puVar9[1] >> 0x20);
                    fVar32 = (fVar34 + fVar34) * fVar38;
                    fVar47 = 1.0 - fVar50 * fVar52;
                    fVar51 = fVar52 * fVar35 - fVar32;
                    fVar48 = *(float *)(puVar9 + 3);
                    fVar50 = fVar45 * (fVar47 - fVar49 * fVar35);
                    fVar39 = fVar36 * (fVar49 * fVar34 - fVar52 * fVar38);
                    fVar53 = fVar46 * (fVar52 * fVar34 + fVar49 * fVar38);
                    fVar44 = fVar37 * fVar51;
                    fVar41 = fVar45 * (fVar49 * fVar34 + fVar52 * fVar38);
                    fVar42 = fVar36 * (fVar47 - fVar40);
                    fVar51 = fVar46 * fVar51;
                    fVar43 = fVar37 * 0.0;
                    fVar45 = fVar45 * (fVar52 * fVar34 - fVar49 * fVar38);
                    fVar36 = fVar36 * (fVar52 * fVar35 + fVar32);
                    fVar46 = fVar46 * ((1.0 - fVar40) - fVar49 * fVar35);
                    fVar37 = fVar37 * 0.0;
                    fVar38 = (float)puVar9[2];
                    fVar52 = (float)((ulong)puVar9[2] >> 0x20);
                    fVar34 = (fVar27 - fVar21) * 0.5;
                    fVar32 = (fVar29 - fVar24) * 0.5;
                    fVar35 = (fVar33 - fVar28) * 0.5;
                    fVar49 = (fVar21 + fVar27) * 0.5;
                    fVar40 = (fVar24 + fVar29) * 0.5;
                    fVar47 = (fVar28 + fVar33) * 0.5;
                    fVar21 = ABS(fVar45 * fVar35) + ABS(fVar50 * fVar34) + ABS(fVar41 * fVar32);
                    fVar24 = ABS(fVar36 * fVar35) + ABS(fVar39 * fVar34) + ABS(fVar42 * fVar32);
                    fVar28 = ABS(fVar46 * fVar35) + ABS(fVar53 * fVar34) + ABS(fVar51 * fVar32);
                    fVar27 = ABS(fVar37 * fVar35) + ABS(fVar44 * fVar34) + ABS(fVar43 * fVar32);
                    fVar29 = fVar45 * fVar47 + fVar50 * fVar49 + fVar41 * fVar40 +
                             -(fVar45 * fVar48 + fVar50 * fVar38 + fVar41 * fVar52);
                    fVar33 = fVar36 * fVar47 + fVar39 * fVar49 + fVar42 * fVar40 +
                             -(fVar36 * fVar48 + fVar39 * fVar38 + fVar42 * fVar52);
                    fVar34 = fVar46 * fVar47 + fVar53 * fVar49 + fVar51 * fVar40 +
                             -(fVar46 * fVar48 + fVar53 * fVar38 + fVar51 * fVar52);
                    fVar32 = fVar37 * fVar47 + fVar44 * fVar49 + fVar43 * fVar40 +
                             fVar37 * fVar48 + fVar44 * fVar38 + fVar43 * fVar52;
                    local_90 = fVar21 + fVar29;
                    fStack_8c = fVar24 + fVar33;
                    fStack_88 = fVar28 + fVar34;
                    fStack_84 = fVar27 + fVar32;
                    local_a0 = CONCAT44(fVar33 - fVar24,fVar29 - fVar21);
                    uStack_98 = CONCAT44(fVar32 - fVar27,fVar34 - fVar28);
                  }
                  else {
                    local_90 = *(float *)(lVar8 + 0x30);
                    fStack_8c = *(float *)(lVar8 + 0x34);
                    fStack_88 = *(float *)(lVar8 + 0x38);
                    fStack_84 = *(float *)(lVar8 + 0x3c);
                  }
                }
                puVar9 = *(undefined8 **)(lVar8 + 0x60);
                uVar15 = (ulong)local_110 >> 8;
                local_140 = *puVar9;
                uStack_138 = puVar9[1];
                local_120 = puVar9[4];
                uStack_f8 = puVar9[9];
                local_100 = puVar9[8];
                uStack_f0 = puVar9[10];
                uStack_e8 = puVar9[0xb];
                auVar4._8_4_ = 0xdf7ffff0;
                auVar4._0_8_ = 0xdf7ffff0df7ffff0;
                auVar4._12_4_ = 0xdf7ffff0;
                uStack_108 = *(undefined4 *)(puVar9 + 7);
                local_110 = CONCAT44(*(undefined4 *)((long)puVar9 + 0x34),
                                     (int)CONCAT71((int7)uVar15,*(undefined1 *)(puVar9 + 6)));
                local_128 = CONCAT44(iVar20,uVar16);
                uStack_158 = auVar4._8_8_;
                local_160 = 0xdf7ffff0df7ffff0;
                uStack_148 = 0x5f7ffff05f7ffff0;
                uStack_150 = 0x5f7ffff05f7ffff0;
                local_130 = lVar1;
                local_118 = uVar13;
                (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 +
                            0xe0))(lVar1,*(undefined8 *)(lVar8 + 0x40),local_e0,
                                   *(undefined8 *)(lVar8 + 0x50),&local_78,&local_140,plVar18,
                                   &local_160);
              }
              else {
                iVar20 = (int)plVar18[1];
                lVar8 = (long)iVar20;
                if ((int)(*(uint *)((long)plVar18 + 0xc) & 0x7fffffff) <= iVar20) {
                  FUN_02e931c8(plVar18,PTR_PTR_047d1a50,lVar8 + 1);
                  iVar20 = (int)plVar18[1];
                }
                *(undefined4 *)(*plVar18 + (long)iVar20 * 4) = uVar16;
                *(int *)(plVar18 + 1) = (int)(lVar8 + 1);
              }
            }
            goto LAB_02e96374;
          }
          uVar3 = *(ushort *)((long)puVar9 + 0x1e);
          lVar8 = 0;
          if (*param_1 != 0) {
            lVar8 = *param_1 + (long)param_1;
          }
          puVar10 = (undefined8 *)(lVar8 + (ulong)uVar3 * 0x20);
          puVar9 = (undefined8 *)(lVar8 + (ulong)uVar2 * 0x20);
          auVar4 = *(undefined1 (*) [16])(puVar10 + 2);
          plVar14 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
          lVar17 = *plVar14;
          lVar8 = 0;
          if (lVar17 != 0) {
            lVar8 = lVar17 + (long)plVar14;
          }
          if ((*(uint *)(lVar8 + ((ulong)(uVar2 >> 3) & 0x1ffc)) >> (ulong)(uVar2 & 0x1f) & 1) == 0)
          {
            bVar6 = false;
          }
          else {
            iVar20 = -(uint)((float)param_3[2] <= (float)puVar9[2]);
            iVar23 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)puVar9[2] >> 0x20)
                            );
            iVar25 = -(uint)((float)param_3[3] <= (float)puVar9[3]);
            iVar26 = -(uint)((float)*puVar9 <= (float)param_3[4]);
            iVar30 = -(uint)((float)((ulong)*puVar9 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
            iVar31 = -(uint)((float)puVar9[1] <= (float)param_3[5]);
            bVar6 = CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                             (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar20 >> 0x18) &
                             (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                             CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                                      (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar20 >> 0x10) &
                                      (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                      CONCAT11((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar23 >> 8)
                                               & (byte)((uint)iVar26 >> 8) &
                                                 (byte)((uint)iVar20 >> 8) &
                                               (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar25 >> 8)
                                               ,(byte)iVar30 & (byte)iVar23 &
                                                (byte)iVar26 & (byte)iVar20 &
                                                (byte)iVar31 & (byte)iVar25))) != 0;
          }
          if ((*(uint *)(lVar8 + ((ulong)(uVar3 >> 3) & 0x1ffc)) >> (ulong)(uVar3 & 0x1f) & 1) == 0)
          {
LAB_02e95fa4:
            bVar12 = 0;
          }
          else {
            iVar26 = -(uint)((float)*puVar10 <= (float)param_3[4]);
            iVar30 = -(uint)((float)((ulong)*puVar10 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20))
            ;
            iVar31 = -(uint)((float)puVar10[1] <= (float)param_3[5]);
            iVar20 = -(uint)((float)param_3[2] <= auVar4._0_4_);
            iVar23 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= auVar4._4_4_);
            iVar25 = -(uint)((float)param_3[3] <= auVar4._8_4_);
            if (CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                         (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar20 >> 0x18) &
                         (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                         CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                                  (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar20 >> 0x10) &
                                  (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                  CONCAT11((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar23 >> 8) &
                                           (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar20 >> 8) &
                                           (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar25 >> 8),
                                           (byte)iVar30 & (byte)iVar23 & (byte)iVar26 & (byte)iVar20
                                           & (byte)iVar31 & (byte)iVar25))) == 0) goto LAB_02e95fa4;
            bVar12 = 2;
          }
          bVar12 = bVar12 | bVar6;
        } while (bVar12 == 1);
        if (bVar12 == 3) {
          iVar20 = (int)param_2[1];
          lVar8 = (long)iVar20;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar20) {
            FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar8 + 1);
            iVar20 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar8 + 1);
          *(ushort *)(*param_2 + (long)iVar20 * 2) = uVar3;
          goto LAB_02e95cc0;
        }
        puVar9 = puVar10;
        if (bVar12 == 2) goto LAB_02e95cc0;
LAB_02e96374:
        if ((int)lVar5 < (int)param_2[1]) {
          iVar20 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar20;
          lVar8 = 0;
          if (*param_1 != 0) {
            lVar8 = *param_1 + (long)param_1;
          }
          puVar9 = (undefined8 *)(lVar8 + (ulong)*(ushort *)(*param_2 + (long)iVar20 * 2) * 0x20);
          goto LAB_02e95cc0;
        }
      }
    }
  }
  return;
}


