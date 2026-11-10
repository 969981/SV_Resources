/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ed44bc; name: FUN_02ed44bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02ed44bc(long *param_1,uint param_2,char param_3,uint param_4,int param_5)

{
  undefined1 (**ppauVar1) [16];
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  undefined1 auVar8 [16];
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
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  byte bVar26;
  ulong uVar27;
  bool bVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  undefined8 *puVar33;
  long lVar34;
  undefined8 *puVar35;
  long *plVar36;
  long *plVar37;
  ulong uVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  uint uVar41;
  ulong uVar42;
  int *piVar43;
  uint uVar44;
  undefined4 *puVar45;
  uint uVar46;
  ulong uVar47;
  undefined1 (*pauVar48) [16];
  ulong uVar49;
  undefined1 (*pauVar50) [16];
  float *pfVar51;
  uint uVar52;
  float *pfVar53;
  long *plVar54;
  uint *puVar55;
  long *plVar56;
  int iVar57;
  uint *puVar58;
  ulong uVar59;
  uint *puVar60;
  uint **ppuVar61;
  undefined4 *puVar62;
  long *plVar63;
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  undefined4 uVar72;
  int iVar77;
  int iVar78;
  undefined1 auVar73 [12];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  float fVar91;
  float fVar92;
  undefined1 auVar88 [16];
  float fVar87;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  ulong local_358;
  uint local_304;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float local_200;
  float fStack_1fc;
  undefined1 (*local_1e0 [4]) [16];
  undefined1 (*local_1c0) [16];
  undefined8 local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  undefined8 local_198;
  uint *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 auStack_178 [12];
  undefined8 uStack_118;
  long *local_78;
  undefined8 local_70;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(uint *)((long)param_1 + 0x14) < 3) {
    return 0;
  }
  lVar30 = 0;
  if (*param_1 != 0) {
    lVar30 = *param_1 + (long)param_1;
  }
  if (*(int *)(lVar30 + (ulong)param_2 * 0x30 + 0x24) == 0) {
    return 0;
  }
  local_78 = (long *)0x0;
  local_70 = 0x8000000000000000;
  uVar59 = (ulong)param_4;
  FUN_02ed6620(&local_78,PTR_PTR_047d1a50,0x10);
  lVar30 = (long)(int)local_70;
  plVar37 = local_78 + lVar30 * 3;
  plVar63 = plVar37 + 3;
  do {
    *plVar37 = 0;
    plVar37[1] = -0x8000000000000000;
    plVar37[2] = -0x100000000;
    plVar37 = plVar37 + 3;
  } while (plVar37 != plVar63);
  *(undefined4 *)(local_78 + lVar30 * 3 + 1) = 0;
  local_78[lVar30 * 3 + 2] = -0x100000000;
  plVar63 = (long *)PTR_PTR_047d1a50;
  lVar31 = *param_1;
  lVar30 = 0;
  if (lVar31 != 0) {
    lVar30 = lVar31 + (long)param_1;
  }
  uVar5 = *(uint *)(lVar30 + (ulong)param_2 * 0x30 + 0x20);
  uVar42 = (ulong)uVar5;
  if (uVar5 == 0) {
    local_358 = 0;
  }
  else {
    local_358 = (ulong)(*(uint *)(lVar30 + uVar42 * 0x30 + 0x28) == param_2);
  }
  local_190 = (uint *)&local_180;
  uStack_188 = -0x7fffffc000000000;
  local_70._0_4_ = (int)local_70 + 1;
  do {
    lVar30 = 0;
    if (lVar31 != 0) {
      lVar30 = lVar31 + (long)param_1;
    }
    lVar31 = lVar30 + (ulong)param_2 * 0x30;
    puVar60 = (uint *)(lVar31 + 0x24);
    if (*puVar60 == 0) {
      iVar29 = (int)local_78[1];
      uVar41 = *(uint *)((long)local_78 + 0xc) & 0x7fffffff;
      if ((int)uVar41 <= iVar29) {
        FUN_02ed686c(local_78,plVar63,(long)iVar29 + 1);
        iVar29 = (int)local_78[1];
        uVar41 = *(uint *)((long)local_78 + 0xc) & 0x7fffffff;
      }
      plVar37 = local_78;
      iVar77 = iVar29 + 1;
      if ((int)uVar41 <= iVar29) {
        FUN_02ed686c(local_78,plVar63,(long)iVar77);
        iVar29 = (int)plVar37[1];
      }
      lVar30 = uStack_188;
      *(uint *)(*plVar37 + (long)iVar29 * 4) = param_2;
      *(int *)(plVar37 + 1) = iVar77;
      if ((int)uStack_188 == 0) break;
      param_2 = local_190[(int)uStack_188 + -1];
      uStack_188 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + -1);
    }
    else {
      uVar41 = uStack_188._4_4_ & 0x7fffffff;
      if ((int)uVar41 <= (int)uStack_188) {
        FUN_02ed686c(&local_190,plVar63,(long)(int)uStack_188 + 1);
        uVar41 = uStack_188._4_4_ & 0x7fffffff;
      }
      iVar29 = (int)uStack_188 + 1;
      uVar44 = *(uint *)(lVar30 + (ulong)param_2 * 0x30 + 0x28);
      iVar77 = (int)uStack_188;
      if ((int)uVar41 <= (int)uStack_188) {
        FUN_02ed686c(&local_190,plVar63,(long)iVar29);
        iVar77 = (int)uStack_188;
      }
      local_190[iVar77] = uVar44;
      uStack_188 = CONCAT44(uStack_188._4_4_,iVar29);
      lVar30 = *param_1 + (long)param_1;
      lVar34 = 0;
      if (*param_1 != 0) {
        lVar34 = lVar30;
      }
      iVar29 = (int)(lVar31 - lVar34 >> 4) * -0x55555555;
      param_2 = *puVar60;
      *(int *)(lVar30 + (long)iVar29 * 0x30) = (int)param_1[2];
      *(int *)(param_1 + 2) = iVar29;
    }
    lVar31 = *param_1;
  } while( true );
  uVar32 = (ulong)uStack_188._4_4_;
  uStack_188 = (ulong)uStack_188._4_4_ << 0x20;
  if ((-1 < lVar30) && (local_190 != (uint *)0x0)) {
    (**(code **)(*plVar63 + 0x20))(plVar63,local_190,uVar32 << 2);
  }
  local_1c0 = (undefined1 (*) [16])0x0;
  local_1b8 = -0x8000000000000000;
  local_1b0 = 0;
  local_1a8 = -0x8000000000000000;
  local_1a0 = 0;
  local_198 = -0x8000000000000000;
  if ((int)param_4 < 1) {
    local_1b8._0_4_ = 0;
  }
  else {
    FUN_02ed697c(&local_1c0,PTR_PTR_047d1a50,uVar59);
  }
  if ((int)local_1b8 < (int)param_4) {
    lVar30 = (long)(int)local_1b8;
    local_1b8 = CONCAT44(local_1b8._4_4_,param_4);
    pauVar48 = local_1c0 + lVar30 * 4;
    do {
      pauVar50 = pauVar48 + 4;
      *(undefined8 *)*pauVar48 = 0;
      *(undefined8 *)(*pauVar48 + 8) = 0x8000000000000000;
      pauVar48 = pauVar50;
    } while (pauVar50 != local_1c0 + (long)(int)param_4 * 4);
  }
  else if ((int)param_4 < (int)local_1b8) {
    lVar31 = (long)(int)local_1b8;
    lVar30 = (-(ulong)(param_4 >> 0x1f) & 0xffffffc000000000 | uVar59 << 6) + lVar31 * -0x40;
    local_1b8 = CONCAT44(local_1b8._4_4_,param_4);
    pauVar48 = local_1c0 + lVar31 * 4;
    do {
      pauVar50 = pauVar48 + -4;
      uVar41 = *(uint *)(pauVar48[-4] + 0xc);
      *(undefined4 *)(pauVar48[-4] + 8) = 0;
      if ((-1 < (int)uVar41) && (*(long *)*pauVar50 != 0)) {
        (**(code **)(*plVar63 + 0x20))(plVar63,*(long *)*pauVar50,(ulong)uVar41 << 2);
      }
      *(undefined8 *)*pauVar50 = 0;
      lVar30 = lVar30 + 0x40;
      *(undefined4 *)(pauVar48[-4] + 0xc) = 0x80000000;
      pauVar48 = pauVar50;
    } while (lVar30 != 0);
  }
  if ((int)(local_1a8._4_4_ & 0x7fffffff) < (int)param_4) {
    FUN_02ed697c(&local_1b0,PTR_PTR_047d1a50,(long)(int)param_4);
  }
  lVar30 = (long)(int)local_1a8;
  if ((int)local_1a8 < (int)param_4) {
    local_1a8 = CONCAT44(local_1a8._4_4_,param_4);
    puVar35 = (undefined8 *)(local_1b0 + lVar30 * 0x40);
    do {
      puVar33 = puVar35 + 8;
      *puVar35 = 0;
      puVar35[1] = 0x8000000000000000;
      puVar35 = puVar33;
    } while (puVar33 != (undefined8 *)(local_1b0 + (long)(int)param_4 * 0x40));
  }
  else if ((int)param_4 < (int)local_1a8) {
    lVar31 = (-(ulong)(param_4 >> 0x1f) & 0xffffffc000000000 | uVar59 << 6) + lVar30 * -0x40;
    local_1a8 = CONCAT44(local_1a8._4_4_,param_4);
    plVar37 = (long *)(local_1b0 + lVar30 * 0x40);
    do {
      plVar54 = plVar37 + -8;
      *(undefined4 *)(plVar37 + -7) = 0;
      if ((-1 < (int)*(uint *)((long)plVar37 + -0x34)) && (*plVar54 != 0)) {
        (**(code **)(*plVar63 + 0x20))
                  (plVar63,*plVar54,(ulong)*(uint *)((long)plVar37 + -0x34) << 2);
      }
      *plVar54 = 0;
      lVar31 = lVar31 + 0x40;
      *(undefined4 *)((long)plVar37 + -0x34) = 0x80000000;
      plVar37 = plVar54;
    } while (lVar31 != 0);
  }
  fVar71 = (float)(int)param_4;
  fVar64 = (float)(int)(param_4 - 1);
  if ((int)(local_198._4_4_ & 0x7fffffff) < (int)param_4) {
    FUN_02ed697c(&local_1a0,PTR_PTR_047d1a50,(long)(int)param_4);
  }
  lVar30 = (long)(int)local_198;
  if ((int)local_198 < (int)param_4) {
    local_198 = CONCAT44(local_198._4_4_,param_4);
    puVar35 = (undefined8 *)(local_1a0 + lVar30 * 0x40);
    do {
      puVar33 = puVar35 + 8;
      *puVar35 = 0;
      puVar35[1] = 0x8000000000000000;
      puVar35 = puVar33;
    } while (puVar33 != (undefined8 *)(local_1a0 + (long)(int)param_4 * 0x40));
  }
  else if ((int)param_4 < (int)local_198) {
    lVar31 = (-(ulong)(param_4 >> 0x1f) & 0xffffffc000000000 | uVar59 << 6) + lVar30 * -0x40;
    local_198 = CONCAT44(local_198._4_4_,param_4);
    plVar37 = (long *)(local_1a0 + lVar30 * 0x40);
    do {
      plVar54 = plVar37 + -8;
      *(undefined4 *)(plVar37 + -7) = 0;
      if ((-1 < (int)*(uint *)((long)plVar37 + -0x34)) && (*plVar54 != 0)) {
        (**(code **)(*plVar63 + 0x20))
                  (plVar63,*plVar54,(ulong)*(uint *)((long)plVar37 + -0x34) << 2);
      }
      *plVar54 = 0;
      lVar31 = lVar31 + 0x40;
      *(undefined4 *)((long)plVar37 + -0x34) = 0x80000000;
      plVar37 = plVar54;
    } while (lVar31 != 0);
  }
  uVar25 = _UNK_03cabbd8;
  uVar24 = _DAT_03cabbd0;
  auVar83._8_4_ = 0xff7fffee;
  auVar83._0_8_ = 0xff7fffeeff7fffee;
  auVar83._12_4_ = 0xff7fffee;
  auVar84._8_4_ = 0x7f7fffee;
  auVar84._0_8_ = 0x7f7fffee7f7fffee;
  auVar84._12_4_ = 0x7f7fffee;
  auVar79 = NEON_fmov(0x3f800000,4);
  local_304 = 0;
  auVar90._8_8_ = auVar83._8_8_;
  auVar95._8_8_ = auVar84._8_8_;
  do {
    plVar37 = local_78;
    local_180 = 0xffffffff00000000;
    lVar30 = (long)(int)local_70 + -1;
    local_190 = (uint *)0x0;
    uStack_188 = 0x8000000000000000;
    ppuVar61 = (uint **)(local_78 + lVar30 * 3);
    if (ppuVar61 != &local_190) {
      FUN_02ed67fc(&local_190,plVar63);
      FUN_02ed67fc(ppuVar61,plVar63);
      puVar60 = local_190;
      local_190 = *ppuVar61;
      *ppuVar61 = puVar60;
      lVar31 = plVar37[lVar30 * 3 + 1];
      uVar72 = uStack_188._4_4_;
      *(int *)(plVar37 + lVar30 * 3 + 1) = (int)uStack_188;
      uStack_188 = CONCAT44(*(undefined4 *)((long)plVar37 + lVar30 * 0x18 + 0xc),(int)lVar31);
      *(undefined4 *)((long)plVar37 + lVar30 * 0x18 + 0xc) = uVar72;
      auVar84._8_8_ = auVar95._8_8_;
      auVar84._0_8_ = 0x7f7fffee7f7fffee;
      auVar83._8_8_ = auVar90._8_8_;
      auVar83._0_8_ = 0xff7fffeeff7fffee;
      lVar30 = (long)(int)local_70 + -1;
    }
    iVar29 = (int)local_70;
    plVar37 = local_78;
    local_180 = local_78[lVar30 * 3 + 2];
    *(undefined4 *)(local_78 + (long)(int)local_70 * 3 + -2) = 0;
    uVar41 = *(uint *)((long)local_78 + (long)(int)local_70 * 0x18 + -0xc);
    if ((-1 < (int)uVar41) && (local_78[(long)(int)local_70 * 3 + -3] != 0)) {
      (**(code **)(*plVar63 + 0x20))
                (plVar63,local_78[(long)(int)local_70 * 3 + -3],(ulong)uVar41 << 2);
      auVar84._8_8_ = auVar95._8_8_;
      auVar84._0_8_ = 0x7f7fffee7f7fffee;
      auVar83._8_8_ = auVar90._8_8_;
      auVar83._0_8_ = 0xff7fffeeff7fffee;
    }
    plVar37[(long)iVar29 * 3 + -3] = 0;
    *(undefined4 *)((long)plVar37 + (long)iVar29 * 0x18 + -0xc) = 0x80000000;
    local_70._0_4_ = (int)local_70 + -1;
    if (param_5 < (int)uStack_188) {
LAB_02ed4d64:
      if (0 < (int)uStack_188) {
        auVar83._8_8_ = auVar90._8_8_;
        auVar83._0_8_ = 0xff7fffeeff7fffee;
        auVar84._8_8_ = auVar95._8_8_;
        auVar84._0_8_ = 0x7f7fffee7f7fffee;
        uVar32 = 0;
        lVar30 = 0;
        if (*param_1 != 0) {
          lVar30 = *param_1 + (long)param_1;
        }
        if ((int)uStack_188 != 1) {
          auVar83._0_8_ = 0xff7fffeeff7fffee;
          uVar32 = 0;
          auVar84._0_8_ = 0x7f7fffee7f7fffee;
          do {
            puVar60 = local_190 + uVar32;
            uVar32 = uVar32 + 2;
            pauVar50 = (undefined1 (*) [16])(lVar30 + (ulong)*puVar60 * 0x30);
            pauVar48 = (undefined1 (*) [16])(lVar30 + (ulong)puVar60[1] * 0x30);
            auVar93 = NEON_fmax(auVar83,pauVar50[1],4);
            auVar83 = NEON_fmin(auVar84,*pauVar50,4);
            auVar84 = NEON_fmin(auVar83,*pauVar48,4);
            auVar83 = NEON_fmax(auVar93,pauVar48[1],4);
          } while ((uStack_188 & 0xfffffffe) != uVar32);
        }
        if ((uStack_188 & 1) != 0) {
          pauVar48 = (undefined1 (*) [16])(lVar30 + (ulong)local_190[uVar32] * 0x30);
          auVar83 = NEON_fmax(auVar83,pauVar48[1],4);
          auVar84 = NEON_fmin(auVar84,*pauVar48,4);
        }
      }
      uVar41 = *(uint *)(param_1 + 2);
      fStack_298 = auVar84._8_4_;
      fStack_294 = auVar84._12_4_;
      local_2a0 = auVar84._0_4_;
      fStack_29c = auVar84._4_4_;
      local_200 = auVar83._0_4_;
      fStack_1fc = auVar83._4_4_;
      if (uVar41 == 0) {
        iVar29 = FUN_02ed42dc(param_1,1);
        if (iVar29 < 0) {
LAB_02ed5804:
          bVar28 = false;
          auVar84._8_8_ = auVar95._8_8_;
          auVar84._0_8_ = 0x7f7fffee7f7fffee;
          goto LAB_02ed5980;
        }
        uVar41 = *(uint *)(param_1 + 2);
      }
      lVar30 = *param_1 + (long)param_1;
      lVar31 = 0;
      if (*param_1 != 0) {
        lVar31 = lVar30;
      }
      puVar35 = (undefined8 *)(lVar31 + (ulong)uVar41 * 0x30);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar30 + (long)(int)uVar41 * 0x30);
      puVar35[1] = auVar84._8_8_;
      *puVar35 = auVar84._0_8_;
      puVar35[3] = auVar83._8_8_;
      puVar35[2] = auVar83._0_8_;
      fVar91 = auVar83._8_4_ - fStack_298;
      iVar29 = -(uint)(local_200 - local_2a0 == 0.0);
      iVar77 = -(uint)(fStack_1fc - fStack_29c == 0.0);
      iVar78 = -(uint)(fVar91 == 0.0);
      fVar86 = auVar79._0_4_ / (local_200 - local_2a0);
      fVar87 = auVar79._4_4_ / (fStack_1fc - fStack_29c);
      fVar91 = auVar79._8_4_ / fVar91;
      lVar30 = 0;
      if (*param_1 != 0) {
        lVar30 = *param_1 + (long)param_1;
      }
      *(undefined4 *)(lVar30 + (ulong)uVar41 * 0x30 + 0x20) = (undefined4)local_180;
      uVar72 = CONCAT13((byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                        CONCAT12((byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                                 CONCAT11((byte)((uint)fVar86 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                          SUB41(fVar86,0) & ~(byte)iVar29)));
      auVar73._0_8_ =
           CONCAT17((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18),
                    CONCAT16((byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10),
                             CONCAT15((byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar77 >> 8),
                                      CONCAT14(SUB41(fVar87,0) & ~(byte)iVar77,uVar72))));
      auVar73[8] = SUB41(fVar91,0) & ~(byte)iVar78;
      auVar73[9] = (byte)((uint)fVar91 >> 8) & ~(byte)((uint)iVar78 >> 8);
      auVar73[10] = (byte)((uint)fVar91 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10);
      auVar73[0xb] = (byte)((uint)fVar91 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18);
      uVar44 = uVar41;
      if (local_180._4_4_ != -1) {
        lVar30 = 0;
        if (*param_1 != 0) {
          lVar30 = *param_1 + (long)param_1;
        }
        *(uint *)(lVar30 + (local_180 & 0xffffffff) * 0x30 + (long)local_180._4_4_ * 4 + 0x24) =
             uVar41;
        uVar44 = local_304;
      }
      local_304 = uVar44;
      iVar29 = (int)local_70 + 2;
      if ((int)(local_70._4_4_ & 0x7fffffff) < iVar29) {
        uVar22 = auVar73._8_4_;
        fStack_1fc = (float)((ulong)auVar73._0_8_ >> 0x20);
        FUN_02ed6620(&local_78,plVar63);
        auVar73._4_4_ = fStack_1fc;
        auVar73._0_4_ = uVar72;
        auVar73._8_4_ = uVar22;
        iVar29 = (int)local_70 + 2;
      }
      plVar54 = local_78;
      lVar30 = (long)(int)local_70;
      plVar36 = local_78 + (long)(int)local_70 * 3;
      local_70._0_4_ = iVar29;
      plVar37 = plVar36;
      do {
        *plVar37 = 0;
        plVar37[1] = -0x8000000000000000;
        plVar37[2] = -0x100000000;
        plVar37 = plVar37 + 3;
      } while (plVar37 != local_78 + (long)iVar29 * 3);
      *(uint *)(local_78 + lVar30 * 3 + 2) = uVar41;
      *(undefined4 *)((long)local_78 + lVar30 * 0x18 + 0x14) = 0;
      *(uint *)(plVar36 + 5) = uVar41;
      *(undefined4 *)((long)plVar36 + 0x2c) = 1;
      plVar37 = plVar36 + 3;
      puVar60 = (uint *)((long)local_78 + lVar30 * 0x18 + 0xc);
      if ((int)(*puVar60 & 0x7fffffff) < (int)uStack_188) {
        FUN_02ed686c(plVar36,plVar63,(long)(int)uStack_188);
      }
      if ((int)(*(uint *)((long)plVar36 + 0x24) & 0x7fffffff) < (int)uStack_188) {
        FUN_02ed686c(plVar37,plVar63,(long)(int)uStack_188);
      }
      if (0 < (int)param_4) {
        lVar31 = 0;
        do {
          *(undefined4 *)(*local_1c0 + lVar31 + 8) = 0;
          *(undefined8 *)(local_1c0[1] + lVar31 + 8) = auVar95._8_8_;
          *(undefined8 *)(local_1c0[1] + lVar31) = 0x7f7fffee7f7fffee;
          *(undefined8 *)(local_1c0[2] + lVar31 + 8) = auVar90._8_8_;
          *(undefined8 *)(local_1c0[2] + lVar31) = 0xff7fffeeff7fffee;
          *(undefined4 *)(local_1c0[3] + lVar31) = 0;
          lVar34 = local_1b0 + lVar31;
          *(undefined4 *)(lVar34 + 8) = 0;
          *(undefined8 *)(lVar34 + 0x18) = auVar95._8_8_;
          *(undefined8 *)(lVar34 + 0x10) = 0x7f7fffee7f7fffee;
          *(undefined8 *)(lVar34 + 0x28) = auVar90._8_8_;
          *(undefined8 *)(lVar34 + 0x20) = 0xff7fffeeff7fffee;
          *(undefined4 *)(lVar34 + 0x30) = 0;
          lVar34 = local_1a0 + lVar31;
          lVar31 = lVar31 + 0x40;
          *(undefined4 *)(lVar34 + 8) = 0;
          *(undefined4 *)(lVar34 + 0x30) = 0;
          *(undefined8 *)(lVar34 + 0x18) = auVar95._8_8_;
          *(undefined8 *)(lVar34 + 0x10) = 0x7f7fffee7f7fffee;
          *(undefined8 *)(lVar34 + 0x28) = auVar90._8_8_;
          *(undefined8 *)(lVar34 + 0x20) = 0xff7fffeeff7fffee;
        } while (uVar59 << 6 != lVar31);
      }
      auVar83 = ZEXT816(0);
      auVar93._4_4_ = fVar71;
      auVar93._0_4_ = fVar71;
      auVar93._8_4_ = fVar71;
      auVar93._12_4_ = fVar71;
      if (0 < (int)uStack_188) {
        auVar83 = ZEXT816(0);
        lVar31 = 0;
        do {
          lVar34 = 0;
          if (*param_1 != 0) {
            lVar34 = *param_1 + (long)param_1;
          }
          pauVar48 = (undefined1 (*) [16])(lVar34 + (ulong)local_190[lVar31] * 0x30);
          auVar84 = *pauVar48;
          auVar99 = pauVar48[1];
          auVar66._0_4_ =
               fVar71 * auVar73._0_4_ * ((auVar84._0_4_ + auVar99._0_4_) * 0.5 - local_2a0) + 0.5;
          auVar66._4_4_ =
               fVar71 * auVar73._4_4_ * ((auVar84._4_4_ + auVar99._4_4_) * 0.5 - fStack_29c) + 0.5;
          auVar66._8_4_ =
               fVar71 * auVar73._8_4_ * ((auVar84._8_4_ + auVar99._8_4_) * 0.5 - fStack_298) + 0.5;
          auVar66._12_4_ =
               fVar71 * 0.0 * ((auVar84._12_4_ + auVar99._12_4_) * 0.5 - fStack_294) + 0.5;
          auVar100 = NEON_fmax(auVar66,ZEXT816(0),4);
          auVar103._4_4_ = fVar64;
          auVar103._0_4_ = fVar64;
          auVar103._8_4_ = fVar64;
          auVar103._12_4_ = fVar64;
          auVar103 = NEON_fmin(auVar100,auVar103,4);
          auVar100._0_8_ = CONCAT44((int)auVar103._4_4_,(int)auVar103._0_4_);
          auVar100._8_4_ = (int)auVar103._8_4_;
          auVar100._12_4_ = (int)auVar103._12_4_;
          pauVar48 = local_1c0 + (long)(int)auVar103._0_4_ * 4;
          auVar89 = NEON_fmin(pauVar48[1],auVar84,4);
          auVar66 = NEON_fmax(pauVar48[2],auVar99,4);
          *(long *)(pauVar48[1] + 8) = auVar89._8_8_;
          *(long *)pauVar48[1] = auVar89._0_8_;
          *(long *)(pauVar48[2] + 8) = auVar66._8_8_;
          *(long *)pauVar48[2] = auVar66._0_8_;
          piVar43 = (int *)(*pauVar48 + 8);
          iVar29 = *piVar43;
          if ((int)(*(uint *)(*pauVar48 + 0xc) & 0x7fffffff) <= iVar29) {
            FUN_02ed686c(pauVar48,plVar63,(long)iVar29 + 1);
            auVar100._8_8_ = auVar100._8_8_;
            iVar29 = *piVar43;
          }
          *(uint *)(*(long *)*pauVar48 + (long)iVar29 * 4) = local_190[lVar31];
          *piVar43 = iVar29 + 1;
          plVar3 = (long *)(local_1b0 + (long)(int)auVar103._4_4_ * 0x40);
          auVar89 = NEON_fmin(*(undefined1 (*) [16])(plVar3 + 2),auVar84,4);
          auVar66 = NEON_fmax(*(undefined1 (*) [16])(plVar3 + 4),auVar99,4);
          plVar3[3] = auVar89._8_8_;
          plVar3[2] = auVar89._0_8_;
          plVar3[5] = auVar66._8_8_;
          plVar3[4] = auVar66._0_8_;
          plVar56 = plVar3 + 1;
          iVar29 = (int)*plVar56;
          if ((int)(*(uint *)((long)plVar3 + 0xc) & 0x7fffffff) <= iVar29) {
            FUN_02ed686c(plVar3,plVar63,(long)iVar29 + 1);
            iVar29 = (int)*plVar56;
          }
          *(uint *)(*plVar3 + (long)iVar29 * 4) = local_190[lVar31];
          *(int *)plVar56 = iVar29 + 1;
          plVar3 = (long *)(local_1a0 + (long)auVar100._8_4_ * 0x40);
          auVar100 = NEON_fmin(*(undefined1 (*) [16])(plVar3 + 2),auVar84,4);
          auVar84 = NEON_fmax(*(undefined1 (*) [16])(plVar3 + 4),auVar99,4);
          plVar3[3] = auVar100._8_8_;
          plVar3[2] = auVar100._0_8_;
          plVar3[5] = auVar84._8_8_;
          plVar3[4] = auVar84._0_8_;
          plVar56 = plVar3 + 1;
          iVar29 = (int)*plVar56;
          if ((int)(*(uint *)((long)plVar3 + 0xc) & 0x7fffffff) <= iVar29) {
            FUN_02ed686c(plVar3,plVar63,(long)iVar29 + 1);
            iVar29 = (int)*plVar56;
          }
          puVar55 = local_190 + lVar31;
          lVar31 = lVar31 + 1;
          auVar83 = NEON_fmax(auVar103,auVar83,4);
          *(uint *)(*plVar3 + (long)iVar29 * 4) = *puVar55;
          *(int *)plVar56 = iVar29 + 1;
          auVar93 = NEON_fmin(auVar103,auVar93,4);
        } while (lVar31 < (int)uStack_188);
      }
      uVar32 = 0;
      uVar47 = 0;
      fVar86 = 3.40282e+38;
      uVar41 = 0xffffffff;
      do {
        pauVar48 = local_1e0[uVar32 * 2 + 4];
        iVar29 = (int)uVar32;
        auVar84 = auVar93;
        auVar99 = auVar83;
        if (iVar29 != 0) {
          auVar84 = ZEXT416(auVar93._8_4_);
          auVar99 = ZEXT416(auVar83._8_4_);
          if (iVar29 != 2) {
            auVar84 = ZEXT416(auVar93._4_4_);
            auVar99 = ZEXT416(auVar83._4_4_);
            if (iVar29 != 1) {
              auVar84 = ZEXT416(auVar93._12_4_);
              auVar99 = ZEXT416(auVar83._12_4_);
            }
          }
        }
        uVar44 = (uint)auVar84._0_4_;
        uVar46 = (uint)auVar99._0_4_;
        if ((int)uVar44 <= (int)uVar46) {
          auVar99._8_8_ = auVar90._8_8_;
          auVar99._0_8_ = 0xff7fffeeff7fffee;
          auVar89._8_8_ = auVar95._8_8_;
          auVar89._0_8_ = 0x7f7fffee7f7fffee;
          iVar29 = 0;
          iVar77 = 0;
          uVar38 = (ulong)(int)uVar44;
          uVar52 = uVar44 - 1;
          uVar27 = -(ulong)(uVar44 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar44 << 6;
          uVar49 = -(ulong)(uVar46 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar46 << 6;
          auVar84 = auVar99;
          auVar100 = auVar89;
          do {
            auVar84 = NEON_fmax(auVar84,*(undefined1 (*) [16])(pauVar48[2] + uVar27),4);
            iVar29 = *(int *)(*pauVar48 + uVar27 + 8) + iVar29;
            auVar100 = NEON_fmin(auVar100,*(undefined1 (*) [16])(pauVar48[1] + uVar27),4);
            iVar77 = *(int *)(*pauVar48 + uVar49 + 8) + iVar77;
            auVar8._12_4_ = (int)((ulong)*(undefined8 *)(pauVar48[2] + uVar49 + 8) >> 0x20);
            auVar8._0_12_ = *(undefined1 (*) [12])(pauVar48[2] + uVar49);
            auVar99 = NEON_fmax(auVar99,auVar8,4);
            auVar101._0_4_ = auVar84._0_4_ - auVar100._0_4_;
            auVar101._4_4_ = auVar84._4_4_ - auVar100._4_4_;
            auVar101._8_4_ = auVar84._8_4_ - auVar100._8_4_;
            auVar101._12_4_ = auVar84._12_4_ - auVar100._12_4_;
            uVar52 = uVar52 + 1;
            auVar89 = NEON_fmin(auVar89,*(undefined1 (*) [16])(pauVar48[1] + uVar49),4);
            auVar20._8_8_ = uVar25;
            auVar20._0_8_ = uVar24;
            auVar103 = a64_TBL(ZEXT816(0),auVar101,auVar20);
            auVar102._0_4_ = (auVar101._0_4_ + auVar101._0_4_) * auVar103._0_4_;
            auVar102._4_4_ = (auVar101._4_4_ + auVar101._4_4_) * auVar103._4_4_;
            auVar102._8_4_ = (auVar101._8_4_ + auVar101._8_4_) * auVar103._8_4_;
            auVar102._12_4_ = (auVar101._12_4_ + auVar101._12_4_) * auVar103._12_4_;
            auVar66 = NEON_ext(auVar102,auVar102,8,1);
            fVar87 = auVar99._0_4_ - auVar89._0_4_;
            fVar91 = auVar99._4_4_ - auVar89._4_4_;
            fVar92 = auVar99._8_4_ - auVar89._8_4_;
            fVar104 = auVar99._12_4_ - auVar89._12_4_;
            auVar9._4_4_ = fVar91;
            auVar9._0_4_ = fVar87;
            auVar9._8_4_ = fVar92;
            auVar9._12_4_ = fVar104;
            auVar21._8_8_ = uVar25;
            auVar21._0_8_ = uVar24;
            auVar103 = a64_TBL(ZEXT816(0),auVar9,auVar21);
            fVar87 = (fVar87 + fVar87) * auVar103._0_4_;
            fVar91 = (fVar91 + fVar91) * auVar103._4_4_;
            fVar92 = (fVar92 + fVar92) * auVar103._8_4_;
            fVar104 = (fVar104 + fVar104) * auVar103._12_4_;
            auVar10._4_4_ = fVar91;
            auVar10._0_4_ = fVar87;
            auVar10._8_4_ = fVar92;
            auVar10._12_4_ = fVar104;
            auVar11._4_4_ = fVar91;
            auVar11._0_4_ = fVar87;
            auVar11._8_4_ = fVar92;
            auVar11._12_4_ = fVar104;
            auVar103 = NEON_ext(auVar10,auVar11,8,1);
            *(float *)(pauVar48[3] + uVar27) =
                 *(float *)(pauVar48[3] + uVar27) +
                 (float)iVar29 * (auVar102._0_4_ + auVar102._4_4_ + auVar66._0_4_);
            *(float *)(pauVar48[3] + uVar49) =
                 *(float *)(pauVar48[3] + uVar49) +
                 (float)iVar77 * (fVar87 + fVar91 + auVar103._0_4_);
            uVar27 = uVar27 + 0x40;
            uVar49 = uVar49 - 0x40;
          } while (uVar46 != uVar52);
          if (((uVar46 - uVar44) + 1 & 1) != 0) {
            if (*(int *)(pauVar48[uVar38 * 4] + 8) != 0) {
              if (*(float *)pauVar48[uVar38 * 4 + 3] < fVar86) {
                uVar47 = uVar32 & 0xffffffff;
                uVar41 = uVar44;
                fVar86 = *(float *)pauVar48[uVar38 * 4 + 3];
              }
            }
            uVar38 = uVar38 + 1;
          }
          if (uVar46 != uVar44) {
            piVar43 = (int *)(pauVar48[uVar38 * 4 + 4] + 8);
            do {
              uVar44 = (uint)uVar38;
              if (piVar43[-0x10] != 0) {
                if ((float)piVar43[-6] < fVar86) {
                  uVar47 = uVar32 & 0xffffffff;
                  uVar41 = uVar44;
                  fVar86 = (float)piVar43[-6];
                }
              }
              if (*piVar43 != 0) {
                if ((float)piVar43[10] < fVar86) {
                  uVar41 = uVar44 + 1;
                  uVar47 = uVar32 & 0xffffffff;
                  fVar86 = (float)piVar43[10];
                }
              }
              uVar38 = (ulong)(uVar44 + 2);
              piVar43 = piVar43 + 0x20;
            } while (uVar46 + 1 != uVar44 + 2);
          }
        }
        uVar32 = uVar32 + 1;
      } while (uVar32 != 3);
      ppauVar1 = local_1e0 + (long)(int)uVar47 * 2 + 4;
      if (0 < (int)uVar41) {
        plVar63 = plVar54 + lVar30 * 3 + 1;
        uVar32 = 0;
        iVar29 = (int)*plVar63;
        do {
          puVar62 = *(undefined4 **)(*ppauVar1)[uVar32 * 4];
          uVar44 = *(uint *)((*ppauVar1)[uVar32 * 4] + 8);
          iVar77 = uVar44 + iVar29;
          if ((int)(*puVar60 & 0x7fffffff) < iVar77) {
            FUN_02eb1f88(plVar36,PTR_PTR_047d1a50,(long)iVar77);
          }
          if (0 < (int)uVar44) {
            puVar2 = (undefined4 *)(*plVar36 + (long)iVar29 * 4);
            uVar46 = uVar44 & 7;
            if (6 < uVar44 - 1) {
              iVar29 = -(uVar44 & 0xfffffff8);
              puVar40 = puVar2;
              do {
                *puVar40 = *puVar62;
                puVar40[1] = puVar62[1];
                puVar40[2] = puVar62[2];
                puVar40[3] = puVar62[3];
                puVar40[4] = puVar62[4];
                puVar40[5] = puVar62[5];
                puVar40[6] = puVar62[6];
                puVar39 = puVar62 + 7;
                puVar2 = puVar40 + 8;
                puVar62 = puVar62 + 8;
                iVar29 = iVar29 + 8;
                puVar40[7] = *puVar39;
                puVar40 = puVar2;
              } while (iVar29 != 0);
            }
            for (; uVar46 != 0; uVar46 = uVar46 - 1) {
              *puVar2 = *puVar62;
              puVar2 = puVar2 + 1;
              puVar62 = puVar62 + 1;
            }
          }
          uVar32 = uVar32 + 1;
          *(int *)plVar63 = iVar77;
          iVar29 = iVar77;
        } while (uVar32 != uVar41);
      }
      if ((int)(uVar41 + 1) < (int)param_4) {
        lVar31 = (long)(int)(uVar41 + 1);
        iVar77 = (int)plVar36[4];
        do {
          puVar62 = *(undefined4 **)(*ppauVar1)[lVar31 * 4];
          uVar44 = *(uint *)((*ppauVar1)[lVar31 * 4] + 8);
          iVar29 = uVar44 + iVar77;
          if ((int)(*(uint *)((long)plVar36 + 0x24) & 0x7fffffff) < iVar29) {
            FUN_02eb1f88(plVar37,PTR_PTR_047d1a50,(long)iVar29);
          }
          if (0 < (int)uVar44) {
            puVar2 = (undefined4 *)(*plVar37 + (long)iVar77 * 4);
            uVar46 = uVar44 & 7;
            if (6 < uVar44 - 1) {
              iVar77 = -(uVar44 & 0xfffffff8);
              puVar40 = puVar2;
              do {
                *puVar40 = *puVar62;
                puVar40[1] = puVar62[1];
                puVar40[2] = puVar62[2];
                puVar40[3] = puVar62[3];
                puVar40[4] = puVar62[4];
                puVar40[5] = puVar62[5];
                puVar40[6] = puVar62[6];
                puVar39 = puVar62 + 7;
                puVar2 = puVar40 + 8;
                puVar62 = puVar62 + 8;
                iVar77 = iVar77 + 8;
                puVar40[7] = *puVar39;
                puVar40 = puVar2;
              } while (iVar77 != 0);
            }
            for (; uVar46 != 0; uVar46 = uVar46 - 1) {
              *puVar2 = *puVar62;
              puVar2 = puVar2 + 1;
              puVar62 = puVar62 + 1;
            }
          }
          lVar31 = lVar31 + 1;
          *(int *)(plVar36 + 4) = iVar29;
          iVar77 = iVar29;
        } while ((uint)lVar31 != param_4);
      }
      else {
        iVar29 = (int)plVar36[4];
      }
      plVar63 = (long *)PTR_PTR_047d1a50;
      plVar54 = plVar54 + lVar30 * 3 + 1;
      if ((iVar29 == 0 || (int)*plVar54 == 0) && ((int)*plVar54 != 0 || iVar29 != 0)) {
        plVar36 = plVar36 + (ulong)(iVar29 == 0) * 3;
        puVar62 = *(undefined4 **)(*ppauVar1)[(long)(int)uVar41 * 4];
        uVar41 = *(uint *)((*ppauVar1)[(long)(int)uVar41 * 4] + 8);
        lVar31 = plVar36[1];
        lVar30 = (long)(int)lVar31 + (long)(int)uVar41;
        iVar29 = (int)lVar30;
        if ((int)(*(uint *)((long)plVar36 + 0xc) & 0x7fffffff) < iVar29) {
          FUN_02eb1f88(plVar36,PTR_PTR_047d1a50,lVar30);
        }
        if (0 < (int)uVar41) {
          puVar2 = (undefined4 *)(*plVar36 + (long)(int)lVar31 * 4);
          uVar44 = uVar41 & 7;
          if (6 < uVar41 - 1) {
            iVar77 = -(uVar41 & 0xfffffff8);
            puVar40 = puVar2;
            do {
              *puVar40 = *puVar62;
              puVar40[1] = puVar62[1];
              puVar40[2] = puVar62[2];
              puVar40[3] = puVar62[3];
              puVar40[4] = puVar62[4];
              puVar40[5] = puVar62[5];
              puVar40[6] = puVar62[6];
              puVar39 = puVar62 + 7;
              puVar2 = puVar40 + 8;
              puVar62 = puVar62 + 8;
              iVar77 = iVar77 + 8;
              puVar40[7] = *puVar39;
              puVar40 = puVar2;
            } while (iVar77 != 0);
          }
          for (; uVar44 != 0; uVar44 = uVar44 - 1) {
            *puVar2 = *puVar62;
            puVar2 = puVar2 + 1;
            puVar62 = puVar62 + 1;
          }
        }
        *(int *)(plVar36 + 1) = iVar29;
      }
      else {
        puVar62 = *(undefined4 **)(*ppauVar1)[(long)(int)uVar41 * 4];
        uVar44 = *(uint *)((*ppauVar1)[(long)(int)uVar41 * 4] + 8);
        uVar41 = (int)uVar44 >> 1;
        FUN_02ed6390(puVar62,uVar44,uVar47,param_1);
        plVar63 = (long *)PTR_PTR_047d1a50;
        lVar31 = *plVar54;
        lVar30 = (long)(int)lVar31 + (long)(int)uVar41;
        iVar29 = (int)lVar30;
        if ((int)(*puVar60 & 0x7fffffff) < iVar29) {
          FUN_02eb1f88(plVar36,PTR_PTR_047d1a50,lVar30);
        }
        if (1 < (int)uVar44) {
          puVar40 = (undefined4 *)(*plVar36 + (long)(int)lVar31 * 4);
          uVar46 = uVar44 >> 1 & 7;
          puVar2 = puVar62;
          if (6 < uVar41 - 1) {
            iVar77 = -(uVar41 & 0xfffffff8);
            puVar39 = puVar40;
            puVar45 = puVar62;
            do {
              *puVar39 = *puVar45;
              puVar39[1] = puVar45[1];
              puVar39[2] = puVar45[2];
              puVar39[3] = puVar45[3];
              puVar39[4] = puVar45[4];
              puVar39[5] = puVar45[5];
              puVar39[6] = puVar45[6];
              puVar2 = puVar45 + 8;
              puVar40 = puVar39 + 8;
              iVar77 = iVar77 + 8;
              puVar39[7] = puVar45[7];
              puVar39 = puVar40;
              puVar45 = puVar2;
            } while (iVar77 != 0);
          }
          for (; uVar46 != 0; uVar46 = uVar46 - 1) {
            *puVar40 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar40 = puVar40 + 1;
          }
        }
        *(int *)plVar54 = iVar29;
        lVar31 = plVar36[4];
        uVar46 = uVar44 - uVar41;
        lVar30 = (long)(int)lVar31 + (long)(int)uVar46;
        iVar29 = (int)lVar30;
        if ((int)(*(uint *)((long)plVar36 + 0x24) & 0x7fffffff) < iVar29) {
          FUN_02eb1f88(plVar37,plVar63,lVar30);
        }
        if (0 < (int)uVar46) {
          puVar62 = puVar62 + (int)uVar41;
          puVar2 = (undefined4 *)(*plVar37 + (long)(int)lVar31 * 4);
          uVar52 = uVar46 & 7;
          if (6 < uVar44 + ~uVar41) {
            iVar77 = -(uVar46 & 0xfffffff8);
            puVar40 = puVar62;
            puVar39 = puVar2;
            do {
              *puVar39 = *puVar40;
              puVar39[1] = puVar40[1];
              puVar39[2] = puVar40[2];
              puVar39[3] = puVar40[3];
              puVar39[4] = puVar40[4];
              puVar39[5] = puVar40[5];
              puVar39[6] = puVar40[6];
              puVar62 = puVar40 + 8;
              puVar2 = puVar39 + 8;
              iVar77 = iVar77 + 8;
              puVar39[7] = puVar40[7];
              puVar40 = puVar62;
              puVar39 = puVar2;
            } while (iVar77 != 0);
          }
          for (; uVar52 != 0; uVar52 = uVar52 - 1) {
            *puVar2 = *puVar62;
            puVar62 = puVar62 + 1;
            puVar2 = puVar2 + 1;
          }
        }
        *(int *)(plVar36 + 4) = iVar29;
      }
      auVar84._8_8_ = auVar95._8_8_;
      auVar84._0_8_ = 0x7f7fffee7f7fffee;
      bVar28 = true;
    }
    else {
      uVar32 = uStack_188;
      uVar47 = local_180;
      iVar29 = (int)uStack_188;
      if (local_180._4_4_ == -1) goto LAB_02ed4d64;
      while (local_180 = uVar47, 1 < iVar29) {
        uVar32 = uVar32 & 0xffffffff;
        lVar34 = *param_1;
        auVar98._8_4_ = 0x7f7fffee;
        auVar98._0_8_ = 0x7f7fffee7f7fffee;
        auVar98._12_4_ = 0x7f7fffee;
        lVar30 = lVar34 + (long)param_1;
        auVar96._8_4_ = 0xff7fffee;
        auVar96._0_8_ = 0xff7fffeeff7fffee;
        auVar96._12_4_ = 0xff7fffee;
        auVar65 = ZEXT816(0x7f7fffee7f7fffee);
        lVar31 = 0;
        if (lVar34 != 0) {
          lVar31 = lVar30;
        }
        uVar47 = 1;
        iVar78 = -1;
        iVar77 = -1;
        uVar38 = 0;
        do {
          uVar27 = uVar38 + 1;
          if (uVar27 < uVar32) {
            pauVar48 = (undefined1 (*) [16])(lVar31 + (ulong)local_190[uVar38] * 0x30);
            uVar49 = uVar47;
            iVar29 = iVar78;
            iVar57 = iVar77;
            do {
              pauVar50 = (undefined1 (*) [16])(lVar31 + (ulong)local_190[uVar49] * 0x30);
              auVar84 = NEON_fmax(pauVar50[1],pauVar48[1],4);
              auVar83 = NEON_fmin(*pauVar50,*pauVar48,4);
              auVar88._0_4_ = auVar84._0_4_ - auVar83._0_4_;
              auVar88._4_4_ = auVar84._4_4_ - auVar83._4_4_;
              auVar88._8_4_ = auVar84._8_4_ - auVar83._8_4_;
              auVar88._12_4_ = auVar84._12_4_ - auVar83._12_4_;
              auVar12._8_8_ = uVar25;
              auVar12._0_8_ = uVar24;
              auVar93 = a64_TBL(ZEXT816(0),auVar88,auVar12);
              fVar86 = (auVar88._0_4_ + auVar88._0_4_) * auVar93._0_4_;
              fVar91 = (auVar88._4_4_ + auVar88._4_4_) * auVar93._4_4_;
              fVar92 = (auVar88._8_4_ + auVar88._8_4_) * auVar93._8_4_;
              fVar87 = fVar86 + fVar91 + fVar92;
              bVar28 = fVar87 < auVar65._0_4_;
              iVar78 = -(uint)bVar28;
              auVar94._4_4_ = iVar78;
              auVar94._0_4_ = iVar78;
              auVar94._8_4_ = iVar78;
              auVar94._12_4_ = iVar78;
              iVar77 = (int)uVar49;
              if (!bVar28) {
                iVar77 = iVar57;
              }
              auVar98 = auVar98 ^ (auVar98 ^ auVar83) & auVar94;
              uVar49 = uVar49 + 1;
              auVar65._0_8_ =
                   auVar65._0_8_ ^
                   (auVar65._0_8_ ^ CONCAT44(fVar86 + fVar91 + fVar92,fVar87)) &
                   CONCAT44(iVar78,iVar78);
              auVar96 = auVar96 ^ (auVar96 ^ auVar84) & auVar94;
              iVar78 = (int)uVar38;
              if (!bVar28) {
                iVar78 = iVar29;
              }
              iVar29 = iVar78;
              iVar57 = iVar77;
            } while (uVar32 != uVar49);
          }
          uVar47 = uVar47 + 1;
          uVar38 = uVar27;
        } while (uVar27 != uVar32);
        uVar44 = local_190[iVar78];
        uVar41 = *(uint *)(param_1 + 2);
        uVar46 = local_190[iVar77];
        if (uVar41 == 0) {
          iVar29 = FUN_02ed42dc(param_1,1);
          if (iVar29 < 0) goto LAB_02ed5804;
          lVar34 = *param_1;
          lVar30 = lVar34 + (long)param_1;
          uVar41 = *(uint *)(param_1 + 2);
        }
        auVar95._0_8_ = 0x7f7fffee7f7fffee;
        lVar31 = 0;
        if (lVar34 != 0) {
          lVar31 = lVar30;
        }
        puVar35 = (undefined8 *)(lVar31 + (ulong)uVar41 * 0x30);
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar30 + (long)(int)uVar41 * 0x30);
        puVar35[1] = auVar98._8_8_;
        *puVar35 = auVar98._0_8_;
        puVar35[3] = auVar96._8_8_;
        puVar35[2] = auVar96._0_8_;
        lVar30 = 0;
        if (*param_1 != 0) {
          lVar30 = *param_1 + (long)param_1;
        }
        *(uint *)(lVar30 + (ulong)uVar41 * 0x30 + 0x24) = uVar44;
        lVar30 = 0;
        if (*param_1 != 0) {
          lVar30 = *param_1 + (long)param_1;
        }
        *(uint *)(lVar30 + (ulong)uVar41 * 0x30 + 0x28) = uVar46;
        lVar30 = 0;
        if (*param_1 != 0) {
          lVar30 = *param_1 + (long)param_1;
        }
        *(uint *)(lVar30 + (ulong)uVar44 * 0x30 + 0x20) = uVar41;
        lVar30 = 0;
        if (*param_1 != 0) {
          lVar30 = *param_1 + (long)param_1;
        }
        *(uint *)(lVar30 + (ulong)uVar46 * 0x30 + 0x20) = uVar41;
        uVar32 = (long)(int)uStack_188 - 1;
        iVar29 = (int)uVar32;
        uStack_188 = CONCAT44(uStack_188._4_4_,iVar29);
        if (iVar29 != iVar77) {
          local_190[iVar77] = local_190[uVar32];
        }
        local_190[iVar78] = uVar41;
        auVar84 = auVar95;
        uVar32 = uVar32 & 0xffffffff;
        uVar47 = local_180;
      }
      uStack_188._4_4_ = (uint)(uStack_188 >> 0x20);
      bVar28 = true;
      uVar41 = *local_190;
      lVar30 = 0;
      if (*param_1 != 0) {
        lVar30 = *param_1 + (long)param_1;
      }
      local_180._0_4_ = (undefined4)uVar47;
      *(undefined4 *)(lVar30 + (ulong)uVar41 * 0x30 + 0x20) = (undefined4)local_180;
      lVar30 = 0;
      if (*param_1 != 0) {
        lVar30 = *param_1 + (long)param_1;
      }
      local_180._4_4_ = (int)(uVar47 >> 0x20);
      *(uint *)(lVar30 + (uVar47 & 0xffffffff) * 0x30 + (long)local_180._4_4_ * 4 + 0x24) = uVar41;
    }
LAB_02ed5980:
    uVar41 = uStack_188._4_4_;
    uVar32 = (ulong)uStack_188._4_4_;
    uStack_188 = uVar32 << 0x20;
    if ((-1 < (int)uVar41) && (local_190 != (uint *)0x0)) {
      (**(code **)(*plVar63 + 0x20))(plVar63,local_190,uVar32 << 2);
      auVar84._8_8_ = auVar95._8_8_;
      auVar84._0_8_ = 0x7f7fffee7f7fffee;
    }
    lVar30 = local_1a0;
    auVar90._0_8_ = 0xff7fffeeff7fffee;
    if (!bVar28) {
      bVar28 = false;
      goto LAB_02ed5f20;
    }
    auVar83 = auVar90;
  } while ((int)local_70 != 0);
  lVar31 = *param_1;
  if (param_3 == '\0') {
    lVar34 = lVar31 + (long)param_1;
  }
  else {
    lVar34 = 0;
    if (lVar31 != 0) {
      lVar34 = lVar31 + (long)param_1;
    }
    uVar59 = (ulong)*(uint *)(lVar34 + (ulong)local_304 * 0x30 + 0x24);
    do {
      bVar28 = false;
      uVar41 = (uint)uVar59;
      while (uVar41 != 0) {
        lVar34 = lVar31 + (long)param_1;
        lVar4 = 0;
        if (lVar31 != 0) {
          lVar4 = lVar34;
        }
        uVar41 = *(uint *)(lVar4 + uVar59 * 0x30 + 0x24);
        if (uVar41 != 0) {
          uVar32 = (ulong)*(uint *)(lVar4 + uVar59 * 0x30 + 0x28);
          pauVar48 = (undefined1 (*) [16])(lVar4 + (ulong)uVar41 * 0x30);
          auVar83 = *pauVar48;
          pauVar50 = (undefined1 (*) [16])(lVar4 + uVar32 * 0x30);
          auVar84 = pauVar48[1];
          auVar90 = *pauVar50;
          auVar95 = pauVar50[1];
          if ((*(uint *)(pauVar48[2] + 4) != 0) &&
             (puVar60 = (uint *)(lVar4 + uVar32 * 0x30 + 0x24), *puVar60 != 0)) {
            local_1e0[0] = (undefined1 (*) [16])(lVar4 + (ulong)*(uint *)(pauVar48[2] + 4) * 0x30);
            auVar80._0_4_ = auVar84._0_4_ - auVar83._0_4_;
            auVar80._4_4_ = auVar84._4_4_ - auVar83._4_4_;
            auVar80._8_4_ = auVar84._8_4_ - auVar83._8_4_;
            auVar80._12_4_ = auVar84._12_4_ - auVar83._12_4_;
            local_1e0[2] = (undefined1 (*) [16])(lVar4 + (ulong)*puVar60 * 0x30);
            auVar67._0_4_ = auVar95._0_4_ - auVar90._0_4_;
            auVar67._4_4_ = auVar95._4_4_ - auVar90._4_4_;
            auVar67._8_4_ = auVar95._8_4_ - auVar90._8_4_;
            auVar67._12_4_ = auVar95._12_4_ - auVar90._12_4_;
            auVar79._8_8_ = uVar25;
            auVar79._0_8_ = uVar24;
            auVar84 = a64_TBL(ZEXT816(0),auVar80,auVar79);
            auVar13._8_8_ = uVar25;
            auVar13._0_8_ = uVar24;
            auVar83 = a64_TBL(ZEXT816(0),auVar67,auVar13);
            auVar81._0_4_ = (auVar80._0_4_ + auVar80._0_4_) * auVar84._0_4_;
            auVar81._4_4_ = (auVar80._4_4_ + auVar80._4_4_) * auVar84._4_4_;
            auVar81._8_4_ = (auVar80._8_4_ + auVar80._8_4_) * auVar84._8_4_;
            auVar81._12_4_ = (auVar80._12_4_ + auVar80._12_4_) * auVar84._12_4_;
            auVar68._0_4_ = (auVar67._0_4_ + auVar67._0_4_) * auVar83._0_4_;
            auVar68._4_4_ = (auVar67._4_4_ + auVar67._4_4_) * auVar83._4_4_;
            auVar68._8_4_ = (auVar67._8_4_ + auVar67._8_4_) * auVar83._8_4_;
            auVar68._12_4_ = (auVar67._12_4_ + auVar67._12_4_) * auVar83._12_4_;
            auVar100 = NEON_fmax(local_1e0[0][1],local_1e0[2][1],4);
            puVar58 = (uint *)(lVar4 + (ulong)uVar41 * 0x30 + 0x28);
            local_1e0[1] = (undefined1 (*) [16])(lVar4 + (ulong)*puVar58 * 0x30);
            auVar79 = NEON_fmin(*local_1e0[0],*local_1e0[2],4);
            puVar55 = (uint *)(lVar4 + uVar32 * 0x30 + 0x28);
            local_1e0[3] = (undefined1 (*) [16])(lVar4 + (ulong)*puVar55 * 0x30);
            auVar84 = NEON_fmax(local_1e0[0][1],local_1e0[3][1],4);
            auVar83 = NEON_fmin(*local_1e0[0],*local_1e0[3],4);
            uStack_188 = auVar79._8_8_;
            local_190 = auVar79._0_8_;
            auStack_178[0] = auVar100._8_8_;
            local_180 = auVar100._0_8_;
            auStack_178[6] = auVar83._8_8_;
            auStack_178[5] = auVar83._0_8_;
            auStack_178[8] = auVar84._8_8_;
            auStack_178[7] = auVar84._0_8_;
            auVar74._0_4_ = auVar84._0_4_ - auVar83._0_4_;
            auVar74._4_4_ = auVar84._4_4_ - auVar83._4_4_;
            auVar74._8_4_ = auVar84._8_4_ - auVar83._8_4_;
            auVar74._12_4_ = auVar84._12_4_ - auVar83._12_4_;
            auVar103 = NEON_fmin(*local_1e0[1],*local_1e0[3],4);
            auVar93 = NEON_ext(auVar81,auVar81,8,1);
            auVar84 = NEON_fmin(*local_1e0[1],*local_1e0[2],4);
            auVar95 = NEON_ext(auVar68,auVar68,8,1);
            auVar99 = NEON_fmax(local_1e0[1][1],local_1e0[3][1],4);
            auVar14._8_8_ = uVar25;
            auVar14._0_8_ = uVar24;
            auVar83 = a64_TBL(ZEXT816(0),auVar74,auVar14);
            auVar90 = NEON_fmax(local_1e0[1][1],local_1e0[2][1],4);
            auVar97._0_4_ = auVar100._0_4_ - auVar79._0_4_;
            auVar97._4_4_ = auVar100._4_4_ - auVar79._4_4_;
            auVar97._8_4_ = auVar100._8_4_ - auVar79._8_4_;
            auVar97._12_4_ = auVar100._12_4_ - auVar79._12_4_;
            auStack_178[10] = auVar84._8_8_;
            auStack_178[9] = auVar84._0_8_;
            uStack_118 = auVar90._8_8_;
            auStack_178[0xb] = auVar90._0_8_;
            auVar15._8_8_ = uVar25;
            auVar15._0_8_ = uVar24;
            auVar79 = a64_TBL(ZEXT816(0),auVar97,auVar15);
            auVar82._0_4_ = auVar99._0_4_ - auVar103._0_4_;
            auVar82._4_4_ = auVar99._4_4_ - auVar103._4_4_;
            auVar82._8_4_ = auVar99._8_4_ - auVar103._8_4_;
            auVar82._12_4_ = auVar99._12_4_ - auVar103._12_4_;
            auVar85._0_4_ = auVar90._0_4_ - auVar84._0_4_;
            auVar85._4_4_ = auVar90._4_4_ - auVar84._4_4_;
            auVar85._8_4_ = auVar90._8_4_ - auVar84._8_4_;
            auVar85._12_4_ = auVar90._12_4_ - auVar84._12_4_;
            auVar16._8_8_ = uVar25;
            auVar16._0_8_ = uVar24;
            auVar84 = a64_TBL(ZEXT816(0),auVar85,auVar16);
            auVar17._8_8_ = uVar25;
            auVar17._0_8_ = uVar24;
            auVar90 = a64_TBL(ZEXT816(0),auVar82,auVar17);
            auStack_178[2] = auVar103._8_8_;
            auStack_178[1] = auVar103._0_8_;
            auStack_178[4] = auVar99._8_8_;
            auStack_178[3] = auVar99._0_8_;
            bVar7 = (auVar97._0_4_ + auVar97._0_4_) * auVar79._0_4_ +
                    (auVar97._4_4_ + auVar97._4_4_) * auVar79._4_4_ +
                    (auVar97._8_4_ + auVar97._8_4_) * auVar79._8_4_ +
                    (auVar82._0_4_ + auVar82._0_4_) * auVar90._0_4_ +
                    (auVar82._4_4_ + auVar82._4_4_) * auVar90._4_4_ +
                    (auVar82._8_4_ + auVar82._8_4_) * auVar90._8_4_ <
                    (auVar74._0_4_ + auVar74._0_4_) * auVar83._0_4_ +
                    (auVar74._4_4_ + auVar74._4_4_) * auVar83._4_4_ +
                    (auVar74._8_4_ + auVar74._8_4_) * auVar83._8_4_ +
                    (auVar85._0_4_ + auVar85._0_4_) * auVar84._0_4_ +
                    (auVar85._4_4_ + auVar85._4_4_) * auVar84._4_4_ +
                    (auVar85._8_4_ + auVar85._8_4_) * auVar84._8_4_;
            uVar32 = (ulong)(byte)~bVar7;
            if (*(float *)(local_1e0 + (uVar32 - 2)) <
                auVar81._0_4_ + auVar81._4_4_ + auVar93._0_4_ +
                auVar68._0_4_ + auVar68._4_4_ + auVar95._0_4_) {
              lVar6 = uVar32 * 0xc;
              lVar4 = 0;
              if (lVar31 != 0) {
                lVar4 = lVar34;
              }
              iVar29 = *(int *)(&DAT_03d6c404 + lVar6);
              iVar77 = *(int *)(&DAT_03d6c408 + lVar6);
              iVar78 = *(int *)(&DAT_03d6c40c + lVar6);
              *puVar58 = (int)((ulong)((long)local_1e0[iVar29] - lVar4) >> 4) * -0x55555555;
              lVar31 = 0;
              if (*param_1 != 0) {
                lVar31 = *param_1 + (long)param_1;
              }
              *puVar60 = (int)((ulong)((long)local_1e0[iVar77] - lVar31) >> 4) * -0x55555555;
              lVar31 = 0;
              if (*param_1 != 0) {
                lVar31 = *param_1 + (long)param_1;
              }
              *puVar55 = (int)((ulong)((long)local_1e0[iVar78] - lVar31) >> 4) * -0x55555555;
              lVar31 = 0;
              if (*param_1 != 0) {
                lVar31 = *param_1 + (long)param_1;
              }
              *(int *)local_1e0[iVar29][2] =
                   (int)((ulong)((long)pauVar48 - lVar31) >> 4) * -0x55555555;
              lVar31 = 0;
              if (*param_1 != 0) {
                lVar31 = *param_1 + (long)param_1;
              }
              *(int *)local_1e0[iVar77][2] =
                   (int)((ulong)((long)pauVar50 - lVar31) >> 4) * -0x55555555;
              lVar31 = 0;
              if (*param_1 != 0) {
                lVar31 = *param_1 + (long)param_1;
              }
              uVar41 = 0;
              if (!bVar7) {
                uVar41 = 2;
              }
              uVar32 = (ulong)uVar41;
              *(int *)local_1e0[iVar78][2] =
                   (int)((ulong)((long)pauVar50 - lVar31) >> 4) * -0x55555555;
              uVar23 = auStack_178[uVar32 * 4 + -3];
              *(undefined8 *)(*pauVar48 + 8) = auStack_178[uVar32 * 4 + -2];
              *(undefined8 *)*pauVar48 = uVar23;
              uVar23 = auStack_178[uVar32 * 4 + -1];
              uVar47 = (ulong)(uVar41 | 1);
              *(undefined8 *)(pauVar48[1] + 8) = auStack_178[uVar32 * 4];
              *(undefined8 *)pauVar48[1] = uVar23;
              uVar23 = auStack_178[uVar47 * 4 + -3];
              bVar28 = true;
              *(undefined8 *)(*pauVar50 + 8) = auStack_178[uVar47 * 4 + -2];
              *(undefined8 *)*pauVar50 = uVar23;
              auVar83 = *(undefined1 (*) [16])(auStack_178 + uVar47 * 4 + -1);
              *(long *)(pauVar50[1] + 8) = auVar83._8_8_;
              *(long *)pauVar50[1] = auVar83._0_8_;
            }
            lVar31 = *param_1;
            lVar34 = lVar31 + (long)param_1;
          }
        }
        lVar4 = 0;
        if (lVar31 != 0) {
          lVar4 = lVar34;
        }
        uVar41 = *(uint *)(lVar4 + uVar59 * 0x30 + 0x24);
        if (uVar41 == 0) {
          do {
            uVar44 = *(uint *)(lVar4 + uVar59 * 0x30 + 0x20);
            uVar46 = (uint)uVar59;
            if (uVar44 == local_304) {
              bVar26 = 1;
              uVar44 = local_304;
              goto LAB_02ed5d30;
            }
            uVar59 = (ulong)uVar44;
          } while (*(uint *)(lVar4 + (ulong)uVar44 * 0x30 + 0x28) == uVar46);
          bVar26 = 0;
LAB_02ed5d30:
          uVar41 = uVar46;
          if (uVar44 != 0) {
            uVar41 = *(uint *)(lVar4 + (ulong)uVar44 * 0x30 + 0x28);
          }
          if ((bool)(bVar26 & uVar41 == uVar46)) break;
        }
        uVar59 = (ulong)uVar41;
      }
      lVar34 = lVar31 + (long)param_1;
      lVar4 = 0;
      if (lVar31 != 0) {
        lVar4 = lVar34;
      }
      uVar41 = *(uint *)(lVar4 + (ulong)local_304 * 0x30 + 0x24);
      uVar59 = (ulong)uVar41;
    } while (bVar28);
    while (uVar41 != 0) {
      lVar34 = lVar31 + (long)param_1;
      lVar4 = 0;
      if (lVar31 != 0) {
        lVar4 = lVar34;
      }
      puVar60 = (uint *)(lVar4 + uVar59 * 0x30 + 0x24);
      uVar41 = *puVar60;
      if (uVar41 != 0) {
        puVar55 = (uint *)(lVar4 + uVar59 * 0x30 + 0x28);
        uVar44 = *puVar55;
        pfVar53 = (float *)(lVar4 + (ulong)uVar41 * 0x30);
        pfVar51 = (float *)(lVar4 + (ulong)uVar44 * 0x30);
        auVar69._0_4_ = pfVar53[4] - *pfVar53;
        auVar69._4_4_ = pfVar53[5] - pfVar53[1];
        auVar69._8_4_ = pfVar53[6] - pfVar53[2];
        auVar69._12_4_ = pfVar53[7] - pfVar53[3];
        auVar18._8_8_ = uVar25;
        auVar18._0_8_ = uVar24;
        auVar83 = a64_TBL(ZEXT816(0),auVar69,auVar18);
        auVar70._0_4_ = (auVar69._0_4_ + auVar69._0_4_) * auVar83._0_4_;
        auVar70._4_4_ = (auVar69._4_4_ + auVar69._4_4_) * auVar83._4_4_;
        auVar70._8_4_ = (auVar69._8_4_ + auVar69._8_4_) * auVar83._8_4_;
        auVar70._12_4_ = (auVar69._12_4_ + auVar69._12_4_) * auVar83._12_4_;
        auVar84 = NEON_ext(auVar70,auVar70,8,1);
        auVar75._0_4_ = pfVar51[4] - *pfVar51;
        auVar75._4_4_ = pfVar51[5] - pfVar51[1];
        auVar75._8_4_ = pfVar51[6] - pfVar51[2];
        auVar75._12_4_ = pfVar51[7] - pfVar51[3];
        auVar19._8_8_ = uVar25;
        auVar19._0_8_ = uVar24;
        auVar83 = a64_TBL(ZEXT816(0),auVar75,auVar19);
        auVar76._0_4_ = (auVar75._0_4_ + auVar75._0_4_) * auVar83._0_4_;
        auVar76._4_4_ = (auVar75._4_4_ + auVar75._4_4_) * auVar83._4_4_;
        auVar76._8_4_ = (auVar75._8_4_ + auVar75._8_4_) * auVar83._8_4_;
        auVar76._12_4_ = (auVar75._12_4_ + auVar75._12_4_) * auVar83._12_4_;
        auVar83 = NEON_ext(auVar76,auVar76,8,1);
        if (auVar70._0_4_ + auVar70._4_4_ + auVar84._0_4_ <
            auVar76._0_4_ + auVar76._4_4_ + auVar83._0_4_) {
          *puVar60 = uVar44;
          *puVar55 = uVar41;
          lVar31 = *param_1;
          lVar34 = lVar31 + (long)param_1;
        }
      }
      lVar4 = 0;
      if (lVar31 != 0) {
        lVar4 = lVar34;
      }
      uVar41 = *(uint *)(lVar4 + uVar59 * 0x30 + 0x24);
      if (uVar41 == 0) {
        do {
          uVar44 = *(uint *)(lVar4 + uVar59 * 0x30 + 0x20);
          uVar46 = (uint)uVar59;
          if (uVar44 == local_304) {
            bVar26 = 1;
            uVar44 = local_304;
            goto LAB_02ed5e4c;
          }
          uVar59 = (ulong)uVar44;
        } while (*(uint *)(lVar4 + (ulong)uVar44 * 0x30 + 0x28) == uVar46);
        bVar26 = 0;
LAB_02ed5e4c:
        uVar41 = uVar46;
        if (uVar44 != 0) {
          uVar41 = *(uint *)(lVar4 + (ulong)uVar44 * 0x30 + 0x28);
        }
        if ((bool)(bVar26 & uVar41 == uVar46)) break;
      }
      uVar59 = (ulong)uVar41;
    }
  }
  lVar4 = 0;
  if (lVar31 != 0) {
    lVar4 = lVar34;
  }
  *(uint *)(lVar4 + (ulong)local_304 * 0x30 + 0x20) = uVar5;
  if (uVar5 == 0) {
    *(uint *)((long)param_1 + 0x1c) = local_304;
  }
  else {
    lVar31 = 0;
    if (*param_1 != 0) {
      lVar31 = *param_1 + (long)param_1;
    }
    *(uint *)(lVar31 + uVar42 * 0x30 + local_358 * 4 + 0x24) = local_304;
    lVar31 = *param_1;
    do {
      lVar34 = 0;
      if (lVar31 != 0) {
        lVar34 = lVar31 + (long)param_1;
      }
      puVar35 = (undefined8 *)(lVar34 + uVar42 * 0x30);
      pauVar50 = (undefined1 (*) [16])(lVar34 + (ulong)*(uint *)((long)puVar35 + 0x24) * 0x30);
      pauVar48 = (undefined1 (*) [16])(lVar34 + (ulong)*(uint *)(puVar35 + 5) * 0x30);
      auVar84 = NEON_fmax(pauVar50[1],pauVar48[1],4);
      auVar83 = NEON_fmin(*pauVar50,*pauVar48,4);
      puVar35[1] = auVar83._8_8_;
      *puVar35 = auVar83._0_8_;
      puVar35[3] = auVar84._8_8_;
      puVar35[2] = auVar84._0_8_;
      lVar31 = *param_1;
      lVar34 = 0;
      if (lVar31 != 0) {
        lVar34 = lVar31 + (long)param_1;
      }
      uVar5 = *(uint *)(lVar34 + uVar42 * 0x30 + 0x20);
      uVar42 = (ulong)uVar5;
    } while (uVar5 != 0);
  }
  bVar28 = true;
LAB_02ed5f20:
  if ((int)local_198 != 0) {
    lVar31 = (long)(int)local_198 << 6;
    do {
      lVar34 = lVar30 + lVar31;
      *(undefined4 *)(lVar34 + -0x38) = 0;
      if ((-1 < (int)*(uint *)(lVar34 + -0x34)) && (*(long *)(lVar34 + -0x40) != 0)) {
        (**(code **)(*plVar63 + 0x20))
                  (plVar63,*(long *)(lVar34 + -0x40),(ulong)*(uint *)(lVar34 + -0x34) << 2);
      }
      lVar31 = lVar31 + -0x40;
      *(undefined8 *)(lVar34 + -0x40) = 0;
      *(undefined4 *)(lVar34 + -0x34) = 0x80000000;
    } while (lVar31 != 0);
  }
  lVar30 = local_198;
  uVar59 = (ulong)local_198._4_4_;
  local_198 = (ulong)local_198._4_4_ << 0x20;
  if ((-1 < lVar30) && (local_1a0 != 0)) {
    (**(code **)(*plVar63 + 0x20))(plVar63,local_1a0,uVar59 << 6);
  }
  lVar30 = local_1b0;
  local_1a0 = 0;
  local_198 = CONCAT44(0x80000000,(int)local_198);
  if ((int)local_1a8 != 0) {
    lVar31 = (long)(int)local_1a8 << 6;
    do {
      lVar34 = lVar30 + lVar31;
      *(undefined4 *)(lVar34 + -0x38) = 0;
      if ((-1 < (int)*(uint *)(lVar34 + -0x34)) && (*(long *)(lVar34 + -0x40) != 0)) {
        (**(code **)(*plVar63 + 0x20))
                  (plVar63,*(long *)(lVar34 + -0x40),(ulong)*(uint *)(lVar34 + -0x34) << 2);
      }
      lVar31 = lVar31 + -0x40;
      *(undefined8 *)(lVar34 + -0x40) = 0;
      *(undefined4 *)(lVar34 + -0x34) = 0x80000000;
    } while (lVar31 != 0);
  }
  lVar30 = local_1a8;
  uVar59 = (ulong)local_1a8._4_4_;
  local_1a8 = (ulong)local_1a8._4_4_ << 0x20;
  if ((-1 < lVar30) && (local_1b0 != 0)) {
    (**(code **)(*plVar63 + 0x20))(plVar63,local_1b0,uVar59 << 6);
  }
  pauVar48 = local_1c0;
  local_1b0 = 0;
  local_1a8 = CONCAT44(0x80000000,(int)local_1a8);
  if ((int)local_1b8 != 0) {
    lVar30 = (long)(int)local_1b8 << 6;
    do {
      uVar5 = *(uint *)(pauVar48[-4] + lVar30 + 0xc);
      *(undefined4 *)(pauVar48[-4] + lVar30 + 8) = 0;
      if ((-1 < (int)uVar5) && (*(long *)(pauVar48[-4] + lVar30) != 0)) {
        (**(code **)(*plVar63 + 0x20))(plVar63,*(long *)(pauVar48[-4] + lVar30),(ulong)uVar5 << 2);
      }
      lVar31 = lVar30 + -0x40;
      *(undefined8 *)(pauVar48[-4] + lVar30) = 0;
      *(undefined4 *)(pauVar48[-4] + lVar30 + 0xc) = 0x80000000;
      lVar30 = lVar31;
    } while (lVar31 != 0);
  }
  lVar30 = local_1b8;
  uVar59 = (ulong)local_1b8._4_4_;
  local_1b8 = (ulong)local_1b8._4_4_ << 0x20;
  if ((-1 < lVar30) && (local_1c0 != (undefined1 (*) [16])0x0)) {
    (**(code **)(*plVar63 + 0x20))(plVar63,local_1c0,uVar59 << 6);
  }
  plVar37 = local_78;
  if ((int)local_70 != 0) {
    lVar30 = (long)(int)local_70 * 0x18;
    do {
      uVar5 = *(uint *)((long)plVar37 + lVar30 + -0xc);
      *(undefined4 *)((long)plVar37 + lVar30 + -0x10) = 0;
      if ((-1 < (int)uVar5) && (lVar31 = *(long *)((long)plVar37 + lVar30 + -0x18), lVar31 != 0)) {
        (**(code **)(*plVar63 + 0x20))(plVar63,lVar31,(ulong)uVar5 << 2);
      }
      lVar31 = lVar30 + -0x18;
      *(undefined8 *)((long)plVar37 + lVar30 + -0x18) = 0;
      *(undefined4 *)((long)plVar37 + lVar30 + -0xc) = 0x80000000;
      lVar30 = lVar31;
    } while (lVar31 != 0);
  }
  uVar5 = local_70._4_4_;
  uVar59 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (int)uVar5) && (local_78 != (long *)0x0)) {
    (**(code **)(*plVar63 + 0x20))(plVar63,local_78,uVar59 * 0x18);
  }
  if (!bVar28) {
    return 0x80040200;
  }
  return 0;
}


