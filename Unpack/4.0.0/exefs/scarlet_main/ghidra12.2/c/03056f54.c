/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03056f54; name: FUN_03056f54
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03056f54(undefined1 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  float fVar22;
  float fVar25;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  undefined1 auVar37 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar47;
  undefined8 uVar46;
  float fVar48;
  float fVar50;
  undefined8 uVar49;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 local_70 [16];
  
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  plVar21 = (long *)(param_1 + 0xf8);
  *plVar21 = 0;
  if ((char)param_2[0xc] != '\0') {
    *(undefined4 *)(param_1 + 0xf0) = 5;
    return;
  }
  lVar10 = param_2[10];
  *(long *)(param_1 + 0x18) = param_2[0xb];
  *(long *)(param_1 + 0x10) = lVar10;
  lVar10 = *param_2;
  if ((lVar10 == 0) || (*(long *)(lVar10 + 8) == 0)) {
    *plVar21 = lVar10;
  }
  else {
    plVar9 = (long *)(lVar10 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar9 = (long *)*plVar21;
    *plVar21 = lVar10;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar2 = plVar9 + 2;
      do {
        lVar10 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
  }
  lVar10 = param_2[5];
  if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
    plVar9 = (long *)(lVar10 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = *(long **)(param_1 + 0x100);
  *(long *)(param_1 + 0x100) = lVar10;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  lVar14 = (long)*(int *)((long)param_2 + 0x44);
  *(int *)(param_1 + 0x80) = *(int *)((long)param_2 + 0x44);
  *(uint *)(param_1 + 0x84) = (uint)*(byte *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *param_1 = *(undefined1 *)((long)param_2 + 0x61);
  lVar15 = param_2[2];
  lVar10 = param_2[6];
  fVar22 = (float)lVar15 + (float)lVar10;
  fVar25 = (float)((ulong)lVar15 >> 0x20) + (float)((ulong)lVar10 >> 0x20);
  fVar26 = (float)param_2[3] + (float)param_2[7];
  fVar32 = (float)*(undefined8 *)(param_1 + 0x18);
  fVar29 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar30 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar33 = fVar22 * fVar29;
  fVar35 = fVar25 * fVar30;
  fVar36 = fVar26 * fVar32;
  fVar34 = fVar33 + fVar35 + fVar36;
  fVar36 = fVar33 + fVar35 + fVar36;
  uVar23 = CONCAT44(fVar25 - fVar30 * fVar36,fVar22 - fVar29 * fVar34);
  uVar27 = CONCAT44(((float)((ulong)param_2[3] >> 0x20) + (float)((ulong)param_2[7] >> 0x20)) -
                    (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar36,
                    fVar26 - fVar32 * fVar34);
  *(undefined8 *)(param_1 + 0x38) = uVar27;
  *(undefined8 *)(param_1 + 0x30) = uVar23;
  lVar10 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18);
  uVar3 = *(uint *)(lVar10 + lVar14 * 0x90 + 0x70);
  uVar11 = (ulong)uVar3;
  if ((uVar3 != 0xffffffff) && (*(short *)(lVar10 + lVar14 * 0x90 + 0x78) != -1)) {
    if (*(long *)(param_1 + 0x100) == 0) {
      lVar15 = _DAT_00000038;
    }
    else {
      lVar15 = *(long *)(*(long *)(param_1 + 0x100) + 0x38);
      lVar18 = *(long *)(*(long *)(lVar15 + ((ulong)(uVar3 >> 0xe) & 0x3ff00)) + 0x20);
      uVar11 = uVar11 & 0x3fffff;
      uVar16 = *(uint *)(*(long *)(lVar18 + 0x168) + uVar11 * 4);
      if ((int)uVar16 < 0) {
        if ((*(int *)(lVar18 + 0x108) != 0) &&
           ((*(byte *)(*(long *)(lVar18 + 0x100) + uVar11) & 1) != 0)) goto LAB_030571e8;
        if (*(short *)(lVar10 + lVar14 * 0x90 + 0x74) != -1) {
          uVar3 = 0xffffffff;
        }
        uVar11 = (ulong)uVar3;
      }
      else {
        iVar17 = *(int *)(lVar18 + 0x170);
        lVar19 = (long)iVar17;
        if (iVar17 <= (int)(uVar16 + 1)) {
          iVar17 = uVar16 + 1;
        }
        lVar20 = (ulong)uVar16 + 1;
        do {
          if (lVar19 <= lVar20) goto LAB_03057184;
          lVar1 = lVar20 * 4;
          lVar20 = lVar20 + 1;
        } while (*(int *)(*(long *)(lVar18 + 0x168) + lVar1) == (int)uVar11);
        iVar17 = (int)lVar20 + -1;
LAB_03057184:
        iVar13 = (int)*(short *)(lVar10 + lVar14 * 0x90 + 0x74);
        if ((iVar13 == -1) || (uVar16 = uVar16 + iVar13, iVar17 <= (int)uVar16)) {
LAB_030571e8:
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = (ulong)(uVar16 | uVar3 & 0xffc00000);
        }
      }
    }
    FUN_0309bf90(*(undefined8 *)(*(long *)(lVar15 + (uVar11 >> 0x16) * 0x100) + 0x20),
                 (uint)uVar11 & 0x3fffff,local_70);
    fVar22 = local_70._0_4_;
    fVar25 = local_70._4_4_;
    fVar26 = local_70._8_4_;
    fVar29 = _DAT_03caa5b0 * fVar26 + (float)DAT_03cab620 * fVar22 + (float)_DAT_03cabe60 * fVar25;
    fVar30 = _UNK_03caa5b4 * fVar26 +
             (float)((ulong)DAT_03cab620 >> 0x20) * fVar22 +
             (float)((ulong)_DAT_03cabe60 >> 0x20) * fVar25;
    fVar32 = _UNK_03caa5b8 * fVar26 + (float)DAT_03cab628 * fVar22 + (float)_UNK_03cabe68 * fVar25;
    fVar33 = fVar29 * (float)_DAT_03cabe50;
    fVar34 = fVar30 * (float)((ulong)_DAT_03cabe50 >> 0x20);
    fVar35 = fVar32 * (float)_UNK_03cabe58;
    fVar22 = (_UNK_03caa5bc * fVar26 +
             (float)((ulong)DAT_03cab628 >> 0x20) * fVar22 +
             (float)((ulong)_UNK_03cabe68 >> 0x20) * fVar25) * (float)((ulong)_UNK_03cabe58 >> 0x20)
    ;
    auVar7._4_4_ = fVar34;
    auVar7._0_4_ = fVar33;
    auVar7._8_4_ = fVar35;
    auVar7._12_4_ = fVar22;
    auVar8._4_4_ = fVar34;
    auVar8._0_4_ = fVar33;
    auVar8._8_4_ = fVar35;
    auVar8._12_4_ = fVar22;
    auVar37 = NEON_ext(auVar7,auVar8,8,1);
    fVar22 = local_70._12_4_ - (fVar33 + fVar34 + auVar37._0_4_);
    fVar34 = (float)*(undefined8 *)(param_1 + 0x18);
    fVar26 = (float)*(undefined8 *)(param_1 + 0x10);
    fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    fVar35 = fVar26 * fVar29;
    fVar36 = fVar33 * fVar30;
    fVar38 = fVar34 * fVar32;
    fVar45 = (float)*(undefined8 *)(param_1 + 0x30);
    fVar29 = fVar45 * fVar29;
    fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
    fVar30 = fVar31 * fVar30;
    fVar47 = (float)*(undefined8 *)(param_1 + 0x38);
    fVar32 = fVar47 * fVar32;
    fVar50 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
    fVar25 = fVar50 * fVar22;
    auVar37._4_4_ = fVar30;
    auVar37._0_4_ = fVar29;
    auVar37._8_4_ = fVar32;
    auVar37._12_4_ = fVar25;
    auVar6._4_4_ = fVar30;
    auVar6._0_4_ = fVar29;
    auVar6._8_4_ = fVar32;
    auVar6._12_4_ = fVar25;
    auVar37 = NEON_ext(auVar37,auVar6,8,1);
    fVar22 = auVar37._0_4_ + fVar22;
    fVar25 = -(fVar29 + fVar30 + fVar22) / (fVar35 + fVar36 + fVar38);
    fVar22 = -(fVar29 + fVar30 + fVar22) / (fVar35 + fVar36 + fVar38);
    uVar23 = CONCAT44(fVar31 + fVar33 * fVar22,fVar45 + fVar26 * fVar25);
    uVar27 = CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar22,
                      fVar47 + fVar34 * fVar25);
    *(undefined8 *)(param_1 + 0x38) = uVar27;
    *(undefined8 *)(param_1 + 0x30) = uVar23;
  }
  lVar10 = param_2[2];
  *(ulong *)(param_1 + 0x28) =
       CONCAT44((float)((ulong)uVar27 >> 0x20) - (float)((ulong)param_2[3] >> 0x20),
                (float)uVar27 - (float)param_2[3]);
  *(ulong *)(param_1 + 0x20) =
       CONCAT44((float)((ulong)uVar23 >> 0x20) - (float)((ulong)lVar10 >> 0x20),
                (float)uVar23 - (float)lVar10);
  uVar27 = _UNK_03cabe68;
  uVar23 = _DAT_03cabe60;
  uVar49 = _UNK_03cabe58;
  uVar46 = _DAT_03cabe50;
  uVar28 = DAT_03cab628;
  uVar24 = DAT_03cab620;
  fVar29 = _UNK_03caa5bc;
  fVar26 = _UNK_03caa5b8;
  fVar25 = _UNK_03caa5b4;
  fVar22 = _DAT_03caa5b0;
  uVar3 = *(uint *)(param_2 + 8);
  *(uint *)(param_1 + 0xa8) = uVar3;
  *(undefined8 *)(param_1 + 0xb8) = uVar28;
  *(undefined8 *)(param_1 + 0xb0) = uVar24;
  *(undefined8 *)(param_1 + 200) = uVar27;
  *(undefined8 *)(param_1 + 0xc0) = uVar23;
  *(float *)(param_1 + 0xd8) = fVar26;
  *(float *)(param_1 + 0xdc) = fVar29;
  *(float *)(param_1 + 0xd0) = fVar22;
  *(float *)(param_1 + 0xd4) = fVar25;
  *(undefined8 *)(param_1 + 0xe8) = uVar49;
  *(undefined8 *)(param_1 + 0xe0) = uVar46;
  uVar11 = (ulong)*(uint *)(param_2 + 8);
  if ((int)*(uint *)(param_2 + 8) < 0) goto LAB_03057444;
  lVar10 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18);
  uVar3 = *(uint *)(lVar10 + uVar11 * 0x90 + 0x70);
  uVar12 = (ulong)uVar3;
  if (*(long *)(param_1 + 0x100) == 0) {
    lVar14 = _DAT_00000038;
  }
  else {
    lVar14 = *(long *)(*(long *)(param_1 + 0x100) + 0x38);
    lVar15 = *(long *)(*(long *)(lVar14 + ((ulong)(uVar3 >> 0xe) & 0x3ff00)) + 0x20);
    uVar12 = uVar12 & 0x3fffff;
    uVar16 = *(uint *)(*(long *)(lVar15 + 0x168) + uVar12 * 4);
    if ((int)uVar16 < 0) {
      if ((*(int *)(lVar15 + 0x108) != 0) &&
         ((*(byte *)(*(long *)(lVar15 + 0x100) + uVar12) & 1) != 0)) goto LAB_03057394;
      if (*(short *)(lVar10 + uVar11 * 0x90 + 0x74) != -1) {
        uVar3 = 0xffffffff;
      }
      uVar12 = (ulong)uVar3;
    }
    else {
      iVar17 = *(int *)(lVar15 + 0x170);
      lVar18 = (long)iVar17;
      if (iVar17 <= (int)(uVar16 + 1)) {
        iVar17 = uVar16 + 1;
      }
      lVar19 = (ulong)uVar16 + 1;
      do {
        if (lVar18 <= lVar19) goto LAB_03057330;
        lVar20 = lVar19 * 4;
        lVar19 = lVar19 + 1;
      } while (*(int *)(*(long *)(lVar15 + 0x168) + lVar20) == (int)uVar12);
      iVar17 = (int)lVar19 + -1;
LAB_03057330:
      iVar13 = (int)*(short *)(lVar10 + uVar11 * 0x90 + 0x74);
      if ((iVar13 == -1) || (uVar16 = uVar16 + iVar13, iVar17 <= (int)uVar16)) {
LAB_03057394:
        uVar12 = 0xffffffff;
      }
      else {
        uVar12 = (ulong)(uVar16 | uVar3 & 0xffc00000);
      }
    }
  }
  uVar3 = (uint)uVar12 & 0x3fffff;
  lVar10 = *(long *)(*(long *)(lVar14 + (uVar12 >> 0x16) * 0x100) + 0x20);
  iVar17 = *(int *)(lVar10 + 0x50);
  uVar16 = uVar3 - *(int *)(lVar10 + 0x20);
  if ((int)uVar3 < *(int *)(lVar10 + 0x20)) {
    if (*(int *)(lVar10 + 0x98) == 0) {
      uVar16 = uVar3;
    }
    else {
      uVar16 = *(uint *)(*(long *)(lVar10 + 0x90) + (ulong)uVar3 * 4);
      if (uVar16 == 0xffffffff) {
        lVar10 = *(long *)(lVar10 + 0x48);
        uVar16 = uVar3;
        goto LAB_03057400;
      }
    }
    lVar10 = *(long *)(lVar10 + 0x120);
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x140);
  }
LAB_03057400:
  lVar10 = lVar10 + (long)(int)(iVar17 * uVar16) * 4;
  *(long *)(param_1 + 0x98) = lVar10;
  *(long *)(param_1 + 0xa0) = lVar10 + (long)iVar17 * 4;
  FUN_030574fc(param_1,(int)param_2[8],*(int *)((long)param_2 + 0x44) + 1,param_2 + 2,param_2 + 6,
               PTR_DAT_047d19b0 + 0x200,param_1 + 0x88);
  uVar3 = *(uint *)(param_1 + 0xa8);
LAB_03057444:
  *(undefined8 *)(param_1 + 0x48) = uVar28;
  *(undefined8 *)(param_1 + 0x40) = uVar24;
  *(undefined8 *)(param_1 + 0x58) = uVar27;
  *(undefined8 *)(param_1 + 0x50) = uVar23;
  *(float *)(param_1 + 0x68) = fVar26;
  *(float *)(param_1 + 0x6c) = fVar29;
  *(float *)(param_1 + 0x60) = fVar22;
  *(float *)(param_1 + 100) = fVar25;
  *(undefined8 *)(param_1 + 0x78) = uVar49;
  *(undefined8 *)(param_1 + 0x70) = uVar46;
  if ((uVar3 != 0xffffffff) && ((int)uVar3 < *(int *)(param_1 + 0x80))) {
    lVar14 = (long)*(int *)(param_1 + 0x80) - (long)(int)uVar3;
    lVar10 = ((-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3) + (long)(int)uVar3)
             * 0x10;
    do {
      lVar15 = *(long *)(*plVar21 + 0x18) + lVar10;
      lVar14 = lVar14 + -1;
      fVar30 = *(float *)(lVar15 + 0x50);
      fVar32 = *(float *)(lVar15 + 0x54);
      fVar33 = *(float *)(lVar15 + 0x58);
      fVar41 = (float)uVar24;
      fVar42 = (float)((ulong)uVar24 >> 0x20);
      fVar43 = (float)uVar28;
      fVar44 = (float)((ulong)uVar28 >> 0x20);
      lVar10 = lVar10 + 0x90;
      fVar55 = (float)uVar23;
      fVar56 = (float)((ulong)uVar23 >> 0x20);
      fVar57 = (float)uVar27;
      fVar58 = (float)((ulong)uVar27 >> 0x20);
      fVar50 = (float)*(undefined8 *)(lVar15 + 0x48);
      fVar38 = (float)*(undefined8 *)(lVar15 + 0x40);
      fVar31 = (float)((ulong)*(undefined8 *)(lVar15 + 0x40) >> 0x20);
      fVar34 = (float)*(undefined8 *)(lVar15 + 0x30);
      fVar35 = (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20);
      fVar36 = (float)*(undefined8 *)(lVar15 + 0x38);
      fVar39 = (float)*(undefined8 *)(lVar15 + 0x60);
      fVar45 = fVar22 * fVar50;
      fVar47 = fVar25 * fVar50;
      fVar48 = fVar26 * fVar50;
      fVar50 = fVar29 * fVar50;
      fVar54 = (float)*(undefined8 *)(lVar15 + 0x68);
      fVar51 = fVar22 * fVar54;
      fVar52 = fVar25 * fVar54;
      fVar53 = fVar26 * fVar54;
      fVar54 = fVar29 * fVar54;
      fVar40 = (float)((ulong)*(undefined8 *)(lVar15 + 0x60) >> 0x20);
      uVar24 = CONCAT44(fVar42 * fVar34 + fVar56 * fVar35 + fVar25 * fVar36,
                        fVar41 * fVar34 + fVar55 * fVar35 + fVar22 * fVar36);
      uVar28 = CONCAT44(fVar44 * fVar34 + fVar58 * fVar35 + fVar29 * fVar36,
                        fVar43 * fVar34 + fVar57 * fVar35 + fVar26 * fVar36);
      fVar22 = fVar22 * fVar33 + fVar41 * fVar30 + fVar55 * fVar32;
      fVar25 = fVar25 * fVar33 + fVar42 * fVar30 + fVar56 * fVar32;
      fVar26 = fVar26 * fVar33 + fVar43 * fVar30 + fVar57 * fVar32;
      fVar29 = fVar29 * fVar33 + fVar44 * fVar30 + fVar58 * fVar32;
      fVar45 = fVar45 + fVar41 * fVar38 + fVar55 * fVar31;
      fVar47 = fVar47 + fVar42 * fVar38 + fVar56 * fVar31;
      fVar48 = fVar48 + fVar43 * fVar38 + fVar57 * fVar31;
      fVar50 = fVar50 + fVar44 * fVar38 + fVar58 * fVar31;
      uVar27 = CONCAT44(fVar50,fVar48);
      uVar23 = CONCAT44(fVar47,fVar45);
      uVar46 = CONCAT44(fVar52 + fVar56 * fVar40 + (float)((ulong)uVar46 >> 0x20) + fVar42 * fVar39,
                        fVar51 + fVar55 * fVar40 + (float)uVar46 + fVar41 * fVar39);
      uVar49 = CONCAT44(fVar54 + fVar58 * fVar40 + (float)((ulong)uVar49 >> 0x20) + fVar44 * fVar39,
                        fVar53 + fVar57 * fVar40 + (float)uVar49 + fVar43 * fVar39);
      *(undefined8 *)(param_1 + 0x48) = uVar28;
      *(undefined8 *)(param_1 + 0x40) = uVar24;
      *(ulong *)(param_1 + 0x58) = CONCAT44(fVar50,fVar48);
      *(ulong *)(param_1 + 0x50) = CONCAT44(fVar47,fVar45);
      *(float *)(param_1 + 0x68) = fVar26;
      *(float *)(param_1 + 0x6c) = fVar29;
      *(float *)(param_1 + 0x60) = fVar22;
      *(float *)(param_1 + 100) = fVar25;
      *(undefined8 *)(param_1 + 0x78) = uVar49;
      *(undefined8 *)(param_1 + 0x70) = uVar46;
    } while (lVar14 != 0);
  }
  return;
}


