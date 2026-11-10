/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ceeb8; name: FUN_034ceeb8
 */


/* WARNING: Removing unreachable block (ram,0x034d187c) */
/* WARNING: Removing unreachable block (ram,0x034d1880) */
/* WARNING: Removing unreachable block (ram,0x034d1884) */
/* WARNING: Removing unreachable block (ram,0x034d189c) */
/* WARNING: Removing unreachable block (ram,0x034d18a4) */

void FUN_034ceeb8(float param_1,undefined1 param_2 [16],float param_3,undefined8 param_4,
                 undefined4 *param_5,uint param_6,uint param_7,ulong param_8,long param_9)

{
  uint *puVar1;
  MutexType *pMVar2;
  uint uVar3;
  char cVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
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
  float fVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float *pfVar24;
  float *pfVar25;
  bool bVar26;
  long lVar27;
  undefined1 (*pauVar28) [16];
  ulong *puVar29;
  void *pvVar30;
  uint uVar31;
  ulong uVar32;
  float *pfVar33;
  ulong uVar34;
  undefined1 (*pauVar35) [16];
  long lVar36;
  long *plVar37;
  ulong uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  int iVar41;
  int iVar42;
  uint *puVar43;
  ulong uVar44;
  uint uVar45;
  uint uVar46;
  float *pfVar47;
  ulong uVar48;
  uint *puVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  uint *puVar53;
  int iVar54;
  float *pfVar55;
  uint uVar56;
  undefined *puVar57;
  float *pfVar58;
  ulong uVar59;
  undefined4 *puVar60;
  ulong uVar61;
  float *pfVar62;
  undefined1 *puVar63;
  uint uVar64;
  undefined1 *puVar65;
  uint uVar66;
  ulong uVar67;
  undefined *puVar68;
  undefined *puVar69;
  long lVar70;
  ulong uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 uVar76;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar82;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar119;
  float fVar120;
  undefined1 auVar116 [16];
  float fVar121;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  undefined1 uVar126;
  undefined1 uVar127;
  undefined1 uVar128;
  undefined1 uVar129;
  undefined1 uVar130;
  int iVar131;
  int iVar133;
  int iVar134;
  int iVar135;
  undefined1 auVar132 [16];
  float fVar136;
  long local_150 [3];
  undefined4 *local_138;
  undefined4 *local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  undefined4 *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  ulong local_d8;
  undefined8 local_d0;
  long *local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined4 *local_b0;
  
  uVar76 = param_2._8_8_;
  uVar66 = (uint)param_8;
  uVar31 = uVar66 >> 8 & 0xf;
  uVar56 = uVar66;
  if (uVar31 == 1) {
    uVar64 = uVar66 >> 0xc & 0xfffffff7;
    uVar56 = uVar64 - (uVar64 >> 1 & 0x55555555);
    uVar56 = (uVar56 & 0x33333333) + (uVar56 >> 2 & 0x33333333);
    uVar56 = (uVar56 + (uVar56 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar64 << 0xc | 0x100;
  }
  uVar64 = uVar56 & 0xff;
  local_c0 = (ulong)uVar64;
  uVar3 = param_6 & 0xff;
  local_f8 = (undefined *)(ulong)uVar3;
  uVar46 = uVar64 - 1;
  local_b8 = (ulong)uVar46;
  if (uVar64 == 0 || uVar46 == 0) {
    if (uVar46 != 0) {
      return;
    }
    if ((param_6 & 0xf00) == 0x200) {
      *param_5 = 0x3f800000;
      return;
    }
    uVar56 = uVar3 - 1;
    if (uVar3 == 0 || uVar56 == 0) {
      uVar3 = 1;
    }
    uVar48 = (ulong)uVar3;
    puVar43 = (uint *)(&DAT_03d984dc + (ulong)uVar56 * 0x20);
    do {
      if ((param_7 & 0xffff & *puVar43) != 0) {
        param_5[(ulong)(*puVar43 >> 0x10) * ((ulong)((uVar66 & 0xff) + 3) & 0x1fc)] = 0x3f800000;
      }
      uVar48 = uVar48 - 1;
      puVar43 = puVar43 + 1;
    } while (uVar48 != 0);
    return;
  }
  uVar64 = param_6 >> 8 & 0xf;
  local_b0 = param_5;
  if ((uVar64 == 0) || (uVar31 == 0)) {
    uVar56 = uVar66 & 0xff;
    uVar31 = uVar56 + 3 & 0x1fc;
    iVar41 = uVar31 * uVar3;
    if (iVar41 != 0) {
      memset(param_5,0,(ulong)(uint)(iVar41 * 4));
    }
    if ((param_6 & 0xf00) != 0x200) {
      if (uVar56 <= uVar3) {
        uVar3 = uVar56;
      }
      uVar48 = (ulong)uVar3;
      if (uVar3 == 0) {
        return;
      }
      uVar67 = uVar48 & 3;
      if (uVar48 - 1 < 3) {
        lVar70 = 0;
      }
      else {
        uVar52 = (param_8 & 0xff) + 3;
        uVar34 = uVar52 >> 2;
        lVar27 = 1;
        puVar60 = local_b0;
        do {
          lVar70 = lVar27;
          lVar27 = lVar70 + 4;
          *puVar60 = 0x3f800000;
          *(undefined4 *)((long)puVar60 + (uVar34 << 4 | 4)) = 0x3f800000;
          *(undefined4 *)((long)puVar60 + (uVar34 << 5 | 8)) = 0x3f800000;
          *(undefined4 *)((long)puVar60 + ((uVar34 * 2 + (uVar52 >> 2)) * 0x10 | 0xc)) = 0x3f800000;
          puVar60 = (undefined4 *)((long)puVar60 + (uVar34 << 6 | 0x10));
        } while (lVar27 - (uVar48 & 0xfc) != 1);
        lVar70 = lVar70 + 3;
      }
      if ((uVar3 & 3) == 0) {
        return;
      }
      uVar48 = (ulong)((uVar66 & 0xff) * 4 + 0xc) & 0x7f0 | 4;
      local_b0 = (undefined4 *)((long)local_b0 + lVar70 * uVar48);
      do {
        *local_b0 = 0x3f800000;
        uVar67 = uVar67 - 1;
        local_b0 = (undefined4 *)((long)local_b0 + uVar48);
      } while (uVar67 != 0);
      return;
    }
    if (uVar3 == 0) {
      return;
    }
    if ((param_8 & 0xff) == 0) {
      return;
    }
    if (uVar3 < 0xc) {
      uVar64 = *(uint *)(&DAT_03d99ae0 + (ulong)(uVar3 - 1) * 4);
      uVar48 = 0;
      uVar66 = 0;
      while( true ) {
        if ((uVar64 >> (ulong)((uint)uVar48 & 0x1f) & 1) == 0) {
          uVar46 = uVar66 * uVar31;
          uVar66 = uVar66 + 1;
          local_b0[uVar46 + uVar48] = 0x3f800000;
        }
        uVar48 = uVar48 + 1;
        if (uVar56 <= uVar48) break;
        if (uVar3 <= uVar66) {
          return;
        }
      }
      return;
    }
    if (uVar56 - 1 <= uVar3 - 1) {
      uVar3 = uVar56;
    }
    uVar67 = (ulong)uVar3;
    uVar48 = uVar67 & 3;
    if (uVar67 - 1 < 3) {
      lVar70 = 0;
    }
    else {
      uVar52 = (param_8 & 0xff) + 3;
      uVar34 = uVar52 >> 2;
      lVar27 = 1;
      puVar60 = local_b0;
      do {
        lVar70 = lVar27;
        lVar27 = lVar70 + 4;
        *puVar60 = 0x3f800000;
        *(undefined4 *)((long)puVar60 + (uVar34 << 4 | 4)) = 0x3f800000;
        *(undefined4 *)((long)puVar60 + (uVar34 << 5 | 8)) = 0x3f800000;
        *(undefined4 *)((long)puVar60 + ((uVar34 * 2 + (uVar52 >> 2)) * 0x10 | 0xc)) = 0x3f800000;
        puVar60 = (undefined4 *)((long)puVar60 + (uVar34 << 6 | 0x10));
      } while (lVar27 - (uVar67 & 0xfc) != 1);
      lVar70 = lVar70 + 3;
    }
    if ((uVar3 & 3) == 0) {
      return;
    }
    uVar67 = (ulong)((uVar66 & 0xff) * 4 + 0xc) & 0x7f0 | 4;
    local_b0 = (undefined4 *)((long)local_b0 + lVar70 * uVar67);
    do {
      *local_b0 = 0x3f800000;
      uVar48 = uVar48 - 1;
      local_b0 = (undefined4 *)((long)local_b0 + uVar67);
    } while (uVar48 != 0);
    return;
  }
  fVar107 = param_2._0_4_;
  if (uVar64 == 2) {
    uVar66 = uVar66 & 0xff;
    local_d8 = (ulong)uVar66;
    if (uVar31 != 2 || uVar3 <= uVar66) {
      uVar66 = uVar3;
    }
    if (fVar107 <= 0.0) {
      fVar107 = 0.0;
    }
    cVar4 = (&DAT_03d984b4)[uVar66];
    uVar48 = (ulong)cVar4;
    uVar66 = *(uint *)(&DAT_03d984a0 + uVar48 * 4);
    uVar67 = (ulong)uVar66;
    plVar37 = local_150 + uVar67 * -2;
    local_c8 = plVar37;
    FUN_034d1c10(fVar107,(&PTR_DAT_047c5318)[uVar48],uVar67,param_4);
    lVar27 = FUN_034ce820(uVar48 & 0xffffffff);
    if (lVar27 == 0) {
      return;
    }
    iVar41 = cVar4 + 2;
    uVar64 = iVar41 * iVar41;
    puVar68 = (undefined *)(ulong)uVar64;
    fVar107 = fVar107 * fVar107 * 0.5 + 0.5;
    if (uVar31 == 2) {
      uVar31 = uVar66 + 3 >> 2;
      puVar63 = (undefined1 *)((long)plVar37 - (ulong)(uVar64 * uVar31 * 0x10));
      uVar56 = uVar66;
      if (uVar66 < 2) {
        uVar56 = 1;
      }
      uVar48 = (ulong)uVar56;
      puVar65 = puVar63;
      do {
        FUN_034ce9c0(cVar4 + 1,uVar67,puVar65);
        uVar48 = uVar48 - 1;
        puVar65 = puVar65 + 4;
      } while (uVar48 != 0);
      if (uVar64 == 0) {
        return;
      }
      fVar107 = SQRT(fVar107);
      uVar48 = (ulong)(uVar31 << 4);
      uVar56 = uVar66 + 3 & 0xfffffffc;
      uVar31 = (int)local_d8 + 3U & 0x1fc;
      if (0xb < (uint)local_f8) {
        fVar107 = (1.0 / (float)uVar67) * fVar107;
        uVar34 = 0;
        uVar52 = 0;
        pfVar62 = (float *)puVar63;
        do {
          pfVar62 = (float *)((long)pfVar62 - (uVar48 + 0xf & 0x1fffffff0));
          if (uVar67 - 1 < 3) {
            uVar32 = 0;
          }
          else {
            pfVar47 = (float *)(lVar27 + 8 + uVar34 * 4);
            uVar32 = 0;
            pfVar33 = pfVar62 + 2;
            do {
              pfVar33[-2] = fVar107 * pfVar47[-2];
              pfVar33[-1] = fVar107 * pfVar47[-1];
              *pfVar33 = fVar107 * *pfVar47;
              pfVar58 = pfVar47 + 1;
              pfVar47 = pfVar47 + 4;
              uVar32 = uVar32 + 4;
              pfVar33[1] = fVar107 * *pfVar58;
              pfVar33 = pfVar33 + 4;
            } while ((uVar67 & 0xfffffffc) != uVar32);
          }
          if ((uVar66 & 3) != 0) {
            pfVar47 = pfVar62 + uVar32;
            uVar71 = uVar67 & 3;
            pfVar33 = (float *)(lVar27 + (uVar32 + uVar34) * 4);
            do {
              *pfVar47 = fVar107 * *pfVar33;
              uVar71 = uVar71 - 1;
              pfVar47 = pfVar47 + 1;
              pfVar33 = pfVar33 + 1;
            } while (uVar71 != 0);
          }
          uVar32 = 0;
          do {
            pfVar47 = (float *)(puVar63 + (ulong)(uVar56 * (int)uVar32) * 4);
            pfVar33 = pfVar62;
            auVar84 = ZEXT816(0);
            do {
              pfVar58 = pfVar47 + 4;
              auVar74._0_4_ = auVar84._0_4_ + *pfVar33 * *pfVar47;
              auVar74._4_4_ = auVar84._4_4_ + pfVar33[1] * pfVar47[1];
              auVar74._8_4_ = auVar84._8_4_ + pfVar33[2] * pfVar47[2];
              auVar74._12_4_ = auVar84._12_4_ + pfVar33[3] * pfVar47[3];
              pfVar47 = pfVar58;
              pfVar33 = pfVar33 + 4;
              auVar84 = auVar74;
            } while (pfVar58 < (float *)((long)(puVar63 + (ulong)(uVar56 * (int)uVar32) * 4) +
                                        uVar67 * 4));
            auVar84 = NEON_rev64(auVar74,4);
            local_b0[uVar31 * (int)uVar52 + uVar32] =
                 auVar84._8_4_ + auVar74._8_4_ + auVar84._0_4_ + auVar74._0_4_;
            uVar32 = uVar32 + 1;
          } while ((undefined *)uVar32 != puVar68);
          uVar52 = uVar52 + 1;
          uVar34 = (ulong)((int)uVar34 + uVar66);
        } while ((undefined *)uVar52 != puVar68);
        return;
      }
      fVar107 = (1.0 / (float)uVar67) * fVar107;
      uVar64 = *(uint *)(&DAT_03d99ae0 + (ulong)((uint)local_f8 - 1) * 4);
      uVar34 = 0;
      uVar52 = 0;
      iVar41 = 0;
      pauVar28 = (undefined1 (*) [16])puVar63;
      do {
        if ((uVar64 >> (ulong)((uint)uVar52 & 0x1f) & 1) == 0) {
          pauVar28 = (undefined1 (*) [16])((long)pauVar28 + -(uVar48 + 0xf & 0x1fffffff0));
          if (uVar67 - 1 < 3) {
            uVar32 = 0;
          }
          else {
            pfVar62 = (float *)(lVar27 + 8 + uVar34 * 4);
            uVar32 = 0;
            pfVar47 = (float *)(*pauVar28 + 8);
            do {
              fVar77 = pfVar62[-1];
              *(float *)*(undefined1 (*) [16])(pfVar47 + -2) = fVar107 * pfVar62[-2];
              pfVar47[-1] = fVar107 * fVar77;
              fVar77 = *pfVar62;
              fVar78 = pfVar62[1];
              pfVar62 = pfVar62 + 4;
              uVar32 = uVar32 + 4;
              *pfVar47 = fVar107 * fVar77;
              pfVar47[1] = fVar107 * fVar78;
              pfVar47 = pfVar47 + 4;
            } while ((uVar67 & 0xfffffffc) != uVar32);
          }
          if ((uVar66 & 3) != 0) {
            pfVar62 = (float *)(lVar27 + (uVar32 + uVar34) * 4);
            pfVar47 = (float *)(*pauVar28 + uVar32 * 4);
            uVar32 = uVar67 & 3;
            do {
              *pfVar47 = fVar107 * *pfVar62;
              uVar32 = uVar32 - 1;
              pfVar62 = pfVar62 + 1;
              pfVar47 = pfVar47 + 1;
            } while (uVar32 != 0);
          }
          uVar32 = 0;
          do {
            pfVar62 = (float *)(puVar63 + (ulong)(uVar56 * (int)uVar32) * 4);
            pauVar40 = pauVar28;
            auVar84 = ZEXT816(0);
            do {
              pfVar47 = pfVar62 + 4;
              auVar74 = *pauVar40;
              auVar109._0_4_ = auVar84._0_4_ + auVar74._0_4_ * *pfVar62;
              auVar109._4_4_ = auVar84._4_4_ + auVar74._4_4_ * pfVar62[1];
              auVar109._8_4_ = auVar84._8_4_ + auVar74._8_4_ * pfVar62[2];
              auVar109._12_4_ = auVar84._12_4_ + auVar74._12_4_ * pfVar62[3];
              pfVar62 = pfVar47;
              pauVar40 = pauVar40 + 1;
              auVar84 = auVar109;
            } while (pfVar47 < (float *)((long)(puVar63 + (ulong)(uVar56 * (int)uVar32) * 4) +
                                        uVar67 * 4));
            auVar84 = NEON_rev64(auVar109,4);
            local_b0[iVar41 * uVar31 + uVar32] =
                 auVar84._8_4_ + auVar109._8_4_ + auVar84._0_4_ + auVar109._0_4_;
            uVar32 = uVar32 + 1;
          } while ((undefined *)uVar32 != puVar68);
          iVar41 = iVar41 + 1;
        }
        uVar52 = uVar52 + 1;
        uVar34 = (ulong)((int)uVar34 + uVar66);
      } while ((undefined *)uVar52 != puVar68);
      return;
    }
    if (param_9 == 0) {
      return;
    }
    nn::os::LockMutex((MutexType *)(param_9 + 200));
    puVar43 = *(uint **)(param_9 + 0xb8);
    uVar31 = *(uint *)(param_9 + 0xc0);
    if ((uVar31 == 0) || (*puVar43 == uVar56)) {
      puVar49 = puVar43;
    }
    else {
      lVar70 = (ulong)uVar31 * 0x10;
      puVar53 = puVar43;
      do {
        lVar70 = lVar70 + -0x10;
        if (lVar70 == 0) goto LAB_034cf788;
        puVar49 = puVar53 + 4;
        puVar1 = puVar53 + 4;
        puVar53 = puVar49;
      } while (*puVar1 != uVar56);
    }
    if (puVar49 == puVar43 + (ulong)uVar31 * 4) {
LAB_034cf788:
      lVar70 = FUN_0349c8dc(param_9,uVar56);
    }
    else {
      lVar70 = *(long *)(puVar49 + 2);
    }
    nn::os::UnlockMutex((MutexType *)(param_9 + 200));
    if (lVar70 == 0) {
      return;
    }
    uVar31 = (int)local_c0 + 3;
    local_e0 = (undefined *)(ulong)(uVar31 >> 2);
    local_d0 = (void *)((long)plVar37 - (ulong)((uVar31 >> 2) * uVar66 * 0x10));
    uVar3 = uVar31 & 0x1fc;
    local_128 = CONCAT44(local_128._4_4_,uVar31);
    if (uVar66 * uVar3 != 0) {
      memset(local_d0,0,(ulong)(uVar66 * uVar3) << 2);
    }
    uVar52 = local_c0;
    pvVar30 = local_d0;
    fVar107 = (1.0 / (float)uVar67) * fVar107;
    local_120 = uVar48;
    if ((param_8 & 0xff9c0000) == 0) {
      if (((uVar56 & 0xfffff000) == 0x3000) && (*(int *)(param_9 + 0x7c) == 1)) {
        iVar41 = (int)local_d8;
        uVar48 = (ulong)(iVar41 + 3U >> 2);
        uVar56 = uVar66;
        if (uVar66 < 2) {
          uVar56 = 1;
        }
        if (iVar41 == 0) {
          uVar48 = 0;
          do {
            fVar107 = *(float *)(local_c8 + uVar48 * 2) *
                      (*(float *)(local_c8 + uVar48 * 2) * -0.20710677 + 0.5) + 0.70710677;
            pfVar62 = (float *)((long)pvVar30 + (ulong)(uVar3 * (int)uVar48) * 4);
            fVar107 = fVar107 * fVar107;
            fVar77 = 1.0 - fVar107;
            if (1.0 < fVar107) {
              fVar77 = 0.0;
            }
            *pfVar62 = fVar77 + *pfVar62;
            pfVar62[1] = fVar107 + pfVar62[1];
            uVar48 = uVar48 + 1;
          } while (uVar48 != uVar56);
        }
        else {
          uVar44 = uVar48 * 0x10 - 1;
          uVar31 = ((uint)(uVar44 >> 4) & 0xfffffff) + 1;
          uVar61 = local_d8 - 2;
          uVar59 = uVar61 & 3;
          uVar32 = 0;
          uVar34 = 0;
          uVar71 = local_d8 - 3;
          do {
            pauVar28 = (undefined1 (*) [16])((long)pvVar30 + (ulong)(uVar3 * (int)uVar34) * 4);
            fVar77 = *(float *)(local_c8 + uVar34 * 2) *
                     (*(float *)(local_c8 + uVar34 * 2) * -0.20710677 + 0.5) + 0.70710677;
            fVar77 = fVar77 * fVar77;
            fVar79 = 1.0 - fVar77;
            fVar78 = fVar77 + *(float *)(*pauVar28 + 4);
            if (1.0 < fVar77) {
              fVar79 = 0.0;
            }
            *(float *)*pauVar28 = (fVar79 + *(float *)*pauVar28) * fVar107;
            *(float *)(*pauVar28 + 4) = fVar78;
            if ((iVar41 != 1) && (*(float *)(*pauVar28 + 4) = fVar78 * fVar107, iVar41 != 2)) {
              if (uVar71 < 3) {
                lVar70 = 2;
              }
              else {
                uVar39 = 0;
                pfVar62 = (float *)((long)pvVar30 + uVar32 * 4 + 0x14);
                do {
                  uVar38 = uVar39;
                  uVar39 = uVar38 + 4;
                  pfVar62[-2] = pfVar62[-2] * fVar107;
                  pfVar62[-3] = pfVar62[-3] * fVar107;
                  pfVar62[-1] = pfVar62[-1] * fVar107;
                  *pfVar62 = *pfVar62 * fVar107;
                  pfVar62 = pfVar62 + 4;
                } while ((uVar61 & 0xfffffffffffffffc) != uVar39);
                lVar70 = uVar38 + 6;
              }
              if (uVar59 != 0) {
                pfVar62 = (float *)((long)pvVar30 + uVar32 * 4 + lVar70 * 4);
                uVar39 = uVar59;
                do {
                  uVar39 = uVar39 - 1;
                  *pfVar62 = *pfVar62 * fVar107;
                  pfVar62 = pfVar62 + 1;
                } while (uVar39 != 0);
              }
            }
            pauVar40 = pauVar28 + uVar48;
            if (pauVar28 < pauVar40) {
              if ((uVar31 & 3) != 0) {
                pauVar35 = pauVar28;
                lVar70 = -((ulong)uVar31 & 3);
                do {
                  auVar84 = NEON_frsqrte(*pauVar35,4);
                  auVar84 = NEON_frecpe(auVar84,4);
                  bVar26 = lVar70 != -1;
                  lVar70 = lVar70 + 1;
                  pauVar28 = pauVar35 + 1;
                  *(long *)(*pauVar35 + 8) = auVar84._8_8_;
                  *(long *)*pauVar35 = auVar84._0_8_;
                  pauVar35 = pauVar28;
                } while (bVar26);
              }
              if (0x2f < uVar44) {
                do {
                  auVar74 = NEON_frsqrte(pauVar28[1],4);
                  auVar84 = NEON_frsqrte(*pauVar28,4);
                  auVar74 = NEON_frecpe(auVar74,4);
                  auVar84 = NEON_frecpe(auVar84,4);
                  *(long *)(*pauVar28 + 8) = auVar84._8_8_;
                  *(long *)*pauVar28 = auVar84._0_8_;
                  *(long *)(pauVar28[1] + 8) = auVar74._8_8_;
                  *(long *)pauVar28[1] = auVar74._0_8_;
                  auVar84 = NEON_frsqrte(pauVar28[2],4);
                  auVar74 = NEON_frecpe(auVar84,4);
                  auVar84 = NEON_frsqrte(pauVar28[3],4);
                  auVar84 = NEON_frecpe(auVar84,4);
                  *(long *)(pauVar28[2] + 8) = auVar74._8_8_;
                  *(long *)pauVar28[2] = auVar74._0_8_;
                  *(long *)(pauVar28[3] + 8) = auVar84._8_8_;
                  *(long *)pauVar28[3] = auVar84._0_8_;
                  pauVar28 = pauVar28 + 4;
                } while (pauVar28 < pauVar40);
              }
            }
            uVar34 = uVar34 + 1;
            uVar32 = (ulong)((int)uVar32 + uVar3);
          } while (uVar34 != uVar56);
        }
      }
      else {
        uVar48 = (long)local_e0 * 0x10 - 1;
        uVar31 = (uint)local_c0;
        uVar56 = uVar31 + 2;
        if (3 < uVar31) {
          uVar56 = uVar31;
        }
        uVar31 = uVar66;
        if (uVar66 < 2) {
          uVar31 = 1;
        }
        uVar46 = ((uint)(uVar48 >> 4) & 0xfffffff) + 1;
        uVar34 = 0;
        do {
          fVar77 = *(float *)(local_c8 + uVar34 * 2);
          fVar78 = *(float *)((long)(local_c8 + uVar34 * 2) + 8);
          uVar32 = 1;
          pfVar62 = (float *)(lVar70 + 8);
          puVar43 = (uint *)(&DAT_03d984dc + local_b8 * 0x20);
          do {
            puVar49 = puVar43;
            pfVar47 = pfVar62 + -1;
            pfVar33 = pfVar62 + 1;
            fVar79 = pfVar62[-2] * fVar77;
            fVar83 = *pfVar62 * fVar77;
            if (uVar56 <= uVar32) break;
            pfVar62 = pfVar62 + 4;
            uVar32 = uVar32 + 1;
            puVar43 = puVar49 + 1;
          } while (fVar79 < -(*pfVar47 * fVar78) || fVar83 < -(*pfVar33 * fVar78));
          uVar71 = (ulong)(*puVar49 >> 0xe) & 0x3fffc;
          fVar77 = fVar79 + 1.1920929e-07 + *pfVar47 * fVar78;
          fVar78 = fVar83 + 1.1920929e-07 + *pfVar33 * fVar78;
          fVar77 = fVar77 * fVar77;
          fVar78 = fVar78 * fVar78;
          fVar79 = fVar107 / (fVar78 + fVar77);
          pauVar28 = (undefined1 (*) [16])((long)pvVar30 + (ulong)(uVar3 * (int)uVar34) * 4);
          uVar32 = (ulong)(puVar49[1] >> 0xe) & 0x3fffc;
          *(float *)(*pauVar28 + uVar71) = *(float *)(*pauVar28 + uVar71) + fVar77 * fVar79;
          pauVar40 = pauVar28 + (long)local_e0;
          *(float *)(*pauVar28 + uVar32) = *(float *)(*pauVar28 + uVar32) + fVar78 * fVar79;
          if (pauVar28 < pauVar40) {
            if ((uVar46 & 3) != 0) {
              lVar36 = -((ulong)uVar46 & 3);
              pauVar35 = pauVar28;
              do {
                auVar84 = NEON_frsqrte(*pauVar35,4);
                auVar84 = NEON_frecpe(auVar84,4);
                bVar26 = lVar36 != -1;
                lVar36 = lVar36 + 1;
                pauVar28 = pauVar35 + 1;
                *(long *)(*pauVar35 + 8) = auVar84._8_8_;
                *(long *)*pauVar35 = auVar84._0_8_;
                pauVar35 = pauVar28;
              } while (bVar26);
            }
            if (0x2f < uVar48) {
              do {
                auVar74 = NEON_frsqrte(pauVar28[1],4);
                auVar84 = NEON_frsqrte(*pauVar28,4);
                auVar74 = NEON_frecpe(auVar74,4);
                auVar84 = NEON_frecpe(auVar84,4);
                *(long *)(*pauVar28 + 8) = auVar84._8_8_;
                *(long *)*pauVar28 = auVar84._0_8_;
                *(long *)(pauVar28[1] + 8) = auVar74._8_8_;
                *(long *)pauVar28[1] = auVar74._0_8_;
                auVar84 = NEON_frsqrte(pauVar28[2],4);
                auVar74 = NEON_frecpe(auVar84,4);
                auVar84 = NEON_frsqrte(pauVar28[3],4);
                auVar84 = NEON_frecpe(auVar84,4);
                *(long *)(pauVar28[2] + 8) = auVar74._8_8_;
                *(long *)pauVar28[2] = auVar74._0_8_;
                *(long *)(pauVar28[3] + 8) = auVar84._8_8_;
                *(long *)pauVar28[3] = auVar84._0_8_;
                pauVar28 = pauVar28 + 4;
              } while (pauVar28 < pauVar40);
            }
          }
          uVar34 = uVar34 + 1;
        } while (uVar34 != uVar31);
      }
    }
    else {
      uVar56 = uVar66;
      if (uVar66 < 2) {
        uVar56 = 1;
      }
      local_e8 = (ulong)uVar56;
      local_f0 = local_c0 - 1;
      local_108 = (undefined4 *)((long)local_e0 * 0x10 - 1);
      local_b8 = local_c0 & 7;
      local_100 = (undefined *)((long)local_d0 + 0x10);
      local_110 = (ulong)(((uint)((ulong)local_108 >> 4) & 0xfffffff) + 1) & 3;
      uVar32 = 0;
      uVar48 = 0;
      uVar71 = local_c0 & 0xf8;
      uVar34 = local_c0 & 0xfe;
      local_118 = -local_110;
      do {
        pauVar28 = (undefined1 (*) [16])((long)pvVar30 + (ulong)(uVar3 * (int)uVar48) * 4);
        FUN_034ea62c(lVar70,uVar52,pauVar28);
        uVar52 = local_c0;
        pvVar30 = local_d0;
        if (local_f0 < 7) {
          uVar44 = 0;
          fVar77 = 0.0;
        }
        else {
          fVar77 = 0.0;
          pfVar62 = (float *)((long)local_100 + uVar32 * 4);
          uVar44 = 0;
          do {
            pfVar47 = pfVar62 + -4;
            pfVar55 = pfVar62 + -3;
            pfVar33 = pfVar62 + -2;
            pfVar5 = pfVar62 + -1;
            fVar78 = *pfVar62;
            pfVar6 = pfVar62 + 1;
            pfVar58 = pfVar62 + 2;
            pfVar7 = pfVar62 + 3;
            pfVar62 = pfVar62 + 8;
            fVar77 = *pfVar47 + fVar77 + *pfVar55 + *pfVar33 + *pfVar5 + fVar78 + *pfVar6 +
                     *pfVar58 + *pfVar7;
            uVar44 = uVar44 + 8;
          } while (uVar71 != uVar44);
        }
        if (local_b8 != 0) {
          pfVar62 = (float *)((long)local_d0 + uVar32 * 4 + uVar44 * 4);
          uVar44 = local_b8;
          do {
            fVar77 = *pfVar62 + fVar77;
            uVar44 = uVar44 - 1;
            pfVar62 = pfVar62 + 1;
          } while (uVar44 != 0);
        }
        if (0.0 < fVar77) {
          if ((int)local_c0 == 1) {
            uVar44 = 0;
          }
          else {
            uVar44 = 0;
            do {
              pfVar62 = (float *)((long)local_d0 + uVar44 * 4 + uVar32 * 4);
              uVar44 = uVar44 + 2;
              *pfVar62 = *pfVar62 * fVar107 * (1.0 / fVar77);
              pfVar62[1] = pfVar62[1] * fVar107 * (1.0 / fVar77);
            } while (uVar34 != uVar44);
          }
          if ((local_c0 & 1) != 0) {
            *(float *)(*pauVar28 + uVar44 * 4) =
                 (*(float *)(*pauVar28 + uVar44 * 4) * fVar107) / fVar77;
          }
          pauVar40 = pauVar28 + (long)local_e0;
          if (pauVar28 < pauVar40) {
            if (local_110 != 0) {
              uVar44 = local_118;
              pauVar35 = pauVar28;
              do {
                auVar84 = NEON_frsqrte(*pauVar35,4);
                auVar84 = NEON_frecpe(auVar84,4);
                bVar26 = uVar44 != -1;
                uVar44 = uVar44 + 1;
                pauVar28 = pauVar35 + 1;
                *(long *)(*pauVar35 + 8) = auVar84._8_8_;
                *(long *)*pauVar35 = auVar84._0_8_;
                pauVar35 = pauVar28;
              } while (bVar26);
            }
            if (0x2f < local_108) {
              do {
                auVar74 = NEON_frsqrte(pauVar28[1],4);
                auVar84 = NEON_frsqrte(*pauVar28,4);
                auVar74 = NEON_frecpe(auVar74,4);
                auVar84 = NEON_frecpe(auVar84,4);
                *(long *)(*pauVar28 + 8) = auVar84._8_8_;
                *(long *)*pauVar28 = auVar84._0_8_;
                *(long *)(pauVar28[1] + 8) = auVar74._8_8_;
                *(long *)pauVar28[1] = auVar74._0_8_;
                auVar84 = NEON_frsqrte(pauVar28[2],4);
                auVar74 = NEON_frecpe(auVar84,4);
                auVar84 = NEON_frsqrte(pauVar28[3],4);
                auVar84 = NEON_frecpe(auVar84,4);
                *(long *)(pauVar28[2] + 8) = auVar74._8_8_;
                *(long *)pauVar28[2] = auVar74._0_8_;
                *(long *)(pauVar28[3] + 8) = auVar84._8_8_;
                *(long *)pauVar28[3] = auVar84._0_8_;
                pauVar28 = pauVar28 + 4;
              } while (pauVar28 < pauVar40);
            }
          }
        }
        uVar48 = uVar48 + 1;
        uVar32 = (ulong)((int)uVar32 + uVar3);
      } while (uVar48 != local_e8);
    }
    uVar56 = (uint)local_f8;
    if (uVar56 == 0) {
      return;
    }
    if (uVar64 == 0) {
      return;
    }
    fVar107 = (1.0 / (float)uVar67) * 12.566371;
    puVar69 = (&PTR_DAT_047c52f0)[local_120];
    local_b8 = (ulong)((int)local_d8 + 3U & 0x1fc);
    local_e0 = (undefined *)(ulong)(uint)((int)local_d8 << 2);
    if (0xb < uVar56) {
      uVar56 = uVar66;
      if (uVar66 < 2) {
        uVar56 = 1;
      }
      if ((long)local_f8 - 1U <= (long)puVar68 - 1U) {
        puVar68 = local_f8;
      }
      local_c8 = (long *)puVar68;
      uVar64 = (uint)local_128 & 0x1fc;
      uVar48 = 0;
      uVar31 = 1;
      do {
        puVar60 = local_b0 + uVar48 * local_b8;
        if ((int)local_d8 != 0) {
          memset(puVar60,0,(size_t)local_e0);
          pvVar30 = local_d0;
          uVar52 = local_c0;
        }
        uVar67 = 0;
        do {
          fVar77 = *(float *)(puVar69 + uVar48 * 4) * fVar107;
          fVar78 = 0.0;
          uVar46 = 0;
          lVar70 = -((ulong)uVar56 & 0xfffffffe);
          uVar45 = uVar31;
          do {
            uVar51 = uVar45;
            uVar45 = uVar3 + uVar46;
            uVar34 = (ulong)uVar46;
            uVar46 = uVar46 + uVar64 * 2;
            fVar78 = fVar78 + *(float *)((long)pvVar30 + uVar34 * 4 + uVar67 * 4) *
                              fVar77 * *(float *)(lVar27 + (ulong)(uVar51 - 1) * 4) +
                     *(float *)((long)pvVar30 + (ulong)uVar45 * 4 + uVar67 * 4) *
                     fVar77 * *(float *)(lVar27 + (ulong)uVar51 * 4);
            lVar70 = lVar70 + 2;
            uVar45 = uVar51 + 2;
          } while (lVar70 != 0);
          if ((uVar56 & 1) != 0) {
            fVar78 = fVar78 + *(float *)((long)pvVar30 + (ulong)uVar46 * 4 + uVar67 * 4) *
                              fVar77 * *(float *)(lVar27 + (ulong)(uVar51 + 1) * 4);
          }
          puVar60[uVar67] = fVar78;
          uVar67 = uVar67 + 1;
        } while (uVar67 != uVar52);
        uVar48 = uVar48 + 1;
        uVar31 = uVar31 + uVar66;
      } while ((long *)uVar48 != local_c8);
      return;
    }
    uVar31 = *(uint *)(&DAT_03d99ae0 + (ulong)(uVar56 - 1) * 4);
    uVar56 = uVar66;
    if (uVar66 < 2) {
      uVar56 = 1;
    }
    uVar67 = (ulong)uVar56;
    uVar46 = (uint)local_128 & 0x1fc;
    uVar34 = uVar67 & 0xfffffffe;
    uVar48 = 0;
    uVar56 = 0;
    uVar64 = 1;
    local_e8 = uVar67;
    local_f0 = CONCAT44(local_f0._4_4_,uVar31);
    puVar57 = local_f8;
    while( true ) {
      if ((uVar31 >> (ulong)((uint)uVar48 & 0x1f) & 1) == 0) {
        puVar60 = local_b0 + uVar56 * (int)local_b8;
        if ((int)local_d8 != 0) {
          local_c8 = (long *)CONCAT44(local_c8._4_4_,uVar56);
          memset(puVar60,0,(size_t)local_e0);
          pvVar30 = local_d0;
          uVar52 = local_c0;
          puVar57 = local_f8;
          uVar67 = local_e8;
          uVar31 = (uint)local_f0;
          uVar56 = (uint)local_c8;
        }
        uVar32 = 0;
        do {
          fVar77 = *(float *)(puVar69 + uVar48 * 4) * fVar107;
          fVar78 = 0.0;
          uVar45 = 0;
          lVar70 = -uVar34;
          uVar51 = uVar64;
          do {
            uVar50 = uVar51;
            uVar51 = uVar3 + uVar45;
            uVar71 = (ulong)uVar45;
            uVar45 = uVar45 + uVar46 * 2;
            fVar78 = fVar78 + *(float *)((long)pvVar30 + uVar71 * 4 + uVar32 * 4) *
                              fVar77 * *(float *)(lVar27 + (ulong)(uVar50 - 1) * 4) +
                     *(float *)((long)pvVar30 + (ulong)uVar51 * 4 + uVar32 * 4) *
                     fVar77 * *(float *)(lVar27 + (ulong)uVar50 * 4);
            lVar70 = lVar70 + 2;
            uVar51 = uVar50 + 2;
          } while (lVar70 != 0);
          if ((uVar67 & 1) != 0) {
            fVar78 = fVar78 + *(float *)((long)pvVar30 + (ulong)uVar45 * 4 + uVar32 * 4) *
                              fVar77 * *(float *)(lVar27 + (ulong)(uVar50 + 1) * 4);
          }
          puVar60[uVar32] = fVar78;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar52);
        uVar56 = uVar56 + 1;
      }
      uVar48 = uVar48 + 1;
      if (puVar68 <= uVar48) break;
      uVar64 = uVar64 + uVar66;
      if ((uint)puVar57 <= uVar56) {
        return;
      }
    }
    return;
  }
  if (param_9 == 0) {
    return;
  }
  param_7 = param_7 & param_6 >> 0xc;
  uVar31 = param_7 - (param_7 >> 1 & 0x55555555);
  uVar31 = (uVar31 & 0x33333333) + (uVar31 >> 2 & 0x33333333);
  local_d0 = (void *)(CONCAT44(local_d0._4_4_,param_6) & 0xffffffff00000007);
  uVar64 = 0;
  if (param_7 != 0) {
    uVar64 = (uVar31 + (uVar31 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 & 7;
  }
  uVar31 = param_6 & 7;
  if (param_7 != param_6 >> 0xc) {
    uVar31 = uVar64;
  }
  uVar48 = (ulong)uVar31;
  if (uVar31 == 0) {
    return;
  }
  fVar77 = 1.0 / (float)uVar31;
  if ((uVar56 & 0xff9c0f00) == 0x100) {
    if (fVar107 <= 0.0) {
      local_c8 = (long *)((long)local_150 - (ulong)(uVar31 << 4));
      FUN_034d2120(uVar31,param_4);
      uVar67 = 1;
    }
    else {
      pMVar2 = (MutexType *)(param_9 + 0xf8);
      nn::os::LockMutex(pMVar2);
      puVar43 = *(uint **)(param_9 + 0xe8);
      uVar66 = *(uint *)(param_9 + 0xf0);
      if ((uVar66 == 0) || (*puVar43 == uVar31)) {
        puVar49 = puVar43;
      }
      else {
        lVar27 = (ulong)uVar66 * 0x18;
        puVar53 = puVar43;
        do {
          lVar27 = lVar27 + -0x18;
          if (lVar27 == 0) goto LAB_034cff30;
          puVar49 = puVar53 + 6;
          puVar1 = puVar53 + 6;
          puVar53 = puVar49;
        } while (*puVar1 != uVar31);
      }
      if (puVar49 == puVar43 + (ulong)uVar66 * 6) {
LAB_034cff30:
        puVar29 = (ulong *)FUN_0349ca98(param_9,uVar48);
        nn::os::UnlockMutex(pMVar2);
        if (puVar29 == (ulong *)0x0) {
          return;
        }
      }
      else {
        puVar29 = (ulong *)(puVar49 + 2);
        nn::os::UnlockMutex(pMVar2);
      }
      uVar66 = (uint)puVar29[1];
      uVar67 = (ulong)uVar66;
      pfVar62 = (float *)(local_150 + uVar67 * -2);
      param_3 = 1.0 - param_3;
      if (param_3 == 1.0) {
        memcpy(pfVar62,(void *)*puVar29,uVar67 << 4);
        uVar52 = (ulong)(uVar66 << 2);
      }
      else {
        pfVar47 = (float *)*puVar29;
        uVar52 = (ulong)(uVar66 << 2);
        if (param_3 <= 0.5) {
          fVar107 = param_3 * -1.2732395 * ABS(param_3 * 3.1415927) + param_3 * 4.0;
          pfVar33 = pfVar47 + uVar52;
          fVar107 = 1.0 / (fVar107 + 0.0001 + (ABS(fVar107) * fVar107 - fVar107) * 0.225);
          auVar84._8_4_ = 0xbf7fbe77;
          auVar84._0_8_ = 0xbf7fbe77bf7fbe77;
          auVar84._12_4_ = 0xbf7fbe77;
          pfVar58 = pfVar62;
          do {
            fVar78 = *pfVar47;
            fVar79 = pfVar47[1];
            pfVar55 = pfVar47 + 2;
            fVar83 = pfVar47[4];
            fVar103 = pfVar47[5];
            pfVar5 = pfVar47 + 6;
            fVar108 = pfVar47[8];
            fVar20 = pfVar47[9];
            pfVar6 = pfVar47 + 10;
            fVar121 = pfVar47[0xc];
            fVar101 = pfVar47[0xd];
            pfVar7 = pfVar47 + 0xe;
            pfVar47 = pfVar47 + 0x10;
            auVar117._4_4_ = *pfVar5;
            auVar117._0_4_ = *pfVar55;
            auVar117._8_4_ = *pfVar6;
            auVar117._12_4_ = *pfVar7;
            auVar74 = NEON_fmax(auVar117,auVar84,4);
            fVar102 = auVar74._0_4_ + fVar107;
            fVar104 = auVar74._4_4_ + fVar107;
            fVar82 = auVar74._8_4_ + fVar107;
            fVar105 = auVar74._12_4_ + fVar107;
            auVar93._0_4_ = fVar102 * fVar102 + fVar78 * fVar78 + fVar79 * fVar79;
            auVar93._4_4_ = fVar104 * fVar104 + fVar83 * fVar83 + fVar103 * fVar103;
            auVar93._8_4_ = fVar82 * fVar82 + fVar108 * fVar108 + fVar20 * fVar20;
            auVar93._12_4_ = fVar105 * fVar105 + fVar121 * fVar121 + fVar101 * fVar101;
            auVar74 = NEON_frsqrte(auVar93,4);
            fVar106 = auVar74._0_4_;
            auVar85._0_4_ = fVar106 * fVar78;
            fVar78 = auVar74._4_4_;
            auVar85._4_4_ = fVar78 * fVar83;
            fVar83 = auVar74._8_4_;
            auVar85._8_4_ = fVar83 * fVar108;
            fVar108 = auVar74._12_4_;
            auVar85._12_4_ = fVar108 * fVar121;
            auVar87._0_4_ = fVar79 * fVar106;
            auVar87._4_4_ = fVar103 * fVar78;
            auVar87._8_4_ = fVar20 * fVar83;
            auVar87._12_4_ = fVar101 * fVar108;
            auVar132._0_4_ = fVar102 * fVar106;
            auVar132._4_4_ = fVar104 * fVar78;
            auVar132._8_4_ = fVar82 * fVar83;
            auVar132._12_4_ = fVar105 * fVar108;
            auVar74 = NEON_ext(auVar87,auVar85,8,1);
            auVar109 = NEON_ext(auVar85,auVar74,8,1);
            auVar74 = NEON_ext(auVar132,auVar132,8,1);
            auVar117 = NEON_ext(auVar74,auVar132,8,1);
            auVar74 = NEON_ext(auVar132,auVar74,8,1);
            pfVar58[10] = auVar74._0_4_;
            pfVar58[0xb] = auVar74._8_4_;
            pfVar58[8] = auVar109._0_4_;
            pfVar58[9] = auVar109._8_4_;
            pfVar58[0xe] = auVar74._4_4_;
            pfVar58[0xf] = auVar74._12_4_;
            pfVar58[0xc] = auVar109._4_4_;
            pfVar58[0xd] = auVar109._12_4_;
            pfVar58[2] = auVar117._0_4_;
            pfVar58[3] = auVar117._8_4_;
            *pfVar58 = auVar85._0_4_;
            pfVar58[1] = auVar87._0_4_;
            pfVar58[6] = auVar117._4_4_;
            pfVar58[7] = auVar117._12_4_;
            pfVar58[4] = auVar85._4_4_;
            pfVar58[5] = auVar87._4_4_;
            pfVar58 = pfVar58 + 0x10;
          } while (pfVar47 < pfVar33);
        }
        else {
          fVar107 = 1.5707964 - param_3 * 1.5707964;
          auVar84 = NEON_fmov(0xbf800000,4);
          auVar74 = NEON_fmov(0x3f800000,4);
          pfVar33 = pfVar47 + uVar52;
          pfVar58 = pfVar62;
          do {
            fVar79 = *pfVar47;
            fVar102 = pfVar47[1];
            pfVar5 = pfVar47 + 2;
            fVar103 = pfVar47[4];
            fVar104 = pfVar47[5];
            pfVar6 = pfVar47 + 6;
            fVar20 = pfVar47[8];
            fVar82 = pfVar47[9];
            pfVar7 = pfVar47 + 10;
            pfVar55 = pfVar47 + 0xe;
            fVar101 = (float)*(undefined8 *)(pfVar47 + 0xc);
            fVar136 = (float)((ulong)*(undefined8 *)(pfVar47 + 0xc) >> 0x20);
            pfVar47 = pfVar47 + 0x10;
            fVar105 = fVar79 * fVar79 + fVar102 * fVar102;
            fVar106 = fVar103 * fVar103 + fVar104 * fVar104;
            fVar119 = fVar20 * fVar20 + fVar82 * fVar82;
            fVar120 = fVar101 * fVar101 + fVar136 * fVar136;
            auVar112._4_4_ = *pfVar6;
            auVar112._0_4_ = *pfVar5;
            auVar112._8_4_ = *pfVar7;
            auVar112._12_4_ = (int)*(undefined8 *)pfVar55;
            auVar109 = NEON_fmax(auVar112,auVar84,4);
            iVar41 = -(uint)(auVar109._0_4_ < 0.0);
            iVar54 = -(uint)(auVar109._4_4_ < 0.0);
            iVar42 = -(uint)(auVar109._8_4_ < 0.0);
            iVar21 = -(uint)(auVar109._12_4_ < 0.0);
            iVar131 = -(uint)(0.0 <= auVar109._0_4_);
            iVar133 = -(uint)(0.0 <= auVar109._4_4_);
            iVar134 = -(uint)(0.0 <= auVar109._8_4_);
            iVar135 = -(uint)(0.0 <= auVar109._12_4_);
            auVar14[1] = (byte)((uint)iVar41 >> 8) & auVar84[1] |
                         (byte)((uint)iVar131 >> 8) & auVar74[1];
            auVar14[0] = (byte)iVar41 & auVar84[0] | (byte)iVar131 & auVar74[0];
            auVar14[2] = (byte)((uint)iVar41 >> 0x10) & auVar84[2] |
                         (byte)((uint)iVar131 >> 0x10) & auVar74[2];
            auVar14[3] = (byte)((uint)iVar41 >> 0x18) & auVar84[3] |
                         (byte)((uint)iVar131 >> 0x18) & auVar74[3];
            auVar14[4] = (byte)iVar54 & auVar84[4] | (byte)iVar133 & auVar74[4];
            auVar14[5] = (byte)((uint)iVar54 >> 8) & auVar84[5] |
                         (byte)((uint)iVar133 >> 8) & auVar74[5];
            auVar14[6] = (byte)((uint)iVar54 >> 0x10) & auVar84[6] |
                         (byte)((uint)iVar133 >> 0x10) & auVar74[6];
            auVar14[7] = (byte)((uint)iVar54 >> 0x18) & auVar84[7] |
                         (byte)((uint)iVar133 >> 0x18) & auVar74[7];
            auVar14[8] = (byte)iVar42 & auVar84[8] | (byte)iVar134 & auVar74[8];
            auVar14[9] = (byte)((uint)iVar42 >> 8) & auVar84[9] |
                         (byte)((uint)iVar134 >> 8) & auVar74[9];
            auVar14[10] = (byte)((uint)iVar42 >> 0x10) & auVar84[10] |
                          (byte)((uint)iVar134 >> 0x10) & auVar74[10];
            auVar14[0xb] = (byte)((uint)iVar42 >> 0x18) & auVar84[0xb] |
                           (byte)((uint)iVar134 >> 0x18) & auVar74[0xb];
            auVar14[0xc] = (byte)iVar21 & auVar84[0xc] | (byte)iVar135 & auVar74[0xc];
            auVar14[0xd] = (byte)((uint)iVar21 >> 8) & auVar84[0xd] |
                           (byte)((uint)iVar135 >> 8) & auVar74[0xd];
            auVar14[0xe] = (byte)((uint)iVar21 >> 0x10) & auVar84[0xe] |
                           (byte)((uint)iVar135 >> 0x10) & auVar74[0xe];
            auVar14[0xf] = (byte)((uint)iVar21 >> 0x18) & auVar84[0xf] |
                           (byte)((uint)iVar135 >> 0x18) & auVar74[0xf];
            auVar22._4_4_ = -(uint)(fVar106 + -0.0001 < 0.0);
            auVar22._0_4_ = -(uint)(fVar105 + -0.0001 < 0.0);
            auVar22._8_4_ = -(uint)(fVar119 + -0.0001 < 0.0);
            auVar22._12_4_ = -(uint)(fVar120 + -0.0001 < 0.0);
            auVar109 = auVar109 ^ (auVar109 ^ auVar14) & auVar22;
            fVar78 = auVar109._0_4_;
            fVar83 = auVar109._4_4_;
            fVar108 = auVar109._8_4_;
            fVar121 = auVar109._12_4_;
            fVar78 = fVar107 + (fVar78 * fVar78 * (fVar78 * fVar78 * 0.719088 + -0.35786) + 1.085865
                               ) * fVar78 * param_3;
            fVar83 = fVar107 + (fVar83 * fVar83 * (fVar83 * fVar83 * 0.719088 + -0.35786) + 1.085865
                               ) * fVar83 * param_3;
            fVar108 = fVar107 + (fVar108 * fVar108 * (fVar108 * fVar108 * 0.719088 + -0.35786) +
                                1.085865) * fVar108 * param_3;
            fVar121 = fVar107 + (fVar121 * fVar121 * (fVar121 * fVar121 * 0.719088 + -0.35786) +
                                1.085865) * fVar121 * param_3;
            auVar113._0_4_ =
                 (auVar74._0_4_ + fVar78 * fVar78 * (fVar78 * fVar78 * 0.00833216 + -0.16666655)) *
                 fVar78;
            auVar113._4_4_ =
                 (auVar74._4_4_ + fVar83 * fVar83 * (fVar83 * fVar83 * 0.00833216 + -0.16666655)) *
                 fVar83;
            auVar113._8_4_ =
                 (auVar74._8_4_ + fVar108 * fVar108 * (fVar108 * fVar108 * 0.00833216 + -0.16666655)
                 ) * fVar108;
            auVar113._12_4_ =
                 (auVar74._12_4_ +
                 fVar121 * fVar121 * (fVar121 * fVar121 * 0.00833216 + -0.16666655)) * fVar121;
            fVar78 = auVar74._0_4_ - auVar113._0_4_ * auVar113._0_4_;
            fVar83 = auVar74._4_4_ - auVar113._4_4_ * auVar113._4_4_;
            fVar108 = auVar74._8_4_ - auVar113._8_4_ * auVar113._8_4_;
            fVar121 = auVar74._12_4_ - auVar113._12_4_ * auVar113._12_4_;
            auVar116._0_4_ = fVar78 * fVar105;
            auVar116._4_4_ = fVar83 * fVar106;
            auVar116._8_4_ = fVar108 * fVar119;
            auVar116._12_4_ = fVar121 * fVar120;
            auVar12._8_4_ = 0x38d1b717;
            auVar12._0_8_ = 0x38d1b71738d1b717;
            auVar12._12_4_ = 0x38d1b717;
            auVar109 = NEON_fmax(auVar116,auVar12,4);
            auVar109 = NEON_frsqrte(auVar109,4);
            fVar78 = fVar78 * auVar109._0_4_;
            fVar83 = fVar83 * auVar109._4_4_;
            fVar108 = fVar108 * auVar109._8_4_;
            fVar121 = fVar121 * auVar109._12_4_;
            fVar79 = fVar78 * fVar79;
            fVar103 = fVar83 * fVar103;
            uVar122 = (undefined1)((uint)fVar103 >> 8);
            uVar123 = (undefined1)((uint)fVar103 >> 0x10);
            uVar124 = (undefined1)((uint)fVar103 >> 0x18);
            fVar20 = fVar108 * fVar20;
            uVar125 = (undefined1)((uint)fVar20 >> 8);
            uVar126 = (undefined1)((uint)fVar20 >> 0x10);
            uVar127 = (undefined1)((uint)fVar20 >> 0x18);
            fVar101 = fVar121 * fVar101;
            uVar128 = (undefined1)((uint)fVar101 >> 8);
            uVar129 = (undefined1)((uint)fVar101 >> 0x10);
            uVar130 = (undefined1)((uint)fVar101 >> 0x18);
            auVar110._0_4_ = fVar78 * fVar102;
            auVar110._4_4_ = fVar83 * fVar104;
            auVar110._8_4_ = fVar108 * fVar82;
            auVar110._12_4_ = fVar121 * fVar136;
            auVar15[4] = SUB41(fVar103,0);
            auVar15._0_4_ = fVar79;
            auVar15[5] = uVar122;
            auVar15[6] = uVar123;
            auVar15[7] = uVar124;
            auVar15[8] = SUB41(fVar20,0);
            auVar15[9] = uVar125;
            auVar15[10] = uVar126;
            auVar15[0xb] = uVar127;
            auVar15[0xc] = SUB41(fVar101,0);
            auVar15[0xd] = uVar128;
            auVar15[0xe] = uVar129;
            auVar15[0xf] = uVar130;
            auVar109 = NEON_ext(auVar110,auVar15,8,1);
            auVar16[4] = SUB41(fVar103,0);
            auVar16._0_4_ = fVar79;
            auVar16[5] = uVar122;
            auVar16[6] = uVar123;
            auVar16[7] = uVar124;
            auVar16[8] = SUB41(fVar20,0);
            auVar16[9] = uVar125;
            auVar16[10] = uVar126;
            auVar16[0xb] = uVar127;
            auVar16[0xc] = SUB41(fVar101,0);
            auVar16[0xd] = uVar128;
            auVar16[0xe] = uVar129;
            auVar16[0xf] = uVar130;
            auVar117 = NEON_ext(auVar16,auVar109,8,1);
            uVar122 = (undefined1)((uint)auVar110._0_4_ >> 0x18);
            auVar109 = NEON_ext(auVar113,auVar113,8,1);
            auVar132 = NEON_ext(auVar109,auVar113,8,1);
            auVar109 = NEON_ext(auVar113,auVar109,8,1);
            pfVar58[10] = auVar109._0_4_;
            pfVar58[0xb] = auVar109._8_4_;
            pfVar58[8] = auVar117._0_4_;
            pfVar58[9] = auVar117._8_4_;
            pfVar58[0xe] = auVar109._4_4_;
            pfVar58[0xf] = auVar109._12_4_;
            pfVar58[0xc] = auVar117._4_4_;
            pfVar58[0xd] = auVar117._12_4_;
            pfVar58[2] = auVar132._0_4_;
            pfVar58[3] = auVar132._8_4_;
            *pfVar58 = fVar79;
            pfVar58[1] = (float)(CONCAT14(uVar122,CONCAT13((char)((uint)auVar110._0_4_ >> 0x10),
                                                           CONCAT12((char)((uint)auVar110._0_4_ >> 8
                                                                          ),CONCAT11(SUB41(auVar110.
                                                  _0_4_,0),uVar124)))) >> 8);
            pfVar58[6] = auVar132._4_4_;
            pfVar58[7] = auVar132._12_4_;
            pfVar58[4] = fVar103;
            pfVar58[5] = (float)(CONCAT14((char)((uint)auVar110._4_4_ >> 0x18),
                                          CONCAT13((char)((uint)auVar110._4_4_ >> 0x10),
                                                   CONCAT12((char)((uint)auVar110._4_4_ >> 8),
                                                            CONCAT11(SUB41(auVar110._4_4_,0),uVar122
                                                                    )))) >> 8);
            pfVar58 = pfVar58 + 0x10;
          } while (pfVar47 < pfVar33);
        }
      }
      uVar32 = (ulong)(uVar66 * uVar31);
      pfVar33 = pfVar62 + uVar32 * -4;
      uVar34 = 0;
      pfVar47 = pfVar33;
      do {
        pfVar58 = (float *)(&DAT_03d99b0c + uVar34 * 0xc + (ulong)(uVar31 - 1) * 0x54);
        fVar83 = *pfVar58;
        fVar79 = -fVar83;
        fVar107 = pfVar58[2];
        fVar78 = pfVar58[1];
        pfVar55 = pfVar47;
        pfVar58 = pfVar62;
        do {
          fVar103 = *pfVar58;
          pfVar7 = pfVar58 + 1;
          fVar108 = pfVar58[2];
          pfVar5 = pfVar58 + 4;
          pfVar24 = pfVar58 + 5;
          fVar20 = pfVar58[6];
          pfVar47 = pfVar58 + 8;
          pfVar25 = pfVar58 + 9;
          fVar121 = pfVar58[10];
          pfVar6 = pfVar58 + 0xc;
          fVar82 = (float)*(undefined8 *)(pfVar58 + 0xe);
          fVar101 = (float)*(undefined8 *)pfVar6;
          pfVar58 = pfVar58 + 0x10;
          fVar102 = fVar103 * fVar107 + fVar83 * fVar108;
          fVar104 = *pfVar5 * fVar107 + fVar83 * fVar20;
          fVar105 = *pfVar47 * fVar107 + fVar83 * fVar121;
          fVar106 = fVar101 * fVar107 + fVar83 * fVar82;
          auVar97._0_4_ = *pfVar7 + fVar78 * fVar108;
          auVar97._4_4_ = *pfVar24 + fVar78 * fVar20;
          auVar97._8_4_ = *pfVar25 + fVar78 * fVar121;
          auVar97._12_4_ = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) + fVar78 * fVar82;
          auVar88._0_4_ = fVar103 * fVar79 + fVar107 * fVar108;
          auVar88._4_4_ = *pfVar5 * fVar79 + fVar107 * fVar20;
          auVar88._8_4_ = *pfVar47 * fVar79 + fVar107 * fVar121;
          auVar88._12_4_ = fVar101 * fVar79 + fVar107 * fVar82;
          auVar8._4_4_ = fVar104;
          auVar8._0_4_ = fVar102;
          auVar8._8_4_ = fVar105;
          auVar8._12_4_ = fVar106;
          auVar84 = NEON_ext(auVar97,auVar8,8,1);
          auVar9._4_4_ = fVar104;
          auVar9._0_4_ = fVar102;
          auVar9._8_4_ = fVar105;
          auVar9._12_4_ = fVar106;
          auVar74 = NEON_ext(auVar9,auVar84,8,1);
          auVar84 = NEON_ext(auVar88,auVar88,8,1);
          auVar109 = NEON_ext(auVar84,auVar88,8,1);
          auVar84 = NEON_ext(auVar88,auVar84,8,1);
          auVar98._0_8_ = CONCAT44(auVar74._8_4_,auVar74._0_4_);
          auVar98._8_4_ = auVar84._0_4_;
          auVar98._12_4_ = auVar84._8_4_;
          auVar94._0_8_ = CONCAT44(auVar97._4_4_,fVar104);
          auVar94._8_4_ = auVar109._4_4_;
          auVar94._12_4_ = auVar109._12_4_;
          *(long *)(pfVar55 + 10) = auVar98._8_8_;
          *(undefined8 *)(pfVar55 + 8) = auVar98._0_8_;
          pfVar55[0xe] = auVar84._4_4_;
          pfVar55[0xf] = auVar84._12_4_;
          pfVar55[0xc] = auVar74._4_4_;
          pfVar55[0xd] = auVar74._12_4_;
          auVar89._0_8_ = CONCAT44(auVar97._0_4_,fVar102);
          auVar89._8_4_ = auVar109._0_4_;
          auVar89._12_4_ = auVar109._8_4_;
          pfVar47 = pfVar55 + 0x10;
          *(long *)(pfVar55 + 2) = auVar89._8_8_;
          *(undefined8 *)pfVar55 = auVar89._0_8_;
          *(long *)(pfVar55 + 6) = auVar94._8_8_;
          *(undefined8 *)(pfVar55 + 4) = auVar94._0_8_;
          pfVar55 = pfVar47;
        } while (pfVar58 < pfVar62 + uVar52);
        uVar34 = uVar34 + 1;
      } while (uVar34 != uVar48);
      local_c8 = (long *)((long)pfVar33 - (uVar32 * 0x10 + 0xf & 0x1ffffffff0));
      auVar72._8_8_ = uVar76;
      auVar72._0_8_ = param_2._0_8_;
      FUN_034d1c10(auVar72,pfVar33,uVar32,param_4);
    }
    pMVar2 = (MutexType *)(param_9 + 200);
    nn::os::LockMutex(pMVar2);
    puVar43 = *(uint **)(param_9 + 0xb8);
    uVar66 = *(uint *)(param_9 + 0xc0);
    if ((uVar66 == 0) || (*puVar43 == uVar56)) {
      puVar49 = puVar43;
    }
    else {
      lVar27 = (ulong)uVar66 * 0x10;
      puVar53 = puVar43;
      do {
        lVar27 = lVar27 + -0x10;
        if (lVar27 == 0) goto LAB_034d0664;
        puVar49 = puVar53 + 4;
        puVar1 = puVar53 + 4;
        puVar53 = puVar49;
      } while (*puVar1 != uVar56);
    }
    if (puVar49 == puVar43 + (ulong)uVar66 * 4) {
LAB_034d0664:
      local_d8 = FUN_0349c8dc(param_9,uVar56);
    }
    else {
      local_d8 = *(ulong *)(puVar49 + 2);
    }
    nn::os::UnlockMutex(pMVar2);
    uVar66 = (uint)local_c0;
    if (local_d8 == 0) {
      return;
    }
    uVar31 = uVar66 + 2;
    if (3 < uVar66) {
      uVar31 = uVar66;
    }
    lVar27 = 0;
    if ((param_1 < 1.0) &&
       (uVar64 = uVar56 & 0xffffbf00 | uVar56 - (uVar56 >> 0xe & 1) & 0xff, uVar64 != uVar56)) {
      nn::os::LockMutex(pMVar2);
      puVar43 = *(uint **)(param_9 + 0xb8);
      uVar66 = *(uint *)(param_9 + 0xc0);
      if ((uVar66 == 0) || (*puVar43 == uVar64)) {
        puVar49 = puVar43;
      }
      else {
        lVar27 = (ulong)uVar66 * 0x10;
        puVar53 = puVar43;
        do {
          lVar27 = lVar27 + -0x10;
          if (lVar27 == 0) goto LAB_034d0728;
          puVar49 = puVar53 + 4;
          puVar1 = puVar53 + 4;
          puVar53 = puVar49;
        } while (*puVar1 != uVar64);
      }
      if (puVar49 == puVar43 + (ulong)uVar66 * 4) {
LAB_034d0728:
        lVar27 = FUN_0349c8dc(param_9,uVar64);
      }
      else {
        lVar27 = *(long *)(puVar49 + 2);
      }
      nn::os::UnlockMutex(pMVar2);
      uVar66 = (uint)local_c0;
    }
    fVar107 = 1.0 / (float)uVar67;
    uVar48 = (param_8 & 0xff) + 3;
    uVar46 = (uint)local_d0 - 1;
    uVar34 = uVar48 >> 2;
    uVar32 = uVar34 * 0x10 - 1;
    uVar64 = ((uint)(uVar32 >> 4) & 0xfffffff) + 1;
    uVar52 = 0;
    iVar41 = 0;
    uVar3 = (int)uVar67 * 4;
    if ((uint)local_d0 == 0 || uVar46 == 0) {
      local_d0._0_4_ = 1;
    }
    do {
      if ((param_7 & 0xffff & *(uint *)(&DAT_03d984dc + uVar52 * 4 + (ulong)uVar46 * 0x20)) != 0) {
        pauVar28 = (undefined1 (*) [16])
                   (local_b0 +
                   (ulong)(*(uint *)(&DAT_03d984dc + uVar52 * 4 + (ulong)uVar46 * 0x20) >> 0x10) *
                   (uVar48 & 0x1fc));
        pfVar62 = (float *)((long)local_c8 + (ulong)(iVar41 * uVar3) * 4);
        pfVar47 = pfVar62 + uVar3;
        do {
          fVar79 = pfVar62[2];
          fVar78 = *pfVar62;
          pfVar62 = pfVar62 + 4;
          if (((uVar56 & 0xfffff000) == 0x3000) && (*(int *)(param_9 + 0x7c) == 1)) {
            fVar78 = fVar78 * (fVar78 * -0.20710677 + 0.5) + 0.70710677;
            fVar78 = fVar78 * fVar78;
            fVar79 = 1.0 - fVar78;
            if (1.0 < fVar78) {
              fVar79 = 0.0;
            }
            *(float *)*pauVar28 = *(float *)*pauVar28 + fVar79;
            pfVar33 = (float *)((long)*pauVar28 + 4);
          }
          else {
            uVar67 = 1;
            pfVar33 = (float *)(local_d8 + 8);
            puVar43 = (uint *)(&DAT_03d984dc + local_b8 * 0x20);
            if (lVar27 == 0) {
              do {
                pfVar58 = pfVar33 + -2;
                pfVar55 = pfVar33 + -1;
                fVar83 = *pfVar33;
                pfVar5 = pfVar33 + 1;
                puVar43 = puVar43 + 1;
                if (uVar31 <= uVar67) break;
                pfVar33 = pfVar33 + 4;
                uVar67 = uVar67 + 1;
              } while (*pfVar58 * fVar78 < -(*pfVar55 * fVar79) ||
                       fVar83 * fVar78 < -(*pfVar5 * fVar79));
              fVar103 = *pfVar58 * fVar78 + 1.1920929e-07 + *pfVar55 * fVar79;
              fVar78 = fVar83 * fVar78 + 1.1920929e-07 + *pfVar5 * fVar79;
              fVar103 = fVar103 * fVar103;
              fVar78 = fVar78 * fVar78;
              fVar79 = 1.0 / (fVar78 + fVar103);
            }
            else {
              do {
                puVar49 = puVar43;
                pfVar58 = pfVar33 + -2;
                pfVar55 = pfVar33 + -1;
                fVar83 = *pfVar33;
                pfVar5 = pfVar33 + 1;
                puVar43 = puVar49 + 1;
                if (uVar31 <= uVar67) break;
                pfVar33 = pfVar33 + 4;
                uVar67 = uVar67 + 1;
              } while (*pfVar58 * fVar78 < -(*pfVar55 * fVar79) ||
                       fVar83 * fVar78 < -(*pfVar5 * fVar79));
              uVar67 = (ulong)(*puVar49 >> 0xe) & 0x3fffc;
              fVar103 = fVar83 * fVar78 + 1.1920929e-07 + *pfVar5 * fVar79;
              fVar83 = *pfVar58 * fVar78 + 1.1920929e-07 + *pfVar55 * fVar79;
              fVar83 = fVar83 * fVar83;
              fVar103 = fVar103 * fVar103;
              fVar108 = param_1 / (fVar103 + fVar83);
              *(float *)((long)*pauVar28 + uVar67) =
                   *(float *)((long)*pauVar28 + uVar67) + fVar83 * fVar108;
              uVar71 = (ulong)(*puVar43 >> 0xe) & 0x3fffc;
              uVar67 = 1;
              *(float *)((long)*pauVar28 + uVar71) =
                   *(float *)((long)*pauVar28 + uVar71) + fVar103 * fVar108;
              pfVar33 = (float *)(lVar27 + 8);
              puVar43 = (uint *)(&DAT_03d985bc + (ulong)(uVar66 - 2) * 0x20);
              do {
                pfVar58 = pfVar33 + -2;
                pfVar55 = pfVar33 + -1;
                fVar83 = *pfVar33;
                pfVar5 = pfVar33 + 1;
                puVar43 = puVar43 + 1;
                if (uVar31 - 1 <= uVar67) break;
                pfVar33 = pfVar33 + 4;
                uVar67 = uVar67 + 1;
              } while (*pfVar58 * fVar78 < -(*pfVar55 * fVar79) ||
                       fVar83 * fVar78 < -(*pfVar5 * fVar79));
              fVar103 = *pfVar58 * fVar78 + 1.1920929e-07 + *pfVar55 * fVar79;
              fVar78 = fVar83 * fVar78 + 1.1920929e-07 + *pfVar5 * fVar79;
              fVar103 = fVar103 * fVar103;
              fVar78 = fVar78 * fVar78;
              fVar79 = (1.0 - param_1) / (fVar78 + fVar103);
            }
            uVar67 = (ulong)(puVar43[-1] >> 0xe) & 0x3fffc;
            fVar78 = fVar79 * fVar78;
            *(float *)((long)*pauVar28 + uVar67) =
                 *(float *)((long)*pauVar28 + uVar67) + fVar103 * fVar79;
            pfVar33 = (float *)((long)*pauVar28 + ((ulong)(*puVar43 >> 0xe) & 0x3fffc));
          }
          *pfVar33 = *pfVar33 + fVar78;
        } while (pfVar62 < pfVar47);
        iVar54 = (int)(param_8 & 0xff);
        if (iVar54 != 0) {
          if (iVar54 == 1) {
            uVar67 = 0;
          }
          else {
            uVar67 = 0;
            do {
              pfVar62 = (float *)((long)*pauVar28 + uVar67 * 4);
              uVar67 = uVar67 + 2;
              *pfVar62 = *pfVar62 * fVar77 * fVar107;
              pfVar62[1] = pfVar62[1] * fVar77 * fVar107;
            } while ((param_8 & 0xfe) != uVar67);
          }
          if ((param_8 & 1) != 0) {
            *(float *)((long)*pauVar28 + uVar67 * 4) =
                 *(float *)((long)*pauVar28 + uVar67 * 4) * fVar77 * fVar107;
          }
        }
        pauVar40 = pauVar28 + uVar34;
        if (pauVar28 < pauVar40) {
          if ((uVar64 & 3) != 0) {
            lVar70 = -((ulong)uVar64 & 3);
            pauVar35 = pauVar28;
            do {
              auVar84 = NEON_frsqrte(*pauVar35,4);
              auVar84 = NEON_frecpe(auVar84,4);
              bVar26 = lVar70 != -1;
              lVar70 = lVar70 + 1;
              pauVar28 = pauVar35 + 1;
              *(long *)((long)*pauVar35 + 8) = auVar84._8_8_;
              *(long *)*pauVar35 = auVar84._0_8_;
              pauVar35 = pauVar28;
            } while (bVar26);
          }
          if (0x2f < uVar32) {
            do {
              auVar74 = NEON_frsqrte(pauVar28[1],4);
              auVar84 = NEON_frsqrte(*pauVar28,4);
              auVar74 = NEON_frecpe(auVar74,4);
              auVar84 = NEON_frecpe(auVar84,4);
              *(long *)((long)*pauVar28 + 8) = auVar84._8_8_;
              *(long *)*pauVar28 = auVar84._0_8_;
              *(long *)((long)pauVar28[1] + 8) = auVar74._8_8_;
              *(long *)pauVar28[1] = auVar74._0_8_;
              auVar84 = NEON_frsqrte(pauVar28[2],4);
              auVar74 = NEON_frecpe(auVar84,4);
              auVar84 = NEON_frsqrte(pauVar28[3],4);
              auVar84 = NEON_frecpe(auVar84,4);
              *(long *)((long)pauVar28[2] + 8) = auVar74._8_8_;
              *(long *)pauVar28[2] = auVar74._0_8_;
              *(long *)((long)pauVar28[3] + 8) = auVar84._8_8_;
              *(long *)pauVar28[3] = auVar84._0_8_;
              pauVar28 = pauVar28 + 4;
            } while (pauVar28 < pauVar40);
          }
        }
        iVar41 = iVar41 + 1;
      }
      uVar52 = uVar52 + 1;
      if (uVar52 == (uint)local_d0) {
        return;
      }
    } while( true );
  }
  if (fVar107 <= 0.0) {
    pfVar62 = (float *)((long)local_150 - (ulong)(uVar31 << 4));
    local_c8 = (long *)pfVar62;
    FUN_034d2120(uVar48,param_4);
    uVar67 = 1;
  }
  else {
    pMVar2 = (MutexType *)(param_9 + 0xf8);
    nn::os::LockMutex(pMVar2);
    puVar43 = *(uint **)(param_9 + 0xe8);
    uVar64 = *(uint *)(param_9 + 0xf0);
    if ((uVar64 == 0) || (*puVar43 == (uVar31 | 0x80000000))) {
      puVar49 = puVar43;
    }
    else {
      lVar27 = (ulong)uVar64 * 0x18;
      puVar53 = puVar43;
      do {
        lVar27 = lVar27 + -0x18;
        if (lVar27 == 0) goto LAB_034cffac;
        puVar49 = puVar53 + 6;
        puVar1 = puVar53 + 6;
        puVar53 = puVar49;
      } while (*puVar1 != (uVar31 | 0x80000000));
    }
    if (puVar49 == puVar43 + (ulong)uVar64 * 6) {
LAB_034cffac:
      puVar29 = (ulong *)FUN_0349ca98(param_9);
      nn::os::UnlockMutex(pMVar2);
      if (puVar29 == (ulong *)0x0) {
        return;
      }
    }
    else {
      puVar29 = (ulong *)(puVar49 + 2);
      nn::os::UnlockMutex(pMVar2);
    }
    uVar64 = (uint)puVar29[1];
    uVar67 = (ulong)uVar64;
    pfVar62 = (float *)(local_150 + uVar67 * -2);
    param_3 = 1.0 - param_3;
    if (param_3 == 1.0) {
      memcpy(pfVar62,(void *)*puVar29,uVar67 << 4);
      uVar52 = (ulong)(uVar64 << 2);
    }
    else {
      pfVar47 = (float *)*puVar29;
      uVar52 = (ulong)(uVar64 << 2);
      if (param_3 <= 0.5) {
        fVar107 = param_3 * -1.2732395 * ABS(param_3 * 3.1415927) + param_3 * 4.0;
        pfVar33 = pfVar47 + uVar52;
        fVar107 = 1.0 / (fVar107 + 0.0001 + (ABS(fVar107) * fVar107 - fVar107) * 0.225);
        auVar75._8_4_ = 0xbf7fbe77;
        auVar75._0_8_ = 0xbf7fbe77bf7fbe77;
        auVar75._12_4_ = 0xbf7fbe77;
        pfVar58 = pfVar62;
        do {
          fVar78 = *pfVar47;
          fVar79 = pfVar47[1];
          pfVar55 = pfVar47 + 2;
          fVar83 = pfVar47[4];
          fVar103 = pfVar47[5];
          pfVar5 = pfVar47 + 6;
          fVar108 = pfVar47[8];
          fVar20 = pfVar47[9];
          pfVar6 = pfVar47 + 10;
          fVar121 = pfVar47[0xc];
          fVar101 = pfVar47[0xd];
          pfVar7 = pfVar47 + 0xe;
          pfVar47 = pfVar47 + 0x10;
          auVar80._4_4_ = *pfVar5;
          auVar80._0_4_ = *pfVar55;
          auVar80._8_4_ = *pfVar6;
          auVar80._12_4_ = *pfVar7;
          auVar84 = NEON_fmax(auVar80,auVar75,4);
          fVar102 = auVar84._0_4_ + fVar107;
          fVar104 = auVar84._4_4_ + fVar107;
          fVar82 = auVar84._8_4_ + fVar107;
          fVar105 = auVar84._12_4_ + fVar107;
          auVar95._0_4_ = fVar102 * fVar102 + fVar78 * fVar78 + fVar79 * fVar79;
          auVar95._4_4_ = fVar104 * fVar104 + fVar83 * fVar83 + fVar103 * fVar103;
          auVar95._8_4_ = fVar82 * fVar82 + fVar108 * fVar108 + fVar20 * fVar20;
          auVar95._12_4_ = fVar105 * fVar105 + fVar121 * fVar121 + fVar101 * fVar101;
          auVar84 = NEON_frsqrte(auVar95,4);
          fVar106 = auVar84._0_4_;
          auVar86._0_4_ = fVar106 * fVar78;
          fVar78 = auVar84._4_4_;
          auVar86._4_4_ = fVar78 * fVar83;
          fVar83 = auVar84._8_4_;
          auVar86._8_4_ = fVar83 * fVar108;
          fVar108 = auVar84._12_4_;
          auVar86._12_4_ = fVar108 * fVar121;
          auVar90._0_4_ = fVar79 * fVar106;
          auVar90._4_4_ = fVar103 * fVar78;
          auVar90._8_4_ = fVar20 * fVar83;
          auVar90._12_4_ = fVar101 * fVar108;
          auVar81._0_4_ = fVar102 * fVar106;
          auVar81._4_4_ = fVar104 * fVar78;
          auVar81._8_4_ = fVar82 * fVar83;
          auVar81._12_4_ = fVar105 * fVar108;
          auVar84 = NEON_ext(auVar90,auVar86,8,1);
          auVar74 = NEON_ext(auVar86,auVar84,8,1);
          auVar84 = NEON_ext(auVar81,auVar81,8,1);
          auVar109 = NEON_ext(auVar84,auVar81,8,1);
          auVar84 = NEON_ext(auVar81,auVar84,8,1);
          pfVar58[10] = auVar84._0_4_;
          pfVar58[0xb] = auVar84._8_4_;
          pfVar58[8] = auVar74._0_4_;
          pfVar58[9] = auVar74._8_4_;
          pfVar58[0xe] = auVar84._4_4_;
          pfVar58[0xf] = auVar84._12_4_;
          pfVar58[0xc] = auVar74._4_4_;
          pfVar58[0xd] = auVar74._12_4_;
          pfVar58[2] = auVar109._0_4_;
          pfVar58[3] = auVar109._8_4_;
          *pfVar58 = auVar86._0_4_;
          pfVar58[1] = auVar90._0_4_;
          pfVar58[6] = auVar109._4_4_;
          pfVar58[7] = auVar109._12_4_;
          pfVar58[4] = auVar86._4_4_;
          pfVar58[5] = auVar90._4_4_;
          pfVar58 = pfVar58 + 0x10;
        } while (pfVar47 < pfVar33);
      }
      else {
        fVar107 = 1.5707964 - param_3 * 1.5707964;
        auVar84 = NEON_fmov(0xbf800000,4);
        auVar74 = NEON_fmov(0x3f800000,4);
        pfVar33 = pfVar47 + uVar52;
        pfVar58 = pfVar62;
        do {
          fVar79 = *pfVar47;
          fVar102 = pfVar47[1];
          pfVar5 = pfVar47 + 2;
          fVar103 = pfVar47[4];
          fVar104 = pfVar47[5];
          pfVar6 = pfVar47 + 6;
          fVar20 = pfVar47[8];
          fVar82 = pfVar47[9];
          pfVar7 = pfVar47 + 10;
          pfVar55 = pfVar47 + 0xe;
          fVar101 = (float)*(undefined8 *)(pfVar47 + 0xc);
          fVar136 = (float)((ulong)*(undefined8 *)(pfVar47 + 0xc) >> 0x20);
          pfVar47 = pfVar47 + 0x10;
          fVar105 = fVar79 * fVar79 + fVar102 * fVar102;
          fVar106 = fVar103 * fVar103 + fVar104 * fVar104;
          fVar119 = fVar20 * fVar20 + fVar82 * fVar82;
          fVar120 = fVar101 * fVar101 + fVar136 * fVar136;
          auVar114._4_4_ = *pfVar6;
          auVar114._0_4_ = *pfVar5;
          auVar114._8_4_ = *pfVar7;
          auVar114._12_4_ = (int)*(undefined8 *)pfVar55;
          auVar109 = NEON_fmax(auVar114,auVar84,4);
          iVar41 = -(uint)(auVar109._0_4_ < 0.0);
          iVar54 = -(uint)(auVar109._4_4_ < 0.0);
          iVar42 = -(uint)(auVar109._8_4_ < 0.0);
          iVar21 = -(uint)(auVar109._12_4_ < 0.0);
          iVar131 = -(uint)(0.0 <= auVar109._0_4_);
          iVar133 = -(uint)(0.0 <= auVar109._4_4_);
          iVar134 = -(uint)(0.0 <= auVar109._8_4_);
          iVar135 = -(uint)(0.0 <= auVar109._12_4_);
          auVar17[1] = (byte)((uint)iVar41 >> 8) & auVar84[1] |
                       (byte)((uint)iVar131 >> 8) & auVar74[1];
          auVar17[0] = (byte)iVar41 & auVar84[0] | (byte)iVar131 & auVar74[0];
          auVar17[2] = (byte)((uint)iVar41 >> 0x10) & auVar84[2] |
                       (byte)((uint)iVar131 >> 0x10) & auVar74[2];
          auVar17[3] = (byte)((uint)iVar41 >> 0x18) & auVar84[3] |
                       (byte)((uint)iVar131 >> 0x18) & auVar74[3];
          auVar17[4] = (byte)iVar54 & auVar84[4] | (byte)iVar133 & auVar74[4];
          auVar17[5] = (byte)((uint)iVar54 >> 8) & auVar84[5] |
                       (byte)((uint)iVar133 >> 8) & auVar74[5];
          auVar17[6] = (byte)((uint)iVar54 >> 0x10) & auVar84[6] |
                       (byte)((uint)iVar133 >> 0x10) & auVar74[6];
          auVar17[7] = (byte)((uint)iVar54 >> 0x18) & auVar84[7] |
                       (byte)((uint)iVar133 >> 0x18) & auVar74[7];
          auVar17[8] = (byte)iVar42 & auVar84[8] | (byte)iVar134 & auVar74[8];
          auVar17[9] = (byte)((uint)iVar42 >> 8) & auVar84[9] |
                       (byte)((uint)iVar134 >> 8) & auVar74[9];
          auVar17[10] = (byte)((uint)iVar42 >> 0x10) & auVar84[10] |
                        (byte)((uint)iVar134 >> 0x10) & auVar74[10];
          auVar17[0xb] = (byte)((uint)iVar42 >> 0x18) & auVar84[0xb] |
                         (byte)((uint)iVar134 >> 0x18) & auVar74[0xb];
          auVar17[0xc] = (byte)iVar21 & auVar84[0xc] | (byte)iVar135 & auVar74[0xc];
          auVar17[0xd] = (byte)((uint)iVar21 >> 8) & auVar84[0xd] |
                         (byte)((uint)iVar135 >> 8) & auVar74[0xd];
          auVar17[0xe] = (byte)((uint)iVar21 >> 0x10) & auVar84[0xe] |
                         (byte)((uint)iVar135 >> 0x10) & auVar74[0xe];
          auVar17[0xf] = (byte)((uint)iVar21 >> 0x18) & auVar84[0xf] |
                         (byte)((uint)iVar135 >> 0x18) & auVar74[0xf];
          auVar23._4_4_ = -(uint)(fVar106 + -0.0001 < 0.0);
          auVar23._0_4_ = -(uint)(fVar105 + -0.0001 < 0.0);
          auVar23._8_4_ = -(uint)(fVar119 + -0.0001 < 0.0);
          auVar23._12_4_ = -(uint)(fVar120 + -0.0001 < 0.0);
          auVar109 = auVar109 ^ (auVar109 ^ auVar17) & auVar23;
          fVar78 = auVar109._0_4_;
          fVar83 = auVar109._4_4_;
          fVar108 = auVar109._8_4_;
          fVar121 = auVar109._12_4_;
          fVar78 = fVar107 + (fVar78 * fVar78 * (fVar78 * fVar78 * 0.719088 + -0.35786) + 1.085865)
                             * fVar78 * param_3;
          fVar83 = fVar107 + (fVar83 * fVar83 * (fVar83 * fVar83 * 0.719088 + -0.35786) + 1.085865)
                             * fVar83 * param_3;
          fVar108 = fVar107 + (fVar108 * fVar108 * (fVar108 * fVar108 * 0.719088 + -0.35786) +
                              1.085865) * fVar108 * param_3;
          fVar121 = fVar107 + (fVar121 * fVar121 * (fVar121 * fVar121 * 0.719088 + -0.35786) +
                              1.085865) * fVar121 * param_3;
          auVar115._0_4_ =
               (auVar74._0_4_ + fVar78 * fVar78 * (fVar78 * fVar78 * 0.00833216 + -0.16666655)) *
               fVar78;
          auVar115._4_4_ =
               (auVar74._4_4_ + fVar83 * fVar83 * (fVar83 * fVar83 * 0.00833216 + -0.16666655)) *
               fVar83;
          auVar115._8_4_ =
               (auVar74._8_4_ + fVar108 * fVar108 * (fVar108 * fVar108 * 0.00833216 + -0.16666655))
               * fVar108;
          auVar115._12_4_ =
               (auVar74._12_4_ + fVar121 * fVar121 * (fVar121 * fVar121 * 0.00833216 + -0.16666655))
               * fVar121;
          fVar78 = auVar74._0_4_ - auVar115._0_4_ * auVar115._0_4_;
          fVar83 = auVar74._4_4_ - auVar115._4_4_ * auVar115._4_4_;
          fVar108 = auVar74._8_4_ - auVar115._8_4_ * auVar115._8_4_;
          fVar121 = auVar74._12_4_ - auVar115._12_4_ * auVar115._12_4_;
          auVar118._0_4_ = fVar78 * fVar105;
          auVar118._4_4_ = fVar83 * fVar106;
          auVar118._8_4_ = fVar108 * fVar119;
          auVar118._12_4_ = fVar121 * fVar120;
          auVar13._8_4_ = 0x38d1b717;
          auVar13._0_8_ = 0x38d1b71738d1b717;
          auVar13._12_4_ = 0x38d1b717;
          auVar109 = NEON_fmax(auVar118,auVar13,4);
          auVar109 = NEON_frsqrte(auVar109,4);
          fVar78 = fVar78 * auVar109._0_4_;
          fVar83 = fVar83 * auVar109._4_4_;
          fVar108 = fVar108 * auVar109._8_4_;
          fVar121 = fVar121 * auVar109._12_4_;
          fVar79 = fVar78 * fVar79;
          fVar103 = fVar83 * fVar103;
          uVar122 = (undefined1)((uint)fVar103 >> 8);
          uVar123 = (undefined1)((uint)fVar103 >> 0x10);
          uVar124 = (undefined1)((uint)fVar103 >> 0x18);
          fVar20 = fVar108 * fVar20;
          uVar125 = (undefined1)((uint)fVar20 >> 8);
          uVar126 = (undefined1)((uint)fVar20 >> 0x10);
          uVar127 = (undefined1)((uint)fVar20 >> 0x18);
          fVar101 = fVar121 * fVar101;
          uVar128 = (undefined1)((uint)fVar101 >> 8);
          uVar129 = (undefined1)((uint)fVar101 >> 0x10);
          uVar130 = (undefined1)((uint)fVar101 >> 0x18);
          auVar111._0_4_ = fVar78 * fVar102;
          auVar111._4_4_ = fVar83 * fVar104;
          auVar111._8_4_ = fVar108 * fVar82;
          auVar111._12_4_ = fVar121 * fVar136;
          auVar18[4] = SUB41(fVar103,0);
          auVar18._0_4_ = fVar79;
          auVar18[5] = uVar122;
          auVar18[6] = uVar123;
          auVar18[7] = uVar124;
          auVar18[8] = SUB41(fVar20,0);
          auVar18[9] = uVar125;
          auVar18[10] = uVar126;
          auVar18[0xb] = uVar127;
          auVar18[0xc] = SUB41(fVar101,0);
          auVar18[0xd] = uVar128;
          auVar18[0xe] = uVar129;
          auVar18[0xf] = uVar130;
          auVar109 = NEON_ext(auVar111,auVar18,8,1);
          auVar19[4] = SUB41(fVar103,0);
          auVar19._0_4_ = fVar79;
          auVar19[5] = uVar122;
          auVar19[6] = uVar123;
          auVar19[7] = uVar124;
          auVar19[8] = SUB41(fVar20,0);
          auVar19[9] = uVar125;
          auVar19[10] = uVar126;
          auVar19[0xb] = uVar127;
          auVar19[0xc] = SUB41(fVar101,0);
          auVar19[0xd] = uVar128;
          auVar19[0xe] = uVar129;
          auVar19[0xf] = uVar130;
          auVar117 = NEON_ext(auVar19,auVar109,8,1);
          uVar122 = (undefined1)((uint)auVar111._0_4_ >> 0x18);
          auVar109 = NEON_ext(auVar115,auVar115,8,1);
          auVar132 = NEON_ext(auVar109,auVar115,8,1);
          auVar109 = NEON_ext(auVar115,auVar109,8,1);
          pfVar58[10] = auVar109._0_4_;
          pfVar58[0xb] = auVar109._8_4_;
          pfVar58[8] = auVar117._0_4_;
          pfVar58[9] = auVar117._8_4_;
          pfVar58[0xe] = auVar109._4_4_;
          pfVar58[0xf] = auVar109._12_4_;
          pfVar58[0xc] = auVar117._4_4_;
          pfVar58[0xd] = auVar117._12_4_;
          pfVar58[2] = auVar132._0_4_;
          pfVar58[3] = auVar132._8_4_;
          *pfVar58 = fVar79;
          pfVar58[1] = (float)(CONCAT14(uVar122,CONCAT13((char)((uint)auVar111._0_4_ >> 0x10),
                                                         CONCAT12((char)((uint)auVar111._0_4_ >> 8),
                                                                  CONCAT11(SUB41(auVar111._0_4_,0),
                                                                           uVar124)))) >> 8);
          pfVar58[6] = auVar132._4_4_;
          pfVar58[7] = auVar132._12_4_;
          pfVar58[4] = fVar103;
          pfVar58[5] = (float)(CONCAT14((char)((uint)auVar111._4_4_ >> 0x18),
                                        CONCAT13((char)((uint)auVar111._4_4_ >> 0x10),
                                                 CONCAT12((char)((uint)auVar111._4_4_ >> 8),
                                                          CONCAT11(SUB41(auVar111._4_4_,0),uVar122))
                                                )) >> 8);
          pfVar58 = pfVar58 + 0x10;
        } while (pfVar47 < pfVar33);
      }
    }
    uVar32 = (ulong)(uVar64 * uVar31);
    pfVar33 = pfVar62 + uVar32 * -4;
    uVar34 = 0;
    pfVar47 = pfVar33;
    do {
      pfVar58 = (float *)(&DAT_03d99b0c + uVar34 * 0xc + (ulong)(uVar31 - 1) * 0x54);
      fVar83 = *pfVar58;
      fVar79 = -fVar83;
      fVar107 = pfVar58[2];
      fVar78 = pfVar58[1];
      pfVar55 = pfVar47;
      pfVar58 = pfVar62;
      do {
        fVar103 = *pfVar58;
        pfVar7 = pfVar58 + 1;
        fVar108 = pfVar58[2];
        pfVar5 = pfVar58 + 4;
        pfVar24 = pfVar58 + 5;
        fVar20 = pfVar58[6];
        pfVar47 = pfVar58 + 8;
        pfVar25 = pfVar58 + 9;
        fVar121 = pfVar58[10];
        pfVar6 = pfVar58 + 0xc;
        fVar82 = (float)*(undefined8 *)(pfVar58 + 0xe);
        fVar101 = (float)*(undefined8 *)pfVar6;
        pfVar58 = pfVar58 + 0x10;
        fVar102 = fVar103 * fVar107 + fVar83 * fVar108;
        fVar104 = *pfVar5 * fVar107 + fVar83 * fVar20;
        fVar105 = *pfVar47 * fVar107 + fVar83 * fVar121;
        fVar106 = fVar101 * fVar107 + fVar83 * fVar82;
        auVar99._0_4_ = *pfVar7 + fVar78 * fVar108;
        auVar99._4_4_ = *pfVar24 + fVar78 * fVar20;
        auVar99._8_4_ = *pfVar25 + fVar78 * fVar121;
        auVar99._12_4_ = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20) + fVar78 * fVar82;
        auVar91._0_4_ = fVar103 * fVar79 + fVar107 * fVar108;
        auVar91._4_4_ = *pfVar5 * fVar79 + fVar107 * fVar20;
        auVar91._8_4_ = *pfVar47 * fVar79 + fVar107 * fVar121;
        auVar91._12_4_ = fVar101 * fVar79 + fVar107 * fVar82;
        auVar10._4_4_ = fVar104;
        auVar10._0_4_ = fVar102;
        auVar10._8_4_ = fVar105;
        auVar10._12_4_ = fVar106;
        auVar84 = NEON_ext(auVar99,auVar10,8,1);
        auVar11._4_4_ = fVar104;
        auVar11._0_4_ = fVar102;
        auVar11._8_4_ = fVar105;
        auVar11._12_4_ = fVar106;
        auVar74 = NEON_ext(auVar11,auVar84,8,1);
        auVar84 = NEON_ext(auVar91,auVar91,8,1);
        auVar109 = NEON_ext(auVar84,auVar91,8,1);
        auVar84 = NEON_ext(auVar91,auVar84,8,1);
        auVar100._0_8_ = CONCAT44(auVar74._8_4_,auVar74._0_4_);
        auVar100._8_4_ = auVar84._0_4_;
        auVar100._12_4_ = auVar84._8_4_;
        auVar96._0_8_ = CONCAT44(auVar99._4_4_,fVar104);
        auVar96._8_4_ = auVar109._4_4_;
        auVar96._12_4_ = auVar109._12_4_;
        *(long *)(pfVar55 + 10) = auVar100._8_8_;
        *(undefined8 *)(pfVar55 + 8) = auVar100._0_8_;
        pfVar55[0xe] = auVar84._4_4_;
        pfVar55[0xf] = auVar84._12_4_;
        pfVar55[0xc] = auVar74._4_4_;
        pfVar55[0xd] = auVar74._12_4_;
        auVar92._0_8_ = CONCAT44(auVar99._0_4_,fVar102);
        auVar92._8_4_ = auVar109._0_4_;
        auVar92._12_4_ = auVar109._8_4_;
        pfVar47 = pfVar55 + 0x10;
        *(long *)(pfVar55 + 2) = auVar92._8_8_;
        *(undefined8 *)pfVar55 = auVar92._0_8_;
        *(long *)(pfVar55 + 6) = auVar96._8_8_;
        *(undefined8 *)(pfVar55 + 4) = auVar96._0_8_;
        pfVar55 = pfVar47;
      } while (pfVar58 < pfVar62 + uVar52);
      uVar34 = uVar34 + 1;
    } while (uVar34 != uVar48);
    pfVar62 = (float *)((long)pfVar33 - (uVar32 * 0x10 + 0xf & 0x1ffffffff0));
    auVar73._8_8_ = uVar76;
    auVar73._0_8_ = param_2._0_8_;
    local_c8 = (long *)pfVar62;
    FUN_034d1c10(auVar73,pfVar33,uVar32,param_4);
  }
  uVar31 = uVar56 >> 8 & 0xf;
  iVar41 = (int)uVar67;
  if (uVar31 == 2) {
    local_f0 = param_8 & 0xff;
    cVar4 = (&DAT_03d984b4)[local_f0];
    lVar27 = (long)pfVar62 - (ulong)(((uint)(local_f0 + 3) & 0x1fc) << 2);
    uVar31 = (uint)local_d0 - 1;
    local_d8 = (ulong)(uint)(iVar41 << 2);
    uVar66 = param_7 & 0xffff;
    uVar56 = (uint)local_d0;
    if ((uint)local_d0 == 0 || uVar31 == 0) {
      uVar56 = 1;
    }
    local_b8 = (ulong)uVar56;
    if ((int)local_f0 == 0) {
      uVar48 = 0;
      iVar41 = 0;
      do {
        if ((*(uint *)(&DAT_03d984dc + uVar48 * 4 + (ulong)uVar31 * 0x20) & uVar66) != 0) {
          puVar63 = (undefined1 *)((long)local_c8 + (ulong)(uint)(iVar41 * (int)local_d8) * 4);
          puVar65 = puVar63 + local_d8 * 4;
          do {
            FUN_034ce9c0(cVar4 + 1,1,lVar27);
            puVar63 = puVar63 + 0x10;
          } while (puVar63 < puVar65);
          iVar41 = iVar41 + 1;
        }
        uVar48 = uVar48 + 1;
      } while (uVar48 != local_b8);
      return;
    }
    fVar107 = 1.0 / (float)uVar67;
    local_f8 = (undefined *)(local_f0 + 3 & 0x1fc);
    local_100 = (undefined *)(param_8 & 0xfe);
    local_108 = local_b0 + 2;
    local_e0 = &DAT_03d984dc + (ulong)uVar31 * 0x20;
    local_c0 = 0;
    iVar41 = 0;
    uVar48 = local_f0 - 1;
    local_e8 = CONCAT44(local_e8._4_4_,param_7) & 0xffffffff0000ffff;
    do {
      puVar60 = local_b0;
      if ((*(uint *)(local_e0 + local_c0 * 4) & uVar66) != 0) {
        lVar70 = (ulong)(*(uint *)(local_e0 + local_c0 * 4) >> 0x10) * (long)local_f8;
        puVar63 = (undefined1 *)((long)local_c8 + (ulong)(uint)(iVar41 * (int)local_d8) * 4);
        puVar65 = puVar63 + local_d8 * 4;
        pfVar62 = (float *)(local_108 + lVar70);
        local_d0 = (void *)CONCAT44(local_d0._4_4_,iVar41);
        do {
          FUN_034ce9c0(cVar4 + 1,1,lVar27);
          if (uVar48 < 3) {
            uVar67 = 0;
          }
          else {
            uVar67 = 0;
            pfVar47 = (float *)(lVar27 + 8);
            pfVar33 = pfVar62;
            do {
              uVar67 = uVar67 + 4;
              fVar78 = pfVar47[-1];
              pfVar33[-2] = pfVar33[-2] + pfVar47[-2];
              pfVar33[-1] = pfVar33[-1] + fVar78;
              fVar78 = *pfVar47;
              fVar79 = pfVar47[1];
              pfVar47 = pfVar47 + 4;
              *pfVar33 = *pfVar33 + fVar78;
              pfVar33[1] = pfVar33[1] + fVar79;
              pfVar33 = pfVar33 + 4;
            } while ((param_8 & 0xfc) != uVar67);
          }
          if ((param_8 & 3) != 0) {
            pfVar47 = (float *)(lVar27 + uVar67 * 4);
            pfVar33 = (float *)(puVar60 + lVar70 + uVar67);
            uVar67 = param_8 & 3;
            do {
              uVar67 = uVar67 - 1;
              *pfVar33 = *pfVar33 + *pfVar47;
              pfVar47 = pfVar47 + 1;
              pfVar33 = pfVar33 + 1;
            } while (uVar67 != 0);
          }
          puVar63 = puVar63 + 0x10;
        } while (puVar63 < puVar65);
        uVar67 = 0;
        if ((int)local_f0 != 1) {
          do {
            pfVar62 = (float *)(puVar60 + lVar70 + uVar67);
            uVar67 = uVar67 + 2;
            *pfVar62 = *pfVar62 * fVar77 * fVar107;
            pfVar62[1] = pfVar62[1] * fVar77 * fVar107;
          } while (local_100 != (undefined *)uVar67);
        }
        if ((local_f0 & 1) != 0) {
          puVar60[lVar70 + uVar67] = (float)puVar60[lVar70 + uVar67] * fVar77 * fVar107;
        }
        iVar41 = (uint)local_d0 + 1;
        uVar66 = (uint)local_e8;
      }
      local_c0 = local_c0 + 1;
    } while (local_c0 != local_b8);
    return;
  }
  if (uVar31 != 1) {
    return;
  }
  uVar31 = uVar56 & 0xffffbf00 | uVar56 - (uVar56 >> 0xe & 1) & 0xff;
  pMVar2 = (MutexType *)(param_9 + 200);
  if ((uVar56 >> 0xe & 1) == 0) {
    nn::os::LockMutex(pMVar2);
    uVar48 = local_c0;
    puVar43 = *(uint **)(param_9 + 0xb8);
    uVar56 = *(uint *)(param_9 + 0xc0);
    if ((uVar56 == 0) || (*puVar43 == uVar31)) {
      puVar49 = puVar43;
    }
    else {
      lVar27 = (ulong)uVar56 * 0x10;
      puVar53 = puVar43;
      do {
        lVar27 = lVar27 + -0x10;
        if (lVar27 == 0) goto LAB_034d10f0;
        puVar49 = puVar53 + 4;
        puVar1 = puVar53 + 4;
        puVar53 = puVar49;
      } while (*puVar1 != uVar31);
    }
    if (puVar49 == puVar43 + (ulong)uVar56 * 4) {
LAB_034d10f0:
      lVar27 = FUN_0349c8dc(param_9,uVar31);
      lVar70 = 0;
      local_b8 = uVar48;
    }
    else {
      lVar27 = *(long *)(puVar49 + 2);
      lVar70 = 0;
      local_b8 = local_c0;
    }
  }
  else if (param_1 == 1.0) {
    nn::os::LockMutex(pMVar2);
    puVar43 = *(uint **)(param_9 + 0xb8);
    uVar31 = *(uint *)(param_9 + 0xc0);
    if ((uVar31 == 0) || (*puVar43 == uVar56)) {
      puVar49 = puVar43;
    }
    else {
      lVar27 = (ulong)uVar31 * 0x10;
      puVar53 = puVar43;
      do {
        lVar27 = lVar27 + -0x10;
        if (lVar27 == 0) goto LAB_034d1144;
        puVar49 = puVar53 + 4;
        puVar1 = puVar53 + 4;
        puVar53 = puVar49;
      } while (*puVar1 != uVar56);
    }
    if (puVar49 == puVar43 + (ulong)uVar31 * 4) {
LAB_034d1144:
      lVar27 = FUN_0349c8dc(param_9,uVar56);
    }
    else {
      lVar27 = *(long *)(puVar49 + 2);
    }
    lVar70 = 0;
    local_b8 = local_c0;
  }
  else {
    nn::os::LockMutex(pMVar2);
    puVar43 = *(uint **)(param_9 + 0xb8);
    uVar64 = *(uint *)(param_9 + 0xc0);
    if ((uVar64 == 0) || (*puVar43 == uVar31)) {
      puVar49 = puVar43;
    }
    else {
      lVar27 = (ulong)uVar64 * 0x10;
      puVar53 = puVar43;
      do {
        lVar27 = lVar27 + -0x10;
        if (lVar27 == 0) goto LAB_034d191c;
        puVar49 = puVar53 + 4;
        puVar1 = puVar53 + 4;
        puVar53 = puVar49;
      } while (*puVar1 != uVar31);
    }
    if (puVar49 == puVar43 + (ulong)uVar64 * 4) {
LAB_034d191c:
      lVar27 = FUN_0349c8dc(param_9,uVar31);
    }
    else {
      lVar27 = *(long *)(puVar49 + 2);
    }
    nn::os::UnlockMutex(pMVar2);
    if (param_1 == 0.0) {
      lVar70 = 0;
      goto LAB_034d1168;
    }
    nn::os::LockMutex(pMVar2);
    puVar43 = *(uint **)(param_9 + 0xb8);
    uVar31 = *(uint *)(param_9 + 0xc0);
    if ((uVar31 == 0) || (*puVar43 == uVar56)) {
      puVar49 = puVar43;
    }
    else {
      lVar70 = (ulong)uVar31 * 0x10;
      puVar53 = puVar43;
      do {
        lVar70 = lVar70 + -0x10;
        if (lVar70 == 0) goto LAB_034d19a8;
        puVar49 = puVar53 + 4;
        puVar1 = puVar53 + 4;
        puVar53 = puVar49;
      } while (*puVar1 != uVar56);
    }
    if (puVar49 == puVar43 + (ulong)uVar31 * 4) {
LAB_034d19a8:
      lVar70 = FUN_0349c8dc(param_9,uVar56);
    }
    else {
      lVar70 = *(long *)(puVar49 + 2);
    }
  }
  nn::os::UnlockMutex(pMVar2);
LAB_034d1168:
  if (lVar27 != 0) {
    uVar56 = (int)local_c0 + 3U >> 2;
    local_128 = (ulong)uVar56;
    iVar54 = uVar56 * 0x10;
    iVar42 = (int)local_b8;
    if (lVar70 == 0) {
      local_e8 = CONCAT44(local_e8._4_4_,param_7) & 0xffffffff0000ffff;
      uVar48 = 0;
      local_108 = (undefined4 *)((ulong)((uVar66 & 0xff) + 3) & 0x1fc);
      local_110 = (ulong)(uint)(iVar41 << 2);
      local_e0 = (undefined *)(local_c0 & 7);
      local_118 = local_c0 - 1;
      local_138 = (undefined4 *)(local_128 * 0x10 - 1);
      local_150[2] = (ulong)(((uint)((ulong)local_138 >> 4) & 0xfffffff) + 1) & 3;
      local_100 = (undefined *)(ulong)(uint)((int)local_c0 - iVar42);
      uVar66 = (uint)local_d0;
      if ((uint)local_d0 == 0 || (uint)local_d0 - 1 == 0) {
        uVar66 = 1;
      }
      local_f0 = (ulong)uVar66;
      local_130 = local_b0 + 4;
      local_f8 = &DAT_03d984dc + (ulong)((uint)local_d0 - 1) * 0x20;
      iVar41 = 0;
      uVar52 = local_c0 & 0xf8;
      local_120 = local_c0 & 0xfe;
      local_150[1] = -local_150[2];
      uVar67 = local_c0;
      do {
        if (((uint)local_e8 & *(uint *)(local_f8 + uVar48 * 4)) != 0) {
          local_d8 = (ulong)(*(uint *)(local_f8 + uVar48 * 4) >> 0x10) * (long)local_108;
          pauVar28 = (undefined1 (*) [16])(local_b0 + local_d8);
          puVar63 = (undefined1 *)((long)local_c8 + (ulong)(uint)(iVar41 * (int)local_110) * 4);
          puVar65 = puVar63 + local_110 * 4;
          lVar70 = (long)local_100 + 2;
          local_d0 = (void *)CONCAT44(local_d0._4_4_,iVar41);
          do {
            pfVar62 = (float *)((long)pfVar62 - ((ulong)(iVar54 + 0xf) & 0xff0));
            FUN_034ea62c(lVar27,local_b8,pfVar62);
            fVar78 = *(float *)((long)*pauVar28 + 4);
            fVar107 = pfVar62[1];
            *(float *)*pauVar28 = *(float *)*pauVar28 + *pfVar62;
            *(float *)((long)*pauVar28 + 4) = fVar78 + fVar107;
            pfVar47 = pfVar62 + 2;
            pfVar33 = (float *)((long)*pauVar28 + lVar70 * 4);
            do {
              pfVar58 = pfVar33 + 1;
              *pfVar33 = *pfVar33 + *pfVar47;
              pfVar47 = pfVar47 + 1;
              pfVar33 = pfVar58;
            } while (pfVar58 < (float *)((long)*pauVar28 + uVar67 * 4));
            puVar63 = puVar63 + 0x10;
          } while (puVar63 < puVar65);
          if (local_118 < 7) {
            uVar67 = 0;
            fVar107 = 0.0;
          }
          else {
            fVar107 = 0.0;
            uVar67 = 0;
            pfVar47 = (float *)(local_130 + local_d8);
            do {
              pfVar33 = pfVar47 + -4;
              pfVar5 = pfVar47 + -3;
              pfVar58 = pfVar47 + -2;
              pfVar6 = pfVar47 + -1;
              fVar78 = *pfVar47;
              pfVar7 = pfVar47 + 1;
              pfVar55 = pfVar47 + 2;
              pfVar24 = pfVar47 + 3;
              pfVar47 = pfVar47 + 8;
              fVar107 = *pfVar33 + fVar107 + *pfVar5 + *pfVar58 + *pfVar6 + fVar78 + *pfVar7 +
                        *pfVar55 + *pfVar24;
              uVar67 = uVar67 + 8;
            } while (uVar52 != uVar67);
          }
          if (local_e0 != (undefined *)0x0) {
            pfVar47 = (float *)(local_b0 + uVar67 + local_d8);
            puVar68 = local_e0;
            do {
              fVar107 = *pfVar47 + fVar107;
              puVar68 = (undefined *)((long)puVar68 - 1);
              pfVar47 = pfVar47 + 1;
            } while (puVar68 != (undefined *)0x0);
          }
          if (0.0 < fVar107) {
            if ((int)local_c0 == 1) {
              uVar67 = 0;
            }
            else {
              uVar67 = 0;
              do {
                pfVar47 = (float *)((long)*pauVar28 + uVar67 * 4);
                uVar67 = uVar67 + 2;
                *pfVar47 = *pfVar47 * fVar77 * (1.0 / fVar107);
                pfVar47[1] = pfVar47[1] * fVar77 * (1.0 / fVar107);
              } while (local_120 != uVar67);
            }
            if ((local_c0 & 1) != 0) {
              *(float *)((long)*pauVar28 + uVar67 * 4) =
                   (*(float *)((long)*pauVar28 + uVar67 * 4) * fVar77) / fVar107;
            }
            pauVar40 = pauVar28 + local_128;
            if (pauVar28 < pauVar40) {
              if (local_150[2] != 0) {
                lVar70 = local_150[1];
                pauVar35 = pauVar28;
                do {
                  auVar84 = NEON_frsqrte(*pauVar35,4);
                  auVar84 = NEON_frecpe(auVar84,4);
                  bVar26 = lVar70 != -1;
                  lVar70 = lVar70 + 1;
                  pauVar28 = pauVar35 + 1;
                  *(long *)((long)*pauVar35 + 8) = auVar84._8_8_;
                  *(long *)*pauVar35 = auVar84._0_8_;
                  pauVar35 = pauVar28;
                } while (bVar26);
              }
              if (0x2f < local_138) {
                do {
                  auVar74 = NEON_frsqrte(pauVar28[1],4);
                  auVar84 = NEON_frsqrte(*pauVar28,4);
                  auVar74 = NEON_frecpe(auVar74,4);
                  auVar84 = NEON_frecpe(auVar84,4);
                  *(long *)((long)*pauVar28 + 8) = auVar84._8_8_;
                  *(long *)*pauVar28 = auVar84._0_8_;
                  *(long *)((long)pauVar28[1] + 8) = auVar74._8_8_;
                  *(long *)pauVar28[1] = auVar74._0_8_;
                  auVar84 = NEON_frsqrte(pauVar28[2],4);
                  auVar74 = NEON_frecpe(auVar84,4);
                  auVar84 = NEON_frsqrte(pauVar28[3],4);
                  auVar84 = NEON_frecpe(auVar84,4);
                  *(long *)((long)pauVar28[2] + 8) = auVar74._8_8_;
                  *(long *)pauVar28[2] = auVar74._0_8_;
                  *(long *)((long)pauVar28[3] + 8) = auVar84._8_8_;
                  *(long *)pauVar28[3] = auVar84._0_8_;
                  pauVar28 = pauVar28 + 4;
                } while (pauVar28 < pauVar40);
              }
            }
          }
          iVar41 = (uint)local_d0 + 1;
          uVar67 = local_c0;
        }
        uVar48 = uVar48 + 1;
      } while (uVar48 != local_f0);
    }
    else {
      local_f0 = CONCAT44(local_f0._4_4_,param_7) & 0xffffffff0000ffff;
      local_108 = (undefined4 *)((ulong)((uVar66 & 0xff) + 3) & 0x1fc);
      local_110 = (ulong)(uint)(iVar41 << 2);
      fVar107 = 1.0 - param_1;
      local_118 = local_c0 - 1;
      local_e8 = local_c0 & 7;
      local_150[2] = local_128 * 0x10 - 1;
      uVar66 = (uint)local_d0 - 1;
      if ((uint)local_d0 == 0 || uVar66 == 0) {
        local_d0._0_4_ = 1;
      }
      local_f8 = (undefined *)(ulong)(uint)local_d0;
      local_150[1] = (ulong)(((uint)((ulong)local_150[2] >> 4) & 0xfffffff) + 1) & 3;
      local_100 = &DAT_03d984dc + (ulong)uVar66 * 0x20;
      local_d0 = (void *)0x0;
      iVar41 = 0;
      local_130 = (undefined4 *)(local_c0 & 0xf8);
      local_120 = local_c0 & 0xfe;
      local_138 = local_b0 + 4;
      local_150[0] = -local_150[1];
      uVar48 = local_c0;
      do {
        if (((uint)local_f0 & *(uint *)(local_100 + (long)local_d0 * 4)) != 0) {
          local_e0 = (undefined *)
                     ((ulong)(*(uint *)(local_100 + (long)local_d0 * 4) >> 0x10) * (long)local_108);
          pauVar28 = (undefined1 (*) [16])(local_b0 + (long)local_e0);
          pfVar47 = (float *)((long)local_c8 + (ulong)(uint)(iVar41 * (int)local_110) * 4);
          pfVar33 = pfVar47 + local_110;
          local_d8 = CONCAT44(local_d8._4_4_,iVar41);
          do {
            fVar108 = pfVar47[2];
            pfVar62 = (float *)((long)pfVar62 -
                               ((ulong)(iVar42 * 4 + 0xcU & 0xfffffff0) + 0xf & 0x1fffffff0));
            fVar78 = *pfVar47;
            fVar103 = pfVar47[1];
            FUN_034ea62c(fVar108,-fVar78,fVar103,lVar27,local_b8,pfVar62);
            fVar83 = *(float *)((long)*pauVar28 + 4);
            fVar79 = pfVar62[1];
            *(float *)*pauVar28 = *(float *)*pauVar28 + fVar107 * *pfVar62;
            *(float *)((long)*pauVar28 + 4) = fVar83 + fVar107 * fVar79;
            pfVar58 = pfVar62 + 2;
            pauVar40 = (undefined1 (*) [16])((long)*pauVar28 + 0xc);
            do {
              puVar60 = (undefined4 *)*pauVar40;
              *(float *)*pauVar40 = *(float *)*pauVar40 + fVar107 * *pfVar58;
              pfVar58 = pfVar58 + 1;
              pauVar40 = (undefined1 (*) [16])(puVar60 + 1);
            } while ((undefined1 (*) [16])(puVar60 + 1) <
                     (undefined1 (*) [16])((long)*pauVar28 + uVar48 * 4));
            pfVar62 = (float *)((long)pfVar62 - ((ulong)(iVar54 + 0xf) & 0xff0));
            FUN_034ea62c(fVar108,-fVar78,fVar103,lVar70,local_c0,pfVar62);
            pauVar40 = pauVar28;
            pfVar58 = pfVar62;
            do {
              puVar60 = (undefined4 *)*pauVar40;
              *(float *)*pauVar40 = *(float *)*pauVar40 + param_1 * *pfVar58;
              pauVar40 = (undefined1 (*) [16])(puVar60 + 1);
              pfVar58 = pfVar58 + 1;
            } while ((undefined1 (*) [16])(puVar60 + 1) <
                     (undefined1 (*) [16])((long)*pauVar28 + uVar48 * 4));
            pfVar47 = pfVar47 + 4;
          } while (pfVar47 < pfVar33);
          if (local_118 < 7) {
            uVar48 = 0;
            fVar78 = 0.0;
          }
          else {
            fVar78 = 0.0;
            pfVar47 = (float *)(local_138 + (long)local_e0);
            uVar48 = 0;
            do {
              pfVar33 = pfVar47 + -4;
              pfVar5 = pfVar47 + -3;
              pfVar58 = pfVar47 + -2;
              pfVar6 = pfVar47 + -1;
              fVar79 = *pfVar47;
              pfVar7 = pfVar47 + 1;
              pfVar55 = pfVar47 + 2;
              pfVar24 = pfVar47 + 3;
              pfVar47 = pfVar47 + 8;
              fVar78 = *pfVar33 + fVar78 + *pfVar5 + *pfVar58 + *pfVar6 + fVar79 + *pfVar7 +
                       *pfVar55 + *pfVar24;
              uVar48 = uVar48 + 8;
            } while (local_130 != (undefined4 *)uVar48);
          }
          if (local_e8 != 0) {
            pfVar47 = (float *)(local_b0 + uVar48 + (long)local_e0);
            uVar48 = local_e8;
            do {
              fVar78 = *pfVar47 + fVar78;
              uVar48 = uVar48 - 1;
              pfVar47 = pfVar47 + 1;
            } while (uVar48 != 0);
          }
          if (0.0 < fVar78) {
            if ((int)local_c0 == 1) {
              uVar48 = 0;
            }
            else {
              uVar48 = 0;
              do {
                pfVar47 = (float *)((long)*pauVar28 + uVar48 * 4);
                uVar48 = uVar48 + 2;
                *pfVar47 = *pfVar47 * fVar77 * (1.0 / fVar78);
                pfVar47[1] = pfVar47[1] * fVar77 * (1.0 / fVar78);
              } while (local_120 != uVar48);
            }
            if ((local_c0 & 1) != 0) {
              *(float *)((long)*pauVar28 + uVar48 * 4) =
                   (*(float *)((long)*pauVar28 + uVar48 * 4) * fVar77) / fVar78;
            }
            pauVar40 = pauVar28 + local_128;
            if (pauVar28 < pauVar40) {
              if (local_150[1] != 0) {
                lVar36 = local_150[0];
                pauVar35 = pauVar28;
                do {
                  auVar84 = NEON_frsqrte(*pauVar35,4);
                  auVar84 = NEON_frecpe(auVar84,4);
                  bVar26 = lVar36 != -1;
                  lVar36 = lVar36 + 1;
                  pauVar28 = pauVar35 + 1;
                  *(long *)((long)*pauVar35 + 8) = auVar84._8_8_;
                  *(long *)*pauVar35 = auVar84._0_8_;
                  pauVar35 = pauVar28;
                } while (bVar26);
              }
              if (0x2f < (ulong)local_150[2]) {
                do {
                  auVar74 = NEON_frsqrte(pauVar28[1],4);
                  auVar84 = NEON_frsqrte(*pauVar28,4);
                  auVar74 = NEON_frecpe(auVar74,4);
                  auVar84 = NEON_frecpe(auVar84,4);
                  *(long *)((long)*pauVar28 + 8) = auVar84._8_8_;
                  *(long *)*pauVar28 = auVar84._0_8_;
                  *(long *)((long)pauVar28[1] + 8) = auVar74._8_8_;
                  *(long *)pauVar28[1] = auVar74._0_8_;
                  auVar84 = NEON_frsqrte(pauVar28[2],4);
                  auVar74 = NEON_frecpe(auVar84,4);
                  auVar84 = NEON_frsqrte(pauVar28[3],4);
                  auVar84 = NEON_frecpe(auVar84,4);
                  *(long *)((long)pauVar28[2] + 8) = auVar74._8_8_;
                  *(long *)pauVar28[2] = auVar74._0_8_;
                  *(long *)((long)pauVar28[3] + 8) = auVar84._8_8_;
                  *(long *)pauVar28[3] = auVar84._0_8_;
                  pauVar28 = pauVar28 + 4;
                } while (pauVar28 < pauVar40);
              }
            }
          }
          iVar41 = (int)local_d8 + 1;
          uVar48 = local_c0;
        }
        local_d0 = (void *)((long)local_d0 + 1);
      } while (local_d0 != local_f8);
    }
  }
  return;
}


