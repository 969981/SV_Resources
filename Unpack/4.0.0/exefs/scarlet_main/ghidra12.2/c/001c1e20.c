/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c1e20; name: FUN_001c1e20
 */


/* WARNING: Type propagation algorithm not settling */

size_t FUN_001c1e20(undefined8 param_1,void *param_2,undefined8 param_3,byte *param_4,uint *param_5,
                   uint param_6,undefined4 param_7,long param_8,float *param_9,int param_10,
                   int param_11,uint *param_12,undefined8 param_13,int param_14,void *param_15,
                   undefined8 param_16)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  size_t __n;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  code *pcVar10;
  uint *puVar11;
  uint *puVar12;
  byte *pbVar13;
  float *pfVar14;
  uint *puVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  long lVar23;
  int *__src;
  char *pcVar24;
  uint uVar25;
  size_t __n_00;
  float fVar26;
  float fVar27;
  float fVar28;
  long local_ab0;
  long local_aa8;
  long local_aa0;
  undefined1 *local_a98;
  undefined8 local_a8c;
  undefined8 local_a84;
  undefined8 local_a7c;
  undefined8 local_a74;
  undefined8 local_a6c;
  undefined8 local_a64;
  undefined8 local_a5c;
  undefined8 local_a54;
  undefined8 local_a4c;
  undefined8 local_a44;
  undefined8 local_a3c;
  undefined8 local_a34;
  undefined8 local_a2c;
  undefined8 uStack_a24;
  undefined8 local_a1c;
  undefined8 uStack_a14;
  undefined8 local_a0c;
  undefined8 uStack_a04;
  undefined8 local_9fc;
  undefined8 uStack_9f4;
  undefined8 local_9ec;
  undefined8 uStack_9e4;
  undefined8 local_9dc;
  undefined8 uStack_9d4;
  undefined8 local_9cc;
  undefined8 uStack_9c4;
  undefined8 local_9bc;
  undefined8 uStack_9b4;
  undefined8 local_9ac;
  undefined8 uStack_9a4;
  undefined8 local_99c;
  undefined8 uStack_994;
  undefined8 local_98c;
  undefined8 uStack_984;
  undefined8 local_97c;
  undefined8 uStack_974;
  undefined8 local_96c;
  undefined8 uStack_964;
  undefined8 local_95c;
  undefined8 uStack_954;
  undefined8 local_94c;
  undefined8 uStack_944;
  undefined8 local_93c;
  undefined8 uStack_934;
  undefined8 local_92c;
  undefined8 uStack_924;
  undefined8 local_91c;
  undefined8 uStack_914;
  undefined8 local_90c;
  undefined8 uStack_904;
  undefined8 local_8fc;
  undefined8 uStack_8f4;
  undefined8 local_8ec;
  undefined8 uStack_8e4;
  undefined8 local_8dc;
  undefined8 uStack_8d4;
  undefined8 local_8cc;
  undefined8 uStack_8c4;
  undefined8 local_8bc;
  undefined8 uStack_8b4;
  undefined8 local_8ac;
  undefined8 uStack_8a4;
  undefined8 local_89c;
  undefined8 uStack_894;
  uint local_88c;
  int aiStack_888 [298];
  undefined4 local_3e0;
  float local_3d8 [84];
  float local_288 [130];
  
  *param_9 = 1.0737418e+09;
  if (param_10 == 8) {
    __n = FUN_00174a40(param_1,param_2,param_3,param_4,(long)(int)param_6,param_7,param_8,param_9,
                       param_13,param_14,param_15);
    if ((long)__n < 0) {
      return 0xffffffffffffffff;
    }
    fVar26 = (float)(**(code **)(param_8 + 0x20))((long)(int)param_6);
    *param_9 = *param_9 + fVar26 * (float)param_1;
  }
  else {
    __n = 0x7fffffff;
  }
  if (param_11 == 0) {
    uVar25 = 0;
    goto LAB_001c2ad0;
  }
  lVar23 = (long)(int)(param_6 * 4 + 0x10);
  FUN_0015c528(&local_ab0,lVar23,param_13,&local_a98);
  pcVar8 = local_a98 + (int)(param_6 << 1);
  __n_00 = (size_t)(int)param_6;
  if (param_14 < 8) {
    if (3 < param_14) {
      local_a8c = 0x100000000;
      local_a84 = 0x300000002;
      local_a7c = 0x500000004;
      local_a74 = 0x700000006;
      local_a6c = 0x900000008;
      local_a64 = 0xb0000000a;
      local_a5c = 0xd0000000c;
      local_a54 = 0xf0000000e;
      local_a4c = 0x1100000010;
      local_a44 = 0x1300000012;
      local_a3c = 0x1500000014;
      local_a34 = 0x1700000016;
      local_a2c = 0x1900000018;
      uStack_a24 = 0x1b0000001a;
      local_a1c = 0x1d0000001c;
      uStack_a14 = 0x1f0000001e;
      local_a0c = 0x2100000020;
      uStack_a04 = 0x2300000022;
      local_9fc = 0x2500000024;
      uStack_9f4 = 0x2700000026;
      local_9ec = 0x2900000028;
      uStack_9e4 = 0x2b0000002a;
      local_9dc = 0x2d0000002c;
      uStack_9d4 = 0x2f0000002e;
      local_9cc = 0x3100000030;
      uStack_9c4 = 0x3300000032;
      local_9bc = 0x3500000034;
      uStack_9b4 = 0x3700000036;
      local_9ac = 0x3900000038;
      uStack_9a4 = 0x3b0000003a;
      local_99c = 0x3d0000003c;
      uStack_994 = 0x3f0000003e;
      local_98c = 0x4100000040;
      uStack_984 = 0x4300000042;
      local_97c = 0x4500000044;
      uStack_974 = 0x4700000046;
      local_96c = 0x4900000048;
      uStack_964 = 0x4b0000004a;
      local_95c = 0x4d0000004c;
      uStack_954 = 0x4f0000004e;
      local_94c = 0x5100000050;
      uStack_944 = 0x5300000052;
      local_93c = 0x5500000054;
      uStack_934 = 0x5700000056;
      local_92c = 0x5900000058;
      uStack_924 = 0x5b0000005a;
      local_91c = 0x5d0000005c;
      uStack_914 = 0x5f0000005e;
      local_90c = 0x6100000060;
      uStack_904 = 0x6300000062;
      local_8fc = 0x6500000064;
      uStack_8f4 = 0x6700000066;
      local_8ec = 0x6900000068;
      uStack_8e4 = 0x6b0000006a;
      local_8dc = 0x6d0000006c;
      uStack_8d4 = 0x6f0000006e;
      local_8cc = 0x7100000070;
      uStack_8c4 = 0x7300000072;
      local_8bc = 0x7500000074;
      uStack_8b4 = 0x7700000076;
      local_8ac = 0x7900000078;
      uStack_8a4 = 0x7b0000007a;
      local_89c = 0x7d0000007c;
      uStack_894 = 0x7f0000007e;
      puVar11 = &local_88c;
      local_88c = 0x80;
      if (0 < (int)param_6) {
        uVar9 = (ulong)param_6;
        uVar25 = *param_5;
        puVar12 = param_5;
        if ((int)uVar25 < 0x81) goto LAB_001c2280;
        while (uVar9 = uVar9 - 1, uVar9 != 0) {
          while( true ) {
            puVar12 = puVar12 + 1;
            uVar25 = *puVar12;
            if (0x80 < (int)uVar25) break;
LAB_001c2280:
            *(int *)((long)&local_a8c + (long)(int)uVar25 * 4) =
                 *(int *)((long)&local_a8c + (long)(int)uVar25 * 4) + 0x100;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_001c229c;
          }
        }
      }
LAB_001c229c:
      puVar12 = (uint *)&local_a8c;
      local_3e0 = 0;
      pfVar14 = local_3d8;
      fVar26 = 1.80768e-43;
      do {
        if (fVar26 == 2.8026e-45) {
          uVar25 = *puVar12;
          if (*puVar11 <= uVar25) goto LAB_001c22c4;
          *puVar12 = *puVar11;
          *puVar11 = uVar25;
          puVar12 = *(uint **)(pfVar14 + -6);
          puVar11 = *(uint **)(pfVar14 + -4);
          fVar26 = pfVar14[-2];
          pfVar14 = pfVar14 + -6;
          goto joined_r0x001c25fc;
        }
        uVar2 = (uint)fVar26 >> 1;
        puVar15 = puVar12 + uVar2;
        uVar18 = *puVar15;
        uVar25 = *puVar12;
        uVar22 = *puVar11;
        if (uVar25 < uVar18) {
          if (uVar22 < uVar18) {
            if (uVar25 <= uVar22) {
              *puVar15 = uVar25;
              *puVar12 = uVar18;
              uVar18 = *puVar15;
              *puVar15 = *puVar11;
              goto LAB_001c23c8;
            }
            *puVar12 = uVar18;
            *puVar15 = uVar25;
          }
          else {
            *puVar12 = uVar22;
            *puVar11 = uVar25;
          }
        }
        else if (uVar18 < uVar22) {
          if (uVar22 < uVar25) {
            *puVar15 = uVar22;
          }
          else {
            *puVar12 = uVar18;
            *puVar15 = uVar25;
            uVar18 = *puVar12;
            *puVar12 = *puVar11;
          }
LAB_001c23c8:
          *puVar11 = uVar18;
        }
        if ((uint)fVar26 < 5) {
          if (fVar26 == 4.2039e-45) goto LAB_001c22c4;
          uVar25 = *puVar15;
          uVar22 = puVar12[1];
          if (uVar25 <= uVar22) {
            uVar25 = *puVar12;
            if (uVar22 <= uVar25) goto LAB_001c22c4;
            *puVar12 = uVar22;
            puVar12[1] = uVar25;
            puVar12 = *(uint **)(pfVar14 + -6);
            puVar11 = *(uint **)(pfVar14 + -4);
            fVar26 = pfVar14[-2];
            pfVar14 = pfVar14 + -6;
            goto joined_r0x001c25fc;
          }
          if (uVar22 <= *puVar11) {
            *puVar15 = uVar22;
            puVar12[1] = uVar25;
            uVar25 = *puVar15;
            *puVar15 = *puVar11;
            *puVar11 = uVar25;
            puVar12 = *(uint **)(pfVar14 + -6);
            puVar11 = *(uint **)(pfVar14 + -4);
            fVar26 = pfVar14[-2];
            pfVar14 = pfVar14 + -6;
            goto joined_r0x001c25fc;
          }
          puVar12[1] = uVar25;
          *puVar15 = uVar22;
          puVar12 = *(uint **)(pfVar14 + -6);
          puVar11 = *(uint **)(pfVar14 + -4);
          fVar26 = pfVar14[-2];
          pfVar14 = pfVar14 + -6;
          if (fVar26 != 0.0) goto joined_r0x001c2324;
LAB_001c262c:
          FUN_0015cf00(aiStack_888,0x400);
          FUN_0015cf00(local_288,0x200);
          if ((int)param_6 < 1) {
            iVar17 = 0;
          }
          else {
            iVar5 = 0;
            uVar9 = (ulong)param_6;
            puVar11 = param_5;
            do {
              uVar25 = 0x1c - (int)LZCOUNT(*puVar11 + 8);
              uVar22 = *puVar11 + 8 >> (ulong)(uVar25 & 0x1f) ^ 8 | uVar25 * 8;
              uVar25 = uVar22 & 0xff;
              iVar5 = (uVar22 >> 3 & 0x1f) + iVar5;
              uVar9 = uVar9 - 1;
              aiStack_888[uVar25] = aiStack_888[uVar25] + 1;
              puVar11 = puVar11 + 1;
            } while (uVar9 != 0);
            local_288[0] = (float)((int)local_288[0] + param_6);
            iVar17 = iVar5 + 0xe;
            if (-1 < iVar5 + 7) {
              iVar17 = iVar5 + 7;
            }
            iVar17 = iVar17 >> 3;
          }
          iVar5 = FUN_001845e0(aiStack_888,0x100,param_6);
          bVar1 = (byte)local_a8c;
          fVar26 = (float)(int)(iVar17 + (iVar5 + 7U >> 3));
          if ((byte)local_a8c < 2) {
            uVar22 = 1;
            bVar1 = local_a8c._4_1_;
          }
          else {
            fVar28 = (float)FUN_001c2be0(param_1,(byte)local_a8c,param_5,param_6,param_8);
            fVar27 = fVar28;
            if (fVar26 <= fVar28) {
              fVar27 = fVar26;
            }
            uVar22 = (uint)bVar1;
            if (fVar26 <= fVar28) {
              uVar22 = 1;
            }
            fVar26 = fVar27;
            bVar1 = local_a8c._4_1_;
          }
          if (1 < bVar1) {
            fVar27 = (float)FUN_001c2be0(param_1,bVar1,param_5,param_6,param_8);
            bVar4 = fVar26 <= fVar27;
            if (bVar4) {
              fVar27 = fVar26;
            }
            fVar26 = fVar27;
            uVar25 = (uint)bVar1;
            if (bVar4) {
              uVar25 = uVar22;
            }
            uVar22 = uVar25;
          }
          bVar1 = (byte)local_a84;
          if ((byte)local_a84 < 2) {
            bVar1 = local_a84._4_1_;
          }
          else {
            fVar28 = (float)FUN_001c2be0(param_1,(byte)local_a84,param_5,param_6,param_8);
            fVar27 = fVar28;
            if (fVar26 <= fVar28) {
              fVar27 = fVar26;
            }
            uVar25 = (uint)bVar1;
            if (fVar26 <= fVar28) {
              uVar25 = uVar22;
            }
            uVar22 = uVar25;
            fVar26 = fVar27;
            bVar1 = local_a84._4_1_;
          }
          uVar25 = uVar22;
          if (1 < bVar1) {
            fVar27 = (float)FUN_001c2be0(param_1,bVar1,param_5,param_6,param_8);
            uVar25 = (uint)bVar1;
            if (fVar26 <= fVar27) {
              uVar25 = uVar22;
            }
          }
          goto LAB_001c27fc;
        }
        if (pfVar14 == local_288) {
          do {
            uVar2 = uVar2 - 1;
            puVar15 = puVar15 + -1;
            if (uVar2 == 0) {
              do {
                uVar9 = 1;
                do {
                  iVar17 = (int)uVar9;
                  puVar20 = puVar12 + uVar9;
                  if (puVar20 + 1 <= puVar11) {
                    if (puVar20[1] < *puVar20) {
                      iVar17 = iVar17 + 1;
                      puVar20 = puVar20 + 1;
                    }
                    else {
                    }
                  }
                  uVar25 = *puVar15;
                  if (uVar25 <= *puVar20) break;
                  *puVar15 = *puVar20;
                  fVar27 = (float)(iVar17 << 1 | 1);
                  uVar9 = (ulong)(uint)fVar27;
                  *puVar20 = uVar25;
                  puVar15 = puVar20;
                } while ((uint)fVar27 < (uint)fVar26);
                uVar25 = *puVar12;
                fVar26 = (float)((int)fVar26 - 1);
                *puVar12 = *puVar11;
                *puVar11 = uVar25;
                puVar11 = puVar11 + -1;
                puVar15 = puVar12;
                if ((uint)fVar26 < 2) {
                  pfVar14 = local_288;
                  goto LAB_001c22c4;
                }
              } while( true );
            }
            fVar27 = (float)(uVar2 * 2 | 1);
            puVar20 = puVar15;
            do {
              puVar21 = puVar12 + (uint)fVar27;
              if (puVar21 + 1 <= puVar11) {
                if (puVar21[1] < *puVar21) {
                  fVar27 = (float)((int)fVar27 + 1);
                  puVar21 = puVar21 + 1;
                }
                else {
                }
              }
              uVar25 = *puVar20;
              if (uVar25 <= *puVar21) break;
              *puVar20 = *puVar21;
              fVar27 = (float)((int)fVar27 << 1 | 1);
              *puVar21 = uVar25;
              puVar20 = puVar21;
            } while ((uint)fVar27 < (uint)fVar26);
          } while( true );
        }
        uVar25 = *puVar15;
        *puVar15 = *puVar12;
        *puVar12 = uVar25;
        puVar15 = puVar12;
        puVar20 = puVar11;
        while( true ) {
          do {
            puVar20 = puVar20 + -1;
          } while (*puVar20 < uVar25);
          puVar21 = puVar15;
          if (puVar20 <= puVar15) break;
          do {
            puVar15 = puVar21;
            puVar21 = puVar15 + 1;
            uVar22 = *puVar21;
          } while (uVar25 < uVar22);
          if (puVar20 <= puVar21) break;
          *puVar21 = *puVar20;
          *puVar20 = uVar22;
          uVar25 = *puVar12;
          puVar15 = puVar21;
        }
        *puVar12 = *puVar15;
        *puVar15 = uVar25;
        puVar20 = puVar15;
        do {
          puVar20 = puVar20 + 1;
          if (puVar11 <= puVar20) break;
        } while (uVar25 <= *puVar20);
        do {
          puVar15 = puVar15 + -1;
          if (puVar15 <= puVar12) break;
        } while (*puVar15 <= uVar25);
        iVar17 = (int)((ulong)((long)puVar11 - (long)puVar20) >> 2);
        fVar27 = (float)(iVar17 + 1);
        iVar5 = (int)((ulong)((long)puVar15 - (long)puVar12) >> 2);
        fVar26 = (float)(iVar5 + 1);
        bVar4 = (uint)fVar26 <= (uint)fVar27;
        puVar21 = puVar11;
        puVar3 = puVar20;
        if (bVar4) {
          fVar27 = (float)(iVar5 + 1);
          puVar21 = puVar15;
          puVar3 = puVar12;
        }
        *(uint **)pfVar14 = puVar3;
        *(uint **)(pfVar14 + 2) = puVar21;
        if (bVar4) {
          fVar26 = (float)(iVar17 + 1);
          puVar15 = puVar11;
        }
        pfVar14[4] = fVar27;
        if (bVar4) {
          puVar12 = puVar20;
        }
        pfVar14 = pfVar14 + 6;
        puVar11 = puVar15;
joined_r0x001c2324:
        while ((uint)fVar26 < 2) {
LAB_001c22c4:
          puVar12 = *(uint **)(pfVar14 + -6);
          puVar11 = *(uint **)(pfVar14 + -4);
          fVar26 = pfVar14[-2];
          pfVar14 = pfVar14 + -6;
joined_r0x001c25fc:
          if (fVar26 == 0.0) goto LAB_001c262c;
        }
      } while( true );
    }
joined_r0x001c280c:
    if ((int)param_6 < 1) {
      iVar17 = 0;
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      iVar17 = 0;
      uVar9 = (ulong)param_6;
      puVar16 = local_a98;
      pbVar13 = param_4;
      do {
        bVar1 = *pbVar13;
        uVar25 = 0x1c - (int)LZCOUNT(*param_5 + 8);
        iVar19 = bVar1 - 0xe0;
        if (bVar1 < 0xf0) {
          iVar19 = (bVar1 >> 4) + 4;
        }
        uVar25 = *param_5 + 8 >> (ulong)(uVar25 & 0x1f) ^ 8 | uVar25 * 8;
        *puVar16 = (char)uVar25;
        iVar17 = iVar19 + iVar17;
        iVar5 = (uVar25 >> 3 & 0x1f) + iVar5;
        uVar9 = uVar9 - 1;
        puVar16 = puVar16 + 1;
        param_5 = param_5 + 1;
        pbVar13 = pbVar13 + 1;
      } while (uVar9 != 0);
    }
    bVar4 = true;
    uVar25 = 1;
  }
  else {
    if ((int)param_6 < 0x20) goto joined_r0x001c280c;
    fVar26 = 1.0737418e+09;
    uVar22 = 1;
    uVar18 = 0;
    do {
      fVar27 = (float)FUN_001c2be0(param_1,uVar22,param_5,param_6,param_8);
      uVar25 = uVar22;
      if (fVar26 <= fVar27) {
        uVar25 = uVar18;
        fVar27 = fVar26;
      }
      fVar26 = fVar27;
      uVar22 = uVar22 + 1;
      uVar18 = uVar25;
    } while (uVar22 != 0x81);
LAB_001c27fc:
    if (uVar25 == 1) goto joined_r0x001c280c;
    if (0 < (int)param_6) {
      iVar5 = 0;
      iVar17 = 0;
      uVar9 = (ulong)param_6;
      uVar18 = (uint)*param_4;
      uVar22 = *param_5;
      pbVar13 = param_4;
      puVar16 = local_a98;
      if (*param_4 < 0xf0) goto LAB_001c29f8;
      do {
        iVar19 = uVar18 - 0xe0;
        while( true ) {
          iVar17 = iVar19 + iVar17;
          uVar18 = 0;
          if (uVar25 != 0) {
            uVar18 = uVar22 / uVar25;
          }
          uVar9 = uVar9 - 1;
          pbVar13 = pbVar13 + 1;
          param_5 = param_5 + 1;
          uVar2 = 0x1c - (int)LZCOUNT(uVar18 + 8);
          uVar2 = uVar18 + 8 >> (ulong)(uVar2 & 0x1f) ^ 8 | uVar2 * 8;
          *puVar16 = (char)uVar2;
          puVar16[__n_00] = (char)uVar22 - (char)uVar18 * (char)uVar25;
          iVar5 = (uVar2 >> 3 & 0x1f) + iVar5;
          puVar16 = puVar16 + 1;
          if (uVar9 == 0) {
            bVar4 = false;
            goto LAB_001c2820;
          }
          uVar18 = (uint)*pbVar13;
          uVar22 = *param_5;
          if (0xef < uVar18) break;
LAB_001c29f8:
          iVar19 = (uVar18 >> 4) + 4;
        }
      } while( true );
    }
    bVar4 = false;
    iVar17 = 0;
    iVar5 = 0;
  }
LAB_001c2820:
  *pcVar8 = (char)uVar25 + '\x7f';
  if (param_15 == (void *)0x0) {
    __src = (int *)0x0;
  }
  else {
    __src = aiStack_888;
    FUN_0015cf00(aiStack_888,0x400);
  }
  local_a8c = CONCAT44(local_a8c._4_4_,0x4e800000);
  lVar6 = FUN_00174f30(param_1,0x53800000,pcVar8 + 1,local_a98 + lVar23,local_a98,__n_00,param_7,
                       param_8,&local_a8c,param_13,param_14,__src);
  if (lVar6 < 0) {
    FUN_0015c3d0();
    pcVar10 = *(code **)PTR_PTR_047cb868;
    if (pcVar10 != (code *)0x0) {
      pcVar8 = "OODLE ERROR : offsets_alt_comp_len1 failed!";
      uVar7 = 0xb11;
LAB_001c2a68:
      (*pcVar10)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_offsets.cpp",uVar7,pcVar8);
    }
LAB_001c2a70:
    FUN_0015c3f0();
    bVar4 = true;
  }
  else {
    pcVar24 = pcVar8 + 1 + lVar6;
    local_288[0] = 0.0;
    if ((int)uVar25 < 2) {
      fVar26 = (float)local_a8c + 1.0 + 0.0;
      if (uVar25 != 0) goto LAB_001c2944;
      fVar27 = (float)(**(code **)(param_8 + 0x20))(__n_00);
    }
    else {
      local_288[0] = 1.0737418e+09;
      lVar23 = FUN_00174f30(param_1,0x53800000,pcVar24,local_a98 + lVar23,local_a98 + __n_00,__n_00,
                            param_7,param_8,local_288,param_13,param_14,param_16);
      if (lVar23 < 0) {
        FUN_0015c3d0();
        pcVar10 = *(code **)PTR_PTR_047cb868;
        if (pcVar10 != (code *)0x0) {
          pcVar8 = "OODLE ERROR : offsets_alt_comp_len2 failed!";
          uVar7 = 0xb24;
          goto LAB_001c2a68;
        }
        goto LAB_001c2a70;
      }
      fVar26 = (float)local_a8c + 1.0 + local_288[0];
      pcVar24 = pcVar24 + lVar23;
LAB_001c2944:
      fVar27 = (float)(**(code **)(param_8 + 0x28))(__n_00);
      if (!bVar4) {
        fVar28 = (float)(**(code **)(param_8 + 0x10))(__n_00);
        fVar27 = fVar27 + fVar28;
      }
    }
    iVar19 = iVar17 + 0xe;
    if (-1 < iVar17 + 7) {
      iVar19 = iVar17 + 7;
    }
    iVar17 = iVar5 + 0xe;
    if (-1 < iVar5 + 7) {
      iVar17 = iVar5 + 7;
    }
    fVar26 = fVar26 + fVar27 * (float)param_1;
    if (fVar26 + (float)(iVar17 >> 3) < *param_9 + (float)(iVar19 >> 3)) {
      __n = (long)pcVar24 - (long)pcVar8;
      memmove(param_2,pcVar8,__n);
      *param_9 = fVar26;
      memcpy(param_4,local_a98,__n_00);
      if (param_15 != (void *)0x0) {
        memcpy(param_15,__src,0x400);
      }
      bVar4 = false;
    }
    else {
      bVar4 = false;
      uVar25 = 0;
    }
  }
  if (local_aa8 != 0) {
    if ((local_ab0 == 0) ||
       ((local_aa0 + 0xfU & 0xfffffffffffffff0) + local_aa8 != *(long *)(local_ab0 + 8))) {
      (**(code **)PTR_PTR_047cb898)();
    }
    else {
      *(long *)(local_ab0 + 8) = local_aa8;
    }
  }
  if (bVar4) {
    return 0xffffffffffffffff;
  }
LAB_001c2ad0:
  *param_12 = uVar25;
  return __n;
}


