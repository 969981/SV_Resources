/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e8bc24; name: FUN_02e8bc24
 */


void FUN_02e8bc24(long *param_1,long *param_2,long *param_3)

{
  undefined *__src;
  float *pfVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  long lVar9;
  bool bVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  float *pfVar16;
  char cVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined4 uVar21;
  void *__src_00;
  uint uVar22;
  float fVar23;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  int iVar48;
  int iVar50;
  int iVar51;
  int iVar52;
  undefined1 auVar49 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  long local_1d0;
  undefined8 local_1c8;
  undefined1 *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [64];
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  ulong uStack_128;
  float *local_120;
  ushort local_118 [4];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  float *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar4 = 0;
    if (*param_1 != 0) {
      lVar4 = *param_1 + (long)param_1;
    }
    pfVar16 = (float *)(lVar4 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    auVar26._0_4_ = (*pfVar16 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
    auVar26._4_4_ =
         (pfVar16[1] - *(float *)((long)param_3 + 0x14)) * *(float *)((long)param_3 + 0x34);
    auVar26._8_4_ = (pfVar16[2] - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar26._12_4_ =
         (pfVar16[3] - *(float *)((long)param_3 + 0x1c)) * *(float *)((long)param_3 + 0x3c);
    auVar24._0_4_ = *(float *)(param_3 + 6) * (pfVar16[4] - *(float *)(param_3 + 2));
    auVar24._4_4_ =
         *(float *)((long)param_3 + 0x34) * (pfVar16[5] - *(float *)((long)param_3 + 0x14));
    auVar24._8_4_ = *(float *)(param_3 + 7) * (pfVar16[6] - *(float *)(param_3 + 3));
    auVar24._12_4_ = *(float *)((long)param_3 + 0x3c) * (0.0 - *(float *)((long)param_3 + 0x1c));
    auVar34 = NEON_fmin(auVar26,auVar24,4);
    auVar24 = NEON_fmax(auVar26,auVar24,4);
    uVar29 = NEON_fmaxp(auVar34._0_8_,auVar34._0_8_,4);
    uVar30 = NEON_fmax(CONCAT44(auVar34._8_4_,auVar34._8_4_),uVar29,4);
    uVar29 = NEON_fminp(auVar24._0_8_,auVar24._0_8_,4);
    uVar29 = NEON_fmin(CONCAT44(auVar24._8_4_,auVar24._8_4_),uVar29,4);
    uVar30 = NEON_fmax(uVar30,0,4);
    uVar29 = NEON_fmin(uVar29,*(undefined8 *)(*(long *)(*param_3 + 0x38) + 0x10),4);
    if (!(bool)(~((float)uVar30 <= (float)uVar29) & 1)) {
      lVar9 = param_2[1];
      auVar24 = NEON_fmov(0x3f800000,4);
      lVar4 = tpidr_el0;
      auVar34._8_4_ = 0x7f7fffee;
      auVar34._0_8_ = 0x7f7fffee7f7fffee;
      auVar34._12_4_ = 0x7f7fffee;
      __src = PTR_DAT_047d19b0 + 0x200;
LAB_02e8bd54:
      while( true ) {
        uVar3 = *(ushort *)(pfVar16 + 7);
        if ((ulong)uVar3 == 0) break;
        local_118[0] = uVar3;
        lVar13 = 0;
        if (*param_1 != 0) {
          lVar13 = *param_1 + (long)param_1;
        }
        local_120 = (float *)(lVar13 + (ulong)uVar3 * 0x20);
        local_130 = local_120[4];
        fStack_12c = local_120[5];
        uStack_128 = (ulong)(uint)local_120[6];
        local_140 = *local_120;
        fStack_13c = local_120[1];
        fStack_138 = local_120[2];
        fStack_134 = local_120[3];
        local_f0 = (float *)(lVar13 + (ulong)*(ushort *)((long)pfVar16 + 0x1e) * 0x20);
        uStack_e8 = CONCAT62(uStack_e8._2_6_,*(ushort *)((long)pfVar16 + 0x1e));
        uStack_f8 = (ulong)(uint)local_f0[6];
        local_100 = *(undefined8 *)(local_f0 + 4);
        uStack_108 = *(undefined8 *)(local_f0 + 2);
        local_110 = *(undefined8 *)local_f0;
        fVar38 = *(float *)(param_3 + 2);
        fVar39 = *(float *)((long)param_3 + 0x14);
        fVar46 = *(float *)(param_3 + 3);
        fVar43 = *(float *)((long)param_3 + 0x1c);
        fVar45 = (float)param_3[6];
        auVar31._0_4_ = (local_140 - fVar38) * fVar45;
        fVar54 = (float)((ulong)param_3[6] >> 0x20);
        auVar31._4_4_ = (fStack_13c - fVar39) * fVar54;
        fVar55 = (float)param_3[7];
        auVar31._8_4_ = (fStack_138 - fVar46) * fVar55;
        fVar37 = (float)((ulong)param_3[7] >> 0x20);
        auVar31._12_4_ = (fStack_134 - fVar43) * fVar37;
        auVar25._0_4_ = fVar45 * (local_130 - fVar38);
        auVar25._4_4_ = fVar54 * (fStack_12c - fVar39);
        auVar25._8_4_ = fVar55 * (local_120[6] - fVar46);
        auVar25._12_4_ = fVar37 * (0.0 - fVar43);
        uVar58 = *(undefined8 *)(*(long *)(*param_3 + 0x38) + 0x10);
        auVar62 = NEON_fmin(auVar31,auVar25,4);
        auVar26 = NEON_fmax(auVar31,auVar25,4);
        uVar29 = NEON_fmaxp(auVar62._0_8_,auVar62._0_8_,4);
        uVar29 = NEON_fmax(CONCAT44(auVar62._8_4_,auVar62._8_4_),uVar29,4);
        uVar30 = NEON_fminp(auVar26._0_8_,auVar26._0_8_,4);
        uVar30 = NEON_fmin(CONCAT44(auVar26._8_4_,auVar26._8_4_),uVar30,4);
        auVar35._0_4_ = fVar45 * (local_f0[4] - fVar38);
        auVar35._4_4_ = fVar54 * (local_f0[5] - fVar39);
        auVar35._8_4_ = fVar55 * (local_f0[6] - fVar46);
        auVar35._12_4_ = fVar37 * (0.0 - fVar43);
        uVar29 = NEON_fmax(uVar29,0,4);
        auVar32._0_4_ = fVar45 * ((float)local_110 - fVar38);
        auVar32._4_4_ = fVar54 * ((float)((ulong)local_110 >> 0x20) - fVar39);
        auVar32._8_4_ = fVar55 * ((float)uStack_108 - fVar46);
        auVar32._12_4_ = fVar37 * ((float)((ulong)uStack_108 >> 0x20) - fVar43);
        uVar40 = NEON_fmin(uVar30,uVar58,4);
        auVar62 = NEON_fmin(auVar32,auVar35,4);
        auVar26 = NEON_fmax(auVar32,auVar35,4);
        uVar30 = NEON_fmaxp(auVar62._0_8_,auVar62._0_8_,4);
        uVar30 = NEON_fmax(CONCAT44(auVar62._8_4_,auVar62._8_4_),uVar30,4);
        uVar41 = NEON_fminp(auVar26._0_8_,auVar26._0_8_,4);
        uVar41 = NEON_fmin(CONCAT44(auVar26._8_4_,auVar26._8_4_),uVar41,4);
        uVar30 = NEON_fmax(uVar30,0,4);
        uVar41 = NEON_fmin(uVar41,uVar58,4);
        cVar17 = '\0';
        if (!(bool)(~((float)uVar30 <= (float)uVar41) & 1)) {
          cVar17 = '\x02';
        }
        cVar17 = cVar17 + ((float)uVar29 <= (float)uVar40);
        if (cVar17 == '\x01') {
          pfVar16 = local_120;
        }
        else {
          pfVar16 = local_f0;
          if (cVar17 != '\x02') {
            if (cVar17 != '\x03') goto LAB_02e8c4e0;
            uVar22 = -(uint)((float)uVar30 < (float)uVar29);
            *(uint *)(param_3 + 8) = uVar22 & 1;
            iVar12 = (int)param_2[1];
            lVar13 = (long)iVar12;
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar12) {
              FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar13 + 1);
              iVar12 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = (int)(lVar13 + 1);
            *(ushort *)(*param_2 + (long)iVar12 * 2) = local_118[((ulong)~uVar22 & 1) * 0x18];
            pfVar16 = *(float **)(local_118 + (((ulong)uVar22 & 1) * 0xc + -2) * 2);
          }
        }
      }
      plVar19 = (long *)*param_3;
      lVar13 = *(long *)(lVar4 + 0x1000b8);
      if (lVar13 == 0) {
        lVar13 = FUN_00e5d3b4();
        *(long *)(lVar4 + 0x1000b8) = lVar13;
      }
      plVar20 = *(long **)(lVar13 + 0x3e0);
      if (plVar20 != (long *)0x0) {
        lVar13 = *plVar20;
        if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
          (**(code **)(lVar13 + 0x18))("processLeaf",0xb,*(undefined8 *)(lVar13 + 0x28));
        }
        puVar15 = (undefined8 *)plVar20[2];
        uVar14 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
        if ((uVar14 <= (ulong)plVar20[3]) && (plVar20[2] = uVar14, puVar15 != (undefined8 *)0x0)) {
          *puVar15 = "TtprocessLeaf";
          uVar29 = nn::os::GetSystemTick();
          puVar15[1] = uVar29;
        }
        if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
          puVar15 = (undefined8 *)plVar20[2];
          uVar14 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
          if ((uVar14 <= (ulong)plVar20[3]) && (plVar20[2] = uVar14, puVar15 != (undefined8 *)0x0))
          {
            *puVar15 = &DAT_03c4e575;
            puVar15[1] = *(undefined8 *)(plVar20[6] + 8);
          }
        }
      }
      lVar13 = *plVar19;
      pfVar1 = (float *)(lVar13 + 0x48 +
                        (ulong)*(ushort *)((long)pfVar16 + 0x1e) * 0x40 + *(long *)(lVar13 + 0x48));
      if ((*(byte *)((long)pfVar1 + 0x1e) >> 6 & 1) != 0) {
        local_78 = *(undefined8 *)plVar19[6];
        uStack_70 = ((undefined8 *)plVar19[6])[1];
        puVar15 = (undefined8 *)plVar19[5];
        uVar14 = puVar15[3];
        lVar18 = *(long *)(pfVar1 + 0xc);
        iVar12 = (uint)*(byte *)(lVar13 + 0x1c) + (int)(uVar14 >> 0x20);
        uVar14 = (ulong)((*(ushort *)((long)pfVar16 + 0x1e) + 1 << (ulong)(-iVar12 & 0x1f)) - 1) |
                 uVar14 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar14 >> 0x20) * 4);
        plVar11 = *(long **)plVar19[4];
        lVar2 = 0;
        if (lVar18 != 0) {
          lVar2 = lVar18 + (long)(pfVar1 + 0xc);
        }
        uVar21 = (undefined4)uVar14;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x40))
                    (plVar11,*(undefined2 *)(pfVar1 + 0xb),1,*puVar15,puVar15[1],lVar13,uVar14,lVar2
                     ,&local_78);
          lVar13 = plVar19[4];
          if (*(long *)(lVar13 + 8) != 0) {
            local_140 = (float)CONCAT22(local_140._2_2_,*(undefined2 *)(lVar13 + 0x10));
            uVar29 = *(undefined8 *)(lVar13 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)&local_140 | 4) + 1) =
                 *(undefined4 *)(lVar13 + 0x1c);
            *(undefined8 *)((ulong)&local_140 | 4) = uVar29;
            uStack_128 = 0;
            local_120 = (float *)0x0;
            local_130 = 0.0;
            fStack_12c = 0.0;
            local_118[0] = 0xffff;
            local_118[1] = 0xffff;
            local_110 = 0;
            local_1e0 = CONCAT62(local_1e0._2_6_,(undefined2)local_78);
            uVar29 = *(undefined8 *)((ulong)&local_78 | 4);
            *(undefined4 *)((undefined8 *)((ulong)&local_1e0 | 4) + 1) =
                 *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
            *(undefined8 *)((ulong)&local_1e0 | 4) = uVar29;
            local_1d0 = *(long *)plVar19[5];
            local_1c8 = ((long *)plVar19[5])[1];
            local_1c0 = (undefined1 *)*plVar19;
            local_1b8 = CONCAT44(local_1b8._4_4_,uVar21);
            local_1b0 = lVar2;
            uVar14 = (**(code **)(**(long **)(lVar13 + 8) + 0x40))
                               (*(long **)(lVar13 + 8),1,1,&local_140,&local_1e0);
            if ((uVar14 & 1) == 0) goto LAB_02e8c454;
          }
        }
        auVar8 = *(undefined1 (*) [12])(pfVar1 + 8);
        pfVar16 = *(float **)(plVar19[5] + 0x20);
        fVar38 = *pfVar16;
        fVar39 = pfVar16[1];
        fVar46 = pfVar16[2];
        fVar43 = pfVar16[3];
        fVar37 = *pfVar1;
        fVar56 = pfVar1[1];
        fVar23 = pfVar1[2];
        fVar5 = pfVar1[3];
        fVar45 = *(float *)*(undefined1 (*) [12])(pfVar1 + 4);
        fVar54 = pfVar1[5];
        fVar55 = pfVar1[6];
        auVar7 = *(undefined1 (*) [12])(pfVar1 + 4);
        fVar36 = (float)*(undefined8 *)(pfVar16 + 4);
        fVar42 = (float)((ulong)*(undefined8 *)(pfVar16 + 4) >> 0x20);
        fVar44 = (float)*(undefined8 *)(pfVar16 + 6);
        fVar47 = (float)((ulong)*(undefined8 *)(pfVar16 + 6) >> 0x20);
        fVar57 = (float)*(undefined8 *)(pfVar16 + 8);
        fVar59 = (float)((ulong)*(undefined8 *)(pfVar16 + 8) >> 0x20);
        fVar60 = (float)*(undefined8 *)(pfVar16 + 10);
        fVar61 = (float)((ulong)*(undefined8 *)(pfVar16 + 10) >> 0x20);
        fVar27 = fVar56 + fVar56;
        fVar28 = fVar23 + fVar23;
        fVar63 = auVar24._0_4_ / *(float *)*(undefined1 (*) [12])(pfVar1 + 8);
        fVar65 = auVar24._4_4_ / pfVar1[9];
        fVar66 = auVar24._8_4_ / pfVar1[10];
        fVar67 = auVar24._12_4_ / 1.0;
        fVar53 = 1.0 - fVar23 * fVar28;
        fVar64 = (fVar37 + fVar37) * fVar37;
        fVar23 = (fVar37 + fVar37) * fVar5;
        fVar70 = fVar28 * fVar56 - fVar23;
        fVar72 = fVar28 * fVar37 + fVar27 * fVar5;
        fVar23 = fVar28 * fVar56 + fVar23;
        fVar71 = fVar53 - fVar27 * fVar56;
        fVar53 = fVar53 - fVar64;
        fVar69 = (1.0 - fVar64) - fVar27 * fVar56;
        local_a0 = fVar57 * fVar69 + fVar38 * fVar72 + fVar36 * fVar70;
        fStack_9c = fVar59 * fVar69 + fVar39 * fVar72 + fVar42 * fVar70;
        fStack_98 = fVar60 * fVar69 + fVar46 * fVar72 + fVar44 * fVar70;
        fStack_94 = fVar61 * fVar69 + fVar43 * fVar72 + fVar47 * fVar70;
        fVar64 = fVar27 * fVar37 + fVar28 * fVar5;
        fVar68 = fVar27 * fVar37 - fVar28 * fVar5;
        fStack_b0 = fVar57 * fVar23 + fVar38 * fVar68 + fVar36 * fVar53;
        fStack_ac = fVar59 * fVar23 + fVar39 * fVar68 + fVar42 * fVar53;
        fStack_a8 = fVar60 * fVar23 + fVar46 * fVar68 + fVar44 * fVar53;
        fStack_a4 = fVar61 * fVar23 + fVar43 * fVar68 + fVar47 * fVar53;
        fVar37 = fVar28 * fVar37 - fVar27 * fVar5;
        local_c0 = fVar57 * fVar37 + fVar38 * fVar71 + fVar36 * fVar64;
        fStack_bc = fVar59 * fVar37 + fVar39 * fVar71 + fVar42 * fVar64;
        fStack_b8 = fVar60 * fVar37 + fVar46 * fVar71 + fVar44 * fVar64;
        fStack_b4 = fVar61 * fVar37 + fVar43 * fVar71 + fVar47 * fVar64;
        local_90 = fVar57 * fVar55 + fVar38 * fVar45 + fVar36 * fVar54 + pfVar16[0xc];
        fStack_8c = fVar59 * fVar55 + fVar39 * fVar45 + fVar42 * fVar54 + pfVar16[0xd];
        fStack_88 = fVar60 * fVar55 + fVar46 * fVar45 + fVar44 * fVar54 + pfVar16[0xe];
        fStack_84 = fVar61 * fVar55 + fVar43 * fVar45 + fVar47 * fVar54 + pfVar16[0xf];
        __src_00 = (void *)plVar19[4];
        memcpy(&local_140,__src_00,0x38);
        local_d0 = *(undefined4 *)((long)__src_00 + 0x70);
        fVar38 = (float)*(undefined8 *)((long)__src_00 + 0x50);
        lVar13 = plVar19[7];
        fVar46 = (float)((ulong)*(undefined8 *)((long)__src_00 + 0x50) >> 0x20);
        fVar45 = (float)*(undefined8 *)((long)__src_00 + 0x58);
        fVar54 = (float)*(undefined8 *)((long)__src_00 + 0x40) - auVar7._0_4_;
        fVar55 = (float)((ulong)*(undefined8 *)((long)__src_00 + 0x40) >> 0x20) - auVar7._4_4_;
        fVar56 = (float)*(undefined8 *)((long)__src_00 + 0x48) - auVar7._8_4_;
        uVar29 = *(undefined8 *)(lVar13 + 0x10);
        fVar39 = fVar63 * (fVar37 * fVar45 + fVar71 * fVar38 + fVar64 * fVar46);
        fVar43 = fVar65 * (fVar23 * fVar45 + fVar68 * fVar38 + fVar53 * fVar46);
        fVar46 = fVar66 * (fVar69 * fVar45 + fVar72 * fVar38 + fVar70 * fVar46);
        auVar62._8_8_ = auVar34._8_8_;
        auVar62._0_8_ = 0x7f7fffee7f7fffee;
        iVar48 = -(uint)(fVar39 == 0.0);
        iVar50 = -(uint)(fVar43 == 0.0);
        iVar51 = -(uint)(fVar46 == 0.0);
        iVar52 = -(uint)((float)uVar29 == 0.0);
        fVar38 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                                 CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                          ~(byte)((uint)iVar48 >> 0x10),
                                          CONCAT11((byte)((uint)fVar39 >> 8) &
                                                   ~(byte)((uint)iVar48 >> 8),
                                                   SUB41(fVar39,0) & ~(byte)iVar48)));
        local_f0 = (float *)CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                                     CONCAT16((byte)((uint)fVar43 >> 0x10) &
                                              ~(byte)((uint)iVar50 >> 0x10),
                                              CONCAT15((byte)((uint)fVar43 >> 8) &
                                                       ~(byte)((uint)iVar50 >> 8),
                                                       CONCAT14(SUB41(fVar43,0) & ~(byte)iVar50,
                                                                fVar38))));
        fVar46 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                                 CONCAT12((byte)((uint)fVar46 >> 0x10) &
                                          ~(byte)((uint)iVar51 >> 0x10),
                                          CONCAT11((byte)((uint)fVar46 >> 8) &
                                                   ~(byte)((uint)iVar51 >> 8),
                                                   SUB41(fVar46,0) & ~(byte)iVar51)));
        uStack_e8 = CONCAT17((byte)((ulong)uVar29 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18),
                             CONCAT16((byte)((ulong)uVar29 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10),
                                      CONCAT15((byte)((ulong)uVar29 >> 8) &
                                               ~(byte)((uint)iVar52 >> 8),
                                               CONCAT14((byte)uVar29 & ~(byte)iVar52,fVar46))));
        auVar49._0_4_ = auVar24._0_4_ / fVar38;
        fVar39 = (float)((ulong)local_f0 >> 0x20);
        auVar49._4_4_ = auVar24._4_4_ / fVar39;
        auVar49._8_4_ = auVar24._8_4_ / fVar46;
        fVar43 = (float)((ulong)uStack_e8 >> 0x20);
        auVar49._12_4_ = auVar24._12_4_ / fVar43;
        iVar48 = -(uint)(fVar38 == 0.0);
        iVar50 = -(uint)(fVar39 == 0.0);
        iVar51 = -(uint)(fVar46 == 0.0);
        iVar52 = -(uint)(fVar43 == 0.0);
        auVar33[0] = ~(byte)iVar48;
        auVar33[1] = ~(byte)((uint)iVar48 >> 8);
        auVar33[2] = ~(byte)((uint)iVar48 >> 0x10);
        auVar33[3] = ~(byte)((uint)iVar48 >> 0x18);
        auVar33[4] = ~(byte)iVar50;
        auVar33[5] = ~(byte)((uint)iVar50 >> 8);
        auVar33[6] = ~(byte)((uint)iVar50 >> 0x10);
        auVar33[7] = ~(byte)((uint)iVar50 >> 0x18);
        auVar33[8] = ~(byte)iVar51;
        auVar33[9] = ~(byte)((uint)iVar51 >> 8);
        auVar33[10] = ~(byte)((uint)iVar51 >> 0x10);
        auVar33[0xb] = ~(byte)((uint)iVar51 >> 0x18);
        auVar33[0xc] = ~(byte)iVar52;
        auVar33[0xd] = ~(byte)((uint)iVar52 >> 8);
        auVar33[0xe] = ~(byte)((uint)iVar52 >> 0x10);
        auVar33[0xf] = ~(byte)((uint)iVar52 >> 0x18);
        auVar62 = auVar62 ^ (auVar62 ^ auVar49) & auVar33;
        uStack_f8 = CONCAT44(fVar67 * (fVar56 * 0.0 + fVar70 * fVar54 + fVar55 * 0.0),
                             fVar66 * (fVar69 * fVar56 + fVar72 * fVar54 + fVar70 * fVar55));
        local_100 = CONCAT44(fVar65 * (fVar23 * fVar56 + fVar68 * fVar54 + fVar53 * fVar55),
                             fVar63 * (fVar37 * fVar56 + fVar71 * fVar54 + fVar64 * fVar55));
        uStack_d8 = auVar62._8_8_;
        local_e0 = auVar62._0_8_;
        memcpy(auStack_180,__src,0x40);
        puVar15 = (undefined8 *)plVar19[5];
        uVar14 = (ulong)local_1b0 >> 8;
        local_1e0 = *puVar15;
        uStack_1d8 = puVar15[1];
        local_1b0 = CONCAT44(*(undefined4 *)((long)puVar15 + 0x34),
                             (int)CONCAT71((int7)uVar14,*(undefined1 *)(puVar15 + 6)));
        local_1a0 = puVar15[8];
        uStack_198 = puVar15[9];
        uStack_190 = puVar15[10];
        uStack_188 = puVar15[0xb];
        local_1a8 = *(undefined4 *)(puVar15 + 7);
        local_1c0 = auStack_180;
        local_1d0 = *plVar19;
        auVar6._12_4_ = 0x3f800000;
        auVar6._0_12_ = auVar8;
        local_1c8 = CONCAT44(iVar12,uVar21);
        local_1b8 = 0;
        plVar19[0xd] = auVar6._8_8_;
        plVar19[0xc] = auVar8._0_8_;
        plVar19[0xf] = CONCAT44(fVar67,fVar66);
        plVar19[0xe] = CONCAT44(fVar65,fVar63);
        plVar19[0x10] = (long)&local_c0;
        plVar19[0x11] = lVar13;
        *(undefined1 *)(plVar19 + 9) = *(undefined1 *)(lVar13 + 8);
        lVar18 = NEON_fmin(plVar19[10],*(undefined8 *)(lVar13 + 0x10),4);
        plVar19[10] = lVar18;
        if ((char)plVar19[0xb] == '\0') {
          bVar10 = *(char *)(lVar13 + 0x18) != '\0';
        }
        else {
          bVar10 = true;
        }
        *(bool *)(plVar19 + 0xb) = bVar10;
        *(undefined4 *)((long)plVar19 + 0x4c) = *(undefined4 *)(lVar13 + 0xc);
        (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar2 + 0x18) * 0x200 + 0xd0))
                  (lVar2,plVar19[3],&local_140,&local_78,&local_1e0,plVar19 + 8);
      }
LAB_02e8c454:
      if (plVar20 != (long *)0x0) {
        lVar13 = *plVar20;
        if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
          puVar15 = (undefined8 *)plVar20[2];
          uVar14 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
          if ((uVar14 <= (ulong)plVar20[3]) && (plVar20[2] = uVar14, puVar15 != (undefined8 *)0x0))
          {
            *puVar15 = &DAT_03c4e575;
            puVar15[1] = *(undefined8 *)(plVar20[6] + 8);
          }
        }
        puVar15 = (undefined8 *)plVar20[2];
        uVar14 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
        if ((uVar14 <= (ulong)plVar20[3]) && (plVar20[2] = uVar14, puVar15 != (undefined8 *)0x0)) {
          *puVar15 = &DAT_03c2d363;
          uVar29 = nn::os::GetSystemTick();
          puVar15[1] = uVar29;
        }
        if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
          (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
        }
      }
LAB_02e8c4e0:
      if ((int)lVar9 < (int)param_2[1]) {
        iVar12 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar12;
        lVar13 = 0;
        if (*param_1 != 0) {
          lVar13 = *param_1 + (long)param_1;
        }
        pfVar16 = (float *)(lVar13 + (ulong)*(ushort *)(*param_2 + (long)iVar12 * 2) * 0x20);
        goto LAB_02e8bd54;
      }
    }
  }
  return;
}


