/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e8b228; name: FUN_02e8b228
 */


void FUN_02e8b228(long *param_1,long *param_2,long *param_3)

{
  undefined *__src;
  float *pfVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  long lVar13;
  bool bVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  undefined8 *puVar18;
  float *pfVar19;
  long lVar20;
  byte bVar21;
  byte bVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  undefined4 uVar26;
  void *__src_00;
  float fVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  int iVar39;
  undefined1 auVar35 [16];
  int iVar38;
  int iVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  float fVar51;
  float fVar52;
  undefined1 auVar50 [16];
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
  undefined2 local_140 [8];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 local_f0;
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
    if ((char)param_3[8] != '\0') {
      pfVar19 = (float *)(lVar4 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
      auVar28._0_4_ = (*pfVar19 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
      auVar28._4_4_ =
           (pfVar19[1] - *(float *)((long)param_3 + 0x14)) * *(float *)((long)param_3 + 0x34);
      auVar28._8_4_ = (pfVar19[2] - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
      auVar28._12_4_ =
           (pfVar19[3] - *(float *)((long)param_3 + 0x1c)) * *(float *)((long)param_3 + 0x3c);
      auVar44._0_4_ = *(float *)(param_3 + 6) * (pfVar19[4] - *(float *)(param_3 + 2));
      auVar44._4_4_ =
           *(float *)((long)param_3 + 0x34) * (pfVar19[5] - *(float *)((long)param_3 + 0x14));
      auVar44._8_4_ = *(float *)(param_3 + 7) * (pfVar19[6] - *(float *)(param_3 + 3));
      auVar44._12_4_ = *(float *)((long)param_3 + 0x3c) * (0.0 - *(float *)((long)param_3 + 0x1c));
      auVar42 = NEON_fmin(auVar28,auVar44,4);
      auVar28 = NEON_fmax(auVar28,auVar44,4);
      uVar33 = NEON_fmaxp(auVar42._0_8_,auVar42._0_8_,4);
      uVar34 = NEON_fmax(CONCAT44(auVar42._8_4_,auVar42._8_4_),uVar33,4);
      uVar33 = NEON_fminp(auVar28._0_8_,auVar28._0_8_,4);
      uVar33 = NEON_fmin(CONCAT44(auVar28._8_4_,auVar28._8_4_),uVar33,4);
      uVar34 = NEON_fmax(uVar34,0,4);
      uVar33 = NEON_fmin(uVar33,*(undefined8 *)(*(long *)(*param_3 + 0x38) + 0x10),4);
      if (!(bool)(~((float)uVar34 <= (float)uVar33) & 1)) {
        lVar13 = param_2[1];
        auVar28 = NEON_fmov(0x3f800000,4);
        lVar4 = tpidr_el0;
        auVar42._8_4_ = 0x7f7fffee;
        auVar42._0_8_ = 0x7f7fffee7f7fffee;
        auVar42._12_4_ = 0x7f7fffee;
        __src = PTR_DAT_047d19b0 + 0x200;
LAB_02e8b360:
        do {
          if ((ulong)*(ushort *)(pfVar19 + 7) == 0) {
            if ((char)param_3[8] != '\0') {
              plVar25 = (long *)*param_3;
              lVar20 = *(long *)(lVar4 + 0x1000b8);
              if (lVar20 == 0) {
                lVar20 = FUN_00e5d3b4();
                *(long *)(lVar4 + 0x1000b8) = lVar20;
              }
              plVar24 = *(long **)(lVar20 + 0x3e0);
              if (plVar24 != (long *)0x0) {
                lVar20 = *plVar24;
                if (*(code **)(lVar20 + 0x18) != (code *)0x0) {
                  (**(code **)(lVar20 + 0x18))("processLeaf",0xb,*(undefined8 *)(lVar20 + 0x28));
                }
                puVar18 = (undefined8 *)plVar24[2];
                uVar17 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
                if ((uVar17 <= (ulong)plVar24[3]) &&
                   (plVar24[2] = uVar17, puVar18 != (undefined8 *)0x0)) {
                  *puVar18 = "TtprocessLeaf";
                  uVar33 = nn::os::GetSystemTick();
                  puVar18[1] = uVar33;
                }
                if (((*(byte *)(lVar20 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
                  puVar18 = (undefined8 *)plVar24[2];
                  uVar17 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar17 <= (ulong)plVar24[3]) &&
                     (plVar24[2] = uVar17, puVar18 != (undefined8 *)0x0)) {
                    *puVar18 = &DAT_03c4e575;
                    puVar18[1] = *(undefined8 *)(plVar24[6] + 8);
                  }
                }
              }
              lVar20 = *plVar25;
              pfVar1 = (float *)(lVar20 + 0x48 +
                                (ulong)*(ushort *)((long)pfVar19 + 0x1e) * 0x40 +
                                *(long *)(lVar20 + 0x48));
              if ((*(byte *)((long)pfVar1 + 0x1e) >> 6 & 1) != 0) {
                local_78 = *(undefined8 *)plVar25[6];
                uStack_70 = ((undefined8 *)plVar25[6])[1];
                puVar18 = (undefined8 *)plVar25[5];
                uVar17 = puVar18[3];
                lVar23 = *(long *)(pfVar1 + 0xc);
                iVar16 = (uint)*(byte *)(lVar20 + 0x1c) + (int)(uVar17 >> 0x20);
                uVar17 = (ulong)((*(ushort *)((long)pfVar19 + 0x1e) + 1 << (ulong)(-iVar16 & 0x1f))
                                - 1) |
                         uVar17 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar17 >> 0x20) * 4);
                plVar15 = *(long **)plVar25[4];
                lVar2 = 0;
                if (lVar23 != 0) {
                  lVar2 = lVar23 + (long)(pfVar1 + 0xc);
                }
                uVar26 = (undefined4)uVar17;
                if (plVar15 != (long *)0x0) {
                  (**(code **)(*plVar15 + 0x40))
                            (plVar15,*(undefined2 *)(pfVar1 + 0xb),1,*puVar18,puVar18[1],lVar20,
                             uVar17,lVar2,&local_78);
                  lVar20 = plVar25[4];
                  if (*(long *)(lVar20 + 8) != 0) {
                    local_140[0] = *(undefined2 *)(lVar20 + 0x10);
                    uVar33 = *(undefined8 *)(lVar20 + 0x14);
                    *(undefined4 *)((undefined8 *)((ulong)local_140 | 4) + 1) =
                         *(undefined4 *)(lVar20 + 0x1c);
                    *(undefined8 *)((ulong)local_140 | 4) = uVar33;
                    local_128 = 0;
                    uStack_120 = 0;
                    local_130 = 0;
                    local_118 = 0xffffffff;
                    local_110 = 0;
                    local_1e0 = CONCAT62(local_1e0._2_6_,(undefined2)local_78);
                    uVar33 = *(undefined8 *)((ulong)&local_78 | 4);
                    *(undefined4 *)((undefined8 *)((ulong)&local_1e0 | 4) + 1) =
                         *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
                    *(undefined8 *)((ulong)&local_1e0 | 4) = uVar33;
                    local_1d0 = *(long *)plVar25[5];
                    local_1c8 = ((long *)plVar25[5])[1];
                    local_1c0 = (undefined1 *)*plVar25;
                    local_1b8 = CONCAT44(local_1b8._4_4_,uVar26);
                    local_1b0 = lVar2;
                    uVar17 = (**(code **)(**(long **)(lVar20 + 8) + 0x40))
                                       (*(long **)(lVar20 + 8),1,1,local_140,&local_1e0);
                    if ((uVar17 & 1) == 0) goto LAB_02e8ba20;
                  }
                }
                auVar12 = *(undefined1 (*) [12])(pfVar1 + 8);
                pfVar19 = *(float **)(plVar25[5] + 0x20);
                fVar52 = *pfVar19;
                fVar5 = pfVar19[1];
                fVar6 = pfVar19[2];
                fVar46 = pfVar19[3];
                fVar51 = pfVar19[4];
                fVar54 = pfVar19[5];
                fVar55 = pfVar19[6];
                fVar56 = pfVar19[7];
                fVar45 = *pfVar1;
                fVar68 = pfVar1[1];
                fVar27 = pfVar1[2];
                fVar10 = pfVar1[3];
                fVar7 = *(float *)*(undefined1 (*) [12])(pfVar1 + 4);
                fVar8 = pfVar1[5];
                fVar9 = pfVar1[6];
                auVar48 = *(undefined1 (*) [12])(pfVar1 + 4);
                fVar57 = (float)*(undefined8 *)(pfVar19 + 8);
                fVar59 = (float)((ulong)*(undefined8 *)(pfVar19 + 8) >> 0x20);
                fVar60 = (float)*(undefined8 *)(pfVar19 + 10);
                fVar61 = (float)((ulong)*(undefined8 *)(pfVar19 + 10) >> 0x20);
                fVar30 = fVar68 + fVar68;
                fVar31 = fVar27 + fVar27;
                fVar63 = auVar28._0_4_ / *(float *)*(undefined1 (*) [12])(pfVar1 + 8);
                fVar65 = auVar28._4_4_ / pfVar1[9];
                fVar66 = auVar28._8_4_ / pfVar1[10];
                fVar67 = auVar28._12_4_ / 1.0;
                fVar53 = 1.0 - fVar27 * fVar31;
                fVar64 = (fVar45 + fVar45) * fVar45;
                fVar27 = (fVar45 + fVar45) * fVar10;
                fVar70 = fVar31 * fVar68 - fVar27;
                fVar72 = fVar31 * fVar45 + fVar30 * fVar10;
                fVar27 = fVar31 * fVar68 + fVar27;
                fVar71 = fVar53 - fVar30 * fVar68;
                fVar53 = fVar53 - fVar64;
                fVar69 = (1.0 - fVar64) - fVar30 * fVar68;
                local_a0 = fVar57 * fVar69 + fVar52 * fVar72 + fVar51 * fVar70;
                fStack_9c = fVar59 * fVar69 + fVar5 * fVar72 + fVar54 * fVar70;
                fStack_98 = fVar60 * fVar69 + fVar6 * fVar72 + fVar55 * fVar70;
                fStack_94 = fVar61 * fVar69 + fVar46 * fVar72 + fVar56 * fVar70;
                fVar68 = fVar30 * fVar45 + fVar31 * fVar10;
                fVar64 = fVar30 * fVar45 - fVar31 * fVar10;
                fStack_b0 = fVar57 * fVar27 + fVar52 * fVar64 + fVar51 * fVar53;
                fStack_ac = fVar59 * fVar27 + fVar5 * fVar64 + fVar54 * fVar53;
                fStack_a8 = fVar60 * fVar27 + fVar6 * fVar64 + fVar55 * fVar53;
                fStack_a4 = fVar61 * fVar27 + fVar46 * fVar64 + fVar56 * fVar53;
                fVar45 = fVar31 * fVar45 - fVar30 * fVar10;
                local_c0 = fVar57 * fVar45 + fVar52 * fVar71 + fVar51 * fVar68;
                fStack_bc = fVar59 * fVar45 + fVar5 * fVar71 + fVar54 * fVar68;
                fStack_b8 = fVar60 * fVar45 + fVar6 * fVar71 + fVar55 * fVar68;
                fStack_b4 = fVar61 * fVar45 + fVar46 * fVar71 + fVar56 * fVar68;
                _fStack_88 = CONCAT44(fVar61 * fVar9 + fVar46 * fVar7 + fVar56 * fVar8 +
                                      pfVar19[0xf],
                                      fVar60 * fVar9 + fVar6 * fVar7 + fVar55 * fVar8 + pfVar19[0xe]
                                     );
                _local_90 = CONCAT44(fVar59 * fVar9 + fVar5 * fVar7 + fVar54 * fVar8 + pfVar19[0xd],
                                     fVar57 * fVar9 + fVar52 * fVar7 + fVar51 * fVar8 + pfVar19[0xc]
                                    );
                __src_00 = (void *)plVar25[4];
                memcpy(local_140,__src_00,0x38);
                local_d0 = *(undefined4 *)((long)__src_00 + 0x70);
                fVar52 = *(float *)((long)__src_00 + 0x50);
                fVar5 = *(float *)((long)__src_00 + 0x54);
                fVar6 = *(float *)((long)__src_00 + 0x58);
                lVar20 = plVar25[7];
                fVar54 = (float)*(undefined8 *)((long)__src_00 + 0x40) - auVar48._0_4_;
                fVar55 = (float)((ulong)*(undefined8 *)((long)__src_00 + 0x40) >> 0x20) -
                         auVar48._4_4_;
                fVar56 = (float)*(undefined8 *)((long)__src_00 + 0x48) - auVar48._8_4_;
                uVar33 = *(undefined8 *)(lVar20 + 0x10);
                fVar46 = fVar63 * (fVar45 * fVar6 + fVar71 * fVar52 + fVar68 * fVar5);
                fVar51 = fVar65 * (fVar27 * fVar6 + fVar64 * fVar52 + fVar53 * fVar5);
                fVar52 = fVar66 * (fVar69 * fVar6 + fVar72 * fVar52 + fVar70 * fVar5);
                auVar37._8_8_ = auVar42._8_8_;
                auVar37._0_8_ = 0x7f7fffee7f7fffee;
                iVar32 = -(uint)(fVar46 == 0.0);
                iVar38 = -(uint)(fVar51 == 0.0);
                iVar39 = -(uint)(fVar52 == 0.0);
                iVar40 = -(uint)((float)uVar33 == 0.0);
                fVar46 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) &
                                         ~(byte)((uint)iVar32 >> 0x18),
                                         CONCAT12((byte)((uint)fVar46 >> 0x10) &
                                                  ~(byte)((uint)iVar32 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar46 >> 8) &
                                                           ~(byte)((uint)iVar32 >> 8),
                                                           SUB41(fVar46,0) & ~(byte)iVar32)));
                auVar48._0_8_ =
                     CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                              CONCAT16((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                       CONCAT15((byte)((uint)fVar51 >> 8) &
                                                ~(byte)((uint)iVar38 >> 8),
                                                CONCAT14(SUB41(fVar51,0) & ~(byte)iVar38,fVar46))));
                auVar48[8] = SUB41(fVar52,0) & ~(byte)iVar39;
                auVar48[9] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar39 >> 8);
                auVar48[10] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
                auVar48[0xb] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
                auVar50[0xc] = (byte)uVar33 & ~(byte)iVar40;
                auVar50._0_12_ = auVar48;
                auVar50[0xd] = (byte)((ulong)uVar33 >> 8) & ~(byte)((uint)iVar40 >> 8);
                auVar50[0xe] = (byte)((ulong)uVar33 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
                auVar50[0xf] = (byte)((ulong)uVar33 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
                fVar51 = (float)((ulong)auVar48._0_8_ >> 0x20);
                fVar52 = auVar28._4_4_ / fVar51;
                fVar5 = auVar28._8_4_ / auVar48._8_4_;
                fVar6 = auVar28._12_4_ / auVar50._12_4_;
                iVar32 = -(uint)(fVar46 == 0.0);
                iVar38 = -(uint)(fVar51 == 0.0);
                iVar39 = -(uint)(auVar48._8_4_ == 0.0);
                iVar40 = -(uint)(auVar50._12_4_ == 0.0);
                auVar36[0] = ~(byte)iVar32;
                auVar36[1] = ~(byte)((uint)iVar32 >> 8);
                auVar36[2] = ~(byte)((uint)iVar32 >> 0x10);
                auVar36[3] = ~(byte)((uint)iVar32 >> 0x18);
                auVar36[4] = ~(byte)iVar38;
                auVar36[5] = ~(byte)((uint)iVar38 >> 8);
                auVar36[6] = ~(byte)((uint)iVar38 >> 0x10);
                auVar36[7] = ~(byte)((uint)iVar38 >> 0x18);
                auVar36[8] = ~(byte)iVar39;
                auVar36[9] = ~(byte)((uint)iVar39 >> 8);
                auVar36[10] = ~(byte)((uint)iVar39 >> 0x10);
                auVar36[0xb] = ~(byte)((uint)iVar39 >> 0x18);
                auVar36[0xc] = ~(byte)iVar40;
                auVar36[0xd] = ~(byte)((uint)iVar40 >> 8);
                auVar36[0xe] = ~(byte)((uint)iVar40 >> 0x10);
                auVar36[0xf] = ~(byte)((uint)iVar40 >> 0x18);
                auVar62[4] = SUB41(fVar52,0);
                auVar62._0_4_ = auVar28._0_4_ / fVar46;
                auVar62[5] = (char)((uint)fVar52 >> 8);
                auVar62[6] = (char)((uint)fVar52 >> 0x10);
                auVar62[7] = (char)((uint)fVar52 >> 0x18);
                auVar62[8] = SUB41(fVar5,0);
                auVar62[9] = (char)((uint)fVar5 >> 8);
                auVar62[10] = (char)((uint)fVar5 >> 0x10);
                auVar62[0xb] = (char)((uint)fVar5 >> 0x18);
                auVar62[0xc] = SUB41(fVar6,0);
                auVar62[0xd] = (char)((uint)fVar6 >> 8);
                auVar62[0xe] = (char)((uint)fVar6 >> 0x10);
                auVar62[0xf] = (char)((uint)fVar6 >> 0x18);
                auVar37 = auVar37 ^ (auVar37 ^ auVar62) & auVar36;
                _fStack_f8 = CONCAT44(fVar67 * (fVar56 * 0.0 + fVar70 * fVar54 + fVar55 * 0.0),
                                      fVar66 * (fVar69 * fVar56 + fVar72 * fVar54 + fVar70 * fVar55)
                                     );
                _local_100 = CONCAT44(fVar65 * (fVar27 * fVar56 + fVar64 * fVar54 + fVar53 * fVar55)
                                      ,fVar63 * (fVar45 * fVar56 + fVar71 * fVar54 + fVar68 * fVar55
                                                ));
                uStack_e8 = auVar50._8_8_;
                uStack_d8 = auVar37._8_8_;
                local_e0 = auVar37._0_8_;
                local_f0 = auVar48._0_8_;
                memcpy(auStack_180,__src,0x40);
                puVar18 = (undefined8 *)plVar25[5];
                uVar17 = (ulong)local_1b0 >> 8;
                local_1e0 = *puVar18;
                uStack_1d8 = puVar18[1];
                local_1b0 = CONCAT44(*(undefined4 *)((long)puVar18 + 0x34),
                                     (int)CONCAT71((int7)uVar17,*(undefined1 *)(puVar18 + 6)));
                local_1a0 = puVar18[8];
                uStack_198 = puVar18[9];
                uStack_190 = puVar18[10];
                uStack_188 = puVar18[0xb];
                local_1a8 = *(undefined4 *)(puVar18 + 7);
                local_1c0 = auStack_180;
                local_1d0 = *plVar25;
                auVar11._12_4_ = 0x3f800000;
                auVar11._0_12_ = auVar12;
                local_1c8 = CONCAT44(iVar16,uVar26);
                local_1b8 = 0;
                plVar25[0xd] = auVar11._8_8_;
                plVar25[0xc] = auVar12._0_8_;
                plVar25[0xf] = CONCAT44(fVar67,fVar66);
                plVar25[0xe] = CONCAT44(fVar65,fVar63);
                plVar25[0x10] = (long)&local_c0;
                plVar25[0x11] = lVar20;
                *(undefined1 *)(plVar25 + 9) = *(undefined1 *)(lVar20 + 8);
                lVar23 = NEON_fmin(plVar25[10],*(undefined8 *)(lVar20 + 0x10),4);
                plVar25[10] = lVar23;
                if ((char)plVar25[0xb] == '\0') {
                  bVar14 = *(char *)(lVar20 + 0x18) != '\0';
                }
                else {
                  bVar14 = true;
                }
                *(bool *)(plVar25 + 0xb) = bVar14;
                *(undefined4 *)((long)plVar25 + 0x4c) = *(undefined4 *)(lVar20 + 0xc);
                (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar2 + 0x18) * 0x200 +
                            0xd0))(lVar2,plVar25[3],local_140,&local_78,&local_1e0,plVar25 + 8);
              }
LAB_02e8ba20:
              iVar16 = *(int *)(plVar25[7] + 0xc);
              if (plVar24 != (long *)0x0) {
                lVar20 = *plVar24;
                if (((*(byte *)(lVar20 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
                  puVar18 = (undefined8 *)plVar24[2];
                  uVar17 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar17 <= (ulong)plVar24[3]) &&
                     (plVar24[2] = uVar17, puVar18 != (undefined8 *)0x0)) {
                    *puVar18 = &DAT_03c4e575;
                    puVar18[1] = *(undefined8 *)(plVar24[6] + 8);
                  }
                }
                puVar18 = (undefined8 *)plVar24[2];
                uVar17 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
                if ((uVar17 <= (ulong)plVar24[3]) &&
                   (plVar24[2] = uVar17, puVar18 != (undefined8 *)0x0)) {
                  *puVar18 = &DAT_03c2d363;
                  uVar33 = nn::os::GetSystemTick();
                  puVar18[1] = uVar33;
                }
                if (*(code **)(lVar20 + 0x20) != (code *)0x0) {
                  (**(code **)(lVar20 + 0x20))(*(undefined8 *)(lVar20 + 0x28));
                }
              }
              *(bool *)(param_3 + 8) = iVar16 == 0;
            }
            goto LAB_02e8bac0;
          }
          uVar3 = *(ushort *)((long)pfVar19 + 0x1e);
          lVar20 = 0;
          if (*param_1 != 0) {
            lVar20 = *param_1 + (long)param_1;
          }
          pfVar19 = (float *)(lVar20 + (ulong)*(ushort *)(pfVar19 + 7) * 0x20);
          pfVar1 = (float *)(lVar20 + (ulong)uVar3 * 0x20);
          bVar21 = 0;
          if ((char)param_3[8] == '\0') {
LAB_02e8b448:
            bVar22 = 0;
          }
          else {
            uVar58 = *(undefined8 *)(*(long *)(*param_3 + 0x38) + 0x10);
            fVar52 = (float)param_3[2];
            fVar5 = (float)((ulong)param_3[2] >> 0x20);
            fVar6 = (float)param_3[3];
            fVar46 = (float)((ulong)param_3[3] >> 0x20);
            fVar51 = (float)param_3[6];
            auVar43._0_4_ = (*pfVar19 - fVar52) * fVar51;
            fVar54 = (float)((ulong)param_3[6] >> 0x20);
            auVar43._4_4_ = (pfVar19[1] - fVar5) * fVar54;
            fVar55 = (float)param_3[7];
            auVar43._8_4_ = (pfVar19[2] - fVar6) * fVar55;
            fVar56 = (float)((ulong)param_3[7] >> 0x20);
            auVar43._12_4_ = (pfVar19[3] - fVar46) * fVar56;
            auVar49._0_4_ = fVar51 * (pfVar19[4] - fVar52);
            auVar49._4_4_ = fVar54 * (pfVar19[5] - fVar5);
            auVar49._8_4_ = fVar55 * (pfVar19[6] - fVar6);
            auVar49._12_4_ = fVar56 * (0.0 - fVar46);
            auVar29._0_4_ = fVar51 * (*pfVar1 - fVar52);
            auVar29._4_4_ = fVar54 * (pfVar1[1] - fVar5);
            auVar29._8_4_ = fVar55 * (pfVar1[2] - fVar6);
            auVar29._12_4_ = fVar56 * (pfVar1[3] - fVar46);
            auVar35._0_4_ = fVar51 * (pfVar1[4] - fVar52);
            auVar35._4_4_ = fVar54 * (pfVar1[5] - fVar5);
            auVar35._8_4_ = fVar55 * (pfVar1[6] - fVar6);
            auVar35._12_4_ = fVar56 * (0.0 - fVar46);
            auVar62 = NEON_fmin(auVar43,auVar49,4);
            auVar44 = NEON_fmax(auVar43,auVar49,4);
            uVar33 = NEON_fmaxp(auVar62._0_8_,auVar62._0_8_,4);
            uVar34 = NEON_fmax(CONCAT44(auVar62._8_4_,auVar62._8_4_),uVar33,4);
            uVar33 = NEON_fminp(auVar44._0_8_,auVar44._0_8_,4);
            uVar33 = NEON_fmin(CONCAT44(auVar44._8_4_,auVar44._8_4_),uVar33,4);
            uVar47 = NEON_fmax(uVar34,0,4);
            uVar41 = NEON_fmin(uVar33,uVar58,4);
            auVar62 = NEON_fmin(auVar29,auVar35,4);
            auVar44 = NEON_fmax(auVar29,auVar35,4);
            uVar33 = NEON_fmaxp(auVar62._0_8_,auVar62._0_8_,4);
            uVar34 = NEON_fmax(CONCAT44(auVar62._8_4_,auVar62._8_4_),uVar33,4);
            uVar33 = NEON_fminp(auVar44._0_8_,auVar44._0_8_,4);
            uVar33 = NEON_fmin(CONCAT44(auVar44._8_4_,auVar44._8_4_),uVar33,4);
            uVar34 = NEON_fmax(uVar34,0,4);
            uVar33 = NEON_fmin(uVar33,uVar58,4);
            bVar21 = -((float)uVar47 <= (float)uVar41) & 1;
            if ((bool)(~((float)uVar34 <= (float)uVar33) & 1)) goto LAB_02e8b448;
            bVar22 = 2;
          }
          bVar22 = bVar22 | bVar21;
        } while (bVar22 == 1);
        if (bVar22 == 3) {
          iVar16 = (int)param_2[1];
          lVar20 = (long)iVar16;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar16) {
            FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar20 + 1);
            iVar16 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar20 + 1);
          *(ushort *)(*param_2 + (long)iVar16 * 2) = uVar3;
          goto LAB_02e8b360;
        }
        pfVar19 = pfVar1;
        if (bVar22 == 2) goto LAB_02e8b360;
LAB_02e8bac0:
        if ((int)lVar13 < (int)param_2[1]) {
          iVar16 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar16;
          lVar20 = 0;
          if (*param_1 != 0) {
            lVar20 = *param_1 + (long)param_1;
          }
          pfVar19 = (float *)(lVar20 + (ulong)*(ushort *)(*param_2 + (long)iVar16 * 2) * 0x20);
          goto LAB_02e8b360;
        }
      }
    }
  }
  return;
}


