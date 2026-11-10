/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0200bfec; name: FUN_0200bfec
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0200bfec(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  short sVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char cVar12;
  float extraout_var;
  ulong uVar13;
  undefined1 *puVar14;
  char *pcVar15;
  long lVar16;
  bool bVar17;
  short sVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float extraout_s0;
  float extraout_s0_00;
  float extraout_var_02;
  undefined1 auVar27 [12];
  float extraout_var_00;
  float extraout_var_01;
  float extraout_var_03;
  undefined1 auVar28 [16];
  float extraout_var_04;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iVar36;
  float fVar37;
  int iVar43;
  float fVar44;
  int iVar45;
  float fVar46;
  int iVar47;
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  float fVar48;
  int iVar49;
  int iVar50;
  float fVar51;
  int iVar52;
  int iVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  float fVar75;
  undefined1 auVar76 [12];
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined4 uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar95;
  float fVar96;
  undefined1 auVar94 [16];
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float local_120;
  float fStack_11c;
  undefined4 local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined1 local_f0;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined1 uStack_ed;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  undefined2 local_d8;
  undefined1 local_d6;
  long local_d0 [9];
  long *local_88;
  long local_80 [4];
  
  lVar16 = *(long *)(*(long *)(*param_4 + (ulong)*(uint *)(param_2 + 8)) + 0x40);
  if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar16 + 0x1a);
    sVar18 = *(short *)(lVar16 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar18) {
        cVar12 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar18 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
        if (cVar12 != '\0') goto LAB_0200c0fc;
        bVar17 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0200c0fc:
        bVar17 = false;
      }
      if (bVar17) {
        if (*(long *)(lVar16 + 0x10) != 0) {
          plVar19 = (long *)(*(long *)(lVar16 + 0x10) + -0x28);
          FUN_00e1eba8(local_80,plVar19);
          (**(code **)(*plVar19 + 0x60))(plVar19);
          if ((local_80[0] == 0) || (*(short *)(local_80[0] + 0x1a) == 0)) goto LAB_0200c030;
          psVar1 = (short *)(local_80[0] + 0x1a);
          sVar18 = *(short *)(local_80[0] + 0x1a);
          goto LAB_0200c160;
        }
        break;
      }
      sVar18 = sVar2;
    } while (sVar2 != 0);
  }
  local_80[0] = 0;
  local_80[1] = 0;
  goto LAB_0200c030;
joined_r0x0200c290:
  if (plVar20 == (long *)0x0) goto LAB_0200cc40;
  if (plVar20 == (long *)PTR_DAT_047db168) goto LAB_0200c2a8;
  plVar20 = (long *)*plVar20;
  goto joined_r0x0200c290;
LAB_0200cc40:
  lVar16 = 0;
LAB_0200c2a8:
  *(long *)(lVar21 + (ulong)*(uint *)(param_2 + 0xe4)) = lVar16;
LAB_0200c1c4:
  if ((((*(long *)(lVar16 + 0xd8) == 0) || (*(short *)(*(long *)(lVar16 + 0xd8) + 0x1a) == 0)) &&
      (uVar13 = FUN_01473a8c(lVar16 + 0xc0), (uVar13 & 1) == 0)) || (*(long *)(lVar16 + 0xd0) == 0))
  {
LAB_0200c228:
    *param_1 = *PTR_DAT_047db188;
  }
  else {
    lVar21 = *param_4;
    lVar16 = *(long *)(lVar21 + (ulong)*(uint *)(param_2 + 0xe4));
    if ((lVar16 == 0) && (lVar16 = *(long *)(lVar21 + (ulong)*(uint *)(param_2 + 8)), lVar16 != 0))
    {
      plVar20 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x28))((undefined8 *)(lVar16 + 0x28));
      if (((*PTR_DAT_047db160 & 1) == 0) &&
         (iVar36 = __cxa_guard_acquire(PTR_DAT_047db160), iVar36 != 0)) {
        uVar22 = FUN_01fb90e4();
        *(undefined8 *)PTR_DAT_047db168 = uVar22;
        __cxa_guard_release(PTR_DAT_047db160);
      }
      for (; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
        if (plVar20 == (long *)PTR_DAT_047db168) goto LAB_0200c2fc;
      }
      lVar16 = 0;
LAB_0200c2fc:
      *(long *)(lVar21 + (ulong)*(uint *)(param_2 + 0xe4)) = lVar16;
    }
    if ((((*(long *)(lVar16 + 0x88) == 0) || (*(short *)(*(long *)(lVar16 + 0x88) + 0x1a) == 0)) &&
        (uVar13 = FUN_013f7d04(lVar16 + 0x70), (uVar13 & 1) == 0)) ||
       ((lVar16 = *(long *)(lVar16 + 0x80), lVar16 == 0 ||
        (FUN_00e92dbc(local_d0,lVar16), local_d0[0] == 0)))) goto LAB_0200c228;
    if (*(short *)(local_d0[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_d0[0] + 0x1a);
      sVar18 = *(short *)(local_d0[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar18) {
          cVar12 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar18 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
          if (cVar12 != '\0') goto LAB_0200c34c;
          bVar17 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0200c34c:
          bVar17 = false;
        }
        if (bVar17) {
          plVar20 = (long *)0x0;
          if (*(long *)(local_d0[0] + 0x10) != 0) {
            plVar20 = (long *)(*(long *)(local_d0[0] + 0x10) + -0x28);
          }
          goto LAB_0200c360;
        }
        sVar18 = sVar2;
      } while (sVar2 != 0);
    }
    plVar20 = (long *)0x0;
LAB_0200c360:
    psVar1 = (short *)(local_d0[0] + 0x18);
    do {
      sVar18 = *psVar1;
      cVar12 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar18 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (sVar18 == 1) {
      FUN_0116e168();
    }
    else if (sVar18 == 0) goto LAB_0200c08c;
    if (plVar20 == (long *)0x0) goto LAB_0200c228;
    FUN_014410c0(&local_88,*(undefined8 *)(*param_4 + (ulong)*(uint *)(param_2 + 8)));
    if (local_88 == (long *)0x0) {
LAB_0200cb24:
      *param_1 = *PTR_DAT_047db188;
    }
    else {
      lVar21 = (**(code **)(*plVar19 + 0x68))(plVar19);
      auVar78 = *(undefined1 (*) [16])(lVar21 + 0x30);
      auVar28 = FUN_01025bc4(local_88,*param_4 + (ulong)*(uint *)(param_2 + 0xec));
      FUN_01025bc4(local_88,*param_4 + (ulong)*(uint *)(param_2 + 0xe8));
      fVar75 = extraout_s0 - auVar28._0_4_;
      fVar82 = extraout_var_00 - auVar28._4_4_;
      fVar83 = extraout_var_02 - auVar28._8_4_;
      fVar84 = extraout_var_04 - auVar28._12_4_;
      local_120 = auVar78._0_4_;
      fStack_11c = auVar78._4_4_;
      auVar28._0_4_ = fVar75 * fVar75 + fVar82 * fVar82;
      auVar28._4_4_ = fVar83 * fVar83 + fVar84 * fVar84;
      auVar28._8_4_ = fVar75 * fVar75 + fVar82 * fVar82;
      auVar28._12_4_ = fVar83 * fVar83 + fVar84 * fVar84;
      auVar28 = NEON_ext(auVar28,auVar28,4,1);
      fVar30 = extraout_s0 - local_120;
      fVar33 = extraout_var_00 - fStack_11c;
      fVar34 = extraout_var_02 - auVar78._8_4_;
      fVar35 = extraout_var_04 - 0.0;
      auVar61._0_4_ = auVar28._0_4_ + auVar28._4_4_;
      auVar61._4_4_ = auVar28._8_4_ + auVar28._12_4_;
      auVar61._8_4_ = auVar28._0_4_ + auVar28._4_4_;
      auVar61._12_4_ = auVar28._8_4_ + auVar28._12_4_;
      auVar54 = NEON_frsqrte(auVar61,4);
      auVar58._0_4_ = auVar61._0_4_ * auVar54._0_4_;
      auVar58._4_4_ = auVar61._4_4_ * auVar54._4_4_;
      auVar58._8_4_ = auVar61._8_4_ * auVar54._8_4_;
      auVar58._12_4_ = auVar61._12_4_ * auVar54._12_4_;
      auVar59._0_4_ = fVar30 * fVar30 + fVar33 * fVar33;
      auVar59._4_4_ = fVar34 * fVar34 + fVar35 * fVar35;
      auVar59._8_4_ = fVar30 * fVar30 + fVar33 * fVar33;
      auVar59._12_4_ = fVar34 * fVar34 + fVar35 * fVar35;
      auVar28 = NEON_ext(auVar59,auVar59,4,1);
      auVar59 = NEON_frsqrts(auVar54,auVar58,4);
      auVar90._0_4_ = auVar28._0_4_ + auVar28._4_4_;
      auVar90._4_4_ = auVar28._8_4_ + auVar28._12_4_;
      auVar90._8_4_ = auVar28._0_4_ + auVar28._4_4_;
      auVar90._12_4_ = auVar28._8_4_ + auVar28._12_4_;
      auVar55._0_4_ = auVar54._0_4_ * auVar59._0_4_;
      auVar55._4_4_ = auVar54._4_4_ * auVar59._4_4_;
      auVar55._8_4_ = auVar54._8_4_ * auVar59._8_4_;
      auVar55._12_4_ = auVar54._12_4_ * auVar59._12_4_;
      auVar60._0_4_ = auVar61._0_4_ * auVar55._0_4_;
      auVar60._4_4_ = auVar61._4_4_ * auVar55._4_4_;
      auVar60._8_4_ = auVar61._8_4_ * auVar55._8_4_;
      auVar60._12_4_ = auVar61._12_4_ * auVar55._12_4_;
      iVar36 = -(uint)(auVar61._0_4_ == 0.0);
      iVar43 = -(uint)(auVar61._4_4_ == 0.0);
      iVar45 = -(uint)(auVar61._8_4_ == 0.0);
      iVar47 = -(uint)(auVar61._12_4_ == 0.0);
      auVar28 = NEON_frsqrts(auVar55,auVar60,4);
      auVar61 = NEON_frsqrte(auVar90,4);
      fVar75 = fVar75 * auVar55._0_4_ * auVar28._0_4_;
      fVar82 = fVar82 * auVar55._4_4_ * auVar28._4_4_;
      fVar83 = fVar83 * auVar55._8_4_ * auVar28._8_4_;
      fVar84 = fVar84 * auVar55._12_4_ * auVar28._12_4_;
      auVar56._0_4_ = auVar90._0_4_ * auVar61._0_4_;
      auVar56._4_4_ = auVar90._4_4_ * auVar61._4_4_;
      auVar56._8_4_ = auVar90._8_4_ * auVar61._8_4_;
      auVar56._12_4_ = auVar90._12_4_ * auVar61._12_4_;
      auVar28 = NEON_frsqrts(auVar61,auVar56,4);
      auVar57._0_4_ = auVar61._0_4_ * auVar28._0_4_;
      auVar57._4_4_ = auVar61._4_4_ * auVar28._4_4_;
      auVar57._8_4_ = auVar61._8_4_ * auVar28._8_4_;
      auVar57._12_4_ = auVar61._12_4_ * auVar28._12_4_;
      auVar62._0_4_ = auVar90._0_4_ * auVar57._0_4_;
      auVar62._4_4_ = auVar90._4_4_ * auVar57._4_4_;
      auVar62._8_4_ = auVar90._8_4_ * auVar57._8_4_;
      auVar62._12_4_ = auVar90._12_4_ * auVar57._12_4_;
      iVar49 = -(uint)(auVar90._0_4_ == 0.0);
      iVar50 = -(uint)(auVar90._4_4_ == 0.0);
      iVar52 = -(uint)(auVar90._8_4_ == 0.0);
      iVar53 = -(uint)(auVar90._12_4_ == 0.0);
      auVar28 = NEON_frsqrts(auVar57,auVar62,4);
      fVar30 = fVar30 * auVar57._0_4_ * auVar28._0_4_;
      fVar33 = fVar33 * auVar57._4_4_ * auVar28._4_4_;
      fVar34 = fVar34 * auVar57._8_4_ * auVar28._8_4_;
      fVar35 = fVar35 * auVar57._12_4_ * auVar28._12_4_;
      fVar51 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                               CONCAT12((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar30 >> 8) &
                                                  ~(byte)((uint)iVar49 >> 8),
                                                  SUB41(fVar30,0) & ~(byte)iVar49)));
      auVar27._0_8_ =
           CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                    CONCAT16((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10),
                             CONCAT15((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar50 >> 8),
                                      CONCAT14(SUB41(fVar33,0) & ~(byte)iVar50,fVar51))));
      auVar27[8] = SUB41(fVar34,0) & ~(byte)iVar52;
      auVar27[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar52 >> 8);
      auVar27[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
      auVar27[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
      auVar54[0xc] = SUB41(fVar35,0) & ~(byte)iVar53;
      auVar54._0_12_ = auVar27;
      auVar54[0xd] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar53 >> 8);
      auVar54[0xe] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
      auVar54[0xf] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
      fStack_108 = auVar27._8_4_;
      fStack_104 = auVar54._12_4_;
      fStack_10c = (float)((ulong)auVar27._0_8_ >> 0x20);
      cVar12 = FUN_01e08308(plVar20);
      fVar30 = 0.0;
      if (cVar12 != '\0') {
        FUN_01e08308(plVar20);
        fVar30 = extraout_var;
      }
      *(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x118)) = fVar30;
      lVar21 = *param_4;
      fVar33 = *(float *)(lVar21 + (ulong)*(uint *)(param_2 + 0x118));
      fVar75 = (float)CONCAT13((byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                               CONCAT12((byte)((uint)fVar75 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar75 >> 8) &
                                                  ~(byte)((uint)iVar36 >> 8),
                                                  SUB41(fVar75,0) & ~(byte)iVar36)));
      fVar82 = (float)CONCAT13((byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                               CONCAT12((byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar82 >> 8) &
                                                  ~(byte)((uint)iVar43 >> 8),
                                                  SUB41(fVar82,0) & ~(byte)iVar43)));
      fVar83 = (float)CONCAT13((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                               CONCAT12((byte)((uint)fVar83 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar83 >> 8) &
                                                  ~(byte)((uint)iVar45 >> 8),
                                                  SUB41(fVar83,0) & ~(byte)iVar45)));
      fVar84 = (float)CONCAT13((byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18),
                               CONCAT12((byte)((uint)fVar84 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar84 >> 8) &
                                                  ~(byte)((uint)iVar47 >> 8),
                                                  SUB41(fVar84,0) & ~(byte)iVar47)));
      fVar34 = *(float *)(lVar21 + (ulong)*(uint *)(param_2 + 0x10c));
      auVar5._4_4_ = extraout_var_00;
      auVar5._0_4_ = extraout_s0;
      auVar5._8_4_ = extraout_var_02;
      auVar5._12_4_ = extraout_var_04;
      auVar23._0_4_ = fVar75 * fVar51 + fVar82 * fStack_10c;
      auVar23._4_4_ = fVar83 * fStack_108 + fVar84 * fStack_104;
      auVar23._8_4_ = fVar75 * fVar51 + fVar82 * fStack_10c;
      auVar23._12_4_ = fVar83 * fStack_108 + fVar84 * fStack_104;
      fVar75 = extraout_s0 + fVar75 * fVar33 + fVar75 * fVar34;
      fVar82 = extraout_var_00 + fVar82 * fVar33 + fVar82 * fVar34;
      fVar83 = extraout_var_02 + fVar83 * fVar33 + fVar83 * fVar34;
      fVar84 = extraout_var_04 + fVar84 * fVar33 + fVar84 * fVar34;
      uStack_e8 = SUB41(fVar83,0);
      uStack_e7 = (undefined1)((uint)fVar83 >> 8);
      uStack_e6 = (undefined1)((uint)fVar83 >> 0x10);
      uStack_e5 = (undefined1)((uint)fVar83 >> 0x18);
      uStack_e4 = SUB41(fVar84,0);
      uStack_e3 = (undefined1)((uint)fVar84 >> 8);
      uStack_e2 = (undefined1)((uint)fVar84 >> 0x10);
      uStack_e1 = (undefined1)((uint)fVar84 >> 0x18);
      local_f0 = SUB41(fVar75,0);
      uStack_ef = (undefined1)((uint)fVar75 >> 8);
      uStack_ee = (undefined1)((uint)fVar75 >> 0x10);
      uStack_ed = (undefined1)((uint)fVar75 >> 0x18);
      uStack_ec = SUB41(fVar82,0);
      uStack_eb = (undefined1)((uint)fVar82 >> 8);
      uStack_ea = (undefined1)((uint)fVar82 >> 0x10);
      uStack_e9 = (undefined1)((uint)fVar82 >> 0x18);
      auVar28 = NEON_ext(auVar23,auVar23,4,1);
      if (auVar28._0_4_ + auVar28._4_4_ <= -0.75) {
        uVar88 = *(undefined4 *)(lVar21 + (ulong)*(uint *)(param_2 + 0xf8));
        local_110 = *(undefined4 *)(lVar21 + (ulong)*(uint *)(param_2 + 0xfc));
      }
      else {
        auVar31._4_4_ = fStack_108;
        auVar31._0_4_ = fVar51;
        auVar31._8_4_ = fStack_10c;
        auVar31._12_4_ = fStack_108;
        auVar28 = NEON_ext(auVar31,auVar31,8,1);
        fVar33 = auVar28._0_4_;
        auVar38._4_12_ = auVar5._4_12_;
        auVar38._0_4_ = fVar33;
        fVar34 = auVar28._8_4_;
        auVar40._0_8_ = auVar38._0_8_;
        auVar40._8_4_ = fVar34;
        auVar40._12_4_ = extraout_var_04;
        auVar39._8_8_ = auVar40._8_8_;
        auVar39._4_4_ = fVar51;
        auVar39._0_4_ = fVar33;
        auVar41._0_12_ = auVar39._0_12_;
        auVar41._12_4_ = fStack_10c;
        auVar61 = NEON_ext(auVar41,auVar28,8,1);
        auVar61 = NEON_ext(auVar61,auVar61,0xc,1);
        auVar77._0_4_ =
             fVar51 * 0.7071068 + (float)_DAT_03caa930 * 0.0 + (float)_DAT_03cabe90 * auVar61._0_4_
             + (float)_DAT_03cabc60 * fVar33;
        auVar77._4_4_ =
             fStack_10c * 0.7071068 + (float)((ulong)_DAT_03caa930 >> 0x20) * 0.0 +
             (float)((ulong)_DAT_03cabe90 >> 0x20) * auVar61._4_4_ +
             (float)((ulong)_DAT_03cabc60 >> 0x20) * auVar28._4_4_;
        auVar77._8_4_ =
             fStack_108 * 0.7071068 + (float)_UNK_03caa938 * 0.0 +
             (float)_UNK_03cabe98 * auVar61._8_4_ + (float)_UNK_03cabc68 * fVar34;
        auVar77._12_4_ =
             (float)((ulong)_UNK_03caa938 >> 0x20) * fVar51 + 0.0 +
             (float)((ulong)_UNK_03cabe98 >> 0x20) * auVar61._12_4_ +
             (float)((ulong)_UNK_03cabc68 >> 0x20) * auVar28._12_4_;
        auVar42._4_4_ = auVar77._8_4_;
        auVar42._0_4_ = auVar77._8_4_;
        auVar42._8_4_ = auVar77._8_4_;
        auVar42._12_4_ = auVar77._8_4_;
        auVar59 = NEON_ext(auVar42,auVar77,0xc,1);
        auVar89._4_4_ = auVar77._4_4_;
        auVar89._0_4_ = auVar77._4_4_;
        auVar89._8_4_ = auVar77._4_4_;
        auVar89._12_4_ = auVar77._4_4_;
        auVar90 = NEON_ext(auVar89,auVar59,0xc,1);
        fVar35 = (float)_DAT_03caba40;
        uVar13 = (ulong)_DAT_03caba40 >> 0x20;
        fVar95 = (float)_UNK_03caba48;
        fVar37 = (float)_DAT_03cab640;
        fVar44 = (float)((ulong)_DAT_03cab640 >> 0x20);
        fVar46 = (float)_UNK_03cab648;
        fVar48 = (float)((ulong)_UNK_03cab648 >> 0x20);
        fVar100 = (float)_DAT_03cac250;
        uVar9 = (ulong)_DAT_03cac250 >> 0x20;
        fVar101 = (float)_UNK_03cac258;
        fVar98 = (float)_DAT_03caa650;
        uVar10 = (ulong)_DAT_03caa650 >> 0x20;
        fVar99 = (float)_UNK_03caa658;
        fVar96 = (float)_DAT_03cab5d0;
        uVar11 = (ulong)_DAT_03cab5d0 >> 0x20;
        fVar97 = (float)_UNK_03cab5d8;
        fVar75 = fVar75 - local_120;
        fVar82 = fVar82 - fStack_11c;
        fVar83 = fVar83 - auVar78._8_4_;
        fVar84 = fVar84 - 0.0;
        auVar78._0_4_ = fVar75 * fVar75 + fVar82 * fVar82;
        auVar78._4_4_ = fVar83 * fVar83 + fVar84 * fVar84;
        auVar78._8_4_ = fVar75 * fVar75 + fVar82 * fVar82;
        auVar78._12_4_ = fVar83 * fVar83 + fVar84 * fVar84;
        auVar78 = NEON_ext(auVar78,auVar78,4,1);
        *(float *)((ulong)*(uint *)(param_2 + 0x118) + lVar21) = fVar30 + fVar30;
        auVar24._0_4_ = auVar78._0_4_ + auVar78._4_4_;
        auVar24._4_4_ = auVar78._8_4_ + auVar78._12_4_;
        auVar24._8_4_ = auVar78._0_4_ + auVar78._4_4_;
        auVar24._12_4_ = auVar78._8_4_ + auVar78._12_4_;
        auVar78 = NEON_frsqrte(auVar24,4);
        lVar21 = *param_4;
        auVar93._0_4_ = auVar24._0_4_ * auVar78._0_4_;
        auVar93._4_4_ = auVar24._4_4_ * auVar78._4_4_;
        auVar93._8_4_ = auVar24._8_4_ * auVar78._8_4_;
        auVar93._12_4_ = auVar24._12_4_ * auVar78._12_4_;
        auVar54 = NEON_frsqrts(auVar78,auVar93,4);
        cVar12 = *(char *)(lVar21 + (ulong)*(uint *)(param_2 + 0x11c));
        auVar85._0_4_ = auVar78._0_4_ * auVar54._0_4_;
        auVar85._4_4_ = auVar78._4_4_ * auVar54._4_4_;
        auVar85._8_4_ = auVar78._8_4_ * auVar54._8_4_;
        auVar85._12_4_ = auVar78._12_4_ * auVar54._12_4_;
        iVar36 = -(uint)(auVar24._0_4_ == 0.0);
        iVar43 = -(uint)(auVar24._4_4_ == 0.0);
        iVar45 = -(uint)(auVar24._8_4_ == 0.0);
        iVar47 = -(uint)(auVar24._12_4_ == 0.0);
        auVar79._0_4_ = auVar24._0_4_ * auVar85._0_4_;
        auVar79._4_4_ = auVar24._4_4_ * auVar85._4_4_;
        auVar79._8_4_ = auVar24._8_4_ * auVar85._8_4_;
        auVar79._12_4_ = auVar24._12_4_ * auVar85._12_4_;
        auVar78 = NEON_frsqrts(auVar85,auVar79,4);
        fVar75 = fVar75 * auVar85._0_4_ * auVar78._0_4_;
        fVar82 = fVar82 * auVar85._4_4_ * auVar78._4_4_;
        fVar83 = fVar83 * auVar85._8_4_ * auVar78._8_4_;
        fVar84 = fVar84 * auVar85._12_4_ * auVar78._12_4_;
        fVar30 = (float)CONCAT13((byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                                 CONCAT12((byte)((uint)fVar75 >> 0x10) &
                                          ~(byte)((uint)iVar36 >> 0x10),
                                          CONCAT11((byte)((uint)fVar75 >> 8) &
                                                   ~(byte)((uint)iVar36 >> 8),
                                                   SUB41(fVar75,0) & ~(byte)iVar36)));
        auVar76._0_8_ =
             CONCAT17((byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                      CONCAT16((byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                               CONCAT15((byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar43 >> 8),
                                        CONCAT14(SUB41(fVar82,0) & ~(byte)iVar43,fVar30))));
        auVar76[8] = SUB41(fVar83,0) & ~(byte)iVar45;
        auVar76[9] = (byte)((uint)fVar83 >> 8) & ~(byte)((uint)iVar45 >> 8);
        auVar76[10] = (byte)((uint)fVar83 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
        auVar76[0xb] = (byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
        auVar80[0xc] = SUB41(fVar84,0) & ~(byte)iVar47;
        auVar80._0_12_ = auVar76;
        auVar80[0xd] = (byte)((uint)fVar84 >> 8) & ~(byte)((uint)iVar47 >> 8);
        auVar80[0xe] = (byte)((uint)fVar84 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
        auVar80[0xf] = (byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
        fVar30 = (fVar35 * auVar77._12_4_ + fVar100 * auVar77._0_4_ * fVar37 +
                  fVar98 * auVar90._0_4_ * fVar37 + fVar96 * auVar59._0_4_) * fVar30;
        fVar75 = ((float)uVar13 * auVar77._12_4_ + (float)uVar9 * auVar77._4_4_ * fVar44 +
                  (float)uVar10 * auVar90._4_4_ * fVar44 + (float)uVar11 * auVar59._4_4_) *
                 (float)((ulong)auVar76._0_8_ >> 0x20);
        fVar82 = (fVar95 * auVar77._12_4_ + fVar101 * auVar77._8_4_ * fVar46 +
                  fVar99 * auVar90._8_4_ * fVar46 + fVar97 * auVar59._8_4_) * auVar76._8_4_;
        fVar83 = auVar80._12_4_ * 0.0;
        auVar25._0_4_ = fVar30 + fVar75;
        auVar25._4_4_ = fVar82 + fVar83;
        auVar25._8_4_ = fVar30 + fVar75;
        auVar25._12_4_ = fVar82 + fVar83;
        auVar59 = NEON_ext(auVar25,auVar25,4,1);
        fVar95 = *(float *)(&DAT_03cb56f8 + (ulong)(cVar12 == '\0') * 4) * 0.5;
        iVar36 = -(uint)(ABS(fVar95) == INFINITY);
        auVar78 = NEON_scvtf(ZEXT416((uint)(int)((float)(-(uint)(0.0 <= fVar95) & 0x80000000 ^
                                                        0xbf000000) + fVar95 * 0.15915494)) << 0x40,
                             4);
        auVar63[8] = ~(byte)iVar36;
        auVar63._0_8_ = 0xffffffffffffffff;
        auVar63[9] = ~(byte)((uint)iVar36 >> 8);
        auVar63[10] = ~(byte)((uint)iVar36 >> 0x10);
        auVar63[0xb] = ~(byte)((uint)iVar36 >> 0x18);
        auVar63[0xc] = 0xff;
        auVar63[0xd] = 0xff;
        auVar63[0xe] = 0xff;
        auVar63[0xf] = 0xff;
        iVar36 = -(uint)(fVar95 == 0.0);
        fVar82 = fVar95 + 1.5707964;
        fVar84 = 0.0 - auVar78._0_4_ * 6.2831855;
        fVar35 = 0.0 - auVar78._4_4_ * 6.2831855;
        fVar95 = fVar95 - auVar78._8_4_ * 6.2831855;
        fVar96 = 0.0 - auVar78._12_4_ * 6.2831855;
        iVar43 = -(uint)(ABS(fVar82) == INFINITY);
        auVar86[8] = ~(byte)iVar43;
        auVar86._0_8_ = 0xffffffffffffffff;
        auVar86[9] = ~(byte)((uint)iVar43 >> 8);
        auVar86[10] = ~(byte)((uint)iVar43 >> 0x10);
        auVar86[0xb] = ~(byte)((uint)iVar43 >> 0x18);
        auVar86[0xc] = 0xff;
        auVar86[0xd] = 0xff;
        auVar86[0xe] = 0xff;
        auVar86[0xf] = 0xff;
        fVar84 = (float)((uint)fVar84 ^
                        ((uint)fVar84 ^ (uint)(-3.1415927 - fVar84)) & -(uint)(fVar84 < -1.5707964))
        ;
        fVar35 = (float)((uint)fVar35 ^
                        ((uint)fVar35 ^ (uint)(-3.1415927 - fVar35)) & -(uint)(fVar35 < -1.5707964))
        ;
        fVar95 = (float)((uint)fVar95 ^
                        ((uint)fVar95 ^ (uint)(-3.1415927 - fVar95)) & -(uint)(fVar95 < -1.5707964))
        ;
        fVar96 = (float)((uint)fVar96 ^
                        ((uint)fVar96 ^ (uint)(-3.1415927 - fVar96)) & -(uint)(fVar96 < -1.5707964))
        ;
        auVar78 = NEON_scvtf(ZEXT416((uint)(int)((float)(~-(uint)(0.0 <= fVar82) & 0x80000000 ^
                                                        0x3f000000) + fVar82 * 0.15915494)) << 0x40,
                             4);
        fVar30 = 1.5707964 - auVar78._0_4_ * 6.2831855;
        fVar75 = 1.5707964 - auVar78._4_4_ * 6.2831855;
        fVar82 = fVar82 - auVar78._8_4_ * 6.2831855;
        fVar83 = 1.5707964 - auVar78._12_4_ * 6.2831855;
        fVar84 = (float)((uint)fVar84 ^
                        ((uint)fVar84 ^ (uint)(3.1415927 - fVar84)) & -(uint)(1.5707964 < fVar84));
        fVar35 = (float)((uint)fVar35 ^
                        ((uint)fVar35 ^ (uint)(3.1415927 - fVar35)) & -(uint)(1.5707964 < fVar35));
        fVar95 = (float)((uint)fVar95 ^
                        ((uint)fVar95 ^ (uint)(3.1415927 - fVar95)) & -(uint)(1.5707964 < fVar95));
        fVar96 = (float)((uint)fVar96 ^
                        ((uint)fVar96 ^ (uint)(3.1415927 - fVar96)) & -(uint)(1.5707964 < fVar96));
        fVar97 = fVar84 * fVar84;
        fVar98 = fVar35 * fVar35;
        fVar99 = fVar95 * fVar95;
        fVar100 = fVar96 * fVar96;
        fVar30 = (float)((uint)fVar30 ^
                        ((uint)fVar30 ^ (uint)(-3.1415927 - fVar30)) & -(uint)(fVar30 < -1.5707964))
        ;
        fVar75 = (float)((uint)fVar75 ^
                        ((uint)fVar75 ^ (uint)(-3.1415927 - fVar75)) & -(uint)(fVar75 < -1.5707964))
        ;
        fVar82 = (float)((uint)fVar82 ^
                        ((uint)fVar82 ^ (uint)(-3.1415927 - fVar82)) & -(uint)(fVar82 < -1.5707964))
        ;
        fVar83 = (float)((uint)fVar83 ^
                        ((uint)fVar83 ^ (uint)(-3.1415927 - fVar83)) & -(uint)(fVar83 < -1.5707964))
        ;
        auVar64._8_4_ = 0x7fc00000;
        auVar64._0_8_ = 0x7fc000007fc00000;
        auVar64._12_4_ = 0x7fc00000;
        fVar30 = (float)((uint)fVar30 ^
                        ((uint)fVar30 ^ (uint)(3.1415927 - fVar30)) & -(uint)(1.5707964 < fVar30));
        fVar75 = (float)((uint)fVar75 ^
                        ((uint)fVar75 ^ (uint)(3.1415927 - fVar75)) & -(uint)(1.5707964 < fVar75));
        fVar82 = (float)((uint)fVar82 ^
                        ((uint)fVar82 ^ (uint)(3.1415927 - fVar82)) & -(uint)(1.5707964 < fVar82));
        fVar83 = (float)((uint)fVar83 ^
                        ((uint)fVar83 ^ (uint)(3.1415927 - fVar83)) & -(uint)(1.5707964 < fVar83));
        auVar78 = NEON_fmov(0x3f800000,4);
        fVar101 = fVar30 * fVar30;
        fVar102 = fVar75 * fVar75;
        fVar103 = fVar82 * fVar82;
        fVar104 = fVar83 * fVar83;
        auVar81._0_4_ =
             fVar30 * (auVar78._0_4_ +
                      fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
        auVar81._4_4_ =
             fVar75 * (auVar78._4_4_ +
                      fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
        auVar81._8_4_ =
             fVar82 * (auVar78._8_4_ +
                      fVar103 * (fVar103 * (fVar103 * (fVar103 * (fVar103 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
        auVar81._12_4_ =
             fVar83 * (auVar78._12_4_ +
                      fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
        auVar81 = auVar81 ^ (auVar81 ^ auVar64) & ~auVar86;
        auVar87._0_4_ =
             fVar84 * (auVar78._0_4_ +
                      fVar97 * (fVar97 * (fVar97 * (fVar97 * (fVar97 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar87._4_4_ =
             fVar35 * (auVar78._4_4_ +
                      fVar98 * (fVar98 * (fVar98 * (fVar98 * (fVar98 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar87._8_4_ =
             fVar95 * (auVar78._8_4_ +
                      fVar99 * (fVar99 * (fVar99 * (fVar99 * (fVar99 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar87._12_4_ =
             fVar96 * (auVar78._12_4_ +
                      fVar100 * (fVar100 * (fVar100 * (fVar100 * (fVar100 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
        auVar87 = auVar87 ^ (auVar87 ^ auVar64) & ~auVar63;
        fVar83 = auVar87._0_4_;
        auVar64 = auVar64 ^ (auVar64 ^
                            auVar81 ^ (auVar81 ^ auVar78) &
                                      ~(ZEXT416(CONCAT13(~(byte)((uint)iVar36 >> 0x18),
                                                         CONCAT12(~(byte)((uint)iVar36 >> 0x10),
                                                                  CONCAT11(~(byte)((uint)iVar36 >> 8
                                                                                  ),~(byte)iVar36)))
                                               ) << 0x40)) & auVar63;
        fVar30 = auVar64._0_4_;
        fVar75 = auVar64._4_4_;
        fVar84 = auVar87._4_4_;
        fVar82 = auVar64._8_4_;
        fVar35 = auVar87._8_4_;
        auVar65._0_4_ = fVar82 * fVar30 * fVar84 + fVar35 * fVar75 * fVar83 * (float)_DAT_03cab3a0;
        auVar65._4_4_ =
             fVar35 * fVar30 * fVar75 +
             fVar82 * fVar84 * fVar83 * (float)((ulong)_DAT_03cab3a0 >> 0x20);
        auVar65._8_4_ = fVar82 * fVar83 * fVar75 + fVar35 * fVar84 * fVar30 * (float)_UNK_03cab3a8;
        auVar65._12_4_ =
             fVar82 * fVar30 * fVar75 +
             fVar35 * fVar84 * fVar83 * (float)((ulong)_UNK_03cab3a8 >> 0x20);
        fVar75 = -auVar65._0_4_;
        fVar82 = -auVar65._4_4_;
        fVar84 = -auVar65._8_4_;
        auVar91._4_4_ = auVar65._8_4_;
        auVar91._0_4_ = auVar65._8_4_;
        auVar91._8_4_ = auVar65._8_4_;
        auVar91._12_4_ = auVar65._8_4_;
        auVar78 = NEON_ext(auVar91,auVar65,0xc,1);
        auVar92._4_4_ = auVar65._4_4_;
        auVar92._0_4_ = auVar65._4_4_;
        auVar92._8_4_ = auVar65._4_4_;
        auVar92._12_4_ = auVar65._4_4_;
        auVar54 = NEON_ext(auVar92,auVar78,0xc,1);
        auVar66._4_4_ = fVar84;
        auVar66._0_4_ = fVar84;
        auVar66._8_4_ = fVar84;
        auVar66._12_4_ = fVar84;
        auVar67._4_12_ = auVar66._4_12_;
        auVar67._0_4_ = fVar75;
        auVar69._0_8_ = auVar67._0_8_;
        auVar69._8_4_ = fVar82;
        auVar69._12_4_ = fVar84;
        auVar68._8_8_ = auVar69._8_8_;
        auVar68._4_4_ = fVar84;
        auVar68._0_4_ = fVar75;
        auVar70._0_12_ = auVar68._0_12_;
        auVar70._12_4_ = fVar84;
        auVar90 = NEON_ext(auVar70,auVar70,8,1);
        auVar94._0_4_ =
             (fVar51 * auVar65._12_4_ + auVar65._0_4_ * fVar37 * 0.0 +
             auVar61._0_4_ * auVar54._0_4_ * fVar37) - auVar78._0_4_ * fVar33;
        auVar94._4_4_ =
             (fStack_10c * auVar65._12_4_ + auVar65._4_4_ * fVar44 * 0.0 +
             auVar61._4_4_ * auVar54._4_4_ * fVar44) - auVar78._4_4_ * auVar28._4_4_;
        auVar94._8_4_ =
             (fStack_108 * auVar65._12_4_ + auVar65._8_4_ * fVar46 * 0.0 +
             auVar61._8_4_ * auVar54._8_4_ * fVar46) - auVar78._8_4_ * fVar34;
        auVar94._12_4_ =
             (auVar65._12_4_ * 0.0 + fVar51 * auVar65._0_4_ * fVar48 +
             auVar61._12_4_ * auVar54._12_4_ * fVar48) - auVar78._12_4_ * auVar28._12_4_;
        fVar30 = auVar90._0_4_;
        auVar71._4_12_ = auVar70._4_12_;
        auVar71._0_4_ = fVar30;
        auVar73._0_8_ = auVar71._0_8_;
        auVar73._8_4_ = auVar90._8_4_;
        auVar73._12_4_ = fVar84;
        auVar72._8_8_ = auVar73._8_8_;
        auVar72._4_4_ = fVar75;
        auVar72._0_4_ = fVar30;
        auVar74._0_12_ = auVar72._0_12_;
        auVar74._12_4_ = fVar82;
        auVar78 = NEON_ext(auVar74,auVar90,8,1);
        auVar61 = NEON_ext(auVar78,auVar78,0xc,1);
        auVar29._4_4_ = auVar94._8_4_;
        auVar29._0_4_ = auVar94._8_4_;
        auVar29._8_4_ = auVar94._8_4_;
        auVar29._12_4_ = auVar94._8_4_;
        auVar78 = NEON_ext(auVar29,auVar94,0xc,1);
        auVar32._4_4_ = auVar94._4_4_;
        auVar32._0_4_ = auVar94._4_4_;
        auVar32._8_4_ = auVar94._4_4_;
        auVar32._12_4_ = auVar94._4_4_;
        auVar28 = NEON_ext(auVar32,auVar78,0xc,1);
        fVar83 = *(float *)(lVar21 + (ulong)*(uint *)(param_2 + 0x10c));
        fVar75 = (fVar75 * auVar94._12_4_ + auVar65._12_4_ * auVar94._0_4_ * fVar37 +
                 auVar61._0_4_ * auVar28._0_4_ * fVar37) - auVar78._0_4_ * fVar30;
        fVar51 = (fVar82 * auVar94._12_4_ + auVar65._12_4_ * auVar94._4_4_ * fVar44 +
                 auVar61._4_4_ * auVar28._4_4_ * fVar44) - auVar78._4_4_ * auVar90._4_4_;
        fVar82 = (fVar84 * auVar94._12_4_ + auVar65._12_4_ * auVar94._8_4_ * fVar46 +
                 auVar61._8_4_ * auVar28._8_4_ * fVar46) - auVar78._8_4_ * auVar90._8_4_;
        local_110 = 0;
        fVar30 = *(float *)(lVar21 + (ulong)*(uint *)(param_2 + 0x118));
        fVar75 = extraout_s0 + fVar75 * fVar30 + fVar75 * fVar83;
        fVar51 = extraout_var_00 + fVar51 * fVar30 + fVar51 * fVar83;
        fVar82 = extraout_var_02 + fVar82 * fVar30 + fVar82 * fVar83;
        fVar30 = extraout_var_04 + fVar30 * 0.0 + fVar83 * 0.0;
        uStack_e8 = SUB41(fVar82,0);
        uStack_e7 = (undefined1)((uint)fVar82 >> 8);
        uStack_e6 = (undefined1)((uint)fVar82 >> 0x10);
        uStack_e5 = (undefined1)((uint)fVar82 >> 0x18);
        uStack_e4 = SUB41(fVar30,0);
        uStack_e3 = (undefined1)((uint)fVar30 >> 8);
        uStack_e2 = (undefined1)((uint)fVar30 >> 0x10);
        uStack_e1 = (undefined1)((uint)fVar30 >> 0x18);
        local_f0 = SUB41(fVar75,0);
        uStack_ef = (undefined1)((uint)fVar75 >> 8);
        uStack_ee = (undefined1)((uint)fVar75 >> 0x10);
        uStack_ed = (undefined1)((uint)fVar75 >> 0x18);
        uStack_ec = SUB41(fVar51,0);
        uStack_eb = (undefined1)((uint)fVar51 >> 8);
        uStack_ea = (undefined1)((uint)fVar51 >> 0x10);
        uStack_e9 = (undefined1)((uint)fVar51 >> 0x18);
        if (auVar59._0_4_ + auVar59._4_4_ < 0.0) {
          uVar88 = 0;
          if (cVar12 == '\0') goto LAB_0200cb1c;
        }
        else {
          uVar88 = 0;
          if (cVar12 != '\0') {
LAB_0200cb1c:
            FUN_0200b034(plVar20);
            goto LAB_0200cb24;
          }
        }
      }
      if (((*PTR_DAT_047d8c00 & 1) == 0) &&
         (iVar36 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar36 != 0)) {
        FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c00);
      }
      lVar21 = *(long *)PTR_DAT_047d8c08;
      *(long *)PTR_DAT_047d8c10 = lVar21;
      uVar22 = *(undefined8 *)(lVar21 + 0x70);
      local_d0[6] = 0;
      local_d0[7] = 0;
      local_d0[4] = 0;
      local_d0[5] = 0;
      local_d8 = 0;
      local_d0[2] = 0;
      local_d0[3] = 0;
      local_d0[0] = 0;
      local_d0[1] = 0;
      local_d6 = 0;
      iVar36 = FUN_00cf1f38(uVar22,2,local_d0,1,0,&local_d8);
      if (iVar36 == 0) {
        auVar6._4_4_ = extraout_var_00;
        auVar6._0_4_ = extraout_s0;
        auVar6._8_4_ = extraout_var_02;
        auVar6._12_4_ = extraout_var_04;
        auVar7[1] = uStack_ef;
        auVar7[0] = local_f0;
        auVar7[2] = uStack_ee;
        auVar7[3] = uStack_ed;
        auVar7[4] = uStack_ec;
        auVar7[5] = uStack_eb;
        auVar7[6] = uStack_ea;
        auVar7[7] = uStack_e9;
        auVar7[8] = uStack_e8;
        auVar7[9] = uStack_e7;
        auVar7[10] = uStack_e6;
        auVar7[0xb] = uStack_e5;
        auVar7[0xc] = uStack_e4;
        auVar7[0xd] = uStack_e3;
        auVar7[0xe] = uStack_e2;
        auVar7[0xf] = uStack_e1;
        local_d6 = 0;
        local_d8 = 0;
        iVar36 = FUN_00cf1f38(auVar6,auVar7,uVar22,1,local_d0,1,0,&local_d8);
        if (iVar36 != 0) {
          local_d6 = 0;
          local_d8 = 0;
          iVar36 = FUN_00cf1f38(uVar22,1,local_d0,1,0,&local_d8);
          if (iVar36 == 0) {
            local_d6 = 0;
            local_d8 = 0;
            iVar36 = FUN_00cf1f38(uVar22,1,local_d0,1,0,&local_d8);
            if (iVar36 == 0) goto LAB_0200c9b8;
          }
          uStack_e8 = (undefined1)local_d0[1];
          uStack_e7 = (undefined1)((ulong)local_d0[1] >> 8);
          uStack_e6 = (undefined1)((ulong)local_d0[1] >> 0x10);
          uStack_e5 = (undefined1)((ulong)local_d0[1] >> 0x18);
          uStack_e4 = (undefined1)((ulong)local_d0[1] >> 0x20);
          uStack_e3 = (undefined1)((ulong)local_d0[1] >> 0x28);
          uStack_e2 = (undefined1)((ulong)local_d0[1] >> 0x30);
          uStack_e1 = (undefined1)((ulong)local_d0[1] >> 0x38);
          local_f0 = (undefined1)local_d0[0];
          uStack_ef = (undefined1)((ulong)local_d0[0] >> 8);
          uStack_ee = (undefined1)((ulong)local_d0[0] >> 0x10);
          uStack_ed = (undefined1)((ulong)local_d0[0] >> 0x18);
          uStack_ec = (undefined1)((ulong)local_d0[0] >> 0x20);
          uStack_eb = (undefined1)((ulong)local_d0[0] >> 0x28);
          uStack_ea = (undefined1)((ulong)local_d0[0] >> 0x30);
          uStack_e9 = (undefined1)((ulong)local_d0[0] >> 0x38);
        }
LAB_0200c9b8:
        uVar13 = FUN_0200b008(plVar20);
        if ((uVar13 & 1) == 0) {
          uVar13 = FUN_0200b04c(plVar20);
          if ((uVar13 & 1) != 0) goto LAB_0200cc0c;
          lVar21 = *param_4;
          auVar8[1] = uStack_ef;
          auVar8[0] = local_f0;
          auVar8[2] = uStack_ee;
          auVar8[3] = uStack_ed;
          auVar8[4] = uStack_ec;
          auVar8[5] = uStack_eb;
          auVar8[6] = uStack_ea;
          auVar8[7] = uStack_e9;
          auVar8[8] = uStack_e8;
          auVar8[9] = uStack_e7;
          auVar8[10] = uStack_e6;
          auVar8[0xb] = uStack_e5;
          auVar8[0xc] = uStack_e4;
          auVar8[0xd] = uStack_e3;
          auVar8[0xe] = uStack_e2;
          auVar8[0xf] = uStack_e1;
          FUN_0200bf44(auVar8,*(undefined4 *)(lVar21 + (ulong)*(uint *)(param_2 + 0x100)),
                       *(undefined4 *)(lVar21 + (ulong)*(uint *)(param_2 + 0x104)),uVar88,local_110,
                       plVar20,*(undefined1 *)(lVar21 + (ulong)*(uint *)(param_2 + 0x108)));
          FUN_019587b4(lVar16);
          lVar21 = *param_4;
          pfVar3 = (float *)(lVar21 + (ulong)*(uint *)(param_2 + 0x110));
          fVar82 = *(float *)(lVar21 + (ulong)*(uint *)(param_2 + 0xf0));
          fVar30 = (extraout_s0_00 - *pfVar3) * (extraout_s0_00 - *pfVar3);
          fVar75 = (extraout_var_01 - pfVar3[1]) * (extraout_var_01 - pfVar3[1]);
          fVar51 = (extraout_var_03 - pfVar3[2]) * (extraout_var_03 - pfVar3[2]);
          auVar26._0_4_ = fVar30 + fVar75;
          auVar26._4_4_ = fVar51 + 0.0;
          auVar26._8_4_ = fVar30 + fVar75;
          auVar26._12_4_ = fVar51 + 0.0;
          auVar78 = NEON_ext(auVar26,auVar26,4,1);
          if (auVar78._0_4_ + auVar78._4_4_ < fVar82 * fVar82) {
            pcVar15 = (char *)FUN_0200cd6c();
            if (*pcVar15 != '\0') {
              lVar21 = (**(code **)**(undefined8 **)param_4[1])(*(undefined8 **)param_4[1],1);
              *(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x114)) =
                   *(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x114)) +
                   (float)((double)*(long *)(lVar21 + 8) / 1000000000.0);
            }
            if (*(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0xf4)) <=
                *(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x114))) goto LAB_0200cc0c;
          }
          else {
            *(undefined4 *)(lVar21 + (ulong)*(uint *)(param_2 + 0x114)) = 0;
          }
          auVar78 = FUN_019587b4(lVar16);
          puVar4 = (undefined8 *)(*param_4 + (ulong)*(uint *)(param_2 + 0x110));
          puVar4[1] = auVar78._8_8_;
          *puVar4 = auVar78._0_8_;
          puVar14 = (undefined1 *)FUN_015a7158();
        }
        else {
          FUN_0200b034(plVar20);
          puVar14 = (undefined1 *)FUN_015c0588();
        }
      }
      else {
LAB_0200cc0c:
        FUN_0200b034(plVar20);
        puVar14 = PTR_DAT_047db188;
      }
      *param_1 = *puVar14;
      FUN_012c7df0(local_d0 + 7);
    }
    if (local_88 != (long *)0x0) {
      lVar16 = local_88[6];
      psVar1 = (short *)(lVar16 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar12 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar18 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*local_88 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_0200cad0;
    }
    lVar16 = plVar20[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar18 = *psVar1;
      cVar12 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar18 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))(plVar20);
    }
    else if (sVar18 == 0) {
LAB_0200cad0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*plVar19 + 0x60))(plVar19);
  goto LAB_0200c040;
  while (sVar18 = sVar2, sVar2 != 0) {
LAB_0200c160:
    sVar2 = *psVar1;
    if (sVar2 == sVar18) {
      cVar12 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar18 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
      if (cVar12 != '\0') goto LAB_0200c184;
      bVar17 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0200c184:
      bVar17 = false;
    }
    if (bVar17) {
      plVar19 = (long *)(*(long *)(local_80[0] + 0x10) + -0x28);
      if (*(long *)(local_80[0] + 0x10) != 0) {
        lVar21 = *param_4;
        lVar16 = *(long *)(lVar21 + (ulong)*(uint *)(param_2 + 0xe4));
        if ((lVar16 != 0) ||
           (lVar16 = *(long *)(lVar21 + (ulong)*(uint *)(param_2 + 8)), lVar16 == 0))
        goto LAB_0200c1c4;
        plVar20 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x28))((undefined8 *)(lVar16 + 0x28))
        ;
        if (((*PTR_DAT_047db160 & 1) == 0) &&
           (iVar36 = __cxa_guard_acquire(PTR_DAT_047db160), iVar36 != 0)) {
          uVar22 = FUN_01fb90e4();
          *(undefined8 *)PTR_DAT_047db168 = uVar22;
          __cxa_guard_release(PTR_DAT_047db160);
        }
        goto joined_r0x0200c290;
      }
      break;
    }
  }
LAB_0200c030:
  *param_1 = *PTR_DAT_047db188;
LAB_0200c040:
  if (local_80[0] != 0) {
    psVar1 = (short *)(local_80[0] + 0x18);
    do {
      sVar18 = *psVar1;
      cVar12 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar18 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (sVar18 == 1) {
      FUN_0116e168();
    }
    else if (sVar18 == 0) {
LAB_0200c08c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


