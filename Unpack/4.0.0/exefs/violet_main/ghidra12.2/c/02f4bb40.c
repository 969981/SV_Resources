/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f4bb40; name: FUN_02f4bb40
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02f4bb40(long param_1,long *param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  long lVar34;
  undefined1 (*pauVar35) [16];
  uint uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float *pfVar39;
  uint uVar40;
  long *plVar41;
  uint uVar42;
  long lVar43;
  ulong uVar44;
  long lVar45;
  float fVar46;
  undefined8 *puVar47;
  float fVar48;
  int iVar49;
  undefined8 uVar50;
  float fVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar54;
  float fVar55;
  float fVar60;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar61 [12];
  float fVar65;
  float fVar68;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  float fVar67;
  undefined1 auVar64 [16];
  float fVar69;
  int iVar70;
  float fVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined8 uVar86;
  float fVar87;
  float local_ad0;
  float fStack_acc;
  float local_ac0;
  float fStack_abc;
  float fStack_ab8;
  float fStack_ab4;
  ulong local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined6 local_9e0;
  undefined2 uStack_9da;
  uint local_9d8;
  undefined2 local_9d4;
  undefined2 uStack_9d2;
  undefined8 local_9d0;
  ulong uStack_9c8;
  undefined1 *local_9c0;
  float fStack_9b8;
  float fStack_9b4;
  undefined1 (*local_9b0) [16];
  uint local_9a8;
  uint local_9a4;
  undefined1 local_9a0 [512];
  undefined8 local_7a0;
  long local_790;
  undefined **local_788;
  undefined2 local_780;
  undefined4 local_77c;
  ulong uStack_778;
  undefined4 local_770;
  long local_758;
  float local_750;
  float fStack_74c;
  float fStack_748;
  float fStack_744;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 local_718;
  long local_710;
  undefined4 local_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined *local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined1 local_6c8;
  undefined1 *local_6c0;
  float local_6b8;
  long local_6b0;
  float local_6a8;
  undefined1 auStack_6a0 [48];
  undefined **local_670;
  undefined1 local_668;
  int local_664;
  undefined8 local_660;
  undefined1 local_658;
  undefined8 local_650;
  undefined8 uStack_648;
  float local_640;
  float fStack_63c;
  float fStack_638;
  float fStack_634;
  float local_630;
  undefined8 local_628;
  undefined4 local_620;
  undefined4 local_618;
  undefined1 local_614;
  undefined2 local_610;
  undefined4 local_60c;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined4 local_5f0;
  undefined1 local_5ec;
  undefined2 local_5e8;
  undefined4 local_5e4;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined1 *local_5d0;
  float local_5c8;
  undefined8 local_5c0;
  long *local_5a8;
  undefined1 *local_5a0;
  undefined8 local_598;
  undefined1 local_590 [1296];
  
  local_5a0 = local_590;
  local_598 = -0x7ffffff000000000;
  lVar43 = tpidr_el0;
  lVar30 = *(long *)(lVar43 + 0x1000b8);
  if (lVar30 == 0) {
    lVar30 = FUN_00e5d3b4();
    *(long *)(lVar43 + 0x1000b8) = lVar30;
  }
  plVar41 = *(long **)(lVar30 + 0x3e0);
  if (plVar41 != (long *)0x0) {
    lVar43 = *plVar41;
    if (*(code **)(lVar43 + 0x18) != (code *)0x0) {
      (**(code **)(lVar43 + 0x18))("hknpDeflectedLinearCast",0x17,*(undefined8 *)(lVar43 + 0x28));
    }
    puVar33 = (undefined8 *)plVar41[2];
    uVar31 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
    if ((uVar31 <= (ulong)plVar41[3]) && (plVar41[2] = uVar31, puVar33 != (undefined8 *)0x0)) {
      *puVar33 = "TthknpDeflectedLinearCast";
      uVar28 = nn::os::GetSystemTick();
      puVar33[1] = uVar28;
    }
    if (((*(byte *)(lVar43 + 0x38) & 1) != 0) && (plVar41[6] != 0)) {
      puVar33 = (undefined8 *)plVar41[2];
      uVar31 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
      if ((uVar31 <= (ulong)plVar41[3]) && (plVar41[2] = uVar31, puVar33 != (undefined8 *)0x0)) {
        *puVar33 = &DAT_03c4e575;
        puVar33[1] = *(undefined8 *)(plVar41[6] + 8);
      }
    }
  }
  local_a10 = *(ulong *)(param_3 + 0x14);
  uVar37 = *(undefined8 *)(param_1 + 0x8a8);
  local_660 = 0x5f7ffff05f7ffff0;
  local_630 = 3.40282e+38;
  local_620 = 0xffffff;
  local_5f8 = 0xffffff;
  local_670 = &PTR_LAB_0460fc70;
  local_5d0 = local_5a0;
  local_658 = 0;
  local_650 = 0;
  uStack_648 = 0;
  local_640 = 0.0;
  fStack_63c = 0.0;
  fStack_638 = 0.0;
  fStack_634 = 0.0;
  local_610 = 0xffff;
  local_60c = 0;
  uStack_608 = 0;
  uStack_608._4_4_ = 0;
  local_5f0 = 0xffffffff;
  local_5ec = 0xf;
  local_5e8 = 0xffff;
  local_5e4 = 0;
  local_5d8 = 0;
  local_5c8 = (float)local_598;
  local_664 = 0;
  local_628 = 0xffffffffffffffff;
  local_618 = 0xffffffff;
  local_614 = 0xf;
  local_600 = 0xffffffffffffffff;
  uStack_5e0 = 0;
  uStack_5e0._4_4_ = 0;
  local_668 = 0x20;
  local_5c0 = uVar37;
  local_5a8 = plVar41;
  memcpy(auStack_6a0,param_3 + 4,0x30);
  uVar27 = uStack_5e0;
  uVar28 = uStack_608;
  fVar84 = (float)*(undefined8 *)(param_3 + 0x12);
  fVar85 = (float)((ulong)*(undefined8 *)(param_3 + 0x12) >> 0x20);
  fVar82 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar83 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  fVar48 = fVar82 * fVar82 + fVar83 * fVar83 + fVar84 * fVar84;
  fVar53 = fVar82 * fVar82 + fVar83 * fVar83 + fVar84 * fVar84;
  uVar86 = NEON_fmov(0x3f800000,4);
  fVar87 = (float)((ulong)uVar86 >> 0x20);
  if (fVar48 == 0.0) {
    fVar55 = 0.0;
    fVar60 = 0.0;
  }
  else {
    fVar55 = (float)uVar86 / SQRT(fVar48);
    fVar60 = fVar87 / SQRT(fVar53);
  }
  local_6b0 = param_2[1];
  local_6a8 = param_3[0x1a];
  uStack_9f8 = 0;
  local_a00 = 0;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = local_a10;
  local_6d0 = 1;
  local_6c8 = 4;
  local_6d8 = 0xffffffff;
  local_6e0 = &DAT_0460fd30;
  if (1.1920929e-07 < (float)local_a10) {
    fVar46 = param_3[0x16];
    if (0 < (int)fVar46) {
      auVar62._8_8_ = DAT_03cab628;
      auVar62._0_8_ = DAT_03cab620;
      auVar56._0_4_ = fVar82 * fVar55;
      auVar56._4_4_ = fVar83 * fVar60;
      auVar56._8_4_ = fVar84 * fVar55;
      auVar56._12_4_ = fVar85 * fVar60;
      uVar31 = CONCAT44(-(uint)(fVar53 < 1.4210855e-14),-(uint)(fVar48 < 1.4210855e-14)) &
               0x100000001;
      uStack_9f8 = 0;
      local_a00 = 0;
      iVar49 = (int)uVar31;
      iVar70 = (int)(uVar31 >> 0x20);
      auVar51._0_4_ = (iVar49 << 0x1f) >> 0x1f;
      auVar51._4_4_ = (iVar70 << 0x1f) >> 0x1f;
      auVar51._8_4_ = (iVar49 << 0x1f) >> 0x1f;
      auVar51._12_4_ = (iVar70 << 0x1f) >> 0x1f;
      auVar56 = auVar56 ^ (auVar56 ^ auVar62) & auVar51;
      auVar51 = NEON_ext(auVar56,auVar56,8,1);
      uVar50 = NEON_ext(auVar56._0_8_,auVar51._0_8_,4,1);
      iVar49 = 0;
      auVar51 = NEON_fmov(0x3f800000,4);
      uVar42 = 0;
      do {
        uStack_a08 = auVar80._8_8_;
        local_a10 = auVar80._0_8_;
        local_750 = (float)local_a00 + *param_3;
        fStack_74c = local_a00._4_4_ + param_3[1];
        fStack_748 = (float)uStack_9f8 + param_3[2];
        fStack_744 = uStack_9f8._4_4_ + param_3[3];
        fVar48 = param_3[0x19];
        uVar31 = local_a10;
        if (0.0 < fVar48) {
          auVar81._4_4_ = fVar83;
          auVar81._0_4_ = fVar82;
          auVar81._8_4_ = fVar84;
          auVar81._12_4_ = fVar85;
          auVar20._4_4_ = fVar83;
          auVar20._0_4_ = fVar82;
          auVar20._8_4_ = fVar84;
          auVar20._12_4_ = fVar85;
          auVar62 = NEON_ext(auVar81,auVar20,4,1);
          local_ac0 = auVar56._0_4_;
          fStack_abc = auVar56._4_4_;
          fStack_ab8 = auVar56._8_4_;
          fStack_ab4 = auVar56._12_4_;
          local_ad0 = (float)uVar50;
          fStack_acc = (float)((ulong)uVar50 >> 0x20);
          auVar63._0_4_ = local_ac0 * auVar62._0_4_ - local_ad0 * fVar82;
          auVar63._4_4_ = fStack_abc * auVar62._4_4_ - fStack_acc * fVar83;
          auVar63._8_4_ = fStack_ab8 * fVar82 - local_ac0 * fVar84;
          auVar63._12_4_ = fStack_ab4 * fVar83 - fStack_abc * fVar85;
          auVar62 = NEON_ext(auVar63,auVar63,4,1);
          fVar60 = auVar62._0_4_ * auVar62._0_4_;
          fVar73 = auVar62._4_4_ * auVar62._4_4_;
          fVar69 = auVar63._0_4_ * auVar63._0_4_ + fVar60 + fVar73;
          fVar53 = 0.0;
          fVar55 = 0.0;
          if (fVar69 != 0.0) {
            fVar53 = (float)uVar86 / SQRT(fVar69);
            fVar55 = fVar87 / SQRT(auVar63._0_4_ * auVar63._0_4_ + fVar60 + fVar73);
          }
          if (fVar53 != 0.0) {
            uVar31 = NEON_fmin(CONCAT44(fVar55 * fVar48,fVar53 * fVar48),local_a10,4);
          }
        }
        auVar62 = ZEXT816(0x3f800000);
        local_758 = param_2[7];
        auVar72._8_4_ = 0x7f7fffee;
        auVar72._0_8_ = 0x7f7fffee7f7fffee;
        auVar72._12_4_ = 0x7f7fffee;
        auVar25._8_4_ = 0x7f7fffee;
        auVar25._0_8_ = 0x7f7fffee7f7fffee;
        auVar25._12_4_ = 0x7f7fffee;
        fVar53 = (float)uVar31;
        fVar55 = fVar82 * fVar53;
        fVar69 = (float)(uVar31 >> 0x20);
        fVar73 = fVar83 * fVar69;
        fVar66 = fVar84 * fVar53;
        fVar60 = (local_750 + fVar55) - local_750;
        fVar65 = (fStack_74c + fVar73) - fStack_74c;
        fVar67 = (fStack_748 + fVar66) - fStack_748;
        iVar70 = -(uint)(fVar60 == 0.0);
        iVar74 = -(uint)(fVar65 == 0.0);
        iVar75 = -(uint)(fVar67 == 0.0);
        iVar76 = -(uint)(auVar62._0_4_ == 0.0);
        fVar60 = (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                                 CONCAT12((byte)((uint)fVar60 >> 0x10) &
                                          ~(byte)((uint)iVar70 >> 0x10),
                                          CONCAT11((byte)((uint)fVar60 >> 8) &
                                                   ~(byte)((uint)iVar70 >> 8),
                                                   SUB41(fVar60,0) & ~(byte)iVar70)));
        auVar61._0_8_ =
             CONCAT17((byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                      CONCAT16((byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                               CONCAT15((byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar74 >> 8),
                                        CONCAT14(SUB41(fVar65,0) & ~(byte)iVar74,fVar60))));
        auVar61[8] = SUB41(fVar67,0) & ~(byte)iVar75;
        auVar61[9] = (byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar75 >> 8);
        auVar61[10] = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10);
        auVar61[0xb] = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
        auVar64._12_2_ = 0;
        auVar64._0_12_ = auVar61;
        auVar64[0xe] = auVar62[2] & ~(byte)((uint)iVar76 >> 0x10);
        auVar64[0xf] = auVar62[3] & ~(byte)((uint)iVar76 >> 0x18);
        fVar65 = (float)((ulong)auVar61._0_8_ >> 0x20);
        iVar70 = -(uint)(fVar60 == 0.0);
        iVar74 = -(uint)(fVar65 == 0.0);
        iVar75 = -(uint)(auVar61._8_4_ == 0.0);
        iVar76 = -(uint)(auVar64._12_4_ == 0.0);
        auVar71[0] = ~(byte)iVar70;
        auVar71[1] = ~(byte)((uint)iVar70 >> 8);
        auVar71[2] = ~(byte)((uint)iVar70 >> 0x10);
        auVar71[3] = ~(byte)((uint)iVar70 >> 0x18);
        auVar71[4] = ~(byte)iVar74;
        auVar71[5] = ~(byte)((uint)iVar74 >> 8);
        auVar71[6] = ~(byte)((uint)iVar74 >> 0x10);
        auVar71[7] = ~(byte)((uint)iVar74 >> 0x18);
        auVar71[8] = ~(byte)iVar75;
        auVar71[9] = ~(byte)((uint)iVar75 >> 8);
        auVar71[10] = ~(byte)((uint)iVar75 >> 0x10);
        auVar71[0xb] = ~(byte)((uint)iVar75 >> 0x18);
        auVar71[0xc] = ~(byte)iVar76;
        auVar71[0xd] = ~(byte)((uint)iVar76 >> 8);
        auVar71[0xe] = ~(byte)((uint)iVar76 >> 0x10);
        auVar71[0xf] = ~(byte)((uint)iVar76 >> 0x18);
        auVar9._4_4_ = auVar51._4_4_ / fVar65;
        auVar9._0_4_ = auVar51._0_4_ / fVar60;
        auVar9._8_4_ = auVar51._8_4_ / auVar61._8_4_;
        auVar9._12_4_ = auVar51._12_4_ / auVar64._12_4_;
        auVar72 = auVar72 ^ (auVar25 ^ auVar9) & auVar71;
        local_700 = 0;
        uStack_6f8 = 0;
        local_6f0 = 0;
        uStack_6e8 = 0;
        local_788 = &local_6e0;
        uStack_738 = auVar64._8_8_;
        uStack_728 = auVar72._8_8_;
        uStack_730 = auVar72._0_8_;
        local_708 = 0x7f7fffee;
        local_790 = *param_2;
        if (local_790 == 0) {
          local_790 = *(long *)(param_1 + 0x8f8);
        }
        local_780 = (undefined2)param_2[2];
        local_77c = (undefined4)*(ulong *)((long)param_2 + 0x14);
        uStack_778 = *(ulong *)((long)param_2 + 0x14) >> 0x20;
        local_718 = CONCAT44(0x100,(param_3[0x17] + 0.1) - param_3[0x18]);
        local_710 = param_2[9];
        local_720 = CONCAT44(param_3[0x18],0x3a83126f);
        local_770 = 0xf30801;
        local_660 = 0x5f7ffff05f7ffff0;
        local_664 = 0;
        local_658 = 0;
        local_640 = 0.0;
        fStack_63c = 0.0;
        fStack_638 = 0.0;
        fStack_634 = 0.0;
        local_650 = 0;
        uStack_648 = 0;
        local_630 = 3.40282e+38;
        local_620 = 0xffffff;
        local_618 = 0xffffffff;
        local_628 = 0xffffffffffffffff;
        local_614 = 0xf;
        local_610 = 0xffff;
        local_60c = 0;
        uStack_608._4_4_ = 0;
        local_600 = 0xffffffffffffffff;
        local_5f8 = 0xffffff;
        local_5f0 = 0xffffffff;
        local_5ec = 0xf;
        local_5e8 = 0xffff;
        local_5e4 = 0;
        uStack_5e0._4_4_ = 0;
        local_5d8 = 0;
        local_5d0 = local_5a0;
        local_5c8 = (float)local_598;
        uStack_608 = 0;
        uStack_5e0 = 0;
        local_740 = auVar61._0_8_;
        if ((fVar48 == 0.0) && ((iVar49 != 0 || (*(char *)(param_3 + 0x1b) == '\0')))) {
          local_6c0 = local_5a0;
          local_6b8 = (float)local_598;
          if ((0 < (int)(float)local_598) &&
             ((local_5a0[0x4c] = 1, (float)local_598 != 1.4013e-45 &&
              (local_5a0[0x9c] = 1, 2 < (int)(float)local_598)))) {
            lVar30 = 0xec;
            lVar43 = 2;
            do {
              local_5a0[lVar30] = 1;
              lVar43 = lVar43 + 1;
              lVar30 = lVar30 + 0x50;
            } while (lVar43 < (int)(float)local_598);
          }
          uVar1 = uStack_608._4_4_;
          uVar2 = uStack_5e0._4_4_;
          uVar28 = uStack_608;
          uStack_608._4_4_ = uVar1;
          uVar27 = uStack_5e0;
          uStack_5e0._4_4_ = uVar2;
          FUN_02ff507c(param_1,&local_790,auStack_6a0,&local_670,0);
          uVar27 = uStack_5e0;
          uVar28 = uStack_608;
          uVar1 = uStack_608._4_4_;
          uVar2 = uStack_5e0._4_4_;
LAB_02f4c570:
          uStack_5e0._4_4_ = uVar2;
          uStack_608._4_4_ = uVar1;
          uStack_5e0 = uVar27;
          uStack_608 = uVar28;
          uVar2 = uStack_5e0._4_4_;
          uVar1 = uStack_608._4_4_;
          uStack_608._4_4_ = uVar1;
          uStack_5e0._4_4_ = uVar2;
          if (local_664 == 0) {
            uStack_9f8 = CONCAT44(fVar85 * fVar69 + uStack_9f8._4_4_,fVar66 + (float)uStack_9f8);
            local_a00 = CONCAT44(fVar73 + local_a00._4_4_,fVar55 + (float)local_a00);
            uVar28 = uStack_608;
            uVar27 = uStack_5e0;
            if (fVar53 == auVar80._0_4_) break;
          }
          else {
            iVar70 = (int)(float)local_598;
            lVar43 = (long)(int)(float)local_598;
            uVar29 = (int)(float)local_598 - uVar42;
            uVar28 = uStack_608;
            uVar27 = uStack_5e0;
            if ((int)(local_598._4_4_ & 0x7fffffff) <= (int)(float)local_598) {
              FUN_02f4ce98(&local_5a0,lVar43 + 1);
              uVar27 = uStack_5e0;
              uVar28 = uStack_608;
              uVar1 = uStack_608._4_4_;
              uVar2 = uStack_5e0._4_4_;
            }
            uStack_5e0._4_4_ = uVar2;
            uStack_608._4_4_ = uVar1;
            uStack_5e0 = uVar27;
            uStack_608 = uVar28;
            puVar26 = local_5a0;
            uVar2 = uStack_5e0._4_4_;
            uVar1 = uStack_608._4_4_;
            lVar30 = (long)(int)uVar42;
            puVar33 = (undefined8 *)(local_5a0 + (long)(int)uVar42 * 0x50);
            if (uVar29 != 0) {
              if (0 < (int)uVar29) {
                puVar32 = puVar33 + (long)(int)(uVar29 - 1) * 10 + 10;
                uVar36 = uVar29 & 3;
                if (iVar70 + ~uVar42 < 3) {
                  puVar47 = puVar33 + (long)(int)(uVar29 - 1) * 10;
                  uVar28 = uStack_608;
                  uVar27 = uStack_5e0;
                }
                else {
                  iVar70 = -(uVar29 & 0xfffffffc);
                  uVar28 = uStack_608;
                  uVar27 = uStack_5e0;
                  uStack_608._4_4_ = uVar1;
                  uStack_5e0._4_4_ = uVar2;
                  do {
                    uStack_5e0 = uVar27;
                    uStack_608 = uVar28;
                    puVar47 = puVar32;
                    uVar2 = uStack_5e0._4_4_;
                    uVar1 = uStack_608._4_4_;
                    uVar28 = uStack_608;
                    uStack_608._4_4_ = uVar1;
                    uVar27 = uStack_5e0;
                    uStack_5e0._4_4_ = uVar2;
                    memcpy(puVar47,puVar47 + -10,0x50);
                    uVar27 = uStack_5e0;
                    uVar28 = uStack_608;
                    uVar1 = uStack_608._4_4_;
                    uStack_608 = uVar28;
                    uVar2 = uStack_5e0._4_4_;
                    uStack_5e0 = uVar27;
                    uVar28 = uStack_608;
                    uStack_608._4_4_ = uVar1;
                    uVar27 = uStack_5e0;
                    uStack_5e0._4_4_ = uVar2;
                    memcpy(puVar47 + -10,puVar47 + -0x14,0x50);
                    uVar27 = uStack_5e0;
                    uVar28 = uStack_608;
                    uVar1 = uStack_608._4_4_;
                    uStack_608 = uVar28;
                    uVar2 = uStack_5e0._4_4_;
                    uStack_5e0 = uVar27;
                    uVar28 = uStack_608;
                    uStack_608._4_4_ = uVar1;
                    uVar27 = uStack_5e0;
                    uStack_5e0._4_4_ = uVar2;
                    memcpy(puVar47 + -0x14,puVar47 + -0x1e,0x50);
                    uVar27 = uStack_5e0;
                    uVar28 = uStack_608;
                    puVar32 = puVar47 + -0x28;
                    uVar1 = uStack_608._4_4_;
                    uStack_608 = uVar28;
                    uVar2 = uStack_5e0._4_4_;
                    uStack_5e0 = uVar27;
                    uVar28 = uStack_608;
                    uStack_608._4_4_ = uVar1;
                    uVar27 = uStack_5e0;
                    uStack_5e0._4_4_ = uVar2;
                    memcpy(puVar47 + -0x1e,puVar32,0x50);
                    uVar27 = uStack_5e0;
                    uVar28 = uStack_608;
                    iVar70 = iVar70 + 4;
                  } while (iVar70 != 0);
                  puVar47 = puVar47 + -0x32;
                  uVar1 = uStack_608._4_4_;
                  uVar2 = uStack_5e0._4_4_;
                }
                while( true ) {
                  uStack_5e0 = uVar27;
                  uStack_608 = uVar28;
                  if (uVar36 == 0) break;
                  uVar28 = uStack_608;
                  uStack_608._4_4_ = uVar1;
                  uVar27 = uStack_5e0;
                  uStack_5e0._4_4_ = uVar2;
                  memcpy(puVar32,puVar47,0x50);
                  uVar27 = uStack_5e0;
                  uVar28 = uStack_608;
                  puVar32 = puVar32 + -10;
                  puVar47 = puVar47 + -10;
                  uVar36 = uVar36 - 1;
                  uVar1 = uStack_608._4_4_;
                  uVar2 = uStack_5e0._4_4_;
                }
              }
            }
            uStack_5e0._4_4_ = uVar2;
            uStack_608._4_4_ = uVar1;
            uVar2 = uStack_5e0._4_4_;
            uVar27 = uStack_5e0;
            uVar1 = uStack_608._4_4_;
            uVar28 = uStack_608;
            uStack_608._4_4_ = uVar1;
            uStack_5e0._4_4_ = uVar2;
            *(undefined2 *)(puVar26 + lVar30 * 0x50 + 0x38) = 0xffff;
            *(undefined4 *)(puVar26 + lVar30 * 0x50 + 0x3c) = 0;
            *(undefined8 *)(puVar26 + lVar30 * 0x50 + 0x40) = 0;
            local_598 = CONCAT44(local_598._4_4_,(int)(lVar43 + 1));
            fVar60 = param_3[0x17];
            fVar48 = param_3[0x18];
            *(undefined4 *)(puVar26 + lVar30 * 0x50 + 0x28) = local_5f8;
            *(undefined8 *)(puVar26 + lVar30 * 0x50 + 0x20) = local_600;
            *(undefined4 *)(puVar26 + lVar30 * 0x50 + 0x30) = local_5f0;
            puVar26[lVar30 * 0x50 + 0x34] = local_5ec;
            *(undefined2 *)(puVar26 + lVar30 * 0x50 + 0x38) = local_5e8;
            *(undefined4 *)(puVar26 + lVar30 * 0x50 + 0x44) = uStack_5e0._4_4_;
            *(ulong *)(puVar26 + lVar30 * 0x50 + 0x3c) = CONCAT84(uVar27,local_5e4);
            *(undefined8 *)(puVar26 + lVar30 * 0x50 + 0x18) = uStack_648;
            *(undefined8 *)(puVar26 + lVar30 * 0x50 + 0x10) = local_650;
            auVar58._0_4_ = local_640 * ((float)local_a00 + fVar55 * local_630);
            auVar58._4_4_ = fStack_63c * (local_a00._4_4_ + fVar73 * local_630);
            auVar58._8_4_ = fStack_638 * ((float)uStack_9f8 + fVar66 * local_630);
            auVar58._12_4_ = fStack_634 * (uStack_9f8._4_4_ + fVar85 * fVar69 * local_630);
            auVar62 = NEON_ext(auVar58,auVar58,8,1);
            auVar59._8_4_ = fStack_638;
            auVar59._0_8_ = CONCAT44(fStack_63c,local_640);
            auVar59._12_4_ = (fVar48 - fVar60) - (auVar58._0_4_ + auVar58._4_4_ + auVar62._0_4_);
            puVar33[1] = auVar59._8_8_;
            *puVar33 = CONCAT44(fStack_63c,local_640);
            *(undefined4 *)(puVar26 + lVar30 * 0x50 + 0x48) = 0;
            fVar48 = param_4[0x12];
            lVar45 = (long)(int)fVar48;
            lVar43 = lVar45 + 1;
            if ((int)ABS(param_4[0x13]) <= (int)fVar48) {
              uVar1 = uStack_608._4_4_;
              uStack_608 = uVar28;
              uVar2 = uStack_5e0._4_4_;
              uStack_5e0 = uVar27;
              uVar28 = uStack_608;
              uStack_608._4_4_ = uVar1;
              uVar27 = uStack_5e0;
              uStack_5e0._4_4_ = uVar2;
              FUN_02f4d040(param_4 + 0x10,lVar43);
              uVar2 = uStack_5e0._4_4_;
              uVar1 = uStack_608._4_4_;
              fVar48 = param_4[0x12];
              uVar28 = uStack_608;
              uVar27 = uStack_5e0;
              uStack_608._4_4_ = uVar1;
              uStack_5e0._4_4_ = uVar2;
            }
            uStack_5e0 = uVar27;
            uStack_608 = uVar28;
            uVar2 = uStack_5e0._4_4_;
            uVar27 = uStack_5e0;
            uVar1 = uStack_608._4_4_;
            uVar28 = uStack_608;
            lVar34 = *(long *)(param_4 + 0x10);
            puVar33 = (undefined8 *)(lVar34 + (long)(int)fVar48 * 0x90);
            param_4[0x12] = (float)lVar43;
            *(undefined2 *)(puVar33 + 3) = 0xffff;
            *(undefined2 *)(puVar33 + 8) = 0xffff;
            *(undefined4 *)((long)puVar33 + 0x1c) = 0;
            puVar33[4] = 0;
            *(undefined4 *)((long)puVar33 + 0x44) = 0;
            puVar33[9] = 0;
            *(undefined4 *)(puVar33 + 1) = local_620;
            *puVar33 = local_628;
            *(undefined4 *)(puVar33 + 2) = local_618;
            *(undefined1 *)((long)puVar33 + 0x14) = local_614;
            *(undefined2 *)(puVar33 + 3) = local_610;
            *(undefined4 *)((long)puVar33 + 0x24) = uVar1;
            *(ulong *)((long)puVar33 + 0x1c) = CONCAT84(uStack_608,local_60c);
            *(undefined4 *)(puVar33 + 6) = local_5f8;
            puVar33[5] = local_600;
            *(undefined4 *)(puVar33 + 7) = local_5f0;
            *(undefined1 *)((long)puVar33 + 0x3c) = local_5ec;
            *(undefined2 *)(puVar33 + 8) = local_5e8;
            *(undefined4 *)((long)puVar33 + 0x4c) = uVar2;
            *(ulong *)((long)puVar33 + 0x44) = CONCAT84(uStack_5e0,local_5e4);
            puVar33[0xb] = uStack_648;
            puVar33[10] = local_650;
            puVar33[0xd] = CONCAT44(fStack_634,fStack_638);
            puVar33[0xc] = CONCAT44(fStack_63c,local_640);
            puVar33[0xf] = CONCAT44(fVar85,fVar84);
            puVar33[0xe] = CONCAT44(fVar83,fVar82);
            uStack_608._4_4_ = uVar1;
            uStack_5e0._4_4_ = uVar2;
            if ((int)uVar42 < (int)(float)local_598) {
              lVar43 = 0;
              pfVar39 = (float *)(local_5a0 + lVar30 * 0x50);
              uVar29 = 0xffffffff;
              do {
                fVar48 = fVar82 * *pfVar39;
                fVar60 = fVar83 * pfVar39[1];
                fVar73 = fVar84 * pfVar39[2];
                fVar55 = -(fVar48 + fVar60 + fVar73);
                if (1.1920929e-07 <= fVar55) {
                  fVar66 = (float)local_a00 * *pfVar39;
                  fVar67 = local_a00._4_4_ * pfVar39[1];
                  fVar68 = (float)uStack_9f8 * pfVar39[2];
                  fVar65 = pfVar39[3] + fVar68 + fVar66 + fVar67;
                  if (fVar65 < fVar53 * fVar55) {
                    uVar38 = NEON_fmax(CONCAT44((pfVar39[3] + fVar68 + fVar66 + fVar67) /
                                                -(fVar48 + fVar60 + fVar73),fVar65 / fVar55),0,4);
                    fVar53 = (float)uVar38;
                    fVar69 = (float)((ulong)uVar38 >> 0x20);
                    uVar29 = uVar42 + (int)lVar43;
                  }
                }
                lVar43 = lVar43 + 1;
                pfVar39 = pfVar39 + 0x14;
              } while ((int)(float)local_598 - lVar30 != lVar43);
              if (-1 < (int)uVar29) {
                if (uVar29 != uVar42) {
                  puVar32 = (undefined8 *)(local_5a0 + (ulong)uVar29 * 0x50);
                  uVar1 = *(undefined4 *)(puVar32 + 5);
                  local_790 = puVar32[4];
                  uVar38 = *puVar32;
                  uVar21 = puVar32[1];
                  uVar22 = puVar32[2];
                  uVar23 = puVar32[3];
                  local_788 = (undefined **)CONCAT44(local_788._4_4_,uVar1);
                  uVar2 = *(undefined4 *)(puVar32 + 6);
                  uVar6 = *(undefined1 *)((long)puVar32 + 0x34);
                  uVar8 = *(undefined2 *)(puVar32 + 7);
                  local_9d4 = (undefined2)((ulong)puVar32[8] >> 0x30);
                  uVar3 = *(undefined4 *)(puVar32 + 9);
                  uVar7 = *(undefined1 *)((long)puVar32 + 0x4c);
                  puVar33 = (undefined8 *)(local_5a0 + lVar30 * 0x50);
                  uVar24 = *puVar33;
                  puVar32[1] = puVar33[1];
                  *puVar32 = uVar24;
                  uVar24 = puVar33[2];
                  puVar32[3] = puVar33[3];
                  puVar32[2] = uVar24;
                  uVar4 = *(undefined4 *)(puVar33 + 5);
                  puVar32[4] = puVar33[4];
                  *(undefined4 *)(puVar32 + 5) = uVar4;
                  *(undefined4 *)(puVar32 + 6) = *(undefined4 *)(puVar33 + 6);
                  *(undefined1 *)((long)puVar32 + 0x34) = *(undefined1 *)((long)puVar33 + 0x34);
                  *(undefined2 *)(puVar32 + 7) = *(undefined2 *)(puVar33 + 7);
                  uVar4 = *(undefined4 *)((long)puVar33 + 0x44);
                  *(undefined8 *)((long)puVar32 + 0x3c) = *(undefined8 *)((long)puVar33 + 0x3c);
                  uVar5 = *(undefined4 *)(puVar33 + 9);
                  *(undefined1 *)((long)puVar32 + 0x4c) = *(undefined1 *)((long)puVar33 + 0x4c);
                  *(undefined4 *)((long)puVar32 + 0x44) = uVar4;
                  *(undefined4 *)(puVar32 + 9) = uVar5;
                  puVar33[1] = uVar21;
                  *puVar33 = uVar38;
                  puVar33[3] = uVar23;
                  puVar33[2] = uVar22;
                  *(undefined4 *)(puVar33 + 6) = uVar2;
                  *(undefined4 *)(puVar33 + 5) = uVar1;
                  puVar33[4] = local_790;
                  *(undefined1 *)((long)puVar33 + 0x34) = uVar6;
                  *(undefined2 *)(puVar33 + 7) = uVar8;
                  uVar1 = *(undefined4 *)((undefined8 *)((ulong)&local_9e0 | 2) + 1);
                  *(undefined8 *)((long)puVar33 + 0x3c) = *(undefined8 *)((ulong)&local_9e0 | 2);
                  *(undefined1 *)((long)puVar33 + 0x4c) = uVar7;
                  *(undefined4 *)((long)puVar33 + 0x44) = uVar1;
                  *(undefined4 *)(puVar33 + 9) = uVar3;
                }
                uVar42 = uVar42 + 1;
              }
            }
            local_a00._0_4_ = (float)local_a00 + fVar82 * fVar53;
            local_a00._4_4_ = local_a00._4_4_ + fVar83 * fVar69;
            uStack_9f8._0_4_ = (float)uStack_9f8 + fVar84 * fVar53;
            uStack_9f8._4_4_ = uStack_9f8._4_4_ + fVar85 * fVar69;
            fVar84 = *param_3;
            fVar85 = param_3[1];
            fVar48 = param_3[3];
            lVar34 = lVar34 + lVar45 * 0x90;
            *(float *)(lVar34 + 0x88) = param_3[2] + (float)uStack_9f8;
            *(float *)(lVar34 + 0x8c) = fVar48 + uStack_9f8._4_4_;
            *(float *)(lVar34 + 0x80) = fVar84 + (float)local_a00;
            *(float *)(lVar34 + 0x84) = fVar85 + local_a00._4_4_;
          }
          uStack_5e0 = uVar27;
          uStack_608 = uVar28;
          uVar2 = uStack_5e0._4_4_;
          uVar1 = uStack_608._4_4_;
          local_a10 = CONCAT44(auVar80._4_4_ - fVar69,auVar80._0_4_ - fVar53);
          uStack_a08 = 0;
        }
        else {
          fStack_9b8 = (float)local_598;
          if (0 < (int)(float)local_598) {
            local_5a0[0x4c] = 0;
            if ((float)local_598 == 1.4013e-45) {
              fStack_9b8 = 1.4013e-45;
            }
            else {
              local_5a0[0x9c] = 0;
              if (2 < (int)(float)local_598) {
                lVar30 = 0xec;
                lVar43 = 2;
                do {
                  local_5a0[lVar30] = 0;
                  lVar43 = lVar43 + 1;
                  lVar30 = lVar30 + 0x50;
                } while (lVar43 < (int)(float)local_598);
              }
            }
          }
          local_9e0 = 0x460fcd0;
          uStack_9da = 0;
          local_9a4 = 0x80000020;
          local_6c0 = (undefined1 *)0x0;
          local_6b8 = 0.0;
          local_9d8 = local_9d8 & 0xffffff00;
          local_9d4 = 0;
          uStack_9d2 = 0;
          local_9d0 = 0x5f7ffff05f7ffff0;
          uStack_9c8 = uStack_9c8 & 0xffffffffffffff00;
          local_9a8 = 0;
          local_9c0 = local_5a0;
          local_9b0 = (undefined1 (*) [16])local_9a0;
          local_7a0 = uVar37;
          uVar1 = uStack_608._4_4_;
          uVar2 = uStack_5e0._4_4_;
          uVar28 = uStack_608;
          uStack_608._4_4_ = uVar1;
          uVar27 = uStack_5e0;
          uStack_5e0._4_4_ = uVar2;
          FUN_02ff507c(param_1,&local_790,auStack_6a0,&local_670,&local_9e0);
          uVar27 = uStack_5e0;
          uVar28 = uStack_608;
          uVar29 = 0;
          if ((iVar49 == 0) && (*(char *)(param_3 + 0x1b) != '\0')) {
            uVar31 = (ulong)local_9a8;
            if ((int)local_9a8 < 1) {
              auVar52 = ZEXT816(0);
              uVar29 = 0;
            }
            else {
              fVar48 = param_3[0x17] - param_3[0x18];
              auVar52 = ZEXT816(0);
              uVar36 = 0;
              uVar29 = 0;
              pauVar35 = local_9b0;
              uVar44 = uVar31;
              do {
                auVar62 = *pauVar35;
                fVar78 = auVar52._0_4_ * auVar62._0_4_;
                fVar67 = auVar52._4_4_;
                fVar79 = fVar67 * auVar62._4_4_;
                fVar68 = auVar52._8_4_;
                fVar60 = fVar68 * auVar62._8_4_;
                fVar54 = auVar52._12_4_;
                fVar77 = auVar62._12_4_;
                fVar65 = fVar54 * fVar77;
                auVar10._4_4_ = fVar79;
                auVar10._0_4_ = fVar78;
                auVar10._8_4_ = fVar60;
                auVar10._12_4_ = fVar65;
                auVar11._4_4_ = fVar79;
                auVar11._0_4_ = fVar78;
                auVar11._8_4_ = fVar60;
                auVar11._12_4_ = fVar65;
                auVar81 = NEON_ext(auVar10,auVar11,8,1);
                fVar65 = auVar81._0_4_ + fVar77;
                fVar60 = fVar78 + fVar79 + fVar65;
                if (fVar60 < fVar48) {
                  fVar65 = fVar48 - (fVar78 + fVar79 + fVar65);
                  if (fVar60 < 0.0) {
                    uVar29 = 1;
                  }
                  uVar40 = (uint)(fVar60 < 0.0);
                  uVar36 = uVar36 | uVar40;
                  auVar52._0_4_ = auVar52._0_4_ + auVar62._0_4_ * (fVar48 - fVar60);
                  auVar52._4_4_ = fVar67 + auVar62._4_4_ * fVar65;
                  auVar52._8_4_ = fVar68 + auVar62._8_4_ * (fVar48 - fVar60);
                  auVar52._12_4_ = fVar54 + fVar77 * fVar65;
                  fVar46 = (float)((int)fVar46 + uVar40);
                }
                uVar44 = uVar44 - 1;
                pauVar35 = pauVar35 + 1;
              } while (uVar44 != 0);
              if (uVar36 != 0) {
                uVar36 = 0;
                pauVar35 = local_9b0;
                uVar44 = uVar31;
                do {
                  auVar62 = *pauVar35;
                  fVar78 = auVar52._0_4_ * auVar62._0_4_;
                  fVar67 = auVar52._4_4_;
                  fVar79 = fVar67 * auVar62._4_4_;
                  fVar68 = auVar52._8_4_;
                  fVar60 = fVar68 * auVar62._8_4_;
                  fVar54 = auVar52._12_4_;
                  fVar77 = auVar62._12_4_;
                  fVar65 = fVar54 * fVar77;
                  auVar12._4_4_ = fVar79;
                  auVar12._0_4_ = fVar78;
                  auVar12._8_4_ = fVar60;
                  auVar12._12_4_ = fVar65;
                  auVar13._4_4_ = fVar79;
                  auVar13._0_4_ = fVar78;
                  auVar13._8_4_ = fVar60;
                  auVar13._12_4_ = fVar65;
                  auVar81 = NEON_ext(auVar12,auVar13,8,1);
                  fVar65 = auVar81._0_4_ + fVar77;
                  fVar60 = fVar78 + fVar79 + fVar65;
                  if (fVar60 < fVar48) {
                    fVar65 = fVar48 - (fVar78 + fVar79 + fVar65);
                    if (fVar60 < 0.0) {
                      uVar29 = 1;
                    }
                    uVar40 = (uint)(fVar60 < 0.0);
                    uVar36 = uVar36 | uVar40;
                    auVar52._0_4_ = auVar52._0_4_ + auVar62._0_4_ * (fVar48 - fVar60);
                    auVar52._4_4_ = fVar67 + auVar62._4_4_ * fVar65;
                    auVar52._8_4_ = fVar68 + auVar62._8_4_ * (fVar48 - fVar60);
                    auVar52._12_4_ = fVar54 + fVar77 * fVar65;
                    fVar46 = (float)((int)fVar46 + uVar40);
                  }
                  uVar44 = uVar44 - 1;
                  pauVar35 = pauVar35 + 1;
                } while (uVar44 != 0);
                if (uVar36 != 0) {
                  uVar36 = 0;
                  pauVar35 = local_9b0;
                  uVar44 = uVar31;
                  do {
                    auVar62 = *pauVar35;
                    fVar78 = auVar52._0_4_ * auVar62._0_4_;
                    fVar67 = auVar52._4_4_;
                    fVar79 = fVar67 * auVar62._4_4_;
                    fVar68 = auVar52._8_4_;
                    fVar60 = fVar68 * auVar62._8_4_;
                    fVar54 = auVar52._12_4_;
                    fVar77 = auVar62._12_4_;
                    fVar65 = fVar54 * fVar77;
                    auVar14._4_4_ = fVar79;
                    auVar14._0_4_ = fVar78;
                    auVar14._8_4_ = fVar60;
                    auVar14._12_4_ = fVar65;
                    auVar15._4_4_ = fVar79;
                    auVar15._0_4_ = fVar78;
                    auVar15._8_4_ = fVar60;
                    auVar15._12_4_ = fVar65;
                    auVar81 = NEON_ext(auVar14,auVar15,8,1);
                    fVar65 = auVar81._0_4_ + fVar77;
                    fVar60 = fVar78 + fVar79 + fVar65;
                    if (fVar60 < fVar48) {
                      fVar65 = fVar48 - (fVar78 + fVar79 + fVar65);
                      if (fVar60 < 0.0) {
                        uVar29 = 1;
                      }
                      uVar40 = (uint)(fVar60 < 0.0);
                      uVar36 = uVar36 | uVar40;
                      auVar52._0_4_ = auVar52._0_4_ + auVar62._0_4_ * (fVar48 - fVar60);
                      auVar52._4_4_ = fVar67 + auVar62._4_4_ * fVar65;
                      auVar52._8_4_ = fVar68 + auVar62._8_4_ * (fVar48 - fVar60);
                      auVar52._12_4_ = fVar54 + fVar77 * fVar65;
                      fVar46 = (float)((int)fVar46 + uVar40);
                    }
                    uVar44 = uVar44 - 1;
                    pauVar35 = pauVar35 + 1;
                  } while (uVar44 != 0);
                  if (uVar36 != 0) {
                    uVar36 = 0;
                    pauVar35 = local_9b0;
                    uVar44 = uVar31;
                    do {
                      auVar62 = *pauVar35;
                      fVar78 = auVar52._0_4_ * auVar62._0_4_;
                      fVar67 = auVar52._4_4_;
                      fVar79 = fVar67 * auVar62._4_4_;
                      fVar68 = auVar52._8_4_;
                      fVar60 = fVar68 * auVar62._8_4_;
                      fVar54 = auVar52._12_4_;
                      fVar77 = auVar62._12_4_;
                      fVar65 = fVar54 * fVar77;
                      auVar16._4_4_ = fVar79;
                      auVar16._0_4_ = fVar78;
                      auVar16._8_4_ = fVar60;
                      auVar16._12_4_ = fVar65;
                      auVar17._4_4_ = fVar79;
                      auVar17._0_4_ = fVar78;
                      auVar17._8_4_ = fVar60;
                      auVar17._12_4_ = fVar65;
                      auVar81 = NEON_ext(auVar16,auVar17,8,1);
                      fVar65 = auVar81._0_4_ + fVar77;
                      fVar60 = fVar78 + fVar79 + fVar65;
                      if (fVar60 < fVar48) {
                        fVar65 = fVar48 - (fVar78 + fVar79 + fVar65);
                        if (fVar60 < 0.0) {
                          uVar29 = 1;
                        }
                        uVar40 = (uint)(fVar60 < 0.0);
                        uVar36 = uVar36 | uVar40;
                        auVar52._0_4_ = auVar52._0_4_ + auVar62._0_4_ * (fVar48 - fVar60);
                        auVar52._4_4_ = fVar67 + auVar62._4_4_ * fVar65;
                        auVar52._8_4_ = fVar68 + auVar62._8_4_ * (fVar48 - fVar60);
                        auVar52._12_4_ = fVar54 + fVar77 * fVar65;
                        fVar46 = (float)((int)fVar46 + uVar40);
                      }
                      uVar44 = uVar44 - 1;
                      pauVar35 = pauVar35 + 1;
                    } while (uVar44 != 0);
                    pauVar35 = local_9b0;
                    if (uVar36 != 0) {
                      do {
                        auVar62 = *pauVar35;
                        fVar78 = auVar52._0_4_ * auVar62._0_4_;
                        fVar67 = auVar52._4_4_;
                        fVar79 = fVar67 * auVar62._4_4_;
                        fVar68 = auVar52._8_4_;
                        fVar60 = fVar68 * auVar62._8_4_;
                        fVar54 = auVar52._12_4_;
                        fVar77 = auVar62._12_4_;
                        fVar65 = fVar54 * fVar77;
                        auVar18._4_4_ = fVar79;
                        auVar18._0_4_ = fVar78;
                        auVar18._8_4_ = fVar60;
                        auVar18._12_4_ = fVar65;
                        auVar19._4_4_ = fVar79;
                        auVar19._0_4_ = fVar78;
                        auVar19._8_4_ = fVar60;
                        auVar19._12_4_ = fVar65;
                        auVar81 = NEON_ext(auVar18,auVar19,8,1);
                        fVar65 = auVar81._0_4_ + fVar77;
                        fVar60 = fVar78 + fVar79 + fVar65;
                        if (fVar60 < fVar48) {
                          fVar65 = fVar48 - (fVar78 + fVar79 + fVar65);
                          if (fVar60 < 0.0) {
                            uVar29 = 1;
                          }
                          fVar46 = (float)((int)fVar46 + (uint)(fVar60 < 0.0));
                          auVar52._0_4_ = auVar52._0_4_ + auVar62._0_4_ * (fVar48 - fVar60);
                          auVar52._4_4_ = fVar67 + auVar62._4_4_ * fVar65;
                          auVar52._8_4_ = fVar68 + auVar62._8_4_ * (fVar48 - fVar60);
                          auVar52._12_4_ = fVar54 + fVar77 * fVar65;
                        }
                        uVar31 = uVar31 - 1;
                        pauVar35 = pauVar35 + 1;
                      } while (uVar31 != 0);
                    }
                  }
                }
              }
            }
            auVar57._0_8_ =
                 CONCAT44(local_a00._4_4_ + auVar52._4_4_,(float)local_a00 + auVar52._0_4_);
            auVar57._8_4_ = (float)uStack_9f8 + auVar52._8_4_;
            auVar57._12_4_ = uStack_9f8._4_4_ + auVar52._12_4_;
            uStack_9f8 = auVar57._8_8_;
            local_a00 = auVar57._0_8_;
          }
          iVar70 = (int)(float)local_598;
          if ((int)(float)local_598 < 1) {
            iVar74 = 0;
          }
          else {
            lVar43 = 0;
            uVar31 = 0;
            uVar44 = 0;
            do {
              puVar33 = (undefined8 *)(local_5a0 + lVar43);
              if (*(char *)((long)puVar33 + 0x4c) == '\0') {
                uVar29 = uVar29 | (long)uVar31 < (long)(int)uVar42;
                uVar42 = uVar42 - ((long)uVar31 < (long)(int)uVar42);
              }
              else {
                if (uVar31 != uVar44) {
                  uVar38 = *puVar33;
                  puVar32 = (undefined8 *)(local_5a0 + (long)(int)uVar44 * 0x50);
                  puVar32[1] = puVar33[1];
                  *puVar32 = uVar38;
                  auVar62 = *(undefined1 (*) [16])(puVar33 + 2);
                  puVar32[3] = auVar62._8_8_;
                  puVar32[2] = auVar62._0_8_;
                  uVar38 = puVar33[4];
                  *(undefined4 *)(puVar32 + 5) = *(undefined4 *)(puVar33 + 5);
                  puVar32[4] = uVar38;
                  *(undefined4 *)(puVar32 + 6) = *(undefined4 *)(puVar33 + 6);
                  *(undefined1 *)((long)puVar32 + 0x34) = *(undefined1 *)((long)puVar33 + 0x34);
                  *(undefined2 *)(puVar32 + 7) = *(undefined2 *)(puVar33 + 7);
                  uVar38 = *(undefined8 *)((long)puVar33 + 0x3c);
                  *(undefined4 *)((long)puVar32 + 0x44) = *(undefined4 *)((long)puVar33 + 0x44);
                  *(undefined8 *)((long)puVar32 + 0x3c) = uVar38;
                  uVar1 = *(undefined4 *)(puVar33 + 9);
                  *(undefined1 *)((long)puVar32 + 0x4c) = *(undefined1 *)((long)puVar33 + 0x4c);
                  *(undefined4 *)(puVar32 + 9) = uVar1;
                }
                uVar44 = (ulong)((int)uVar44 + 1);
              }
              iVar74 = (int)uVar44;
              uVar31 = uVar31 + 1;
              lVar43 = lVar43 + 0x50;
            } while ((long)uVar31 < (long)(int)(float)local_598);
            if ((int)(local_598._4_4_ & 0x7fffffff) < iVar74) {
              uVar1 = uStack_608._4_4_;
              uStack_608 = uVar28;
              uVar2 = uStack_5e0._4_4_;
              uStack_5e0 = uVar27;
              uVar28 = uStack_608;
              uStack_608._4_4_ = uVar1;
              uVar27 = uStack_5e0;
              uStack_5e0._4_4_ = uVar2;
              FUN_02f4ce98(&local_5a0,(long)iVar74);
              uVar2 = uStack_5e0._4_4_;
              uVar1 = uStack_608._4_4_;
              uVar28 = uStack_608;
              uVar27 = uStack_5e0;
              iVar70 = (int)local_598;
              uStack_608._4_4_ = uVar1;
              uStack_5e0._4_4_ = uVar2;
            }
          }
          uStack_5e0 = uVar27;
          uStack_608 = uVar28;
          uVar2 = uStack_5e0._4_4_;
          uVar27 = uStack_5e0;
          uVar1 = uStack_608._4_4_;
          uVar28 = uStack_608;
          uStack_608._4_4_ = uVar1;
          uStack_5e0._4_4_ = uVar2;
          if (iVar70 < iVar74) {
            lVar43 = (long)iVar74 * 0x50 + (long)iVar70 * -0x50;
            local_598 = CONCAT44(local_598._4_4_,iVar74);
            puVar33 = (undefined8 *)(local_5a0 + (long)iVar70 * 0x50 + 0x40);
            do {
              *(undefined2 *)(puVar33 + -1) = 0xffff;
              lVar43 = lVar43 + -0x50;
              *(undefined4 *)((long)puVar33 + -4) = 0;
              *puVar33 = 0;
              puVar33 = puVar33 + 10;
            } while (lVar43 != 0);
          }
          else if (iVar74 < iVar70) {
            local_598 = CONCAT44(local_598._4_4_,iVar74);
          }
          local_9e0 = 0x460fcd0;
          uStack_9da = 0;
          local_9a8 = 0;
          if (-1 < (int)local_9a4) {
            if (local_9b0 != (undefined1 (*) [16])0x0) {
              uVar1 = uStack_608._4_4_;
              uStack_608 = uVar28;
              uVar2 = uStack_5e0._4_4_;
              uStack_5e0 = uVar27;
              uVar28 = uStack_608;
              uStack_608._4_4_ = uVar1;
              uVar27 = uStack_5e0;
              uStack_5e0._4_4_ = uVar2;
              (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                        (PTR_PTR_047d1a50,local_9b0,(ulong)local_9a4 << 4);
              uVar2 = uStack_5e0._4_4_;
              uVar1 = uStack_608._4_4_;
              uVar28 = uStack_608;
              uVar27 = uStack_5e0;
              uStack_608._4_4_ = uVar1;
              uStack_5e0._4_4_ = uVar2;
            }
          }
          uStack_5e0 = uVar27;
          uStack_608 = uVar28;
          uVar2 = uStack_5e0._4_4_;
          uVar1 = uStack_608._4_4_;
          uVar28 = uStack_608;
          uVar27 = uStack_5e0;
          if (uVar29 == 0) goto LAB_02f4c570;
        }
        uStack_5e0._4_4_ = uVar2;
        uStack_608._4_4_ = uVar1;
        uVar2 = uStack_5e0._4_4_;
        uVar1 = uStack_608._4_4_;
        local_9e0 = SUB86(local_5a0,0);
        uStack_9da = (undefined2)((ulong)local_5a0 >> 0x30);
        uStack_9c8 = SUB168(*(undefined1 (*) [16])(param_3 + 0x10),8);
        local_9d0 = SUB168(*(undefined1 (*) [16])(param_3 + 0x10),0);
        local_9d8 = uVar42;
        uVar28 = uStack_608;
        uStack_608._4_4_ = uVar1;
        uVar27 = uStack_5e0;
        uStack_5e0._4_4_ = uVar2;
        FUN_02f4d1f0(&local_9e0);
        uVar27 = uStack_5e0;
        uVar28 = uStack_608;
        if ((int)local_9d8 < (int)uVar42) {
          uVar44 = (ulong)(int)local_9d8;
          uVar31 = uVar44;
          if ((uVar42 - local_9d8 & 1) != 0) {
            uVar31 = uVar44 + 1;
            *(float *)(local_5a0 + uVar44 * 0x50 + 0xc) =
                 param_3[0x17] * 0.1 + *(float *)(local_5a0 + uVar44 * 0x50 + 0xc);
          }
          if (~uVar44 + (long)(int)uVar42 != 0) {
            lVar43 = (long)(int)uVar42 - uVar31;
            lVar30 = uVar31 * 0x50;
            do {
              lVar43 = lVar43 + -2;
              *(float *)(local_5a0 + lVar30 + 0xc) =
                   param_3[0x17] * 0.1 + *(float *)(local_5a0 + lVar30 + 0xc);
              *(float *)(local_5a0 + lVar30 + 0x5c) =
                   param_3[0x17] * 0.1 + *(float *)(local_5a0 + lVar30 + 0x5c);
              lVar30 = lVar30 + 0xa0;
            } while (lVar43 != 0);
          }
        }
        iVar49 = iVar49 + 1;
        fVar82 = SUB84(local_9c0,0);
        fVar83 = (float)((ulong)local_9c0 >> 0x20);
        auVar80._8_8_ = uStack_a08;
        auVar80._0_8_ = local_a10;
        fVar84 = fStack_9b8;
        fVar85 = fStack_9b4;
        if ((int)fVar46 <= iVar49) break;
        uVar42 = local_9d8;
      } while (1.1920929e-07 < (float)local_a10);
    }
  }
  uStack_5e0 = uVar27;
  uStack_608 = uVar28;
  uVar2 = uStack_5e0._4_4_;
  uVar1 = uStack_608._4_4_;
  fVar48 = *param_3;
  fVar53 = param_3[1];
  fVar87 = param_3[2];
  fVar55 = param_3[3];
  *(ulong *)(param_4 + 6) = CONCAT44(fVar85,fVar84);
  *(ulong *)(param_4 + 4) = CONCAT44(fVar83,fVar82);
  param_4[10] = (float)uStack_9f8;
  param_4[0xb] = uStack_9f8._4_4_;
  param_4[8] = (float)local_a00;
  param_4[9] = local_a00._4_4_;
  param_4[2] = (float)uStack_9f8 + fVar87;
  param_4[3] = uStack_9f8._4_4_ + fVar55;
  *param_4 = (float)local_a00 + fVar48;
  param_4[1] = local_a00._4_4_ + fVar53;
  *(ulong *)(param_4 + 0xc) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) - (float)(local_a10 >> 0x20)
                ,(float)*(undefined8 *)(param_3 + 0x14) - (float)local_a10);
  if (local_5a8 != (long *)0x0) {
    lVar43 = *local_5a8;
    if (((*(byte *)(lVar43 + 0x38) & 1) != 0) && (local_5a8[6] != 0)) {
      puVar33 = (undefined8 *)local_5a8[2];
      uVar31 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
      if ((uVar31 <= (ulong)local_5a8[3]) && (local_5a8[2] = uVar31, puVar33 != (undefined8 *)0x0))
      {
        *puVar33 = &DAT_03c4e575;
        puVar33[1] = *(undefined8 *)(local_5a8[6] + 8);
      }
    }
    puVar33 = (undefined8 *)local_5a8[2];
    uVar31 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
    if (uVar31 <= (ulong)local_5a8[3]) {
      local_5a8[2] = uVar31;
      if (puVar33 != (undefined8 *)0x0) {
        *puVar33 = &DAT_03c2d363;
        uVar28 = uStack_608;
        uStack_608._4_4_ = uVar1;
        uVar27 = uStack_5e0;
        uStack_5e0._4_4_ = uVar2;
        uVar28 = nn::os::GetSystemTick();
        uVar2 = uStack_5e0._4_4_;
        uVar1 = uStack_608._4_4_;
        puVar33[1] = uVar28;
      }
    }
    uStack_5e0._4_4_ = uVar2;
    uStack_608._4_4_ = uVar1;
    uVar2 = uStack_5e0._4_4_;
    uVar1 = uStack_608._4_4_;
    if (*(code **)(lVar43 + 0x20) != (code *)0x0) {
      uVar28 = uStack_608;
      uStack_608._4_4_ = uVar1;
      uVar27 = uStack_5e0;
      uStack_5e0._4_4_ = uVar2;
      (**(code **)(lVar43 + 0x20))(*(undefined8 *)(lVar43 + 0x28));
      uVar2 = uStack_5e0._4_4_;
      uVar1 = uStack_608._4_4_;
    }
  }
  uStack_5e0._4_4_ = uVar2;
  uStack_608._4_4_ = uVar1;
  lVar43 = local_598;
  uVar2 = uStack_5e0._4_4_;
  uVar1 = uStack_608._4_4_;
  uVar31 = (ulong)local_598._4_4_;
  local_598 = (ulong)local_598._4_4_ << 0x20;
  if ((-1 < lVar43) && (local_5a0 != (undefined1 *)0x0)) {
    uVar28 = uStack_608;
    uStack_608._4_4_ = uVar1;
    uVar27 = uStack_5e0;
    uStack_5e0._4_4_ = uVar2;
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_5a0,uVar31 * 0x50);
  }
  return;
}


