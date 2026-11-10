/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00853f54; name: FUN_00853f54
 */


/* WARNING: Removing unreachable block (ram,0x00854848) */
/* WARNING: Removing unreachable block (ram,0x00856328) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_00853f54(float param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  bool bVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  float *pfVar23;
  undefined1 (*pauVar24) [16];
  void *__s;
  void *__s_00;
  float *pfVar25;
  undefined1 (*pauVar26) [16];
  ulong uVar27;
  float *pfVar28;
  byte bVar29;
  int iVar30;
  long lVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  float *pfVar40;
  float *pfVar41;
  uint uVar42;
  ulong *puVar43;
  ulong uVar44;
  float *pfVar45;
  ulong uVar46;
  uint uVar47;
  ulong uVar48;
  long *plVar49;
  long lVar50;
  ulong uVar51;
  float *pfVar52;
  char *pcVar53;
  char *pcVar54;
  ulong uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  float fVar67;
  undefined1 auVar61 [16];
  float fVar65;
  undefined1 auVar62 [16];
  undefined1 extraout_q0 [16];
  undefined1 extraout_q0_00 [16];
  undefined1 extraout_q0_01 [16];
  undefined1 extraout_q0_02 [16];
  undefined1 extraout_q0_03 [16];
  undefined1 extraout_q0_04 [16];
  undefined1 auVar63 [16];
  undefined1 extraout_q0_05 [16];
  undefined1 extraout_q0_06 [16];
  undefined1 extraout_q0_07 [16];
  undefined1 extraout_q0_08 [16];
  undefined1 extraout_q0_09 [16];
  undefined1 extraout_q0_10 [16];
  undefined1 extraout_q0_11 [16];
  undefined1 extraout_q0_12 [16];
  undefined1 extraout_q0_13 [16];
  undefined1 extraout_q0_14 [16];
  undefined1 extraout_q0_15 [16];
  undefined1 extraout_q0_16 [16];
  undefined1 extraout_q0_17 [16];
  float fVar66;
  undefined1 auVar64 [16];
  undefined1 extraout_q0_18 [16];
  undefined8 uVar68;
  float fVar70;
  undefined1 auVar69 [16];
  float *pfVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  undefined8 uVar78;
  float fVar82;
  undefined1 auVar79 [12];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar83;
  float fVar84;
  undefined8 uVar85;
  float fVar88;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar93 [16];
  float fVar94;
  float fVar95;
  float fVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  float fVar99;
  undefined8 in_register_00005208;
  uint local_60c;
  uint local_5e4;
  float *local_5e0;
  uint local_5d8;
  uint local_5d4;
  long local_5d0;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined8 uStack_598;
  char *local_590;
  float local_580;
  float fStack_57c;
  float fStack_578;
  float fStack_574;
  float local_560;
  float fStack_55c;
  float fStack_558;
  float *local_538;
  char *local_530;
  ulong local_528;
  long local_520;
  char *local_518;
  ulong local_510;
  float *local_508;
  undefined8 local_500;
  long local_4f8;
  float *local_4f0;
  char *local_4e8;
  float *local_4e0;
  undefined8 local_4d8;
  long local_4d0;
  float *local_4c8;
  float *local_4c0;
  long local_4b8;
  undefined8 local_4b0;
  long local_4a8;
  long local_4a0;
  float *local_498;
  float *local_490;
  undefined8 local_488;
  long local_480;
  float *local_478;
  float *local_470;
  float *local_290;
  float fStack_288;
  float fStack_284;
  long local_280;
  undefined8 uStack_278;
  long local_270;
  undefined4 uStack_264;
  long local_90 [2];
  ulong local_78;
  
  if (param_1 < 0.0) {
    return ZEXT816(0);
  }
  lVar21 = *(long *)(param_2 + 0x18);
  if (*(int *)(lVar21 + 0x1f0) != 3) {
    return ZEXT816(0);
  }
  if (*(char *)(lVar21 + 0x1fc) == '\0') {
    FUN_0085dd34();
    lVar21 = *(long *)(param_2 + 0x18);
  }
  FUN_0325fab4(&local_290,*(undefined8 *)(lVar21 + 0x30));
  uVar35 = CONCAT44(fStack_284,fStack_284);
  iVar17 = *(int *)(*(long *)(param_2 + 0x18) + 0x1f0);
  uVar97 = uVar35;
  if (1 < iVar17) {
    uVar60 = CONCAT44(uStack_264,uStack_264);
    uVar4 = iVar17 - 1U & 1;
    uVar68 = CONCAT44(*(undefined4 *)(PTR_DAT_047d19b0 + 0x50),
                      *(undefined4 *)(PTR_DAT_047d19b0 + 0x50));
    uVar59 = CONCAT44(uStack_278._4_4_,uStack_278._4_4_);
    if (iVar17 == 2) {
      iVar19 = 1;
    }
    else {
      iVar19 = 1;
      do {
        uVar98 = uVar59;
        if (((iVar19 != 1) && (uVar98 = uVar68, iVar19 != 3)) && (uVar98 = uVar60, iVar19 != 2)) {
          uVar98 = uVar35;
        }
        uVar98 = NEON_fmin(uVar97,uVar98,4);
        uVar97 = uVar59;
        if (((iVar19 != 0) && (uVar97 = uVar60, iVar19 != 1)) && (uVar97 = uVar68, iVar19 != 2)) {
          uVar97 = uVar35;
        }
        uVar97 = NEON_fmin(uVar98,uVar97,4);
        iVar19 = iVar19 + 2;
      } while (iVar17 - uVar4 != iVar19);
    }
    if (uVar4 != 0) {
      if (((iVar19 != 1) && (uVar59 = uVar60, iVar19 != 2)) && (uVar59 = uVar68, iVar19 != 3)) {
        uVar59 = uVar35;
      }
      uVar97 = NEON_fmin(uVar97,uVar59,4);
    }
  }
  FUN_0085ac74(param_2);
  fVar57 = (float)FUN_031cb480();
  auVar61 = FUN_0085ad14(param_2);
  uVar22 = FUN_00853b38(param_2);
  lVar50 = (long)*(int *)(*(long *)(param_2 + 0x18) + 0x78);
  uVar4 = *(uint *)(*(long *)(param_2 + 0x18) + 0x60);
  uVar55 = (ulong)uVar4;
  lVar21 = tpidr_el0;
  lVar33 = *(long *)(lVar21 + 0x1000b8);
  if (lVar33 == 0) {
    lVar33 = FUN_00e5d3b4();
    *(long *)(lVar21 + 0x1000b8) = lVar33;
  }
  lVar33 = *(long *)(*(long *)(lVar33 + 0x3d0) + 0x10);
  if (*(long *)(lVar33 + 8) == 0) {
    pfVar52 = (float *)(-(uVar22 >> 0x1f & 1) & 0xfffffff000000000 | (uVar22 & 0xffffffff) << 4);
    local_490 = pfVar52;
    if (lVar33 == 0) goto LAB_00854198;
    local_290 = (float *)((long)pfVar52 + 0x3fU & 0xffffffffffffffc0);
    if (*(float **)(lVar33 + 0x28) < local_290) {
LAB_008540dc:
      pfVar23 = (float *)FUN_031cf3b4(lVar33,&local_290);
    }
    else {
      pfVar23 = *(float **)(lVar33 + 0x38);
      if (*(ulong *)(lVar33 + 0x40) < (ulong)((long)local_290 + (long)pfVar23)) goto LAB_008540dc;
      *(long *)(lVar33 + 0x38) = (long)local_290 + (long)pfVar23;
    }
  }
  else {
    local_490 = (float *)(-(uVar22 >> 0x1f & 1) & 0xfffffff000000000 | (uVar22 & 0xffffffff) << 4);
LAB_00854198:
    pfVar52 = local_490;
    pfVar23 = (float *)(**(code **)PTR_DAT_047d1a08)(1,&local_490,0x40);
    lVar33 = 0;
  }
  uVar38 = uVar22 & 0xffffffff;
  uVar32 = (uint)uVar22;
  if ((int)uVar32 < 1) {
LAB_00854268:
    local_590 = (char *)0x0;
    __s = (void *)0x0;
    local_5d8 = 0x80000000;
  }
  else {
    uVar48 = 0;
    do {
      pauVar24 = (undefined1 (*) [16])FUN_00853c80(param_2,uVar48 & 0xffffffff);
      auVar62 = *pauVar24;
      *(long *)(pfVar23 + uVar48 * 4 + 2) = auVar62._8_8_;
      *(long *)(pfVar23 + uVar48 * 4) = auVar62._0_8_;
      uVar48 = uVar48 + 1;
    } while (uVar38 != uVar48);
    if ((int)uVar32 < 1) goto LAB_00854268;
    plVar49 = (long *)(PTR_PTR_047d1a50 + 0x20);
    local_590 = (char *)(**(code **)(*plVar49 + 0x18))(plVar49,uVar38);
    memset(local_590,0,uVar38);
    __s = (void *)(**(code **)(*plVar49 + 0x18))(plVar49,uVar38);
    memset(__s,0,uVar38);
    local_5d8 = uVar32;
  }
  uVar48 = lVar50 * 3;
  lVar34 = *(long *)(lVar21 + 0x1000b8);
  if (lVar34 == 0) {
    lVar34 = FUN_00e5d3b4();
    *(long *)(lVar21 + 0x1000b8) = lVar34;
  }
  local_5d0 = *(long *)(*(long *)(lVar34 + 0x3d0) + 0x10);
  uVar47 = (uint)uVar48;
  if (*(long *)(local_5d0 + 8) == 0) {
    uVar51 = (ulong)(int)uVar47;
    local_5e0 = (float *)(-(uVar48 >> 0x1f & 1) & 0xfffffffc00000000 | lVar50 * 0xc & 0x3fffffffcU);
    uVar48 = uVar51;
    local_490 = local_5e0;
    if (local_5d0 == 0) goto LAB_00854330;
    local_290 = (float *)((long)local_5e0 + 0x3fU & 0xffffffffffffffc0);
    if (*(float **)(local_5d0 + 0x28) < local_290) {
LAB_008542e8:
      lVar50 = FUN_031cf3b4(local_5d0,&local_290);
    }
    else {
      lVar50 = *(long *)(local_5d0 + 0x38);
      if (*(ulong *)(local_5d0 + 0x40) < (ulong)((long)local_290 + lVar50)) goto LAB_008542e8;
      *(long *)(local_5d0 + 0x38) = (long)local_290 + lVar50;
    }
  }
  else {
    local_490 = (float *)(lVar50 * 0xc);
LAB_00854330:
    local_5e0 = local_490;
    lVar50 = (**(code **)PTR_DAT_047d1a08)(1,&local_490,0x40);
    local_5d0 = 0;
  }
  local_4b8 = 0;
  local_4b0 = 0x8000000000000000;
  lVar34 = *(long *)(lVar21 + 0x1000b8);
  if (lVar34 == 0) {
    lVar34 = FUN_00e5d3b4();
    *(long *)(lVar21 + 0x1000b8) = lVar34;
  }
  local_4a8 = *(long *)(*(long *)(lVar34 + 0x3d0) + 0x10);
  if (*(long *)(local_4a8 + 8) == 0) {
    local_498 = (float *)(uVar48 << 5);
    if (local_4a8 == 0) goto LAB_00854408;
    local_290 = (float *)(uVar48 * 0x20 + 0x3f & 0xffffffffffffffc0);
    local_490 = local_498;
    if (*(float **)(local_4a8 + 0x28) < local_290) {
LAB_008543c0:
      local_4a0 = FUN_031cf3b4(local_4a8,&local_290);
    }
    else {
      local_4a0 = *(long *)(local_4a8 + 0x38);
      if (*(ulong *)(local_4a8 + 0x40) < (ulong)((long)local_290 + local_4a0)) goto LAB_008543c0;
      *(long *)(local_4a8 + 0x38) = (long)local_290 + local_4a0;
    }
  }
  else {
    local_4a8 = 0;
LAB_00854408:
    local_498 = (float *)(uVar48 << 5);
    local_490 = local_498;
    local_4a0 = (**(code **)PTR_DAT_047d1a08)(1,&local_490,0x40);
  }
  local_4b0._4_4_ = uVar47 | 0x80000000;
  local_4b8 = local_4a0;
  if ((int)uVar4 < 1) {
    local_538 = (float *)0x0;
    local_5e4 = 0;
    local_5d4 = 0x80000000;
  }
  else {
    local_538 = (float *)(**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x18))
                                   (PTR_PTR_047d1a50 + 0x20,uVar55 << 4);
    local_5e4 = uVar4;
    local_5d4 = uVar4;
  }
  local_4e0 = (float *)0x0;
  local_4d8 = 0x8000000000000000;
  lVar34 = *(long *)(lVar21 + 0x1000b8);
  if (lVar34 == 0) {
    lVar34 = FUN_00e5d3b4();
    *(long *)(lVar21 + 0x1000b8) = lVar34;
  }
  local_4d0 = *(long *)(*(long *)(lVar34 + 0x3d0) + 0x10);
  uVar47 = uVar32 << 2;
  if (*(long *)(local_4d0 + 8) == 0) {
    local_4c0 = (float *)(-(ulong)((uVar32 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                         (ulong)uVar47 << 2);
    local_490 = local_4c0;
    if (local_4d0 == 0) goto LAB_00854538;
    local_290 = (float *)((long)local_4c0 + 0x3fU & 0xffffffffffffffc0);
    if (*(float **)(local_4d0 + 0x28) < local_290) {
LAB_008544ec:
      local_4c8 = (float *)FUN_031cf3b4(local_4d0,&local_290);
    }
    else {
      local_4c8 = *(float **)(local_4d0 + 0x38);
      if (*(ulong *)(local_4d0 + 0x40) < (ulong)((long)local_290 + (long)local_4c8))
      goto LAB_008544ec;
      *(long *)(local_4d0 + 0x38) = (long)local_290 + (long)local_4c8;
    }
  }
  else {
    local_4d0 = 0;
    local_490 = (float *)(-(ulong)((uVar32 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                         (ulong)uVar47 << 2);
LAB_00854538:
    local_4c0 = local_490;
    local_4c8 = (float *)(**(code **)PTR_DAT_047d1a08)(1,&local_490,0x40);
  }
  local_4d8 = CONCAT44(uVar47,(uint)local_4d8) | 0x8000000000000000;
  local_4e0 = local_4c8;
  if ((int)uVar32 < 0) {
    __s_00 = (void *)0x0;
    uVar47 = 0x80000000;
  }
  else {
    uVar47 = uVar32 + 1;
    __s_00 = (void *)(**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x18))
                               (PTR_PTR_047d1a50 + 0x20,(ulong)uVar47 << 2);
    memset(__s_00,0,uVar38 * 4 + 4);
  }
  puVar1 = PTR_PTR_047d1a50;
  for (plVar49 = *(long **)(*(long *)(param_2 + 0x18) + 0x70); plVar49 != (long *)0x0;
      plVar49 = (long *)*plVar49) {
    iVar17 = FUN_00853d28(param_2,plVar49);
    lVar34 = plVar49[2];
    uVar42 = iVar17 << 0x10;
    uVar18 = FUN_00853be4(param_2,lVar34);
    fVar56 = (float)(uVar42 | uVar18 & 0xffff);
    if (0 < (int)(uint)local_4d8) {
      uVar48 = 0;
      do {
        if (local_4e0[uVar48] == fVar56) {
          if ((int)uVar48 != -1) goto LAB_008546d4;
          break;
        }
        uVar48 = uVar48 + 1;
      } while ((local_4d8 & 0xffffffff) != uVar48);
    }
    auVar62 = *(undefined1 (*) [16])(lVar34 + 0x10);
    *(long *)(local_538 + (long)(int)uVar18 * 4 + 2) = auVar62._8_8_;
    *(long *)(local_538 + (long)(int)uVar18 * 4) = auVar62._0_8_;
    lVar34 = (long)(int)(uint)local_4d8;
    if ((int)(local_4d8._4_4_ & 0x7fffffff) <= (int)(uint)local_4d8) {
      FUN_02ed686c(&local_4e0,puVar1,lVar34 + 1);
    }
    local_4e0[(int)(uint)local_4d8] = fVar56;
    local_4d8 = CONCAT44(local_4d8._4_4_,(int)(lVar34 + 1));
    uVar48 = -(ulong)(iVar17 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar17 + 1U) << 2;
    *(int *)((long)__s_00 + uVar48) = *(int *)((long)__s_00 + uVar48) + 1;
LAB_008546d4:
    lVar34 = plVar49[3];
    uVar18 = FUN_00853be4(param_2,lVar34);
    fVar56 = (float)(uVar18 & 0xffff | uVar42);
    if (0 < (int)(uint)local_4d8) {
      uVar48 = 0;
      do {
        if (local_4e0[uVar48] == fVar56) {
          if ((int)uVar48 != -1) goto LAB_0085477c;
          break;
        }
        uVar48 = uVar48 + 1;
      } while ((local_4d8 & 0xffffffff) != uVar48);
    }
    auVar62 = *(undefined1 (*) [16])(lVar34 + 0x10);
    *(long *)(local_538 + (long)(int)uVar18 * 4 + 2) = auVar62._8_8_;
    *(long *)(local_538 + (long)(int)uVar18 * 4) = auVar62._0_8_;
    lVar34 = (long)(int)(uint)local_4d8;
    if ((int)(local_4d8._4_4_ & 0x7fffffff) <= (int)(uint)local_4d8) {
      FUN_02ed686c(&local_4e0,puVar1,lVar34 + 1);
    }
    local_4e0[(int)(uint)local_4d8] = fVar56;
    local_4d8 = CONCAT44(local_4d8._4_4_,(int)(lVar34 + 1));
    uVar48 = -(ulong)(iVar17 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar17 + 1U) << 2;
    *(int *)((long)__s_00 + uVar48) = *(int *)((long)__s_00 + uVar48) + 1;
LAB_0085477c:
    lVar34 = plVar49[4];
    uVar18 = FUN_00853be4(param_2,lVar34);
    fVar56 = (float)(uVar18 & 0xffff | uVar42);
    if (0 < (int)(uint)local_4d8) {
      uVar48 = 0;
      do {
        if (local_4e0[uVar48] == fVar56) {
          if ((int)uVar48 != -1) goto LAB_0085460c;
          break;
        }
        uVar48 = uVar48 + 1;
      } while ((local_4d8 & 0xffffffff) != uVar48);
    }
    auVar62 = *(undefined1 (*) [16])(lVar34 + 0x10);
    *(long *)(local_538 + (long)(int)uVar18 * 4 + 2) = auVar62._8_8_;
    *(long *)(local_538 + (long)(int)uVar18 * 4) = auVar62._0_8_;
    lVar34 = (long)(int)(uint)local_4d8;
    if ((int)(local_4d8._4_4_ & 0x7fffffff) <= (int)(uint)local_4d8) {
      FUN_02ed686c(&local_4e0,puVar1,lVar34 + 1);
    }
    local_4e0[(int)(uint)local_4d8] = fVar56;
    local_4d8 = CONCAT44(local_4d8._4_4_,(int)(lVar34 + 1));
    uVar48 = -(ulong)(iVar17 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar17 + 1U) << 2;
    *(int *)((long)__s_00 + uVar48) = *(int *)((long)__s_00 + uVar48) + 1;
LAB_0085460c:
  }
  if (1 < (int)(uint)local_4d8) {
    pfVar28 = local_4e0 + (int)((uint)local_4d8 + -1);
    uVar42 = 0;
    local_290 = local_4e0;
    local_490 = pfVar28;
    pfVar71 = local_4e0;
LAB_0085486c:
    lVar34 = (long)(int)uVar42;
LAB_00854880:
    do {
      pfVar45 = pfVar28;
      do {
        pfVar28 = pfVar45;
        fVar56 = pfVar71[(long)pfVar28 - (long)pfVar71 >> 3];
        pfVar40 = pfVar71;
        pfVar45 = pfVar28;
        do {
          do {
            pfVar41 = pfVar40;
            pfVar40 = pfVar41 + 1;
          } while ((uint)*pfVar41 < (uint)fVar56);
          pfVar25 = pfVar45 + 1;
          do {
            pfVar45 = pfVar25;
            pfVar25 = pfVar45 + -1;
            fVar65 = *pfVar25;
          } while ((uint)fVar56 < (uint)fVar65);
          if (pfVar25 < pfVar41) {
            pfVar40 = pfVar41;
            pfVar45 = pfVar25;
          }
          else {
            pfVar45 = pfVar45 + -2;
            if (pfVar41 != pfVar25) {
              *pfVar25 = *pfVar41;
              *pfVar41 = fVar65;
            }
          }
        } while (pfVar40 <= pfVar45);
        if (pfVar45 <= pfVar71) {
          pfVar71 = pfVar40;
          if (pfVar40 < pfVar28) goto LAB_00854880;
          uVar42 = (int)lVar34 - 1;
          if ((int)lVar34 < 1) goto LAB_00854828;
          pfVar71 = (&local_290)[uVar42];
          pfVar28 = (&local_490)[uVar42];
          goto LAB_0085486c;
        }
      } while (pfVar28 <= pfVar40);
      pfVar41 = pfVar45;
      pfVar25 = pfVar71;
      if ((long)pfVar28 - (long)pfVar40 <= (long)pfVar45 - (long)pfVar71) {
        pfVar41 = pfVar28;
        pfVar25 = pfVar40;
        pfVar28 = pfVar45;
        pfVar40 = pfVar71;
      }
      (&local_290)[lVar34] = pfVar40;
      (&local_490)[lVar34] = pfVar28;
      pfVar71 = pfVar25;
      pfVar28 = pfVar41;
      lVar34 = lVar34 + 1;
    } while( true );
  }
LAB_00854828:
  if (1 < (int)uVar32) {
    iVar17 = *(int *)((long)__s_00 + 4);
    if (uVar32 == 2) {
      lVar39 = 1;
    }
    else {
      lVar34 = 0;
      do {
        lVar39 = lVar34;
        iVar17 = *(int *)((long)__s_00 + lVar39 * 4 + 8) + iVar17;
        *(int *)((long)__s_00 + lVar39 * 4 + 8) = iVar17;
        iVar17 = *(int *)((long)__s_00 + lVar39 * 4 + 0xc) + iVar17;
        *(int *)((long)__s_00 + lVar39 * 4 + 0xc) = iVar17;
        lVar34 = lVar39 + 2;
      } while (~((ulong)(uVar32 - 1) & 1) + uVar38 != lVar39 + 2);
      lVar39 = lVar39 + 3;
      if ((uVar32 - 1 & 1) == 0) goto LAB_00854998;
    }
    *(int *)((long)__s_00 + lVar39 * 4 + 4) = *(int *)((long)__s_00 + lVar39 * 4 + 4) + iVar17;
  }
LAB_00854998:
  fVar57 = fVar57 * fVar57 * 4.8359756;
  plVar49 = *(long **)(*(long *)(param_2 + 0x18) + 0x70);
  if (plVar49 == (long *)0x0) {
    uVar48 = 0;
  }
  else {
    uVar35 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x250);
    uVar48 = 0;
    do {
      pfVar28 = local_4e0;
      uVar51 = plVar49[5];
      iVar17 = FUN_00853d28(param_2,plVar49);
      iVar19 = FUN_00853d28(param_2,uVar51 & 0xfffffffffffffffc);
      if (iVar17 != iVar19) {
        uVar18 = FUN_00853d28(param_2,plVar49);
        uVar20 = FUN_00853d28(param_2,uVar51 & 0xfffffffffffffffc);
        uVar42 = uVar20;
        if (uVar18 <= uVar20) {
          uVar42 = uVar18;
          uVar18 = uVar20;
        }
        iVar17 = (int)uVar48;
        uVar20 = uVar18 & 0xffff | uVar42 << 0x10;
        if (0 < iVar17) {
          uVar51 = 0;
          do {
            if (*(uint *)(lVar50 + uVar51 * 4) == uVar20) {
              if ((int)uVar51 != -1) goto LAB_00854bbc;
              break;
            }
            uVar51 = uVar51 + 1;
          } while (uVar48 != uVar51);
        }
        *(uint *)(lVar50 + (long)iVar17 * 4) = uVar20;
        pauVar24 = (undefined1 (*) [16])FUN_00853c80(param_2,uVar42);
        pauVar26 = (undefined1 (*) [16])FUN_00853c80(param_2,uVar18);
        lVar34 = (long)(int)local_4b0;
        if ((int)(local_4b0._4_4_ & 0x7fffffff) <= (int)local_4b0) {
          FUN_0085eedc(&local_4b8,PTR_PTR_047d1a50,lVar34 + 1);
        }
        puVar2 = (undefined8 *)(local_4b8 + (long)(int)local_4b0 * 0x20);
        local_4b0._0_4_ = (int)(lVar34 + 1);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = uVar35;
        iVar19 = *(int *)((long)__s_00 + (ulong)uVar42 * 4);
        uVar48 = (ulong)(iVar17 + 1);
        if (iVar19 < *(int *)((long)__s_00 + (ulong)(uVar42 + 1) * 4)) {
          uVar59 = puVar2[2];
          uVar68 = 0;
          lVar34 = (long)iVar19;
          do {
            lVar39 = lVar34 + 1;
            auVar62 = *pauVar26;
            pfVar71 = local_538 + (ulong)*(ushort *)(pfVar28 + lVar34) * 4;
            auVar87._0_4_ = auVar62._0_4_ * *pfVar71;
            auVar87._4_4_ = auVar62._4_4_ * pfVar71[1];
            auVar87._8_4_ = auVar62._8_4_ * pfVar71[2];
            auVar87._12_4_ = auVar62._12_4_ * pfVar71[3];
            auVar86 = NEON_ext(auVar87,auVar87,8,1);
            fVar56 = auVar86._0_4_ + auVar62._12_4_;
            uVar60 = CONCAT44(-(auVar87._0_4_ + auVar87._4_4_ + fVar56),
                              -(auVar87._0_4_ + auVar87._4_4_ + fVar56));
            uVar59 = NEON_fmax(uVar59,uVar60,4);
            uVar68 = NEON_fmax(uVar68,uVar60,4);
            puVar2[2] = uVar59;
            *puVar2 = uVar68;
            lVar34 = lVar39;
          } while (lVar39 < *(int *)((long)__s_00 + (ulong)(uVar42 + 1) * 4));
        }
        iVar17 = *(int *)((long)__s_00 + (ulong)uVar18 * 4);
        if (iVar17 < *(int *)((long)__s_00 + (ulong)(uVar18 + 1) * 4)) {
          uVar59 = puVar2[1];
          uVar68 = puVar2[2];
          lVar34 = (long)iVar17;
          do {
            lVar39 = lVar34 + 1;
            auVar62 = *pauVar24;
            pfVar71 = local_538 + (ulong)*(ushort *)(pfVar28 + lVar34) * 4;
            auVar86._0_4_ = auVar62._0_4_ * *pfVar71;
            auVar86._4_4_ = auVar62._4_4_ * pfVar71[1];
            auVar86._8_4_ = auVar62._8_4_ * pfVar71[2];
            auVar86._12_4_ = auVar62._12_4_ * pfVar71[3];
            auVar87 = NEON_ext(auVar86,auVar86,8,1);
            fVar56 = auVar87._0_4_ + auVar62._12_4_;
            uVar60 = CONCAT44(-(auVar86._0_4_ + auVar86._4_4_ + fVar56),
                              -(auVar86._0_4_ + auVar86._4_4_ + fVar56));
            uVar68 = NEON_fmax(uVar68,uVar60,4);
            uVar59 = NEON_fmax(uVar59,uVar60,4);
            puVar2[2] = uVar68;
            puVar2[1] = uVar59;
            lVar34 = lVar39;
          } while (lVar39 < *(int *)((long)__s_00 + (ulong)(uVar18 + 1) * 4));
        }
      }
LAB_00854bbc:
      pfVar28 = local_4e0;
      uVar51 = plVar49[6];
      iVar17 = FUN_00853d28(param_2,plVar49);
      iVar19 = FUN_00853d28(param_2,uVar51 & 0xfffffffffffffffc);
      if (iVar17 != iVar19) {
        uVar18 = FUN_00853d28(param_2,plVar49);
        uVar20 = FUN_00853d28(param_2,uVar51 & 0xfffffffffffffffc);
        uVar42 = uVar20;
        if (uVar18 <= uVar20) {
          uVar42 = uVar18;
          uVar18 = uVar20;
        }
        iVar17 = (int)uVar48;
        uVar20 = uVar18 & 0xffff | uVar42 << 0x10;
        if (0 < iVar17) {
          uVar51 = 0;
          do {
            if (*(uint *)(lVar50 + uVar51 * 4) == uVar20) {
              if ((int)uVar51 != -1) goto LAB_00854d9c;
              break;
            }
            uVar51 = uVar51 + 1;
          } while (uVar48 != uVar51);
        }
        *(uint *)(lVar50 + (long)iVar17 * 4) = uVar20;
        pauVar24 = (undefined1 (*) [16])FUN_00853c80(param_2,uVar42);
        pauVar26 = (undefined1 (*) [16])FUN_00853c80(param_2,uVar18);
        lVar34 = (long)(int)local_4b0;
        if ((int)(local_4b0._4_4_ & 0x7fffffff) <= (int)local_4b0) {
          FUN_0085eedc(&local_4b8,PTR_PTR_047d1a50,lVar34 + 1);
        }
        puVar2 = (undefined8 *)(local_4b8 + (long)(int)local_4b0 * 0x20);
        local_4b0._0_4_ = (int)(lVar34 + 1);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = uVar35;
        iVar19 = *(int *)((long)__s_00 + (ulong)uVar42 * 4);
        uVar48 = (ulong)(iVar17 + 1);
        if (iVar19 < *(int *)((long)__s_00 + (ulong)(uVar42 + 1) * 4)) {
          uVar59 = puVar2[2];
          uVar68 = 0;
          lVar34 = (long)iVar19;
          do {
            lVar39 = lVar34 + 1;
            auVar62 = *pauVar26;
            pfVar71 = local_538 + (ulong)*(ushort *)(pfVar28 + lVar34) * 4;
            auVar93._0_4_ = auVar62._0_4_ * *pfVar71;
            auVar93._4_4_ = auVar62._4_4_ * pfVar71[1];
            auVar93._8_4_ = auVar62._8_4_ * pfVar71[2];
            auVar93._12_4_ = auVar62._12_4_ * pfVar71[3];
            auVar87 = NEON_ext(auVar93,auVar93,8,1);
            fVar56 = auVar87._0_4_ + auVar62._12_4_;
            uVar60 = CONCAT44(-(auVar93._0_4_ + auVar93._4_4_ + fVar56),
                              -(auVar93._0_4_ + auVar93._4_4_ + fVar56));
            uVar59 = NEON_fmax(uVar59,uVar60,4);
            uVar68 = NEON_fmax(uVar68,uVar60,4);
            puVar2[2] = uVar59;
            *puVar2 = uVar68;
            lVar34 = lVar39;
          } while (lVar39 < *(int *)((long)__s_00 + (ulong)(uVar42 + 1) * 4));
        }
        iVar17 = *(int *)((long)__s_00 + (ulong)uVar18 * 4);
        if (iVar17 < *(int *)((long)__s_00 + (ulong)(uVar18 + 1) * 4)) {
          uVar59 = puVar2[1];
          uVar68 = puVar2[2];
          lVar34 = (long)iVar17;
          do {
            lVar39 = lVar34 + 1;
            auVar62 = *pauVar24;
            pfVar71 = local_538 + (ulong)*(ushort *)(pfVar28 + lVar34) * 4;
            auVar72._0_4_ = auVar62._0_4_ * *pfVar71;
            auVar72._4_4_ = auVar62._4_4_ * pfVar71[1];
            auVar72._8_4_ = auVar62._8_4_ * pfVar71[2];
            auVar72._12_4_ = auVar62._12_4_ * pfVar71[3];
            auVar87 = NEON_ext(auVar72,auVar72,8,1);
            fVar56 = auVar87._0_4_ + auVar62._12_4_;
            uVar60 = CONCAT44(-(auVar72._0_4_ + auVar72._4_4_ + fVar56),
                              -(auVar72._0_4_ + auVar72._4_4_ + fVar56));
            uVar68 = NEON_fmax(uVar68,uVar60,4);
            uVar59 = NEON_fmax(uVar59,uVar60,4);
            puVar2[2] = uVar68;
            puVar2[1] = uVar59;
            lVar34 = lVar39;
          } while (lVar39 < *(int *)((long)__s_00 + (ulong)(uVar18 + 1) * 4));
        }
      }
LAB_00854d9c:
      pfVar28 = local_4e0;
      uVar51 = plVar49[7];
      iVar17 = FUN_00853d28(param_2,plVar49);
      iVar19 = FUN_00853d28(param_2,uVar51 & 0xfffffffffffffffc);
      if (iVar17 != iVar19) {
        uVar18 = FUN_00853d28(param_2,plVar49);
        uVar20 = FUN_00853d28(param_2,uVar51 & 0xfffffffffffffffc);
        uVar42 = uVar20;
        if (uVar18 <= uVar20) {
          uVar42 = uVar18;
          uVar18 = uVar20;
        }
        iVar17 = (int)uVar48;
        uVar20 = uVar18 & 0xffff | uVar42 << 0x10;
        if (0 < iVar17) {
          uVar51 = 0;
          do {
            if (*(uint *)(lVar50 + uVar51 * 4) == uVar20) {
              if ((int)uVar51 != -1) goto LAB_008549d4;
              break;
            }
            uVar51 = uVar51 + 1;
          } while (uVar48 != uVar51);
        }
        *(uint *)(lVar50 + (long)iVar17 * 4) = uVar20;
        pauVar24 = (undefined1 (*) [16])FUN_00853c80(param_2,uVar42);
        pauVar26 = (undefined1 (*) [16])FUN_00853c80(param_2,uVar18);
        lVar34 = (long)(int)local_4b0;
        if ((int)(local_4b0._4_4_ & 0x7fffffff) <= (int)local_4b0) {
          FUN_0085eedc(&local_4b8,PTR_PTR_047d1a50,lVar34 + 1);
        }
        puVar2 = (undefined8 *)(local_4b8 + (long)(int)local_4b0 * 0x20);
        local_4b0._0_4_ = (int)(lVar34 + 1);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = uVar35;
        iVar19 = *(int *)((long)__s_00 + (ulong)uVar42 * 4);
        uVar48 = (ulong)(iVar17 + 1);
        if (iVar19 < *(int *)((long)__s_00 + (ulong)(uVar42 + 1) * 4)) {
          uVar59 = puVar2[2];
          uVar68 = 0;
          lVar34 = (long)iVar19;
          do {
            lVar39 = lVar34 + 1;
            auVar62 = *pauVar26;
            pfVar71 = local_538 + (ulong)*(ushort *)(pfVar28 + lVar34) * 4;
            auVar73._0_4_ = auVar62._0_4_ * *pfVar71;
            auVar73._4_4_ = auVar62._4_4_ * pfVar71[1];
            auVar73._8_4_ = auVar62._8_4_ * pfVar71[2];
            auVar73._12_4_ = auVar62._12_4_ * pfVar71[3];
            auVar87 = NEON_ext(auVar73,auVar73,8,1);
            fVar56 = auVar87._0_4_ + auVar62._12_4_;
            uVar60 = CONCAT44(-(auVar73._0_4_ + auVar73._4_4_ + fVar56),
                              -(auVar73._0_4_ + auVar73._4_4_ + fVar56));
            uVar59 = NEON_fmax(uVar59,uVar60,4);
            uVar68 = NEON_fmax(uVar68,uVar60,4);
            puVar2[2] = uVar59;
            *puVar2 = uVar68;
            lVar34 = lVar39;
          } while (lVar39 < *(int *)((long)__s_00 + (ulong)(uVar42 + 1) * 4));
        }
        iVar17 = *(int *)((long)__s_00 + (ulong)uVar18 * 4);
        if (iVar17 < *(int *)((long)__s_00 + (ulong)(uVar18 + 1) * 4)) {
          uVar59 = puVar2[1];
          uVar68 = puVar2[2];
          lVar34 = (long)iVar17;
          do {
            lVar39 = lVar34 + 1;
            auVar62 = *pauVar24;
            pfVar71 = local_538 + (ulong)*(ushort *)(pfVar28 + lVar34) * 4;
            auVar74._0_4_ = auVar62._0_4_ * *pfVar71;
            auVar74._4_4_ = auVar62._4_4_ * pfVar71[1];
            auVar74._8_4_ = auVar62._8_4_ * pfVar71[2];
            auVar74._12_4_ = auVar62._12_4_ * pfVar71[3];
            auVar87 = NEON_ext(auVar74,auVar74,8,1);
            fVar56 = auVar87._0_4_ + auVar62._12_4_;
            uVar60 = CONCAT44(-(auVar74._0_4_ + auVar74._4_4_ + fVar56),
                              -(auVar74._0_4_ + auVar74._4_4_ + fVar56));
            uVar68 = NEON_fmax(uVar68,uVar60,4);
            uVar59 = NEON_fmax(uVar59,uVar60,4);
            puVar2[2] = uVar68;
            puVar2[1] = uVar59;
            lVar34 = lVar39;
          } while (lVar39 < *(int *)((long)__s_00 + (ulong)(uVar18 + 1) * 4));
        }
      }
LAB_008549d4:
      plVar49 = (long *)*plVar49;
    } while (plVar49 != (long *)0x0);
  }
  if ((__s_00 != (void *)0x0) && (-1 < (int)uVar47)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,__s_00,(ulong)uVar47 << 2);
  }
  if (local_4c8 == local_4e0) {
    local_4d8 = local_4d8 & 0xffffffff00000000;
  }
  uVar35 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x70);
  if (local_4d0 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar51 = (long)local_4c0 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_4d0 + 0x28) < uVar51) ||
       (*(long *)(local_4d0 + 0x38) != uVar51 + (long)local_4c8)) {
      FUN_031cf710();
    }
    else {
      *(float **)(local_4d0 + 0x38) = local_4c8;
      if (*(float **)(local_4d0 + 0x48) == local_4c8) {
        FUN_031cf578();
      }
    }
  }
  uVar51 = local_4d8;
  fVar56 = (float)uVar97 * (fVar57 / auVar61._0_4_);
  uVar36 = (ulong)local_4d8._4_4_;
  local_4d8 = (ulong)local_4d8._4_4_ << 0x20;
  if ((-1 < (long)uVar51) && (local_4e0 != (float *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_4e0,uVar36 << 2);
  }
  uVar59 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x248);
  pfVar28 = *(float **)*(undefined1 (*) [12])(PTR_DAT_047d19b0 + 0x240);
  auVar14 = *(undefined1 (*) [12])(PTR_DAT_047d19b0 + 0x240);
  uVar97 = NEON_fmin(CONCAT44((float)((ulong)uVar35 >> 0x20) * param_1,(float)uVar35 * param_1),
                     CONCAT44((float)((ulong)uVar97 >> 0x20) * (fVar57 / auVar61._4_4_),fVar56),4);
  if ((int)uVar48 < 1) {
    iVar17 = -1;
    pfVar71 = pfVar28;
  }
  else {
    pfVar40 = *(float **)(PTR_DAT_047d19b0 + 0x250);
    uVar51 = 0;
    puVar43 = (ulong *)(local_4b8 + 0x18);
    fVar57 = *(float *)(PTR_DAT_047d19b0 + 0x260);
    uVar35 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
    iVar17 = -1;
    pfVar45 = pfVar28;
    do {
      fVar65 = (float)puVar43[-1];
      if (fVar56 < fVar65) {
LAB_008550bc:
        *puVar43 = (ulong)pfVar40;
        pfVar71 = pfVar40;
      }
      else {
        uVar47 = *(uint *)(lVar50 + uVar51 * 4);
        pfVar71 = pfVar23 + (ulong)(uVar47 & 0xffff) * 4;
        pfVar41 = (float *)((long)pfVar23 + ((ulong)(uVar47 >> 0xc) & 0xffff0));
        fVar83 = *pfVar41 * *pfVar71 + pfVar41[1] * pfVar71[1] + pfVar41[2] * pfVar71[2];
        if (fVar83 <= fVar57) goto LAB_008550bc;
        pfVar71 = (float *)CONCAT44((float)(puVar43[-1] >> 0x20) *
                                    ((float)((ulong)uVar35 >> 0x20) /
                                    (*pfVar41 * *pfVar71 + pfVar41[1] * pfVar71[1] +
                                    pfVar41[2] * pfVar71[2])),fVar65 * ((float)uVar35 / fVar83));
        *puVar43 = (ulong)pfVar71;
      }
      iVar19 = (int)uVar51;
      if (SUB84(pfVar45,0) <= SUB84(pfVar71,0)) {
        pfVar71 = pfVar45;
        iVar19 = iVar17;
      }
      iVar17 = iVar19;
      uVar51 = uVar51 + 1;
      puVar43 = puVar43 + 4;
      pfVar45 = pfVar71;
    } while (uVar48 != uVar51);
  }
  uVar35 = 0;
  fVar57 = (float)uVar97;
  if (SUB84(pfVar71,0) < fVar57) {
    uVar51 = (ulong)(int)uVar4;
    fVar65 = (float)((ulong)pfVar28 >> 0x20);
    uVar60 = CONCAT44(-fVar65,-SUB84(pfVar28,0));
    fVar83 = *(float *)(PTR_DAT_047d19b0 + 0x260);
    uVar98 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
    uVar68 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x250);
    do {
      puVar2 = (undefined8 *)(local_4b8 + (long)iVar17 * 0x20);
      fVar89 = 0.0;
      fVar90 = 0.0;
      uVar47 = *(uint *)(lVar50 + (long)iVar17 * 4);
      uVar42 = uVar47 >> 0x10;
      uVar36 = (ulong)uVar42;
      uVar78 = *puVar2;
      uVar85 = puVar2[1];
      fVar77 = (float)uVar78;
      fVar84 = fVar77 + (float)uVar85;
      fVar82 = (float)((ulong)uVar78 >> 0x20);
      uVar44 = (ulong)uVar47 & 0xffff;
      fVar96 = (float)uVar98;
      fVar99 = (float)((ulong)uVar98 >> 0x20);
      if (fVar84 != 0.0) {
        fVar89 = fVar96 / fVar84;
        fVar90 = fVar99 / (fVar82 + (float)((ulong)uVar85 >> 0x20));
      }
      fVar77 = fVar77 * fVar89;
      fVar82 = fVar82 * fVar90;
      pfVar45 = pfVar23 + uVar36 * 4;
      fVar84 = *pfVar45;
      fVar89 = pfVar45[1];
      fVar90 = pfVar45[2];
      fVar70 = pfVar45[3];
      pfVar45 = pfVar23 + uVar36 * 4;
      pfVar45[2] = fVar77 * fVar90;
      pfVar45[3] = fVar82 * fVar70;
      *pfVar45 = fVar77 * fVar84;
      pfVar45[1] = fVar82 * fVar89;
      pfVar45 = pfVar23 + uVar44 * 4;
      fVar84 = fVar77 * fVar84 + (fVar96 - fVar77) * *pfVar45;
      fVar89 = fVar82 * fVar89 + (fVar99 - fVar82) * pfVar45[1];
      fVar77 = fVar77 * fVar90 + (fVar96 - fVar77) * pfVar45[2];
      fVar90 = SQRT(fVar84 * fVar84 + fVar89 * fVar89 + fVar77 * fVar77);
      fVar88 = SQRT(fVar84 * fVar84 + fVar89 * fVar89 + fVar77 * fVar77);
      fVar84 = fVar84 / fVar90;
      fVar89 = fVar89 / fVar88;
      auVar79._0_8_ = CONCAT44(fVar89,fVar84);
      auVar79._8_4_ = fVar77 / fVar90;
      auVar61._12_4_ = (fVar82 * fVar70 + (fVar99 - fVar82) * pfVar45[3]) / fVar88;
      auVar61._0_12_ = auVar79;
      *(long *)(pfVar23 + uVar36 * 4 + 2) = auVar61._8_8_;
      *(undefined8 *)(pfVar23 + uVar36 * 4) = auVar79._0_8_;
      uVar78 = uVar60;
      if (0 < (int)uVar4) {
        uVar46 = 0;
        if (uVar4 != 1) {
          do {
            pfVar45 = local_538 + uVar46 * 4;
            uVar46 = uVar46 + 2;
            uVar78 = NEON_fmax(uVar78,CONCAT44(fVar84 * *pfVar45 + fVar89 * pfVar45[1] +
                                               auVar79._8_4_ * pfVar45[2],
                                               fVar84 * *pfVar45 + fVar89 * pfVar45[1] +
                                               auVar79._8_4_ * pfVar45[2]),4);
            uVar78 = NEON_fmax(uVar78,CONCAT44(fVar84 * pfVar45[4] + fVar89 * pfVar45[5] +
                                               auVar79._8_4_ * pfVar45[6],
                                               fVar84 * pfVar45[4] + fVar89 * pfVar45[5] +
                                               auVar79._8_4_ * pfVar45[6]),4);
          } while ((uVar55 & 0xfffffffe) != uVar46);
        }
        if ((uVar4 & 1) != 0) {
          pfVar45 = local_538 + uVar46 * 4;
          uVar78 = NEON_fmax(uVar78,CONCAT44(fVar84 * *pfVar45 + fVar89 * pfVar45[1] +
                                             auVar79._8_4_ * pfVar45[2],
                                             fVar84 * *pfVar45 + fVar89 * pfVar45[1] +
                                             auVar79._8_4_ * pfVar45[2]),4);
        }
      }
      uVar78 = NEON_fmin(uVar78,CONCAT44(-auVar61._12_4_,-auVar61._12_4_),4);
      auVar62._12_4_ = -(float)uVar78;
      auVar62._0_12_ = auVar79;
      *(long *)(pfVar23 + uVar36 * 4 + 2) = auVar62._8_8_;
      *(undefined8 *)(pfVar23 + uVar36 * 4) = auVar79._0_8_;
      local_590[uVar44] = '\x01';
      *(undefined1 *)((long)__s + uVar36) = 1;
      *(float **)(local_4b8 + (long)iVar17 * 0x20 + 0x10) = pfVar28;
      if ((int)uVar48 < 1) {
        pfVar71 = *(float **)(local_4b8 + 0x18);
LAB_00855194:
        iVar17 = 0;
      }
      else {
        uVar36 = uVar48;
        do {
          uVar46 = uVar36 - 1;
          uVar20 = *(uint *)(lVar50 + uVar46 * 4);
          uVar18 = uVar20 & 0xffff;
          if (uVar20 >> 0x10 == uVar42 || uVar18 == uVar42) {
LAB_0085531c:
            iVar17 = (int)uVar48;
            uVar18 = iVar17 - 1;
            if (0 < iVar17) {
              uVar27 = (ulong)uVar18;
              do {
                if (*(uint *)(lVar50 + uVar27 * 4) == uVar20) goto LAB_00855344;
                bVar16 = 0 < (long)uVar27;
                uVar27 = uVar27 - 1;
              } while (bVar16);
            }
            uVar27 = 0xffffffff;
LAB_00855344:
            if (uVar46 == (uVar27 & 0xffffffff)) {
              puVar2 = (undefined8 *)(local_4b8 + uVar46 * 0x20);
              fVar77 = SUB84(pfVar71,0);
              fVar82 = (float)((ulong)pfVar71 >> 0x20);
              fVar84 = fVar77 + (float)puVar2[2];
              fVar89 = fVar82 + (float)((ulong)puVar2[2] >> 0x20);
              *puVar2 = CONCAT44(fVar82 + (float)((ulong)*puVar2 >> 0x20),fVar77 + (float)*puVar2);
              puVar2[1] = CONCAT44(fVar82 + (float)((ulong)puVar2[1] >> 0x20),
                                   fVar77 + (float)puVar2[1]);
              puVar2[2] = CONCAT44(fVar89,fVar84);
              if (fVar84 <= fVar56) {
                uVar18 = *(uint *)(lVar50 + uVar46 * 4);
                pfVar45 = pfVar23 + (ulong)(uVar18 & 0xffff) * 4;
                pfVar40 = (float *)((long)pfVar23 + ((ulong)(uVar18 >> 0xc) & 0xffff0));
                fVar77 = *pfVar40 * *pfVar45 + pfVar40[1] * pfVar45[1] + pfVar40[2] * pfVar45[2];
                if (fVar83 < fVar77) {
                  puVar2[3] = CONCAT44(fVar89 * (fVar99 / (*pfVar40 * *pfVar45 +
                                                           pfVar40[1] * pfVar45[1] +
                                                          pfVar40[2] * pfVar45[2])),
                                       fVar84 * (fVar96 / fVar77));
                  goto LAB_008552d0;
                }
              }
              puVar2[3] = uVar68;
            }
            else {
              puVar2 = (undefined8 *)(local_4b8 + (long)(int)uVar27 * 0x20);
              uVar78 = *(undefined8 *)(local_4b8 + uVar46 * 0x20 + 0x18);
              fVar84 = (float)uVar78;
              fVar77 = (float)puVar2[2] + fVar84;
              fVar89 = (float)((ulong)uVar78 >> 0x20);
              fVar82 = (float)((ulong)puVar2[2] >> 0x20) + fVar89;
              puVar2[2] = CONCAT44(fVar82,fVar77);
              *puVar2 = CONCAT44(fVar89 + (float)((ulong)*puVar2 >> 0x20),fVar84 + (float)*puVar2);
              puVar2[1] = CONCAT44((float)((ulong)puVar2[1] >> 0x20) + fVar89,
                                   (float)puVar2[1] + fVar84);
              if (fVar56 < fVar77) {
LAB_00855420:
                puVar2[3] = uVar68;
              }
              else {
                uVar20 = *(uint *)(lVar50 + (long)(int)uVar27 * 4);
                pfVar45 = pfVar23 + (ulong)(uVar20 & 0xffff) * 4;
                pfVar40 = (float *)((long)pfVar23 + ((ulong)(uVar20 >> 0xc) & 0xffff0));
                fVar84 = *pfVar40 * *pfVar45 + pfVar40[1] * pfVar45[1] + pfVar40[2] * pfVar45[2];
                if (fVar84 <= fVar83) goto LAB_00855420;
                puVar2[3] = CONCAT44(fVar82 * (fVar99 / (*pfVar40 * *pfVar45 +
                                                         pfVar40[1] * pfVar45[1] +
                                                        pfVar40[2] * pfVar45[2])),
                                     fVar77 * (fVar96 / fVar84));
              }
              if (iVar17 != (int)uVar36) {
                *(undefined4 *)(lVar50 + uVar46 * 4) =
                     *(undefined4 *)(lVar50 + (long)(int)uVar18 * 4);
              }
              lVar34 = (long)(int)local_4b0;
              bVar16 = (int)local_4b0 != (int)uVar36;
              local_4b0._0_4_ = (int)(lVar34 + -1);
              if (bVar16) {
                puVar2 = (undefined8 *)(local_4b8 + (lVar34 + -1) * 0x20);
                puVar3 = (undefined8 *)(local_4b8 + uVar46 * 0x20);
                uVar78 = *puVar2;
                uVar85 = puVar2[1];
                uVar5 = puVar2[3];
                puVar3[2] = puVar2[2];
                puVar3[3] = uVar5;
                *puVar3 = uVar78;
                puVar3[1] = uVar85;
              }
              uVar48 = (ulong)uVar18;
            }
          }
          else {
            if (uVar20 >> 0x10 == (uint)uVar44) {
              uVar20 = uVar18 | uVar47 & 0xffff0000;
LAB_00855318:
              *(uint *)(lVar50 + uVar46 * 4) = uVar20;
              goto LAB_0085531c;
            }
            if (uVar18 == (uint)uVar44) {
              uVar20 = uVar20 & 0xffff0000 | uVar42;
              goto LAB_00855318;
            }
          }
LAB_008552d0:
          bVar16 = 1 < (long)uVar36;
          uVar36 = uVar46;
        } while (bVar16);
        iVar19 = (int)uVar48;
        pfVar45 = *(float **)(local_4b8 + 0x18);
        pfVar71 = pfVar45;
        if (iVar19 < 2) goto LAB_00855194;
        if (iVar19 == 2) {
          iVar17 = 0;
          lVar34 = 1;
        }
        else {
          iVar17 = 0;
          lVar34 = 1;
          puVar43 = (ulong *)(local_4b8 + 0x58);
          do {
            pfVar45 = (float *)puVar43[-4];
            iVar9 = (int)lVar34;
            if (SUB84(pfVar71,0) <= SUB84((float *)puVar43[-4],0)) {
              pfVar45 = pfVar71;
              iVar9 = iVar17;
            }
            if (SUB84((float *)*puVar43,0) < SUB84(pfVar45,0)) {
              pfVar45 = (float *)*puVar43;
              iVar17 = (int)lVar34 + 1;
            }
            else {
              iVar17 = iVar9;
            }
            lVar34 = lVar34 + 2;
            pfVar71 = pfVar45;
            puVar43 = puVar43 + 8;
          } while (uVar48 - ((ulong)(iVar19 - 1U) & 1) != lVar34);
        }
        pfVar71 = pfVar45;
        if ((iVar19 - 1U & 1) != 0) {
          pfVar71 = *(float **)(local_4b8 + lVar34 * 0x20 + 0x18);
          iVar19 = (int)lVar34;
          if (SUB84(pfVar45,0) <= SUB84(pfVar71,0)) {
            pfVar71 = pfVar45;
            iVar19 = iVar17;
          }
          iVar17 = iVar19;
        }
      }
    } while (SUB84(pfVar71,0) < fVar57);
    fVar56 = -SUB84(pfVar28,0);
    fVar65 = -fVar65;
    fVar82 = (float)uVar59;
    fVar77 = -fVar82;
    fVar84 = (float)((ulong)uVar59 >> 0x20);
    if ((int)uVar32 < 1) {
      pfVar71 = (float *)0x0;
      local_60c = 0x80000000;
      plVar49 = *(long **)(*(long *)(param_2 + 0x18) + 0x70);
    }
    else {
      pfVar71 = (float *)(**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x18))
                                   (PTR_PTR_047d1a50 + 0x20,uVar38 << 5);
      auVar13._12_4_ = fVar84;
      auVar13._0_12_ = auVar14;
      uVar47 = uVar32 & 3;
      uVar59 = CONCAT44(fVar65,fVar56);
      auVar11._8_4_ = fVar77;
      auVar11._0_8_ = uVar59;
      auVar11._12_4_ = -fVar84;
      uVar68 = auVar14._0_8_;
      uVar60 = auVar13._8_8_;
      uVar98 = auVar11._8_8_;
      pfVar45 = pfVar71;
      if (2 < uVar32 - 1) {
        iVar17 = uVar47 - uVar32;
        pfVar40 = pfVar71;
        do {
          pfVar45 = pfVar40 + 0x20;
          iVar17 = iVar17 + 4;
          *(undefined8 *)(pfVar40 + 2) = uVar60;
          *(undefined8 *)pfVar40 = uVar68;
          *(undefined8 *)(pfVar40 + 6) = uVar98;
          *(undefined8 *)(pfVar40 + 4) = uVar59;
          *(undefined8 *)(pfVar40 + 10) = uVar60;
          *(undefined8 *)(pfVar40 + 8) = uVar68;
          *(undefined8 *)(pfVar40 + 0xe) = uVar98;
          *(undefined8 *)(pfVar40 + 0xc) = uVar59;
          *(undefined8 *)(pfVar40 + 0x12) = uVar60;
          *(undefined8 *)(pfVar40 + 0x10) = uVar68;
          *(undefined8 *)(pfVar40 + 0x16) = uVar98;
          *(undefined8 *)(pfVar40 + 0x14) = uVar59;
          *(undefined8 *)(pfVar40 + 0x1a) = uVar60;
          *(undefined8 *)(pfVar40 + 0x18) = uVar68;
          *(undefined8 *)(pfVar40 + 0x1e) = uVar98;
          *(undefined8 *)(pfVar40 + 0x1c) = uVar59;
          pfVar40 = pfVar45;
        } while (iVar17 != 0);
      }
      if ((uVar22 & 3) != 0) {
        do {
          *(undefined8 *)(pfVar45 + 2) = uVar60;
          *(undefined8 *)pfVar45 = uVar68;
          *(undefined8 *)(pfVar45 + 6) = uVar98;
          *(undefined8 *)(pfVar45 + 4) = uVar59;
          uVar47 = uVar47 - 1;
          pfVar45 = pfVar45 + 8;
        } while (uVar47 != 0);
      }
      plVar49 = *(long **)(*(long *)(param_2 + 0x18) + 0x70);
      local_60c = uVar32;
    }
    for (; plVar49 != (long *)0x0; plVar49 = (long *)*plVar49) {
      iVar17 = FUN_00853d28(param_2,plVar49);
      lVar34 = plVar49[2];
      pauVar24 = (undefined1 (*) [16])(pfVar71 + (long)iVar17 * 8);
      auVar61 = pauVar24[1];
      auVar62 = NEON_fmin(*pauVar24,*(undefined1 (*) [16])(lVar34 + 0x10),4);
      *(long *)(*pauVar24 + 8) = auVar62._8_8_;
      *(long *)*pauVar24 = auVar62._0_8_;
      auVar87 = NEON_fmax(auVar61,*(undefined1 (*) [16])(lVar34 + 0x10),4);
      *(long *)(pauVar24[1] + 8) = auVar87._8_8_;
      *(long *)pauVar24[1] = auVar87._0_8_;
      lVar34 = plVar49[3];
      auVar61 = NEON_fmin(auVar62,*(undefined1 (*) [16])(lVar34 + 0x10),4);
      *(long *)(*pauVar24 + 8) = auVar61._8_8_;
      *(long *)*pauVar24 = auVar61._0_8_;
      auVar62 = NEON_fmax(auVar87,*(undefined1 (*) [16])(lVar34 + 0x10),4);
      *(long *)(pauVar24[1] + 8) = auVar62._8_8_;
      *(long *)pauVar24[1] = auVar62._0_8_;
      lVar34 = plVar49[4];
      auVar61 = NEON_fmin(auVar61,*(undefined1 (*) [16])(lVar34 + 0x10),4);
      *(long *)(*pauVar24 + 8) = auVar61._8_8_;
      *(long *)*pauVar24 = auVar61._0_8_;
      auVar61 = NEON_fmax(auVar62,*(undefined1 (*) [16])(lVar34 + 0x10),4);
      *(long *)(pauVar24[1] + 8) = auVar61._8_8_;
      *(long *)pauVar24[1] = auVar61._0_8_;
    }
    local_280 = CONCAT44(fVar65,fVar56);
    auVar12._8_4_ = fVar77;
    auVar12._0_8_ = local_280;
    auVar12._12_4_ = -fVar84;
    uStack_278 = auVar12._8_8_;
    local_290 = pfVar28;
    fStack_288 = fVar82;
    fStack_284 = fVar84;
    FUN_032419c0(local_538,local_5e4,&local_290);
    fVar56 = fStack_288;
    local_490 = (float *)0x0;
    local_488 = 0x8000000000000000;
    fStack_558 = SUB84(uStack_278,0);
    local_560 = (float)local_280;
    fStack_55c = (float)((ulong)local_280 >> 0x20);
    auVar63._8_4_ = fStack_288;
    auVar63._0_8_ = (ulong)local_290;
    auVar63._12_4_ = fStack_284;
    local_580 = SUB84(local_290,0);
    fStack_57c = (float)((ulong)local_290 >> 0x20);
    local_470 = pfVar52;
    if (*(long *)(lVar21 + 0x1000b8) == 0) {
      lVar34 = FUN_00e5d3b4();
      *(long *)(lVar21 + 0x1000b8) = lVar34;
      local_480 = *(long *)(*(long *)(lVar34 + 0x3d0) + 0x10);
      auVar63 = extraout_q0_00;
      if (*(long *)(local_480 + 8) != 0) goto LAB_0085575c;
LAB_008556a0:
      if (local_480 == 0) goto LAB_00855768;
      local_290 = (float *)((long)pfVar52 + 0x3fU & 0xffffffffffffffc0);
      if (*(float **)(local_480 + 0x28) < local_290) {
LAB_008556d8:
        local_4e0 = pfVar52;
        local_478 = (float *)FUN_031cf3b4(local_480,&local_290);
        auVar63 = extraout_q0;
        goto LAB_00855784;
      }
      local_478 = *(float **)(local_480 + 0x38);
      if (*(ulong *)(local_480 + 0x40) < (ulong)((long)local_290 + (long)local_478))
      goto LAB_008556d8;
      *(long *)(local_480 + 0x38) = (long)local_290 + (long)local_478;
    }
    else {
      local_480 = *(long *)(*(long *)(*(long *)(lVar21 + 0x1000b8) + 0x3d0) + 0x10);
      if (*(long *)(local_480 + 8) == 0) goto LAB_008556a0;
LAB_0085575c:
      local_480 = 0;
LAB_00855768:
      local_4e0 = pfVar52;
      local_478 = (float *)(**(code **)PTR_DAT_047d1a08)(1,&local_4e0,0x40);
      auVar63 = extraout_q0_01;
LAB_00855784:
    }
    bVar16 = (uint)local_488 != uVar32;
    local_488 = CONCAT44(uVar32,(uint)local_488) | 0x8000000000000000;
    if (bVar16) {
      local_488 = CONCAT44(local_488._4_4_,uVar32);
    }
    local_4e0 = (float *)0x0;
    local_4d8 = 0x8000000000000000;
    local_508 = pfVar52;
    local_490 = local_478;
    if (*(long *)(lVar21 + 0x1000b8) == 0) {
      lVar34 = FUN_00e5d3b4();
      *(long *)(lVar21 + 0x1000b8) = lVar34;
      local_4d0 = *(long *)(*(long *)(lVar34 + 0x3d0) + 0x10);
      auVar63 = extraout_q0_03;
      if (*(long *)(local_4d0 + 8) != 0) goto LAB_00855858;
LAB_008557dc:
      if (local_4d0 == 0) goto LAB_00855864;
      local_290 = (float *)((long)pfVar52 + 0x3fU & 0xffffffffffffffc0);
      if (*(float **)(local_4d0 + 0x28) < local_290) {
LAB_00855814:
        local_4c0 = pfVar52;
        pfVar28 = (float *)FUN_031cf3b4(local_4d0,&local_290);
        auVar63 = extraout_q0_02;
        goto LAB_00855880;
      }
      pfVar28 = *(float **)(local_4d0 + 0x38);
      if (*(ulong *)(local_4d0 + 0x40) < (ulong)((long)local_290 + (long)pfVar28))
      goto LAB_00855814;
      *(long *)(local_4d0 + 0x38) = (long)local_290 + (long)pfVar28;
      local_4c0 = pfVar52;
    }
    else {
      local_4d0 = *(long *)(*(long *)(*(long *)(lVar21 + 0x1000b8) + 0x3d0) + 0x10);
      if (*(long *)(local_4d0 + 8) == 0) goto LAB_008557dc;
LAB_00855858:
      local_4d0 = 0;
LAB_00855864:
      local_4c0 = pfVar52;
      pfVar28 = (float *)(**(code **)PTR_DAT_047d1a08)(1,&local_508,0x40);
      auVar63 = extraout_q0_04;
LAB_00855880:
    }
    bVar16 = (uint)local_4d8 != uVar32;
    local_4d8 = CONCAT44(uVar32,(uint)local_4d8) | 0x8000000000000000;
    if (bVar16) {
      local_4d8 = CONCAT44(local_4d8._4_4_,uVar32);
    }
    local_4e0 = pfVar28;
    local_4c8 = pfVar28;
    if (0 < (int)uVar32) {
      local_560 = local_560 - local_580;
      fStack_55c = fStack_55c - fStack_57c;
      auVar61 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x150);
      auVar62 = NEON_ext(auVar61,auVar61,8,1);
      auVar63 = NEON_ext(auVar62,auVar61,8,1);
      fStack_578 = auVar63._8_4_;
      fStack_574 = auVar63._12_4_;
      local_580 = auVar63._0_4_;
      fStack_57c = auVar63._4_4_;
      pfVar45 = pfVar71;
      pfVar41 = local_490;
      uVar22 = uVar38;
      pfVar40 = pfVar23;
      pcVar54 = local_590;
      do {
        if (*pcVar54 == '\0') {
          uVar48 = FUN_032418ec(pfVar45);
          auVar63 = extraout_q0_05;
          if ((uVar48 & 1) != 0) {
            fVar65 = *pfVar40;
            fVar77 = pfVar40[1];
            fVar82 = pfVar40[2];
            fVar84 = pfVar40[3];
            pfVar28[2] = fVar82;
            pfVar28[3] = fVar84;
            *pfVar28 = fVar65;
            pfVar28[1] = fVar77;
            fVar89 = (*pfVar45 + pfVar45[4]) * local_580;
            fVar90 = (pfVar45[1] + pfVar45[5]) * fStack_57c;
            fVar70 = (pfVar45[2] + pfVar45[6]) * fStack_578;
            auVar75._0_4_ = fVar65 * fVar89;
            auVar75._4_4_ = fVar77 * fVar90;
            auVar75._8_4_ = fVar82 * fVar70;
            auVar75._12_4_ = fVar84 * (pfVar45[3] + pfVar45[7]) * fStack_574;
            auVar61 = NEON_ext(auVar75,auVar75,8,1);
            fVar84 = auVar61._0_4_ + fVar84;
            fVar88 = -(auVar75._0_4_ + auVar75._4_4_ + fVar84);
            auVar63._0_8_ =
                 CONCAT44(fVar90 + fVar77 * -(auVar75._0_4_ + auVar75._4_4_ + fVar84),
                          fVar89 + fVar65 * fVar88);
            auVar63._8_4_ = fVar70 + fVar82 * fVar88;
            auVar63._12_4_ =
                 SQRT(local_560 * local_560 + fStack_55c * fStack_55c +
                      (fStack_558 - fVar56) * (fStack_558 - fVar56));
            *(long *)(pfVar41 + 2) = auVar63._8_8_;
            *(ulong *)pfVar41 = auVar63._0_8_;
          }
        }
        pfVar45 = pfVar45 + 8;
        pcVar54 = pcVar54 + 1;
        pfVar40 = pfVar40 + 4;
        pfVar28 = pfVar28 + 4;
        pfVar41 = pfVar41 + 4;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    local_508 = (float *)0x0;
    local_500 = 0x8000000000000000;
    lVar34 = *(long *)(lVar21 + 0x1000b8);
    if (lVar34 == 0) {
      lVar34 = FUN_00e5d3b4();
      *(long *)(lVar21 + 0x1000b8) = lVar34;
      auVar63 = extraout_q0_07;
    }
    local_4f8 = *(long *)(*(long *)(lVar34 + 0x3d0) + 0x10);
    if (*(long *)(local_4f8 + 8) == 0) {
      local_530 = (char *)(uVar51 << 4);
      if (local_4f8 == 0) goto LAB_00855a44;
      local_290 = (float *)(uVar51 * 0x10 + 0x3f & 0xffffffffffffffc0);
      local_4e8 = local_530;
      if (*(float **)(local_4f8 + 0x28) < local_290) {
LAB_008559f4:
        local_4f0 = (float *)FUN_031cf3b4(local_4f8,&local_290);
        auVar63 = extraout_q0_06;
      }
      else {
        local_4f0 = *(float **)(local_4f8 + 0x38);
        if (*(ulong *)(local_4f8 + 0x40) < (ulong)((long)local_290 + (long)local_4f0))
        goto LAB_008559f4;
        *(long *)(local_4f8 + 0x38) = (long)local_290 + (long)local_4f0;
      }
    }
    else {
      local_4f8 = 0;
LAB_00855a44:
      local_530 = (char *)(uVar51 << 4);
      local_4e8 = local_530;
      local_4f0 = (float *)(**(code **)PTR_DAT_047d1a08)(1,&local_530,0x40);
      auVar63 = extraout_q0_08;
    }
    lVar39 = (long)(int)local_500;
    lVar34 = lVar39 + (int)local_5e4;
    local_500 = CONCAT44(uVar4,(int)local_500) | 0x8000000000000000;
    iVar17 = (int)lVar34;
    local_508 = local_4f0;
    if ((int)(uVar4 & 0x7fffffff) < iVar17) {
      auVar63 = FUN_02e8df28(&local_508,PTR_PTR_047d1a50,lVar34);
    }
    if (0 < (int)local_5e4) {
      pfVar28 = local_508 + lVar39 * 4;
      if (local_5e4 == 1) {
        pfVar41 = local_538;
      }
      else {
        iVar19 = (local_5e4 & 1) - local_5e4;
        pfVar45 = pfVar28;
        pfVar40 = local_538;
        do {
          *(undefined8 *)(pfVar45 + 2) = *(undefined8 *)(pfVar40 + 2);
          *(undefined8 *)pfVar45 = *(undefined8 *)pfVar40;
          *(undefined8 *)(pfVar45 + 6) = *(undefined8 *)(pfVar40 + 6);
          pfVar41 = pfVar40 + 8;
          pfVar28 = pfVar45 + 8;
          iVar19 = iVar19 + 2;
          *(undefined8 *)(pfVar45 + 4) = *(undefined8 *)(pfVar40 + 4);
          pfVar45 = pfVar28;
          pfVar40 = pfVar41;
        } while (iVar19 != 0);
      }
      if ((local_5e4 & 1) != 0) {
        *(undefined8 *)(pfVar28 + 2) = *(undefined8 *)(pfVar41 + 2);
        *(undefined8 *)pfVar28 = *(undefined8 *)pfVar41;
      }
    }
    local_500 = CONCAT44(local_500._4_4_,iVar17);
    local_530 = (char *)0x0;
    local_528 = 0x8000000000000000;
    local_510 = uVar51;
    local_78 = uVar51;
    if (*(long *)(lVar21 + 0x1000b8) == 0) {
      lVar34 = FUN_00e5d3b4();
      *(long *)(lVar21 + 0x1000b8) = lVar34;
      local_520 = *(long *)(*(long *)(lVar34 + 0x3d0) + 0x10);
      auVar63 = extraout_q0_10;
      if (*(long *)(local_520 + 8) != 0) goto LAB_00855bd4;
LAB_00855b54:
      if (local_520 == 0) goto LAB_00855be0;
      local_290 = (float *)(uVar51 + 0x3f & 0xffffffffffffffc0);
      if (*(float **)(local_520 + 0x28) < local_290) {
LAB_00855b8c:
        local_518 = (char *)FUN_031cf3b4(local_520,&local_290);
        auVar63 = extraout_q0_09;
        goto LAB_00855bfc;
      }
      local_518 = *(char **)(local_520 + 0x38);
      if (*(char **)(local_520 + 0x40) < local_518 + (long)local_290) goto LAB_00855b8c;
      *(char **)(local_520 + 0x38) = local_518 + (long)local_290;
    }
    else {
      local_520 = *(long *)(*(long *)(*(long *)(lVar21 + 0x1000b8) + 0x3d0) + 0x10);
      if (*(long *)(local_520 + 8) == 0) goto LAB_00855b54;
LAB_00855bd4:
      local_520 = 0;
LAB_00855be0:
      local_518 = (char *)(**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
      auVar63 = extraout_q0_11;
LAB_00855bfc:
    }
    uVar47 = (uint)local_528;
    lVar34 = (long)(int)(uint)local_528;
    local_528 = CONCAT44(uVar4,(uint)local_528) | 0x8000000000000000;
    local_530 = local_518;
    if ((int)uVar47 < (int)uVar4) {
      local_528 = CONCAT44(local_528._4_4_,uVar4);
      memset(local_518 + lVar34,0,(ulong)(uVar4 + ~uVar47) + 1);
      auVar63 = extraout_q0_12;
    }
    else if ((int)uVar4 < (int)uVar47) {
      local_528 = CONCAT44(local_528._4_4_,uVar4);
    }
    pfVar45 = local_490;
    pfVar28 = local_4e0;
    pcVar54 = local_530;
    iVar17 = (uVar32 - 1) * uVar32;
    if (iVar17 < 0) {
      iVar17 = iVar17 + 1;
    }
    lVar34 = *(long *)(lVar21 + 0x1000b8);
    if (lVar34 == 0) {
      lVar34 = FUN_00e5d3b4();
      *(long *)(lVar21 + 0x1000b8) = lVar34;
      auVar63 = extraout_q0_14;
    }
    uVar47 = iVar17 >> 1;
    lVar34 = *(long *)(*(long *)(lVar34 + 0x3d0) + 0x10);
    if (*(long *)(lVar34 + 8) == 0) {
      uVar22 = -(ulong)(uVar47 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar47 << 2;
      local_78 = uVar22;
      if (lVar34 == 0) goto LAB_00855d20;
      local_290 = (float *)(uVar22 + 0x3f & 0xffffffffffffffc0);
      if (*(float **)(lVar34 + 0x28) < local_290) {
LAB_00855cd8:
        lVar39 = FUN_031cf3b4(lVar34,&local_290);
        auVar63 = extraout_q0_13;
      }
      else {
        lVar39 = *(long *)(lVar34 + 0x38);
        if (*(ulong *)(lVar34 + 0x40) < (ulong)((long)local_290 + lVar39)) goto LAB_00855cd8;
        *(long *)(lVar34 + 0x38) = (long)local_290 + lVar39;
      }
    }
    else {
      local_78 = -(ulong)(uVar47 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar47 << 2;
LAB_00855d20:
      uVar22 = local_78;
      lVar39 = (**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
      lVar34 = 0;
      auVar63 = extraout_q0_15;
    }
    local_290 = (float *)0x0;
    fStack_288 = 0.0;
    fStack_284 = -0.0;
    lVar37 = *(long *)(lVar21 + 0x1000b8);
    if (lVar37 == 0) {
      lVar37 = FUN_00e5d3b4();
      *(long *)(lVar21 + 0x1000b8) = lVar37;
      auVar63 = extraout_q0_18;
    }
    local_280 = *(long *)(*(long *)(lVar37 + 0x3d0) + 0x10);
    if (*(long *)(local_280 + 8) != 0) {
      local_280 = 0;
    }
    local_270 = (long)(int)uVar47 * 0x10;
    local_90[0] = local_270;
    if (local_280 == 0) {
      pfVar40 = (float *)(**(code **)PTR_DAT_047d1a08)(1,local_90,0x40);
      auVar63 = extraout_q0_17;
    }
    else {
      local_78 = local_270 + 0x3fU & 0xffffffffffffffc0;
      if (local_78 <= *(ulong *)(local_280 + 0x28)) {
        pfVar40 = *(float **)(local_280 + 0x38);
        if (local_78 + (long)pfVar40 <= *(ulong *)(local_280 + 0x40)) {
          *(ulong *)(local_280 + 0x38) = local_78 + (long)pfVar40;
          goto LAB_00855dec;
        }
      }
      pfVar40 = (float *)FUN_031cf3b4(local_280,&local_78);
      auVar63 = extraout_q0_16;
    }
LAB_00855dec:
    local_290 = pfVar40;
    fStack_284 = (float)(uVar47 | 0x80000000);
    uStack_278 = pfVar40;
    if (0 < (int)uVar32) {
      iVar17 = 0;
      puVar1 = PTR_PTR_047d1a50 + 0x20;
      uVar51 = 0;
      uVar48 = uVar38;
      pcVar53 = local_590;
      pfVar40 = pfVar28;
      pfVar41 = pfVar45;
      do {
        pfVar41 = pfVar41 + 4;
        pfVar40 = pfVar40 + 4;
        pcVar53 = pcVar53 + 1;
        uVar48 = uVar48 - 1;
        uVar36 = uVar51 + 1;
        if (uVar36 < uVar38) {
          lVar21 = lVar39 + (long)iVar17 * 4;
          uVar44 = 0;
LAB_00855e98:
          do {
            uVar46 = uVar44;
            if ((local_590[uVar51] == '\0') && (pcVar53[uVar46] == '\0')) {
              auVar61 = *(undefined1 (*) [16])(pfVar28 + uVar51 * 4);
              auVar62 = *(undefined1 (*) [16])(pfVar40 + uVar46 * 4);
              fVar77 = auVar61._0_4_;
              fVar89 = auVar62._0_4_;
              fVar82 = auVar61._4_4_;
              fVar90 = auVar62._4_4_;
              fVar84 = auVar61._8_4_;
              fVar70 = auVar62._8_4_;
              fVar88 = fVar77 * fVar89 + fVar82 * fVar90 + fVar84 * fVar70;
              fVar91 = fVar77 * fVar89 + fVar82 * fVar90 + fVar84 * fVar70;
              auVar63._0_4_ = fVar88 * fVar88;
              auVar63._4_4_ = fVar91 * fVar91;
              auVar63._8_8_ = 0;
              fVar56 = fVar96 - auVar63._0_4_;
              fVar65 = fVar99 - auVar63._4_4_;
              if (0.0 < fVar56) {
                auVar87 = *(undefined1 (*) [16])(pfVar45 + uVar51 * 4);
                fVar58 = fVar77 * auVar87._0_4_;
                fVar66 = fVar82 * auVar87._4_4_;
                fVar67 = fVar84 * auVar87._8_4_;
                fVar92 = fVar58 + fVar66 + fVar67;
                fVar67 = fVar58 + fVar66 + fVar67;
                auVar63 = *(undefined1 (*) [16])(pfVar41 + uVar46 * 4);
                fVar66 = fVar89 * auVar63._0_4_;
                fVar94 = fVar90 * auVar63._4_4_;
                fVar95 = fVar70 * auVar63._8_4_;
                fVar58 = fVar66 + fVar94 + fVar95;
                fVar95 = fVar66 + fVar94 + fVar95;
                fVar66 = fVar92 - fVar88 * fVar58;
                fVar58 = fVar58 - fVar88 * fVar92;
                fVar56 = fVar96 / fVar56;
                fVar65 = fVar99 / fVar65;
                auVar93 = NEON_ext(auVar62,auVar62,4,1);
                fVar88 = fVar56 * (fVar89 * fVar58 + fVar77 * fVar66);
                fVar91 = fVar65 * (fVar90 * (fVar95 - fVar91 * fVar67) +
                                  fVar82 * (fVar67 - fVar91 * fVar95));
                fVar58 = fVar56 * (fVar70 * fVar58 + fVar84 * fVar66);
                auVar86 = NEON_ext(auVar61,auVar61,4,1);
                fVar66 = fVar88 - auVar87._0_4_;
                fVar67 = fVar91 - auVar87._4_4_;
                fVar92 = fVar58 - auVar87._8_4_;
                auVar87 = NEON_ext(auVar87,auVar87,8,1);
                auVar80._0_4_ = fVar77 * auVar93._0_4_ - fVar89 * auVar86._0_4_;
                auVar80._4_4_ = fVar82 * auVar93._4_4_ - fVar90 * auVar86._4_4_;
                auVar80._8_4_ = fVar84 * fVar89 - fVar70 * fVar77;
                auVar80._12_4_ = auVar61._12_4_ * fVar90 - auVar62._12_4_ * fVar82;
                auVar61 = NEON_ext(auVar80,auVar80,4,1);
                fVar89 = auVar61._0_4_ * SQRT(fVar56);
                fVar90 = auVar61._4_4_ * SQRT(fVar65);
                fVar70 = auVar80._0_4_ * SQRT(fVar56);
                fVar56 = fVar89 * fVar66;
                fVar77 = fVar90 * fVar67;
                fVar82 = fVar70 * fVar92;
                fVar65 = fVar56 + fVar77 + fVar82;
                fVar84 = -fVar65;
                fVar66 = fVar66 + fVar89 * fVar84;
                fVar67 = fVar67 + fVar90 * -(fVar56 + fVar77 + fVar82);
                fVar92 = fVar92 + fVar70 * fVar84;
                fVar56 = auVar87._4_4_ * auVar87._4_4_ -
                         (fVar66 * fVar66 + fVar67 * fVar67 + fVar92 * fVar92);
                if (0.0 <= fVar56) {
                  fVar88 = fVar88 - auVar63._0_4_;
                  fVar91 = fVar91 - auVar63._4_4_;
                  fVar58 = fVar58 - auVar63._8_4_;
                  auVar61 = NEON_ext(auVar63,auVar63,8,1);
                  fVar77 = auVar61._4_4_ * auVar61._4_4_;
                  fVar82 = fVar89 * fVar88;
                  fVar67 = fVar90 * fVar91;
                  fVar92 = fVar70 * fVar58;
                  fVar94 = fVar92 + fVar82 + fVar67;
                  fVar66 = -fVar94;
                  fVar82 = -(fVar92 + fVar82 + fVar67);
                  fVar88 = fVar88 + fVar89 * fVar66;
                  fVar91 = fVar91 + fVar90 * fVar82;
                  fVar58 = fVar58 + fVar70 * fVar66;
                  fVar88 = fVar88 * fVar88;
                  fVar91 = fVar91 * fVar91;
                  fVar58 = fVar58 * fVar58;
                  auVar63._0_4_ = fVar77 - (fVar88 + fVar91 + fVar58);
                  auVar63._4_4_ = fVar77 - (fVar88 + fVar91 + fVar58);
                  auVar63._8_8_ = 0;
                  if (0.0 <= auVar63._0_4_) {
                    fVar56 = SQRT(fVar56);
                    fVar65 = fVar56 - fVar65;
                    fVar77 = SQRT(auVar63._0_4_);
                    auVar63._0_4_ = fVar66 - fVar77;
                    auVar63._4_4_ = fVar82 - SQRT(auVar63._4_4_);
                    auVar63._8_8_ = 0;
                    bVar16 = false;
                    bVar15 = true;
                    if (fVar84 - fVar56 <= fVar77 - fVar94) {
                      bVar16 = false;
                      bVar15 = true;
                      if (!NAN(auVar63._0_4_) && !NAN(fVar65)) {
                        bVar16 = auVar63._0_4_ == fVar65;
                        bVar15 = fVar65 <= auVar63._0_4_;
                      }
                    }
                    if (!(bVar15 && !bVar16)) {
                      *(float *)(lVar21 + uVar46 * 4) = fStack_288;
                      lVar37 = (long)(int)fStack_288;
                      if ((int)((uint)fStack_284 & 0x7fffffff) <= (int)fStack_288) {
                        FUN_02e8df28(&local_290,puVar1,lVar37 + 1);
                      }
                      iVar19 = (int)(lVar37 + 1);
                      auVar61 = *(undefined1 (*) [16])(pfVar28 + uVar51 * 4);
                      auVar87 = NEON_ext(auVar61,auVar61,8,1);
                      auVar62 = *(undefined1 (*) [16])(pfVar40 + uVar46 * 4);
                      auVar86 = NEON_ext(auVar62,auVar62,8,1);
                      uVar68 = NEON_ext(auVar62._0_8_,auVar86._0_8_,4,1);
                      uVar59 = NEON_ext(auVar61._0_8_,auVar87._0_8_,4,1);
                      auVar64._0_4_ = auVar61._0_4_ * (float)uVar68 - auVar62._0_4_ * (float)uVar59;
                      auVar64._4_4_ =
                           auVar61._4_4_ * (float)((ulong)uVar68 >> 0x20) -
                           auVar62._4_4_ * (float)((ulong)uVar59 >> 0x20);
                      auVar64._8_4_ = auVar61._8_4_ * auVar62._0_4_ - auVar62._8_4_ * auVar61._0_4_;
                      auVar64._12_4_ =
                           auVar61._12_4_ * auVar62._4_4_ - auVar62._12_4_ * auVar61._4_4_;
                      auVar61 = NEON_ext(auVar64,auVar64,4,1);
                      auVar63._8_8_ = auVar64._8_8_;
                      auVar63._0_8_ = CONCAT44(0,auVar64._0_4_);
                      *(ulong *)(local_290 + (long)(int)fStack_288 * 4 + 2) =
                           CONCAT44(0,auVar64._0_4_);
                      *(long *)(local_290 + (long)(int)fStack_288 * 4) = auVar61._0_8_;
                      uVar44 = uVar46 + 1;
                      fStack_288 = (float)iVar19;
                      if (uVar48 == uVar46 + 1) break;
                      goto LAB_00855e98;
                    }
                  }
                }
              }
            }
            *(undefined4 *)(lVar21 + uVar46 * 4) = 0xffffffff;
            uVar44 = uVar46 + 1;
          } while (uVar48 != uVar46 + 1);
          iVar17 = iVar17 + (int)uVar46 + 1;
        }
        uVar51 = uVar36;
      } while (uVar36 != uVar38);
    }
    if ((int)(local_500._4_4_ & 0x7fffffff) < (int)fStack_288 * 3) {
      auVar63 = FUN_02e9b11c(&local_508,PTR_PTR_047d1a50);
    }
    if ((int)uVar32 < 1) {
      bVar16 = false;
    }
    else {
      auVar63._0_4_ = -fVar96;
      auVar63._4_4_ = -fVar99;
      auVar63._8_8_ = 0;
      iVar17 = uVar32 * 2 + -3;
      lVar21 = 1;
      uVar48 = 0;
      bVar16 = false;
      uVar47 = 2;
      do {
        if (local_590[uVar48] == '\0') {
          iVar19 = (iVar17 - (int)uVar48) * (int)uVar48;
          if (iVar19 < 0) {
            iVar19 = iVar19 + 1;
          }
          if ((long)(uVar48 + 1) < (long)uVar38) {
            cVar6 = local_590[lVar21];
            lVar37 = lVar21;
            uVar51 = uVar48;
            uVar42 = uVar47;
            do {
              if ((cVar6 == '\0') &&
                 (uVar18 = *(uint *)(lVar39 + (long)((iVar19 >> 1) + (int)uVar51) * 4),
                 -1 < (int)uVar18)) {
                iVar9 = (iVar17 - (int)lVar37) * (int)lVar37;
                if (iVar9 < 0) {
                  iVar9 = iVar9 + 1;
                }
                if ((long)(uVar51 + 2) < (long)uVar38) {
                  uVar20 = uVar42;
                  do {
                    uVar36 = (ulong)uVar20;
                    if ((local_590[uVar36] == '\0') &&
                       (((*(char *)((long)__s + uVar48) != '\0' ||
                         (*(char *)((long)__s + lVar37) != '\0')) ||
                        (*(char *)((long)__s + uVar36) != '\0')))) {
                      uVar7 = *(uint *)(lVar39 + (long)(int)((uVar20 - 1) + (iVar9 >> 1)) * 4);
                      uVar8 = *(uint *)(lVar39 + (long)(int)((uVar20 - 1) + (iVar19 >> 1)) * 4);
                      if (-1 < (int)(uVar8 | uVar7)) {
                        auVar61 = *(undefined1 (*) [16])(local_290 + (ulong)uVar18 * 4);
                        auVar62 = *(undefined1 (*) [16])(pfVar28 + uVar36 * 4);
                        fVar77 = auVar61._0_4_ * auVar62._0_4_;
                        fVar82 = auVar61._4_4_ * auVar62._4_4_;
                        fVar84 = auVar61._8_4_ * auVar62._8_4_;
                        fVar65 = auVar62._12_4_;
                        fVar56 = fVar77 + fVar82 + fVar84;
                        if (ABS(fVar56) <= fVar83) {
LAB_008561f8:
                          bVar29 = 0;
                        }
                        else {
                          pfVar45 = local_290 + (long)(int)uVar8 * 4;
                          pfVar40 = local_290 + (long)(int)uVar7 * 4;
                          fVar89 = pfVar28[uVar48 * 4 + 3];
                          fVar56 = auVar63._0_4_ / fVar56;
                          fVar90 = auVar63._4_4_ / (fVar77 + fVar82 + fVar84);
                          fVar77 = pfVar28[lVar37 * 4 + 3];
                          fVar82 = fVar56 * (auVar61._0_4_ * fVar65 +
                                            *pfVar40 * fVar89 + -*pfVar45 * fVar77);
                          fVar84 = fVar90 * (auVar61._4_4_ * fVar65 +
                                            pfVar40[1] * fVar89 + -pfVar45[1] * fVar77);
                          auVar69._0_8_ = CONCAT44(fVar84,fVar82);
                          auVar69._8_4_ =
                               fVar56 * (auVar61._8_4_ * fVar65 +
                                        pfVar40[2] * fVar89 + -pfVar45[2] * fVar77);
                          auVar69._12_4_ =
                               fVar90 * (auVar61._12_4_ * fVar65 +
                                        pfVar40[3] * fVar89 + pfVar45[3] * fVar77);
                          pfVar45 = pfVar23;
                          uVar36 = uVar38;
                          do {
                            auVar81._0_4_ = fVar82 * *pfVar45;
                            auVar81._4_4_ = fVar84 * pfVar45[1];
                            auVar81._8_4_ = auVar69._8_4_ * pfVar45[2];
                            auVar81._12_4_ = auVar69._12_4_ * pfVar45[3];
                            auVar61 = NEON_ext(auVar81,auVar81,8,1);
                            if (fVar57 < auVar81._0_4_ + auVar81._4_4_ + auVar61._0_4_ + pfVar45[3])
                            goto LAB_008561f8;
                            uVar36 = uVar36 - 1;
                            pfVar45 = pfVar45 + 4;
                          } while (uVar36 != 0);
                          fVar56 = (*local_538 - fVar82) * (*local_538 - fVar82) +
                                   (local_538[1] - fVar84) * (local_538[1] - fVar84) +
                                   (local_538[2] - auVar69._8_4_) * (local_538[2] - auVar69._8_4_);
                          if ((int)uVar4 < 2) {
                            lVar31 = 0;
                            cVar6 = *pcVar54;
                          }
                          else {
                            if (uVar4 == 2) {
                              iVar30 = 0;
                              lVar31 = 1;
LAB_00856404:
                              pfVar45 = local_538 + lVar31 * 4;
                              fVar65 = (*pfVar45 - fVar82) * (*pfVar45 - fVar82) +
                                       (pfVar45[1] - fVar84) * (pfVar45[1] - fVar84) +
                                       (pfVar45[2] - auVar69._8_4_) * (pfVar45[2] - auVar69._8_4_);
                              if (fVar65 < fVar56) {
                                iVar30 = (int)lVar31;
                                fVar56 = fVar65;
                              }
                            }
                            else {
                              iVar30 = 0;
                              uVar36 = 0;
                              do {
                                uVar44 = uVar36;
                                fVar65 = (local_538[uVar44 * 4 + 4] - fVar82) *
                                         (local_538[uVar44 * 4 + 4] - fVar82) +
                                         (local_538[uVar44 * 4 + 5] - fVar84) *
                                         (local_538[uVar44 * 4 + 5] - fVar84) +
                                         (local_538[uVar44 * 4 + 6] - auVar69._8_4_) *
                                         (local_538[uVar44 * 4 + 6] - auVar69._8_4_);
                                if (fVar65 < fVar56) {
                                  iVar30 = (int)uVar44 + 1;
                                }
                                if (fVar65 < fVar56) {
                                  fVar56 = fVar65;
                                }
                                fVar65 = (local_538[uVar44 * 4 + 8] - fVar82) *
                                         (local_538[uVar44 * 4 + 8] - fVar82) +
                                         (local_538[uVar44 * 4 + 9] - fVar84) *
                                         (local_538[uVar44 * 4 + 9] - fVar84) +
                                         (local_538[uVar44 * 4 + 10] - auVar69._8_4_) *
                                         (local_538[uVar44 * 4 + 10] - auVar69._8_4_);
                                if (fVar65 < fVar56) {
                                  iVar30 = (int)uVar44 + 2;
                                  fVar56 = fVar65;
                                }
                                uVar36 = uVar44 + 2;
                              } while ((uVar55 - 1 & 0xfffffffffffffffe) != uVar44 + 2);
                              lVar31 = uVar44 + 3;
                              if ((uVar55 - 1 & 1) != 0) goto LAB_00856404;
                            }
                            lVar31 = (long)iVar30;
                            cVar6 = pcVar54[lVar31];
                          }
                          if (cVar6 == '\0') {
                            *(long *)(local_508 + lVar31 * 4 + 2) = auVar69._8_8_;
                            *(undefined8 *)(local_508 + lVar31 * 4) = auVar69._0_8_;
                            bVar29 = 1;
                            pcVar54[lVar31] = '\x01';
                          }
                          else {
                            pfVar45 = local_508 + lVar31 * 4;
                            pfVar40 = local_538 + lVar31 * 4;
                            auVar76._0_4_ = (*pfVar45 - *pfVar40) * (*pfVar45 - *pfVar40);
                            auVar76._4_4_ = (pfVar45[1] - pfVar40[1]) * (pfVar45[1] - pfVar40[1]);
                            auVar76._8_4_ = (pfVar45[2] - pfVar40[2]) * (pfVar45[2] - pfVar40[2]);
                            auVar76._12_4_ = (pfVar45[3] - pfVar40[3]) * (pfVar45[3] - pfVar40[3]);
                            auVar61 = NEON_ext(auVar76,auVar76,8,1);
                            bVar29 = 1;
                            if (fVar56 < auVar76._0_4_ + auVar76._4_4_ + auVar61._0_4_) {
                              *(long *)(local_508 + lVar31 * 4 + 2) = auVar69._8_8_;
                              *(undefined8 *)(local_508 + lVar31 * 4) = auVar69._0_8_;
                            }
                          }
                        }
                        bVar16 = (bool)(bVar16 | bVar29);
                      }
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar32 != uVar20);
                }
              }
              uVar51 = uVar51 + 1;
              if (uVar51 == uVar32 - 1) break;
              uVar42 = uVar42 + 1;
              lVar37 = lVar37 + 1;
              cVar6 = local_590[lVar37];
            } while( true );
          }
        }
        uVar48 = uVar48 + 1;
        uVar47 = uVar47 + 1;
        lVar21 = lVar21 + 1;
      } while (uVar48 != uVar38);
    }
    if (uStack_278 == local_290) {
      fStack_288 = 0.0;
      if (local_280 == 0) goto LAB_00856514;
LAB_00856488:
      uVar38 = local_270 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulong *)(local_280 + 0x28) < uVar38) ||
         (*(long *)(local_280 + 0x38) != uVar38 + (long)uStack_278)) {
        auVar63 = FUN_031cf710();
      }
      else {
        *(float **)(local_280 + 0x38) = uStack_278;
        if (*(float **)(local_280 + 0x48) == uStack_278) {
          auVar63 = FUN_031cf578();
        }
      }
    }
    else {
      if (local_280 != 0) goto LAB_00856488;
LAB_00856514:
      auVar63 = (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    }
    fStack_288 = 0.0;
    if ((-1 < (int)fStack_284) && (local_290 != (float *)0x0)) {
      auVar63 = (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                          (PTR_PTR_047d1a50 + 0x20,local_290,(ulong)(uint)fStack_284 << 4);
    }
    if (lVar34 == 0) {
      auVar63 = (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar39,uVar22);
    }
    else {
      uVar22 = uVar22 + 0x3f & 0xffffffffffffffc0;
      if ((*(ulong *)(lVar34 + 0x28) < uVar22) || (*(long *)(lVar34 + 0x38) != uVar22 + lVar39)) {
        auVar63 = FUN_031cf710(lVar34,lVar39);
      }
      else {
        *(long *)(lVar34 + 0x38) = lVar39;
        if (*(long *)(lVar34 + 0x48) == lVar39) {
          auVar63 = FUN_031cf578(lVar34);
        }
      }
    }
    pcVar54 = local_530;
    if (local_518 == local_530) {
      local_528 = local_528 & 0xffffffff00000000;
      if (local_520 == 0) goto LAB_00856638;
LAB_008565c8:
      uVar22 = local_510 + 0x3f & 0xffffffffffffffc0;
      if ((*(ulong *)(local_520 + 0x28) < uVar22) ||
         (*(char **)(local_520 + 0x38) != local_518 + uVar22)) {
        auVar63 = FUN_031cf710();
      }
      else {
        *(char **)(local_520 + 0x38) = local_518;
        if (*(char **)(local_520 + 0x48) == local_518) {
          auVar63 = FUN_031cf578();
        }
      }
    }
    else {
      if (local_520 != 0) goto LAB_008565c8;
LAB_00856638:
      auVar63 = (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    }
    uVar22 = local_528;
    local_528 = local_528 & 0xffffffff00000000;
    if ((-1 < (long)uVar22) && (pcVar54 != (char *)0x0)) {
      auVar63 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,pcVar54);
    }
    if (bVar16) {
      iVar17 = FUN_0085f114(*(undefined8 *)(param_2 + 0x18),local_508,uVar55,0,0);
      auVar63._8_8_ = in_register_00005208;
      auVar63._0_8_ = uVar97;
      bVar16 = false;
      if (iVar17 < 2) {
        FUN_0085f114(*(undefined8 *)(param_2 + 0x18),local_538,local_5e4,0,0);
        auVar63 = ZEXT816(0);
        bVar16 = false;
        if (local_4f0 != local_508) goto LAB_008566b4;
        goto LAB_00856704;
      }
      if (local_4f0 == local_508) goto LAB_00856704;
LAB_008566b4:
      uStack_598 = auVar63._8_8_;
      local_5a0 = auVar63._0_4_;
      uStack_59c = auVar63._4_4_;
      if (local_4f8 != 0) goto LAB_008566c4;
LAB_00856718:
      (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    }
    else {
      bVar16 = true;
      if (local_4f0 != local_508) goto LAB_008566b4;
LAB_00856704:
      local_500 = local_500 & 0xffffffff00000000;
      uStack_598 = auVar63._8_8_;
      local_5a0 = auVar63._0_4_;
      uStack_59c = auVar63._4_4_;
      if (local_4f8 == 0) goto LAB_00856718;
LAB_008566c4:
      if ((*(ulong *)(local_4f8 + 0x28) < ((ulong)(local_4e8 + 0x3f) & 0xffffffffffffffc0)) ||
         (*(long *)(local_4f8 + 0x38) !=
          ((ulong)(local_4e8 + 0x3f) & 0xffffffffffffffc0) + (long)local_4f0)) {
        FUN_031cf710();
      }
      else {
        *(float **)(local_4f8 + 0x38) = local_4f0;
        if (*(float **)(local_4f8 + 0x48) == local_4f0) {
          FUN_031cf578();
        }
      }
    }
    uVar22 = local_500;
    uVar55 = (ulong)local_500._4_4_;
    local_500 = (ulong)local_500._4_4_ << 0x20;
    if ((-1 < (long)uVar22) && (local_508 != (float *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_508,uVar55 << 4);
    }
    pfVar28 = local_4e0;
    if (local_4c8 == local_4e0) {
      local_4d8 = local_4d8 & 0xffffffff00000000;
      if (local_4d0 == 0) goto LAB_00856814;
LAB_00856774:
      uVar22 = (long)local_4c0 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulong *)(local_4d0 + 0x28) < uVar22) ||
         (*(long *)(local_4d0 + 0x38) != uVar22 + (long)local_4c8)) {
        FUN_031cf710();
      }
      else {
        *(float **)(local_4d0 + 0x38) = local_4c8;
        if (*(float **)(local_4d0 + 0x48) == local_4c8) {
          FUN_031cf578();
        }
      }
    }
    else {
      if (local_4d0 != 0) goto LAB_00856774;
LAB_00856814:
      (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    }
    uVar22 = local_4d8;
    uVar55 = (ulong)local_4d8._4_4_;
    local_4d8 = (ulong)local_4d8._4_4_ << 0x20;
    if ((-1 < (long)uVar22) && (pfVar28 != (float *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,pfVar28,uVar55 << 4);
    }
    pfVar28 = local_490;
    if (local_478 == local_490) {
      local_488 = local_488 & 0xffffffff00000000;
      if (local_480 == 0) goto LAB_008568c4;
LAB_00856870:
      uVar22 = (long)local_470 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulong *)(local_480 + 0x28) < uVar22) ||
         (*(long *)(local_480 + 0x38) != uVar22 + (long)local_478)) {
        FUN_031cf710();
      }
      else {
        *(float **)(local_480 + 0x38) = local_478;
        if (*(float **)(local_480 + 0x48) == local_478) {
          FUN_031cf578();
        }
      }
    }
    else {
      if (local_480 != 0) goto LAB_00856870;
LAB_008568c4:
      (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    }
    uVar22 = local_488;
    uVar55 = (ulong)local_488._4_4_;
    local_488 = (ulong)local_488._4_4_ << 0x20;
    if ((-1 < (long)uVar22) && (pfVar28 != (float *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,pfVar28,uVar55 << 4);
    }
    if ((-1 < (int)local_60c) && (pfVar71 != (float *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,pfVar71,(ulong)local_60c << 5);
    }
    if (!bVar16) goto LAB_00856944;
  }
  local_5a0 = 0;
  uStack_59c = 0;
  uStack_598 = uVar35;
LAB_00856944:
  if ((local_538 != (float *)0x0) && (-1 < (int)local_5d4)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_538,(ulong)local_5d4 << 4);
  }
  lVar21 = local_4b8;
  if (local_4a0 == local_4b8) {
    local_4b0._0_4_ = 0;
  }
  if (local_4a8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar22 = (long)local_498 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_4a8 + 0x28) < uVar22) ||
       (*(long *)(local_4a8 + 0x38) != uVar22 + local_4a0)) {
      FUN_031cf710();
    }
    else {
      *(long *)(local_4a8 + 0x38) = local_4a0;
      if (*(long *)(local_4a8 + 0x48) == local_4a0) {
        FUN_031cf578();
      }
    }
  }
  uVar4 = local_4b0._4_4_;
  uVar22 = (ulong)local_4b0._4_4_;
  local_4b0 = (ulong)local_4b0._4_4_ << 0x20;
  if ((-1 < (int)uVar4) && (lVar21 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar21,uVar22 << 5);
  }
  if (local_5d0 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar50,local_5e0);
  }
  else {
    uVar22 = (long)local_5e0 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_5d0 + 0x28) < uVar22) || (*(long *)(local_5d0 + 0x38) != uVar22 + lVar50))
    {
      FUN_031cf710(local_5d0,lVar50);
    }
    else {
      *(long *)(local_5d0 + 0x38) = lVar50;
      if (*(long *)(local_5d0 + 0x48) == lVar50) {
        FUN_031cf578();
      }
    }
  }
  if ((-1 < (int)local_5d8) && (__s != (void *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))(PTR_PTR_047d1a50 + 0x20,__s,local_5d8);
  }
  if ((-1 < (int)local_5d8) && (local_590 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_590,local_5d8);
  }
  if (lVar33 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,pfVar23,pfVar52);
  }
  else {
    uVar22 = (long)pfVar52 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar33 + 0x28) < uVar22) || (*(long *)(lVar33 + 0x38) != uVar22 + (long)pfVar23)
       ) {
      FUN_031cf710(lVar33,pfVar23);
    }
    else {
      *(float **)(lVar33 + 0x38) = pfVar23;
      if (*(float **)(lVar33 + 0x48) == pfVar23) {
        FUN_031cf578(lVar33);
      }
    }
  }
  auVar10._4_4_ = uStack_59c;
  auVar10._0_4_ = local_5a0;
  auVar10._8_8_ = uStack_598;
  return auVar10;
}


