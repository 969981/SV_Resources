/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0341a5f0; name: FUN_0341a5f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0341a5f0(undefined1 param_1 [16],long *param_2,float *param_3,undefined8 param_4,float *param_5,
            long param_6,long param_7,int param_8)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  char cVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  uint uVar24;
  float *pfVar25;
  float fVar26;
  undefined8 uVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 local_224;
  undefined4 local_1f0 [48];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  float *local_110;
  int local_100;
  byte local_d8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  uVar31 = param_1._8_8_;
  auVar30._0_8_ = param_1._0_8_;
  *(int *)(param_2 + 6) = param_1._0_4_;
  FUN_0341acc0(param_2,param_4,0,param_3,param_5);
  auVar27 = NEON_fmov(0x3f800000,4);
  local_224 = 0;
  do {
    if ((int)param_2[5] == 0) break;
    lVar11 = FUN_0341b874(param_2);
    *(undefined1 *)(lVar11 + 0x4a) = 0;
    uVar12 = FUN_0341b9dc(lVar11,param_6);
    if ((uVar12 & 1) == 0) {
LAB_0341aab0:
      iVar10 = 6;
    }
    else {
      pfVar25 = *(float **)(lVar11 + 0x18);
      fVar38 = *param_5;
      fVar39 = param_5[1];
      fVar40 = param_5[2];
      fVar32 = pfVar25[6] * (fVar38 - *pfVar25) + (fVar39 - pfVar25[1]) * pfVar25[7] +
               (fVar40 - pfVar25[2]) * pfVar25[8];
      fVar26 = pfVar25[9] * (fVar38 - *pfVar25) + (fVar39 - pfVar25[1]) * pfVar25[10] +
               (fVar40 - pfVar25[2]) * pfVar25[0xb];
      bVar6 = false;
      bVar7 = false;
      if (-0.0001 < fVar32) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar26)) {
          bVar6 = fVar26 < 0.0001;
          bVar7 = false;
        }
      }
      if (bVar6 == bVar7) {
        bVar6 = false;
        bVar7 = true;
        bVar8 = false;
        if (fVar32 < 0.0001) {
          bVar6 = false;
          bVar7 = false;
          bVar8 = true;
          if (!NAN(fVar26)) {
            bVar6 = fVar26 < -0.0001;
            bVar7 = fVar26 == -0.0001;
            bVar8 = false;
          }
        }
        if (!bVar7 && bVar6 == bVar8) {
          cVar13 = '\x01';
          goto LAB_0341a704;
        }
      }
      else {
        cVar13 = '\0';
LAB_0341a704:
        if (cVar13 != *(char *)(lVar11 + 0x48)) {
          uVar5 = *(undefined8 *)(lVar11 + 0xc);
          uVar4 = CONCAT44(auVar27._12_4_,*(float *)(lVar11 + 0x14));
          uVar12 = (ulong)(uint)(fVar40 - *(float *)(lVar11 + 0x14));
          uVar17 = CONCAT44(fVar39 - *(float *)(lVar11 + 0x10),fVar38 - *(float *)(lVar11 + 0xc));
          memset(local_1f0,0,0xc0);
          local_100 = 0;
          local_d8 = 0;
          local_130 = uVar5;
          uStack_128 = uVar4;
          uStack_120 = uVar17;
          uStack_118 = uVar12;
          local_110 = pfVar25;
          if (*(long *)(param_6 + 8) != 0) {
            uVar17 = *(undefined8 *)(lVar11 + 0xc);
            fVar38 = fVar38 - *(float *)(lVar11 + 0xc);
            fVar26 = *(float *)(lVar11 + 0x14);
            fVar39 = fVar39 - *(float *)(lVar11 + 0x10);
            fVar40 = fVar40 - fVar26;
            if (((DAT_048af350 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_048af350), iVar10 != 0)) {
              _DAT_048af340 = auVar27._0_8_;
              uRam00000000048af348 = auVar27._8_8_;
              __cxa_guard_release(&DAT_048af350);
            }
            auVar28._4_4_ = fVar39;
            auVar28._0_4_ = fVar38;
            auVar28._8_4_ = fVar40;
            auVar28._12_4_ = 0;
            auVar28 = NEON_frecpe(auVar28,4);
            auVar33._4_4_ = fVar39;
            auVar33._0_4_ = fVar38;
            auVar33._8_4_ = fVar40;
            auVar33._12_4_ = 0;
            auVar33 = NEON_frecps(auVar33,auVar28,4);
            uStack_a8 = (ulong)(uint)fVar40;
            uStack_b0 = CONCAT44(fVar39,fVar38);
            local_c4 = 0;
            auVar29._0_8_ =
                 CONCAT44(auVar28._4_4_ * (float)((ulong)_DAT_048af340 >> 0x20) * auVar33._4_4_,
                          auVar28._0_4_ * (float)_DAT_048af340 * auVar33._0_4_);
            auVar29._8_4_ = auVar28._8_4_ * (float)uRam00000000048af348 * auVar33._8_4_;
            auVar29._12_4_ =
                 auVar28._12_4_ * (float)((ulong)uRam00000000048af348 >> 0x20) * auVar33._12_4_;
            uStack_98 = auVar29._8_8_;
            local_c0 = uVar17;
            uStack_b8 = CONCAT44(auVar27._12_4_,fVar26);
            local_a0 = auVar29._0_8_;
            FUN_0341c530(*(undefined8 *)(param_6 + 8),&local_c0,&local_c4,local_1f0);
            if (local_100 != 0) {
              bVar9 = FUN_0341c85c(local_1f0);
              local_d8 = bVar9 & 1 | local_d8 != 0;
            }
            local_100 = 0;
            if (local_d8 != 0) goto LAB_0341a828;
          }
          local_100 = 0;
          fVar38 = pfVar25[4];
          fVar26 = pfVar25[5];
          fVar40 = pfVar25[3];
          lVar14 = *(long *)(lVar11 + 0x20);
          pfVar2 = param_3;
          if (lVar14 != 0) {
            pfVar2 = (float *)(lVar14 + 0xc);
          }
          fVar34 = fVar26 * pfVar25[7] - fVar38 * pfVar25[8];
          fVar32 = fVar40 * pfVar25[8] - pfVar25[6] * fVar26;
          fVar43 = pfVar2[2] - pfVar25[2];
          fVar35 = pfVar25[6] * fVar38 - fVar40 * pfVar25[7];
          fVar37 = pfVar2[1] - pfVar25[1];
          fVar36 = *pfVar2 - *pfVar25;
          fVar39 = fVar36 * fVar40 + fVar38 * fVar37 + fVar26 * fVar43;
          fVar36 = fVar36 - fVar40 * fVar39;
          fVar37 = fVar37 - fVar38 * fVar39;
          fVar43 = fVar43 - fVar26 * fVar39;
          fVar42 = param_5[1] - pfVar25[1];
          fVar41 = *param_5 - *pfVar25;
          fVar39 = param_5[2] - pfVar25[2];
          fVar44 = fVar41 * fVar40 + fVar38 * fVar42 + fVar26 * fVar39;
          fVar41 = fVar41 - fVar40 * fVar44;
          fVar42 = fVar42 - fVar38 * fVar44;
          fVar39 = fVar39 - fVar26 * fVar44;
          if ((fVar41 * fVar34 + fVar32 * fVar42 + fVar35 * fVar39) /
              SQRT(fVar41 * fVar41 + fVar42 * fVar42 + fVar39 * fVar39) <=
              (-(fVar43 * fVar35) - (fVar36 * fVar34 + fVar32 * fVar37)) /
              SQRT(fVar36 * fVar36 + fVar37 * fVar37 + fVar43 * fVar43)) goto LAB_0341aab0;
          uVar12 = (ulong)*(uint *)(param_7 + 0x40);
          while (*(undefined1 *)(lVar11 + 0x4c) = 0, lVar14 != 0) {
            uVar3 = *(uint *)(param_7 + 0x40);
            uVar24 = *(uint *)(param_7 + 0x44);
            if (uVar3 < uVar24) {
LAB_0341aa18:
              if (uVar3 < uVar24) {
                puVar15 = (undefined8 *)
                          (*(long *)(param_7 + 0x38) + (ulong)*(uint *)(param_7 + 0x40) * 0x20);
                *(uint *)(param_7 + 0x40) = *(uint *)(param_7 + 0x40) + 1;
                lVar14 = 0;
                if (*(long *)(param_7 + 0x38) != 0) {
                  puVar15[2] = 0;
                  puVar15[3] = 0;
                  lVar14 = *(long *)(param_7 + 0x38);
                }
                if ((undefined8 *)(lVar14 + uVar12 * 0x20) < puVar15) {
                  do {
                    puVar16 = puVar15 + -4;
                    *puVar15 = *puVar16;
                    puVar15[1] = puVar15[-3];
                    puVar15[2] = puVar15[-2];
                    puVar15[3] = puVar15[-1];
                    lVar14 = *(long *)(param_7 + 0x38);
                    puVar15 = puVar16;
                  } while ((undefined8 *)(lVar14 + uVar12 * 0x20) < puVar16);
                }
                if (lVar14 != 0) {
                  lVar14 = lVar14 + uVar12 * 0x20;
                  *(undefined8 *)(lVar14 + 0x10) = 0;
                  *(undefined8 *)(lVar14 + 0x18) = 0;
                  if (*(long *)(param_7 + 0x38) != 0) {
                    uVar17 = *(undefined8 *)(lVar11 + 0x18);
                    piVar1 = (int *)(*(long *)(param_7 + 0x38) + uVar12 * 0x20);
                    cVar13 = *(char *)(lVar11 + 0x48);
                    piVar1[4] = 0;
                    piVar1[5] = 0;
                    *(undefined8 *)(piVar1 + 6) = uVar17;
                    *piVar1 = (int)cVar13;
                  }
                }
              }
            }
            else {
              uVar24 = uVar24 + 1;
              lVar14 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))
                                 (0xb,*(undefined8 *)(param_7 + 0x38),(ulong)uVar24 << 5,0x10);
              if (lVar14 != 0) {
                *(long *)(param_7 + 0x38) = lVar14;
                *(uint *)(param_7 + 0x44) = uVar24;
                goto LAB_0341aa18;
              }
            }
            lVar11 = *(long *)(lVar11 + 0x20);
            if (lVar11 == 0) break;
            lVar14 = *(long *)(lVar11 + 0x20);
          }
          *(undefined4 *)(param_2 + 5) = 0;
          local_224 = 1;
          iVar10 = 7;
          goto LAB_0341aad8;
        }
      }
LAB_0341a828:
      if (*(char *)(lVar11 + 0x4b) < param_8) {
        pfVar2 = pfVar25 + 0x14;
        if (*(char *)(lVar11 + 0x48) != '\0') {
          pfVar2 = pfVar25 + 0xe;
        }
        if (*(char *)(pfVar2 + 4) == '\0') {
          nn::os::LockMutex((MutexType *)&DAT_048af320);
          local_1f0[0] = 0;
          FUN_03419fa0(pfVar25,local_1f0);
          nn::os::UnlockMutex((MutexType *)&DAT_048af320);
        }
        uVar12 = (ulong)(uint)pfVar2[2];
        iVar10 = 0;
        if (pfVar2[2] != 0.0) {
          puVar16 = *(undefined8 **)pfVar2;
          puVar15 = puVar16;
          do {
            if ((*(char *)(puVar15 + 1) == '\0') || (*(char *)((long)puVar15 + 9) != '\0')) {
              auVar30._8_8_ = uVar31;
              FUN_0341acc0(auVar30,param_2,*puVar15,lVar11,param_3,param_5);
              puVar16 = *(undefined8 **)pfVar2;
              uVar12 = (ulong)(uint)pfVar2[2];
            }
            puVar15 = puVar15 + 2;
          } while (puVar15 != puVar16 + uVar12 * 2);
          iVar10 = 0;
        }
      }
      else {
        iVar10 = 0;
      }
    }
LAB_0341aad8:
  } while (iVar10 != 7);
  if ((int)param_2[2] != 0) {
    plVar22 = *(long **)param_2[1];
    if (plVar22 == (long *)0x0) {
      uVar12 = 0;
      do {
        if ((int)param_2[2] - 1 == uVar12) {
          return local_224;
        }
        uVar12 = uVar12 + 1;
        plVar22 = (long *)((undefined8 *)param_2[1])[uVar12 & 0xffffffff];
      } while (plVar22 == (long *)0x0);
    }
    else {
      uVar12 = 0;
    }
    do {
      plVar20 = (long *)plVar22[5];
      uVar18 = uVar12 & 0xffffffff;
      plVar23 = plVar20;
      if (plVar20 == (long *)0x0) {
        uVar3 = *(uint *)(param_2 + 2);
        uVar21 = uVar12 & 0xffffffff;
        uVar24 = uVar3;
        if (uVar3 <= (int)uVar12 + 1U) {
          uVar24 = (int)uVar12 + 1;
        }
        uVar12 = (ulong)uVar24;
        do {
          uVar24 = (int)uVar21 + 1;
          uVar21 = (ulong)uVar24;
          if (uVar3 <= uVar24) {
            plVar23 = (long *)0x0;
            goto LAB_0341abac;
          }
          plVar23 = *(long **)(param_2[1] + (ulong)uVar24 * 8);
        } while (plVar23 == (long *)0x0);
        uVar12 = uVar21;
      }
LAB_0341abac:
      *(long **)(param_2[1] + uVar18 * 8) = plVar20;
      plVar20 = (long *)*param_2;
      *(int *)(param_2 + 3) = (int)param_2[3] + -1;
      if (plVar20 == (long *)0x0) {
LAB_0341ac18:
        if (_DAT_00000290 == (long *)0x0) {
          _DAT_00000290 = plVar22;
          *plVar22 = 0;
        }
        else {
          *plVar22 = (long)_DAT_00000290;
          _DAT_00000290 = plVar22;
        }
        _DAT_00000288 = _DAT_00000288 + 1;
      }
      else {
        if ((plVar22 < plVar20) || (plVar20 + 0x50 <= plVar22)) {
          do {
            plVar19 = plVar20;
            plVar20 = (long *)plVar19[0x50];
            if (plVar20 == (long *)0x0) goto LAB_0341ac18;
          } while ((plVar22 < plVar20) || (plVar20 + 0x50 <= plVar22));
        }
        else {
          plVar19 = (long *)0x0;
        }
        if (plVar20[0x52] == 0) {
          plVar20[0x52] = (long)plVar22;
          *plVar22 = 0;
        }
        else {
          *plVar22 = plVar20[0x52];
          plVar20[0x52] = (long)plVar22;
        }
        iVar10 = (int)plVar20[0x51] + 1;
        *(int *)(plVar20 + 0x51) = iVar10;
        if (iVar10 == 8) {
          plVar22 = param_2;
          if ((long *)*param_2 != plVar20) {
            plVar22 = plVar19 + 0x50;
          }
          *plVar22 = plVar20[0x50];
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb);
        }
      }
      plVar22 = plVar23;
    } while (plVar23 != (long *)0x0);
  }
  return local_224;
}


