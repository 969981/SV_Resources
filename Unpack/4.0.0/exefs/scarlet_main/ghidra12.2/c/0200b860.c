/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0200b860; name: FUN_0200b860
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0200b860(long param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  short sVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar23;
  float fVar24;
  int iVar27;
  int iVar28;
  undefined1 auVar25 [12];
  int iVar29;
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar38;
  float fVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar32;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  float fVar53;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  long *local_60 [2];
  long local_50 [2];
  
  lVar7 = *(long *)(*(long *)(*param_2 + (ulong)*(uint *)(param_1 + 8)) + 0x40);
  if (lVar7 == 0) {
    return;
  }
  if (*(short *)(lVar7 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar7 + 0x1a);
  sVar9 = *(short *)(lVar7 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_0200b8e4;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0200b8e4:
      bVar8 = false;
    }
    if (bVar8) {
      if (*(long *)(lVar7 + 0x10) == 0) {
        return;
      }
      plVar10 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
      FUN_00e1eba8(local_50,plVar10);
      (**(code **)(*plVar10 + 0x60))(plVar10);
      if (local_50[0] == 0) {
        return;
      }
      if (*(short *)(local_50[0] + 0x1a) == 0) goto LAB_0200ba0c;
      psVar1 = (short *)(local_50[0] + 0x1a);
      sVar9 = *(short *)(local_50[0] + 0x1a);
      break;
    }
    sVar9 = sVar3;
    if (sVar3 == 0) {
      return;
    }
  } while( true );
  while (sVar9 = sVar3, sVar3 != 0) {
    sVar3 = *psVar1;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_0200b964;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0200b964:
      bVar8 = false;
    }
    if (bVar8) {
      plVar10 = (long *)(*(long *)(local_50[0] + 0x10) + -0x28);
      if (*(long *)(local_50[0] + 0x10) != 0) {
        lVar12 = *param_2;
        lVar7 = *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 0xe4));
        if ((lVar7 != 0) || (lVar7 = *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 8)), lVar7 == 0))
        goto LAB_0200b99c;
        plVar11 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x28))((undefined8 *)(lVar7 + 0x28));
        if (((*PTR_DAT_047db160 & 1) == 0) &&
           (iVar23 = __cxa_guard_acquire(PTR_DAT_047db160), iVar23 != 0)) {
          uVar6 = FUN_01fb90e4();
          *(undefined8 *)PTR_DAT_047db168 = uVar6;
          __cxa_guard_release(PTR_DAT_047db160);
        }
        goto joined_r0x0200baa4;
      }
      break;
    }
  }
  goto LAB_0200ba0c;
joined_r0x0200baa4:
  if (plVar11 == (long *)0x0) goto LAB_0200be98;
  if (plVar11 == (long *)PTR_DAT_047db168) goto LAB_0200babc;
  plVar11 = (long *)*plVar11;
  goto joined_r0x0200baa4;
LAB_0200be98:
  lVar7 = 0;
LAB_0200babc:
  *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 0xe4)) = lVar7;
LAB_0200b99c:
  if ((((*(long *)(lVar7 + 0xd8) != 0) && (*(short *)(*(long *)(lVar7 + 0xd8) + 0x1a) != 0)) ||
      (uVar5 = FUN_01473a8c(lVar7 + 0xc0), (uVar5 & 1) != 0)) && (*(long *)(lVar7 + 0xd0) != 0)) {
    lVar12 = *param_2;
    lVar7 = *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 0xe4));
    if ((lVar7 == 0) && (lVar7 = *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 8)), lVar7 != 0)) {
      plVar11 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x28))((undefined8 *)(lVar7 + 0x28));
      if (((*PTR_DAT_047db160 & 1) == 0) &&
         (iVar23 = __cxa_guard_acquire(PTR_DAT_047db160), iVar23 != 0)) {
        uVar6 = FUN_01fb90e4();
        *(undefined8 *)PTR_DAT_047db168 = uVar6;
        __cxa_guard_release(PTR_DAT_047db160);
      }
      for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        if (plVar11 == (long *)PTR_DAT_047db168) goto LAB_0200bb10;
      }
      lVar7 = 0;
LAB_0200bb10:
      *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 0xe4)) = lVar7;
    }
    if ((((*(long *)(lVar7 + 0x88) != 0) && (*(short *)(*(long *)(lVar7 + 0x88) + 0x1a) != 0)) ||
        (uVar5 = FUN_013f7d04(lVar7 + 0x70), (uVar5 & 1) != 0)) &&
       ((*(long *)(lVar7 + 0x80) != 0 && (FUN_00e92dbc(local_60), local_60[0] != (long *)0x0)))) {
      if (*(short *)((long)local_60[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_60[0] + 0x1a);
        sVar9 = *(short *)((long)local_60[0] + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar9) {
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_0200bb60;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0200bb60:
            bVar8 = false;
          }
          if (bVar8) {
            plVar11 = (long *)0x0;
            if (local_60[0][2] != 0) {
              plVar11 = (long *)(local_60[0][2] + -0x28);
            }
            goto LAB_0200bb74;
          }
          sVar9 = sVar3;
        } while (sVar3 != 0);
      }
      plVar11 = (long *)0x0;
LAB_0200bb74:
      plVar2 = local_60[0] + 3;
      do {
        sVar9 = (short)*plVar2;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *(short *)plVar2 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        FUN_0116e168();
      }
      else if (sVar9 == 0) goto LAB_0200ba34;
      if (plVar11 != (long *)0x0) {
        FUN_014410c0(local_60,*(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 8)));
        if (local_60[0] != (long *)0x0) {
          *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x114)) = 0;
          lVar7 = (**(code **)(*plVar10 + 0x68))(plVar10);
          auVar36 = *(undefined1 (*) [16])(lVar7 + 0x30);
          auVar19 = FUN_01025bc4(local_60[0],*param_2 + (ulong)*(uint *)(param_1 + 0xec));
          auVar20 = FUN_01025bc4(local_60[0],*param_2 + (ulong)*(uint *)(param_1 + 0xe8));
          FUN_0200bf44(plVar11,*(undefined1 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x108)));
          local_90 = auVar20._0_4_;
          fStack_8c = auVar20._4_4_;
          fStack_88 = auVar20._8_4_;
          fStack_84 = auVar20._12_4_;
          local_80 = auVar19._0_4_;
          fStack_7c = auVar19._4_4_;
          fStack_78 = auVar19._8_4_;
          fStack_74 = auVar19._12_4_;
          local_80 = local_90 - local_80;
          fStack_7c = fStack_8c - fStack_7c;
          fStack_78 = fStack_88 - fStack_78;
          fStack_74 = fStack_84 - fStack_74;
          auVar19._0_4_ = local_80 * local_80 + fStack_7c * fStack_7c;
          auVar19._4_4_ = fStack_78 * fStack_78 + fStack_74 * fStack_74;
          auVar19._8_4_ = local_80 * local_80 + fStack_7c * fStack_7c;
          auVar19._12_4_ = fStack_78 * fStack_78 + fStack_74 * fStack_74;
          auVar19 = NEON_ext(auVar19,auVar19,4,1);
          lVar7 = *param_2;
          auVar20._0_4_ = auVar19._0_4_ + auVar19._4_4_;
          auVar20._4_4_ = auVar19._8_4_ + auVar19._12_4_;
          auVar20._8_4_ = auVar19._0_4_ + auVar19._4_4_;
          auVar20._12_4_ = auVar19._8_4_ + auVar19._12_4_;
          auVar19 = NEON_frsqrte(auVar20,4);
          auVar33._0_4_ = auVar20._0_4_ * auVar19._0_4_;
          auVar33._4_4_ = auVar20._4_4_ * auVar19._4_4_;
          auVar33._8_4_ = auVar20._8_4_ * auVar19._8_4_;
          auVar33._12_4_ = auVar20._12_4_ * auVar19._12_4_;
          auVar34 = NEON_frsqrts(auVar19,auVar33,4);
          auVar30._0_4_ = auVar19._0_4_ * auVar34._0_4_;
          auVar30._4_4_ = auVar19._4_4_ * auVar34._4_4_;
          auVar30._8_4_ = auVar19._8_4_ * auVar34._8_4_;
          auVar30._12_4_ = auVar19._12_4_ * auVar34._12_4_;
          auVar35._0_4_ = auVar20._0_4_ * auVar30._0_4_;
          auVar35._4_4_ = auVar20._4_4_ * auVar30._4_4_;
          auVar35._8_4_ = auVar20._8_4_ * auVar30._8_4_;
          auVar35._12_4_ = auVar20._12_4_ * auVar30._12_4_;
          iVar23 = -(uint)(auVar20._0_4_ == 0.0);
          iVar27 = -(uint)(auVar20._4_4_ == 0.0);
          iVar28 = -(uint)(auVar20._8_4_ == 0.0);
          iVar29 = -(uint)(auVar20._12_4_ == 0.0);
          auVar19 = NEON_frsqrts(auVar30,auVar35,4);
          fVar31 = local_90 - auVar36._0_4_;
          fVar38 = fStack_8c - auVar36._4_4_;
          fVar39 = fStack_88 - auVar36._8_4_;
          fVar53 = (fStack_84 - 0.0) * (fStack_84 - 0.0);
          local_80 = local_80 * auVar30._0_4_ * auVar19._0_4_;
          fStack_7c = fStack_7c * auVar30._4_4_ * auVar19._4_4_;
          fStack_78 = fStack_78 * auVar30._8_4_ * auVar19._8_4_;
          fStack_74 = fStack_74 * auVar30._12_4_ * auVar19._12_4_;
          fVar16 = (float)CONCAT13((byte)((uint)local_80 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                                   CONCAT12((byte)((uint)local_80 >> 0x10) &
                                            ~(byte)((uint)iVar23 >> 0x10),
                                            CONCAT11((byte)((uint)local_80 >> 8) &
                                                     ~(byte)((uint)iVar23 >> 8),
                                                     SUB41(local_80,0) & ~(byte)iVar23)));
          auVar17._0_8_ =
               CONCAT17((byte)((uint)fStack_7c >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                        CONCAT16((byte)((uint)fStack_7c >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                 CONCAT15((byte)((uint)fStack_7c >> 8) & ~(byte)((uint)iVar27 >> 8),
                                          CONCAT14(SUB41(fStack_7c,0) & ~(byte)iVar27,fVar16))));
          auVar17[8] = SUB41(fStack_78,0) & ~(byte)iVar28;
          auVar17[9] = (byte)((uint)fStack_78 >> 8) & ~(byte)((uint)iVar28 >> 8);
          auVar17[10] = (byte)((uint)fStack_78 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
          auVar17[0xb] = (byte)((uint)fStack_78 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
          auVar21[0xc] = SUB41(fStack_74,0) & ~(byte)iVar29;
          auVar21._0_12_ = auVar17;
          auVar21[0xd] = (byte)((uint)fStack_74 >> 8) & ~(byte)((uint)iVar29 >> 8);
          auVar21[0xe] = (byte)((uint)fStack_74 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
          auVar21[0xf] = (byte)((uint)fStack_74 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
          auVar34._0_4_ = fVar31 * fVar31 + fVar38 * fVar38;
          auVar34._4_4_ = fVar39 * fVar39 + fVar53;
          auVar34._8_4_ = fVar31 * fVar31 + fVar38 * fVar38;
          auVar34._12_4_ = fVar39 * fVar39 + fVar53;
          auVar19 = NEON_ext(auVar34,auVar34,4,1);
          auVar13._0_4_ = auVar19._0_4_ + auVar19._4_4_;
          auVar13._4_4_ = auVar19._8_4_ + auVar19._12_4_;
          auVar13._8_4_ = auVar19._0_4_ + auVar19._4_4_;
          auVar13._12_4_ = auVar19._8_4_ + auVar19._12_4_;
          auVar19 = NEON_frsqrte(auVar13,4);
          auVar54._0_4_ = auVar13._0_4_ * auVar19._0_4_;
          auVar54._4_4_ = auVar13._4_4_ * auVar19._4_4_;
          auVar54._8_4_ = auVar13._8_4_ * auVar19._8_4_;
          auVar54._12_4_ = auVar13._12_4_ * auVar19._12_4_;
          auVar20 = NEON_frsqrts(auVar19,auVar54,4);
          auVar41._0_4_ = auVar19._0_4_ * auVar20._0_4_;
          auVar41._4_4_ = auVar19._4_4_ * auVar20._4_4_;
          auVar41._8_4_ = auVar19._8_4_ * auVar20._8_4_;
          auVar41._12_4_ = auVar19._12_4_ * auVar20._12_4_;
          auVar55._0_4_ = auVar13._0_4_ * auVar41._0_4_;
          auVar55._4_4_ = auVar13._4_4_ * auVar41._4_4_;
          auVar55._8_4_ = auVar13._8_4_ * auVar41._8_4_;
          auVar55._12_4_ = auVar13._12_4_ * auVar41._12_4_;
          iVar23 = -(uint)(auVar13._0_4_ == 0.0);
          iVar27 = -(uint)(auVar13._4_4_ == 0.0);
          iVar28 = -(uint)(auVar13._8_4_ == 0.0);
          auVar19 = NEON_frsqrts(auVar41,auVar55,4);
          fVar31 = fVar31 * auVar41._0_4_ * auVar19._0_4_;
          fVar38 = fVar38 * auVar41._4_4_ * auVar19._4_4_;
          fVar39 = fVar39 * auVar41._8_4_ * auVar19._8_4_;
          fVar32 = *(float *)(lVar7 + (ulong)*(uint *)(param_1 + 0x118));
          fVar40 = *(float *)(lVar7 + (ulong)*(uint *)(param_1 + 0x10c));
          fVar53 = (float)((ulong)auVar17._0_8_ >> 0x20);
          fVar24 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                                   CONCAT12((byte)((uint)fVar31 >> 0x10) &
                                            ~(byte)((uint)iVar23 >> 0x10),
                                            CONCAT11((byte)((uint)fVar31 >> 8) &
                                                     ~(byte)((uint)iVar23 >> 8),
                                                     SUB41(fVar31,0) & ~(byte)iVar23)));
          auVar25._0_8_ =
               CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                        CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                 CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                          CONCAT14(SUB41(fVar38,0) & ~(byte)iVar27,fVar24))));
          auVar25[8] = SUB41(fVar39,0) & ~(byte)iVar28;
          auVar25[9] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar28 >> 8);
          auVar25[10] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
          auVar25[0xb] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
          fVar16 = (local_90 + fVar16 * fVar32 + fVar16 * fVar40) - auVar36._0_4_;
          fVar38 = (fStack_8c + fVar53 * fVar32 + fVar53 * fVar40) - auVar36._4_4_;
          fVar39 = (fStack_88 + auVar17._8_4_ * fVar32 + auVar17._8_4_ * fVar40) - auVar36._8_4_;
          fVar32 = (fStack_84 + auVar21._12_4_ * fVar32 + auVar21._12_4_ * fVar40) - 0.0;
          auVar36._0_4_ = fVar16 * fVar16 + fVar38 * fVar38;
          auVar36._4_4_ = fVar39 * fVar39 + fVar32 * fVar32;
          auVar36._8_4_ = fVar16 * fVar16 + fVar38 * fVar38;
          auVar36._12_4_ = fVar39 * fVar39 + fVar32 * fVar32;
          auVar36 = NEON_ext(auVar36,auVar36,4,1);
          auVar14._0_4_ = auVar36._0_4_ + auVar36._4_4_;
          auVar14._4_4_ = auVar36._8_4_ + auVar36._12_4_;
          auVar14._8_4_ = auVar36._0_4_ + auVar36._4_4_;
          auVar14._12_4_ = auVar36._8_4_ + auVar36._12_4_;
          auVar36 = NEON_frsqrte(auVar14,4);
          iVar23 = -(uint)(auVar14._0_4_ == 0.0);
          iVar27 = -(uint)(auVar14._4_4_ == 0.0);
          iVar28 = -(uint)(auVar14._8_4_ == 0.0);
          iVar29 = -(uint)(auVar14._12_4_ == 0.0);
          auVar56._0_4_ = auVar14._0_4_ * auVar36._0_4_;
          auVar56._4_4_ = auVar14._4_4_ * auVar36._4_4_;
          auVar56._8_4_ = auVar14._8_4_ * auVar36._8_4_;
          auVar56._12_4_ = auVar14._12_4_ * auVar36._12_4_;
          auVar19 = NEON_frsqrts(auVar36,auVar56,4);
          auVar42._0_4_ = auVar36._0_4_ * auVar19._0_4_;
          auVar42._4_4_ = auVar36._4_4_ * auVar19._4_4_;
          auVar42._8_4_ = auVar36._8_4_ * auVar19._8_4_;
          auVar42._12_4_ = auVar36._12_4_ * auVar19._12_4_;
          auVar57._0_4_ = auVar14._0_4_ * auVar42._0_4_;
          auVar57._4_4_ = auVar14._4_4_ * auVar42._4_4_;
          auVar57._8_4_ = auVar14._8_4_ * auVar42._8_4_;
          auVar57._12_4_ = auVar14._12_4_ * auVar42._12_4_;
          auVar36 = NEON_frsqrts(auVar42,auVar57,4);
          fVar16 = fVar16 * auVar42._0_4_ * auVar36._0_4_;
          fVar38 = fVar38 * auVar42._4_4_ * auVar36._4_4_;
          fVar39 = fVar39 * auVar42._8_4_ * auVar36._8_4_;
          fVar32 = fVar32 * auVar42._12_4_ * auVar36._12_4_;
          fVar40 = auVar25._8_4_;
          auVar43._4_4_ = fVar40;
          auVar43._0_4_ = fVar40;
          auVar43._8_4_ = fVar40;
          auVar43._12_4_ = fVar40;
          auVar44._4_12_ = auVar43._4_12_;
          auVar44._0_4_ = fVar24;
          fVar53 = (float)((ulong)auVar25._0_8_ >> 0x20);
          auVar46._0_8_ = auVar44._0_8_;
          auVar46._8_4_ = fVar53;
          auVar46._12_4_ = fVar40;
          auVar45._8_8_ = auVar46._8_8_;
          auVar45._4_4_ = fVar40;
          auVar45._0_4_ = fVar24;
          auVar47._0_12_ = auVar45._0_12_;
          auVar47._12_4_ = fVar40;
          fVar31 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                                   CONCAT12((byte)((uint)fVar16 >> 0x10) &
                                            ~(byte)((uint)iVar23 >> 0x10),
                                            CONCAT11((byte)((uint)fVar16 >> 8) &
                                                     ~(byte)((uint)iVar23 >> 8),
                                                     SUB41(fVar16,0) & ~(byte)iVar23)));
          auVar18._0_8_ =
               CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                        CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                 CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                          CONCAT14(SUB41(fVar38,0) & ~(byte)iVar27,fVar31))));
          auVar18[8] = SUB41(fVar39,0) & ~(byte)iVar28;
          auVar18[9] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar28 >> 8);
          auVar18[10] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
          auVar18[0xb] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
          auVar22[0xc] = SUB41(fVar32,0) & ~(byte)iVar29;
          auVar22._0_12_ = auVar18;
          auVar22[0xd] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar29 >> 8);
          auVar22[0xe] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
          auVar22[0xf] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
          auVar19 = NEON_ext(auVar47,auVar47,8,1);
          fVar16 = auVar19._0_4_;
          auVar48._4_12_ = auVar47._4_12_;
          auVar48._0_4_ = fVar16;
          auVar50._0_8_ = auVar48._0_8_;
          auVar50._8_4_ = auVar19._8_4_;
          auVar50._12_4_ = fVar40;
          auVar49._8_8_ = auVar50._8_8_;
          auVar49._4_4_ = fVar24;
          auVar49._0_4_ = fVar16;
          auVar51._0_12_ = auVar49._0_12_;
          auVar51._12_4_ = fVar53;
          auVar36 = NEON_ext(auVar51,auVar19,8,1);
          auVar36 = NEON_ext(auVar36,auVar36,0xc,1);
          auVar26._0_4_ =
               fVar24 * 0.7071068 + (float)_DAT_03caa930 * 0.0 +
               (float)_DAT_03cabe90 * auVar36._0_4_ + (float)_DAT_03cabc60 * fVar16;
          auVar26._4_4_ =
               fVar53 * 0.7071068 + (float)((ulong)_DAT_03caa930 >> 0x20) * 0.0 +
               (float)((ulong)_DAT_03cabe90 >> 0x20) * auVar36._4_4_ +
               (float)((ulong)_DAT_03cabc60 >> 0x20) * auVar19._4_4_;
          auVar26._8_4_ =
               fVar40 * 0.7071068 + (float)_UNK_03caa938 * 0.0 +
               (float)_UNK_03cabe98 * auVar36._8_4_ + (float)_UNK_03cabc68 * auVar19._8_4_;
          auVar26._12_4_ =
               (float)((ulong)_UNK_03caa938 >> 0x20) * fVar24 + 0.0 +
               (float)((ulong)_UNK_03cabe98 >> 0x20) * auVar36._12_4_ +
               (float)((ulong)_UNK_03cabc68 >> 0x20) * auVar19._12_4_;
          auVar37._4_4_ = auVar26._8_4_;
          auVar37._0_4_ = auVar26._8_4_;
          auVar37._8_4_ = auVar26._8_4_;
          auVar37._12_4_ = auVar26._8_4_;
          auVar36 = NEON_ext(auVar37,auVar26,0xc,1);
          auVar52._4_4_ = auVar26._4_4_;
          auVar52._0_4_ = auVar26._4_4_;
          auVar52._8_4_ = auVar26._4_4_;
          auVar52._12_4_ = auVar26._4_4_;
          auVar19 = NEON_ext(auVar52,auVar36,0xc,1);
          fVar16 = (float)((ulong)_DAT_03cab640 >> 0x20);
          fVar31 = fVar31 * ((float)_DAT_03caba40 * auVar26._12_4_ +
                             (float)_DAT_03cac250 * auVar26._0_4_ * (float)_DAT_03cab640 +
                             (float)_DAT_03caa650 * auVar19._0_4_ * (float)_DAT_03cab640 +
                            (float)_DAT_03cab5d0 * auVar36._0_4_);
          fVar16 = (float)((ulong)auVar18._0_8_ >> 0x20) *
                   ((float)((ulong)_DAT_03caba40 >> 0x20) * auVar26._12_4_ +
                    (float)((ulong)_DAT_03cac250 >> 0x20) * auVar26._4_4_ * fVar16 +
                    (float)((ulong)_DAT_03caa650 >> 0x20) * auVar19._4_4_ * fVar16 +
                   (float)((ulong)_DAT_03cab5d0 >> 0x20) * auVar36._4_4_);
          fVar53 = auVar18._8_4_ *
                   ((float)_UNK_03caba48 * auVar26._12_4_ +
                    (float)_UNK_03cac258 * auVar26._8_4_ * (float)_UNK_03cab648 +
                    (float)_UNK_03caa658 * auVar19._8_4_ * (float)_UNK_03cab648 +
                   (float)_UNK_03cab5d8 * auVar36._8_4_);
          fVar38 = auVar22._12_4_ * 0.0;
          auVar15._0_4_ = fVar31 + fVar16;
          auVar15._4_4_ = fVar53 + fVar38;
          auVar15._8_4_ = fVar31 + fVar16;
          auVar15._12_4_ = fVar53 + fVar38;
          auVar36 = NEON_ext(auVar15,auVar15,4,1);
          *(bool *)(lVar7 + (ulong)*(uint *)(param_1 + 0x11c)) = auVar36._0_4_ + auVar36._4_4_ < 0.0
          ;
          if (local_60[0] != (long *)0x0) {
            lVar7 = local_60[0][6];
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar9 = *psVar1;
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar8) {
                *psVar1 = sVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar9 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*local_60[0] + 0x50))();
            }
            else if (sVar9 == 0) goto LAB_0200be54;
          }
        }
        lVar7 = plVar11[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar9 == 0) {
LAB_0200be54:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  (**(code **)(*plVar10 + 0x60))(plVar10);
LAB_0200ba0c:
  if (local_50[0] != 0) {
    psVar1 = (short *)(local_50[0] + 0x18);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      FUN_0116e168();
    }
    else if (sVar9 == 0) {
LAB_0200ba34:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


