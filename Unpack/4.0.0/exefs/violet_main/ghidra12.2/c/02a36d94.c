/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a36d94; name: FUN_02a36d94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02a36d94(float param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  byte bVar3;
  undefined1 uVar4;
  short sVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 *puVar27;
  int iVar28;
  ulong uVar29;
  long *plVar30;
  uint uVar31;
  undefined4 uVar32;
  long lVar33;
  code *pcVar34;
  short sVar35;
  byte *pbVar36;
  long lVar37;
  bool bVar38;
  long *plVar39;
  long lVar40;
  float fVar41;
  float fVar42;
  float fVar51;
  float fVar52;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar54;
  undefined1 auVar48 [16];
  float fVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar55;
  float fVar61;
  float fVar63;
  float fVar64;
  undefined1 auVar57 [16];
  int iVar56;
  undefined1 auVar58 [16];
  int iVar62;
  int iVar65;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  int iVar81;
  int iVar92;
  int iVar93;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float local_3d0;
  float fStack_3cc;
  undefined8 local_3c0;
  char *pcStack_3b8;
  undefined8 local_3b0;
  long *local_3a8;
  undefined8 local_3a0;
  char *pcStack_398;
  undefined8 local_390;
  long *local_388;
  undefined8 local_380;
  char *pcStack_378;
  undefined8 local_370;
  long *local_368;
  undefined8 local_360;
  char *pcStack_358;
  undefined8 local_350;
  long *local_348;
  undefined8 local_340;
  char *pcStack_338;
  undefined8 local_330;
  long *local_328;
  code *local_320;
  code *local_318;
  code *local_310;
  code *local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined1 local_2e0;
  undefined1 *local_2a0;
  code *local_298;
  code *local_290;
  code *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined1 local_260;
  undefined8 *local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  char *pcStack_208;
  undefined8 local_200;
  long *local_1f8;
  undefined8 local_1f0;
  char *local_1e8;
  undefined8 local_1e0;
  long *local_1d8;
  undefined8 local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  long *local_198;
  undefined8 *local_190;
  long **local_188;
  undefined8 local_180;
  long *local_178;
  long *local_170;
  code *local_168;
  long *local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_140 [96];
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_38;
  
  switch(*(undefined4 *)(param_2 + 0xa0)) {
  case 0:
    lVar33 = *(long *)(param_2 + 0xc0);
    if (lVar33 != 0) {
      if ((*(byte *)(*(long *)(lVar33 + 0xb0) + 0x6c) & 1) == 0) {
        return 0;
      }
      lVar37 = *(long *)(lVar33 + 0xb0);
      plVar30 = (long *)(lVar37 + 0x78);
      lVar33 = nn::os::GetCurrentThread();
      do {
        if (*plVar30 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar37 + 0x80));
            while (*plVar30 == 0) {
              cVar6 = '\x01';
              bVar38 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar38) {
                *plVar30 = lVar33;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_02a36e1c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar38) {
          *plVar30 = lVar33;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_02a36e1c:
      iVar28 = *(int *)(lVar37 + 0x68);
      cVar6 = *(char *)(lVar37 + 100);
      *(undefined8 *)(lVar37 + 0x78) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar37 + 0x80));
      if (iVar28 != 0) {
        return 0;
      }
      if (cVar6 == '\0') {
        return 0;
      }
      uVar31 = 2;
      *(undefined4 *)(param_2 + 0xa0) = 2;
      if (*(char *)(param_2 + 0x91) == '\0') {
        uVar31 = (uint)*(byte *)(param_2 + 0x90);
      }
      snprintf((char *)&local_170,0x100,"raidEffgem_%d_%02d_%03d_%d_%lu_%d",*(int *)(param_2 + 0x40)
               ,*(int *)(param_2 + 0x80),*(int *)(param_2 + 0x84),uVar31,*(ulong *)(param_2 + 0x88),
               *(int *)(param_2 + 0x94));
      lVar33 = *(long *)(param_2 + 0x30);
      if ((lVar33 == 0) || (*(short *)(lVar33 + 0x1a) == 0)) {
        plVar30 = (long *)0x0;
      }
      else {
        psVar1 = (short *)(lVar33 + 0x1a);
        sVar35 = *(short *)(lVar33 + 0x1a);
        do {
          sVar5 = *psVar1;
          if (sVar5 == sVar35) {
            cVar6 = '\x01';
            bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar38) {
              *psVar1 = sVar35 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_02a38a20;
            bVar38 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_02a38a20:
            bVar38 = false;
          }
          if (bVar38) {
            plVar30 = (long *)0x0;
            if (*(long *)(lVar33 + 0x10) != 0) {
              plVar30 = (long *)(*(long *)(lVar33 + 0x10) + -0x28);
            }
            break;
          }
          plVar30 = (long *)0x0;
          sVar35 = sVar5;
        } while (sVar5 != 0);
      }
      local_190 = (undefined8 *)&DAT_cbf29ce484222645;
      if ((byte)local_170 != 0) {
        pbVar36 = (byte *)((ulong)&local_170 | 1);
        bVar3 = (byte)local_170;
        do {
          local_190 = (undefined8 *)(((ulong)local_190 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (bVar3 != 0);
      }
      local_188 = &local_170;
      local_180 = 0xff;
      local_178 = (long *)0x0;
      FUN_010b6530(&local_220,plVar30,&local_190,(long *)(param_2 + 0xc0),0,0);
      plVar39 = *(long **)(param_2 + 200);
      *(undefined8 *)(param_2 + 200) = 0;
      if (plVar39 != (long *)0x0) {
        lVar33 = plVar39[6];
        psVar1 = (short *)(lVar33 + 0x1a);
        do {
          sVar35 = *psVar1;
          cVar6 = '\x01';
          bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar38) {
            *psVar1 = sVar35 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar35 == 1) {
          *(undefined8 *)(lVar33 + 0x10) = 0;
          (**(code **)(*plVar39 + 0x50))();
        }
        else if (sVar35 == 0) goto LAB_02a38598;
      }
      puVar27 = local_220;
      local_220 = (undefined8 *)0x0;
      *(undefined8 **)(param_2 + 200) = puVar27;
      if (local_178 != (long *)0x0) {
        (**(code **)(*local_178 + 0x20))();
      }
      if (plVar30 != (long *)0x0) {
        (**(code **)(*plVar30 + 0x60))(plVar30);
      }
      plVar30 = *(long **)(param_2 + 200);
      auVar50 = *(undefined1 (*) [16])(param_2 + 0x50);
      plVar30[0x1d] = auVar50._8_8_;
      plVar30[0x1c] = auVar50._0_8_;
      if (*(char *)((long)plVar30 + 0xf4) == '\0') {
        *(undefined1 *)((long)plVar30 + 0xf4) = 1;
        (**(code **)(*plVar30 + 0x78))();
      }
      auVar70._8_4_ = 0x3f000000;
      auVar70._0_8_ = 0x3f0000003f000000;
      auVar70._12_4_ = 0x3f000000;
      fVar55 = ((*(float *)(param_2 + 0x68) * 3.1415927) / 180.0) * 0.5;
      fVar61 = ((*(float *)(param_2 + 0x60) * 3.1415927) / 180.0) * 0.5;
      fVar64 = ((*(float *)(param_2 + 100) * 3.1415927) / 180.0) * 0.5;
      fVar41 = fVar55 + 1.5707964;
      fVar53 = fVar61 + 1.5707964;
      fVar63 = fVar64 + 1.5707964;
      auVar82._0_4_ = -(uint)(0.0 <= fVar55);
      auVar82._4_4_ = -(uint)(0.0 <= fVar61);
      auVar82._8_4_ = -(uint)(0.0 <= fVar64);
      auVar82._12_4_ = 0xffffffff;
      iVar28 = -(uint)(0.0 <= fVar53);
      iVar17 = -(uint)(0.0 <= fVar63);
      auVar21._8_4_ = 0xbf000000;
      auVar21._0_8_ = 0xbf000000bf000000;
      auVar21._12_4_ = 0xbf000000;
      auVar83._8_4_ = 0xbf000000;
      auVar83._0_8_ = 0xbf000000bf000000;
      auVar83._12_4_ = 0xbf000000;
      auVar83 = auVar83 ^ (auVar21 ^ auVar70) & auVar82;
      auVar22._8_4_ = 0xbf000000;
      auVar22._0_8_ = 0xbf000000bf000000;
      auVar22._12_4_ = 0xbf000000;
      auVar16[4] = (char)iVar28;
      auVar16._0_4_ = -(uint)(0.0 <= fVar41);
      auVar16[5] = (char)((uint)iVar28 >> 8);
      auVar16[6] = (char)((uint)iVar28 >> 0x10);
      auVar16[7] = (char)((uint)iVar28 >> 0x18);
      auVar16[8] = (char)iVar17;
      auVar16[9] = (char)((uint)iVar17 >> 8);
      auVar16[10] = (char)((uint)iVar17 >> 0x10);
      auVar16[0xb] = (char)((uint)iVar17 >> 0x18);
      auVar16[0xc] = 0xff;
      auVar16[0xd] = 0xff;
      auVar16[0xe] = 0xff;
      auVar16[0xf] = 0xff;
      auVar70 = auVar70 ^ (auVar70 ^ auVar22) & ~auVar16;
      iVar28 = -(uint)(fVar55 == 0.0);
      iVar17 = -(uint)(fVar61 == 0.0);
      iVar18 = -(uint)(fVar64 == 0.0);
      auVar84._0_4_ = (int)(auVar83._0_4_ + fVar55 * 0.15915494);
      auVar84._4_4_ = (int)(auVar83._4_4_ + fVar61 * 0.15915494);
      auVar84._8_4_ = (int)(auVar83._8_4_ + fVar64 * 0.15915494);
      auVar84._12_4_ = (int)(auVar83._12_4_ + 0.0);
      auVar71._0_4_ = (int)(auVar70._0_4_ + fVar41 * 0.15915494);
      auVar71._4_4_ = (int)(auVar70._4_4_ + fVar53 * 0.15915494);
      auVar71._8_4_ = (int)(auVar70._8_4_ + fVar63 * 0.15915494);
      auVar71._12_4_ = (int)(auVar70._12_4_ + 0.25);
      plVar30 = *(long **)(param_2 + 200);
      auVar78 = NEON_scvtf(auVar84,4);
      auVar50 = NEON_scvtf(auVar71,4);
      fVar98 = fVar55 - auVar78._0_4_ * 6.2831855;
      fVar100 = fVar61 - auVar78._4_4_ * 6.2831855;
      fVar102 = fVar64 - auVar78._8_4_ * 6.2831855;
      fVar104 = 0.0 - auVar78._12_4_ * 6.2831855;
      fVar42 = fVar41 - auVar50._0_4_ * 6.2831855;
      fVar51 = fVar53 - auVar50._4_4_ * 6.2831855;
      fVar52 = fVar63 - auVar50._8_4_ * 6.2831855;
      fVar54 = 1.5707964 - auVar50._12_4_ * 6.2831855;
      auVar76._0_4_ = -(uint)(fVar98 < -1.5707964);
      auVar76._4_4_ = -(uint)(fVar100 < -1.5707964);
      auVar76._8_4_ = -(uint)(fVar102 < -1.5707964);
      auVar76._12_4_ = -(uint)(fVar104 < -1.5707964);
      auVar72._0_4_ = -3.1415927 - fVar42;
      auVar72._4_4_ = -3.1415927 - fVar51;
      auVar72._8_4_ = -3.1415927 - fVar52;
      auVar72._12_4_ = -3.1415927 - fVar54;
      auVar85._0_4_ = -(uint)(fVar42 < -1.5707964);
      auVar85._4_4_ = -(uint)(fVar51 < -1.5707964);
      auVar85._8_4_ = -(uint)(fVar52 < -1.5707964);
      auVar85._12_4_ = -(uint)(fVar54 < -1.5707964);
      auVar24._4_4_ = fVar100;
      auVar24._0_4_ = fVar98;
      auVar24._8_4_ = fVar102;
      auVar24._12_4_ = fVar104;
      auVar26._4_4_ = -3.1415927 - fVar100;
      auVar26._0_4_ = -3.1415927 - fVar98;
      auVar26._8_4_ = -3.1415927 - fVar102;
      auVar26._12_4_ = -3.1415927 - fVar104;
      auVar77._4_4_ = fVar100;
      auVar77._0_4_ = fVar98;
      auVar77._8_4_ = fVar102;
      auVar77._12_4_ = fVar104;
      auVar77 = auVar77 ^ (auVar24 ^ auVar26) & auVar76;
      auVar11[4] = SUB41(fVar51,0);
      auVar11._0_4_ = fVar42;
      auVar11[5] = (char)((uint)fVar51 >> 8);
      auVar11[6] = (char)((uint)fVar51 >> 0x10);
      auVar11[7] = (char)((uint)fVar51 >> 0x18);
      auVar11[8] = SUB41(fVar52,0);
      auVar11[9] = (char)((uint)fVar52 >> 8);
      auVar11[10] = (char)((uint)fVar52 >> 0x10);
      auVar11[0xb] = (char)((uint)fVar52 >> 0x18);
      auVar11[0xc] = SUB41(fVar54,0);
      auVar11[0xd] = (char)((uint)fVar54 >> 8);
      auVar11[0xe] = (char)((uint)fVar54 >> 0x10);
      auVar11[0xf] = (char)((uint)fVar54 >> 0x18);
      auVar72 = auVar72 ^ (auVar72 ^ auVar11) & ~auVar85;
      fVar42 = 3.1415927 - auVar77._4_4_;
      fVar51 = 3.1415927 - auVar77._8_4_;
      fVar52 = 3.1415927 - auVar77._12_4_;
      auVar86._0_4_ = -(uint)(1.5707964 < auVar72._0_4_);
      auVar86._4_4_ = -(uint)(1.5707964 < auVar72._4_4_);
      auVar86._8_4_ = -(uint)(1.5707964 < auVar72._8_4_);
      auVar86._12_4_ = -(uint)(1.5707964 < auVar72._12_4_);
      auVar66._0_4_ = 3.1415927 - auVar72._0_4_;
      auVar66._4_4_ = 3.1415927 - auVar72._4_4_;
      auVar66._8_4_ = 3.1415927 - auVar72._8_4_;
      auVar66._12_4_ = 3.1415927 - auVar72._12_4_;
      auVar43._0_4_ = -(uint)(1.5707964 < auVar77._0_4_);
      auVar43._4_4_ = -(uint)(1.5707964 < auVar77._4_4_);
      auVar43._8_4_ = -(uint)(1.5707964 < auVar77._8_4_);
      auVar43._12_4_ = -(uint)(1.5707964 < auVar77._12_4_);
      auVar66 = auVar66 ^ (auVar66 ^ auVar72) & ~auVar86;
      auVar12[4] = SUB41(fVar42,0);
      auVar12._0_4_ = 3.1415927 - auVar77._0_4_;
      auVar12[5] = (char)((uint)fVar42 >> 8);
      auVar12[6] = (char)((uint)fVar42 >> 0x10);
      auVar12[7] = (char)((uint)fVar42 >> 0x18);
      auVar12[8] = SUB41(fVar51,0);
      auVar12[9] = (char)((uint)fVar51 >> 8);
      auVar12[10] = (char)((uint)fVar51 >> 0x10);
      auVar12[0xb] = (char)((uint)fVar51 >> 0x18);
      auVar12[0xc] = SUB41(fVar52,0);
      auVar12[0xd] = (char)((uint)fVar52 >> 8);
      auVar12[0xe] = (char)((uint)fVar52 >> 0x10);
      auVar12[0xf] = (char)((uint)fVar52 >> 0x18);
      auVar77 = auVar77 ^ (auVar77 ^ auVar12) & auVar43;
      auVar50 = NEON_fmov(0x3f800000,4);
      fVar98 = auVar66._0_4_;
      fVar99 = fVar98 * fVar98;
      fVar100 = auVar66._4_4_;
      fVar101 = fVar100 * fVar100;
      fVar102 = auVar66._8_4_;
      fVar103 = fVar102 * fVar102;
      fVar104 = auVar66._12_4_;
      fVar105 = fVar104 * fVar104;
      fVar42 = auVar77._0_4_;
      fVar94 = fVar42 * fVar42;
      fVar51 = auVar77._4_4_;
      fVar95 = fVar51 * fVar51;
      fVar52 = auVar77._8_4_;
      fVar96 = fVar52 * fVar52;
      fVar54 = auVar77._12_4_;
      fVar97 = fVar54 * fVar54;
      auVar58._8_4_ = 0x7fc00000;
      auVar58._0_8_ = 0x7fc000007fc00000;
      auVar58._12_4_ = 0x7fc00000;
      iVar81 = -(uint)(ABS(fVar41) == INFINITY);
      iVar92 = -(uint)(ABS(fVar53) == INFINITY);
      iVar93 = -(uint)(ABS(fVar63) == INFINITY);
      iVar56 = -(uint)(ABS(fVar55) == INFINITY);
      iVar62 = -(uint)(ABS(fVar61) == INFINITY);
      iVar65 = -(uint)(ABS(fVar64) == INFINITY);
      auVar57[0] = ~(byte)iVar56;
      auVar57[1] = ~(byte)((uint)iVar56 >> 8);
      auVar57[2] = ~(byte)((uint)iVar56 >> 0x10);
      auVar57[3] = ~(byte)((uint)iVar56 >> 0x18);
      auVar57[4] = ~(byte)iVar62;
      auVar57[5] = ~(byte)((uint)iVar62 >> 8);
      auVar57[6] = ~(byte)((uint)iVar62 >> 0x10);
      auVar57[7] = ~(byte)((uint)iVar62 >> 0x18);
      auVar57[8] = ~(byte)iVar65;
      auVar57[9] = ~(byte)((uint)iVar65 >> 8);
      auVar57[10] = ~(byte)((uint)iVar65 >> 0x10);
      auVar57[0xb] = ~(byte)((uint)iVar65 >> 0x18);
      auVar57[0xc] = 0xff;
      auVar57[0xd] = 0xff;
      auVar57[0xe] = 0xff;
      auVar57[0xf] = 0xff;
      auVar67._0_4_ =
           fVar98 * (auVar50._0_4_ +
                    fVar99 * (fVar99 * (fVar99 * (fVar99 * (fVar99 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar67._4_4_ =
           fVar100 * (auVar50._4_4_ +
                     fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar67._8_4_ =
           fVar102 * (auVar50._8_4_ +
                     fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar67._12_4_ =
           fVar104 * (auVar50._12_4_ +
                     fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar13[1] = ~(byte)((uint)iVar81 >> 8);
      auVar13[0] = ~(byte)iVar81;
      auVar13[2] = ~(byte)((uint)iVar81 >> 0x10);
      auVar13[3] = ~(byte)((uint)iVar81 >> 0x18);
      auVar13[4] = ~(byte)iVar92;
      auVar13[5] = ~(byte)((uint)iVar92 >> 8);
      auVar13[6] = ~(byte)((uint)iVar92 >> 0x10);
      auVar13[7] = ~(byte)((uint)iVar92 >> 0x18);
      auVar13[8] = ~(byte)iVar93;
      auVar13[9] = ~(byte)((uint)iVar93 >> 8);
      auVar13[10] = ~(byte)((uint)iVar93 >> 0x10);
      auVar13[0xb] = ~(byte)((uint)iVar93 >> 0x18);
      auVar13[0xc] = 0xff;
      auVar13[0xd] = 0xff;
      auVar13[0xe] = 0xff;
      auVar13[0xf] = 0xff;
      auVar67 = auVar67 ^ (auVar67 ^ auVar58) & ~auVar13;
      auVar14[1] = ~(byte)((uint)iVar28 >> 8);
      auVar14[0] = ~(byte)iVar28;
      auVar14[2] = ~(byte)((uint)iVar28 >> 0x10);
      auVar14[3] = ~(byte)((uint)iVar28 >> 0x18);
      auVar14[4] = ~(byte)iVar17;
      auVar14[5] = ~(byte)((uint)iVar17 >> 8);
      auVar14[6] = ~(byte)((uint)iVar17 >> 0x10);
      auVar14[7] = ~(byte)((uint)iVar17 >> 0x18);
      auVar14[8] = ~(byte)iVar18;
      auVar14[9] = ~(byte)((uint)iVar18 >> 8);
      auVar14[10] = ~(byte)((uint)iVar18 >> 0x10);
      auVar14[0xb] = ~(byte)((uint)iVar18 >> 0x18);
      auVar14._12_4_ = 0;
      auVar44._0_4_ =
           fVar42 * (auVar50._0_4_ +
                    fVar94 * (fVar94 * (fVar94 * (fVar94 * (fVar94 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar44._4_4_ =
           fVar51 * (auVar50._4_4_ +
                    fVar95 * (fVar95 * (fVar95 * (fVar95 * (fVar95 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar44._8_4_ =
           fVar52 * (auVar50._8_4_ +
                    fVar96 * (fVar96 * (fVar96 * (fVar96 * (fVar96 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar44._12_4_ =
           fVar54 * (auVar50._12_4_ +
                    fVar97 * (fVar97 * (fVar97 * (fVar97 * (fVar97 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar44 = auVar44 ^ (auVar44 ^ auVar58) & ~auVar57;
      fVar42 = auVar44._4_4_;
      auVar58 = auVar58 ^ (auVar58 ^ auVar67 ^ (auVar67 ^ auVar50) & ~auVar14) & auVar57;
      fVar41 = auVar44._0_4_;
      fVar51 = auVar58._0_4_;
      fVar63 = auVar58._4_4_;
      fVar52 = auVar58._8_4_;
      fVar53 = auVar44._8_4_;
      auVar45._0_8_ =
           CONCAT44(fVar53 * fVar51 * fVar63 +
                    fVar52 * fVar42 * fVar41 * (float)((ulong)_DAT_03cab3a0 >> 0x20),
                    fVar52 * fVar51 * fVar42 + fVar53 * fVar63 * fVar41 * (float)_DAT_03cab3a0);
      auVar45._8_4_ = fVar52 * fVar41 * fVar63 + fVar53 * fVar42 * fVar51 * (float)_UNK_03cab3a8;
      auVar45._12_4_ =
           fVar52 * fVar51 * fVar63 +
           fVar53 * fVar42 * fVar41 * (float)((ulong)_UNK_03cab3a8 >> 0x20);
      plVar30[0x1b] = auVar45._8_8_;
      plVar30[0x1a] = auVar45._0_8_;
      if (*(char *)((long)plVar30 + 0xf4) == '\0') {
        *(undefined1 *)((long)plVar30 + 0xf4) = 1;
        (**(code **)(*plVar30 + 0x78))();
      }
      lVar33 = _DAT_03caa980;
      plVar30 = *(long **)(param_2 + 200);
      plVar30[0x19] = _UNK_03caa988;
      plVar30[0x18] = lVar33;
      if (*(char *)((long)plVar30 + 0xf4) == '\0') {
        *(undefined1 *)((long)plVar30 + 0xf4) = 1;
        (**(code **)(*plVar30 + 0x78))();
      }
    }
    uVar32 = 1;
    goto LAB_02a37efc;
  case 1:
    lVar33 = *(long *)(param_2 + 0xa8);
    if ((*(byte *)(*(long *)(lVar33 + 0xb0) + 0x6c) & 1) == 0) {
      return 0;
    }
    lVar37 = *(long *)(lVar33 + 0xb0);
    plVar30 = (long *)(lVar37 + 0x78);
    lVar33 = nn::os::GetCurrentThread();
    do {
      if (*plVar30 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar37 + 0x80));
          while (*plVar30 == 0) {
            cVar6 = '\x01';
            bVar38 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar38) {
              *plVar30 = lVar33;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_02a37740;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar6 = '\x01';
      bVar38 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar38) {
        *plVar30 = lVar33;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_02a37740:
    iVar28 = *(int *)(lVar37 + 0x68);
    cVar6 = *(char *)(lVar37 + 100);
    *(undefined8 *)(lVar37 + 0x78) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar37 + 0x80));
    if (iVar28 != 0) {
      return 0;
    }
    if (cVar6 == '\0') {
      return 0;
    }
    if (*(char *)(param_2 + 0x91) == '\0') {
      uVar31 = (uint)*(byte *)(param_2 + 0x90);
    }
    else {
      uVar31 = 2;
    }
    iVar28 = *(int *)(param_2 + 0xd4);
    *(int *)(param_2 + 0xd4) = iVar28 + 1;
    snprintf((char *)&local_170,0x100,"raidgem_%d_%d_%d_%02d_%03d_%d_%lu_%d",iVar28,
             *(int *)(param_2 + 0x40),*(int *)(param_2 + 0x70),*(int *)(param_2 + 0x80),
             *(int *)(param_2 + 0x84),uVar31,*(ulong *)(param_2 + 0x88),*(int *)(param_2 + 0x94));
    lVar33 = *(long *)(param_2 + 0x30);
    if ((lVar33 == 0) || (*(short *)(lVar33 + 0x1a) == 0)) {
      plVar30 = (long *)0x0;
    }
    else {
      psVar1 = (short *)(lVar33 + 0x1a);
      sVar35 = *(short *)(lVar33 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar35) {
          cVar6 = '\x01';
          bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar38) {
            *psVar1 = sVar35 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_02a38984;
          bVar38 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02a38984:
          bVar38 = false;
        }
        if (bVar38) {
          plVar30 = (long *)0x0;
          if (*(long *)(lVar33 + 0x10) != 0) {
            plVar30 = (long *)(*(long *)(lVar33 + 0x10) + -0x28);
          }
          break;
        }
        plVar30 = (long *)0x0;
        sVar35 = sVar5;
      } while (sVar5 != 0);
    }
    local_190 = (undefined8 *)&DAT_cbf29ce484222645;
    if ((byte)local_170 != 0) {
      pbVar36 = (byte *)((ulong)&local_170 | 1);
      bVar3 = (byte)local_170;
      do {
        local_190 = (undefined8 *)(((ulong)local_190 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar36;
        pbVar36 = pbVar36 + 1;
      } while (bVar3 != 0);
    }
    local_188 = &local_170;
    local_180 = 0xff;
    local_178 = (long *)0x0;
    FUN_010b6530(&local_220,plVar30,&local_190,(long *)(param_2 + 0xa8),0,0);
    plVar39 = *(long **)(param_2 + 0xb0);
    *(undefined8 *)(param_2 + 0xb0) = 0;
    if (plVar39 != (long *)0x0) {
      lVar33 = plVar39[6];
      psVar1 = (short *)(lVar33 + 0x1a);
      do {
        sVar35 = *psVar1;
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar38) {
          *psVar1 = sVar35 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar35 == 1) {
        *(undefined8 *)(lVar33 + 0x10) = 0;
        (**(code **)(*plVar39 + 0x50))();
      }
      else if (sVar35 == 0) goto LAB_02a38598;
    }
    puVar27 = local_220;
    local_220 = (undefined8 *)0x0;
    *(undefined8 **)(param_2 + 0xb0) = puVar27;
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 0x60))(plVar30);
    }
    plVar30 = *(long **)(param_2 + 0xb0);
    auVar50 = *(undefined1 (*) [16])(param_2 + 0x50);
    plVar30[0x1d] = auVar50._8_8_;
    plVar30[0x1c] = auVar50._0_8_;
    if (*(char *)((long)plVar30 + 0xf4) == '\0') {
      *(undefined1 *)((long)plVar30 + 0xf4) = 1;
      (**(code **)(*plVar30 + 0x78))();
    }
    auVar73._8_4_ = 0x3f000000;
    auVar73._0_8_ = 0x3f0000003f000000;
    auVar73._12_4_ = 0x3f000000;
    fVar55 = ((*(float *)(param_2 + 0x68) * 3.1415927) / 180.0) * 0.5;
    fVar61 = ((*(float *)(param_2 + 0x60) * 3.1415927) / 180.0) * 0.5;
    fVar64 = ((*(float *)(param_2 + 100) * 3.1415927) / 180.0) * 0.5;
    fVar41 = fVar55 + 1.5707964;
    fVar53 = fVar61 + 1.5707964;
    fVar63 = fVar64 + 1.5707964;
    auVar87._0_4_ = -(uint)(0.0 <= fVar55);
    auVar87._4_4_ = -(uint)(0.0 <= fVar61);
    auVar87._8_4_ = -(uint)(0.0 <= fVar64);
    auVar87._12_4_ = 0xffffffff;
    iVar28 = -(uint)(0.0 <= fVar53);
    iVar17 = -(uint)(0.0 <= fVar63);
    auVar19._8_4_ = 0xbf000000;
    auVar19._0_8_ = 0xbf000000bf000000;
    auVar19._12_4_ = 0xbf000000;
    auVar88._8_4_ = 0xbf000000;
    auVar88._0_8_ = 0xbf000000bf000000;
    auVar88._12_4_ = 0xbf000000;
    auVar88 = auVar88 ^ (auVar19 ^ auVar73) & auVar87;
    auVar20._8_4_ = 0xbf000000;
    auVar20._0_8_ = 0xbf000000bf000000;
    auVar20._12_4_ = 0xbf000000;
    auVar15[4] = (char)iVar28;
    auVar15._0_4_ = -(uint)(0.0 <= fVar41);
    auVar15[5] = (char)((uint)iVar28 >> 8);
    auVar15[6] = (char)((uint)iVar28 >> 0x10);
    auVar15[7] = (char)((uint)iVar28 >> 0x18);
    auVar15[8] = (char)iVar17;
    auVar15[9] = (char)((uint)iVar17 >> 8);
    auVar15[10] = (char)((uint)iVar17 >> 0x10);
    auVar15[0xb] = (char)((uint)iVar17 >> 0x18);
    auVar15[0xc] = 0xff;
    auVar15[0xd] = 0xff;
    auVar15[0xe] = 0xff;
    auVar15[0xf] = 0xff;
    auVar73 = auVar73 ^ (auVar73 ^ auVar20) & ~auVar15;
    iVar28 = -(uint)(fVar55 == 0.0);
    iVar17 = -(uint)(fVar61 == 0.0);
    iVar18 = -(uint)(fVar64 == 0.0);
    auVar89._0_4_ = (int)(auVar88._0_4_ + fVar55 * 0.15915494);
    auVar89._4_4_ = (int)(auVar88._4_4_ + fVar61 * 0.15915494);
    auVar89._8_4_ = (int)(auVar88._8_4_ + fVar64 * 0.15915494);
    auVar89._12_4_ = (int)(auVar88._12_4_ + 0.0);
    auVar74._0_4_ = (int)(auVar73._0_4_ + fVar41 * 0.15915494);
    auVar74._4_4_ = (int)(auVar73._4_4_ + fVar53 * 0.15915494);
    auVar74._8_4_ = (int)(auVar73._8_4_ + fVar63 * 0.15915494);
    auVar74._12_4_ = (int)(auVar73._12_4_ + 0.25);
    plVar30 = *(long **)(param_2 + 0xb0);
    auVar78 = NEON_scvtf(auVar89,4);
    auVar50 = NEON_scvtf(auVar74,4);
    fVar98 = fVar55 - auVar78._0_4_ * 6.2831855;
    fVar100 = fVar61 - auVar78._4_4_ * 6.2831855;
    fVar102 = fVar64 - auVar78._8_4_ * 6.2831855;
    fVar104 = 0.0 - auVar78._12_4_ * 6.2831855;
    fVar42 = fVar41 - auVar50._0_4_ * 6.2831855;
    fVar51 = fVar53 - auVar50._4_4_ * 6.2831855;
    fVar52 = fVar63 - auVar50._8_4_ * 6.2831855;
    fVar54 = 1.5707964 - auVar50._12_4_ * 6.2831855;
    auVar79._0_4_ = -(uint)(fVar98 < -1.5707964);
    auVar79._4_4_ = -(uint)(fVar100 < -1.5707964);
    auVar79._8_4_ = -(uint)(fVar102 < -1.5707964);
    auVar79._12_4_ = -(uint)(fVar104 < -1.5707964);
    auVar75._0_4_ = -3.1415927 - fVar42;
    auVar75._4_4_ = -3.1415927 - fVar51;
    auVar75._8_4_ = -3.1415927 - fVar52;
    auVar75._12_4_ = -3.1415927 - fVar54;
    auVar90._0_4_ = -(uint)(fVar42 < -1.5707964);
    auVar90._4_4_ = -(uint)(fVar51 < -1.5707964);
    auVar90._8_4_ = -(uint)(fVar52 < -1.5707964);
    auVar90._12_4_ = -(uint)(fVar54 < -1.5707964);
    auVar23._4_4_ = fVar100;
    auVar23._0_4_ = fVar98;
    auVar23._8_4_ = fVar102;
    auVar23._12_4_ = fVar104;
    auVar25._4_4_ = -3.1415927 - fVar100;
    auVar25._0_4_ = -3.1415927 - fVar98;
    auVar25._8_4_ = -3.1415927 - fVar102;
    auVar25._12_4_ = -3.1415927 - fVar104;
    auVar80._4_4_ = fVar100;
    auVar80._0_4_ = fVar98;
    auVar80._8_4_ = fVar102;
    auVar80._12_4_ = fVar104;
    auVar80 = auVar80 ^ (auVar23 ^ auVar25) & auVar79;
    auVar7[4] = SUB41(fVar51,0);
    auVar7._0_4_ = fVar42;
    auVar7[5] = (char)((uint)fVar51 >> 8);
    auVar7[6] = (char)((uint)fVar51 >> 0x10);
    auVar7[7] = (char)((uint)fVar51 >> 0x18);
    auVar7[8] = SUB41(fVar52,0);
    auVar7[9] = (char)((uint)fVar52 >> 8);
    auVar7[10] = (char)((uint)fVar52 >> 0x10);
    auVar7[0xb] = (char)((uint)fVar52 >> 0x18);
    auVar7[0xc] = SUB41(fVar54,0);
    auVar7[0xd] = (char)((uint)fVar54 >> 8);
    auVar7[0xe] = (char)((uint)fVar54 >> 0x10);
    auVar7[0xf] = (char)((uint)fVar54 >> 0x18);
    auVar75 = auVar75 ^ (auVar75 ^ auVar7) & ~auVar90;
    fVar42 = 3.1415927 - auVar80._4_4_;
    fVar51 = 3.1415927 - auVar80._8_4_;
    fVar52 = 3.1415927 - auVar80._12_4_;
    auVar91._0_4_ = -(uint)(1.5707964 < auVar75._0_4_);
    auVar91._4_4_ = -(uint)(1.5707964 < auVar75._4_4_);
    auVar91._8_4_ = -(uint)(1.5707964 < auVar75._8_4_);
    auVar91._12_4_ = -(uint)(1.5707964 < auVar75._12_4_);
    auVar68._0_4_ = 3.1415927 - auVar75._0_4_;
    auVar68._4_4_ = 3.1415927 - auVar75._4_4_;
    auVar68._8_4_ = 3.1415927 - auVar75._8_4_;
    auVar68._12_4_ = 3.1415927 - auVar75._12_4_;
    auVar47._0_4_ = -(uint)(1.5707964 < auVar80._0_4_);
    auVar47._4_4_ = -(uint)(1.5707964 < auVar80._4_4_);
    auVar47._8_4_ = -(uint)(1.5707964 < auVar80._8_4_);
    auVar47._12_4_ = -(uint)(1.5707964 < auVar80._12_4_);
    auVar68 = auVar68 ^ (auVar68 ^ auVar75) & ~auVar91;
    auVar8[4] = SUB41(fVar42,0);
    auVar8._0_4_ = 3.1415927 - auVar80._0_4_;
    auVar8[5] = (char)((uint)fVar42 >> 8);
    auVar8[6] = (char)((uint)fVar42 >> 0x10);
    auVar8[7] = (char)((uint)fVar42 >> 0x18);
    auVar8[8] = SUB41(fVar51,0);
    auVar8[9] = (char)((uint)fVar51 >> 8);
    auVar8[10] = (char)((uint)fVar51 >> 0x10);
    auVar8[0xb] = (char)((uint)fVar51 >> 0x18);
    auVar8[0xc] = SUB41(fVar52,0);
    auVar8[0xd] = (char)((uint)fVar52 >> 8);
    auVar8[0xe] = (char)((uint)fVar52 >> 0x10);
    auVar8[0xf] = (char)((uint)fVar52 >> 0x18);
    auVar80 = auVar80 ^ (auVar80 ^ auVar8) & auVar47;
    auVar50 = NEON_fmov(0x3f800000,4);
    fVar98 = auVar68._0_4_;
    fVar99 = fVar98 * fVar98;
    fVar100 = auVar68._4_4_;
    fVar101 = fVar100 * fVar100;
    fVar102 = auVar68._8_4_;
    fVar103 = fVar102 * fVar102;
    fVar104 = auVar68._12_4_;
    fVar105 = fVar104 * fVar104;
    fVar42 = auVar80._0_4_;
    fVar94 = fVar42 * fVar42;
    fVar51 = auVar80._4_4_;
    fVar95 = fVar51 * fVar51;
    fVar52 = auVar80._8_4_;
    fVar96 = fVar52 * fVar52;
    fVar54 = auVar80._12_4_;
    fVar97 = fVar54 * fVar54;
    auVar60._8_4_ = 0x7fc00000;
    auVar60._0_8_ = 0x7fc000007fc00000;
    auVar60._12_4_ = 0x7fc00000;
    iVar81 = -(uint)(ABS(fVar41) == INFINITY);
    iVar92 = -(uint)(ABS(fVar53) == INFINITY);
    iVar93 = -(uint)(ABS(fVar63) == INFINITY);
    iVar56 = -(uint)(ABS(fVar55) == INFINITY);
    iVar62 = -(uint)(ABS(fVar61) == INFINITY);
    iVar65 = -(uint)(ABS(fVar64) == INFINITY);
    auVar59[0] = ~(byte)iVar56;
    auVar59[1] = ~(byte)((uint)iVar56 >> 8);
    auVar59[2] = ~(byte)((uint)iVar56 >> 0x10);
    auVar59[3] = ~(byte)((uint)iVar56 >> 0x18);
    auVar59[4] = ~(byte)iVar62;
    auVar59[5] = ~(byte)((uint)iVar62 >> 8);
    auVar59[6] = ~(byte)((uint)iVar62 >> 0x10);
    auVar59[7] = ~(byte)((uint)iVar62 >> 0x18);
    auVar59[8] = ~(byte)iVar65;
    auVar59[9] = ~(byte)((uint)iVar65 >> 8);
    auVar59[10] = ~(byte)((uint)iVar65 >> 0x10);
    auVar59[0xb] = ~(byte)((uint)iVar65 >> 0x18);
    auVar59[0xc] = 0xff;
    auVar59[0xd] = 0xff;
    auVar59[0xe] = 0xff;
    auVar59[0xf] = 0xff;
    auVar69._0_4_ =
         fVar98 * (auVar50._0_4_ +
                  fVar99 * (fVar99 * (fVar99 * (fVar99 * (fVar99 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar69._4_4_ =
         fVar100 * (auVar50._4_4_ +
                   fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar69._8_4_ =
         fVar102 * (auVar50._8_4_ +
                   fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar69._12_4_ =
         fVar104 * (auVar50._12_4_ +
                   fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * -2.5052108e-08 +
                                                              2.7557319e-06) + -0.0001984127) +
                                        0.008333334) + -0.16666667));
    auVar9[1] = ~(byte)((uint)iVar81 >> 8);
    auVar9[0] = ~(byte)iVar81;
    auVar9[2] = ~(byte)((uint)iVar81 >> 0x10);
    auVar9[3] = ~(byte)((uint)iVar81 >> 0x18);
    auVar9[4] = ~(byte)iVar92;
    auVar9[5] = ~(byte)((uint)iVar92 >> 8);
    auVar9[6] = ~(byte)((uint)iVar92 >> 0x10);
    auVar9[7] = ~(byte)((uint)iVar92 >> 0x18);
    auVar9[8] = ~(byte)iVar93;
    auVar9[9] = ~(byte)((uint)iVar93 >> 8);
    auVar9[10] = ~(byte)((uint)iVar93 >> 0x10);
    auVar9[0xb] = ~(byte)((uint)iVar93 >> 0x18);
    auVar9[0xc] = 0xff;
    auVar9[0xd] = 0xff;
    auVar9[0xe] = 0xff;
    auVar9[0xf] = 0xff;
    auVar69 = auVar69 ^ (auVar69 ^ auVar60) & ~auVar9;
    auVar10[1] = ~(byte)((uint)iVar28 >> 8);
    auVar10[0] = ~(byte)iVar28;
    auVar10[2] = ~(byte)((uint)iVar28 >> 0x10);
    auVar10[3] = ~(byte)((uint)iVar28 >> 0x18);
    auVar10[4] = ~(byte)iVar17;
    auVar10[5] = ~(byte)((uint)iVar17 >> 8);
    auVar10[6] = ~(byte)((uint)iVar17 >> 0x10);
    auVar10[7] = ~(byte)((uint)iVar17 >> 0x18);
    auVar10[8] = ~(byte)iVar18;
    auVar10[9] = ~(byte)((uint)iVar18 >> 8);
    auVar10[10] = ~(byte)((uint)iVar18 >> 0x10);
    auVar10[0xb] = ~(byte)((uint)iVar18 >> 0x18);
    auVar10._12_4_ = 0;
    auVar48._0_4_ =
         fVar42 * (auVar50._0_4_ +
                  fVar94 * (fVar94 * (fVar94 * (fVar94 * (fVar94 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar48._4_4_ =
         fVar51 * (auVar50._4_4_ +
                  fVar95 * (fVar95 * (fVar95 * (fVar95 * (fVar95 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar48._8_4_ =
         fVar52 * (auVar50._8_4_ +
                  fVar96 * (fVar96 * (fVar96 * (fVar96 * (fVar96 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar48._12_4_ =
         fVar54 * (auVar50._12_4_ +
                  fVar97 * (fVar97 * (fVar97 * (fVar97 * (fVar97 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar48 = auVar48 ^ (auVar48 ^ auVar60) & ~auVar59;
    fVar42 = auVar48._4_4_;
    auVar60 = auVar60 ^ (auVar60 ^ auVar69 ^ (auVar69 ^ auVar50) & ~auVar10) & auVar59;
    fVar41 = auVar48._0_4_;
    fVar51 = auVar60._0_4_;
    fVar63 = auVar60._4_4_;
    fVar52 = auVar60._8_4_;
    fVar53 = auVar48._8_4_;
    auVar49._0_8_ =
         CONCAT44(fVar53 * fVar51 * fVar63 +
                  fVar52 * fVar42 * fVar41 * (float)((ulong)_DAT_03cab3a0 >> 0x20),
                  fVar52 * fVar51 * fVar42 + fVar53 * fVar63 * fVar41 * (float)_DAT_03cab3a0);
    auVar49._8_4_ = fVar52 * fVar41 * fVar63 + fVar53 * fVar42 * fVar51 * (float)_UNK_03cab3a8;
    auVar49._12_4_ =
         fVar52 * fVar51 * fVar63 + fVar53 * fVar42 * fVar41 * (float)((ulong)_UNK_03cab3a8 >> 0x20)
    ;
    plVar30[0x1b] = auVar49._8_8_;
    plVar30[0x1a] = auVar49._0_8_;
    if (*(char *)((long)plVar30 + 0xf4) == '\0') {
      *(undefined1 *)((long)plVar30 + 0xf4) = 1;
      (**(code **)(*plVar30 + 0x78))();
    }
    lVar33 = _DAT_03cabd80;
    plVar30 = *(long **)(param_2 + 0xb0);
    plVar30[0x19] = _UNK_03cabd88;
    plVar30[0x18] = lVar33;
    if (*(char *)((long)plVar30 + 0xf4) == '\0') {
      *(undefined1 *)((long)plVar30 + 0xf4) = 1;
      (**(code **)(*plVar30 + 0x78))();
    }
    uVar32 = 2;
LAB_02a37efc:
    *(undefined4 *)(param_2 + 0xa0) = uVar32;
    return 0;
  case 2:
    uVar29 = (**(code **)(**(long **)(param_2 + 0xb0) + 0xd8))();
    if ((uVar29 & 1) == 0) {
      return 0;
    }
    *(undefined4 *)(param_2 + 0xa0) = 3;
    *(undefined4 *)(param_2 + 0xb8) = 0;
    local_1b0 = 0xbf55de83fe4983ad;
    local_1a8 = "create_ptcl";
    local_1a0 = 0xb;
    local_198 = (long *)0x0;
    FUN_00fe3d00(&local_170,param_2,&local_1b0);
    if (local_198 != (long *)0x0) {
      (**(code **)(*local_198 + 0x20))();
    }
    plVar30 = local_170;
    if (local_170 != (long *)0x0) {
      plVar39 = local_170 + 0x49;
      lVar33 = nn::os::GetCurrentThread();
      do {
        if (*plVar39 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar30 + 0x4a));
            while (*plVar39 == 0) {
              cVar6 = '\x01';
              bVar38 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar38) {
                *plVar39 = lVar33;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_02a372ec;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar38) {
          *plVar39 = lVar33;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_02a372ec:
      *(undefined1 *)((long)plVar30 + 0x1c9) = 0;
      plVar30[0x49] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar30 + 0x4a));
      FUN_01101dbc(plVar30,0,0);
      (**(code **)(*plVar30 + 0x60))(plVar30);
    }
    local_1c8 = "main_ptcl";
    local_1b8 = (long *)0x0;
    local_1c0 = 9;
    local_1d0 = 0x8b70fdaf3eacff8e;
    FUN_00fe3d00(&local_170,param_2,&local_1d0);
    if (local_1b8 != (long *)0x0) {
      (**(code **)(*local_1b8 + 0x20))();
    }
    plVar30 = local_170;
    if (local_170 != (long *)0x0) {
      plVar39 = local_170 + 0x49;
      lVar33 = nn::os::GetCurrentThread();
      do {
        if (*plVar39 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar30 + 0x4a));
            while (*plVar39 == 0) {
              cVar6 = '\x01';
              bVar38 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar38) {
                *plVar39 = lVar33;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_02a37388;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar38) {
          *plVar39 = lVar33;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_02a37388:
      *(undefined1 *)((long)plVar30 + 0x1c9) = 0;
      plVar30[0x49] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar30 + 0x4a));
      (**(code **)(*plVar30 + 0x60))(plVar30);
    }
    local_1e8 = "delete_ptcl";
    local_1d8 = (long *)0x0;
    local_1e0 = 0xb;
    local_1f0 = 0xe13d3b7bf1788c4c;
    FUN_00fe3d00(&local_170,param_2,&local_1f0);
    if (local_1d8 != (long *)0x0) {
      (**(code **)(*local_1d8 + 0x20))();
    }
    plVar30 = local_170;
    if (local_170 != (long *)0x0) {
      plVar39 = local_170 + 0x49;
      lVar33 = nn::os::GetCurrentThread();
      do {
        if (*plVar39 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar30 + 0x4a));
            while (*plVar39 == 0) {
              cVar6 = '\x01';
              bVar38 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar38) {
                *plVar39 = lVar33;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_02a37414;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar38) {
          *plVar39 = lVar33;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_02a37414:
      *(undefined1 *)((long)plVar30 + 0x1c9) = 0;
      plVar30[0x49] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar30 + 0x4a));
      (**(code **)(*plVar30 + 0x60))(plVar30);
    }
    local_210 = 0xb24638b13d1d8569;
    pcStack_208 = "rainbow_ptcl";
    local_200 = 0xc;
    local_1f8 = (long *)0x0;
    FUN_00fe3d00(&local_170,param_2,&local_210);
    if (local_1f8 != (long *)0x0) {
      (**(code **)(*local_1f8 + 0x20))();
    }
    plVar30 = local_170;
    if (local_170 != (long *)0x0) {
      plVar39 = local_170 + 0x49;
      lVar33 = nn::os::GetCurrentThread();
      do {
        if (*plVar39 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(plVar30 + 0x4a));
            while (*plVar39 == 0) {
              cVar6 = '\x01';
              bVar38 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar38) {
                *plVar39 = lVar33;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_02a37498;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar38) {
          *plVar39 = lVar33;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_02a37498:
      *(undefined1 *)((long)plVar30 + 0x1c9) = 0;
      plVar30[0x49] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar30 + 0x4a));
      (**(code **)(*plVar30 + 0x60))(plVar30);
    }
    lVar40 = *(long *)(param_2 + 0xb0);
    plVar30 = (long *)(lVar40 + 0x110);
    lVar37 = *plVar30;
    lVar33 = nn::os::GetCurrentThread();
    if (lVar33 == lVar37) {
      bVar38 = true;
    }
    else {
      lVar33 = nn::os::GetCurrentThread();
      do {
        if (*plVar30 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar40 + 0x118));
            while (*plVar30 == 0) {
              cVar6 = '\x01';
              bVar38 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar38) {
                *plVar30 = lVar33;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_02a374ec;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar38) {
          *plVar30 = lVar33;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_02a374ec:
      bVar38 = false;
    }
    plVar30 = (long *)FUN_01fac0b0(*(undefined8 *)(lVar40 + 0x128),*(undefined8 *)(lVar40 + 0x130));
    if ((*(long **)(lVar40 + 0x130) == plVar30) || (*plVar30 == 0)) {
      plVar30 = (long *)FUN_01fac0b0(*(undefined8 *)(lVar40 + 0x160),*(undefined8 *)(lVar40 + 0x168)
                                    );
      if (*(long **)(lVar40 + 0x168) == plVar30) {
        lVar33 = 0;
      }
      else {
        lVar33 = 0;
        if (*plVar30 != 0) {
          lVar33 = *plVar30 + -0x20;
        }
      }
    }
    else {
      lVar33 = *plVar30 + -0x20;
    }
    if (!bVar38) {
      *(undefined8 *)(lVar40 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar40 + 0x118));
    }
    if (lVar33 != 0) {
      lVar37 = (long)*(int *)(param_2 + 0x70);
      if (*(char *)(param_2 + 0x90) != '\0') {
        lVar37 = 0x12;
      }
      lVar37 = param_2 + lVar37 * 0x10;
      local_e0 = FUN_02a3a938;
      local_d8 = FUN_02a3a9c0;
      local_150 = 0;
      local_158 = (code *)0x0;
      local_160 = (long *)0x0;
      local_170 = (long *)0x0;
      local_148 = 0;
      local_d0 = &LAB_02a3ac58;
      local_c8 = &LAB_02a3ac6c;
      uStack_a8 = SUB168(*(undefined1 (*) [16])(lVar37 + 0xf0),8);
      local_b0 = SUB168(*(undefined1 (*) [16])(lVar37 + 0xf0),0);
      uStack_98 = SUB168(*(undefined1 (*) [16])(lVar37 + 0x220),8);
      uStack_a0 = SUB168(*(undefined1 (*) [16])(lVar37 + 0x220),0);
      uStack_88 = SUB168(*(undefined1 (*) [16])(lVar37 + 0x350),8);
      local_90 = SUB168(*(undefined1 (*) [16])(lVar37 + 0x350),0);
      uStack_78 = SUB168(*(undefined1 (*) [16])(lVar37 + 0x480),8);
      uStack_80 = SUB168(*(undefined1 (*) [16])(lVar37 + 0x480),0);
      local_c0[0] = lVar33;
      FUN_0102825c(lVar33,&local_170);
      pcVar34 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = (undefined1 *)0x0;
        local_c8 = (undefined1 *)0x0;
        local_e0 = (code *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar34)(local_c0);
      }
      pcVar34 = local_158;
      if (local_158 != (code *)0x0) {
        local_150 = 0;
        local_148 = 0;
        local_160 = (long *)0x0;
        local_158 = (code *)0x0;
        (*pcVar34)(auStack_140);
      }
    }
    FUN_02a38ee8(param_2);
    lVar33 = FUN_01026aa0(*(long *)(param_2 + 0xb0) + 0x108,&local_170);
    if (lVar33 != 0) {
      local_168 = (code *)0x3c8bd35;
      local_158 = (code *)0x0;
      local_170 = (long *)0x76857f0328d32f13;
      local_160 = (long *)&DAT_0000001a;
      FUN_012054d8(lVar33,&local_170,100);
    }
    lVar33 = FUN_010b39d0(*(long *)(param_2 + 0xb0) + 0x108,&local_170);
    if (lVar33 == 0) {
      return 0;
    }
    FUN_01360a3c(&local_190,*(undefined8 *)(param_2 + 0xb0));
    if (*(long *)(param_2 + 200) == 0) {
      local_220 = (undefined8 *)0x0;
      uStack_218 = 0;
    }
    else {
      FUN_01360a3c(&local_220);
    }
    uVar4 = *(undefined1 *)(param_2 + 0x91);
    local_168 = (code *)0x0;
    local_170 = (long *)0x0;
    FUN_00ca1a48(&local_170,&local_190);
    local_158 = (code *)0x0;
    local_160 = (long *)0x0;
    FUN_00ca1a48(&local_160,&local_220);
    local_2a0 = (undefined1 *)0x0;
    local_298 = (code *)0x0;
    local_150 = CONCAT71(local_150._1_7_,uVar4);
    local_290 = (code *)0x0;
    local_288 = (code *)0x0;
    local_280 = 0;
    uStack_278 = 0;
    FUN_00ca1ea4(&local_280,&local_170);
    local_270 = 0;
    uStack_268 = 0;
    FUN_00ca1ea4(&local_270,&local_160);
    local_260 = (undefined1)local_150;
    local_2a0 = &LAB_02a39208;
    local_298 = FUN_02a39b20;
    local_290 = FUN_02a39d00;
    local_288 = FUN_02a39d4c;
    pcVar34 = *(code **)(lVar33 + 0x218);
    if (pcVar34 == (code *)0x0) {
LAB_02a3822c:
      (*local_290)(&local_280,lVar33 + 0x230);
      *(code **)(lVar33 + 0x228) = local_288;
      *(undefined8 *)(lVar33 + 0x210) = local_2a0;
      *(code **)(lVar33 + 0x218) = local_298;
      *(code **)(lVar33 + 0x220) = local_290;
    }
    else {
      *(undefined8 *)(lVar33 + 0x220) = 0;
      *(undefined8 *)(lVar33 + 0x228) = 0;
      *(undefined8 *)(lVar33 + 0x210) = 0;
      *(undefined8 *)(lVar33 + 0x218) = 0;
      (*pcVar34)(lVar33 + 0x230);
      if (local_290 != (code *)0x0) goto LAB_02a3822c;
    }
    pcVar34 = local_298;
    if (local_298 != (code *)0x0) {
      local_290 = (code *)0x0;
      local_288 = (code *)0x0;
      local_2a0 = (undefined1 *)0x0;
      local_298 = (code *)0x0;
      (*pcVar34)(&local_280);
    }
    plVar30 = local_160;
    if (local_160 != (long *)0x0) {
      plVar39 = local_160 + 3;
      do {
        sVar35 = (short)*plVar39;
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar38) {
          *(short *)plVar39 = sVar35 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar35 == 1) {
        piVar2 = (int *)((long)local_160 + 0x1c);
        do {
          iVar28 = *piVar2;
          cVar6 = '\x01';
          bVar38 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar38) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar28 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar37 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar37;
          local_38 = *plVar30;
          FUN_00c44438(lVar37 + 0x8040,&local_38);
        }
      }
      else if (sVar35 == 0) goto LAB_02a38454;
    }
    plVar30 = local_170;
    if (local_170 != (long *)0x0) {
      plVar39 = local_170 + 3;
      do {
        sVar35 = (short)*plVar39;
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar38) {
          *(short *)plVar39 = sVar35 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar35 == 1) {
        piVar2 = (int *)((long)local_170 + 0x1c);
        do {
          iVar28 = *piVar2;
          cVar6 = '\x01';
          bVar38 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar38) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar28 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar37 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar37;
          local_38 = *plVar30;
          FUN_00c44438(lVar37 + 0x8040,&local_38);
        }
      }
      else if (sVar35 == 0) goto LAB_02a38454;
    }
    local_168 = (code *)0x0;
    local_170 = (long *)0x0;
    FUN_00ca1a48(&local_170,&local_190);
    local_158 = (code *)0x0;
    local_160 = (long *)0x0;
    FUN_00ca1a48(&local_160,&local_220);
    local_150 = CONCAT71(local_150._1_7_,uVar4);
    local_320 = (code *)0x0;
    local_318 = (code *)0x0;
    local_310 = (code *)0x0;
    local_308 = (code *)0x0;
    local_300 = 0;
    uStack_2f8 = 0;
    FUN_00ca1ea4(&local_300,&local_170);
    local_2f0 = 0;
    uStack_2e8 = 0;
    FUN_00ca1ea4(&local_2f0,&local_160);
    local_2e0 = (undefined1)local_150;
    local_320 = FUN_02a39d98;
    local_318 = FUN_02a3a6c0;
    local_310 = FUN_02a3a8a0;
    local_308 = FUN_02a3a8ec;
    pcVar34 = *(code **)(lVar33 + 0x298);
    if (pcVar34 == (code *)0x0) {
LAB_02a38374:
      (*local_310)(&local_300,lVar33 + 0x2b0);
      *(code **)(lVar33 + 0x2a8) = local_308;
      *(undefined8 *)(lVar33 + 0x290) = local_320;
      *(code **)(lVar33 + 0x298) = local_318;
      *(code **)(lVar33 + 0x2a0) = local_310;
    }
    else {
      *(undefined8 *)(lVar33 + 0x2a0) = 0;
      *(undefined8 *)(lVar33 + 0x2a8) = 0;
      *(undefined8 *)(lVar33 + 0x290) = 0;
      *(undefined8 *)(lVar33 + 0x298) = 0;
      (*pcVar34)(lVar33 + 0x2b0);
      if (local_310 != (code *)0x0) goto LAB_02a38374;
    }
    pcVar34 = local_318;
    if (local_318 != (code *)0x0) {
      local_310 = (code *)0x0;
      local_308 = (code *)0x0;
      local_320 = (code *)0x0;
      local_318 = (code *)0x0;
      (*pcVar34)(&local_300);
    }
    plVar30 = local_160;
    if (local_160 != (long *)0x0) {
      plVar39 = local_160 + 3;
      do {
        sVar35 = (short)*plVar39;
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar38) {
          *(short *)plVar39 = sVar35 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar35 == 1) {
        piVar2 = (int *)((long)local_160 + 0x1c);
        do {
          iVar28 = *piVar2;
          cVar6 = '\x01';
          bVar38 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar38) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar28 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar33 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar33;
          local_38 = *plVar30;
          FUN_00c44438(lVar33 + 0x8040,&local_38);
        }
      }
      else if (sVar35 == 0) goto LAB_02a38454;
    }
    plVar30 = local_170;
    if (local_170 != (long *)0x0) {
      plVar39 = local_170 + 3;
      do {
        sVar35 = (short)*plVar39;
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar38) {
          *(short *)plVar39 = sVar35 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar35 == 1) {
        piVar2 = (int *)((long)local_170 + 0x1c);
        do {
          iVar28 = *piVar2;
          cVar6 = '\x01';
          bVar38 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar38) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar28 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar33 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar33;
          local_38 = *plVar30;
          FUN_00c44438(lVar33 + 0x8040,&local_38);
        }
      }
      else if (sVar35 == 0) goto LAB_02a38454;
    }
    puVar27 = local_220;
    if (local_220 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_220 + 3);
      do {
        sVar35 = *psVar1;
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar38) {
          *psVar1 = sVar35 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar35 == 1) {
        piVar2 = (int *)((long)local_220 + 0x1c);
        do {
          iVar28 = *piVar2;
          cVar6 = '\x01';
          bVar38 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar38) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar28 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar33 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar33;
          local_170 = (long *)*puVar27;
          FUN_00c44438(lVar33 + 0x8040,&local_170);
        }
      }
      else if (sVar35 == 0) goto LAB_02a38454;
    }
    if (local_190 == (undefined8 *)0x0) {
      return 0;
    }
    psVar1 = (short *)(local_190 + 3);
    do {
      sVar35 = *psVar1;
      cVar6 = '\x01';
      bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar38) {
        *psVar1 = sVar35 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar35 == 1) {
      piVar2 = (int *)((long)local_190 + 0x1c);
      do {
        iVar28 = *piVar2;
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar38) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar28 == -1) {
        return 0;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar33 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar33;
      local_170 = (long *)*local_190;
      FUN_00c44438(lVar33 + 0x8040,&local_170);
      return 0;
    }
    if (sVar35 != 0) {
      return 0;
    }
    goto LAB_02a38454;
  case 3:
    *(float *)(param_2 + 0xb8) = *(float *)(param_2 + 0xb8) + param_1;
    fVar41 = (float)(**(code **)(PTR_PTR_047d9248 + 0x70))();
    fVar41 = fVar41 + 0.0;
    plVar30 = *(long **)(param_2 + 0xb0);
    auVar46._0_8_ =
         CONCAT44((float)((ulong)_DAT_03caa980 >> 0x20) * fVar41,(float)_DAT_03caa980 * fVar41);
    auVar46._8_4_ = (float)_UNK_03caa988 * fVar41;
    auVar46._12_4_ = (float)((ulong)_UNK_03caa988 >> 0x20) * fVar41;
    plVar30[0x19] = auVar46._8_8_;
    plVar30[0x18] = auVar46._0_8_;
    if (*(char *)((long)plVar30 + 0xf4) == '\0') {
      *(undefined1 *)((long)plVar30 + 0xf4) = 1;
      (**(code **)(*plVar30 + 0x78))();
    }
    if (1.0 <= fVar41) {
      *(undefined4 *)(param_2 + 0xa0) = 4;
      local_340 = 0x8b70fdaf3eacff8e;
      pcStack_338 = "main_ptcl";
      local_330 = 9;
      local_328 = (long *)0x0;
      FUN_00fe3d00(&local_170,param_2,&local_340);
      if (local_328 != (long *)0x0) {
        (**(code **)(*local_328 + 0x20))();
      }
      plVar30 = local_170;
      if (local_170 != (long *)0x0) {
        FUN_01101dbc(local_170,0,0);
        (**(code **)(*plVar30 + 0x60))(plVar30);
      }
      if (*(char *)(param_2 + 0x91) != '\0') {
        local_360 = 0xb24638b13d1d8569;
        pcStack_358 = "rainbow_ptcl";
        local_350 = 0xc;
        local_348 = (long *)0x0;
        FUN_00fe3d00(&local_170,param_2,&local_360);
        if (local_348 != (long *)0x0) {
          (**(code **)(*local_348 + 0x20))();
        }
        plVar30 = local_170;
        if (local_170 != (long *)0x0) {
          FUN_01101dbc(local_170,0,0);
          (**(code **)(*plVar30 + 0x60))(plVar30);
        }
      }
      lVar33 = FUN_01026aa0(*(long *)(param_2 + 0xb0) + 0x108,&local_170);
      if (lVar33 != 0) {
        local_188 = (long **)0x3c2ec2e;
        local_178 = (long *)0x0;
        local_190 = (undefined8 *)0x1c6013817e016209;
        local_180 = 0x1b;
        memset(&local_170,0,0x80);
        FUN_0131fc3c(lVar33,&local_190,&local_170,100);
        pcVar34 = local_168;
        if (local_168 != (code *)0x0) {
          local_158 = (code *)0x0;
          local_160 = (long *)0x0;
          local_168 = (code *)0x0;
          local_170 = (long *)0x0;
          (*pcVar34)(&local_150);
        }
        if (local_178 != (long *)0x0) {
          (**(code **)(*local_178 + 0x20))();
        }
      }
    }
    FUN_02a38ee8(param_2);
    return 0;
  case 4:
    if ((*(char *)(param_2 + 0xe0) == '\0') &&
       (FUN_02a38ee8(param_2), *(long *)(param_2 + 0xd8) != 0)) {
      if (((*PTR_DAT_047d7d30 & 1) == 0) &&
         (iVar28 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar28 != 0)) {
        FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7d30);
      }
      lVar33 = *(long *)PTR_DAT_047d7d38;
      *(long *)PTR_DAT_047d7d40 = lVar33;
      lVar33 = *(long *)(lVar33 + 0x378);
      if ((lVar33 != 0) && (*(short *)(lVar33 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar33 + 0x1a);
        sVar35 = *(short *)(lVar33 + 0x1a);
        do {
          sVar5 = *psVar1;
          if (sVar5 == sVar35) {
            cVar6 = '\x01';
            bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar38) {
              *psVar1 = sVar35 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_02a38ae0;
            bVar38 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_02a38ae0:
            bVar38 = false;
          }
          if (bVar38) {
            if (*(long *)(lVar33 + 0x10) != 0) {
              plVar30 = (long *)(*(long *)(lVar33 + 0x10) + -0x28);
              lVar33 = (**(code **)(*plVar30 + 0x68))(plVar30);
              auVar50 = *(undefined1 (*) [16])(lVar33 + 0x30);
              local_3d0 = auVar50._0_4_;
              fStack_3cc = auVar50._4_4_;
              lVar33 = (**(code **)(**(long **)(param_2 + 0xb0) + 0x68))();
              local_3d0 = local_3d0 - *(float *)(lVar33 + 0x30);
              fStack_3cc = fStack_3cc - *(float *)(lVar33 + 0x34);
              fVar41 = auVar50._8_4_ - *(float *)(lVar33 + 0x38);
              local_3d0 = local_3d0 * local_3d0;
              fStack_3cc = fStack_3cc * fStack_3cc;
              fVar41 = fVar41 * fVar41;
              auVar78._0_4_ = local_3d0 + fStack_3cc;
              auVar78._4_4_ = fVar41 + 0.0;
              auVar78._8_4_ = local_3d0 + fStack_3cc;
              auVar78._12_4_ = fVar41 + 0.0;
              auVar50 = NEON_ext(auVar78,auVar78,4,1);
              if (SQRT(auVar50._0_4_ + auVar50._4_4_) <= 4.5) goto LAB_02a38be8;
              local_168 = (code *)0x3c6aacd;
              local_160 = (long *)0x6;
              local_170 = (long *)0xa35f47236b0e0a9b;
              local_158 = (code *)0x0;
              FUN_015859fc(&local_190,*(undefined8 *)(param_2 + 0xd8),&local_170);
              puVar27 = local_190;
              plVar39 = (long *)0x0;
              if (local_190 == (undefined8 *)0x0) goto LAB_02a38bac;
              if (*(short *)((long)local_190 + 0x1a) == 0) goto LAB_02a38e10;
              psVar1 = (short *)((long)local_190 + 0x1a);
              sVar35 = *(short *)((long)local_190 + 0x1a);
              goto LAB_02a38ddc;
            }
            break;
          }
          sVar35 = sVar5;
        } while (sVar5 != 0);
      }
    }
    goto LAB_02a371f8;
  case 5:
    goto switchD_02a36ddc_caseD_5;
  case 6:
    goto switchD_02a36ddc_caseD_6;
  case 7:
    return 1;
  default:
    goto switchD_02a36ddc_default;
  }
  while (sVar35 = sVar5, sVar5 != 0) {
LAB_02a38ddc:
    sVar5 = *psVar1;
    if (sVar5 == sVar35) {
      cVar6 = '\x01';
      bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar38) {
        *psVar1 = sVar35 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_02a38e00;
      bVar38 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02a38e00:
      bVar38 = false;
    }
    if (bVar38) {
      plVar39 = (long *)0x0;
      if (local_190[2] != 0) {
        plVar39 = (long *)(local_190[2] + -0x28);
      }
      goto LAB_02a38e28;
    }
  }
LAB_02a38e10:
  plVar39 = (long *)0x0;
LAB_02a38e28:
  psVar1 = (short *)(local_190 + 3);
  do {
    sVar35 = *psVar1;
    cVar6 = '\x01';
    bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar38) {
      *psVar1 = sVar35 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar35 == 1) {
    piVar2 = (int *)((long)local_190 + 0x1c);
    do {
      iVar28 = *piVar2;
      cVar6 = '\x01';
      bVar38 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar38) {
        *piVar2 = -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar28 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar33 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar33;
      local_220 = (undefined8 *)*puVar27;
      FUN_00c44438(lVar33 + 0x8040,&local_220);
    }
  }
  else if (sVar35 == 0) goto LAB_02a38454;
LAB_02a38bac:
  if (local_158 != (code *)0x0) {
    (**(code **)(*(long *)local_158 + 0x20))();
  }
  if (plVar39 != (long *)0x0) {
    *(undefined1 *)((long)plVar39 + 0x71) = 1;
    *(undefined1 *)(param_2 + 0xe0) = 1;
    lVar33 = plVar39[6];
    psVar1 = (short *)(lVar33 + 0x1a);
    do {
      sVar35 = *psVar1;
      cVar6 = '\x01';
      bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar38) {
        *psVar1 = sVar35 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar35 == 1) {
      *(undefined8 *)(lVar33 + 0x10) = 0;
      (**(code **)(*plVar39 + 0x50))(plVar39);
    }
    else if (sVar35 == 0) goto LAB_02a38598;
  }
LAB_02a38be8:
  (**(code **)(*plVar30 + 0x60))(plVar30);
LAB_02a371f8:
  if (*(char *)(param_2 + 0xd1) == '\0') {
    return 0;
  }
  lVar40 = *(long *)(param_2 + 0xb0);
  plVar30 = (long *)(lVar40 + 0x110);
  lVar37 = *plVar30;
  lVar33 = nn::os::GetCurrentThread();
  if (lVar33 == lVar37) {
    bVar38 = true;
  }
  else {
    lVar33 = nn::os::GetCurrentThread();
    do {
      if (*plVar30 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar40 + 0x118));
          while (*plVar30 == 0) {
            cVar6 = '\x01';
            bVar38 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar38) {
              *plVar30 = lVar33;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_02a37230;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar6 = '\x01';
      bVar38 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar38) {
        *plVar30 = lVar33;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_02a37230:
    bVar38 = false;
  }
  plVar30 = (long *)FUN_01fabf90(*(undefined8 *)(lVar40 + 0x128),*(undefined8 *)(lVar40 + 0x130));
  if ((*(long **)(lVar40 + 0x130) == plVar30) || (*plVar30 == 0)) {
    plVar30 = (long *)FUN_01fabf90(*(undefined8 *)(lVar40 + 0x160),*(undefined8 *)(lVar40 + 0x168));
    if (*(long **)(lVar40 + 0x168) == plVar30) {
      lVar33 = 0;
    }
    else {
      lVar33 = 0;
      if (*plVar30 != 0) {
        lVar33 = *plVar30 + -0x20;
      }
    }
  }
  else {
    lVar33 = *plVar30 + -0x20;
  }
  if (!bVar38) {
    *(undefined8 *)(lVar40 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar40 + 0x118));
  }
  if (lVar33 != 0) {
    local_168 = (code *)0x3bfce46;
    local_158 = (code *)0x0;
    local_160 = (long *)&DAT_00000005;
    local_170 = (long *)0x5e152411f5da3b3f;
    FUN_015859fc(&local_190,lVar33,&local_170);
    puVar27 = local_190;
    plVar30 = (long *)0x0;
    if (local_190 != (undefined8 *)0x0) {
      if (*(short *)((long)local_190 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_190 + 0x1a);
        sVar35 = *(short *)((long)local_190 + 0x1a);
        do {
          sVar5 = *psVar1;
          if (sVar5 == sVar35) {
            cVar6 = '\x01';
            bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar38) {
              *psVar1 = sVar35 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_02a38904;
            bVar38 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_02a38904:
            bVar38 = false;
          }
          if (bVar38) {
            plVar30 = (long *)0x0;
            if (local_190[2] != 0) {
              plVar30 = (long *)(local_190[2] + -0x28);
            }
            goto LAB_02a3892c;
          }
          sVar35 = sVar5;
        } while (sVar5 != 0);
      }
      plVar30 = (long *)0x0;
LAB_02a3892c:
      psVar1 = (short *)(local_190 + 3);
      do {
        sVar35 = *psVar1;
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar38) {
          *psVar1 = sVar35 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar35 == 1) {
        piVar2 = (int *)((long)local_190 + 0x1c);
        do {
          iVar28 = *piVar2;
          cVar6 = '\x01';
          bVar38 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar38) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar28 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar33 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar33;
          local_220 = (undefined8 *)*puVar27;
          FUN_00c44438(lVar33 + 0x8040,&local_220);
        }
      }
      else if (sVar35 == 0) {
LAB_02a38454:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (local_158 != (code *)0x0) {
      (**(code **)(*(long *)local_158 + 0x20))();
    }
    if (plVar30 != (long *)0x0) {
      lVar33 = plVar30[6];
      psVar1 = (short *)(lVar33 + 0x1a);
      *(undefined1 *)((long)plVar30 + 0x71) = 0;
      do {
        sVar35 = *psVar1;
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar38) {
          *psVar1 = sVar35 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar35 == 1) {
        *(undefined8 *)(lVar33 + 0x10) = 0;
        (**(code **)(*plVar30 + 0x50))(plVar30);
      }
      else if (sVar35 == 0) goto LAB_02a38598;
    }
  }
  uVar32 = 5;
  goto LAB_02a37efc;
switchD_02a36ddc_caseD_5:
  *(undefined4 *)(param_2 + 0xb8) = 0;
  lVar33 = FUN_01026aa0(*(long *)(param_2 + 0xb0) + 0x108,&local_170);
  if (lVar33 != 0) {
    local_188 = (long **)0x3be9130;
    local_178 = (long *)0x0;
    local_190 = (undefined8 *)0x82cb7a3f239c0483;
    local_180 = 0x1b;
    memset(&local_170,0,0x80);
    FUN_0131fc3c(lVar33,&local_190,&local_170,100);
    pcVar34 = local_168;
    if (local_168 != (code *)0x0) {
      local_158 = (code *)0x0;
      local_160 = (long *)0x0;
      local_168 = (code *)0x0;
      local_170 = (long *)0x0;
      (*pcVar34)(&local_150);
    }
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
  }
  FUN_013e0cb4(param_2);
  local_380 = 0xe13d3b7bf1788c4c;
  pcStack_378 = "delete_ptcl";
  local_370 = 0xb;
  local_368 = (long *)0x0;
  FUN_00fe3d00(&local_170,param_2,&local_380);
  if (local_368 != (long *)0x0) {
    (**(code **)(*local_368 + 0x20))();
  }
  plVar30 = local_170;
  if (local_170 != (long *)0x0) {
    FUN_01101dbc(local_170,0,0);
    (**(code **)(*plVar30 + 0x60))(plVar30);
  }
  local_3a0 = 0x8b70fdaf3eacff8e;
  pcStack_398 = "main_ptcl";
  local_390 = 9;
  local_388 = (long *)0x0;
  FUN_00fe3d00(&local_170,param_2,&local_3a0);
  if (local_388 != (long *)0x0) {
    (**(code **)(*local_388 + 0x20))();
  }
  plVar30 = local_170;
  if (local_170 != (long *)0x0) {
    FUN_013e0f3c(local_170);
    (**(code **)(*plVar30 + 0x60))(plVar30);
  }
  if (*(char *)(param_2 + 0x91) != '\0') {
    local_3c0 = 0xb24638b13d1d8569;
    pcStack_3b8 = "rainbow_ptcl";
    local_3b0 = 0xc;
    local_3a8 = (long *)0x0;
    FUN_00fe3d00(&local_170,param_2,&local_3c0);
    if (local_3a8 != (long *)0x0) {
      (**(code **)(*local_3a8 + 0x20))();
    }
    plVar30 = local_170;
    if (local_170 != (long *)0x0) {
      FUN_013e0f3c(local_170);
      (**(code **)(*plVar30 + 0x60))(plVar30);
    }
  }
  *(undefined4 *)(param_2 + 0xa0) = 6;
switchD_02a36ddc_caseD_6:
  *(float *)(param_2 + 0xb8) = *(float *)(param_2 + 0xb8) + param_1;
  fVar41 = (float)(**(code **)(PTR_PTR_047d9248 + 0x70))();
  fVar42 = 1.0 - (fVar41 + 0.0);
  if (fVar42 <= 0.01) {
    fVar42 = 0.01;
  }
  plVar30 = *(long **)(param_2 + 0xb0);
  auVar50._0_8_ =
       CONCAT44((float)((ulong)_DAT_03caa980 >> 0x20) * fVar42,(float)_DAT_03caa980 * fVar42);
  auVar50._8_4_ = (float)_UNK_03caa988 * fVar42;
  auVar50._12_4_ = (float)((ulong)_UNK_03caa988 >> 0x20) * fVar42;
  plVar30[0x19] = auVar50._8_8_;
  plVar30[0x18] = auVar50._0_8_;
  if (*(char *)((long)plVar30 + 0xf4) == '\0') {
    *(undefined1 *)((long)plVar30 + 0xf4) = 1;
    (**(code **)(*plVar30 + 0x78))();
  }
  if (1.0 <= fVar41 + 0.0) {
    *(undefined4 *)(param_2 + 0xa0) = 7;
    (**(code **)(**(long **)(param_2 + 0xb0) + 0x120))(*(long **)(param_2 + 0xb0),1);
    plVar30 = *(long **)(param_2 + 0xb0);
    *(undefined8 *)(param_2 + 0xb0) = 0;
    if (plVar30 != (long *)0x0) {
      lVar33 = plVar30[6];
      psVar1 = (short *)(lVar33 + 0x1a);
      do {
        sVar35 = *psVar1;
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar38) {
          *psVar1 = sVar35 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar35 == 1) {
        *(undefined8 *)(lVar33 + 0x10) = 0;
        (**(code **)(*plVar30 + 0x50))();
      }
      else if (sVar35 == 0) goto LAB_02a38598;
    }
    plVar30 = *(long **)(param_2 + 0xa8);
    *(undefined8 *)(param_2 + 0xa8) = 0;
    if (plVar30 != (long *)0x0) {
      lVar33 = plVar30[6];
      psVar1 = (short *)(lVar33 + 0x1a);
      do {
        sVar35 = *psVar1;
        cVar6 = '\x01';
        bVar38 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar38) {
          *psVar1 = sVar35 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar35 == 1) {
        *(undefined8 *)(lVar33 + 0x10) = 0;
        (**(code **)(*plVar30 + 0x50))();
      }
      else if (sVar35 == 0) {
LAB_02a38598:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    FUN_01fa944c(param_2);
  }
switchD_02a36ddc_default:
  return 0;
}


