/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e97588; name: FUN_02e97588
 */


void FUN_02e97588(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  ulong *puVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined4 uVar17;
  long *plVar18;
  long lVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  int iVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  undefined1 auVar23 [16];
  int iVar28;
  int iVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
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
  float fVar56;
  float fVar57;
  float fVar58;
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
  
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar5 = 0;
    if (*param_1 != 0) {
      lVar5 = *param_1 + (long)param_1;
    }
    puVar11 = (undefined8 *)(lVar5 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    iVar28 = -(uint)((float)*puVar11 <= (float)param_3[4]);
    iVar34 = -(uint)((float)((ulong)*puVar11 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar37 = -(uint)((float)puVar11[1] <= (float)param_3[5]);
    iVar20 = -(uint)((float)param_3[2] <= *(float *)(puVar11 + 2));
    iVar24 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= *(float *)((long)puVar11 + 0x14));
    iVar27 = -(uint)((float)param_3[3] <= *(float *)(puVar11 + 3));
    if (CONCAT13((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                 (byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar20 >> 0x18) &
                 (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                 CONCAT12((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                          (byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar20 >> 0x10) &
                          (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar27 >> 0x10),
                          CONCAT11((byte)((uint)iVar34 >> 8) & (byte)((uint)iVar24 >> 8) &
                                   (byte)((uint)iVar28 >> 8) & (byte)((uint)iVar20 >> 8) &
                                   (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar27 >> 8),
                                   (byte)iVar34 & (byte)iVar24 & (byte)iVar28 & (byte)iVar20 &
                                   (byte)iVar37 & (byte)iVar27))) != 0) {
      lVar5 = param_2[1];
      puVar13 = (ulong *)((ulong)&local_100 | 4);
      auVar23 = NEON_fmov(0x3f800000,4);
LAB_02e9765c:
      if ((ulong)*(ushort *)((long)puVar11 + 0x1c) != 0) goto code_r0x02e97664;
      lVar8 = *param_3;
      lVar19 = *(long *)(lVar8 + 8);
      puVar1 = (undefined8 *)
               (lVar19 + 0x48 +
               (ulong)*(ushort *)((long)puVar11 + 0x1e) * 0x40 + *(long *)(lVar19 + 0x48));
      if ((*(byte *)((long)puVar1 + 0x1e) >> 6 & 1) != 0) {
        plVar18 = puVar1 + 6;
        plVar14 = *(long **)(lVar8 + 0x70);
        local_100 = **(undefined8 **)(lVar8 + 0x58);
        uStack_f8 = (*(undefined8 **)(lVar8 + 0x58))[1];
        lVar16 = 0;
        if (*plVar18 != 0) {
          lVar16 = *plVar18 + (long)plVar18;
        }
        puVar9 = *(undefined8 **)(lVar8 + 0x60);
        uVar15 = puVar9[3];
        iVar20 = (int)(uVar15 >> 0x20) + (uint)*(byte *)(lVar19 + 0x1c);
        uVar15 = (ulong)((*(ushort *)((long)puVar11 + 0x1e) + 1 << (ulong)(-iVar20 & 0x1f)) - 1) |
                 uVar15 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar15 >> 0x20) * 4);
        plVar6 = (long *)**(long **)(lVar8 + 0x48);
        uVar17 = (undefined4)uVar15;
        if (plVar6 != (long *)0x0) {
          lVar7 = 0;
          if (*plVar18 != 0) {
            lVar7 = *plVar18 + (long)plVar18;
          }
          (**(code **)(*plVar6 + 0x40))
                    (plVar6,*(undefined2 *)((long)puVar1 + 0x2c),6,*puVar9,puVar9[1],lVar19,uVar15,
                     lVar7,&local_100);
          lVar7 = *(long *)(lVar8 + 0x48);
          if (*(long *)(lVar7 + 8) != 0) {
            local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar7 + 0x10));
            uVar10 = *(undefined8 *)(lVar7 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                 *(undefined4 *)(lVar7 + 0x1c);
            *(undefined8 *)((ulong)&local_f0 | 4) = uVar10;
            puVar11 = *(undefined8 **)(lVar8 + 0x50);
            local_e0 = *puVar11;
            local_d8 = puVar11[1];
            local_d0 = puVar11[2];
            local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar11 + 3));
            local_c0 = 0;
            local_160 = CONCAT62(local_160._2_6_,(undefined2)local_100);
            uVar15 = *puVar13;
            *(int *)((ulong *)((ulong)&local_160 | 4) + 1) = (int)puVar13[1];
            *(ulong *)((ulong)&local_160 | 4) = uVar15;
            local_150 = **(long **)(lVar8 + 0x60);
            local_148 = (*(long **)(lVar8 + 0x60))[1];
            local_138 = CONCAT44(local_138._4_4_,uVar17);
            local_130 = 0;
            if (*plVar18 != 0) {
              local_130 = *plVar18 + (long)plVar18;
            }
            local_140 = lVar19;
            uVar15 = (**(code **)(**(long **)(lVar7 + 8) + 0x40))
                               (*(long **)(lVar7 + 8),6,1,&local_f0,&local_160);
            if ((uVar15 & 1) == 0) goto LAB_02e97d50;
          }
        }
        if (*(char *)(lVar16 + 0x19) == '\x03') {
          memcpy(&local_f0,*(void **)(lVar8 + 0x48),0x60);
          bVar2 = *(byte *)((long)puVar1 + 0x1e);
          if ((bVar2 >> 3 & 1) == 0) {
            fVar21 = *(float *)(puVar1 + 2);
            fVar25 = *(float *)((long)puVar1 + 0x14);
            fStack_98 = *(float *)(puVar1 + 3);
            if ((bVar2 >> 2 & 1) == 0) {
              local_b0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x20) >> 0x20) - fVar25,
                                  (float)*(undefined8 *)(lVar8 + 0x20) - fVar21);
              uStack_a8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x28) >> 0x20) - 0.0,
                                   (float)*(undefined8 *)(lVar8 + 0x28) - fStack_98);
              fStack_98 = (float)*(undefined8 *)(lVar8 + 0x38) - fStack_98;
              fStack_94 = (float)((ulong)*(undefined8 *)(lVar8 + 0x38) >> 0x20) - 0.0;
              local_a0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20) - fVar25,
                                  (float)*(undefined8 *)(lVar8 + 0x30) - fVar21);
            }
            else {
              fVar22 = (float)*puVar1;
              fVar26 = (float)((ulong)*puVar1 >> 0x20);
              fVar41 = fVar26 + fVar26;
              fVar32 = (float)puVar1[1];
              fVar42 = fVar32 + fVar32;
              fVar40 = (float)*(undefined8 *)(lVar8 + 0x20);
              fVar55 = (float)*(undefined8 *)(lVar8 + 0x30);
              fVar50 = (float)((ulong)*(undefined8 *)(lVar8 + 0x20) >> 0x20);
              fVar58 = (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20);
              fVar51 = (float)*(undefined8 *)(lVar8 + 0x28);
              fVar47 = (float)*(undefined8 *)(lVar8 + 0x38);
              fVar46 = (fVar22 + fVar22) * fVar22;
              fVar33 = (float)((ulong)puVar1[1] >> 0x20);
              fVar31 = (fVar22 + fVar22) * fVar33;
              fVar49 = 1.0 - fVar32 * fVar42;
              fVar57 = fVar41 * fVar22 + fVar42 * fVar33;
              fVar54 = fVar41 * fVar22 - fVar42 * fVar33;
              fVar43 = (fVar55 - fVar40) * 0.5;
              fVar44 = (fVar58 - fVar50) * 0.5;
              fVar45 = (fVar47 - fVar51) * 0.5;
              fVar21 = (fVar40 + fVar55) * 0.5 - fVar21;
              fVar25 = (fVar50 + fVar58) * 0.5 - fVar25;
              fStack_98 = (fVar51 + fVar47) * 0.5 - fStack_98;
              fVar58 = fVar49 - fVar41 * fVar26;
              fVar49 = fVar49 - fVar46;
              fVar55 = fVar42 * fVar22 - fVar41 * fVar33;
              fVar50 = fVar42 * fVar26 + fVar31;
              fVar31 = fVar42 * fVar26 - fVar31;
              fVar51 = fVar42 * fVar22 + fVar41 * fVar33;
              fVar32 = (1.0 - fVar46) - fVar41 * fVar26;
              fVar33 = ABS(fVar55 * fVar45) + ABS(fVar58 * fVar43) + ABS(fVar57 * fVar44);
              fVar41 = ABS(fVar50 * fVar45) + ABS(fVar54 * fVar43) + ABS(fVar49 * fVar44);
              fVar42 = ABS(fVar32 * fVar45) + ABS(fVar51 * fVar43) + ABS(fVar31 * fVar44);
              fVar40 = ABS(fVar45 * 0.0) + ABS(fVar31 * fVar43) + ABS(fVar44 * 0.0);
              fVar22 = fVar55 * fStack_98 + fVar58 * fVar21 + fVar57 * fVar25;
              fVar26 = fVar50 * fStack_98 + fVar54 * fVar21 + fVar49 * fVar25;
              fVar32 = fVar32 * fStack_98 + fVar51 * fVar21 + fVar31 * fVar25;
              fStack_94 = fStack_98 * 0.0 + fVar31 * fVar21 + fVar25 * 0.0;
              local_b0 = CONCAT44(fVar26 - fVar41,fVar22 - fVar33);
              uStack_a8 = CONCAT44(fStack_94 - fVar40,fVar32 - fVar42);
              fStack_98 = fVar32 + fVar42;
              fStack_94 = fStack_94 + fVar40;
              local_a0 = CONCAT44(fVar26 + fVar41,fVar22 + fVar33);
            }
          }
          else {
            fVar21 = *(float *)(lVar8 + 0x20);
            fVar25 = *(float *)(lVar8 + 0x24);
            local_b0 = *(ulong *)(lVar8 + 0x20);
            fVar22 = *(float *)(lVar8 + 0x28);
            uStack_a8 = *(ulong *)(lVar8 + 0x28);
            fVar26 = (float)*(undefined8 *)(lVar8 + 0x30);
            iVar24 = -(uint)(fVar26 < fVar21);
            fVar32 = (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20);
            iVar27 = -(uint)(fVar32 < fVar25);
            fVar31 = (float)*(undefined8 *)(lVar8 + 0x38);
            iVar28 = -(uint)(fVar31 < fVar22);
            if (CONCAT13((byte)((uint)iVar27 >> 0x18) | (byte)((uint)iVar24 >> 0x18) |
                         (byte)((uint)iVar28 >> 0x18),
                         CONCAT12((byte)((uint)iVar27 >> 0x10) | (byte)((uint)iVar24 >> 0x10) |
                                  (byte)((uint)iVar28 >> 0x10),
                                  CONCAT11((byte)((uint)iVar27 >> 8) | (byte)((uint)iVar24 >> 8) |
                                           (byte)((uint)iVar28 >> 8),
                                           (byte)iVar27 | (byte)iVar24 | (byte)iVar28))) == 0) {
              fVar40 = auVar23._0_4_ / (float)puVar1[4];
              fVar43 = auVar23._4_4_ / (float)((ulong)puVar1[4] >> 0x20);
              fVar50 = auVar23._8_4_ / (float)puVar1[5];
              fVar44 = auVar23._12_4_ / 1.0;
              fVar33 = (float)*puVar1;
              fVar42 = (float)((ulong)*puVar1 >> 0x20);
              fVar47 = fVar42 + fVar42;
              fVar51 = (float)puVar1[1];
              fVar49 = fVar51 + fVar51;
              fVar54 = (fVar33 + fVar33) * fVar33;
              fVar46 = (float)((ulong)puVar1[1] >> 0x20);
              fVar41 = (fVar33 + fVar33) * fVar46;
              fVar52 = 1.0 - fVar51 * fVar49;
              fVar56 = fVar49 * fVar42 - fVar41;
              fVar53 = *(float *)(puVar1 + 3);
              fVar51 = fVar40 * (fVar52 - fVar47 * fVar42);
              fVar45 = fVar43 * (fVar47 * fVar33 - fVar49 * fVar46);
              fVar55 = fVar50 * (fVar49 * fVar33 + fVar47 * fVar46);
              fVar58 = fVar44 * fVar56;
              fVar57 = fVar40 * (fVar47 * fVar33 + fVar49 * fVar46);
              fVar52 = fVar43 * (fVar52 - fVar54);
              fVar56 = fVar50 * fVar56;
              fVar48 = fVar44 * 0.0;
              fVar40 = fVar40 * (fVar49 * fVar33 - fVar47 * fVar46);
              fVar43 = fVar43 * (fVar49 * fVar42 + fVar41);
              fVar50 = fVar50 * ((1.0 - fVar54) - fVar47 * fVar42);
              fVar44 = fVar44 * 0.0;
              fVar46 = (float)puVar1[2];
              fVar47 = (float)((ulong)puVar1[2] >> 0x20);
              fVar33 = (fVar26 - fVar21) * 0.5;
              fVar41 = (fVar32 - fVar25) * 0.5;
              fVar42 = (fVar31 - fVar22) * 0.5;
              fVar21 = (fVar21 + fVar26) * 0.5;
              fVar25 = (fVar25 + fVar32) * 0.5;
              fVar49 = (fVar22 + fVar31) * 0.5;
              fVar22 = ABS(fVar40 * fVar42) + ABS(fVar51 * fVar33) + ABS(fVar57 * fVar41);
              fVar26 = ABS(fVar43 * fVar42) + ABS(fVar45 * fVar33) + ABS(fVar52 * fVar41);
              fVar32 = ABS(fVar50 * fVar42) + ABS(fVar55 * fVar33) + ABS(fVar56 * fVar41);
              fVar31 = ABS(fVar44 * fVar42) + ABS(fVar58 * fVar33) + ABS(fVar48 * fVar41);
              fVar33 = fVar40 * fVar49 + fVar51 * fVar21 + fVar57 * fVar25 +
                       -(fVar40 * fVar53 + fVar51 * fVar46 + fVar57 * fVar47);
              fVar41 = fVar43 * fVar49 + fVar45 * fVar21 + fVar52 * fVar25 +
                       -(fVar43 * fVar53 + fVar45 * fVar46 + fVar52 * fVar47);
              fVar42 = fVar50 * fVar49 + fVar55 * fVar21 + fVar56 * fVar25 +
                       -(fVar50 * fVar53 + fVar55 * fVar46 + fVar56 * fVar47);
              fVar40 = fVar44 * fVar49 + fVar58 * fVar21 + fVar48 * fVar25 +
                       fVar44 * fVar53 + fVar58 * fVar46 + fVar48 * fVar47;
              fVar21 = fVar22 + fVar33;
              fVar25 = fVar26 + fVar41;
              fStack_98 = fVar32 + fVar42;
              fStack_94 = fVar31 + fVar40;
              local_b0 = CONCAT44(fVar41 - fVar26,fVar33 - fVar22);
              uStack_a8 = CONCAT44(fVar40 - fVar31,fVar42 - fVar32);
            }
            else {
              fVar21 = *(float *)(lVar8 + 0x30);
              fVar25 = *(float *)(lVar8 + 0x34);
              fStack_98 = *(float *)(lVar8 + 0x38);
              fStack_94 = *(float *)(lVar8 + 0x3c);
            }
            local_a0 = CONCAT44(fVar25,fVar21);
          }
          puVar11 = *(undefined8 **)(lVar8 + 0x60);
          uVar15 = (ulong)local_130 >> 8;
          local_160 = *puVar11;
          uStack_158 = puVar11[1];
          local_140 = puVar11[4];
          local_138 = 0;
          uStack_118 = puVar11[9];
          local_120 = puVar11[8];
          uStack_110 = puVar11[10];
          uStack_108 = puVar11[0xb];
          auVar4._8_4_ = 0xdf7ffff0;
          auVar4._0_8_ = 0xdf7ffff0df7ffff0;
          auVar4._12_4_ = 0xdf7ffff0;
          uStack_128 = *(undefined4 *)(puVar11 + 7);
          local_130 = CONCAT44(*(undefined4 *)((long)puVar11 + 0x34),
                               (int)CONCAT71((int7)uVar15,*(undefined1 *)(puVar11 + 6)));
          local_148 = CONCAT44(iVar20,uVar17);
          uStack_178 = auVar4._8_8_;
          local_180 = 0xdf7ffff0df7ffff0;
          uStack_168 = 0x5f7ffff05f7ffff0;
          uStack_170 = 0x5f7ffff05f7ffff0;
          local_150 = lVar16;
          (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar16 + 0x18) * 0x200 + 0xe8))
                    (lVar16,*(undefined8 *)(lVar8 + 0x40),&local_f0,*(undefined8 *)(lVar8 + 0x50),
                     &local_100,&local_160,plVar14,&local_180);
        }
        else {
          lVar16 = **(long **)(lVar8 + 0x50);
          lVar19 = **(long **)(lVar8 + 0x60);
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
          if (lVar16 == 0) {
            local_c8 = 0xffffffffffffffff;
          }
          else {
            local_c8 = *(undefined8 *)(lVar16 + 0xb0);
            uVar12 = *(undefined4 *)(lVar16 + 0x50);
          }
          local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar12);
          local_b0 = CONCAT62((int6)(local_b0 >> 0x10),
                              *(undefined2 *)(*(long *)(lVar8 + 0x48) + 0x10)) & 0xffffffff;
          uStack_a8 = *(ulong *)(*(long *)(lVar8 + 0x48) + 0x14) >> 0x20;
          if (lVar19 == 0) {
            fStack_98 = 2.3509886e-38;
            local_a0 = 0xffffffffffffffff;
          }
          else {
            local_a0 = *(undefined8 *)(lVar19 + 0xb0);
            fStack_98 = *(float *)(lVar19 + 0x50);
          }
          local_88 = (undefined2)local_100;
          local_84 = (undefined4)*puVar13;
          uStack_80 = *puVar13 >> 0x20;
          local_90 = uVar17;
          (**(code **)(*plVar14 + 0x28))(plVar14,&local_f0);
        }
      }
      goto LAB_02e97d50;
    }
  }
  return;
code_r0x02e97664:
  lVar8 = 0;
  if (*param_1 != 0) {
    lVar8 = *param_1 + (long)param_1;
  }
  puVar1 = (undefined8 *)(lVar8 + (ulong)*(ushort *)((long)puVar11 + 0x1c) * 0x20);
  uVar3 = *(ushort *)((long)puVar11 + 0x1e);
  puVar9 = (undefined8 *)(lVar8 + (ulong)uVar3 * 0x20);
  fVar22 = (float)param_3[4];
  iVar29 = -(uint)((float)*puVar1 <= fVar22);
  fVar26 = (float)((ulong)param_3[4] >> 0x20);
  iVar35 = -(uint)((float)((ulong)*puVar1 >> 0x20) <= fVar26);
  iVar38 = -(uint)((float)puVar1[1] <= (float)param_3[5]);
  fVar21 = (float)param_3[2];
  iVar20 = -(uint)(fVar21 <= *(float *)(puVar1 + 2));
  fVar25 = (float)((ulong)param_3[2] >> 0x20);
  iVar27 = -(uint)(fVar25 <= *(float *)((long)puVar1 + 0x14));
  iVar34 = -(uint)((float)param_3[3] <= *(float *)(puVar1 + 3));
  iVar30 = -(uint)((float)*puVar9 <= fVar22);
  iVar36 = -(uint)((float)((ulong)*puVar9 >> 0x20) <= fVar26);
  iVar39 = -(uint)((float)puVar9[1] <= (float)param_3[5]);
  iVar24 = -(uint)(fVar21 <= (float)puVar9[2]);
  iVar28 = -(uint)(fVar25 <= (float)((ulong)puVar9[2] >> 0x20));
  iVar37 = -(uint)((float)param_3[3] <= (float)puVar9[3]);
  bVar2 = CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                   (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar20 >> 0x18) &
                   (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                   CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                            (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar20 >> 0x10) &
                            (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                            CONCAT11((byte)((uint)iVar35 >> 8) & (byte)((uint)iVar27 >> 8) &
                                     (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar20 >> 8) &
                                     (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar34 >> 8),
                                     (byte)iVar35 & (byte)iVar27 & (byte)iVar29 & (byte)iVar20 &
                                     (byte)iVar38 & (byte)iVar34))) != 0 |
          (CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                    (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                    (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                    CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                             (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                             (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                             CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar28 >> 8) &
                                      (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar24 >> 8) &
                                      (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar37 >> 8),
                                      (byte)iVar36 & (byte)iVar28 & (byte)iVar30 & (byte)iVar24 &
                                      (byte)iVar39 & (byte)iVar37))) != 0) << 1;
  puVar11 = puVar1;
  if (bVar2 != 1) {
    if (bVar2 == 3) {
      iVar20 = (int)param_2[1];
      lVar8 = (long)iVar20;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar20) {
        FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar8 + 1);
        iVar20 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = (int)(lVar8 + 1);
      *(ushort *)(*param_2 + (long)iVar20 * 2) = uVar3;
    }
    else {
      puVar11 = puVar9;
      if (bVar2 != 2) {
LAB_02e97d50:
        if ((int)param_2[1] <= (int)lVar5) {
          return;
        }
        iVar20 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar20;
        lVar8 = 0;
        if (*param_1 != 0) {
          lVar8 = *param_1 + (long)param_1;
        }
        puVar11 = (undefined8 *)(lVar8 + (ulong)*(ushort *)(*param_2 + (long)iVar20 * 2) * 0x20);
      }
    }
  }
  goto LAB_02e9765c;
}


