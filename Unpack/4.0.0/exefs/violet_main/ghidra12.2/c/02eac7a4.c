/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eac7a4; name: FUN_02eac7a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02eac7a4(long *param_1,ushort param_2)

{
  undefined1 (**ppauVar1) [16];
  long *plVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  undefined2 uVar7;
  ushort uVar8;
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
  undefined4 uVar23;
  undefined1 (*pauVar24) [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  undefined1 (*pauVar34) [16];
  undefined8 *puVar35;
  ushort *puVar36;
  long *plVar37;
  long *plVar38;
  undefined1 (*pauVar39) [16];
  undefined2 *puVar40;
  undefined2 *puVar41;
  long *plVar42;
  undefined2 *puVar43;
  ulong uVar44;
  uint uVar45;
  ulong uVar46;
  ulong uVar47;
  uint *puVar48;
  int *piVar49;
  undefined1 (*pauVar50) [16];
  uint uVar51;
  undefined1 (*pauVar52) [16];
  long lVar53;
  ulong uVar54;
  ushort uVar55;
  uint uVar56;
  ushort uVar57;
  ulong uVar58;
  ulong uVar59;
  byte bVar60;
  uint uVar61;
  bool bVar62;
  int iVar63;
  ushort **ppuVar64;
  long *plVar65;
  undefined2 *puVar66;
  undefined1 (*pauVar67) [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined4 uVar79;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  int iVar80;
  int iVar90;
  undefined1 auVar81 [12];
  undefined1 auVar82 [12];
  int iVar89;
  undefined8 uVar91;
  undefined1 auVar83 [16];
  int iVar92;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar93;
  float fVar104;
  float fVar105;
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
  float fVar106;
  float fVar109;
  float fVar110;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar111 [12];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar117;
  float fVar121;
  float fVar122;
  undefined1 auVar119 [16];
  float fVar118;
  undefined1 auVar120 [16];
  float fVar123;
  float fVar127;
  float fVar128;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  ulong local_600;
  float local_5f0;
  float fStack_5ec;
  float fStack_5e8;
  float fStack_5e4;
  ushort *local_4d8;
  undefined8 local_4d0;
  ushort local_4c8;
  int local_4c4;
  undefined1 (*local_4c0) [16];
  undefined8 local_4b8;
  long local_4b0;
  undefined8 local_4a8;
  long local_4a0;
  undefined8 local_498;
  long *local_490;
  undefined8 local_488;
  undefined1 (*local_480 [64]) [16];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 auStack_270 [4];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  
  if (param_2 == 0) {
    return;
  }
  if (*(uint *)((long)param_1 + 0x14) < 3) {
    return;
  }
  lVar30 = 0;
  if (*param_1 != 0) {
    lVar30 = *param_1 + (long)param_1;
  }
  if (*(short *)(lVar30 + (ulong)param_2 * 0x20 + 0x1c) == 0) {
    return;
  }
  local_490 = (long *)0x0;
  local_488 = 0x8000000000000000;
  FUN_02eaebf4(&local_490,0x10);
  lVar30 = (long)(int)local_488;
  plVar42 = local_490 + lVar30 * 3;
  plVar38 = plVar42 + 3;
  do {
    *plVar42 = 0;
    plVar42[1] = -0x8000000000000000;
    *(undefined2 *)(plVar42 + 2) = 0;
    *(undefined4 *)((long)plVar42 + 0x14) = 0xffffffff;
    plVar42 = plVar42 + 3;
  } while (plVar42 != plVar38);
  *(undefined4 *)(local_490 + lVar30 * 3 + 1) = 0;
  local_490[lVar30 * 3 + 2] = -0x100000000;
  lVar31 = *param_1;
  lVar30 = 0;
  if (lVar31 != 0) {
    lVar30 = lVar31 + (long)param_1;
  }
  uVar56 = *(uint *)(lVar30 + (ulong)param_2 * 0x20 + 0xc);
  uVar46 = (ulong)uVar56 & 0xffff;
  if ((uVar56 & 0xffff) == 0) {
    local_600 = 0;
  }
  else {
    local_600 = (ulong)(*(ushort *)(lVar30 + uVar46 * 0x20 + 0x1e) == param_2);
  }
  local_280 = (undefined1 (*) [16])auStack_270;
  uStack_278 = -0x7fffffc000000000;
  local_488._0_4_ = (int)local_488 + 1;
  do {
    plVar38 = local_490;
    lVar30 = 0;
    if (lVar31 != 0) {
      lVar30 = lVar31 + (long)param_1;
    }
    lVar30 = lVar30 + (ulong)param_2 * 0x20;
    if (*(ushort *)(lVar30 + 0x1c) == 0) {
      iVar80 = (int)local_490[1];
      uVar56 = *(uint *)((long)local_490 + 0xc) & 0x7fffffff;
      if ((int)uVar56 <= iVar80) {
        FUN_02eaee40(local_490,PTR_PTR_047d1a50,(long)iVar80 + 1);
        iVar80 = (int)plVar38[1];
        uVar56 = *(uint *)((long)plVar38 + 0xc) & 0x7fffffff;
      }
      iVar89 = iVar80 + 1;
      if ((int)uVar56 <= iVar80) {
        FUN_02eaee40(plVar38,PTR_PTR_047d1a50,(long)iVar89);
        iVar80 = (int)plVar38[1];
      }
      lVar30 = uStack_278;
      *(ushort *)(*plVar38 + (long)iVar80 * 2) = param_2;
      *(int *)(plVar38 + 1) = iVar89;
      if ((int)uStack_278 == 0) break;
      param_2 = *(ushort *)(*local_280 + (long)((int)uStack_278 + -1) * 2);
      uStack_278 = CONCAT44(uStack_278._4_4_,(int)uStack_278 + -1);
    }
    else {
      uVar56 = uStack_278._4_4_ & 0x7fffffff;
      if ((int)uVar56 <= (int)uStack_278) {
        FUN_02eaee40(&local_280,PTR_PTR_047d1a50,(long)(int)uStack_278 + 1);
        uVar56 = uStack_278._4_4_ & 0x7fffffff;
      }
      uVar7 = *(undefined2 *)(lVar30 + 0x1e);
      iVar80 = (int)uStack_278 + 1;
      iVar89 = (int)uStack_278;
      if ((int)uVar56 <= (int)uStack_278) {
        FUN_02eaee40(&local_280,PTR_PTR_047d1a50,(long)iVar80);
        iVar89 = (int)uStack_278;
      }
      *(undefined2 *)(*local_280 + (long)iVar89 * 2) = uVar7;
      uStack_278 = CONCAT44(uStack_278._4_4_,iVar80);
      lVar31 = *param_1 + (long)param_1;
      param_2 = *(ushort *)(lVar30 + 0x1c);
      lVar33 = 0;
      if (*param_1 != 0) {
        lVar33 = lVar31;
      }
      *(short *)(lVar31 + ((ulong)(lVar30 - lVar33) >> 5 & 0xffff) * 0x20) = (short)param_1[2];
      *(short *)(param_1 + 2) = (short)((ulong)(lVar30 - lVar33) >> 5);
    }
    lVar31 = *param_1;
  } while( true );
  uVar32 = (ulong)uStack_278._4_4_;
  uStack_278 = (ulong)uStack_278._4_4_ << 0x20;
  if ((-1 < lVar30) && (local_280 != (undefined1 (*) [16])0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_280,uVar32 << 1);
  }
  local_4c0 = (undefined1 (*) [16])0x0;
  local_4b8 = 0x8000000000000000;
  local_4b0 = 0;
  local_4a8 = 0x8000000000000000;
  local_4a0 = 0;
  local_498 = 0x8000000000000000;
  FUN_02eaef50(&local_4c0);
  pauVar67 = local_4c0;
  iVar80 = (int)local_4b8;
  uVar32 = (ulong)(int)local_4b8;
  if ((int)local_4b8 < 0x20) {
    local_4b8 = CONCAT44(local_4b8._4_4_,0x20);
    if ((uVar32 & 1) != 0) {
      *(undefined8 *)local_4c0[uVar32 * 4] = 0;
      *(undefined8 *)(local_4c0[uVar32 * 4] + 8) = 0x8000000000000000;
      uVar32 = uVar32 + 1;
    }
    if (iVar80 != 0x1f) {
      lVar30 = uVar32 - 0x20;
      pauVar67 = local_4c0 + uVar32 * 4 + 4;
      do {
        *(undefined8 *)pauVar67[-4] = 0;
        *(undefined8 *)(pauVar67[-4] + 8) = 0x8000000000000000;
        lVar30 = lVar30 + 2;
        *(undefined8 *)*pauVar67 = 0;
        *(undefined8 *)(*pauVar67 + 8) = 0x8000000000000000;
        pauVar67 = pauVar67 + 8;
      } while (lVar30 != 0);
    }
  }
  else {
    uVar32 = local_4b8 & 0xffffffff;
    if ((int)local_4b8 != 0x20) {
      local_4b8 = CONCAT44(local_4b8._4_4_,0x20);
      lVar30 = uVar32 << 6;
      do {
        uVar56 = *(uint *)(pauVar67[-4] + lVar30 + 0xc);
        *(undefined4 *)(pauVar67[-4] + lVar30 + 8) = 0;
        if ((-1 < (int)uVar56) && (*(long *)(pauVar67[-4] + lVar30) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(pauVar67[-4] + lVar30),(ulong)uVar56 << 1);
        }
        lVar31 = lVar30 + -0x40;
        *(undefined8 *)(pauVar67[-4] + lVar30) = 0;
        *(undefined4 *)(pauVar67[-4] + lVar30 + 0xc) = 0x80000000;
        lVar30 = lVar31;
      } while (lVar31 != 0x800);
    }
  }
  if ((local_4a8 & 0x7fffffe000000000) == 0) {
    FUN_02eaef50(&local_4b0);
  }
  lVar30 = local_4b0;
  iVar80 = (int)local_4a8;
  uVar32 = (ulong)(int)local_4a8;
  if ((int)local_4a8 < 0x20) {
    local_4a8 = CONCAT44(local_4a8._4_4_,0x20);
    if ((uVar32 & 1) != 0) {
      puVar35 = (undefined8 *)(local_4b0 + uVar32 * 0x40);
      *puVar35 = 0;
      puVar35[1] = 0x8000000000000000;
      uVar32 = uVar32 + 1;
    }
    if (iVar80 != 0x1f) {
      lVar30 = uVar32 - 0x20;
      puVar35 = (undefined8 *)(local_4b0 + uVar32 * 0x40 + 0x40);
      do {
        puVar35[-8] = 0;
        puVar35[-7] = 0x8000000000000000;
        lVar30 = lVar30 + 2;
        *puVar35 = 0;
        puVar35[1] = 0x8000000000000000;
        puVar35 = puVar35 + 0x10;
      } while (lVar30 != 0);
    }
  }
  else if ((int)local_4a8 != 0x20) {
    lVar31 = (local_4a8 & 0xffffffff) << 6;
    local_4a8 = CONCAT44(local_4a8._4_4_,0x20);
    do {
      lVar33 = lVar30 + lVar31;
      *(undefined4 *)(lVar33 + -0x38) = 0;
      if ((-1 < (int)*(uint *)(lVar33 + -0x34)) && (*(long *)(lVar33 + -0x40) != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,*(long *)(lVar33 + -0x40),(ulong)*(uint *)(lVar33 + -0x34) << 1)
        ;
      }
      lVar31 = lVar31 + -0x40;
      *(undefined8 *)(lVar33 + -0x40) = 0;
      *(undefined4 *)(lVar33 + -0x34) = 0x80000000;
    } while (lVar31 != 0x800);
  }
  if ((local_498 & 0x7fffffe000000000) == 0) {
    FUN_02eaef50(&local_4a0);
  }
  lVar30 = local_4a0;
  iVar80 = (int)local_498;
  uVar32 = (ulong)(int)local_498;
  if ((int)local_498 < 0x20) {
    local_498 = CONCAT44(local_498._4_4_,0x20);
    if ((uVar32 & 1) != 0) {
      puVar35 = (undefined8 *)(local_4a0 + uVar32 * 0x40);
      *puVar35 = 0;
      puVar35[1] = 0x8000000000000000;
      uVar32 = uVar32 + 1;
    }
    if (iVar80 != 0x1f) {
      lVar30 = uVar32 - 0x20;
      puVar35 = (undefined8 *)(local_4a0 + uVar32 * 0x40 + 0x40);
      do {
        puVar35[-8] = 0;
        puVar35[-7] = 0x8000000000000000;
        lVar30 = lVar30 + 2;
        *puVar35 = 0;
        puVar35[1] = 0x8000000000000000;
        puVar35 = puVar35 + 0x10;
      } while (lVar30 != 0);
    }
  }
  else if ((int)local_498 != 0x20) {
    lVar31 = (local_498 & 0xffffffff) << 6;
    local_498 = CONCAT44(local_498._4_4_,0x20);
    do {
      lVar33 = lVar30 + lVar31;
      *(undefined4 *)(lVar33 + -0x38) = 0;
      if ((-1 < (int)*(uint *)(lVar33 + -0x34)) && (*(long *)(lVar33 + -0x40) != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,*(long *)(lVar33 + -0x40),(ulong)*(uint *)(lVar33 + -0x34) << 1)
        ;
      }
      lVar31 = lVar31 + -0x40;
      *(undefined8 *)(lVar33 + -0x40) = 0;
      *(undefined4 *)(lVar33 + -0x34) = 0x80000000;
    } while (lVar31 != 0x800);
  }
  uVar28 = _UNK_03cabbd8;
  uVar27 = _DAT_03cabbd0;
  auVar94 = NEON_fmov(0x3f800000,4);
  auVar108._8_4_ = 0xff7fffee;
  auVar108._0_8_ = 0xff7fffeeff7fffee;
  auVar108._12_4_ = 0xff7fffee;
  auVar112._8_4_ = 0x7f7fffee;
  auVar112._0_8_ = 0x7f7fffee7f7fffee;
  auVar112._12_4_ = 0x7f7fffee;
  auVar95 = NEON_fmov(0x41f80000,4);
  uVar32 = 0;
  auVar120._8_8_ = auVar108._8_8_;
  uVar91 = auVar112._8_8_;
  do {
    puVar29 = PTR_PTR_047d1a50;
    local_4c4 = 0xffffffff;
    lVar31 = (long)(int)local_488;
    lVar30 = lVar31 + -1;
    ppuVar64 = (ushort **)(plVar38 + lVar30 * 3);
    local_4d8 = (ushort *)0x0;
    local_4d0 = 0x8000000000000000;
    local_4c8 = 0;
    if (ppuVar64 != &local_4d8) {
      FUN_02eaedd0(&local_4d8,PTR_PTR_047d1a50);
      FUN_02eaedd0(ppuVar64,puVar29);
      puVar36 = *ppuVar64;
      *ppuVar64 = local_4d8;
      lVar33 = plVar38[lVar30 * 3 + 1];
      auVar112._8_8_ = uVar91;
      auVar112._0_8_ = 0x7f7fffee7f7fffee;
      auVar108._8_8_ = auVar120._8_8_;
      auVar108._0_8_ = 0xff7fffeeff7fffee;
      uVar22 = local_4d0._4_4_;
      *(int *)(plVar38 + lVar30 * 3 + 1) = (int)local_4d0;
      local_4d0 = CONCAT44(*(undefined4 *)((long)plVar38 + lVar30 * 0x18 + 0xc),(int)lVar33);
      *(undefined4 *)((long)plVar38 + lVar30 * 0x18 + 0xc) = uVar22;
      local_4d8 = puVar36;
    }
    local_4c8 = *(ushort *)(plVar38 + lVar30 * 3 + 2);
    local_4c4 = *(int *)((long)plVar38 + lVar30 * 0x18 + 0x14);
    *(undefined4 *)(plVar38 + lVar31 * 3 + -2) = 0;
    uVar56 = *(uint *)((long)plVar38 + lVar31 * 0x18 + -0xc);
    if ((-1 < (int)uVar56) && (plVar38[lVar31 * 3 + -3] != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,plVar38[lVar31 * 3 + -3],(ulong)uVar56 << 1);
      auVar112._8_8_ = uVar91;
      auVar112._0_8_ = 0x7f7fffee7f7fffee;
      auVar108._8_8_ = auVar120._8_8_;
      auVar108._0_8_ = 0xff7fffeeff7fffee;
    }
    plVar38[lVar31 * 3 + -3] = 0;
    *(undefined4 *)((long)plVar38 + lVar31 * 0x18 + -0xc) = 0x80000000;
    local_488._0_4_ = (int)lVar30;
    if (((int)local_4d0 < 0x11) && (uVar47 = local_4d0, iVar80 = (int)local_4d0, local_4c4 != -1)) {
      while (1 < iVar80) {
        uVar47 = uVar47 & 0xffffffff;
        lVar33 = *param_1;
        auVar133._8_4_ = 0x7f7fffee;
        auVar133._0_8_ = 0x7f7fffee7f7fffee;
        auVar133._12_4_ = 0x7f7fffee;
        lVar30 = lVar33 + (long)param_1;
        auVar129._8_4_ = 0xff7fffee;
        auVar129._0_8_ = 0xff7fffeeff7fffee;
        auVar129._12_4_ = 0xff7fffee;
        auVar68 = ZEXT816(0x7f7fffee7f7fffee);
        uVar54 = 1;
        lVar31 = 0;
        if (lVar33 != 0) {
          lVar31 = lVar30;
        }
        iVar90 = -1;
        iVar89 = -1;
        uVar44 = 0;
        do {
          uVar59 = uVar44 + 1;
          if (uVar59 < uVar47) {
            pauVar67 = (undefined1 (*) [16])(lVar31 + (ulong)local_4d8[uVar44] * 0x20);
            auVar83._0_12_ = SUB1612(pauVar67[1],0);
            auVar83._12_4_ = 0;
            uVar58 = uVar54;
            iVar80 = iVar90;
            iVar92 = iVar89;
            do {
              pauVar34 = (undefined1 (*) [16])(lVar31 + (ulong)local_4d8[uVar58] * 0x20);
              auVar107._0_12_ = SUB1612(pauVar34[1],0);
              auVar107._12_4_ = 0;
              auVar112 = NEON_fmin(*pauVar34,*pauVar67,4);
              auVar108 = NEON_fmax(auVar107,auVar83,4);
              auVar119._0_4_ = auVar108._0_4_ - auVar112._0_4_;
              auVar119._4_4_ = auVar108._4_4_ - auVar112._4_4_;
              auVar119._8_4_ = auVar108._8_4_ - auVar112._8_4_;
              auVar119._12_4_ = auVar108._12_4_ - auVar112._12_4_;
              auVar13._8_8_ = uVar28;
              auVar13._0_8_ = uVar27;
              auVar124 = a64_TBL(ZEXT816(0),auVar119,auVar13);
              fVar117 = (auVar119._0_4_ + auVar119._0_4_) * auVar124._0_4_;
              fVar121 = (auVar119._4_4_ + auVar119._4_4_) * auVar124._4_4_;
              fVar122 = (auVar119._8_4_ + auVar119._8_4_) * auVar124._8_4_;
              fVar118 = fVar117 + fVar121 + fVar122;
              bVar62 = fVar118 < auVar68._0_4_;
              iVar90 = -(uint)bVar62;
              auVar125._4_4_ = iVar90;
              auVar125._0_4_ = iVar90;
              auVar125._8_4_ = iVar90;
              auVar125._12_4_ = iVar90;
              iVar89 = (int)uVar58;
              if (!bVar62) {
                iVar89 = iVar92;
              }
              auVar129 = auVar129 ^ (auVar129 ^ auVar108) & auVar125;
              uVar58 = uVar58 + 1;
              auVar68._0_8_ =
                   auVar68._0_8_ ^
                   (auVar68._0_8_ ^ CONCAT44(fVar117 + fVar121 + fVar122,fVar118)) &
                   CONCAT44(iVar90,iVar90);
              auVar133 = auVar133 ^ (auVar133 ^ auVar112) & auVar125;
              iVar90 = (int)uVar44;
              if (!bVar62) {
                iVar90 = iVar80;
              }
              iVar80 = iVar90;
              iVar92 = iVar89;
            } while (uVar47 != uVar58);
          }
          uVar54 = uVar54 + 1;
          uVar44 = uVar59;
        } while (uVar59 != uVar47);
        uVar55 = local_4d8[iVar90];
        uVar8 = *(ushort *)(param_1 + 2);
        uVar57 = local_4d8[iVar89];
        if (uVar8 == 0) {
          FUN_02eac5d8(param_1,1);
          lVar33 = *param_1;
          lVar30 = lVar33 + (long)param_1;
          uVar8 = *(ushort *)(param_1 + 2);
        }
        auVar130._0_12_ = auVar129._0_12_;
        auVar134._0_12_ = auVar133._0_12_;
        uVar47 = (ulong)uVar8;
        lVar31 = 0;
        if (lVar33 != 0) {
          lVar31 = lVar30;
        }
        puVar35 = (undefined8 *)(lVar31 + uVar47 * 0x20);
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(lVar30 + uVar47 * 0x20);
        auVar134._12_4_ = *(undefined4 *)((long)puVar35 + 0xc);
        auVar130._12_4_ = *(undefined4 *)((long)puVar35 + 0x1c);
        puVar35[1] = auVar134._8_8_;
        *puVar35 = auVar133._0_8_;
        puVar35[3] = auVar130._8_8_;
        puVar35[2] = auVar129._0_8_;
        lVar30 = 0;
        if (*param_1 != 0) {
          lVar30 = *param_1 + (long)param_1;
        }
        *(ushort *)(lVar30 + uVar47 * 0x20 + 0x1c) = uVar55;
        lVar30 = 0;
        if (*param_1 != 0) {
          lVar30 = *param_1 + (long)param_1;
        }
        *(ushort *)(lVar30 + uVar47 * 0x20 + 0x1e) = uVar57;
        lVar30 = 0;
        if (*param_1 != 0) {
          lVar30 = *param_1 + (long)param_1;
        }
        *(uint *)(lVar30 + (ulong)uVar55 * 0x20 + 0xc) = uVar8 | 0x3f000000;
        lVar30 = 0;
        if (*param_1 != 0) {
          lVar30 = *param_1 + (long)param_1;
        }
        *(uint *)(lVar30 + (ulong)uVar57 * 0x20 + 0xc) = uVar8 | 0x3f000000;
        auVar112._8_8_ = uVar91;
        auVar112._0_8_ = 0x7f7fffee7f7fffee;
        uVar47 = (long)(int)local_4d0 - 1;
        iVar80 = (int)uVar47;
        local_4d0 = CONCAT44(local_4d0._4_4_,iVar80);
        if (iVar80 != iVar89) {
          local_4d8[iVar89] = local_4d8[uVar47];
        }
        local_4d8[iVar90] = uVar8;
        uVar47 = uVar47 & 0xffffffff;
      }
      local_4d0._4_4_ = (uint)(local_4d0 >> 0x20);
      uVar8 = *local_4d8;
      lVar30 = 0;
      if (*param_1 != 0) {
        lVar30 = *param_1 + (long)param_1;
      }
      *(uint *)(lVar30 + (ulong)uVar8 * 0x20 + 0xc) = local_4c8 | 0x3f000000;
      lVar30 = 0;
      if (*param_1 != 0) {
        lVar30 = *param_1 + (long)param_1;
      }
      *(ushort *)(lVar30 + (ulong)local_4c8 * 0x20 + (long)local_4c4 * 2 + 0x1c) = uVar8;
    }
    else {
      if (0 < (int)local_4d0) {
        auVar108._8_8_ = auVar120._8_8_;
        auVar108._0_8_ = 0xff7fffeeff7fffee;
        auVar112._8_8_ = uVar91;
        auVar112._0_8_ = 0x7f7fffee7f7fffee;
        uVar47 = 0;
        lVar30 = 0;
        if (*param_1 != 0) {
          lVar30 = *param_1 + (long)param_1;
        }
        if ((int)local_4d0 != 1) {
          auVar108._0_8_ = 0xff7fffeeff7fffee;
          uVar47 = 0;
          auVar112._0_8_ = 0x7f7fffee7f7fffee;
          do {
            puVar36 = local_4d8 + uVar47;
            uVar47 = uVar47 + 2;
            pauVar67 = (undefined1 (*) [16])(lVar30 + (ulong)*puVar36 * 0x20);
            auVar124._0_12_ = SUB1612(pauVar67[1],0);
            auVar124._12_4_ = 0;
            pauVar34 = (undefined1 (*) [16])(lVar30 + (ulong)puVar36[1] * 0x20);
            auVar112 = NEON_fmin(auVar112,*pauVar67,4);
            auVar108 = NEON_fmax(auVar108,auVar124,4);
            auVar137._0_12_ = SUB1612(pauVar34[1],0);
            auVar137._12_4_ = 0;
            auVar112 = NEON_fmin(auVar112,*pauVar34,4);
            auVar108 = NEON_fmax(auVar108,auVar137,4);
          } while ((local_4d0 & 0xfffffffe) != uVar47);
        }
        if ((local_4d0 & 1) != 0) {
          pauVar67 = (undefined1 (*) [16])(lVar30 + (ulong)local_4d8[uVar47] * 0x20);
          auVar138._0_12_ = SUB1612(pauVar67[1],0);
          auVar138._12_4_ = 0;
          auVar112 = NEON_fmin(auVar112,*pauVar67,4);
          auVar108 = NEON_fmax(auVar108,auVar138,4);
        }
      }
      auVar96._0_12_ = auVar108._0_12_;
      fVar117 = auVar108._0_4_ - auVar112._0_4_;
      fVar118 = auVar108._4_4_ - auVar112._4_4_;
      fVar121 = auVar108._8_4_ - auVar112._8_4_;
      fVar122 = auVar108._12_4_ - auVar112._12_4_;
      uVar8 = *(ushort *)(param_1 + 2);
      iVar80 = -(uint)(fVar117 == 0.0);
      iVar89 = -(uint)(fVar118 == 0.0);
      iVar90 = -(uint)(fVar121 == 0.0);
      iVar92 = -(uint)(fVar122 == 0.0);
      auVar111._0_8_ =
           CONCAT17(~(byte)((uint)iVar89 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar89 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar89 >> 8),
                                      CONCAT14(~(byte)iVar89,
                                               CONCAT13(~(byte)((uint)iVar80 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar80 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar80 >> 8)
                                                                          ,~(byte)iVar80)))))));
      auVar111[8] = ~(byte)iVar90;
      auVar111[9] = ~(byte)((uint)iVar90 >> 8);
      auVar111[10] = ~(byte)((uint)iVar90 >> 0x10);
      auVar111[0xb] = ~(byte)((uint)iVar90 >> 0x18);
      auVar113[0xc] = ~(byte)iVar92;
      auVar113._0_12_ = auVar111;
      auVar113[0xd] = ~(byte)((uint)iVar92 >> 8);
      auVar113[0xe] = ~(byte)((uint)iVar92 >> 0x10);
      auVar113[0xf] = ~(byte)((uint)iVar92 >> 0x18);
      local_5f0 = auVar94._0_4_;
      fStack_5ec = auVar94._4_4_;
      fStack_5e8 = auVar94._8_4_;
      fStack_5e4 = auVar94._12_4_;
      auVar81._0_8_ = CONCAT44(fStack_5ec / fVar118,local_5f0 / fVar117);
      auVar81._8_4_ = fStack_5e8 / fVar121;
      auVar141._12_4_ = fStack_5e4 / fVar122;
      auVar141._0_12_ = auVar81;
      if (uVar8 == 0) {
        FUN_02eac5d8(param_1,1);
        auVar25._8_8_ = auVar141._8_8_;
        auVar25._0_8_ = auVar81._0_8_;
        auVar81 = auVar25._0_12_;
        auVar26._8_8_ = auVar113._8_8_;
        auVar26._0_8_ = auVar111._0_8_;
        auVar111 = auVar26._0_12_;
        uVar8 = *(ushort *)(param_1 + 2);
      }
      uVar47 = (ulong)uVar8;
      lVar30 = *param_1 + (long)param_1;
      lVar31 = 0;
      if (*param_1 != 0) {
        lVar31 = lVar30;
      }
      puVar35 = (undefined8 *)(lVar31 + uVar47 * 0x20);
      auVar82._0_8_ =
           CONCAT17(auVar81[7] & auVar111[7],
                    CONCAT16(auVar81[6] & auVar111[6],
                             CONCAT15(auVar81[5] & auVar111[5],
                                      CONCAT14(auVar81[4] & auVar111[4],
                                               CONCAT13(auVar81[3] & auVar111[3],
                                                        CONCAT12(auVar81[2] & auVar111[2],
                                                                 CONCAT11(auVar81[1] & auVar111[1],
                                                                          auVar81[0] & auVar111[0]))
                                                       )))));
      auVar82[8] = auVar81[8] & auVar111[8];
      auVar82[9] = auVar81[9] & auVar111[9];
      auVar82[10] = auVar81[10] & auVar111[10];
      auVar82[0xb] = auVar81[0xb] & auVar111[0xb];
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(lVar30 + uVar47 * 0x20);
      auVar69._0_12_ = auVar112._0_12_;
      auVar69._12_4_ = *(undefined4 *)((long)puVar35 + 0xc);
      auVar96._12_4_ = *(undefined4 *)((long)puVar35 + 0x1c);
      puVar35[1] = auVar69._8_8_;
      *puVar35 = auVar112._0_8_;
      puVar35[3] = auVar96._8_8_;
      puVar35[2] = auVar108._0_8_;
      lVar30 = 0;
      if (*param_1 != 0) {
        lVar30 = *param_1 + (long)param_1;
      }
      *(uint *)(lVar30 + uVar47 * 0x20 + 0xc) = local_4c8 | 0x3f000000;
      if (local_4c4 != -1) {
        lVar30 = 0;
        if (*param_1 != 0) {
          lVar30 = *param_1 + (long)param_1;
        }
        *(ushort *)(lVar30 + (ulong)local_4c8 * 0x20 + (long)local_4c4 * 2 + 0x1c) = uVar8;
        uVar47 = uVar32;
      }
      uVar32 = uVar47;
      iVar80 = (int)local_488 + 2;
      iVar89 = (int)local_488;
      if ((int)(local_488._4_4_ & 0x7fffffff) < iVar80) {
        FUN_02eaebf4(&local_490);
        auVar82._8_4_ = auVar82._8_4_;
        iVar80 = (int)local_488 + 2;
        iVar89 = (int)local_488;
      }
      plVar42 = local_490;
      lVar30 = (long)iVar89;
      local_488._0_4_ = iVar80;
      plVar37 = local_490 + (long)iVar89 * 3;
      plVar38 = plVar37;
      do {
        *plVar38 = 0;
        plVar38[1] = -0x8000000000000000;
        *(undefined2 *)(plVar38 + 2) = 0;
        *(undefined4 *)((long)plVar38 + 0x14) = 0xffffffff;
        plVar38 = plVar38 + 3;
      } while (plVar38 != local_490 + (long)iVar80 * 3);
      *(ushort *)(local_490 + lVar30 * 3 + 2) = uVar8;
      *(undefined4 *)((long)local_490 + lVar30 * 0x18 + 0x14) = 0;
      *(ushort *)(plVar37 + 5) = uVar8;
      *(undefined4 *)((long)plVar37 + 0x2c) = 1;
      puVar48 = (uint *)((long)local_490 + lVar30 * 0x18 + 0xc);
      plVar38 = plVar37 + 3;
      if ((int)(*puVar48 & 0x7fffffff) < (int)local_4d0) {
        FUN_02eaee40(plVar37,PTR_PTR_047d1a50,(long)(int)local_4d0);
      }
      if ((int)(*(uint *)((long)plVar37 + 0x24) & 0x7fffffff) < (int)local_4d0) {
        FUN_02eaee40(plVar38,PTR_PTR_047d1a50,(long)(int)local_4d0);
      }
      lVar53 = local_4a0;
      lVar33 = local_4b0;
      pauVar67 = local_4c0;
      lVar31 = 0;
      do {
        *(undefined4 *)(*local_4c0 + lVar31 + 8) = 0;
        *(undefined4 *)(local_4c0[3] + lVar31) = 0;
        *(undefined8 *)(local_4c0[1] + lVar31 + 8) = uVar91;
        *(undefined8 *)(local_4c0[1] + lVar31) = 0x7f7fffee7f7fffee;
        *(undefined8 *)(local_4c0[2] + lVar31 + 8) = auVar120._8_8_;
        *(undefined8 *)(local_4c0[2] + lVar31) = 0xff7fffeeff7fffee;
        lVar3 = local_4b0 + lVar31;
        *(undefined4 *)(lVar3 + 8) = 0;
        *(undefined4 *)(lVar3 + 0x30) = 0;
        *(undefined8 *)(lVar3 + 0x18) = uVar91;
        *(undefined8 *)(lVar3 + 0x10) = 0x7f7fffee7f7fffee;
        *(undefined8 *)(lVar3 + 0x28) = auVar120._8_8_;
        *(undefined8 *)(lVar3 + 0x20) = 0xff7fffeeff7fffee;
        lVar3 = local_4a0 + lVar31;
        lVar31 = lVar31 + 0x40;
        *(undefined4 *)(lVar3 + 8) = 0;
        *(undefined4 *)(lVar3 + 0x30) = 0;
        *(undefined8 *)(lVar3 + 0x18) = uVar91;
        *(undefined8 *)(lVar3 + 0x10) = 0x7f7fffee7f7fffee;
        *(undefined8 *)(lVar3 + 0x28) = auVar120._8_8_;
        *(undefined8 *)(lVar3 + 0x20) = 0xff7fffeeff7fffee;
      } while (lVar31 != 0x800);
      auVar70._8_4_ = 0x42000000;
      auVar70._0_8_ = 0x4200000042000000;
      auVar70._12_4_ = 0x42000000;
      auVar142._8_8_ = auVar70._8_8_;
      auVar142._0_8_ = 0x4200000042000000;
      auVar108 = ZEXT816(0);
      if (0 < (int)local_4d0) {
        auVar108 = ZEXT816(0);
        auVar142._8_4_ = 0x42000000;
        auVar142._0_8_ = 0x4200000042000000;
        auVar142._12_4_ = 0x42000000;
        lVar31 = 0;
        do {
          lVar3 = 0;
          if (*param_1 != 0) {
            lVar3 = *param_1 + (long)param_1;
          }
          pauVar34 = (undefined1 (*) [16])(lVar3 + (ulong)local_4d8[lVar31] * 0x20);
          auVar137 = *pauVar34;
          auVar124 = pauVar34[1];
          auVar97._0_12_ = auVar124._0_12_;
          auVar97._12_4_ = 0;
          auVar71._0_4_ =
               auVar82._0_4_ * 32.0 * ((auVar137._0_4_ + auVar124._0_4_) * 0.5 - auVar112._0_4_) +
               0.5;
          auVar71._4_4_ =
               auVar82._4_4_ * 32.0 * ((auVar137._4_4_ + auVar124._4_4_) * 0.5 - auVar112._4_4_) +
               0.5;
          auVar71._8_4_ =
               auVar82._8_4_ * 32.0 * ((auVar137._8_4_ + auVar124._8_4_) * 0.5 - auVar112._8_4_) +
               0.5;
          auVar71._12_4_ = ((auVar137._12_4_ + 0.0) * 0.5 - auVar112._12_4_) * 0.0 + 0.5;
          auVar124 = NEON_fmax(auVar71,ZEXT816(0),4);
          auVar124 = NEON_fmin(auVar124,auVar95,4);
          auVar114._0_8_ = CONCAT44((int)auVar124._4_4_,(int)auVar124._0_4_);
          auVar114._8_4_ = (int)auVar124._8_4_;
          auVar114._12_4_ = (int)auVar124._12_4_;
          pauVar34 = pauVar67 + (long)(int)auVar124._0_4_ * 4;
          auVar141 = NEON_fmin(pauVar34[1],auVar137,4);
          auVar138 = NEON_fmax(pauVar34[2],auVar97,4);
          *(long *)(pauVar34[1] + 8) = auVar141._8_8_;
          *(long *)pauVar34[1] = auVar141._0_8_;
          *(long *)(pauVar34[2] + 8) = auVar138._8_8_;
          *(long *)pauVar34[2] = auVar138._0_8_;
          piVar49 = (int *)(*pauVar34 + 8);
          iVar80 = *piVar49;
          if ((int)(*(uint *)(*pauVar34 + 0xc) & 0x7fffffff) <= iVar80) {
            FUN_02eaee40(pauVar34,PTR_PTR_047d1a50,(long)iVar80 + 1);
            auVar114._8_8_ = auVar114._8_8_;
            iVar80 = *piVar49;
          }
          auVar98._12_4_ = 0;
          auVar98._0_12_ = auVar97._0_12_;
          *(ushort *)(*(long *)*pauVar34 + (long)iVar80 * 2) = local_4d8[lVar31];
          plVar2 = (long *)(lVar33 + (long)(int)auVar124._4_4_ * 0x40);
          *piVar49 = iVar80 + 1;
          auVar141 = NEON_fmin(*(undefined1 (*) [16])(plVar2 + 2),auVar137,4);
          auVar138 = NEON_fmax(*(undefined1 (*) [16])(plVar2 + 4),auVar98,4);
          plVar2[3] = auVar141._8_8_;
          plVar2[2] = auVar141._0_8_;
          plVar2[5] = auVar138._8_8_;
          plVar2[4] = auVar138._0_8_;
          plVar65 = plVar2 + 1;
          iVar80 = (int)*plVar65;
          if ((int)(*(uint *)((long)plVar2 + 0xc) & 0x7fffffff) <= iVar80) {
            FUN_02eaee40(plVar2,PTR_PTR_047d1a50,(long)iVar80 + 1);
            iVar80 = (int)*plVar65;
          }
          auVar99._12_4_ = 0;
          auVar99._0_12_ = auVar97._0_12_;
          *(ushort *)(*plVar2 + (long)iVar80 * 2) = local_4d8[lVar31];
          plVar2 = (long *)(lVar53 + (long)auVar114._8_4_ * 0x40);
          *(int *)plVar65 = iVar80 + 1;
          auVar138 = NEON_fmin(*(undefined1 (*) [16])(plVar2 + 2),auVar137,4);
          auVar137 = NEON_fmax(*(undefined1 (*) [16])(plVar2 + 4),auVar99,4);
          plVar2[3] = auVar138._8_8_;
          plVar2[2] = auVar138._0_8_;
          plVar2[5] = auVar137._8_8_;
          plVar2[4] = auVar137._0_8_;
          plVar65 = plVar2 + 1;
          iVar80 = (int)*plVar65;
          if ((int)(*(uint *)((long)plVar2 + 0xc) & 0x7fffffff) <= iVar80) {
            FUN_02eaee40(plVar2,PTR_PTR_047d1a50,(long)iVar80 + 1);
            iVar80 = (int)*plVar65;
          }
          auVar108 = NEON_fmax(auVar124,auVar108,4);
          puVar36 = local_4d8 + lVar31;
          auVar142 = NEON_fmin(auVar124,auVar142,4);
          lVar31 = lVar31 + 1;
          *(ushort *)(*plVar2 + (long)iVar80 * 2) = *puVar36;
          *(int *)plVar65 = iVar80 + 1;
        } while (lVar31 < (int)local_4d0);
      }
      uVar47 = 0;
      uVar54 = 0;
      fVar117 = 3.40282e+38;
      uVar56 = 0xffffffff;
      while( true ) {
        iVar80 = (int)uVar47;
        auVar112 = auVar142;
        auVar124 = auVar108;
        if (iVar80 != 0) {
          auVar112 = ZEXT416(auVar142._8_4_);
          auVar124 = ZEXT416(auVar108._8_4_);
          if (iVar80 != 2) {
            auVar112 = ZEXT416(auVar142._4_4_);
            auVar124 = ZEXT416(auVar108._4_4_);
            if (iVar80 != 1) {
              auVar112 = ZEXT416(auVar142._12_4_);
              auVar124 = ZEXT416(auVar108._12_4_);
            }
          }
        }
        uVar45 = (uint)auVar112._0_4_;
        uVar51 = (uint)auVar124._0_4_;
        if ((int)uVar45 <= (int)uVar51) {
          auVar131._8_8_ = auVar120._8_8_;
          auVar131._0_8_ = 0xff7fffeeff7fffee;
          auVar135._8_8_ = uVar91;
          auVar135._0_8_ = 0x7f7fffee7f7fffee;
          iVar80 = 0;
          iVar89 = 0;
          uVar44 = (ulong)(int)uVar45;
          uVar61 = uVar45 - 1;
          uVar59 = -(ulong)(uVar51 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar51 << 6;
          uVar58 = -(ulong)(uVar45 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar45 << 6;
          auVar112 = auVar131;
          auVar124 = auVar135;
          do {
            auVar112 = NEON_fmax(auVar112,*(undefined1 (*) [16])(pauVar67[2] + uVar58),4);
            iVar80 = *(int *)(*pauVar67 + uVar58 + 8) + iVar80;
            auVar124 = NEON_fmin(auVar124,*(undefined1 (*) [16])(pauVar67[1] + uVar58),4);
            iVar89 = *(int *)(*pauVar67 + uVar59 + 8) + iVar89;
            auVar9._12_4_ = (int)((ulong)*(undefined8 *)(pauVar67[2] + uVar59 + 8) >> 0x20);
            auVar9._0_12_ = *(undefined1 (*) [12])(pauVar67[2] + uVar59);
            auVar131 = NEON_fmax(auVar131,auVar9,4);
            auVar139._0_4_ = auVar112._0_4_ - auVar124._0_4_;
            auVar139._4_4_ = auVar112._4_4_ - auVar124._4_4_;
            auVar139._8_4_ = auVar112._8_4_ - auVar124._8_4_;
            auVar139._12_4_ = auVar112._12_4_ - auVar124._12_4_;
            uVar61 = uVar61 + 1;
            auVar135 = NEON_fmin(auVar135,*(undefined1 (*) [16])(pauVar67[1] + uVar59),4);
            auVar20._8_8_ = uVar28;
            auVar20._0_8_ = uVar27;
            auVar137 = a64_TBL(ZEXT816(0),auVar139,auVar20);
            auVar140._0_4_ = (auVar139._0_4_ + auVar139._0_4_) * auVar137._0_4_;
            auVar140._4_4_ = (auVar139._4_4_ + auVar139._4_4_) * auVar137._4_4_;
            auVar140._8_4_ = (auVar139._8_4_ + auVar139._8_4_) * auVar137._8_4_;
            auVar140._12_4_ = (auVar139._12_4_ + auVar139._12_4_) * auVar137._12_4_;
            auVar138 = NEON_ext(auVar140,auVar140,8,1);
            fVar118 = auVar131._0_4_ - auVar135._0_4_;
            fVar121 = auVar131._4_4_ - auVar135._4_4_;
            fVar122 = auVar131._8_4_ - auVar135._8_4_;
            fVar93 = auVar131._12_4_ - auVar135._12_4_;
            auVar10._4_4_ = fVar121;
            auVar10._0_4_ = fVar118;
            auVar10._8_4_ = fVar122;
            auVar10._12_4_ = fVar93;
            auVar21._8_8_ = uVar28;
            auVar21._0_8_ = uVar27;
            auVar137 = a64_TBL(ZEXT816(0),auVar10,auVar21);
            fVar118 = (fVar118 + fVar118) * auVar137._0_4_;
            fVar121 = (fVar121 + fVar121) * auVar137._4_4_;
            fVar122 = (fVar122 + fVar122) * auVar137._8_4_;
            fVar93 = (fVar93 + fVar93) * auVar137._12_4_;
            auVar11._4_4_ = fVar121;
            auVar11._0_4_ = fVar118;
            auVar11._8_4_ = fVar122;
            auVar11._12_4_ = fVar93;
            auVar12._4_4_ = fVar121;
            auVar12._0_4_ = fVar118;
            auVar12._8_4_ = fVar122;
            auVar12._12_4_ = fVar93;
            auVar137 = NEON_ext(auVar11,auVar12,8,1);
            *(float *)(pauVar67[3] + uVar58) =
                 *(float *)(pauVar67[3] + uVar58) +
                 (float)iVar80 * (auVar140._0_4_ + auVar140._4_4_ + auVar138._0_4_);
            *(float *)(pauVar67[3] + uVar59) =
                 *(float *)(pauVar67[3] + uVar59) +
                 (float)iVar89 * (fVar118 + fVar121 + auVar137._0_4_);
            uVar59 = uVar59 - 0x40;
            uVar58 = uVar58 + 0x40;
          } while (uVar51 != uVar61);
          if (((uVar51 - uVar45) + 1 & 1) != 0) {
            if ((*(int *)(pauVar67[uVar44 * 4] + 8) != 0) &&
               (*(float *)pauVar67[uVar44 * 4 + 3] < fVar117)) {
              uVar54 = uVar47 & 0xffffffff;
              uVar56 = uVar45;
              fVar117 = *(float *)pauVar67[uVar44 * 4 + 3];
            }
            uVar44 = uVar44 + 1;
          }
          if (uVar51 != uVar45) {
            piVar49 = (int *)(pauVar67[uVar44 * 4 + 4] + 8);
            do {
              uVar45 = (uint)uVar44;
              if ((piVar49[-0x10] != 0) && ((float)piVar49[-6] < fVar117)) {
                uVar54 = uVar47 & 0xffffffff;
                uVar56 = uVar45;
                fVar117 = (float)piVar49[-6];
              }
              if ((*piVar49 != 0) && ((float)piVar49[10] < fVar117)) {
                uVar56 = uVar45 + 1;
                uVar54 = uVar47 & 0xffffffff;
                fVar117 = (float)piVar49[10];
              }
              uVar44 = (ulong)(uVar45 + 2);
              piVar49 = piVar49 + 0x20;
            } while (uVar51 + 1 != uVar45 + 2);
          }
        }
        uVar47 = uVar47 + 1;
        if (uVar47 == 3) break;
        pauVar67 = local_480[uVar47 * 2 + -8];
      }
      iVar80 = (int)uVar54;
      ppauVar1 = local_480 + (long)iVar80 * 2 + -8;
      if ((int)uVar56 < 1) {
LAB_02ead8b0:
        lVar31 = (long)(int)(uVar56 + 1);
        iVar89 = (int)plVar37[4];
        do {
          puVar66 = *(undefined2 **)(*ppauVar1)[lVar31 * 4];
          uVar45 = *(uint *)((*ppauVar1)[lVar31 * 4] + 8);
          iVar92 = uVar45 + iVar89;
          if ((int)(*(uint *)((long)plVar37 + 0x24) & 0x7fffffff) < iVar92) {
            FUN_02e8bb18(plVar38,PTR_PTR_047d1a50,(long)iVar92);
          }
          if (0 < (int)uVar45) {
            puVar40 = (undefined2 *)(*plVar38 + (long)iVar89 * 2);
            uVar51 = uVar45 & 7;
            if (6 < uVar45 - 1) {
              iVar89 = -(uVar45 & 0xfffffff8);
              puVar41 = puVar40;
              do {
                *puVar41 = *puVar66;
                puVar41[1] = puVar66[1];
                puVar41[2] = puVar66[2];
                puVar41[3] = puVar66[3];
                puVar41[4] = puVar66[4];
                puVar41[5] = puVar66[5];
                puVar41[6] = puVar66[6];
                puVar43 = puVar66 + 7;
                puVar40 = puVar41 + 8;
                puVar66 = puVar66 + 8;
                iVar89 = iVar89 + 8;
                puVar41[7] = *puVar43;
                puVar41 = puVar40;
              } while (iVar89 != 0);
            }
            for (; uVar51 != 0; uVar51 = uVar51 - 1) {
              *puVar40 = *puVar66;
              puVar40 = puVar40 + 1;
              puVar66 = puVar66 + 1;
            }
          }
          lVar31 = lVar31 + 1;
          *(int *)(plVar37 + 4) = iVar92;
          iVar89 = iVar92;
        } while ((int)lVar31 != 0x20);
        iVar90 = (int)plVar42[lVar30 * 3 + 1];
      }
      else {
        uVar47 = 0;
        iVar89 = (int)plVar42[lVar30 * 3 + 1];
        do {
          puVar66 = *(undefined2 **)(*ppauVar1)[uVar47 * 4];
          uVar45 = *(uint *)((*ppauVar1)[uVar47 * 4] + 8);
          iVar90 = uVar45 + iVar89;
          if ((int)(*puVar48 & 0x7fffffff) < iVar90) {
            FUN_02e8bb18(plVar37,PTR_PTR_047d1a50,(long)iVar90);
          }
          if (0 < (int)uVar45) {
            puVar40 = (undefined2 *)(*plVar37 + (long)iVar89 * 2);
            uVar51 = uVar45 & 7;
            if (6 < uVar45 - 1) {
              iVar89 = -(uVar45 & 0xfffffff8);
              puVar41 = puVar40;
              do {
                *puVar41 = *puVar66;
                puVar41[1] = puVar66[1];
                puVar41[2] = puVar66[2];
                puVar41[3] = puVar66[3];
                puVar41[4] = puVar66[4];
                puVar41[5] = puVar66[5];
                puVar41[6] = puVar66[6];
                puVar43 = puVar66 + 7;
                puVar40 = puVar41 + 8;
                puVar66 = puVar66 + 8;
                iVar89 = iVar89 + 8;
                puVar41[7] = *puVar43;
                puVar41 = puVar40;
              } while (iVar89 != 0);
            }
            for (; uVar51 != 0; uVar51 = uVar51 - 1) {
              *puVar40 = *puVar66;
              puVar40 = puVar40 + 1;
              puVar66 = puVar66 + 1;
            }
          }
          uVar47 = uVar47 + 1;
          *(int *)(plVar42 + lVar30 * 3 + 1) = iVar90;
          iVar89 = iVar90;
        } while (uVar47 != uVar56);
        if ((int)(uVar56 + 1) < 0x20) goto LAB_02ead8b0;
        iVar92 = (int)plVar37[4];
      }
      if ((iVar92 == 0 || iVar90 == 0) && (iVar90 != 0 || iVar92 != 0)) {
        plVar37 = plVar37 + (ulong)(iVar92 == 0) * 3;
        puVar66 = *(undefined2 **)(*ppauVar1)[(long)(int)uVar56 * 4];
        uVar56 = *(uint *)((*ppauVar1)[(long)(int)uVar56 * 4] + 8);
        lVar31 = plVar37[1];
        lVar30 = (long)(int)lVar31 + (long)(int)uVar56;
        iVar80 = (int)lVar30;
        if ((int)(*(uint *)((long)plVar37 + 0xc) & 0x7fffffff) < iVar80) {
          FUN_02e8bb18(plVar37,PTR_PTR_047d1a50,lVar30);
        }
        auVar112._8_8_ = uVar91;
        auVar112._0_8_ = 0x7f7fffee7f7fffee;
        if (0 < (int)uVar56) {
          puVar40 = (undefined2 *)(*plVar37 + (long)(int)lVar31 * 2);
          uVar45 = uVar56 & 7;
          if (6 < uVar56 - 1) {
            iVar89 = -(uVar56 & 0xfffffff8);
            puVar41 = puVar40;
            do {
              *puVar41 = *puVar66;
              puVar41[1] = puVar66[1];
              puVar41[2] = puVar66[2];
              puVar41[3] = puVar66[3];
              puVar41[4] = puVar66[4];
              puVar41[5] = puVar66[5];
              puVar41[6] = puVar66[6];
              puVar43 = puVar66 + 7;
              puVar40 = puVar41 + 8;
              puVar66 = puVar66 + 8;
              iVar89 = iVar89 + 8;
              puVar41[7] = *puVar43;
              puVar41 = puVar40;
            } while (iVar89 != 0);
          }
          for (; uVar45 != 0; uVar45 = uVar45 - 1) {
            *puVar40 = *puVar66;
            puVar40 = puVar40 + 1;
            puVar66 = puVar66 + 1;
          }
        }
        *(int *)(plVar37 + 1) = iVar80;
      }
      else {
        uVar45 = *(uint *)((*ppauVar1)[(long)(int)uVar56 * 4] + 8);
        pauVar67 = *(undefined1 (**) [16])(*ppauVar1)[(long)(int)uVar56 * 4];
        uVar56 = (int)uVar45 >> 1;
        if (1 < (int)uVar45) {
          pauVar34 = (undefined1 (*) [16])(*pauVar67 + (ulong)(uVar45 - 1) * 2);
          uVar51 = 0;
          local_280 = pauVar67;
          local_480[0] = pauVar34;
          pauVar39 = pauVar67;
LAB_02eadbb4:
          lVar31 = (long)(int)uVar51;
LAB_02eadbb8:
          do {
            pauVar50 = pauVar34;
            do {
              pauVar34 = pauVar50;
              uVar8 = *(ushort *)(*pauVar39 + ((long)pauVar34 - (long)pauVar39 >> 2) * 2);
              pauVar50 = pauVar34;
              pauVar52 = pauVar39;
              do {
                lVar33 = 0;
                if (*param_1 != 0) {
                  lVar33 = *param_1 + (long)param_1;
                }
                pfVar4 = (float *)(lVar33 + (ulong)uVar8 * 0x20);
                fVar117 = (*pfVar4 + pfVar4[4]) * 0.5;
                fVar118 = (pfVar4[1] + pfVar4[5]) * 0.5;
                fVar121 = (pfVar4[2] + pfVar4[6]) * 0.5;
                fVar122 = (pfVar4[3] + 0.0) * 0.5;
                if (iVar80 == 1) {
                  pauVar52 = (undefined1 (*) [16])(pauVar52[-1] + 0xe);
                  do {
                    pauVar52 = (undefined1 (*) [16])(*pauVar52 + 2);
                    uVar55 = *(ushort *)*pauVar52;
                    lVar53 = lVar33 + (ulong)uVar55 * 0x20;
                  } while ((*(float *)(lVar53 + 0x14) + *(float *)(lVar53 + 4)) * 0.5 < fVar118);
                }
                else if (iVar80 == 2) {
                  pauVar52 = (undefined1 (*) [16])(pauVar52[-1] + 0xe);
                  do {
                    pauVar52 = (undefined1 (*) [16])(*pauVar52 + 2);
                    uVar55 = *(ushort *)*pauVar52;
                    lVar53 = lVar33 + (ulong)uVar55 * 0x20;
                  } while ((*(float *)(lVar53 + 0x18) + *(float *)(lVar53 + 8)) * 0.5 < fVar121);
                }
                else if (iVar80 == 3) {
                  pauVar52 = (undefined1 (*) [16])(pauVar52[-1] + 0xe);
                  do {
                    pauVar52 = (undefined1 (*) [16])(*pauVar52 + 2);
                    uVar55 = *(ushort *)*pauVar52;
                  } while ((*(float *)(lVar33 + (ulong)uVar55 * 0x20 + 0xc) + 0.0) * 0.5 < fVar122);
                }
                else {
                  pauVar52 = (undefined1 (*) [16])(pauVar52[-1] + 0xe);
                  do {
                    pauVar52 = (undefined1 (*) [16])(*pauVar52 + 2);
                    uVar55 = *(ushort *)*pauVar52;
                    pfVar4 = (float *)(lVar33 + (ulong)uVar55 * 0x20);
                  } while ((pfVar4[4] + *pfVar4) * 0.5 < fVar117);
                }
                if (iVar80 == 1) {
                  pauVar50 = (undefined1 (*) [16])(*pauVar50 + 2);
                  do {
                    pauVar50 = (undefined1 (*) [16])(pauVar50[-1] + 0xe);
                    uVar57 = *(ushort *)*pauVar50;
                    lVar53 = lVar33 + (ulong)uVar57 * 0x20;
                  } while (fVar118 < (*(float *)(lVar53 + 0x14) + *(float *)(lVar53 + 4)) * 0.5);
                }
                else if (iVar80 == 2) {
                  pauVar50 = (undefined1 (*) [16])(*pauVar50 + 2);
                  do {
                    pauVar50 = (undefined1 (*) [16])(pauVar50[-1] + 0xe);
                    uVar57 = *(ushort *)*pauVar50;
                    lVar53 = lVar33 + (ulong)uVar57 * 0x20;
                  } while (fVar121 < (*(float *)(lVar53 + 0x18) + *(float *)(lVar53 + 8)) * 0.5);
                }
                else {
                  fVar117 = (float)((uint)fVar117 ^
                                   ((uint)fVar117 ^ (uint)fVar122) & -(uint)(iVar80 == 3));
                  pauVar50 = (undefined1 (*) [16])(*pauVar50 + 2);
                  if (iVar80 == 3) {
                    do {
                      pauVar50 = (undefined1 (*) [16])(pauVar50[-1] + 0xe);
                      uVar57 = *(ushort *)*pauVar50;
                    } while (fVar117 < (*(float *)(lVar33 + (ulong)uVar57 * 0x20 + 0xc) + 0.0) * 0.5
                            );
                  }
                  else {
                    do {
                      pauVar50 = (undefined1 (*) [16])(pauVar50[-1] + 0xe);
                      uVar57 = *(ushort *)*pauVar50;
                      pfVar4 = (float *)(lVar33 + (ulong)uVar57 * 0x20);
                    } while (fVar117 < (pfVar4[4] + *pfVar4) * 0.5);
                  }
                }
                if (pauVar52 <= pauVar50) {
                  if (pauVar50 != pauVar52) {
                    *(ushort *)*pauVar50 = uVar55;
                    *(ushort *)*pauVar52 = uVar57;
                  }
                  pauVar50 = (undefined1 (*) [16])(pauVar50[-1] + 0xe);
                  pauVar52 = (undefined1 (*) [16])(*pauVar52 + 2);
                }
              } while (pauVar52 <= pauVar50);
              if (pauVar50 <= pauVar39) {
                pauVar39 = pauVar52;
                if (pauVar52 < pauVar34) goto LAB_02eadbb8;
                uVar51 = (int)lVar31 - 1;
                if ((int)lVar31 < 1) goto LAB_02eadb1c;
                pauVar39 = local_480[(ulong)uVar51 + 0x40];
                pauVar34 = local_480[uVar51];
                goto LAB_02eadbb4;
              }
            } while (pauVar34 <= pauVar52);
            pauVar6 = pauVar50;
            pauVar24 = pauVar39;
            if ((long)pauVar34 - (long)pauVar52 <= (long)pauVar50 - (long)pauVar39) {
              pauVar6 = pauVar34;
              pauVar24 = pauVar52;
              pauVar34 = pauVar50;
              pauVar52 = pauVar39;
            }
            local_480[lVar31 + 0x40] = pauVar52;
            local_480[lVar31] = pauVar34;
            lVar31 = lVar31 + 1;
            pauVar34 = pauVar6;
            pauVar39 = pauVar24;
          } while( true );
        }
LAB_02eadb1c:
        lVar33 = (long)(int)plVar42[lVar30 * 3 + 1];
        lVar31 = lVar33 + (int)uVar56;
        iVar80 = (int)lVar31;
        if ((int)(*puVar48 & 0x7fffffff) < iVar80) {
          FUN_02e8bb18(plVar37,PTR_PTR_047d1a50,lVar31);
        }
        if (1 < (int)uVar45) {
          puVar66 = (undefined2 *)(*plVar37 + lVar33 * 2);
          uVar51 = uVar45 >> 1 & 7;
          pauVar34 = pauVar67;
          if (6 < uVar56 - 1) {
            iVar89 = -(uVar56 & 0xfffffff8);
            puVar40 = puVar66;
            pauVar39 = pauVar67;
            do {
              *puVar40 = *(undefined2 *)*pauVar39;
              puVar40[1] = *(undefined2 *)(*pauVar39 + 2);
              puVar40[2] = *(undefined2 *)(*pauVar39 + 4);
              puVar40[3] = *(undefined2 *)(*pauVar39 + 6);
              puVar40[4] = *(undefined2 *)(*pauVar39 + 8);
              puVar40[5] = *(undefined2 *)(*pauVar39 + 10);
              puVar40[6] = *(undefined2 *)(*pauVar39 + 0xc);
              pauVar34 = pauVar39 + 1;
              puVar66 = puVar40 + 8;
              iVar89 = iVar89 + 8;
              puVar40[7] = *(undefined2 *)(*pauVar39 + 0xe);
              puVar40 = puVar66;
              pauVar39 = pauVar34;
            } while (iVar89 != 0);
          }
          for (; uVar51 != 0; uVar51 = uVar51 - 1) {
            *puVar66 = *(undefined2 *)*pauVar34;
            pauVar34 = (undefined1 (*) [16])(*pauVar34 + 2);
            puVar66 = puVar66 + 1;
          }
        }
        *(int *)(plVar42 + lVar30 * 3 + 1) = iVar80;
        lVar31 = plVar37[4];
        uVar51 = uVar45 - uVar56;
        lVar30 = (long)(int)lVar31 + (long)(int)uVar51;
        iVar80 = (int)lVar30;
        if ((int)(*(uint *)((long)plVar37 + 0x24) & 0x7fffffff) < iVar80) {
          FUN_02e8bb18(plVar38,PTR_PTR_047d1a50,lVar30);
        }
        auVar112._8_8_ = uVar91;
        auVar112._0_8_ = 0x7f7fffee7f7fffee;
        if (0 < (int)uVar51) {
          puVar40 = (undefined2 *)(*plVar38 + (long)(int)lVar31 * 2);
          puVar66 = (undefined2 *)(*pauVar67 + (long)(int)uVar56 * 2);
          uVar61 = uVar51 & 7;
          if (6 < uVar45 + ~uVar56) {
            iVar89 = -(uVar51 & 0xfffffff8);
            puVar41 = puVar66;
            puVar43 = puVar40;
            do {
              *puVar43 = *puVar41;
              puVar43[1] = puVar41[1];
              puVar43[2] = puVar41[2];
              puVar43[3] = puVar41[3];
              puVar43[4] = puVar41[4];
              puVar43[5] = puVar41[5];
              puVar43[6] = puVar41[6];
              puVar66 = puVar41 + 8;
              puVar40 = puVar43 + 8;
              iVar89 = iVar89 + 8;
              puVar43[7] = puVar41[7];
              puVar41 = puVar66;
              puVar43 = puVar40;
            } while (iVar89 != 0);
          }
          for (; uVar61 != 0; uVar61 = uVar61 - 1) {
            *puVar40 = *puVar66;
            puVar66 = puVar66 + 1;
            puVar40 = puVar40 + 1;
          }
        }
        *(int *)(plVar37 + 4) = iVar80;
      }
    }
    uVar56 = local_4d0._4_4_;
    uVar47 = (ulong)local_4d0._4_4_;
    local_4d0 = uVar47 << 0x20;
    if ((-1 < (int)uVar56) && (local_4d8 != (ushort *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_4d8,uVar47 << 1);
      auVar112._8_8_ = uVar91;
      auVar112._0_8_ = 0x7f7fffee7f7fffee;
    }
    lVar30 = local_4a0;
    auVar120._0_8_ = 0xff7fffeeff7fffee;
    if ((int)local_488 == 0) break;
    plVar38 = local_490;
    auVar108 = auVar120;
  } while( true );
  lVar33 = *param_1;
  lVar31 = 0;
  if (lVar33 != 0) {
    lVar31 = lVar33 + (long)param_1;
  }
  uVar47 = (ulong)*(ushort *)(lVar31 + uVar32 * 0x20 + 0x1c);
  do {
    if ((int)uVar47 == 0) {
      bVar62 = false;
    }
    else {
      bVar62 = false;
      do {
        lVar31 = lVar33 + (long)param_1;
        lVar53 = 0;
        if (lVar33 != 0) {
          lVar53 = lVar31;
        }
        lVar3 = lVar53 + uVar47 * 0x20;
        uVar54 = (ulong)*(ushort *)(lVar3 + 0x1c);
        if (uVar54 != 0) {
          pauVar67 = (undefined1 (*) [16])(lVar53 + uVar54 * 0x20);
          auVar108 = pauVar67[1];
          auVar112 = *pauVar67;
          pauVar34 = (undefined1 (*) [16])(lVar53 + (ulong)*(ushort *)(lVar3 + 0x1e) * 0x20);
          auVar120 = pauVar34[1];
          auVar94 = *pauVar34;
          if (((ulong)*(ushort *)(pauVar67[1] + 0xc) != 0) &&
             (puVar36 = (ushort *)(pauVar34[1] + 0xc), *puVar36 != 0)) {
            local_480[0] = (undefined1 (*) [16])
                           (lVar53 + (ulong)*(ushort *)(pauVar67[1] + 0xc) * 0x20);
            local_480[2] = (undefined1 (*) [16])(lVar53 + (ulong)*puVar36 * 0x20);
            auVar100._0_4_ = auVar108._0_4_ - auVar112._0_4_;
            auVar100._4_4_ = auVar108._4_4_ - auVar112._4_4_;
            auVar100._8_4_ = auVar108._8_4_ - auVar112._8_4_;
            auVar100._12_4_ = 0.0 - auVar112._12_4_;
            auVar72._0_4_ = auVar120._0_4_ - auVar94._0_4_;
            auVar72._4_4_ = auVar120._4_4_ - auVar94._4_4_;
            auVar72._8_4_ = auVar120._8_4_ - auVar94._8_4_;
            auVar72._12_4_ = 0.0 - auVar94._12_4_;
            auVar94._8_8_ = uVar28;
            auVar94._0_8_ = uVar27;
            auVar112 = a64_TBL(ZEXT816(0),auVar100,auVar94);
            auVar95._8_8_ = uVar28;
            auVar95._0_8_ = uVar27;
            auVar108 = a64_TBL(ZEXT816(0),auVar72,auVar95);
            auVar115._0_12_ = SUB1612(local_480[2][1],0);
            auVar115._12_4_ = 0;
            auVar101._0_4_ = (auVar100._0_4_ + auVar100._0_4_) * auVar112._0_4_;
            auVar101._4_4_ = (auVar100._4_4_ + auVar100._4_4_) * auVar112._4_4_;
            auVar101._8_4_ = (auVar100._8_4_ + auVar100._8_4_) * auVar112._8_4_;
            auVar101._12_4_ = (auVar100._12_4_ + auVar100._12_4_) * auVar112._12_4_;
            auVar73._0_4_ = (auVar72._0_4_ + auVar72._0_4_) * auVar108._0_4_;
            auVar73._4_4_ = (auVar72._4_4_ + auVar72._4_4_) * auVar108._4_4_;
            auVar73._8_4_ = (auVar72._8_4_ + auVar72._8_4_) * auVar108._8_4_;
            auVar73._12_4_ = (auVar72._12_4_ + auVar72._12_4_) * auVar108._12_4_;
            local_480[1] = (undefined1 (*) [16])
                           (lVar53 + (ulong)*(ushort *)(pauVar67[1] + 0xe) * 0x20);
            auVar84._0_12_ = SUB1612(local_480[0][1],0);
            auVar84._12_4_ = 0;
            auVar137 = NEON_fmin(*local_480[0],*local_480[2],4);
            local_480[3] = (undefined1 (*) [16])
                           (lVar53 + (ulong)*(ushort *)(pauVar34[1] + 0xe) * 0x20);
            auVar138 = NEON_fmax(auVar84,auVar115,4);
            auVar136._0_12_ = SUB1612(local_480[3][1],0);
            auVar136._12_4_ = 0;
            auVar126._0_12_ = SUB1612(local_480[1][1],0);
            auVar126._12_4_ = 0;
            auVar108 = NEON_fmax(auVar84,auVar136,4);
            auVar112 = NEON_fmin(*local_480[0],*local_480[3],4);
            auVar141 = NEON_fmin(*local_480[1],*local_480[3],4);
            auVar124 = NEON_ext(auVar101,auVar101,8,1);
            auVar95 = NEON_fmax(auVar126,auVar136,4);
            uStack_238 = auVar112._8_8_;
            local_240 = auVar112._0_8_;
            uStack_228 = auVar108._8_8_;
            local_230 = auVar108._0_8_;
            auVar85._0_4_ = auVar108._0_4_ - auVar112._0_4_;
            auVar85._4_4_ = auVar108._4_4_ - auVar112._4_4_;
            auVar85._8_4_ = auVar108._8_4_ - auVar112._8_4_;
            auVar85._12_4_ = auVar108._12_4_ - auVar112._12_4_;
            auVar112 = NEON_fmax(auVar126,auVar115,4);
            auVar94 = NEON_ext(auVar73,auVar73,8,1);
            auVar120 = NEON_fmin(*local_480[1],*local_480[2],4);
            uStack_258 = auVar141._8_8_;
            local_260 = auVar141._0_8_;
            uStack_248 = auVar95._8_8_;
            uStack_250 = auVar95._0_8_;
            uStack_278 = auVar137._8_8_;
            local_280 = auVar137._0_8_;
            auStack_270[2] = auVar138._8_4_;
            auStack_270[3] = auVar138._12_4_;
            auStack_270[0] = auVar138._0_4_;
            auStack_270[1] = auVar138._4_4_;
            auVar14._8_8_ = uVar28;
            auVar14._0_8_ = uVar27;
            auVar108 = a64_TBL(ZEXT816(0),auVar85,auVar14);
            auVar132._0_4_ = auVar138._0_4_ - auVar137._0_4_;
            auVar132._4_4_ = auVar138._4_4_ - auVar137._4_4_;
            auVar132._8_4_ = auVar138._8_4_ - auVar137._8_4_;
            auVar132._12_4_ = auVar138._12_4_ - auVar137._12_4_;
            fVar117 = (auVar85._0_4_ + auVar85._0_4_) * auVar108._0_4_;
            fVar121 = (auVar85._4_4_ + auVar85._4_4_) * auVar108._4_4_;
            fVar122 = (auVar85._8_4_ + auVar85._8_4_) * auVar108._8_4_;
            auVar15._8_8_ = uVar28;
            auVar15._0_8_ = uVar27;
            auVar108 = a64_TBL(ZEXT816(0),auVar132,auVar15);
            uStack_218 = auVar120._8_8_;
            local_220 = auVar120._0_8_;
            uStack_208 = auVar112._8_8_;
            local_210 = auVar112._0_8_;
            auVar102._0_4_ = auVar95._0_4_ - auVar141._0_4_;
            auVar102._4_4_ = auVar95._4_4_ - auVar141._4_4_;
            auVar102._8_4_ = auVar95._8_4_ - auVar141._8_4_;
            auVar102._12_4_ = auVar95._12_4_ - auVar141._12_4_;
            auVar116._0_4_ = auVar112._0_4_ - auVar120._0_4_;
            auVar116._4_4_ = auVar112._4_4_ - auVar120._4_4_;
            auVar116._8_4_ = auVar112._8_4_ - auVar120._8_4_;
            auVar116._12_4_ = auVar112._12_4_ - auVar120._12_4_;
            fVar123 = (auVar132._0_4_ + auVar132._0_4_) * auVar108._0_4_;
            fVar127 = (auVar132._4_4_ + auVar132._4_4_) * auVar108._4_4_;
            fVar128 = (auVar132._8_4_ + auVar132._8_4_) * auVar108._8_4_;
            auVar16._8_8_ = uVar28;
            auVar16._0_8_ = uVar27;
            auVar112 = a64_TBL(ZEXT816(0),auVar102,auVar16);
            auVar17._8_8_ = uVar28;
            auVar17._0_8_ = uVar27;
            auVar108 = a64_TBL(ZEXT816(0),auVar116,auVar17);
            fVar118 = (auVar102._0_4_ + auVar102._0_4_) * auVar112._0_4_;
            fVar104 = (auVar102._4_4_ + auVar102._4_4_) * auVar112._4_4_;
            fVar105 = (auVar102._8_4_ + auVar102._8_4_) * auVar112._8_4_;
            fVar106 = (auVar116._0_4_ + auVar116._0_4_) * auVar108._0_4_;
            fVar109 = (auVar116._4_4_ + auVar116._4_4_) * auVar108._4_4_;
            fVar110 = (auVar116._8_4_ + auVar116._8_4_) * auVar108._8_4_;
            fVar93 = fVar123 + fVar127 + fVar128 + fVar118 + fVar104 + fVar105;
            local_4d8 = (ushort *)
                        CONCAT44(fVar123 + fVar127 + fVar128 + fVar118 + fVar104 + fVar105,fVar93);
            fVar118 = fVar117 + fVar121 + fVar122 + fVar106 + fVar109 + fVar110;
            local_4d0 = CONCAT44(fVar117 + fVar121 + fVar122 + fVar106 + fVar109 + fVar110,fVar118);
            uVar54 = (ulong)(byte)~(fVar93 < fVar118);
            if (*(float *)(local_480 + (uVar54 - 0xb)) <
                auVar101._0_4_ + auVar101._4_4_ + auVar124._0_4_ +
                auVar73._0_4_ + auVar73._4_4_ + auVar94._0_4_) {
              lVar53 = uVar54 * 0xc;
              iVar80 = 0;
              if (lVar33 != 0) {
                iVar80 = (int)lVar31;
              }
              iVar89 = *(int *)(&DAT_03d6c108 + lVar53);
              iVar90 = *(int *)(&DAT_03d6c10c + lVar53);
              iVar92 = *(int *)(&DAT_03d6c110 + lVar53);
              *(short *)(pauVar67[1] + 0xe) = (short)((uint)((int)local_480[iVar89] - iVar80) >> 5);
              iVar63 = (int)param_1;
              iVar80 = 0;
              if (*param_1 != 0) {
                iVar80 = (int)*param_1 + iVar63;
              }
              *puVar36 = (ushort)((uint)((int)local_480[iVar90] - iVar80) >> 5);
              iVar80 = 0;
              if (*param_1 != 0) {
                iVar80 = (int)*param_1 + iVar63;
              }
              *(short *)(pauVar34[1] + 0xe) = (short)((uint)((int)local_480[iVar92] - iVar80) >> 5);
              iVar80 = 0;
              if (*param_1 != 0) {
                iVar80 = (int)*param_1 + iVar63;
              }
              *(uint *)(*local_480[iVar89] + 0xc) =
                   (uint)((int)pauVar67 - iVar80) >> 5 & 0xffff | 0x3f000000;
              iVar80 = 0;
              if (*param_1 != 0) {
                iVar80 = (int)*param_1 + iVar63;
              }
              *(uint *)(*local_480[iVar90] + 0xc) =
                   (uint)((int)pauVar34 - iVar80) >> 5 & 0xffff | 0x3f000000;
              iVar80 = 0;
              if (*param_1 != 0) {
                iVar80 = (int)*param_1 + iVar63;
              }
              uVar56 = 0;
              if (fVar93 >= fVar118) {
                uVar56 = 2;
              }
              uVar54 = (ulong)uVar56;
              *(uint *)(*local_480[iVar92] + 0xc) =
                   (uint)((int)pauVar34 - iVar80) >> 5 & 0xffff | 0x3f000000;
              uVar22 = *(undefined4 *)(local_480 + uVar54 * 4 + 0x40);
              uVar23 = *(undefined4 *)((long)local_480 + uVar54 * 0x20 + 0x204);
              *(undefined4 *)(*pauVar67 + 8) = auStack_270[uVar54 * 8 + -2];
              *(undefined4 *)(*pauVar67 + 0xc) = *(undefined4 *)(*pauVar67 + 0xc);
              *(undefined4 *)*pauVar67 = uVar22;
              *(undefined4 *)(*pauVar67 + 4) = uVar23;
              uVar22 = auStack_270[uVar54 * 8];
              uVar23 = auStack_270[uVar54 * 8 + 1];
              uVar79 = *(undefined4 *)(pauVar67[1] + 0xc);
              uVar44 = (ulong)(uVar56 | 1);
              *(undefined4 *)(pauVar67[1] + 8) = auStack_270[uVar54 * 8 + 2];
              *(undefined4 *)(pauVar67[1] + 0xc) = uVar79;
              *(undefined4 *)pauVar67[1] = uVar22;
              *(undefined4 *)(pauVar67[1] + 4) = uVar23;
              uVar22 = *(undefined4 *)(local_480 + uVar44 * 4 + 0x40);
              uVar23 = *(undefined4 *)((long)local_480 + uVar44 * 0x20 + 0x204);
              *(undefined4 *)(*pauVar34 + 8) = auStack_270[uVar44 * 8 + -2];
              *(undefined4 *)(*pauVar34 + 0xc) = *(undefined4 *)(*pauVar34 + 0xc);
              *(undefined4 *)*pauVar34 = uVar22;
              *(undefined4 *)(*pauVar34 + 4) = uVar23;
              auVar108 = *(undefined1 (*) [16])(auStack_270 + uVar44 * 8);
              bVar62 = true;
              auVar74._0_12_ = auVar108._0_12_;
              auVar74._12_4_ = *(undefined4 *)(pauVar34[1] + 0xc);
              *(long *)(pauVar34[1] + 8) = auVar74._8_8_;
              *(long *)pauVar34[1] = auVar108._0_8_;
            }
            lVar33 = *param_1;
            lVar31 = lVar33 + (long)param_1;
          }
        }
        lVar53 = 0;
        if (lVar33 != 0) {
          lVar53 = lVar31;
        }
        uVar8 = *(ushort *)(lVar53 + uVar47 * 0x20 + 0x1c);
        uVar56 = (uint)uVar8;
        if (uVar8 == 0) {
          do {
            uVar56 = *(uint *)(lVar53 + uVar47 * 0x20 + 0xc);
            uVar54 = (ulong)uVar56 & 0xffff;
            uVar45 = (uint)uVar47;
            if ((uint)uVar32 == (uVar56 & 0xffff)) {
              bVar60 = 1;
              goto LAB_02eae33c;
            }
            uVar47 = uVar54;
          } while (*(ushort *)(lVar53 + uVar54 * 0x20 + 0x1e) == uVar45);
          bVar60 = 0;
LAB_02eae33c:
          uVar56 = uVar45;
          if ((int)uVar54 != 0) {
            uVar56 = (uint)*(ushort *)(lVar53 + uVar54 * 0x20 + 0x1e);
          }
          if ((bool)(bVar60 & uVar56 == uVar45)) break;
        }
        uVar47 = (ulong)uVar56;
      } while (uVar56 != 0);
    }
    lVar31 = 0;
    if (lVar33 != 0) {
      lVar31 = lVar33 + (long)param_1;
    }
    uVar8 = *(ushort *)(lVar31 + uVar32 * 0x20 + 0x1c);
    uVar47 = (ulong)uVar8;
  } while (bVar62);
  if (uVar8 != 0) {
    do {
      lVar53 = lVar33 + (long)param_1;
      lVar31 = 0;
      if (lVar33 != 0) {
        lVar31 = lVar53;
      }
      lVar3 = lVar31 + uVar47 * 0x20;
      uVar8 = *(ushort *)(lVar3 + 0x1c);
      if ((ulong)uVar8 != 0) {
        pfVar4 = (float *)(lVar31 + (ulong)uVar8 * 0x20);
        pfVar5 = (float *)(lVar31 + (ulong)*(ushort *)(lVar3 + 0x1e) * 0x20);
        auVar75._0_4_ = pfVar4[4] - *pfVar4;
        auVar75._4_4_ = pfVar4[5] - pfVar4[1];
        auVar75._8_4_ = pfVar4[6] - pfVar4[2];
        auVar75._12_4_ = 0.0 - pfVar4[3];
        auVar18._8_8_ = uVar28;
        auVar18._0_8_ = uVar27;
        auVar108 = a64_TBL(ZEXT816(0),auVar75,auVar18);
        auVar76._0_4_ = (auVar75._0_4_ + auVar75._0_4_) * auVar108._0_4_;
        auVar76._4_4_ = (auVar75._4_4_ + auVar75._4_4_) * auVar108._4_4_;
        auVar76._8_4_ = (auVar75._8_4_ + auVar75._8_4_) * auVar108._8_4_;
        auVar76._12_4_ = (auVar75._12_4_ + auVar75._12_4_) * auVar108._12_4_;
        auVar86._0_4_ = pfVar5[4] - *pfVar5;
        auVar86._4_4_ = pfVar5[5] - pfVar5[1];
        auVar86._8_4_ = pfVar5[6] - pfVar5[2];
        auVar86._12_4_ = 0.0 - pfVar5[3];
        auVar112 = NEON_ext(auVar76,auVar76,8,1);
        auVar19._8_8_ = uVar28;
        auVar19._0_8_ = uVar27;
        auVar108 = a64_TBL(ZEXT816(0),auVar86,auVar19);
        auVar87._0_4_ = (auVar86._0_4_ + auVar86._0_4_) * auVar108._0_4_;
        auVar87._4_4_ = (auVar86._4_4_ + auVar86._4_4_) * auVar108._4_4_;
        auVar87._8_4_ = (auVar86._8_4_ + auVar86._8_4_) * auVar108._8_4_;
        auVar87._12_4_ = (auVar86._12_4_ + auVar86._12_4_) * auVar108._12_4_;
        auVar108 = NEON_ext(auVar87,auVar87,8,1);
        if (auVar76._0_4_ + auVar76._4_4_ + auVar112._0_4_ <
            auVar87._0_4_ + auVar87._4_4_ + auVar108._0_4_) {
          *(ushort *)(lVar3 + 0x1c) = *(ushort *)(lVar3 + 0x1e);
          *(ushort *)(lVar3 + 0x1e) = uVar8;
          lVar33 = *param_1;
          lVar53 = lVar33 + (long)param_1;
        }
      }
      lVar31 = 0;
      if (lVar33 != 0) {
        lVar31 = lVar53;
      }
      uVar8 = *(ushort *)(lVar31 + uVar47 * 0x20 + 0x1c);
      uVar56 = (uint)uVar8;
      if (uVar8 == 0) {
        do {
          uVar56 = *(uint *)(lVar31 + uVar47 * 0x20 + 0xc);
          uVar54 = (ulong)uVar56 & 0xffff;
          uVar45 = (uint)uVar47;
          if ((uint)uVar32 == (uVar56 & 0xffff)) {
            bVar60 = 1;
            goto LAB_02eae46c;
          }
          uVar47 = uVar54;
        } while (*(ushort *)(lVar31 + uVar54 * 0x20 + 0x1e) == uVar45);
        bVar60 = 0;
LAB_02eae46c:
        uVar56 = uVar45;
        if ((int)uVar54 != 0) {
          uVar56 = (uint)*(ushort *)(lVar31 + uVar54 * 0x20 + 0x1e);
        }
        if ((bool)(bVar60 & uVar56 == uVar45)) break;
      }
      uVar47 = (ulong)uVar56;
    } while (uVar56 != 0);
  }
  *(uint *)(lVar31 + uVar32 * 0x20 + 0xc) = (uint)uVar46 | 0x3f000000;
  if ((uint)uVar46 == 0) {
    *(short *)((long)param_1 + 0x1c) = (short)uVar32;
  }
  else {
    lVar31 = 0;
    if (*param_1 != 0) {
      lVar31 = *param_1 + (long)param_1;
    }
    *(short *)(lVar31 + uVar46 * 0x20 + local_600 * 2 + 0x1c) = (short)uVar32;
    lVar31 = *param_1;
    do {
      lVar33 = 0;
      if (lVar31 != 0) {
        lVar33 = lVar31 + (long)param_1;
      }
      puVar35 = (undefined8 *)(lVar33 + (uVar46 & 0xffff) * 0x20);
      pauVar67 = (undefined1 (*) [16])(lVar33 + (ulong)*(ushort *)((long)puVar35 + 0x1c) * 0x20);
      pauVar34 = (undefined1 (*) [16])(lVar33 + (ulong)*(ushort *)((long)puVar35 + 0x1e) * 0x20);
      auVar77._0_12_ = SUB1612(pauVar67[1],0);
      auVar77._12_4_ = 0;
      auVar103._0_12_ = SUB1612(pauVar34[1],0);
      auVar103._12_4_ = 0;
      auVar112 = NEON_fmin(*pauVar67,*pauVar34,4);
      auVar88._0_12_ = auVar112._0_12_;
      auVar88._12_4_ = *(undefined4 *)((long)puVar35 + 0xc);
      auVar108 = NEON_fmax(auVar77,auVar103,4);
      auVar78._0_12_ = auVar108._0_12_;
      auVar78._12_4_ = *(undefined4 *)((long)puVar35 + 0x1c);
      puVar35[1] = auVar88._8_8_;
      *puVar35 = auVar112._0_8_;
      puVar35[3] = auVar78._8_8_;
      puVar35[2] = auVar108._0_8_;
      lVar31 = *param_1;
      lVar33 = 0;
      if (lVar31 != 0) {
        lVar33 = lVar31 + (long)param_1;
      }
      uVar56 = *(uint *)(lVar33 + (uVar46 & 0xffff) * 0x20 + 0xc);
      uVar46 = (ulong)uVar56;
    } while ((uVar56 & 0xffff) != 0);
  }
  if ((int)local_498 != 0) {
    lVar31 = (long)(int)local_498 << 6;
    do {
      lVar33 = lVar30 + lVar31;
      *(undefined4 *)(lVar33 + -0x38) = 0;
      if ((-1 < (int)*(uint *)(lVar33 + -0x34)) && (*(long *)(lVar33 + -0x40) != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,*(long *)(lVar33 + -0x40),(ulong)*(uint *)(lVar33 + -0x34) << 1)
        ;
      }
      lVar31 = lVar31 + -0x40;
      *(undefined8 *)(lVar33 + -0x40) = 0;
      *(undefined4 *)(lVar33 + -0x34) = 0x80000000;
    } while (lVar31 != 0);
  }
  uVar46 = local_498;
  uVar32 = (ulong)local_498._4_4_;
  local_498 = (ulong)local_498._4_4_ << 0x20;
  if ((-1 < (long)uVar46) && (local_4a0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_4a0,uVar32 << 6);
  }
  lVar30 = local_4b0;
  local_4a0 = 0;
  local_498 = CONCAT44(0x80000000,(int)local_498);
  if ((int)local_4a8 != 0) {
    lVar31 = (long)(int)local_4a8 << 6;
    do {
      lVar33 = lVar30 + lVar31;
      *(undefined4 *)(lVar33 + -0x38) = 0;
      if ((-1 < (int)*(uint *)(lVar33 + -0x34)) && (*(long *)(lVar33 + -0x40) != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,*(long *)(lVar33 + -0x40),(ulong)*(uint *)(lVar33 + -0x34) << 1)
        ;
      }
      lVar31 = lVar31 + -0x40;
      *(undefined8 *)(lVar33 + -0x40) = 0;
      *(undefined4 *)(lVar33 + -0x34) = 0x80000000;
    } while (lVar31 != 0);
  }
  uVar46 = local_4a8;
  uVar32 = (ulong)local_4a8._4_4_;
  local_4a8 = (ulong)local_4a8._4_4_ << 0x20;
  if ((-1 < (long)uVar46) && (local_4b0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_4b0,uVar32 << 6);
  }
  pauVar67 = local_4c0;
  local_4b0 = 0;
  local_4a8 = CONCAT44(0x80000000,(int)local_4a8);
  if ((int)local_4b8 != 0) {
    lVar30 = (long)(int)local_4b8 << 6;
    do {
      uVar56 = *(uint *)(pauVar67[-4] + lVar30 + 0xc);
      *(undefined4 *)(pauVar67[-4] + lVar30 + 8) = 0;
      if ((-1 < (int)uVar56) && (*(long *)(pauVar67[-4] + lVar30) != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,*(long *)(pauVar67[-4] + lVar30),(ulong)uVar56 << 1);
      }
      lVar31 = lVar30 + -0x40;
      *(undefined8 *)(pauVar67[-4] + lVar30) = 0;
      *(undefined4 *)(pauVar67[-4] + lVar30 + 0xc) = 0x80000000;
      lVar30 = lVar31;
    } while (lVar31 != 0);
  }
  uVar46 = local_4b8;
  uVar32 = (ulong)local_4b8._4_4_;
  local_4b8 = (ulong)local_4b8._4_4_ << 0x20;
  if ((-1 < (long)uVar46) && (local_4c0 != (undefined1 (*) [16])0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_4c0,uVar32 << 6);
  }
  plVar38 = local_490;
  if ((int)local_488 != 0) {
    lVar30 = (long)(int)local_488 * 0x18;
    do {
      uVar56 = *(uint *)((long)plVar38 + lVar30 + -0xc);
      *(undefined4 *)((long)plVar38 + lVar30 + -0x10) = 0;
      if ((-1 < (int)uVar56) && (lVar31 = *(long *)((long)plVar38 + lVar30 + -0x18), lVar31 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar31,(ulong)uVar56 << 1);
      }
      lVar31 = lVar30 + -0x18;
      *(undefined8 *)((long)plVar38 + lVar30 + -0x18) = 0;
      *(undefined4 *)((long)plVar38 + lVar30 + -0xc) = 0x80000000;
      lVar30 = lVar31;
    } while (lVar31 != 0);
  }
  uVar56 = local_488._4_4_;
  uVar46 = (ulong)local_488._4_4_;
  local_488 = (ulong)local_488._4_4_ << 0x20;
  if ((-1 < (int)uVar56) && (local_490 != (long *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_490,uVar46 * 0x18);
  }
  return;
}


