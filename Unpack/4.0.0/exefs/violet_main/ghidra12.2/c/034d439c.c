/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034d439c; name: FUN_034d439c
 */


void FUN_034d439c(ulong param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  void *pvVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  char cVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  bool bVar14;
  undefined4 *puVar15;
  ulong uVar16;
  void *pvVar17;
  undefined4 *puVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  float *pfVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  uint *puVar31;
  undefined **ppuVar32;
  float *pfVar33;
  int *piVar34;
  ulong *puVar35;
  uint *puVar36;
  ulong uVar37;
  size_t sVar38;
  uint uVar39;
  undefined *puVar40;
  ulong uVar41;
  uint uVar42;
  int iVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  int iVar47;
  long lVar48;
  uint *puVar49;
  undefined4 *puVar50;
  uint uVar51;
  undefined4 *puVar52;
  ulong uVar53;
  ulong uVar54;
  uint uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  uint uVar59;
  ulong uVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  long lVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  float fVar69;
  undefined1 auVar70 [16];
  float fVar71;
  undefined1 auVar72 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  ulong local_120;
  long local_118;
  long local_110;
  ulong local_108;
  size_t local_100;
  undefined8 *local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  long local_d8;
  uint local_cc;
  long local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  
  uVar59 = (uint)param_2;
  uVar7 = uVar59 - (uVar59 >> 0xf & 1);
  uVar39 = uVar7 & 0xff;
  uVar64 = (ulong)uVar39;
  if (uVar39 - 1 == 0) {
    *(undefined4 *)param_3 = 0x3f800000;
    return;
  }
  if (((uVar59 & 0xffff7f00) >> 0xc | 4) == 7) {
    *param_3 = 0x3f0000003f000000;
    if ((param_1 & 0xfe) == 0) {
      return;
    }
    *(undefined8 *)((long)param_3 + ((ulong)((uVar59 & 0xff) + 3) & 0x1fc) * 4) = 0xbf0000003f000000
    ;
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (uVar39 == 0) {
    return;
  }
  puVar36 = *(uint **)(param_4 + 0x90);
  uVar42 = *(uint *)(param_4 + 0x98);
  puVar31 = puVar36;
  if (uVar42 == 0) {
LAB_034d44ac:
    if (puVar31 != puVar36 + (ulong)uVar42 * 4) {
      puVar35 = (ulong *)(puVar31 + 2);
      uVar39 = (uint)param_1 & 0xff;
      goto LAB_034d5350;
    }
  }
  else {
    lVar48 = (ulong)uVar42 << 4;
    do {
      if ((*puVar31 == (uint)param_1) && (puVar31[1] == uVar59)) goto LAB_034d44ac;
      lVar48 = lVar48 + -0x10;
      puVar31 = puVar31 + 4;
    } while (lVar48 != 0);
  }
  uVar61 = param_1 & 0xff;
  cVar6 = (&DAT_03d984b4)[uVar61];
  uVar66 = (ulong)cVar6;
  local_c8 = param_4;
  local_b8 = uVar61;
  if ((uVar59 & 0xf00) == 0x100) {
    uVar42 = uVar59 & 0xffff7f00 | uVar7 & 0xff;
    nn::os::LockMutex((MutexType *)(param_4 + 200));
    puVar31 = *(uint **)(param_4 + 0xb8);
    uVar55 = *(uint *)(param_4 + 0xc0);
    if ((uVar55 == 0) || (*puVar31 == uVar42)) {
      puVar36 = puVar31;
    }
    else {
      lVar48 = (ulong)uVar55 * 0x10;
      puVar49 = puVar31;
      do {
        lVar48 = lVar48 + -0x10;
        if (lVar48 == 0) goto LAB_034d4670;
        puVar36 = puVar49 + 4;
        puVar2 = puVar49 + 4;
        puVar49 = puVar36;
      } while (*puVar2 != uVar42);
    }
    if (puVar36 == puVar31 + (ulong)uVar55 * 4) {
LAB_034d4670:
      local_110 = FUN_0349c8dc(local_c8,uVar42);
    }
    else {
      local_110 = *(long *)(puVar36 + 2);
    }
    nn::os::UnlockMutex((MutexType *)(param_4 + 200));
    if (local_110 == 0) {
      return;
    }
    uVar42 = (int)cVar6 + 2;
    lVar48 = (long)(int)cVar6;
    local_f8 = param_3;
    local_e0 = param_1;
    local_d8 = param_2;
    local_108 = (ulong)(uVar42 * uVar42);
    if ((uVar59 & 0xff9c0f00) == 0x100) {
      local_a0 = (ulong)uVar42;
      uVar7 = *(uint *)(&DAT_03d98f30 + lVar48 * 4);
      uVar42 = uVar39 + 3 >> 2;
      pvVar17 = (void *)((long)&local_120 - (ulong)(uVar42 * uVar7 * 0x10));
      uVar59 = uVar39 + 3 & 0x1fc;
      uVar55 = uVar7 * uVar59;
      if (uVar55 != 0) {
        memset(pvVar17,0,(ulong)uVar55 << 2);
      }
      fVar75 = (1.0 / (float)uVar7) * 6.2831855;
      uVar64 = (ulong)uVar42 * 0x10 - 1;
      puVar40 = (&PTR_DAT_047c5340)[lVar48];
      uVar55 = ((uint)(uVar64 >> 4) & 0xfffffff) + 1;
      uVar51 = uVar39 + 2;
      if (3 < uVar39) {
        uVar51 = uVar39;
      }
      uVar61 = 0;
      uVar5 = uVar7;
      if (uVar7 < 2) {
        uVar5 = 1;
      }
      pfVar33 = (float *)(local_110 + 8);
      do {
        fVar69 = *(float *)(puVar40 + uVar61 * 0x10);
        fVar71 = *(float *)((long)(puVar40 + uVar61 * 0x10) + 8);
        uVar22 = 1;
        puVar31 = (uint *)(&DAT_03d984dc + (ulong)(uVar39 - 1) * 0x20);
        pfVar25 = pfVar33;
        do {
          puVar36 = puVar31;
          pfVar8 = pfVar25 + -1;
          pfVar9 = pfVar25 + 1;
          fVar73 = pfVar25[-2] * fVar69;
          fVar74 = *pfVar25 * fVar69;
          if (uVar51 <= uVar22) break;
          pfVar25 = pfVar25 + 4;
          uVar22 = uVar22 + 1;
          puVar31 = puVar36 + 1;
        } while (fVar73 < -(*pfVar8 * fVar71) || fVar74 < -(*pfVar9 * fVar71));
        uVar22 = (ulong)(*puVar36 >> 0xe) & 0x3fffc;
        fVar69 = fVar73 + 1.1920929e-07 + *pfVar8 * fVar71;
        fVar71 = fVar74 + 1.1920929e-07 + *pfVar9 * fVar71;
        fVar69 = fVar69 * fVar69;
        fVar71 = fVar71 * fVar71;
        fVar73 = (1.0 / (float)uVar7) / (fVar71 + fVar69);
        pauVar27 = (undefined1 (*) [16])((long)pvVar17 + (ulong)(uVar59 * (int)uVar61) * 4);
        uVar23 = (ulong)(puVar36[1] >> 0xe) & 0x3fffc;
        *(float *)(*pauVar27 + uVar22) = *(float *)(*pauVar27 + uVar22) + fVar69 * fVar73;
        pauVar4 = pauVar27 + uVar42;
        *(float *)(*pauVar27 + uVar23) = *(float *)(*pauVar27 + uVar23) + fVar71 * fVar73;
        if (pauVar27 < pauVar4) {
          if ((uVar55 & 3) != 0) {
            lVar65 = -((ulong)uVar55 & 3);
            pauVar26 = pauVar27;
            do {
              auVar70 = NEON_frsqrte(*pauVar26,4);
              auVar70 = NEON_frecpe(auVar70,4);
              bVar14 = lVar65 != -1;
              lVar65 = lVar65 + 1;
              pauVar27 = pauVar26 + 1;
              *(long *)(*pauVar26 + 8) = auVar70._8_8_;
              *(long *)*pauVar26 = auVar70._0_8_;
              pauVar26 = pauVar27;
            } while (bVar14);
          }
          if (0x2f < uVar64) {
            do {
              auVar72 = NEON_frsqrte(pauVar27[1],4);
              auVar70 = NEON_frsqrte(*pauVar27,4);
              auVar72 = NEON_frecpe(auVar72,4);
              auVar70 = NEON_frecpe(auVar70,4);
              *(long *)(*pauVar27 + 8) = auVar70._8_8_;
              *(long *)*pauVar27 = auVar70._0_8_;
              *(long *)(pauVar27[1] + 8) = auVar72._8_8_;
              *(long *)pauVar27[1] = auVar72._0_8_;
              auVar70 = NEON_frsqrte(pauVar27[2],4);
              auVar72 = NEON_frecpe(auVar70,4);
              auVar70 = NEON_frsqrte(pauVar27[3],4);
              auVar70 = NEON_frecpe(auVar70,4);
              *(long *)(pauVar27[2] + 8) = auVar72._8_8_;
              *(long *)pauVar27[2] = auVar72._0_8_;
              *(long *)(pauVar27[3] + 8) = auVar70._8_8_;
              *(long *)pauVar27[3] = auVar70._0_8_;
              pauVar27 = pauVar27 + 4;
            } while (pauVar27 < pauVar4);
          }
        }
        uVar61 = uVar61 + 1;
      } while (uVar61 != uVar5);
      uVar64 = (long)(int)cVar6 + 1;
      lVar65 = (&DAT_048b0498)[uVar64];
      ppuVar32 = &PTR_DAT_047c5368;
      local_cc = uVar7;
      local_90 = pvVar17;
      if (((0x1002010bfeU >> (local_b8 & 0x3f) & 1) == 0) || (lVar65 != 0)) {
        uVar59 = (uint)local_d8;
        goto LAB_034d4f1c;
      }
      uVar59 = *(uint *)(&DAT_03d98f30 + (uVar66 & 0xffffffff) * 4);
      uVar61 = (ulong)uVar59;
      local_118 = lVar48;
      lVar65 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)(uVar59 * (int)local_108) << 2);
      if (lVar65 == 0) {
        ppuVar32 = &PTR_DAT_047c5368;
        goto LAB_034d4f08;
      }
      uVar7 = uVar59;
      if (uVar59 < 2) {
        uVar7 = 1;
      }
      uVar66 = (ulong)uVar7;
      lVar48 = 0;
      do {
        FUN_034ce9c0(uVar64 & 0xffffffff,uVar59,lVar65 + lVar48);
        lVar48 = lVar48 + 4;
      } while (uVar66 * 4 != lVar48);
      local_a8 = uVar66 & 3;
      local_b0 = (ulong)(uVar59 << 1);
      iVar30 = 0;
      uVar37 = 0;
      uVar41 = uVar66 - 1;
      uVar22 = (ulong)(uVar59 + 6);
      uVar23 = (ulong)(uVar59 + 5);
      uVar53 = (ulong)(uVar59 + 4);
      uVar68 = (ulong)(uVar59 + 3);
      uVar19 = (ulong)(uVar59 + 2);
      uVar24 = (ulong)(uVar59 + 1);
      uVar28 = (ulong)(uVar59 + 7);
      iVar47 = 2;
      uVar46 = 0;
      uVar29 = uVar61;
      uVar62 = uVar61;
      do {
        local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar47);
        fVar69 = (float)(&DAT_03d99e20)[uVar46] * (float)(&DAT_03d98488)[uVar46] *
                 (float)(&DAT_03d99e20)[uVar46] * (float)(&DAT_03d98488)[uVar46];
        if (uVar41 < 3) {
          uVar44 = 0;
        }
        else {
          uVar44 = 0;
          uVar54 = uVar37;
          do {
            iVar43 = (int)uVar54;
            *(float *)(lVar65 + uVar54 * 4) = *(float *)(lVar65 + uVar54 * 4) * fVar69;
            *(float *)(lVar65 + (ulong)(iVar43 + 1U) * 4) =
                 *(float *)(lVar65 + (ulong)(iVar43 + 1U) * 4) * fVar69;
            *(float *)(lVar65 + (ulong)(iVar43 + 2U) * 4) =
                 *(float *)(lVar65 + (ulong)(iVar43 + 2U) * 4) * fVar69;
            uVar54 = (ulong)(iVar43 + 4);
            uVar44 = uVar44 + 4;
            *(float *)(lVar65 + (ulong)(iVar43 + 3U) * 4) =
                 *(float *)(lVar65 + (ulong)(iVar43 + 3U) * 4) * fVar69;
          } while ((uVar66 & 0xfffffffc) != uVar44);
        }
        if ((uVar7 & 3) != 0) {
          uVar42 = (int)uVar37 + (int)uVar44;
          uVar44 = local_a8;
          do {
            uVar44 = uVar44 - 1;
            *(float *)(lVar65 + (ulong)uVar42 * 4) = *(float *)(lVar65 + (ulong)uVar42 * 4) * fVar69
            ;
            uVar42 = uVar42 + 1;
          } while (uVar44 != 0);
        }
        uVar57 = (ulong)(1 - (int)uVar46);
        uVar16 = uVar68;
        uVar44 = uVar22;
        uVar54 = uVar23;
        uVar56 = uVar53;
        uVar58 = uVar29;
        uVar60 = uVar28;
        uVar63 = uVar24;
        uVar67 = uVar19;
        if ((long)(1 - uVar46) < (long)uVar46) {
          do {
            if (uVar41 < 7) {
              uVar45 = 0;
            }
            else {
              uVar45 = 0;
              do {
                iVar43 = (int)uVar45;
                *(undefined4 *)(lVar65 + (ulong)(uint)((int)uVar58 + iVar43) * 4) = 0;
                *(undefined4 *)(lVar65 + (ulong)(uint)((int)uVar63 + iVar43) * 4) = 0;
                *(undefined4 *)(lVar65 + (ulong)(uint)((int)uVar67 + iVar43) * 4) = 0;
                *(undefined4 *)(lVar65 + (ulong)(uint)((int)uVar16 + iVar43) * 4) = 0;
                *(undefined4 *)(lVar65 + (ulong)(uint)((int)uVar56 + iVar43) * 4) = 0;
                *(undefined4 *)(lVar65 + (ulong)(uint)((int)uVar54 + iVar43) * 4) = 0;
                *(undefined4 *)(lVar65 + (ulong)(uint)((int)uVar44 + iVar43) * 4) = 0;
                uVar45 = uVar45 + 8;
                *(undefined4 *)(lVar65 + (ulong)(uint)((int)uVar60 + iVar43) * 4) = 0;
              } while ((uVar66 & 0xfffffff8) != uVar45);
            }
            if ((uVar7 & 7) != 0) {
              uVar42 = (int)uVar58 + (int)uVar45;
              uVar45 = uVar66 & 7;
              do {
                *(undefined4 *)(lVar65 + (ulong)uVar42 * 4) = 0;
                uVar45 = uVar45 - 1;
                uVar42 = uVar42 + 1;
              } while (uVar45 != 0);
            }
            uVar57 = (ulong)((int)uVar57 + 1);
            uVar44 = uVar44 + uVar61;
            uVar54 = uVar54 + uVar61;
            uVar56 = uVar56 + uVar61;
            uVar16 = uVar16 + uVar61;
            uVar67 = uVar67 + uVar61;
            uVar63 = uVar63 + uVar61;
            uVar60 = uVar60 + uVar61;
            uVar58 = uVar58 + uVar61;
          } while (uVar46 != uVar57);
        }
        uVar44 = uVar46 + 1;
        if (uVar46 == uVar57) {
          if (uVar41 < 3) {
            uVar46 = 0;
          }
          else {
            uVar46 = 0;
            do {
              uVar54 = uVar59 * ((int)uVar57 + iVar30) + uVar46;
              uVar46 = uVar46 + 4;
              *(float *)(lVar65 + (uVar54 & 0xffffffff) * 4) =
                   *(float *)(lVar65 + (uVar54 & 0xffffffff) * 4) * fVar69;
              iVar43 = (int)uVar54;
              *(float *)(lVar65 + (ulong)(iVar43 + 1U) * 4) =
                   *(float *)(lVar65 + (ulong)(iVar43 + 1U) * 4) * fVar69;
              *(float *)(lVar65 + (ulong)(iVar43 + 2U) * 4) =
                   *(float *)(lVar65 + (ulong)(iVar43 + 2U) * 4) * fVar69;
              *(float *)(lVar65 + (ulong)(iVar43 + 3U) * 4) =
                   *(float *)(lVar65 + (ulong)(iVar43 + 3U) * 4) * fVar69;
            } while ((uVar66 & 0xfffffffc) != uVar46);
          }
          if ((uVar7 & 3) != 0) {
            uVar42 = (int)uVar46 + uVar59 * ((int)uVar57 + iVar30);
            uVar46 = local_a8;
            do {
              uVar46 = uVar46 - 1;
              *(float *)(lVar65 + (ulong)uVar42 * 4) =
                   *(float *)(lVar65 + (ulong)uVar42 * 4) * fVar69;
              uVar42 = uVar42 + 1;
            } while (uVar46 != 0);
          }
        }
        uVar37 = (ulong)(uint)((int)uVar37 + (int)uVar62);
        uVar22 = uVar22 + uVar62;
        uVar23 = uVar23 + uVar62;
        uVar53 = uVar53 + uVar62;
        uVar68 = uVar68 + uVar62;
        uVar19 = uVar19 + uVar62;
        uVar24 = uVar24 + uVar62;
        uVar28 = uVar28 + uVar62;
        uVar29 = uVar29 + uVar62;
        uVar62 = uVar62 + local_b0;
        iVar30 = iVar30 + iVar47;
        iVar47 = iVar47 + 2;
        uVar46 = uVar44;
      } while (uVar44 != local_a0);
      (&DAT_048b0498)[uVar64] = lVar65;
      uVar59 = (uint)local_d8;
      ppuVar32 = &PTR_DAT_047c5368;
      lVar48 = local_118;
      param_3 = local_f8;
      local_c0 = uVar64;
    }
    else {
      uVar42 = *(uint *)(&DAT_03d984a0 + lVar48 * 4);
      fVar69 = 1.0 / (float)uVar42;
      uVar55 = uVar39 + 3 >> 2;
      local_90 = (void *)((long)&local_120 - (ulong)(uVar55 * uVar42 * 0x10));
      uVar59 = uVar39 + 3 & 0x1fc;
      local_120 = uVar66;
      if (uVar42 * uVar59 != 0) {
        memset(local_90,0,(ulong)(uVar42 * uVar59) << 2);
      }
      lVar65 = local_110;
      fVar75 = fVar69 * 12.566371;
      local_98 = (&PTR_DAT_047c5318)[lVar48];
      uVar51 = uVar42;
      if (uVar42 < 2) {
        uVar51 = 1;
      }
      local_a0 = (ulong)uVar51;
      local_e8 = (ulong)uVar55 * 0x10 - 1;
      local_a8 = uVar64 - 1;
      local_b0 = -(uVar64 & 7);
      local_f0 = (ulong)(((uint)(local_e8 >> 4) & 0xfffffff) + 1) & 3;
      uVar66 = 0;
      uVar61 = 0;
      local_c0 = (long)local_90 + 0x10;
      local_100 = -local_f0;
      pvVar17 = local_90;
      local_118 = lVar48;
      local_cc = uVar42;
      do {
        pauVar27 = (undefined1 (*) [16])((long)pvVar17 + (ulong)(uVar59 * (int)uVar61) * 4);
        FUN_034ea62c(lVar65,uVar39,pauVar27);
        pvVar17 = local_90;
        if (local_a8 < 7) {
          uVar22 = 0;
          fVar71 = 0.0;
        }
        else {
          fVar71 = 0.0;
          pfVar33 = (float *)(local_c0 + uVar66 * 4);
          uVar22 = 0;
          do {
            pfVar25 = pfVar33 + -4;
            pfVar10 = pfVar33 + -3;
            pfVar8 = pfVar33 + -2;
            pfVar11 = pfVar33 + -1;
            fVar73 = *pfVar33;
            pfVar12 = pfVar33 + 1;
            pfVar9 = pfVar33 + 2;
            pfVar13 = pfVar33 + 3;
            pfVar33 = pfVar33 + 8;
            fVar71 = *pfVar25 + fVar71 + *pfVar10 + *pfVar8 + *pfVar11 + fVar73 + *pfVar12 +
                     *pfVar9 + *pfVar13;
            uVar22 = uVar22 + 8;
          } while ((uVar64 & 0xf8) != uVar22);
        }
        if ((uVar7 & 7) != 0) {
          pfVar33 = (float *)((long)local_90 + uVar66 * 4 + uVar22 * 4);
          uVar22 = local_b0;
          do {
            fVar71 = *pfVar33 + fVar71;
            bVar14 = uVar22 != 0xffffffffffffffff;
            uVar22 = uVar22 + 1;
            pfVar33 = pfVar33 + 1;
          } while (bVar14);
        }
        if (0.0 < fVar71) {
          if (uVar39 == 1) {
            uVar22 = 0;
          }
          else {
            uVar22 = 0;
            do {
              pfVar33 = (float *)((long)local_90 + uVar22 * 4 + uVar66 * 4);
              uVar22 = uVar22 + 2;
              *pfVar33 = *pfVar33 * fVar69 * (1.0 / fVar71);
              pfVar33[1] = pfVar33[1] * fVar69 * (1.0 / fVar71);
            } while ((uVar64 & 0xfe) != uVar22);
          }
          if ((uVar7 & 1) != 0) {
            *(float *)(*pauVar27 + uVar22 * 4) =
                 (*(float *)(*pauVar27 + uVar22 * 4) * fVar69) / fVar71;
          }
          pauVar4 = pauVar27 + uVar55;
          if (pauVar27 < pauVar4) {
            if (local_f0 != 0) {
              sVar38 = local_100;
              pauVar26 = pauVar27;
              do {
                auVar70 = NEON_frsqrte(*pauVar26,4);
                auVar70 = NEON_frecpe(auVar70,4);
                bVar14 = sVar38 != 0xffffffffffffffff;
                sVar38 = sVar38 + 1;
                pauVar27 = pauVar26 + 1;
                *(long *)(*pauVar26 + 8) = auVar70._8_8_;
                *(long *)*pauVar26 = auVar70._0_8_;
                pauVar26 = pauVar27;
              } while (bVar14);
            }
            if (0x2f < local_e8) {
              do {
                auVar72 = NEON_frsqrte(pauVar27[1],4);
                auVar70 = NEON_frsqrte(*pauVar27,4);
                auVar72 = NEON_frecpe(auVar72,4);
                auVar70 = NEON_frecpe(auVar70,4);
                *(long *)(*pauVar27 + 8) = auVar70._8_8_;
                *(long *)*pauVar27 = auVar70._0_8_;
                *(long *)(pauVar27[1] + 8) = auVar72._8_8_;
                *(long *)pauVar27[1] = auVar72._0_8_;
                auVar70 = NEON_frsqrte(pauVar27[2],4);
                auVar72 = NEON_frecpe(auVar70,4);
                auVar70 = NEON_frsqrte(pauVar27[3],4);
                auVar70 = NEON_frecpe(auVar70,4);
                *(long *)(pauVar27[2] + 8) = auVar72._8_8_;
                *(long *)pauVar27[2] = auVar72._0_8_;
                *(long *)(pauVar27[3] + 8) = auVar70._8_8_;
                *(long *)pauVar27[3] = auVar70._0_8_;
                pauVar27 = pauVar27 + 4;
              } while (pauVar27 < pauVar4);
            }
          }
        }
        uVar61 = uVar61 + 1;
        uVar66 = (ulong)((int)uVar66 + uVar59);
      } while (uVar61 != local_a0);
      lVar65 = FUN_034ce820(local_120);
      ppuVar32 = &PTR_DAT_047c52f0;
LAB_034d4f08:
      uVar59 = (uint)local_d8;
      lVar48 = local_118;
      param_3 = local_f8;
LAB_034d4f1c:
      if (lVar65 == 0) {
        return;
      }
    }
    puVar40 = ppuVar32[lVar48];
    uVar7 = (uVar59 & 0xff) + 3;
    local_98 = (undefined *)(CONCAT44(local_98._4_4_,uVar59) & 0xffffffff000000ff);
    iVar47 = (int)local_b8;
    uVar64 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,iVar47 * (uVar7 >> 2) * 0x10);
    uVar59 = local_cc;
    if (((uVar64 != 0) && (iVar47 != 0)) && ((int)local_108 != 0)) {
      local_a0 = (ulong)(uVar7 & 0x1fc);
      lVar48 = 0;
      local_c0 = (ulong)(uint)((int)local_98 << 2);
      uVar7 = uVar39 + 3;
      if (uVar39 < 2) {
        uVar39 = 1;
      }
      uVar61 = (ulong)uVar39;
      uVar39 = uVar7 & 0x1fc;
      local_a8 = uVar64;
      if ((uint)local_b8 < 0xc) {
        uVar55 = *(uint *)(&DAT_03d99ae0 + (ulong)((uint)local_b8 - 1) * 4);
        uVar23 = (ulong)local_cc;
        local_f0 = CONCAT44(local_f0._4_4_,uVar55);
        uVar66 = 0;
        uVar42 = 0;
        local_100 = uVar61 << 2;
        pvVar17 = local_90;
        uVar22 = local_108;
        uVar51 = local_cc;
        do {
          if ((uVar55 >> (ulong)((uint)uVar66 & 0x1f) & 1) == 0) {
            uVar53 = (ulong)(uVar42 * (int)local_a0);
            pvVar3 = (void *)(uVar64 + uVar53 * 4);
            if ((int)local_98 != 0) {
              local_b0 = CONCAT44(local_b0._4_4_,uVar42);
              local_e8 = uVar53;
              memset(pvVar3,0,local_c0);
              uVar64 = local_a8;
              uVar53 = local_e8;
              pvVar17 = local_90;
              uVar22 = local_108;
              uVar51 = local_cc;
              uVar55 = (uint)local_f0;
              uVar42 = (uint)local_b0;
            }
            if (uVar51 == 0) {
              memset((void *)(uVar64 + uVar53 * 4),0,local_100);
              uVar64 = local_a8;
              pvVar17 = local_90;
              uVar22 = local_108;
              uVar51 = local_cc;
              uVar55 = (uint)local_f0;
            }
            else {
              uVar53 = 0;
              do {
                fVar69 = *(float *)(puVar40 + uVar66 * 4) * fVar75;
                if (uVar51 == 1) {
                  fVar71 = 0.0;
                  uVar68 = 0;
                }
                else {
                  fVar71 = 0.0;
                  uVar19 = 0;
                  uVar68 = 0;
                  do {
                    uVar24 = lVar48 + uVar68;
                    uVar68 = uVar68 + 2;
                    lVar21 = uVar19 * 4;
                    iVar47 = (int)uVar19;
                    uVar19 = (ulong)(iVar47 + (uVar7 * 2 & 0x3f8));
                    fVar71 = fVar71 + *(float *)((long)pvVar17 + lVar21 + uVar53 * 4) *
                                      fVar69 * *(float *)(lVar65 + (uVar24 & 0xffffffff) * 4) +
                             *(float *)((long)pvVar17 + (ulong)(uVar39 + iVar47) * 4 + uVar53 * 4) *
                             fVar69 * *(float *)(lVar65 + (ulong)((int)uVar24 + 1) * 4);
                  } while ((uVar23 & 0xfffffffe) != uVar68);
                }
                if ((uVar59 & 1) != 0) {
                  fVar71 = fVar71 + *(float *)((long)pvVar17 +
                                              (ulong)(uVar39 * (int)uVar68) * 4 + uVar53 * 4) *
                                    fVar69 * *(float *)(lVar65 + (ulong)(uVar51 * (uint)uVar66 +
                                                                        (int)uVar68) * 4);
                }
                *(float *)((long)pvVar3 + uVar53 * 4) = fVar71;
                uVar53 = uVar53 + 1;
              } while (uVar53 != uVar61);
            }
            uVar42 = uVar42 + 1;
            param_3 = local_f8;
          }
          uVar66 = uVar66 + 1;
        } while ((uVar66 < uVar22) && (lVar48 = lVar48 + uVar23, uVar42 < (uint)local_b8));
      }
      else {
        local_e8 = uVar61 << 2;
        uVar22 = (ulong)local_cc;
        local_f0 = (ulong)(((uint)local_d8 & 0xff) * 4 + 0xc) & 0x7f0;
        uVar66 = 0;
        local_b0 = local_108;
        if (local_b8 - 1 <= local_108 - 1) {
          local_b0 = local_b8;
        }
        pvVar17 = local_90;
        uVar42 = local_cc;
        do {
          pvVar3 = (void *)(uVar64 + uVar66 * local_a0 * 4);
          if ((int)local_98 != 0) {
            memset(pvVar3,0,local_c0);
            uVar64 = local_a8;
            pvVar17 = local_90;
            uVar42 = local_cc;
          }
          if (uVar42 == 0) {
            memset((void *)(uVar64 + local_f0 * uVar66),0,local_e8);
            uVar64 = local_a8;
            pvVar17 = local_90;
            uVar42 = local_cc;
          }
          else {
            uVar23 = 0;
            do {
              fVar69 = *(float *)(puVar40 + uVar66 * 4) * fVar75;
              if (uVar42 == 1) {
                uVar53 = 0;
                fVar71 = 0.0;
              }
              else {
                fVar71 = 0.0;
                uVar68 = 0;
                uVar53 = 0;
                do {
                  uVar19 = lVar48 + uVar53;
                  uVar53 = uVar53 + 2;
                  lVar21 = uVar68 * 4;
                  iVar47 = (int)uVar68;
                  uVar68 = (ulong)(iVar47 + (uVar7 * 2 & 0x3f8));
                  fVar71 = fVar71 + *(float *)((long)pvVar17 + lVar21 + uVar23 * 4) *
                                    fVar69 * *(float *)(lVar65 + (uVar19 & 0xffffffff) * 4) +
                           *(float *)((long)pvVar17 + (ulong)(uVar39 + iVar47) * 4 + uVar23 * 4) *
                           fVar69 * *(float *)(lVar65 + (ulong)((int)uVar19 + 1) * 4);
                } while ((uVar22 & 0xfffffffe) != uVar53);
              }
              if ((uVar59 & 1) != 0) {
                fVar71 = fVar71 + *(float *)((long)pvVar17 +
                                            (ulong)(uVar39 * (int)uVar53) * 4 + uVar23 * 4) *
                                  fVar69 * *(float *)(lVar65 + (ulong)(uVar42 * (int)uVar66 +
                                                                      (int)uVar53) * 4);
              }
              *(float *)((long)pvVar3 + uVar23 * 4) = fVar71;
              uVar23 = uVar23 + 1;
            } while (uVar23 != uVar61);
          }
          uVar66 = uVar66 + 1;
          lVar48 = lVar48 + uVar22;
        } while (uVar66 != local_b0);
        param_3 = local_f8;
      }
    }
  }
  else {
    uVar59 = uVar59 & 0xff;
    lVar48 = FUN_034ce820(uVar66 & 0xffffffff);
    uVar64 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(int)uVar61 * (uVar59 + 3 >> 2) * 0x10);
    local_e0 = param_1;
    local_d8 = param_2;
    if (((int)uVar61 != 0) && (uVar64 != 0)) {
      if (uVar39 < 2) {
        uVar39 = 1;
      }
      uVar22 = (ulong)uVar39;
      lVar65 = 0;
      uVar61 = 0;
      puVar50 = (undefined4 *)(uVar64 + 8);
      uVar23 = (ulong)(uVar59 * 4 + 0xc) & 0x7f0;
      puVar52 = (undefined4 *)(lVar48 + 8);
      uVar66 = uVar64;
      do {
        if (uVar22 - 1 < 3) {
          uVar53 = 0;
        }
        else {
          uVar53 = 0;
          puVar15 = puVar52;
          puVar18 = puVar50;
          do {
            puVar18[-2] = puVar15[-2];
            puVar18[-1] = puVar15[-1];
            *puVar18 = *puVar15;
            puVar1 = puVar15 + 1;
            uVar53 = uVar53 + 4;
            puVar15 = puVar15 + 4;
            puVar18[1] = *puVar1;
            puVar18 = puVar18 + 4;
          } while ((uVar22 & 0xfc) != uVar53);
        }
        if ((uVar39 & 3) != 0) {
          puVar15 = (undefined4 *)(lVar48 + (uVar53 + lVar65) * 4);
          puVar18 = (undefined4 *)(uVar66 + uVar53 * 4);
          lVar21 = -(uVar22 & 3);
          do {
            bVar14 = lVar21 != -1;
            lVar21 = lVar21 + 1;
            *puVar18 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar18 = puVar18 + 1;
          } while (bVar14);
        }
        uVar61 = uVar61 + 1;
        puVar50 = (undefined4 *)((long)puVar50 + uVar23);
        puVar52 = puVar52 + uVar59;
        uVar66 = uVar66 + uVar23;
        lVar65 = lVar65 + (ulong)uVar59;
      } while (uVar61 != local_b8);
    }
  }
  lVar48 = local_c8;
  param_2 = local_d8;
  uVar61 = local_e0;
  if (uVar64 == 0) {
    return;
  }
  piVar20 = *(int **)(local_c8 + 0x90);
  uVar39 = *(uint *)(local_c8 + 0x98);
  piVar34 = piVar20;
  if (uVar39 == 0) {
LAB_034d52c8:
    if (piVar34 == piVar20 + (ulong)uVar39 * 4) goto LAB_034d52d4;
  }
  else {
    lVar65 = (ulong)uVar39 << 4;
    do {
      if ((*piVar34 == (int)local_e0) && (piVar34[1] == (int)local_d8)) goto LAB_034d52c8;
      lVar65 = lVar65 + -0x10;
      piVar34 = piVar34 + 4;
    } while (lVar65 != 0);
LAB_034d52d4:
    uVar59 = *(uint *)(local_c8 + 0x9c);
    if (uVar59 <= uVar39) {
      iVar47 = uVar59 + (uVar59 >> 1);
      if (uVar59 == 0) {
        iVar47 = 1;
      }
      uVar59 = iVar47 + uVar59;
      piVar20 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,piVar20,(ulong)uVar59 << 4);
      if (piVar20 == (int *)0x0) goto LAB_034d5378;
      *(int **)(lVar48 + 0x90) = piVar20;
      *(uint *)(lVar48 + 0x9c) = uVar59;
    }
    if (uVar59 <= uVar39) {
LAB_034d5378:
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,uVar64);
      return;
    }
    uVar39 = *(uint *)(lVar48 + 0x98);
    *(uint *)(lVar48 + 0x98) = uVar39 + 1;
    if (piVar20 == (int *)0x0) goto LAB_034d5378;
    piVar34 = piVar20 + (ulong)uVar39 * 4;
    *(ulong *)(piVar20 + (ulong)uVar39 * 4) = uVar61 & 0xffffffff | param_2 << 0x20;
  }
  puVar35 = (ulong *)(piVar34 + 2);
  *puVar35 = uVar64;
  uVar39 = (uint)local_b8;
LAB_034d5350:
  iVar47 = uVar39 * (((uint)param_2 & 0xff) + 3 & 0x1fc);
  if (iVar47 != 0) {
    memcpy(param_3,(void *)*puVar35,(ulong)(uint)(iVar47 * 4));
  }
  return;
}


