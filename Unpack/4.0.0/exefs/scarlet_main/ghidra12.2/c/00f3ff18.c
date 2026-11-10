/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f3ff18; name: FUN_00f3ff18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f3ff18(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined1 uVar6;
  ushort uVar7;
  short sVar8;
  size_t sVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  bool bVar17;
  char cVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  undefined8 *puVar24;
  float *pfVar25;
  void *__src;
  undefined8 uVar26;
  long *plVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  undefined2 uVar32;
  long lVar33;
  short *psVar34;
  short *psVar35;
  ushort *puVar36;
  ushort *puVar37;
  short *psVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  long *plVar41;
  undefined2 *puVar42;
  undefined2 *puVar43;
  undefined8 *puVar44;
  short *psVar45;
  byte *pbVar46;
  short *psVar47;
  byte *pbVar48;
  byte bVar49;
  char *unaff_x26;
  long lVar50;
  long lVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar64;
  float fVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  undefined1 auVar67 [12];
  float fVar70;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar71 [12];
  float fVar74;
  float fVar75;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar76;
  float fVar77;
  float fVar82;
  undefined1 auVar78 [12];
  float fVar80;
  undefined1 in_q3 [16];
  float fVar81;
  undefined1 auVar79 [16];
  int iVar84;
  undefined1 auVar83 [16];
  int iVar85;
  int iVar86;
  int iVar90;
  int iVar91;
  float fVar92;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  int iVar105;
  int iVar109;
  int iVar110;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  int iVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long *local_a0 [2];
  undefined8 local_88;
  
  lVar50 = *(long *)(param_1 + 0x4090);
  lVar51 = *(long *)(param_1 + 0x4098);
  plVar41 = (long *)PTR_DAT_047d6ca0;
  plVar27 = (long *)PTR_DAT_047d6ca8;
  if (lVar50 != lVar51) {
    unaff_x26 = (char *)(param_1 + 0x41c0);
    do {
      if ((*(long *)(lVar50 + 0x18) != 0) &&
         (lVar33 = *(long *)(*(long *)(lVar50 + 0x18) + 0x10), lVar33 != 0)) {
        lVar33 = *(long *)(lVar33 + 0xf8);
        if (lVar33 == 0) {
          bVar16 = false;
        }
        else {
          bVar16 = *(char *)(lVar33 + 0x210) != '\0';
        }
        cVar5 = *(char *)(lVar50 + 0x80);
        local_b0 = (undefined8 *)FUN_00f4189c(param_1,lVar50 + 8);
        uVar19 = FUN_00f41680(&local_b0);
        if (*(code **)(param_1 + 0x41d0) == (code *)0x0) {
          uVar20 = 1;
        }
        else {
          local_c0 = (undefined8 *)(CONCAT44(local_c0._4_4_,uVar19) & 0xffffffff000000ff);
          uVar20 = (**(code **)(param_1 + 0x41d0))(param_1 + 0x41f0,&local_c0);
        }
        if (*(code **)(param_1 + 0x4250) == (code *)0x0) {
          uVar23 = 1;
        }
        else {
          local_c0 = (undefined8 *)(CONCAT44(local_c0._4_4_,uVar19) & 0xffffffff000000ff);
          uVar23 = (**(code **)(param_1 + 0x4250))(param_1 + 0x4270,&local_c0);
          uVar23 = uVar23 & 0xffffffff;
        }
        cVar18 = FUN_00f41720(&local_b0);
        if (((*unaff_x26 == '\0') && (((uVar20 ^ 1) & 1) == 0)) && ((uVar23 & 1) != 0)) {
          if (cVar18 == '\x01') {
            if (*(int *)(lVar50 + 0x78) == 4) goto LAB_00f400c8;
            bVar17 = cVar5 != '\0';
          }
          else {
            bVar17 = cVar5 != '\0';
            if (cVar18 == '\x02') {
              bVar17 = cVar5 != '\0' && *(int *)(lVar50 + 0x78) == 4;
            }
          }
          if (bVar16 != bVar17) goto LAB_00f4004c;
        }
        else if (bVar16 != false) {
          bVar17 = false;
LAB_00f4004c:
          if (((((*(long *)(lVar50 + 0x58) == 0) ||
                (lVar33 = *(long *)(*(long *)(lVar50 + 0x58) + 0x10), lVar33 == 0)) ||
               (*(float *)(lVar33 + 0x17c) != 0.0)) &&
              ((*(long *)(lVar50 + 0x18) != 0 &&
               (lVar33 = *(long *)(*(long *)(lVar50 + 0x18) + 0x10), lVar33 != 0)))) &&
             (lVar33 = *(long *)(lVar33 + 0xf8), lVar33 != 0)) {
            *(bool *)(lVar33 + 0x210) = bVar17;
          }
        }
      }
LAB_00f400c8:
      puVar14 = PTR_LAB_047d6cb0;
      puVar13 = PTR_DAT_047d0860;
      lVar50 = lVar50 + 0x1c8;
    } while (lVar51 != lVar50);
    pbVar46 = *(byte **)(param_1 + 0x4090);
    pbVar48 = *(byte **)(param_1 + 0x4098);
    plVar41 = (long *)PTR_DAT_047d6ca0;
    plVar27 = (long *)PTR_DAT_047d6ca8;
    if (pbVar46 != pbVar48) {
      unaff_x26 = (char *)0x1;
      do {
        if (pbVar46[0x88] == 0) {
          if (*(long *)(param_1 + 0x48) != 0) {
            if ((*PTR_DAT_047d6c98 & 1) == 0) {
              iVar21 = __cxa_guard_acquire(PTR_DAT_047d6c98);
              plVar41 = (long *)PTR_DAT_047d6ca0;
              plVar27 = (long *)PTR_DAT_047d6ca8;
              if (iVar21 != 0) {
                FUN_00100190(puVar14,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d6c98);
                plVar41 = (long *)PTR_DAT_047d6ca0;
                plVar27 = (long *)PTR_DAT_047d6ca8;
              }
            }
            lVar50 = *plVar41;
            *plVar27 = lVar50;
            puVar24 = (undefined8 *)0x0;
            if (*(long *)(lVar50 + 0x70) != 0) {
              if ((*(long *)puVar13 == 0) || (DAT_045dfcb0 <= (*pbVar46 & 3))) {
                puVar24 = (undefined8 *)0x0;
              }
              else {
                local_c0 = (undefined8 *)0x0;
                FUN_00da4118(&local_b0,*(long *)puVar13,&local_c0);
                puVar24 = local_c0;
                if ((int)local_b0 != 0) {
                  puVar24 = (undefined8 *)0x0;
                }
              }
            }
            uVar32 = *(undefined2 *)pbVar46;
            *(undefined1 *)(param_1 + 0x58) = 0;
            *(undefined2 *)(param_1 + 0x5a) = uVar32;
            local_b0 = puVar24;
            uVar23 = (**(code **)(**(long **)(param_1 + 0x48) + 0x68))
                               (*(long **)(param_1 + 0x48),(undefined1 *)(param_1 + 0x58),4,
                                &local_b0);
            if ((uVar23 & 1) != 0) {
              bVar49 = 1;
              if (2 < *(uint *)(pbVar46 + 0x78)) {
                bVar49 = 2;
              }
              pbVar46[0x88] = bVar49;
            }
            plVar41 = (long *)PTR_DAT_047d6ca0;
            plVar27 = (long *)PTR_DAT_047d6ca8;
          }
        }
        pbVar46 = pbVar46 + 0x1c8;
      } while (pbVar48 != pbVar46);
    }
  }
  if (((*PTR_DAT_047d6c98 & 1) == 0) &&
     (iVar21 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar21 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar50 = *plVar41;
  *plVar27 = lVar50;
  if (lVar50 != 0) {
    *(undefined8 *)(lVar50 + 0x138) = 0;
    lVar51 = *(long *)PTR_DAT_047d0a08;
    if (lVar51 == 0) {
LAB_00f40994:
      plVar41 = *(long **)(lVar50 + 0x110);
      unaff_x26 = (char *)0x0;
LAB_00f4099c:
      puVar24 = (undefined8 *)0x0;
      bVar16 = true;
    }
    else {
      lVar33 = *(long *)(lVar51 + 0xd8);
      if (lVar33 == lVar51 + 0xd0) goto LAB_00f40994;
      do {
        local_b0 = *(undefined8 **)(lVar33 + 0x10);
        FUN_00fe9c44((undefined8 *)(lVar50 + 0x110),&local_b0);
        lVar33 = *(long *)(lVar33 + 8);
      } while (lVar33 != lVar51 + 0xd0);
      unaff_x26 = *(char **)(lVar50 + 0x138);
      plVar41 = *(long **)(lVar50 + 0x110);
      if (unaff_x26 == (char *)0x0) goto LAB_00f4099c;
      if (*(char **)(lVar50 + 0x118) < unaff_x26) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar24 = (undefined8 *)(**(code **)(*plVar41 + 0x10))(plVar41,(long)unaff_x26 << 3,8);
      if (puVar24 == (undefined8 *)0x0) {
        (**(code **)(*plVar41 + 0xe8))(plVar41);
      }
      if (*(long *)(lVar50 + 0x138) != 0) {
        memmove(puVar24,*(void **)(lVar50 + 0x130),*(long *)(lVar50 + 0x138) << 3);
      }
      bVar16 = false;
    }
    psVar45 = *(short **)(param_1 + 0x4100);
    psVar34 = *(short **)(param_1 + 0x4108);
    if (psVar45 != psVar34) {
      puVar44 = puVar24;
      if (!bVar16) {
        puVar44 = puVar24 + (long)unaff_x26;
      }
      psVar35 = psVar45 + 8;
      do {
        local_b0 = *(undefined8 **)(psVar45 + 4);
        puVar39 = puVar24;
        if ((puVar44 != puVar24) && ((undefined8 *)*puVar24 != local_b0)) {
          puVar40 = puVar24;
          do {
            if (puVar44 + -1 == puVar40) goto switchD_00f40b34_caseD_5;
            puVar1 = puVar40 + 1;
            puVar39 = puVar40 + 1;
            puVar40 = puVar40 + 1;
          } while ((undefined8 *)*puVar1 != local_b0);
        }
        if (puVar44 == puVar39) {
switchD_00f40b34_caseD_5:
          sVar9 = (long)psVar34 - (long)psVar35;
          if (sVar9 != 0) {
            memmove(psVar45,psVar35,sVar9);
          }
          *(size_t *)(param_1 + 0x4108) = (long)psVar45 + sVar9;
        }
        else {
          psVar47 = *(short **)(param_1 + 0x4058);
          psVar38 = *(short **)(param_1 + 0x4060);
          if (psVar47 != psVar38) {
            do {
              if (*psVar47 == *psVar45) goto LAB_00f40a94;
              psVar47 = psVar47 + 0x58;
            } while (psVar38 != psVar47);
            goto switchD_00f40b34_caseD_5;
          }
LAB_00f40a94:
          if (psVar47 == psVar38) goto switchD_00f40b34_caseD_5;
          if (*(int *)(psVar47 + 0x3c) - 3U < 2) {
            sVar9 = (long)psVar34 - (long)psVar35;
            if (sVar9 != 0) {
              memmove(psVar45,psVar35,sVar9);
            }
            *(size_t *)(param_1 + 0x4108) = (long)psVar45 + sVar9;
            FUN_00f42e70(param_1,psVar47);
          }
          else {
            switch(*(int *)(psVar47 + 0x3c)) {
            case 0:
              uVar23 = FUN_00f43b00(param_1,psVar47,&local_b0);
              if ((uVar23 & 1) == 0) goto switchD_00f40b34_caseD_3;
              goto LAB_00f40f14;
            case 1:
              uVar23 = FUN_00f432a4(param_1,psVar47,&local_b0);
              break;
            case 2:
              uVar23 = FUN_00f439b4(param_1,psVar47,&local_b0);
              break;
            default:
              goto switchD_00f40b34_caseD_3;
            case 5:
            case 6:
              goto switchD_00f40b34_caseD_5;
            }
            if ((uVar23 & 1) != 0) {
LAB_00f40f14:
              psVar34 = *(short **)(param_1 + 0x4108);
              goto switchD_00f40b34_caseD_5;
            }
          }
        }
switchD_00f40b34_caseD_3:
        psVar34 = *(short **)(param_1 + 0x4108);
      } while (psVar45 != psVar34);
    }
    if (!bVar16) {
      uVar23 = (**(code **)(*plVar41 + 0xf8))(plVar41);
      if (((uVar23 & 1) == 0) || (lVar50 = FUN_00c4e600(), *(int *)(lVar50 + 0x12c8) < 1)) {
        (**(code **)(*plVar41 + 0x18))(plVar41,puVar24,(long)unaff_x26 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar41,puVar24,(long)unaff_x26 << 3,8);
      }
    }
  }
  puVar43 = *(undefined2 **)(param_1 + 0x4060);
  puVar42 = *(undefined2 **)(param_1 + 0x4058);
  uVar26 = _DAT_03cabb00;
  uVar10 = _UNK_03cabb08;
  uVar11 = _DAT_03cac210;
  uVar12 = _UNK_03cac218;
  while( true ) {
    _DAT_03cabb00 = uVar26;
    _UNK_03cabb08 = uVar10;
    _DAT_03cac210 = uVar11;
    _UNK_03cac218 = uVar12;
    if (puVar42 == puVar43) break;
    if (*(char *)((long)puVar42 + 0x89) == '\0') {
      if ((*(char *)(puVar42 + 0x44) != '\0') &&
         (uVar23 = FUN_00f42e70(param_1,puVar42), (uVar23 & 1) != 0)) {
        *(undefined1 *)(puVar42 + 0x44) = 0;
        *(undefined1 *)(puVar42 + 0x45) = 0;
      }
    }
    else {
      uVar32 = *puVar42;
      *(undefined1 *)(param_1 + 0x58) = 0xb;
      plVar41 = *(long **)(param_1 + 0x48);
      *(undefined2 *)(param_1 + 0x5a) = uVar32;
      if ((plVar41 != (long *)0x0) &&
         (uVar23 = (**(code **)(*plVar41 + 0x70))(plVar41,(undefined1 *)(param_1 + 0x58),4),
         (uVar23 & 1) != 0)) {
        *(undefined2 *)((long)puVar42 + 0x89) = 0x100;
      }
    }
    puVar42 = puVar42 + 0x58;
    uVar26 = _DAT_03cabb00;
    uVar10 = _UNK_03cabb08;
    uVar11 = _DAT_03cac210;
    uVar12 = _UNK_03cac218;
  }
  DAT_04839798 = DAT_04839798 + 1;
  if (*(long *)(param_1 + 0x50) != 0) {
    puVar42 = *(undefined2 **)(param_1 + 0x4058);
    puVar43 = *(undefined2 **)(param_1 + 0x4060);
    if (puVar42 != puVar43) {
      auVar60 = NEON_fmov(0x3f800000,4);
      fStack_d8 = (float)_UNK_03cab3a8;
      fStack_d4 = (float)((ulong)_UNK_03cab3a8 >> 0x20);
      local_e0 = (float)_DAT_03cab3a0;
      fStack_dc = (float)((ulong)_DAT_03cab3a0 >> 0x20);
      auVar61 = NEON_fmov(0x40800000,4);
      do {
        if ((((*(char *)(puVar42 + 0x45) == '\0') && (*(char *)(puVar42 + 0x40) != '\0')) &&
            (((DAT_04839798 & 1) == 0 || (*(int *)(puVar42 + 0x3c) != 4)))) &&
           ((*(long *)(puVar42 + 4) != 0 &&
            (lVar50 = *(long *)(*(long *)(puVar42 + 4) + 0x10), lVar50 != 0)))) {
          uVar32 = *puVar42;
          *(undefined1 *)(param_1 + 0x58) = 4;
          *(undefined2 *)(param_1 + 0x5a) = uVar32;
          iVar21 = *(int *)(puVar42 + 0x3c);
          uVar20 = iVar21 - 2;
          plVar41 = (long *)(lVar50 + -0x28);
          if (uVar20 < 5) {
            pfVar25 = (float *)(**(code **)(*plVar41 + 0x68))(plVar41);
            fVar100 = *pfVar25;
            fVar70 = pfVar25[1];
            fVar59 = pfVar25[2];
            fVar64 = pfVar25[3];
            fVar65 = pfVar25[4];
            fVar66 = pfVar25[5];
            fVar74 = pfVar25[6];
            fVar75 = pfVar25[7];
            fVar76 = pfVar25[8];
            fVar80 = pfVar25[9];
            fVar82 = pfVar25[10];
            fVar92 = pfVar25[0xb] * pfVar25[0xb];
            auVar103._0_4_ = fVar65 * fVar65 + fVar66 * fVar66;
            auVar103._4_4_ = fVar74 * fVar74 + fVar75 * fVar75;
            auVar103._8_4_ = fVar65 * fVar65 + fVar66 * fVar66;
            auVar103._12_4_ = fVar74 * fVar74 + fVar75 * fVar75;
            auVar107._0_4_ = fVar76 * fVar76 + fVar80 * fVar80;
            auVar107._4_4_ = fVar82 * fVar82 + fVar92;
            auVar107._8_4_ = fVar76 * fVar76 + fVar80 * fVar80;
            auVar107._12_4_ = fVar82 * fVar82 + fVar92;
            auVar52._0_4_ = fVar100 * fVar100 + fVar70 * fVar70;
            auVar52._4_4_ = fVar59 * fVar59 + fVar64 * fVar64;
            auVar52._8_4_ = fVar100 * fVar100 + fVar70 * fVar70;
            auVar52._12_4_ = fVar59 * fVar59 + fVar64 * fVar64;
            auVar83 = NEON_ext(auVar103,auVar103,4,1);
            auVar87 = NEON_ext(auVar107,auVar107,4,1);
            auVar62 = NEON_ext(auVar52,auVar52,4,1);
            auVar53._0_4_ = auVar83._0_4_ + auVar83._4_4_;
            auVar53._4_4_ = auVar83._8_4_ + auVar83._12_4_;
            auVar53._8_4_ = auVar83._0_4_ + auVar83._4_4_;
            auVar53._12_4_ = auVar83._8_4_ + auVar83._12_4_;
            auVar54._0_4_ = auVar87._0_4_ + auVar87._4_4_;
            auVar54._4_4_ = auVar87._8_4_ + auVar87._12_4_;
            auVar54._8_4_ = auVar87._0_4_ + auVar87._4_4_;
            auVar54._12_4_ = auVar87._8_4_ + auVar87._12_4_;
            auVar55._0_4_ = auVar62._0_4_ + auVar62._4_4_;
            auVar55._4_4_ = auVar62._8_4_ + auVar62._12_4_;
            auVar55._8_4_ = auVar62._0_4_ + auVar62._4_4_;
            auVar55._12_4_ = auVar62._8_4_ + auVar62._12_4_;
            auVar83 = NEON_frsqrte(auVar53,4);
            auVar103 = NEON_frsqrte(auVar54,4);
            auVar62 = NEON_frsqrte(auVar55,4);
            auVar106._0_4_ = auVar53._0_4_ * auVar83._0_4_;
            auVar106._4_4_ = auVar53._4_4_ * auVar83._4_4_;
            auVar106._8_4_ = auVar53._8_4_ * auVar83._8_4_;
            auVar106._12_4_ = auVar53._12_4_ * auVar83._12_4_;
            auVar112._0_4_ = auVar54._0_4_ * auVar103._0_4_;
            auVar112._4_4_ = auVar54._4_4_ * auVar103._4_4_;
            auVar112._8_4_ = auVar54._8_4_ * auVar103._8_4_;
            auVar112._12_4_ = auVar54._12_4_ * auVar103._12_4_;
            auVar101._0_4_ = auVar55._0_4_ * auVar62._0_4_;
            auVar101._4_4_ = auVar55._4_4_ * auVar62._4_4_;
            auVar101._8_4_ = auVar55._8_4_ * auVar62._8_4_;
            auVar101._12_4_ = auVar55._12_4_ * auVar62._12_4_;
            auVar107 = NEON_frsqrts(auVar83,auVar106,4);
            auVar87 = NEON_frsqrts(auVar62,auVar101,4);
            auVar98._0_4_ = auVar83._0_4_ * auVar107._0_4_;
            auVar98._4_4_ = auVar83._4_4_ * auVar107._4_4_;
            auVar98._8_4_ = auVar83._8_4_ * auVar107._8_4_;
            auVar98._12_4_ = auVar83._12_4_ * auVar107._12_4_;
            auVar93._0_4_ = auVar62._0_4_ * auVar87._0_4_;
            auVar93._4_4_ = auVar62._4_4_ * auVar87._4_4_;
            auVar93._8_4_ = auVar62._8_4_ * auVar87._8_4_;
            auVar93._12_4_ = auVar62._12_4_ * auVar87._12_4_;
            auVar62 = NEON_frsqrts(auVar103,auVar112,4);
            auVar108._0_4_ = auVar55._0_4_ * auVar93._0_4_;
            auVar108._4_4_ = auVar55._4_4_ * auVar93._4_4_;
            auVar108._8_4_ = auVar55._8_4_ * auVar93._8_4_;
            auVar108._12_4_ = auVar55._12_4_ * auVar93._12_4_;
            auVar102._0_4_ = auVar103._0_4_ * auVar62._0_4_;
            auVar102._4_4_ = auVar103._4_4_ * auVar62._4_4_;
            auVar102._8_4_ = auVar103._8_4_ * auVar62._8_4_;
            auVar102._12_4_ = auVar103._12_4_ * auVar62._12_4_;
            auVar104._0_4_ = auVar53._0_4_ * auVar98._0_4_;
            auVar104._4_4_ = auVar53._4_4_ * auVar98._4_4_;
            auVar104._8_4_ = auVar53._8_4_ * auVar98._8_4_;
            auVar104._12_4_ = auVar53._12_4_ * auVar98._12_4_;
            iVar21 = -(uint)(auVar53._0_4_ == 0.0);
            iVar22 = -(uint)(auVar53._4_4_ == 0.0);
            iVar84 = -(uint)(auVar53._8_4_ == 0.0);
            iVar85 = -(uint)(auVar53._12_4_ == 0.0);
            auVar113._0_4_ = auVar54._0_4_ * auVar102._0_4_;
            auVar113._4_4_ = auVar54._4_4_ * auVar102._4_4_;
            auVar113._8_4_ = auVar54._8_4_ * auVar102._8_4_;
            auVar113._12_4_ = auVar54._12_4_ * auVar102._12_4_;
            auVar83 = NEON_frsqrts(auVar93,auVar108,4);
            auVar103 = NEON_frsqrts(auVar102,auVar113,4);
            auVar62 = NEON_frsqrts(auVar98,auVar104,4);
            fVar100 = fVar100 * auVar93._0_4_ * auVar83._0_4_;
            fVar70 = fVar70 * auVar93._4_4_ * auVar83._4_4_;
            fVar59 = fVar59 * auVar93._8_4_ * auVar83._8_4_;
            fVar64 = fVar64 * auVar93._12_4_ * auVar83._12_4_;
            iVar86 = -(uint)(auVar54._0_4_ == 0.0);
            iVar90 = -(uint)(auVar54._4_4_ == 0.0);
            iVar91 = -(uint)(auVar54._8_4_ == 0.0);
            iVar105 = -(uint)(auVar55._0_4_ == 0.0);
            iVar109 = -(uint)(auVar55._4_4_ == 0.0);
            iVar110 = -(uint)(auVar55._8_4_ == 0.0);
            iVar111 = -(uint)(auVar55._12_4_ == 0.0);
            fVar100 = (float)CONCAT13((byte)((uint)fVar100 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18)
                                      ,CONCAT12((byte)((uint)fVar100 >> 0x10) &
                                                ~(byte)((uint)iVar105 >> 0x10),
                                                CONCAT11((byte)((uint)fVar100 >> 8) &
                                                         ~(byte)((uint)iVar105 >> 8),
                                                         SUB41(fVar100,0) & ~(byte)iVar105)));
            auVar67._0_8_ =
                 CONCAT17((byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar109 >> 0x18),
                          CONCAT16((byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar109 >> 0x10),
                                   CONCAT15((byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar109 >> 8),
                                            CONCAT14(SUB41(fVar70,0) & ~(byte)iVar109,fVar100))));
            auVar67[8] = SUB41(fVar59,0) & ~(byte)iVar110;
            auVar67[9] = (byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar110 >> 8);
            auVar67[10] = (byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar110 >> 0x10);
            auVar67[0xb] = (byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar110 >> 0x18);
            auVar68[0xc] = SUB41(fVar64,0) & ~(byte)iVar111;
            auVar68._0_12_ = auVar67;
            auVar68[0xd] = (byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar111 >> 8);
            auVar68[0xe] = (byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar111 >> 0x10);
            auVar68[0xf] = (byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar111 >> 0x18);
            auVar87 = NEON_ext(auVar68,auVar68,8,1);
            fVar65 = fVar65 * auVar98._0_4_ * auVar62._0_4_;
            fVar66 = fVar66 * auVar98._4_4_ * auVar62._4_4_;
            fVar74 = fVar74 * auVar98._8_4_ * auVar62._8_4_;
            fVar75 = fVar75 * auVar98._12_4_ * auVar62._12_4_;
            fVar92 = (float)CONCAT13((byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                     CONCAT12((byte)((uint)fVar65 >> 0x10) &
                                              ~(byte)((uint)iVar21 >> 0x10),
                                              CONCAT11((byte)((uint)fVar65 >> 8) &
                                                       ~(byte)((uint)iVar21 >> 8),
                                                       SUB41(fVar65,0) & ~(byte)iVar21)));
            auVar72._0_8_ =
                 CONCAT17((byte)((uint)fVar66 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                          CONCAT16((byte)((uint)fVar66 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                   CONCAT15((byte)((uint)fVar66 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                            CONCAT14(SUB41(fVar66,0) & ~(byte)iVar22,fVar92))));
            auVar72[8] = SUB41(fVar74,0) & ~(byte)iVar84;
            auVar72[9] = (byte)((uint)fVar74 >> 8) & ~(byte)((uint)iVar84 >> 8);
            auVar72[10] = (byte)((uint)fVar74 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10);
            auVar72[0xb] = (byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18);
            auVar72[0xc] = SUB41(fVar75,0) & ~(byte)iVar85;
            auVar72[0xd] = (byte)((uint)fVar75 >> 8) & ~(byte)((uint)iVar85 >> 8);
            auVar72[0xe] = (byte)((uint)fVar75 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
            auVar72[0xf] = (byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
            fVar76 = fVar76 * auVar102._0_4_ * auVar103._0_4_;
            fVar80 = fVar80 * auVar102._4_4_ * auVar103._4_4_;
            fVar82 = fVar82 * auVar102._8_4_ * auVar103._8_4_;
            auVar62 = NEON_ext(auVar72,auVar72,8,1);
            fVar77 = (float)CONCAT13((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18),
                                     CONCAT12((byte)((uint)fVar76 >> 0x10) &
                                              ~(byte)((uint)iVar86 >> 0x10),
                                              CONCAT11((byte)((uint)fVar76 >> 8) &
                                                       ~(byte)((uint)iVar86 >> 8),
                                                       SUB41(fVar76,0) & ~(byte)iVar86)));
            auVar78._0_8_ =
                 CONCAT17((byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18),
                          CONCAT16((byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10),
                                   CONCAT15((byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar90 >> 8),
                                            CONCAT14(SUB41(fVar80,0) & ~(byte)iVar90,fVar77))));
            auVar78[8] = SUB41(fVar82,0) & ~(byte)iVar91;
            auVar78[9] = (byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar91 >> 8);
            auVar78[10] = (byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10);
            auVar78[0xb] = (byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18);
            local_f0 = auVar60._0_4_;
            fStack_ec = auVar60._4_4_;
            fStack_e8 = auVar60._8_4_;
            fStack_e4 = auVar60._12_4_;
            fVar81 = (float)((ulong)auVar78._0_8_ >> 0x20);
            fVar74 = (float)((ulong)auVar67._0_8_ >> 0x20);
            fVar65 = (float)((ulong)auVar72._0_8_ >> 0x20);
            fVar66 = auVar78._8_4_;
            fVar70 = local_f0 + local_e0 * fVar100 + (float)uVar11 * fVar65 + (float)uVar26 * fVar66
            ;
            fVar59 = fStack_ec + fStack_dc * fVar100 + (float)((ulong)uVar11 >> 0x20) * fVar65 +
                     (float)((ulong)uVar26 >> 0x20) * fVar66;
            fVar64 = fStack_e8 + fStack_d8 * fVar100 + (float)uVar12 * fVar65 +
                     (float)uVar10 * fVar66;
            fVar65 = fStack_e4 + fStack_d4 * fVar100 + (float)((ulong)uVar12 >> 0x20) * fVar65 +
                     (float)((ulong)uVar10 >> 0x20) * fVar66;
            fVar100 = auVar62._0_4_;
            fVar66 = fVar74 - fVar92;
            local_120 = auVar61._0_4_;
            fStack_11c = auVar61._4_4_;
            fStack_118 = auVar61._8_4_;
            fStack_114 = auVar61._12_4_;
            auVar73._0_4_ = SQRT(fVar70) * 0.5 * local_120;
            auVar73._4_4_ = SQRT(fVar59) * 0.5 * fStack_11c;
            auVar73._8_4_ = SQRT(fVar64) * 0.5 * fStack_118;
            auVar73._12_4_ = SQRT(fVar65) * 0.5 * fStack_114;
            auVar62 = NEON_frecpe(auVar73,4);
            auVar83 = NEON_frecps(auVar62,auVar73,4);
            auVar94._4_4_ = fVar59;
            auVar94._0_4_ = fVar59;
            auVar94._8_4_ = fVar59;
            auVar94._12_4_ = fVar59;
            auVar79._4_4_ = fVar70;
            auVar79._0_4_ = fVar70;
            auVar79._8_4_ = fVar70;
            auVar79._12_4_ = fVar70;
            auVar88._0_4_ = auVar62._0_4_ * auVar83._0_4_;
            auVar88._4_4_ = auVar62._4_4_ * auVar83._4_4_;
            auVar88._8_4_ = auVar62._8_4_ * auVar83._8_4_;
            auVar88._12_4_ = auVar62._12_4_ * auVar83._12_4_;
            auVar83._4_4_ = -(uint)(fVar70 <= fVar59);
            auVar83._0_4_ = -(uint)(fVar70 <= fVar59);
            auVar83._8_4_ = -(uint)(fVar70 <= fVar59);
            auVar83._12_4_ = -(uint)(fVar70 <= fVar59);
            auVar79 = auVar79 ^ (auVar79 ^ auVar94) & auVar83;
            auVar95._4_4_ = fVar64;
            auVar95._0_4_ = fVar64;
            auVar95._8_4_ = fVar64;
            auVar95._12_4_ = fVar64;
            auVar114._0_4_ = -(uint)(auVar79._0_4_ <= fVar64);
            auVar114._4_4_ = -(uint)(auVar79._4_4_ <= fVar64);
            auVar114._8_4_ = -(uint)(auVar79._8_4_ <= fVar64);
            auVar114._12_4_ = -(uint)(auVar79._12_4_ <= fVar64);
            auVar62 = NEON_frecps(auVar88,auVar73,4);
            auVar79 = auVar79 ^ (auVar79 ^ auVar95) & auVar114;
            auVar63._0_4_ = -(uint)(auVar79._0_4_ <= fVar65);
            auVar63._4_4_ = -(uint)(auVar79._4_4_ <= fVar65);
            auVar63._8_4_ = -(uint)(auVar79._8_4_ <= fVar65);
            auVar63._12_4_ = -(uint)(auVar79._12_4_ <= fVar65);
            in_q3._0_4_ = fVar100 - fVar81;
            in_q3._4_4_ = fVar77 - auVar67._8_4_;
            in_q3._8_4_ = fVar66;
            in_q3._12_4_ = 0;
            fVar75 = auVar88._0_4_ * auVar62._0_4_;
            fVar76 = auVar88._4_4_ * auVar62._4_4_;
            fVar80 = auVar88._8_4_ * auVar62._8_4_;
            fVar82 = auVar88._12_4_ * auVar62._12_4_;
            auVar71._4_8_ = auVar88._8_8_;
            auVar71._0_4_ = (fVar74 + fVar92) * fVar75;
            auVar89._0_8_ = auVar71._0_8_ << 0x20;
            auVar89._8_4_ = (auVar87._0_4_ + fVar77) * fVar75;
            auVar89._12_4_ = (fVar100 + -fVar81) * fVar75;
            auVar96._0_4_ = (fVar74 + fVar92) * fVar76;
            auVar96._4_4_ = fVar76 * 0.0;
            auVar96._8_4_ = (fVar100 + fVar81) * fVar76;
            auVar96._12_4_ = (fVar77 + -auVar67._8_4_) * fVar76;
            auVar99._0_4_ = (auVar87._0_4_ + fVar77) * fVar80;
            auVar99._4_4_ = (fVar100 + fVar81) * fVar80;
            auVar99._12_4_ = fVar66 * fVar80;
            auVar69._0_4_ = in_q3._0_4_ * fVar82;
            auVar69._4_4_ = in_q3._4_4_ * fVar82;
            auVar69._8_4_ = fVar66 * fVar82;
            auVar62._4_12_ = auVar89._4_12_;
            auVar62._0_4_ = SQRT(fVar70) * 0.5;
            auVar97._8_8_ = auVar96._8_8_;
            auVar97._4_4_ = SQRT(fVar59) * 0.5;
            auVar97._0_4_ = auVar96._0_4_;
            auVar99._8_4_ = SQRT(fVar64) * 0.5;
            auVar69._12_4_ = SQRT(fVar65) * 0.5;
            auVar87._4_4_ = -(uint)(fVar70 <= fVar59);
            auVar87._0_4_ = -(uint)(fVar70 <= fVar59);
            auVar87._8_4_ = -(uint)(fVar70 <= fVar59);
            auVar87._12_4_ = -(uint)(fVar70 <= fVar59);
            auVar62 = auVar62 ^ (auVar62 ^ auVar97) & auVar87;
            auVar62 = auVar62 ^ (auVar62 ^ auVar99) & auVar114;
            auVar62 = auVar62 ^ (auVar62 ^ auVar69) & auVar63;
            lVar51 = (**(code **)(*plVar41 + 0x68))(plVar41);
            iVar21 = *(int *)(puVar42 + 0x3c);
            auVar71 = SUB1612(*(undefined1 (*) [16])(lVar51 + 0x30),0);
          }
          else {
            auVar62 = *(undefined1 (*) [16])(lVar50 + 0xa8);
            auVar71 = SUB1612(*(undefined1 (*) [16])(lVar50 + 0xb8),0);
          }
          uVar7 = puVar42[0x3f];
          unaff_x26 = (char *)(ulong)uVar7;
          local_d0 = auVar62._0_4_;
          local_130 = auVar71._0_4_;
          if (iVar21 == 5) {
            if (uVar20 < 5) {
              pfVar25 = (float *)(**(code **)(*plVar41 + 0x68))(plVar41);
              in_q3 = ZEXT816(0);
              fVar65 = pfVar25[4] * pfVar25[4];
              fVar66 = pfVar25[5] * pfVar25[5];
              fVar74 = pfVar25[6] * pfVar25[6];
              fVar75 = pfVar25[7] * pfVar25[7];
              fVar76 = pfVar25[8] * pfVar25[8];
              fVar80 = pfVar25[9] * pfVar25[9];
              fVar82 = pfVar25[10] * pfVar25[10];
              fVar92 = pfVar25[0xb] * pfVar25[0xb];
              fVar100 = *pfVar25 * *pfVar25;
              fVar70 = pfVar25[1] * pfVar25[1];
              fVar59 = pfVar25[2] * pfVar25[2];
              fVar64 = pfVar25[3] * pfVar25[3];
              auVar56._0_4_ = fVar65 + fVar66;
              auVar56._4_4_ = fVar74 + fVar75;
              auVar56._8_4_ = fVar65 + fVar66;
              auVar56._12_4_ = fVar74 + fVar75;
              auVar57._0_4_ = fVar76 + fVar80;
              auVar57._4_4_ = fVar82 + fVar92;
              auVar57._8_4_ = fVar76 + fVar80;
              auVar57._12_4_ = fVar82 + fVar92;
              auVar58._0_4_ = fVar100 + fVar70;
              auVar58._4_4_ = fVar59 + fVar64;
              auVar58._8_4_ = fVar100 + fVar70;
              auVar58._12_4_ = fVar59 + fVar64;
              NEON_ext(auVar56,auVar56,4,1);
              NEON_ext(auVar57,auVar57,4,1);
              auVar83 = NEON_ext(auVar58,auVar58,4,1);
              fVar100 = SQRT(auVar83._0_4_ + auVar83._4_4_);
            }
            else {
              fVar100 = SUB164(*(undefined1 (*) [16])(lVar50 + 0x98),0);
            }
            uVar32 = (undefined2)(int)(fVar100 * 64.0);
          }
          else {
            uVar32 = 0;
          }
          *(float *)(param_1 + 0x5c) = local_d0;
          *(int *)(param_1 + 0x60) = auVar62._4_4_;
          *(int *)(param_1 + 100) = auVar62._8_4_;
          *(int *)(param_1 + 0x68) = auVar62._12_4_;
          *(float *)(param_1 + 0x6c) = local_130;
          *(int *)(param_1 + 0x70) = auVar71._4_4_;
          *(int *)(param_1 + 0x74) = auVar71._8_4_;
          *(ushort *)(param_1 + 0x78) = uVar7;
          *(undefined2 *)(param_1 + 0x7a) = uVar32;
          (**(code **)(**(long **)(param_1 + 0x50) + 0x70))
                    (*(long **)(param_1 + 0x50),param_1 + 0x58,0x24);
          *(undefined1 *)((long)puVar42 + 0x7f) = 0;
        }
        puVar42 = puVar42 + 0x58;
      } while (puVar43 != puVar42);
    }
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    puVar42 = *(undefined2 **)(param_1 + 0x4058);
    puVar43 = *(undefined2 **)(param_1 + 0x4060);
    if (puVar42 != puVar43) {
      unaff_x26 = (char *)0x3ffc;
      do {
        if (((*(char *)(puVar42 + 0x45) == '\0') &&
            (lVar50 = *(long *)(puVar42 + 0x34), lVar50 != 0)) &&
           (iVar21 = FUN_00f41a60(lVar50), iVar21 != 0)) {
          uVar32 = *puVar42;
          *(undefined1 *)(param_1 + 0x58) = 5;
          *(undefined2 *)(param_1 + 0x5a) = uVar32;
          if (((*(long *)(lVar50 + 0x40) != 0) && (*(short *)(*(long *)(lVar50 + 0x40) + 0x1a) != 0)
              ) && (uVar20 = *(uint *)(lVar50 + 0x250),
                   (ulong)uVar20 + *(long *)(lVar50 + 0x370) + 5 < 0x3ffd)) {
            *(uint *)(param_1 + 0x5c) = uVar20;
            iVar21 = uVar20 + 4;
            memcpy((void *)(param_1 + 0x60),(void *)(lVar50 + 0x50),(ulong)*(uint *)(lVar50 + 0x250)
                  );
            if ((**(char **)(lVar50 + 0x368) != '\0') && (*(char *)(lVar50 + 0x338) != '\0')) {
              iVar21 = uVar20 + (int)*(long *)(lVar50 + 0x370) + 5;
              memcpy((void *)(param_1 + 0x60 + (ulong)*(uint *)(lVar50 + 0x250)),
                     *(char **)(lVar50 + 0x368),*(long *)(lVar50 + 0x370) + 1);
            }
            *(undefined4 *)(lVar50 + 0x250) = 0;
            *(undefined1 *)(lVar50 + 0x338) = 0;
            if (iVar21 != 0) {
              (**(code **)(**(long **)(param_1 + 0x48) + 0x70))
                        (*(long **)(param_1 + 0x48),(undefined1 *)(param_1 + 0x58),iVar21 + 4);
            }
          }
        }
        puVar42 = puVar42 + 0x58;
      } while (puVar43 != puVar42);
    }
  }
  puVar15 = PTR_DAT_047d6520;
  puVar14 = PTR_LAB_047d3de8;
  puVar13 = PTR_DAT_047d3908;
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_00f408d0;
  puVar42 = *(undefined2 **)(param_1 + 0x4058);
  puVar43 = *(undefined2 **)(param_1 + 0x4060);
  if (puVar42 != puVar43) {
    puVar24 = (undefined8 *)PTR_DAT_047d6528;
LAB_00f40740:
    if (*(char *)(puVar42 + 0x45) == '\0') {
      if (*(long *)(puVar42 + 0x14) != 0) {
        lVar50 = *(long *)(*(long *)(puVar42 + 0x14) + 0x10);
        if (lVar50 != 0) {
          plVar41 = *(long **)(lVar50 + 0x150);
          plVar27 = *(long **)(lVar50 + 0x158);
          if (plVar41 == plVar27) {
LAB_00f40798:
            if ((plVar41 != plVar27) && (*plVar41 != 0)) {
              FUN_00f422c8(local_a0,*plVar41,&local_b0);
              if (local_a0[0] == (long *)0x0) goto LAB_00f40750;
              uVar32 = *puVar42;
              *(undefined1 *)(param_1 + 0x58) = 6;
              *(undefined2 *)(param_1 + 0x5a) = uVar32;
              auVar60 = *(undefined1 (*) [16])(local_a0[0] + 0x20);
              auVar61 = *(undefined1 (*) [16])(local_a0[0] + 0x3a);
              fStack_cc = auVar60._4_4_;
              iVar21 = (int)local_a0[0][0xd];
              fStack_c8 = auVar60._8_4_;
              fVar100 = auVar61._4_4_;
              fVar70 = auVar61._8_4_;
              if (iVar21 == 3) {
                fStack_d4 = auVar61._12_4_;
                local_e0 = auVar61._0_4_;
                fStack_c4 = auVar60._12_4_;
                local_d0 = auVar60._0_4_;
                local_b0 = (undefined8 *)0x0;
                uStack_a8 = 0;
                FUN_00d0a71c(&local_b0,local_a0[0] + 0xf);
                local_c0 = (undefined8 *)0x0;
                uStack_b8 = 0;
                if ((local_b0 != (undefined8 *)0x0) &&
                   (puVar44 = (undefined8 *)local_b0[1], puVar44 != (undefined8 *)0x0)) {
                  if (((*puVar15 & 1) == 0) && (iVar21 = __cxa_guard_acquire(puVar15), iVar21 != 0))
                  {
                    uVar26 = FUN_0151c130();
                    *puVar24 = uVar26;
                    __cxa_guard_release(puVar15);
                  }
                  do {
                    if (puVar44 == puVar24) {
                      FUN_00d7c390(&local_c0,&local_b0);
                      break;
                    }
                    puVar44 = (undefined8 *)*puVar44;
                  } while (puVar44 != (undefined8 *)0x0);
                }
                puVar24 = local_c0;
                if (local_c0 == (undefined8 *)0x0) {
                  unaff_x26 = (char *)((ulong)unaff_x26 & 0xffffffff);
LAB_00f40fc0:
                  if ((local_b0 == (undefined8 *)0x0) || (lVar50 = local_b0[2], lVar50 == 0)) {
                    bVar16 = false;
                    iVar21 = 0;
                  }
                  else {
                    plVar41 = (long *)(lVar50 + -0x28);
                    lVar51 = local_a0[0][0x11];
                    if ((((int)lVar51 < 0) ||
                        (lVar50 = FUN_01104bd8(lVar50 + 0xe0,&local_c0), lVar50 == 0)) ||
                       (plVar27 = (long *)FUN_01df7f84(lVar50), *plVar27 == 0)) {
                      lVar50 = (**(code **)(*plVar41 + 0x68))(plVar41);
                      auVar62 = *(undefined1 (*) [16])(lVar50 + 0x30);
                      fStack_cc = fStack_cc + auVar62._4_4_;
                      fStack_c8 = fStack_c8 + auVar62._8_4_;
                      lVar50 = (**(code **)(*plVar41 + 0x68))(plVar41);
                      auVar60 = *(undefined1 (*) [16])(lVar50 + 0x30);
                      auVar61._0_4_ = local_e0 + auVar60._0_4_;
                      auVar61._4_4_ = fVar100 + auVar60._4_4_;
                      auVar61._8_4_ = fVar70 + auVar60._8_4_;
                      auVar61._12_4_ = fStack_d4 + auVar60._12_4_;
                      auVar60._4_4_ = fStack_cc;
                      auVar60._0_4_ = local_d0 + auVar62._0_4_;
                      auVar60._8_4_ = fStack_c8;
                      auVar60._12_4_ = fStack_c4 + auVar62._12_4_;
                      fVar100 = auVar61._4_4_;
                      fVar70 = auVar61._8_4_;
                    }
                    else {
                      plVar27 = (long *)FUN_01df7f84(lVar50);
                      plVar27 = (long *)*plVar27;
                      if (plVar27 != (long *)0x0) {
                        plVar2 = plVar27 + 5;
                        do {
                          lVar33 = *plVar2;
                          cVar5 = '\x01';
                          bVar16 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar16) {
                            *(int *)plVar2 = (int)lVar33 + 1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if ((int)lVar33 == -1) {
                    /* WARNING: Subroutine does not return */
                          nn::diag::detail::AbortImpl
                                    ("count != 0","IncrementReferenceInternal",
                                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                                     ,0x53,"Reference counter overflows.");
                        }
                      }
                      puVar24 = (undefined8 *)(**(code **)(*plVar41 + 0x68))(plVar41);
                      uVar26 = *puVar24;
                      uVar10 = puVar24[1];
                      uVar11 = puVar24[2];
                      uVar12 = puVar24[3];
                      auVar60 = *(undefined1 (*) [16])(puVar24 + 4);
                      auVar61 = *(undefined1 (*) [16])(puVar24 + 6);
                      fStack_128 = auVar60._8_4_;
                      fStack_124 = auVar60._12_4_;
                      local_130 = auVar60._0_4_;
                      fStack_12c = auVar60._4_4_;
                      FUN_01ea53d4(lVar50,(int)lVar51);
                      local_150 = (float)uVar26;
                      fStack_14c = (float)((ulong)uVar26 >> 0x20);
                      fStack_148 = (float)uVar10;
                      fStack_144 = (float)((ulong)uVar10 >> 0x20);
                      fStack_140 = (float)uVar11;
                      fStack_13c = (float)((ulong)uVar11 >> 0x20);
                      fStack_138 = (float)uVar12;
                      fStack_134 = (float)((ulong)uVar12 >> 0x20);
                      fVar66 = in_q3._0_4_;
                      fVar74 = in_q3._4_4_;
                      fVar75 = in_q3._8_4_;
                      local_120 = auVar61._0_4_;
                      fStack_11c = auVar61._4_4_;
                      fStack_118 = auVar61._8_4_;
                      fStack_114 = auVar61._12_4_;
                      fVar76 = in_q3._12_4_;
                      fVar59 = local_150 * fVar66 + fStack_140 * fVar74 + local_130 * fVar75 +
                               local_120 * fVar76;
                      fVar64 = fStack_14c * fVar66 + fStack_13c * fVar74 + fStack_12c * fVar75 +
                               fStack_11c * fVar76;
                      fVar65 = fStack_148 * fVar66 + fStack_138 * fVar74 + fStack_128 * fVar75 +
                               fStack_118 * fVar76;
                      fVar66 = fStack_144 * fVar66 + fStack_134 * fVar74 + fStack_124 * fVar75 +
                               fStack_114 * fVar76;
                      fStack_cc = fStack_cc + fVar64;
                      fStack_c8 = fStack_c8 + fVar65;
                      fVar100 = fVar100 + fVar64;
                      fVar70 = fVar70 + fVar65;
                      if (plVar27 != (long *)0x0) {
                        plVar41 = plVar27 + 5;
                        do {
                          iVar21 = (int)*plVar41;
                          cVar5 = '\x01';
                          bVar16 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                          if (bVar16) {
                            *(int *)plVar41 = iVar21 + -1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (iVar21 == 1) {
                          (**(code **)(*plVar27 + 0x10))();
                        }
                        else if (iVar21 == 0) {
                          pcVar28 = "count != std::numeric_limits<uint32_t>::max()";
                          pcVar29 = "DecrementReferenceInternal";
                          pcVar30 = 
                          "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                          ;
                          pcVar31 = "Reference counter underflows.";
                          goto LAB_00f415d0;
                        }
                      }
                      auVar60._4_4_ = fStack_cc;
                      auVar60._0_4_ = local_d0 + fVar59;
                      auVar60._8_4_ = fStack_c8;
                      auVar60._12_4_ = fStack_c4 + fVar66;
                      auVar61._4_4_ = fVar100;
                      auVar61._0_4_ = local_e0 + fVar59;
                      auVar61._8_4_ = fVar70;
                      auVar61._12_4_ = fStack_d4 + fVar66;
                    }
                    bVar16 = false;
                    iVar21 = 2;
                  }
                }
                else {
                  unaff_x26 = (char *)((ulong)unaff_x26 & 0xffffffff);
                  if (*(short *)((long)local_c0 + 0x1a) == 0) {
LAB_00f41470:
                    bVar16 = true;
                  }
                  else {
                    puVar36 = *(ushort **)(param_1 + 0x4058);
                    puVar37 = *(ushort **)(param_1 + 0x4060);
                    if (puVar36 == puVar37) {
LAB_00f41114:
                      puVar36 = *(ushort **)(param_1 + 0x4090);
                      puVar37 = *(ushort **)(param_1 + 0x4098);
                      if (puVar36 != puVar37) {
                        do {
                          if (((*(long *)(puVar36 + 4) != 0) &&
                              (*(short *)(*(long *)(puVar36 + 4) + 0x1a) != 0)) &&
                             (*(undefined8 **)(puVar36 + 4) == local_c0)) goto LAB_00f4115c;
                          puVar36 = puVar36 + 0xe4;
                        } while (puVar37 != puVar36);
                        puVar36 = puVar37;
LAB_00f4115c:
                        if (puVar36 != *(ushort **)(param_1 + 0x4098)) goto LAB_00f41168;
                      }
                      goto LAB_00f41470;
                    }
                    do {
                      if (((*(long *)(puVar36 + 4) != 0) &&
                          (*(short *)(*(long *)(puVar36 + 4) + 0x1a) != 0)) &&
                         (*(undefined8 **)(puVar36 + 4) == local_c0)) goto LAB_00f41108;
                      puVar36 = puVar36 + 0x58;
                    } while (puVar37 != puVar36);
                    puVar36 = puVar37;
LAB_00f41108:
                    if (puVar36 == *(ushort **)(param_1 + 0x4060)) goto LAB_00f41114;
LAB_00f41168:
                    unaff_x26 = (char *)(ulong)*puVar36;
                    bVar16 = false;
                  }
                  if (local_c0 != (undefined8 *)0x0) {
                    psVar34 = (short *)(local_c0 + 3);
                    do {
                      sVar8 = *psVar34;
                      cVar5 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(psVar34,0x10);
                      if (bVar17) {
                        *psVar34 = sVar8 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (sVar8 == 1) {
                      piVar3 = (int *)((long)local_c0 + 0x1c);
                      do {
                        iVar21 = *piVar3;
                        cVar5 = '\x01';
                        bVar17 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                        if (bVar17) {
                          *piVar3 = -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (iVar21 != -1) {
                        if (((*puVar13 & 1) == 0) &&
                           (iVar21 = __cxa_guard_acquire(puVar13), iVar21 != 0)) {
                          FUN_00100190(puVar14,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                          __cxa_guard_release(puVar13);
                        }
                        lVar50 = *(long *)PTR_DAT_047d3910;
                        *(long *)PTR_DAT_047d3918 = lVar50;
                        local_88 = *puVar24;
                        FUN_00c44438(lVar50 + 0x8040,&local_88);
                      }
                    }
                    else if (sVar8 == 0) goto LAB_00f41560;
                  }
                  if (bVar16) goto LAB_00f40fc0;
                  iVar21 = 3;
                  bVar16 = true;
                }
                puVar24 = local_b0;
                if (local_b0 != (undefined8 *)0x0) {
                  psVar34 = (short *)(local_b0 + 3);
                  do {
                    sVar8 = *psVar34;
                    cVar5 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(psVar34,0x10);
                    if (bVar17) {
                      *psVar34 = sVar8 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (sVar8 == 1) {
                    piVar3 = (int *)((long)local_b0 + 0x1c);
                    do {
                      iVar22 = *piVar3;
                      cVar5 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                      if (bVar17) {
                        *piVar3 = -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar22 != -1) {
                      if (((*puVar13 & 1) == 0) &&
                         (iVar22 = __cxa_guard_acquire(puVar13), iVar22 != 0)) {
                        FUN_00100190(puVar14,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                        __cxa_guard_release(puVar13);
                      }
                      lVar50 = *(long *)PTR_DAT_047d3910;
                      *(long *)PTR_DAT_047d3918 = lVar50;
                      local_c0 = (undefined8 *)*puVar24;
                      FUN_00c44438(lVar50 + 0x8040,&local_c0);
                    }
                  }
                  else if (sVar8 == 0) {
LAB_00f41560:
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != std::numeric_limits<uint16_t>::max()",
                               "ReleaseWeakReference",
                               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                               ,0x33,"Reference counter underflows.");
                  }
                }
              }
              else {
                unaff_x26 = (char *)((ulong)unaff_x26 & 0xffffffff);
                bVar16 = false;
              }
              fVar59 = auVar60._0_4_;
              fVar64 = auVar61._0_4_;
              if (((*(int *)(puVar42 + 0x46) != iVar21) || (*(float *)(puVar42 + 0x48) != fVar59))
                 || ((*(float *)(puVar42 + 0x4a) != fStack_cc ||
                     ((((*(float *)(puVar42 + 0x4c) != fStack_c8 ||
                        (*(float *)(puVar42 + 0x4e) != fVar64)) ||
                       (*(float *)(puVar42 + 0x50) != fVar100)) ||
                      (*(float *)(puVar42 + 0x52) != fVar70)))))) {
                *(int *)(param_1 + 0x5c) = iVar21;
                *(float *)(param_1 + 0x60) = fVar59;
                *(float *)(param_1 + 100) = fStack_cc;
                *(float *)(param_1 + 0x68) = fStack_c8;
                *(float *)(param_1 + 0x6c) = fVar64;
                *(float *)(param_1 + 0x70) = fVar100;
                *(float *)(param_1 + 0x74) = fVar70;
                if (bVar16) {
                  *(short *)(param_1 + 0x78) = (short)unaff_x26;
                  uVar26 = 0x26;
                  *(int *)(param_1 + 0x7a) = (int)local_a0[0][0x11];
                }
                else {
                  uVar26 = 0x20;
                }
                (**(code **)(**(long **)(param_1 + 0x50) + 0x70))
                          (*(long **)(param_1 + 0x50),(undefined1 *)(param_1 + 0x58),uVar26);
                *(float *)(puVar42 + 0x48) = fVar59;
                *(int *)(puVar42 + 0x46) = iVar21;
                *(float *)(puVar42 + 0x4a) = fStack_cc;
                *(float *)(puVar42 + 0x4c) = fStack_c8;
                *(float *)(puVar42 + 0x50) = fVar100;
                *(float *)(puVar42 + 0x52) = fVar70;
                *(float *)(puVar42 + 0x4e) = fVar64;
              }
              if (local_a0[0] == (long *)0x0) {
                puVar24 = (undefined8 *)PTR_DAT_047d6528;
              }
              else {
                lVar50 = local_a0[0][6];
                psVar34 = (short *)(lVar50 + 0x1a);
                do {
                  sVar8 = *psVar34;
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(psVar34,0x10);
                  if (bVar16) {
                    *psVar34 = sVar8 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  puVar24 = (undefined8 *)PTR_DAT_047d6528;
                } while (cVar5 != '\0');
                if (sVar8 == 1) {
                  *(undefined8 *)(lVar50 + 0x10) = 0;
                  (**(code **)(*local_a0[0] + 0x50))();
                  goto LAB_00f40750;
                }
                if (sVar8 == 0) goto LAB_00f409bc;
              }
              goto LAB_00f40750;
            }
          }
          else {
            do {
              if (*(undefined1 **)(*plVar41 + 0x1d0) == &DAT_afc4d6c05abef19e) goto LAB_00f40798;
              plVar41 = plVar41 + 1;
            } while (plVar27 != plVar41);
          }
          local_a0[0] = (long *)0x0;
        }
      }
    }
LAB_00f40750:
    puVar42 = puVar42 + 0x58;
    if (puVar42 == puVar43) goto LAB_00f40880;
    goto LAB_00f40740;
  }
LAB_00f40888:
  puVar43 = *(undefined2 **)(param_1 + 0x4060);
  for (puVar42 = *(undefined2 **)(param_1 + 0x4058); puVar42 != puVar43; puVar42 = puVar42 + 0x58) {
    if (((*(char *)(puVar42 + 0x45) == '\0') && (*(long *)(puVar42 + 0x2c) != 0)) &&
       ((lVar50 = *(long *)(*(long *)(puVar42 + 0x2c) + 0x10), lVar50 != 0 &&
        (fVar100 = *(float *)(lVar50 + 0x188), *(float *)(puVar42 + 0x54) != fVar100)))) {
      uVar32 = *puVar42;
      *(undefined1 *)(param_1 + 0x58) = 7;
      *(undefined2 *)(param_1 + 0x5a) = uVar32;
      *(float *)(param_1 + 0x5c) = fVar100;
      (**(code **)(**(long **)(param_1 + 0x50) + 0x70))
                (*(long **)(param_1 + 0x50),(undefined1 *)(param_1 + 0x58),8);
      *(float *)(puVar42 + 0x54) = fVar100;
    }
  }
LAB_00f408d0:
  puVar43 = *(undefined2 **)(param_1 + 0x4060);
  for (puVar42 = *(undefined2 **)(param_1 + 0x4058); puVar42 != puVar43; puVar42 = puVar42 + 0x58) {
    if (*(char *)(puVar42 + 0x56) != '\0') {
      uVar6 = *(undefined1 *)(puVar42 + 0x40);
      uVar32 = *puVar42;
      *(undefined1 *)(param_1 + 0x58) = 10;
      plVar41 = *(long **)(param_1 + 0x48);
      *(undefined2 *)(param_1 + 0x5a) = uVar32;
      *(undefined1 *)(param_1 + 0x5c) = uVar6;
      if ((plVar41 != (long *)0x0) &&
         (uVar23 = (**(code **)(*plVar41 + 0x70))(plVar41,(undefined1 *)(param_1 + 0x58),5),
         (uVar23 & 1) != 0)) {
        *(undefined1 *)(puVar42 + 0x56) = 0;
      }
    }
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    puVar43 = *(undefined2 **)(param_1 + 0x4060);
    for (puVar42 = *(undefined2 **)(param_1 + 0x4058); puVar42 != puVar43; puVar42 = puVar42 + 0x58)
    {
      if ((*(char *)(puVar42 + 0x45) == '\0') && (lVar50 = *(long *)(puVar42 + 0x38), lVar50 != 0))
      {
        uVar20 = (uint)*(byte *)(lVar50 + 0x146);
        if (*(char *)(lVar50 + 0x144) != '\0') {
          uVar20 = uVar20 + 1;
        }
        if (uVar20 != -(uint)(*(char *)(lVar50 + 0x20c) != '\0')) {
          uVar32 = *puVar42;
          *(undefined1 *)(param_1 + 0x58) = 8;
          *(undefined2 *)(param_1 + 0x5a) = uVar32;
          iVar21 = FUN_00f43220(lVar50,param_1 + 0x5c,0x3ffc);
          if (iVar21 != 0) {
            (**(code **)(**(long **)(param_1 + 0x48) + 0x70))
                      (*(long **)(param_1 + 0x48),(undefined1 *)(param_1 + 0x58),iVar21 + 4);
          }
        }
      }
    }
  }
  psVar34 = *(short **)(param_1 + 0x40c8);
  if (psVar34 != *(short **)(param_1 + 0x40d0)) {
    do {
      psVar45 = *(short **)(param_1 + 0x4058);
      psVar35 = *(short **)(param_1 + 0x4060);
      sVar8 = *psVar34;
      if ((psVar45 != psVar35) && (*psVar45 != sVar8)) {
        do {
          psVar45 = psVar45 + 0x58;
          if (psVar35 == psVar45) {
            psVar45 = psVar35;
            goto LAB_00f40da4;
          }
        } while (*psVar45 != sVar8);
      }
LAB_00f40da4:
      if ((psVar35 == psVar45) || (*(long *)(psVar34 + 4) == 0)) {
LAB_00f40e88:
        psVar34 = (short *)FUN_00f43084(param_1 + 0x40c8,psVar34);
      }
      else {
        __src = (void *)FUN_00f42d24();
        uVar20 = FUN_00f42d3c(*(undefined8 *)(psVar34 + 4));
        if (uVar20 == 0) goto LAB_00f40e88;
        puVar24 = (undefined8 *)(param_1 + 0x50);
        if ((char)psVar34[1] != '\0') {
          puVar24 = (undefined8 *)(param_1 + 0x48);
        }
        plVar41 = (long *)*puVar24;
        if (plVar41 == (long *)0x0) goto LAB_00f40e88;
        lVar50 = plVar41[6];
        if (*(long *)(lVar50 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar45 = (short *)(lVar50 + 0x1a);
        do {
          sVar4 = *psVar45;
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar45,0x10);
          if (bVar16) {
            *psVar45 = sVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 0) {
          uVar26 = (**(code **)**(undefined8 **)(lVar50 + 0x10))();
          *(undefined8 *)(lVar50 + 8) = uVar26;
          *(undefined4 *)(lVar50 + 0x1c) = 0xfffffffe;
        }
        else if (sVar4 == -1) {
          pcVar28 = "count != 0";
          pcVar29 = "AddReference";
          pcVar30 = 
          "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
          ;
          pcVar31 = "Reference counter overflows.";
LAB_00f415d0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl(pcVar28,pcVar29,pcVar30,0x58,pcVar31);
        }
        *(short *)(param_1 + 0x5a) = sVar8;
        *(undefined1 *)(param_1 + 0x58) = 9;
        memcpy((void *)(param_1 + 0x5c),__src,(ulong)uVar20);
        uVar23 = (**(code **)(*plVar41 + 0x70))(plVar41,param_1 + 0x58,uVar20 + 4);
        if ((uVar23 & 1) == 0) {
          psVar34 = psVar34 + 8;
        }
        else {
          psVar34 = (short *)FUN_00f43084(param_1 + 0x40c8,psVar34);
        }
        lVar50 = plVar41[6];
        psVar45 = (short *)(lVar50 + 0x1a);
        do {
          sVar8 = *psVar45;
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar45,0x10);
          if (bVar16) {
            *psVar45 = sVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar50 + 0x10) = 0;
          (**(code **)(*plVar41 + 0x50))(plVar41);
        }
        else if (sVar8 == 0) {
LAB_00f409bc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    } while (psVar34 != *(short **)(param_1 + 0x40d0));
  }
  return;
LAB_00f40880:
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_00f408d0;
  goto LAB_00f40888;
}


