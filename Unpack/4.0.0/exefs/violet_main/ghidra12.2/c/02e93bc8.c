/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e93bc8; name: FUN_02e93bc8
 */


void FUN_02e93bc8(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  float fVar19;
  int iVar21;
  float fVar22;
  int iVar23;
  undefined1 auVar20 [16];
  int iVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
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
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
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
  
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar6 = 0;
    if (*param_1 != 0) {
      lVar6 = *param_1 + (long)param_1;
    }
    puVar12 = (undefined8 *)(lVar6 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    iVar24 = -(uint)((float)*puVar12 <= (float)param_3[4]);
    iVar30 = -(uint)((float)((ulong)*puVar12 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar33 = -(uint)((float)puVar12[1] <= (float)param_3[5]);
    iVar18 = -(uint)((float)param_3[2] <= *(float *)(puVar12 + 2));
    iVar21 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= *(float *)((long)puVar12 + 0x14));
    iVar23 = -(uint)((float)param_3[3] <= *(float *)(puVar12 + 3));
    if (CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar21 >> 0x18) &
                 (byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar18 >> 0x18) &
                 (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar23 >> 0x18),
                 CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar21 >> 0x10) &
                          (byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar18 >> 0x10) &
                          (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar23 >> 0x10),
                          CONCAT11((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar21 >> 8) &
                                   (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar18 >> 8) &
                                   (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar23 >> 8),
                                   (byte)iVar30 & (byte)iVar21 & (byte)iVar24 & (byte)iVar18 &
                                   (byte)iVar33 & (byte)iVar23))) != 0) {
      lVar6 = param_2[1];
      auVar20 = NEON_fmov(0x3f800000,4);
LAB_02e93c90:
      if ((ulong)*(ushort *)((long)puVar12 + 0x1c) != 0) goto code_r0x02e93c98;
      lVar9 = *param_3;
      lVar16 = *(long *)(lVar9 + 8);
      puVar1 = (undefined8 *)
               (lVar16 + 0x48 +
               (ulong)*(ushort *)((long)puVar12 + 0x1e) * 0x40 + *(long *)(lVar16 + 0x48));
      if ((*(byte *)((long)puVar1 + 0x1e) >> 6 & 1) != 0) {
        plVar17 = puVar1 + 6;
        plVar13 = *(long **)(lVar9 + 0x70);
        local_78 = **(undefined8 **)(lVar9 + 0x58);
        uStack_70 = (*(undefined8 **)(lVar9 + 0x58))[1];
        lVar2 = 0;
        if (*plVar17 != 0) {
          lVar2 = *plVar17 + (long)plVar17;
        }
        puVar10 = *(undefined8 **)(lVar9 + 0x60);
        uVar14 = puVar10[3];
        iVar18 = (int)(uVar14 >> 0x20) + (uint)*(byte *)(lVar16 + 0x1c);
        uVar14 = (ulong)((*(ushort *)((long)puVar12 + 0x1e) + 1 << (ulong)(-iVar18 & 0x1f)) - 1) |
                 uVar14 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar14 >> 0x20) * 4);
        plVar7 = (long *)**(long **)(lVar9 + 0x48);
        uVar15 = (undefined4)uVar14;
        if (plVar7 != (long *)0x0) {
          lVar8 = 0;
          if (*plVar17 != 0) {
            lVar8 = *plVar17 + (long)plVar17;
          }
          (**(code **)(*plVar7 + 0x40))
                    (plVar7,*(undefined2 *)((long)puVar1 + 0x2c),6,*puVar10,puVar10[1],lVar16,uVar14
                     ,lVar8,&local_78);
          lVar8 = *(long *)(lVar9 + 0x48);
          if (*(long *)(lVar8 + 8) != 0) {
            local_e0[0] = *(undefined2 *)(lVar8 + 0x10);
            uVar11 = *(undefined8 *)(lVar8 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)local_e0 | 4) + 1) = *(undefined4 *)(lVar8 + 0x1c)
            ;
            *(undefined8 *)((ulong)local_e0 | 4) = uVar11;
            puVar12 = *(undefined8 **)(lVar9 + 0x50);
            local_d0 = *puVar12;
            local_c8 = puVar12[1];
            local_c0 = puVar12[2];
            local_b8 = *(undefined4 *)(puVar12 + 3);
            local_140 = CONCAT62(local_140._2_6_,(undefined2)local_78);
            uVar11 = *(undefined8 *)((ulong)&local_78 | 4);
            local_b0 = 0;
            *(undefined4 *)((undefined8 *)((ulong)&local_140 | 4) + 1) =
                 *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
            *(undefined8 *)((ulong)&local_140 | 4) = uVar11;
            local_130 = **(long **)(lVar9 + 0x60);
            local_128 = (*(long **)(lVar9 + 0x60))[1];
            local_118 = CONCAT44(local_118._4_4_,uVar15);
            local_110 = 0;
            if (*plVar17 != 0) {
              local_110 = *plVar17 + (long)plVar17;
            }
            local_120 = lVar16;
            uVar14 = (**(code **)(**(long **)(lVar8 + 8) + 0x40))
                               (*(long **)(lVar8 + 8),6,1,local_e0,&local_140);
            if ((uVar14 & 1) == 0) goto LAB_02e942cc;
          }
        }
        if (*(char *)(lVar2 + 0x19) == '\x03') {
          memcpy(local_e0,*(void **)(lVar9 + 0x48),0x60);
          bVar3 = *(byte *)((long)puVar1 + 0x1e);
          if ((bVar3 >> 3 & 1) == 0) {
            local_90 = *(float *)(puVar1 + 2);
            fStack_8c = *(float *)((long)puVar1 + 0x14);
            fStack_88 = *(float *)(puVar1 + 3);
            if ((bVar3 >> 2 & 1) == 0) {
              local_a0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20) - fStack_8c,
                                  (float)*(undefined8 *)(lVar9 + 0x20) - local_90);
              uStack_98 = CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x28) >> 0x20) - 0.0,
                                   (float)*(undefined8 *)(lVar9 + 0x28) - fStack_88);
              local_90 = (float)*(undefined8 *)(lVar9 + 0x30) - local_90;
              fStack_8c = (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20) - fStack_8c;
              fStack_88 = (float)*(undefined8 *)(lVar9 + 0x38) - fStack_88;
              fStack_84 = (float)((ulong)*(undefined8 *)(lVar9 + 0x38) >> 0x20) - 0.0;
            }
            else {
              fVar19 = (float)*puVar1;
              fVar22 = (float)((ulong)*puVar1 >> 0x20);
              fVar37 = fVar22 + fVar22;
              fVar28 = (float)puVar1[1];
              fVar38 = fVar28 + fVar28;
              fVar36 = (float)*(undefined8 *)(lVar9 + 0x20);
              fVar54 = (float)*(undefined8 *)(lVar9 + 0x30);
              fVar49 = (float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20);
              fVar57 = (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20);
              fVar50 = (float)*(undefined8 *)(lVar9 + 0x28);
              fVar42 = (float)*(undefined8 *)(lVar9 + 0x38);
              fVar43 = (fVar19 + fVar19) * fVar19;
              fVar29 = (float)((ulong)puVar1[1] >> 0x20);
              fVar27 = (fVar19 + fVar19) * fVar29;
              fVar48 = 1.0 - fVar28 * fVar38;
              fVar56 = fVar37 * fVar19 + fVar38 * fVar29;
              fVar53 = fVar37 * fVar19 - fVar38 * fVar29;
              fVar39 = (fVar54 - fVar36) * 0.5;
              fVar40 = (fVar57 - fVar49) * 0.5;
              fVar41 = (fVar42 - fVar50) * 0.5;
              local_90 = (fVar36 + fVar54) * 0.5 - local_90;
              fStack_8c = (fVar49 + fVar57) * 0.5 - fStack_8c;
              fStack_88 = (fVar50 + fVar42) * 0.5 - fStack_88;
              fVar57 = fVar48 - fVar37 * fVar22;
              fVar48 = fVar48 - fVar43;
              fVar54 = fVar38 * fVar19 - fVar37 * fVar29;
              fVar49 = fVar38 * fVar22 + fVar27;
              fVar27 = fVar38 * fVar22 - fVar27;
              fVar50 = fVar38 * fVar19 + fVar37 * fVar29;
              fVar28 = (1.0 - fVar43) - fVar37 * fVar22;
              fVar29 = ABS(fVar54 * fVar41) + ABS(fVar57 * fVar39) + ABS(fVar56 * fVar40);
              fVar37 = ABS(fVar49 * fVar41) + ABS(fVar53 * fVar39) + ABS(fVar48 * fVar40);
              fVar38 = ABS(fVar28 * fVar41) + ABS(fVar50 * fVar39) + ABS(fVar27 * fVar40);
              fVar36 = ABS(fVar41 * 0.0) + ABS(fVar27 * fVar39) + ABS(fVar40 * 0.0);
              fVar19 = fVar54 * fStack_88 + fVar57 * local_90 + fVar56 * fStack_8c;
              fVar22 = fVar49 * fStack_88 + fVar53 * local_90 + fVar48 * fStack_8c;
              fVar28 = fVar28 * fStack_88 + fVar50 * local_90 + fVar27 * fStack_8c;
              fStack_84 = fStack_88 * 0.0 + fVar27 * local_90 + fStack_8c * 0.0;
              local_a0 = CONCAT44(fVar22 - fVar37,fVar19 - fVar29);
              uStack_98 = CONCAT44(fStack_84 - fVar36,fVar28 - fVar38);
              local_90 = fVar19 + fVar29;
              fStack_8c = fVar22 + fVar37;
              fStack_88 = fVar28 + fVar38;
              fStack_84 = fStack_84 + fVar36;
            }
          }
          else {
            fVar19 = *(float *)(lVar9 + 0x20);
            fVar22 = *(float *)(lVar9 + 0x24);
            local_a0 = *(undefined8 *)(lVar9 + 0x20);
            fVar28 = *(float *)(lVar9 + 0x28);
            uStack_98 = *(undefined8 *)(lVar9 + 0x28);
            fVar27 = (float)*(undefined8 *)(lVar9 + 0x30);
            iVar21 = -(uint)(fVar27 < fVar19);
            fVar29 = (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20);
            iVar23 = -(uint)(fVar29 < fVar22);
            fVar37 = (float)*(undefined8 *)(lVar9 + 0x38);
            iVar24 = -(uint)(fVar37 < fVar28);
            if (CONCAT13((byte)((uint)iVar23 >> 0x18) | (byte)((uint)iVar21 >> 0x18) |
                         (byte)((uint)iVar24 >> 0x18),
                         CONCAT12((byte)((uint)iVar23 >> 0x10) | (byte)((uint)iVar21 >> 0x10) |
                                  (byte)((uint)iVar24 >> 0x10),
                                  CONCAT11((byte)((uint)iVar23 >> 8) | (byte)((uint)iVar21 >> 8) |
                                           (byte)((uint)iVar24 >> 8),
                                           (byte)iVar23 | (byte)iVar21 | (byte)iVar24))) == 0) {
              fVar49 = auVar20._0_4_ / (float)puVar1[4];
              fVar40 = auVar20._4_4_ / (float)((ulong)puVar1[4] >> 0x20);
              fVar50 = auVar20._8_4_ / (float)puVar1[5];
              fVar41 = auVar20._12_4_ / 1.0;
              fVar38 = (float)*puVar1;
              fVar39 = (float)((ulong)*puVar1 >> 0x20);
              fVar53 = fVar39 + fVar39;
              fVar54 = (float)puVar1[1];
              fVar56 = fVar54 + fVar54;
              fVar44 = (fVar38 + fVar38) * fVar38;
              fVar42 = (float)((ulong)puVar1[1] >> 0x20);
              fVar36 = (fVar38 + fVar38) * fVar42;
              fVar51 = 1.0 - fVar54 * fVar56;
              fVar55 = fVar56 * fVar39 - fVar36;
              fVar52 = *(float *)(puVar1 + 3);
              fVar54 = fVar49 * (fVar51 - fVar53 * fVar39);
              fVar43 = fVar40 * (fVar53 * fVar38 - fVar56 * fVar42);
              fVar57 = fVar50 * (fVar56 * fVar38 + fVar53 * fVar42);
              fVar48 = fVar41 * fVar55;
              fVar45 = fVar49 * (fVar53 * fVar38 + fVar56 * fVar42);
              fVar46 = fVar40 * (fVar51 - fVar44);
              fVar55 = fVar50 * fVar55;
              fVar47 = fVar41 * 0.0;
              fVar49 = fVar49 * (fVar56 * fVar38 - fVar53 * fVar42);
              fVar40 = fVar40 * (fVar56 * fVar39 + fVar36);
              fVar50 = fVar50 * ((1.0 - fVar44) - fVar53 * fVar39);
              fVar41 = fVar41 * 0.0;
              fVar42 = (float)puVar1[2];
              fVar56 = (float)((ulong)puVar1[2] >> 0x20);
              fVar38 = (fVar27 - fVar19) * 0.5;
              fVar36 = (fVar29 - fVar22) * 0.5;
              fVar39 = (fVar37 - fVar28) * 0.5;
              fVar53 = (fVar19 + fVar27) * 0.5;
              fVar44 = (fVar22 + fVar29) * 0.5;
              fVar51 = (fVar28 + fVar37) * 0.5;
              fVar19 = ABS(fVar49 * fVar39) + ABS(fVar54 * fVar38) + ABS(fVar45 * fVar36);
              fVar22 = ABS(fVar40 * fVar39) + ABS(fVar43 * fVar38) + ABS(fVar46 * fVar36);
              fVar28 = ABS(fVar50 * fVar39) + ABS(fVar57 * fVar38) + ABS(fVar55 * fVar36);
              fVar27 = ABS(fVar41 * fVar39) + ABS(fVar48 * fVar38) + ABS(fVar47 * fVar36);
              fVar29 = fVar49 * fVar51 + fVar54 * fVar53 + fVar45 * fVar44 +
                       -(fVar49 * fVar52 + fVar54 * fVar42 + fVar45 * fVar56);
              fVar37 = fVar40 * fVar51 + fVar43 * fVar53 + fVar46 * fVar44 +
                       -(fVar40 * fVar52 + fVar43 * fVar42 + fVar46 * fVar56);
              fVar38 = fVar50 * fVar51 + fVar57 * fVar53 + fVar55 * fVar44 +
                       -(fVar50 * fVar52 + fVar57 * fVar42 + fVar55 * fVar56);
              fVar36 = fVar41 * fVar51 + fVar48 * fVar53 + fVar47 * fVar44 +
                       fVar41 * fVar52 + fVar48 * fVar42 + fVar47 * fVar56;
              local_90 = fVar19 + fVar29;
              fStack_8c = fVar22 + fVar37;
              fStack_88 = fVar28 + fVar38;
              fStack_84 = fVar27 + fVar36;
              local_a0 = CONCAT44(fVar37 - fVar22,fVar29 - fVar19);
              uStack_98 = CONCAT44(fVar36 - fVar27,fVar38 - fVar28);
            }
            else {
              local_90 = *(float *)(lVar9 + 0x30);
              fStack_8c = *(float *)(lVar9 + 0x34);
              fStack_88 = *(float *)(lVar9 + 0x38);
              fStack_84 = *(float *)(lVar9 + 0x3c);
            }
          }
          puVar12 = *(undefined8 **)(lVar9 + 0x60);
          uVar14 = (ulong)local_110 >> 8;
          local_140 = *puVar12;
          uStack_138 = puVar12[1];
          local_120 = puVar12[4];
          local_118 = 0;
          uStack_f8 = puVar12[9];
          local_100 = puVar12[8];
          uStack_f0 = puVar12[10];
          uStack_e8 = puVar12[0xb];
          auVar5._8_4_ = 0xdf7ffff0;
          auVar5._0_8_ = 0xdf7ffff0df7ffff0;
          auVar5._12_4_ = 0xdf7ffff0;
          uStack_108 = *(undefined4 *)(puVar12 + 7);
          local_110 = CONCAT44(*(undefined4 *)((long)puVar12 + 0x34),
                               (int)CONCAT71((int7)uVar14,*(undefined1 *)(puVar12 + 6)));
          local_128 = CONCAT44(iVar18,uVar15);
          uStack_158 = auVar5._8_8_;
          local_160 = 0xdf7ffff0df7ffff0;
          uStack_148 = 0x5f7ffff05f7ffff0;
          uStack_150 = 0x5f7ffff05f7ffff0;
          local_130 = lVar2;
          (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar2 + 0x18) * 0x200 + 0xe0))
                    (lVar2,*(undefined8 *)(lVar9 + 0x40),local_e0,*(undefined8 *)(lVar9 + 0x50),
                     &local_78,&local_140,plVar13,&local_160);
        }
        else {
          iVar18 = (int)plVar13[1];
          lVar9 = (long)iVar18;
          if ((int)(*(uint *)((long)plVar13 + 0xc) & 0x7fffffff) <= iVar18) {
            FUN_02e931c8(plVar13,PTR_PTR_047d1a50,lVar9 + 1);
            iVar18 = (int)plVar13[1];
          }
          *(undefined4 *)(*plVar13 + (long)iVar18 * 4) = uVar15;
          *(int *)(plVar13 + 1) = (int)(lVar9 + 1);
        }
      }
      goto LAB_02e942cc;
    }
  }
  return;
code_r0x02e93c98:
  lVar9 = 0;
  if (*param_1 != 0) {
    lVar9 = *param_1 + (long)param_1;
  }
  puVar1 = (undefined8 *)(lVar9 + (ulong)*(ushort *)((long)puVar12 + 0x1c) * 0x20);
  uVar4 = *(ushort *)((long)puVar12 + 0x1e);
  puVar10 = (undefined8 *)(lVar9 + (ulong)uVar4 * 0x20);
  fVar28 = (float)param_3[4];
  iVar25 = -(uint)((float)*puVar1 <= fVar28);
  fVar27 = (float)((ulong)param_3[4] >> 0x20);
  iVar31 = -(uint)((float)((ulong)*puVar1 >> 0x20) <= fVar27);
  iVar34 = -(uint)((float)puVar1[1] <= (float)param_3[5]);
  fVar19 = (float)param_3[2];
  iVar18 = -(uint)(fVar19 <= *(float *)(puVar1 + 2));
  fVar22 = (float)((ulong)param_3[2] >> 0x20);
  iVar23 = -(uint)(fVar22 <= *(float *)((long)puVar1 + 0x14));
  iVar30 = -(uint)((float)param_3[3] <= *(float *)(puVar1 + 3));
  iVar26 = -(uint)((float)*puVar10 <= fVar28);
  iVar32 = -(uint)((float)((ulong)*puVar10 >> 0x20) <= fVar27);
  iVar35 = -(uint)((float)puVar10[1] <= (float)param_3[5]);
  iVar21 = -(uint)(fVar19 <= (float)puVar10[2]);
  iVar24 = -(uint)(fVar22 <= (float)((ulong)puVar10[2] >> 0x20));
  iVar33 = -(uint)((float)param_3[3] <= (float)puVar10[3]);
  bVar3 = CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar23 >> 0x18) &
                   (byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar18 >> 0x18) &
                   (byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar30 >> 0x18),
                   CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar23 >> 0x10) &
                            (byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar18 >> 0x10) &
                            (byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar30 >> 0x10),
                            CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar23 >> 8) &
                                     (byte)((uint)iVar25 >> 8) & (byte)((uint)iVar18 >> 8) &
                                     (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar30 >> 8),
                                     (byte)iVar31 & (byte)iVar23 & (byte)iVar25 & (byte)iVar18 &
                                     (byte)iVar34 & (byte)iVar30))) != 0 |
          (CONCAT13((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                    (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar21 >> 0x18) &
                    (byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar33 >> 0x18),
                    CONCAT12((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                             (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar21 >> 0x10) &
                             (byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar33 >> 0x10),
                             CONCAT11((byte)((uint)iVar32 >> 8) & (byte)((uint)iVar24 >> 8) &
                                      (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar21 >> 8) &
                                      (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar33 >> 8),
                                      (byte)iVar32 & (byte)iVar24 & (byte)iVar26 & (byte)iVar21 &
                                      (byte)iVar35 & (byte)iVar33))) != 0) << 1;
  puVar12 = puVar1;
  if (bVar3 != 1) {
    if (bVar3 == 3) {
      iVar18 = (int)param_2[1];
      lVar9 = (long)iVar18;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar18) {
        FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar9 + 1);
        iVar18 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = (int)(lVar9 + 1);
      *(ushort *)(*param_2 + (long)iVar18 * 2) = uVar4;
    }
    else {
      puVar12 = puVar10;
      if (bVar3 != 2) {
LAB_02e942cc:
        if ((int)param_2[1] <= (int)lVar6) {
          return;
        }
        iVar18 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar18;
        lVar9 = 0;
        if (*param_1 != 0) {
          lVar9 = *param_1 + (long)param_1;
        }
        puVar12 = (undefined8 *)(lVar9 + (ulong)*(ushort *)(*param_2 + (long)iVar18 * 2) * 0x20);
      }
    }
  }
  goto LAB_02e93c90;
}


