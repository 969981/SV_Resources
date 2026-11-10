/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03419868; name: FUN_03419868
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_03419868(long param_1,float *param_2,long *param_3,float *param_4,long *param_5,
            undefined4 *param_6)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  undefined8 uVar13;
  float *pfVar14;
  undefined1 (*pauVar15) [16];
  undefined4 uVar16;
  undefined1 (*pauVar17) [16];
  long lVar18;
  int iVar19;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 auVar20 [16];
  int iVar24;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  
  uVar3 = _UNK_03cab278;
  uVar13 = _DAT_03cab270;
  fVar2 = param_4[0xa0];
  uVar6 = (ulong)(uint)fVar2;
  if ((int)param_4[0xa1] < 1) {
    uVar10 = (ulong)((int)fVar2 - 1);
    if (0 < (int)fVar2) {
      pfVar12 = param_4 + 0x80;
      pfVar14 = param_4;
      do {
        if (*(long *)pfVar12 == *param_3) {
          pfVar1 = param_4 + uVar10 * 8;
          uVar13 = *(undefined8 *)(pfVar1 + 6);
          *(undefined8 *)(pfVar14 + 2) = *(undefined8 *)(pfVar1 + 2);
          *(undefined8 *)(pfVar14 + 6) = uVar13;
          uVar13 = *(undefined8 *)pfVar1;
          *(undefined8 *)(pfVar14 + 4) = *(undefined8 *)(pfVar1 + 4);
          *(undefined8 *)pfVar14 = uVar13;
          if ((int)param_4[0xa1] < 1) {
            uVar13 = *(undefined8 *)(param_4 + 0x80 + uVar10 * 2);
          }
          else {
            uVar13 = *(undefined8 *)(param_4 + uVar10 * 2 + 0x80);
          }
          *(undefined8 *)pfVar12 = uVar13;
          param_4[0xa0] = (float)((int)param_4[0xa0] + -1);
          return 0;
        }
        pfVar12 = pfVar12 + 2;
        pfVar14 = pfVar14 + 8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else if (0 < (int)fVar2) {
    lVar18 = 0;
    pfVar12 = param_4 + 0x80;
    pfVar14 = param_4;
    do {
      DAT_048af310 = 0x7f7fffff;
      iVar19 = -(uint)(pfVar14[4] < *param_2);
      iVar21 = -(uint)(pfVar14[5] < param_2[1]);
      iVar22 = -(uint)(pfVar14[6] < param_2[2]);
      iVar23 = -(uint)(pfVar14[7] < param_2[3]);
      iVar24 = -(uint)((float)*(undefined8 *)(param_2 + 4) < *pfVar14);
      iVar26 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) < pfVar14[1]);
      iVar27 = -(uint)((float)*(undefined8 *)(param_2 + 6) < pfVar14[2]);
      iVar28 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20) < pfVar14[3]);
      auVar20[0] = (byte)iVar19 & (byte)uVar13;
      bVar31 = (byte)((ulong)uVar13 >> 8);
      auVar20[1] = (byte)((uint)iVar19 >> 8) & bVar31;
      bVar32 = (byte)((ulong)uVar13 >> 0x10);
      auVar20[2] = (byte)((uint)iVar19 >> 0x10) & bVar32;
      bVar33 = (byte)((ulong)uVar13 >> 0x18);
      auVar20[3] = (byte)((uint)iVar19 >> 0x18) & bVar33;
      bVar34 = (byte)((ulong)uVar13 >> 0x20);
      auVar20[4] = (byte)iVar21 & bVar34;
      bVar35 = (byte)((ulong)uVar13 >> 0x28);
      auVar20[5] = (byte)((uint)iVar21 >> 8) & bVar35;
      bVar36 = (byte)((ulong)uVar13 >> 0x30);
      auVar20[6] = (byte)((uint)iVar21 >> 0x10) & bVar36;
      bVar37 = (byte)((ulong)uVar13 >> 0x38);
      auVar20[7] = (byte)((uint)iVar21 >> 0x18) & bVar37;
      auVar20[8] = (byte)iVar22 & (byte)uVar3;
      bVar38 = (byte)((ulong)uVar3 >> 8);
      auVar20[9] = (byte)((uint)iVar22 >> 8) & bVar38;
      bVar39 = (byte)((ulong)uVar3 >> 0x10);
      auVar20[10] = (byte)((uint)iVar22 >> 0x10) & bVar39;
      bVar40 = (byte)((ulong)uVar3 >> 0x18);
      auVar20[0xb] = (byte)((uint)iVar22 >> 0x18) & bVar40;
      bVar41 = (byte)((ulong)uVar3 >> 0x20);
      auVar20[0xc] = (byte)iVar23 & bVar41;
      bVar42 = (byte)((ulong)uVar3 >> 0x28);
      auVar20[0xd] = (byte)((uint)iVar23 >> 8) & bVar42;
      bVar43 = (byte)((ulong)uVar3 >> 0x30);
      auVar20[0xe] = (byte)((uint)iVar23 >> 0x10) & bVar43;
      bVar44 = (byte)((ulong)uVar3 >> 0x38);
      auVar20[0xf] = (byte)((uint)iVar23 >> 0x18) & bVar44;
      auVar29 = NEON_ext(auVar20,auVar20,8,1);
      auVar25[0] = (byte)iVar24 & (byte)uVar13;
      auVar25[1] = (byte)((uint)iVar24 >> 8) & bVar31;
      auVar25[2] = (byte)((uint)iVar24 >> 0x10) & bVar32;
      auVar25[3] = (byte)((uint)iVar24 >> 0x18) & bVar33;
      auVar25[4] = (byte)iVar26 & bVar34;
      auVar25[5] = (byte)((uint)iVar26 >> 8) & bVar35;
      auVar25[6] = (byte)((uint)iVar26 >> 0x10) & bVar36;
      auVar25[7] = (byte)((uint)iVar26 >> 0x18) & bVar37;
      auVar25[8] = (byte)iVar27 & (byte)uVar3;
      auVar25[9] = (byte)((uint)iVar27 >> 8) & bVar38;
      auVar25[10] = (byte)((uint)iVar27 >> 0x10) & bVar39;
      auVar25[0xb] = (byte)((uint)iVar27 >> 0x18) & bVar40;
      auVar25[0xc] = (byte)iVar28 & bVar41;
      auVar25[0xd] = (byte)((uint)iVar28 >> 8) & bVar42;
      auVar25[0xe] = (byte)((uint)iVar28 >> 0x10) & bVar43;
      auVar25[0xf] = (byte)((uint)iVar28 >> 0x18) & bVar44;
      auVar30 = NEON_ext(auVar25,auVar25,8,1);
      if (CONCAT13(auVar29[3] | auVar20[3] | auVar29[7] | auVar20[7] | auVar30[7] | auVar25[7] |
                   auVar30[3] | auVar25[3],
                   CONCAT12(auVar29[2] | auVar20[2] | auVar29[6] | auVar20[6] |
                            auVar30[6] | auVar25[6] | auVar30[2] | auVar25[2],
                            CONCAT11(auVar29[1] | auVar20[1] | auVar29[5] | auVar20[5] |
                                     auVar30[5] | auVar25[5] | auVar30[1] | auVar25[1],
                                     auVar29[0] | auVar20[0] | auVar29[4] | auVar20[4] |
                                     auVar30[4] | auVar25[4] | auVar30[0] | auVar25[0]))) == 0) {
        uVar6 = FUN_03419868(param_1,param_2,param_3,*(undefined8 *)pfVar12,param_5,param_6);
        if ((uVar6 & 1) == 0) {
          pauVar17 = *(undefined1 (**) [16])pfVar12;
          if (3 < (int)*(uint *)pauVar17[0x28]) {
            auVar25 = *pauVar17;
            auVar20 = pauVar17[1];
            uVar6 = (ulong)*(uint *)pauVar17[0x28] - 1;
            lVar18 = -(uVar6 & 0xfffffffffffffffe);
            pauVar17 = pauVar17 + 3;
            do {
              pauVar15 = pauVar17;
              auVar25 = NEON_fmin(auVar25,pauVar15[-1],4);
              auVar29._12_4_ = (int)((ulong)*(undefined8 *)(pauVar15[1] + 8) >> 0x20);
              auVar29._0_12_ = *(undefined1 (*) [12])pauVar15[1];
              auVar25 = NEON_fmin(auVar25,auVar29,4);
              lVar18 = lVar18 + 2;
              auVar20 = NEON_fmax(auVar20,*pauVar15,4);
              auVar20 = NEON_fmax(auVar20,pauVar15[2],4);
              pauVar17 = pauVar15 + 4;
            } while (lVar18 != 0);
            if ((uVar6 & 1) != 0) {
              auVar20 = NEON_fmax(auVar20,pauVar15[4],4);
              auVar25 = NEON_fmin(auVar25,pauVar15[3],4);
            }
            *(long *)(pfVar14 + 2) = auVar25._8_8_;
            *(long *)pfVar14 = auVar25._0_8_;
            *(long *)(pfVar14 + 6) = auVar20._8_8_;
            *(long *)(pfVar14 + 4) = auVar20._0_8_;
            return 0;
          }
          lVar18 = *(long *)(param_1 + 0x20);
          goto joined_r0x03419a64;
        }
        uVar6 = (ulong)(uint)param_4[0xa0];
      }
      lVar18 = lVar18 + 1;
      pfVar12 = pfVar12 + 2;
      pfVar14 = pfVar14 + 8;
    } while (lVar18 < (int)uVar6);
  }
  return 1;
joined_r0x03419a64:
  if (lVar18 == 0) goto LAB_03419a78;
  if (*(long *)(lVar18 + 0x410) != 0) goto LAB_03419b24;
  lVar18 = *(long *)(lVar18 + 0x400);
  goto joined_r0x03419a64;
LAB_03419a78:
  lVar18 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(10,0x418,0x10);
  if (lVar18 != 0) {
    lVar7 = 0;
    lVar11 = 0;
    *(undefined8 *)(lVar18 + 0x400) = 0;
    *(undefined4 *)(lVar18 + 0x408) = 0;
    *(undefined8 *)(lVar18 + 0x410) = 0;
    while( true ) {
      if (lVar11 == 0) {
        *(long *)(lVar18 + 0x410) = lVar18 + lVar7;
        *(undefined8 *)(lVar18 + lVar7) = 0;
      }
      else {
        *(long *)(lVar18 + lVar7) = lVar11;
        *(long *)(lVar18 + 0x410) = lVar18 + lVar7;
      }
      if (lVar7 == 0x3f0) break;
      lVar11 = *(long *)(lVar18 + 0x410);
      lVar7 = lVar7 + 0x10;
    }
    *(undefined4 *)(lVar18 + 0x408) = 0x40;
    if (*(long *)(param_1 + 0x20) == 0) {
      *(long *)(param_1 + 0x20) = lVar18;
      *(undefined8 *)(lVar18 + 0x400) = 0;
    }
    else {
      *(long *)(lVar18 + 0x400) = *(long *)(param_1 + 0x20);
      *(long *)(param_1 + 0x20) = lVar18;
    }
LAB_03419b24:
    plVar8 = *(long **)(lVar18 + 0x410);
    if (plVar8 != (long *)0x0) {
      if (*plVar8 == 0) {
        *(undefined8 *)(lVar18 + 0x410) = 0;
      }
      else {
        *(long *)(lVar18 + 0x410) = *plVar8;
      }
      *(int *)(lVar18 + 0x408) = *(int *)(lVar18 + 0x408) + -1;
      plVar8[1] = (long)pauVar17;
      *plVar8 = *param_5;
      *param_5 = (long)plVar8;
      bVar5 = true;
      uVar16 = 1;
      goto LAB_03419b6c;
    }
  }
  bVar5 = false;
  uVar16 = 0x34;
LAB_03419b6c:
  fVar2 = param_4[0xa0];
  pfVar1 = param_4 + ((long)(int)fVar2 + -1) * 8;
  uVar13 = *(undefined8 *)(pfVar1 + 2);
  *(undefined8 *)(pfVar14 + 6) = *(undefined8 *)(pfVar1 + 6);
  *(undefined8 *)(pfVar14 + 2) = uVar13;
  uVar13 = *(undefined8 *)pfVar1;
  *(undefined8 *)(pfVar14 + 4) = *(undefined8 *)(pfVar1 + 4);
  *(undefined8 *)pfVar14 = uVar13;
  *(undefined8 *)pfVar12 = *(undefined8 *)(param_4 + ((long)(int)fVar2 + -1) * 2 + 0x80);
  param_4[0xa0] = (float)((int)param_4[0xa0] + -1);
  if (!bVar5) {
    pauVar15 = (undefined1 (*) [16])(param_1 + 0x18);
    pauVar4 = *(undefined1 (**) [16])*pauVar15;
    if (pauVar4 == (undefined1 (*) [16])0x0) {
LAB_03419c1c:
      if (_DAT_00000f70 == (undefined1 (*) [16])0x0) {
        _DAT_00000f70 = pauVar17;
        *(undefined8 *)*pauVar17 = 0;
      }
      else {
        *(undefined1 (**) [16])*pauVar17 = _DAT_00000f70;
        _DAT_00000f70 = pauVar17;
      }
      _DAT_00000f68 = _DAT_00000f68 + 1;
    }
    else {
      if ((pauVar17 < pauVar4) || (pauVar4 + 0xf6 <= pauVar17)) {
        do {
          pauVar9 = pauVar4;
          pauVar4 = *(undefined1 (**) [16])pauVar9[0xf6];
          if (pauVar4 == (undefined1 (*) [16])0x0) goto LAB_03419c1c;
        } while ((pauVar17 < pauVar4) || (pauVar4 + 0xf6 <= pauVar17));
      }
      else {
        pauVar9 = (undefined1 (*) [16])0x0;
      }
      if (*(long *)pauVar4[0xf7] == 0) {
        *(undefined1 (**) [16])pauVar4[0xf7] = pauVar17;
        *(undefined8 *)*pauVar17 = 0;
      }
      else {
        *(long *)*pauVar17 = *(long *)pauVar4[0xf7];
        *(undefined1 (**) [16])pauVar4[0xf7] = pauVar17;
      }
      iVar19 = *(int *)(pauVar4[0xf6] + 8) + 1;
      *(int *)(pauVar4[0xf6] + 8) = iVar19;
      if (iVar19 == 6) {
        if (*(undefined1 (**) [16])*pauVar15 != pauVar4) {
          pauVar15 = pauVar9 + 0xf6;
        }
        *(undefined8 *)*pauVar15 = *(undefined8 *)pauVar4[0xf6];
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
      }
    }
    *param_6 = uVar16;
  }
  return 0;
}


