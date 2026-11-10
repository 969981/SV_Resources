/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0341bbe4; name: FUN_0341bbe4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0341bbe4(undefined1 param_1 [16],long *param_2,float *param_3,undefined8 param_4,float *param_5,
            long param_6,long param_7,float *param_8,int param_9,byte param_10)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  char cVar15;
  uint uVar16;
  undefined8 *puVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  uint uVar28;
  uint uVar29;
  float *pfVar30;
  float fVar31;
  undefined8 uVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 local_23c;
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
  
  uVar36 = param_1._8_8_;
  auVar35._0_8_ = param_1._0_8_;
  *(int *)(param_2 + 6) = param_1._0_4_;
  FUN_0341acc0(param_2,param_4,0,param_3,param_5);
  auVar32 = NEON_fmov(0x3f800000,4);
  pfVar1 = param_3;
  pfVar6 = param_5;
  if ((param_10 & 1) == 0) {
    pfVar1 = param_5;
    pfVar6 = param_3;
  }
  local_23c = 0;
  do {
    if ((int)param_2[5] == 0) break;
    lVar12 = FUN_0341b874(param_2);
    *(undefined1 *)(lVar12 + 0x4a) = 0;
    uVar13 = FUN_0341b9dc(lVar12,param_6);
    if ((uVar13 & 1) == 0) {
LAB_0341c234:
      iVar11 = 6;
    }
    else {
      pfVar30 = *(float **)(lVar12 + 0x18);
      fVar43 = *param_5;
      fVar44 = param_5[1];
      fVar45 = param_5[2];
      fVar37 = pfVar30[6] * (fVar43 - *pfVar30) + (fVar44 - pfVar30[1]) * pfVar30[7] +
               (fVar45 - pfVar30[2]) * pfVar30[8];
      fVar31 = pfVar30[9] * (fVar43 - *pfVar30) + (fVar44 - pfVar30[1]) * pfVar30[10] +
               (fVar45 - pfVar30[2]) * pfVar30[0xb];
      bVar7 = false;
      bVar8 = false;
      if (-0.0001 < fVar37) {
        bVar7 = false;
        bVar8 = true;
        if (!NAN(fVar31)) {
          bVar7 = fVar31 < 0.0001;
          bVar8 = false;
        }
      }
      if (bVar7 == bVar8) {
        bVar7 = false;
        bVar8 = true;
        bVar9 = false;
        if (fVar37 < 0.0001) {
          bVar7 = false;
          bVar8 = false;
          bVar9 = true;
          if (!NAN(fVar31)) {
            bVar7 = fVar31 < -0.0001;
            bVar8 = fVar31 == -0.0001;
            bVar9 = false;
          }
        }
        if (!bVar8 && bVar7 == bVar9) {
          cVar15 = '\x01';
          goto LAB_0341bd20;
        }
      }
      else {
        cVar15 = '\0';
LAB_0341bd20:
        if (cVar15 != *(char *)(lVar12 + 0x48)) {
          uVar5 = *(undefined8 *)(lVar12 + 0xc);
          uVar4 = CONCAT44(auVar32._12_4_,*(float *)(lVar12 + 0x14));
          uVar13 = (ulong)(uint)(fVar45 - *(float *)(lVar12 + 0x14));
          uVar20 = CONCAT44(fVar44 - *(float *)(lVar12 + 0x10),fVar43 - *(float *)(lVar12 + 0xc));
          memset(local_1f0,0,0xc0);
          local_100 = 0;
          local_d8 = 0;
          local_130 = uVar5;
          uStack_128 = uVar4;
          uStack_120 = uVar20;
          uStack_118 = uVar13;
          local_110 = pfVar30;
          if (*(long *)(param_6 + 8) != 0) {
            uVar20 = *(undefined8 *)(lVar12 + 0xc);
            fVar43 = fVar43 - *(float *)(lVar12 + 0xc);
            fVar31 = *(float *)(lVar12 + 0x14);
            fVar44 = fVar44 - *(float *)(lVar12 + 0x10);
            fVar45 = fVar45 - fVar31;
            if (((DAT_048af350 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_048af350), iVar11 != 0)) {
              _DAT_048af340 = auVar32._0_8_;
              uRam00000000048af348 = auVar32._8_8_;
              __cxa_guard_release(&DAT_048af350);
            }
            auVar33._4_4_ = fVar44;
            auVar33._0_4_ = fVar43;
            auVar33._8_4_ = fVar45;
            auVar33._12_4_ = 0;
            auVar33 = NEON_frecpe(auVar33,4);
            auVar38._4_4_ = fVar44;
            auVar38._0_4_ = fVar43;
            auVar38._8_4_ = fVar45;
            auVar38._12_4_ = 0;
            auVar38 = NEON_frecps(auVar38,auVar33,4);
            uStack_a8 = (ulong)(uint)fVar45;
            uStack_b0 = CONCAT44(fVar44,fVar43);
            local_c4 = 0;
            auVar34._0_8_ =
                 CONCAT44(auVar33._4_4_ * (float)((ulong)_DAT_048af340 >> 0x20) * auVar38._4_4_,
                          auVar33._0_4_ * (float)_DAT_048af340 * auVar38._0_4_);
            auVar34._8_4_ = auVar33._8_4_ * (float)uRam00000000048af348 * auVar38._8_4_;
            auVar34._12_4_ =
                 auVar33._12_4_ * (float)((ulong)uRam00000000048af348 >> 0x20) * auVar38._12_4_;
            uStack_98 = auVar34._8_8_;
            local_c0 = uVar20;
            uStack_b8 = CONCAT44(auVar32._12_4_,fVar31);
            local_a0 = auVar34._0_8_;
            FUN_0341c530(*(undefined8 *)(param_6 + 8),&local_c0,&local_c4,local_1f0);
            if (local_100 != 0) {
              bVar10 = FUN_0341c85c(local_1f0);
              local_d8 = bVar10 & 1 | local_d8 != 0;
            }
            local_100 = 0;
            if (local_d8 != 0) goto LAB_0341be44;
          }
          local_100 = 0;
          fVar43 = pfVar30[4];
          fVar31 = pfVar30[5];
          fVar45 = pfVar30[3];
          pfVar2 = param_3;
          if (*(long *)(lVar12 + 0x20) != 0) {
            pfVar2 = (float *)(*(long *)(lVar12 + 0x20) + 0xc);
          }
          fVar39 = fVar31 * pfVar30[7] - fVar43 * pfVar30[8];
          fVar37 = fVar45 * pfVar30[8] - pfVar30[6] * fVar31;
          fVar48 = pfVar2[2] - pfVar30[2];
          fVar40 = pfVar30[6] * fVar43 - fVar45 * pfVar30[7];
          fVar42 = pfVar2[1] - pfVar30[1];
          fVar41 = *pfVar2 - *pfVar30;
          fVar44 = fVar41 * fVar45 + fVar43 * fVar42 + fVar31 * fVar48;
          fVar41 = fVar41 - fVar45 * fVar44;
          fVar42 = fVar42 - fVar43 * fVar44;
          fVar48 = fVar48 - fVar31 * fVar44;
          fVar47 = param_5[1] - pfVar30[1];
          fVar46 = *param_5 - *pfVar30;
          fVar44 = param_5[2] - pfVar30[2];
          fVar49 = fVar46 * fVar45 + fVar43 * fVar47 + fVar31 * fVar44;
          fVar46 = fVar46 - fVar45 * fVar49;
          fVar47 = fVar47 - fVar43 * fVar49;
          fVar44 = fVar44 - fVar31 * fVar49;
          if ((fVar46 * fVar39 + fVar37 * fVar47 + fVar40 * fVar44) /
              SQRT(fVar46 * fVar46 + fVar47 * fVar47 + fVar44 * fVar44) <=
              (-(fVar48 * fVar40) - (fVar41 * fVar39 + fVar37 * fVar42)) /
              SQRT(fVar41 * fVar41 + fVar42 * fVar42 + fVar48 * fVar48)) goto LAB_0341c234;
          *(undefined4 *)(param_7 + 0x40) = 0;
          uVar29 = 0;
          *param_8 = *pfVar6;
          param_8[1] = pfVar6[1];
          param_8[2] = pfVar6[2];
          param_8[0x1b] = *pfVar1;
          param_8[0x1c] = pfVar1[1];
          param_8[0x1d] = pfVar1[2];
          param_8[0x1e] = (float)(int)*(char *)(lVar12 + 0x4b);
          do {
            *(undefined1 *)(lVar12 + 0x4c) = 0;
            uVar3 = *(uint *)(param_7 + 0x40);
            uVar28 = *(uint *)(param_7 + 0x44);
            if ((param_10 & 1) == 0) {
              if (uVar28 <= uVar3) {
                uVar28 = uVar28 + 1;
                lVar14 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))
                                   (0xb,*(undefined8 *)(param_7 + 0x38),(ulong)uVar28 << 5,0x10);
                if (lVar14 == 0) goto LAB_0341c154;
                *(long *)(param_7 + 0x38) = lVar14;
                *(uint *)(param_7 + 0x44) = uVar28;
              }
              if (uVar3 < uVar28) {
                puVar17 = (undefined8 *)
                          (*(long *)(param_7 + 0x38) + (ulong)*(uint *)(param_7 + 0x40) * 0x20);
                *(uint *)(param_7 + 0x40) = *(uint *)(param_7 + 0x40) + 1;
                puVar19 = (undefined8 *)0x0;
                if (*(long *)(param_7 + 0x38) != 0) {
                  puVar17[2] = 0;
                  puVar17[3] = 0;
                  puVar19 = *(undefined8 **)(param_7 + 0x38);
                }
                if (puVar19 < puVar17) {
                  do {
                    puVar23 = puVar17 + -4;
                    *puVar17 = *puVar23;
                    puVar17[1] = puVar17[-3];
                    puVar17[2] = puVar17[-2];
                    puVar17[3] = puVar17[-1];
                    puVar19 = *(undefined8 **)(param_7 + 0x38);
                    puVar17 = puVar23;
                  } while (puVar19 < puVar23);
                }
                if (puVar19 != (undefined8 *)0x0) {
                  puVar19[2] = 0;
                  puVar19[3] = 0;
                  piVar18 = *(int **)(param_7 + 0x38);
                  if (piVar18 != (int *)0x0) goto LAB_0341c144;
                }
              }
            }
            else {
              if (uVar28 <= uVar3) {
                uVar28 = uVar28 + 1;
                lVar14 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))
                                   (0xb,*(undefined8 *)(param_7 + 0x38),(ulong)uVar28 << 5,0x10);
                if (lVar14 == 0) goto LAB_0341c154;
                *(long *)(param_7 + 0x38) = lVar14;
                *(uint *)(param_7 + 0x44) = uVar28;
              }
              if (uVar3 < uVar28) {
                uVar28 = *(uint *)(param_7 + 0x40);
                *(uint *)(param_7 + 0x40) = uVar28 + 1;
                if (*(long *)(param_7 + 0x38) != 0) {
                  piVar18 = (int *)(*(long *)(param_7 + 0x38) + (ulong)uVar28 * 0x20);
                  piVar18[4] = 0;
                  piVar18[5] = 0;
                  piVar18[6] = 0;
                  piVar18[7] = 0;
LAB_0341c144:
                  uVar20 = *(undefined8 *)(lVar12 + 0x18);
                  *piVar18 = (int)*(char *)(lVar12 + 0x48);
                  piVar18[4] = 0;
                  piVar18[5] = 0;
                  *(undefined8 *)(piVar18 + 6) = uVar20;
                }
              }
            }
LAB_0341c154:
            uVar28 = uVar29;
            if ((param_10 & 1) == 0) {
              uVar28 = (int)param_8[0x1e] + ~uVar29;
            }
            if (uVar28 < 8) {
              param_8[(ulong)uVar28 * 3 + 3] = *(float *)(lVar12 + 0xc);
              param_8[(ulong)uVar28 * 3 + 4] = *(float *)(lVar12 + 0x10);
              param_8[(ulong)uVar28 * 3 + 5] = *(float *)(lVar12 + 0x14);
              uVar20 = *(undefined8 *)(lVar12 + 0x18);
              uVar28 = 0x50c5d1f;
              if (param_8[0x24] != 0.0) {
                uVar28 = (int)param_8[0x24] * 0x1000193;
              }
              uVar16 = (uint)uVar20;
              uVar3 = (uint)((ulong)uVar20 >> 0x20);
              param_8[0x24] =
                   (float)((((((((uVar28 ^ uVar16 & 0xff) * 0x1000193 ^ uVar16 >> 8 & 0xff) *
                                0x1000193 ^ uVar16 >> 0x10 & 0xff) * 0x1000193 ^ uVar16 >> 0x18) *
                              0x1000193 ^ uVar3 & 0xff) * 0x1000193 ^ uVar3 >> 8 & 0xff) * 0x1000193
                           ^ (ushort)((ulong)uVar20 >> 0x30) & 0xff) * 0x1000193 ^
                          (uint)(byte)((ulong)uVar20 >> 0x38));
            }
            lVar12 = *(long *)(lVar12 + 0x20);
            uVar29 = uVar29 + 1;
          } while (lVar12 != 0);
          *(undefined4 *)(param_2 + 5) = 0;
          local_23c = 1;
          iVar11 = 7;
          goto LAB_0341c238;
        }
      }
LAB_0341be44:
      if (*(char *)(lVar12 + 0x4b) < param_9) {
        pfVar2 = pfVar30 + 0x14;
        if (*(char *)(lVar12 + 0x48) != '\0') {
          pfVar2 = pfVar30 + 0xe;
        }
        if (*(char *)(pfVar2 + 4) == '\0') {
          nn::os::LockMutex((MutexType *)&DAT_048af320);
          local_1f0[0] = 0;
          FUN_03419fa0(pfVar30,local_1f0);
          nn::os::UnlockMutex((MutexType *)&DAT_048af320);
        }
        uVar13 = (ulong)(uint)pfVar2[2];
        if (pfVar2[2] == 0.0) {
          iVar11 = 0;
        }
        else {
          puVar19 = *(undefined8 **)pfVar2;
          puVar17 = puVar19;
          do {
            if ((*(char *)(puVar17 + 1) == '\0') || (*(char *)((long)puVar17 + 9) != '\0')) {
              auVar35._8_8_ = uVar36;
              FUN_0341acc0(auVar35,param_2,*puVar17,lVar12,param_3,param_5);
              puVar19 = *(undefined8 **)pfVar2;
              uVar13 = (ulong)(uint)pfVar2[2];
            }
            puVar17 = puVar17 + 2;
          } while (puVar17 != puVar19 + uVar13 * 2);
          iVar11 = 0;
        }
      }
      else {
        iVar11 = 0;
      }
    }
LAB_0341c238:
  } while (iVar11 != 7);
  if ((int)param_2[2] != 0) {
    plVar26 = *(long **)param_2[1];
    if (plVar26 == (long *)0x0) {
      uVar13 = 0;
      do {
        if ((int)param_2[2] - 1 == uVar13) {
          return local_23c;
        }
        uVar13 = uVar13 + 1;
        plVar26 = (long *)((undefined8 *)param_2[1])[uVar13 & 0xffffffff];
      } while (plVar26 == (long *)0x0);
    }
    else {
      uVar13 = 0;
    }
    do {
      plVar24 = (long *)plVar26[5];
      uVar21 = uVar13 & 0xffffffff;
      plVar27 = plVar24;
      if (plVar24 == (long *)0x0) {
        uVar28 = *(uint *)(param_2 + 2);
        uVar25 = uVar13 & 0xffffffff;
        uVar29 = uVar28;
        if (uVar28 <= (int)uVar13 + 1U) {
          uVar29 = (int)uVar13 + 1;
        }
        uVar13 = (ulong)uVar29;
        do {
          uVar29 = (int)uVar25 + 1;
          uVar25 = (ulong)uVar29;
          if (uVar28 <= uVar29) {
            plVar27 = (long *)0x0;
            goto LAB_0341c30c;
          }
          plVar27 = *(long **)(param_2[1] + (ulong)uVar29 * 8);
        } while (plVar27 == (long *)0x0);
        uVar13 = uVar25;
      }
LAB_0341c30c:
      *(long **)(param_2[1] + uVar21 * 8) = plVar24;
      plVar24 = (long *)*param_2;
      *(int *)(param_2 + 3) = (int)param_2[3] + -1;
      if (plVar24 == (long *)0x0) {
LAB_0341c378:
        if (_DAT_00000290 == (long *)0x0) {
          _DAT_00000290 = plVar26;
          *plVar26 = 0;
        }
        else {
          *plVar26 = (long)_DAT_00000290;
          _DAT_00000290 = plVar26;
        }
        _DAT_00000288 = _DAT_00000288 + 1;
      }
      else {
        if ((plVar26 < plVar24) || (plVar24 + 0x50 <= plVar26)) {
          do {
            plVar22 = plVar24;
            plVar24 = (long *)plVar22[0x50];
            if (plVar24 == (long *)0x0) goto LAB_0341c378;
          } while ((plVar26 < plVar24) || (plVar24 + 0x50 <= plVar26));
        }
        else {
          plVar22 = (long *)0x0;
        }
        if (plVar24[0x52] == 0) {
          plVar24[0x52] = (long)plVar26;
          *plVar26 = 0;
        }
        else {
          *plVar26 = plVar24[0x52];
          plVar24[0x52] = (long)plVar26;
        }
        iVar11 = (int)plVar24[0x51] + 1;
        *(int *)(plVar24 + 0x51) = iVar11;
        if (iVar11 == 8) {
          plVar26 = param_2;
          if ((long *)*param_2 != plVar24) {
            plVar26 = plVar22 + 0x50;
          }
          *plVar26 = plVar24[0x50];
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb);
        }
      }
      plVar26 = plVar27;
    } while (plVar27 != (long *)0x0);
  }
  return local_23c;
}


