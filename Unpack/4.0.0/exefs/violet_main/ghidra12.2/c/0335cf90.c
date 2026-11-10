/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0335cf90; name: FUN_0335cf90
 */


undefined ** FUN_0335cf90(long *param_1,undefined **param_2)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  char *pcVar4;
  bool bVar5;
  uint uVar6;
  ulong *puVar7;
  size_t sVar8;
  long lVar9;
  undefined4 uVar10;
  undefined **ppuVar11;
  long *plVar12;
  ulong *puVar13;
  short *psVar14;
  ulong uVar15;
  uint uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined **ppuVar19;
  ulong *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  ushort uVar24;
  undefined8 uVar25;
  undefined **local_290;
  char *local_288;
  undefined *local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  uint local_240;
  undefined8 local_238;
  ulong local_230;
  undefined8 local_228 [3];
  undefined *local_210;
  undefined4 local_200;
  undefined8 local_188;
  ulong local_180;
  undefined8 local_170;
  long *local_158;
  long *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 *puStack_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [32];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined **local_70;
  long lStack_68;
  undefined **local_48;
  
  ppuVar11 = param_2;
  while( true ) {
    puVar17 = *ppuVar11;
    local_48 = param_2;
    if (((uint)puVar17 >> 3 & 1) != 0) break;
    if ((((ulong)puVar17 & 1) != 0) ||
       (ppuVar11 = (undefined **)ppuVar11[1], ppuVar11 == (undefined **)0x0)) goto LAB_0335d0f8;
  }
  if ((ppuVar11 != (undefined **)0x0) &&
     (ppuVar11[(ulong)(byte)POPCOUNT((byte)puVar17 & 7) + 2] != (undefined *)0x0)) {
    puVar17 = *param_2;
    ppuVar11 = param_2;
    if (((ulong)puVar17 & 1) == 0) {
      do {
        ppuVar11 = (undefined **)ppuVar11[1];
      } while (((ulong)*ppuVar11 & 1) == 0);
    }
    if ((param_2 != (undefined **)0x0) && (((ulong)ppuVar11[2] & 0x1f) == 7)) {
      uVar18 = 0;
      ppuVar11 = param_2;
      if (((uint)puVar17 >> 0x15 & 1) != 0) goto LAB_0335d050;
      do {
        puVar22 = (undefined *)0x0;
        while( true ) {
          uVar18 = (ulong)puVar22 | uVar18;
          if ((((ulong)puVar17 & 1) != 0) ||
             (ppuVar11 = (undefined **)ppuVar11[1], ppuVar11 == (undefined **)0x0)) {
            if (((uint)uVar18 >> 5 & 1) != 0) goto LAB_0335d0f8;
            local_290 = &local_280;
            local_200 = 1;
            local_280 = (undefined *)((ulong)local_280 & 0xffffffffffffff00);
            local_288 = (char *)0x8000008000000001;
            FUN_031e12d8(param_2,&local_290,0,0);
            lStack_68 = (long)local_290 + (long)(int)local_288 + -1;
            local_70 = local_290;
            goto LAB_0335d0d8;
          }
          puVar17 = *ppuVar11;
          if (((uint)puVar17 >> 0x15 & 1) == 0) break;
LAB_0335d050:
          uVar15 = CONCAT44((int)puVar17,(int)puVar17) & 0x1fffff001fffff;
          puVar22 = ppuVar11[(ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8)) +
                                          POPCOUNT((char)(uVar15 >> 0x10))) + 2];
        }
      } while( true );
    }
  }
LAB_0335d0f8:
  puVar17 = *param_2;
  uVar6 = (uint)puVar17;
  ppuVar11 = param_2;
  if (((ulong)puVar17 & 1) == 0) {
    do {
      ppuVar11 = (undefined **)ppuVar11[1];
    } while (((ulong)*ppuVar11 & 1) == 0);
  }
  if ((param_2 != (undefined **)0x0) && (((ulong)ppuVar11[2] & 0x1f) == 7)) {
    uVar18 = 0;
    ppuVar11 = param_2;
    puVar22 = puVar17;
    if ((uVar6 >> 0x15 & 1) == 0) goto LAB_0335d170;
    do {
      uVar15 = CONCAT44((int)puVar22,(int)puVar22) & 0x1fffff001fffff;
      puVar23 = ppuVar11[(ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8)) +
                                      POPCOUNT((char)(uVar15 >> 0x10))) + 2];
      while( true ) {
        uVar18 = (ulong)puVar23 | uVar18;
        if ((((ulong)puVar22 & 1) != 0) ||
           (ppuVar11 = (undefined **)ppuVar11[1], ppuVar11 == (undefined **)0x0)) {
          if (((uint)uVar18 >> 5 & 1) == 0) goto LAB_0335d17c;
          local_290 = (undefined **)0x0;
          uVar6 = FUN_0335dd40(param_1 + 0x35,&local_48,&local_290);
          plVar12 = (long *)(param_1[0x35] + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8);
          puVar7 = (ulong *)*plVar12;
          if (puVar7 != (ulong *)0x0) {
            return (undefined **)puVar7;
          }
          *plVar12 = 1;
          local_270 = 0xffffffff;
          local_268 = 0;
          uStack_260 = 0;
          local_240 = 0;
          local_290 = (undefined **)(PTR_DAT_047e5b58 + 0x10);
          local_288 = PTR_DAT_047e5b60 + 0x10;
          local_238 = 0;
          local_230 = 0;
          local_280 = PTR_PTR_047d1a50 + 0x20;
          local_c0 = auStack_b0;
          local_98 = 0;
          local_90 = 0;
          local_80 = 0;
          local_78 = 1;
          local_76 = 0;
          uStack_278 = 0x4000;
          puStack_100 = auStack_f0;
          local_248 = 0x8000000000000000;
          local_88 = 0x8000000000000000;
          local_108 = 0x8000000000000000;
          local_f8 = 0x8000000200000000;
          local_258 = 0x8000000000000000;
          uStack_250 = 0;
          local_128 = (long *)0x0;
          uStack_120 = 0;
          local_118 = 0x8000000000000000;
          uStack_110 = 0;
          local_d0 = 0;
          uStack_c8 = 0x8000000000000000;
          uStack_b8 = 0x8000000300000000;
          memset(local_228,0,0x100);
          local_77 = 1;
          if (local_48[1] == (undefined *)0x0) {
            local_238 = 0;
          }
          else {
            local_238 = FUN_0335cf90(param_1);
          }
          ppuVar11 = local_48;
          goto LAB_0335d560;
        }
        puVar22 = *ppuVar11;
        if (((uint)puVar22 >> 0x15 & 1) != 0) break;
LAB_0335d170:
        puVar23 = (undefined *)0x0;
      }
    } while( true );
  }
LAB_0335d17c:
  ppuVar11 = param_2;
  if (((ulong)puVar17 & 1) == 0) {
    ppuVar21 = param_2;
    do {
      ppuVar21 = (undefined **)ppuVar21[1];
    } while (((ulong)*ppuVar21 & 1) == 0);
    ppuVar19 = param_2;
    if ((param_2 != (undefined **)0x0) && (((ulong)ppuVar21[2] & 0x1f) == 6)) goto LAB_0335d220;
    do {
      ppuVar19 = (undefined **)ppuVar19[1];
    } while (((ulong)*ppuVar19 & 1) == 0);
    if ((param_2 != (undefined **)0x0) && (((ulong)ppuVar19[2] & 0x1f) == 8)) goto LAB_0335d38c;
    if (((ulong)puVar17 & 1) == 0) {
      ppuVar21 = param_2;
      do {
        ppuVar21 = (undefined **)ppuVar21[1];
      } while (((ulong)*ppuVar21 & 1) == 0);
      if ((param_2 != (undefined **)0x0) && (((ulong)ppuVar21[2] & 0x1f) == 3)) goto LAB_0335d3cc;
      do {
        ppuVar11 = (undefined **)ppuVar11[1];
      } while (((ulong)*ppuVar11 & 1) == 0);
      goto LAB_0335d4b8;
    }
  }
  else {
    if ((param_2 != (undefined **)0x0) && (((ulong)param_2[2] & 0x1f) == 6)) {
LAB_0335d220:
      if ((uVar6 >> 1 & 1) == 0) {
        do {
          ppuVar11 = (undefined **)ppuVar11[1];
          if (ppuVar11 == (undefined **)0x0) goto LAB_0335d354;
        } while ((*(byte *)ppuVar11 >> 1 & 1) == 0);
      }
      if (ppuVar11[3] == (undefined *)0x0) {
LAB_0335d354:
        uVar25 = 0;
      }
      else {
        uVar25 = FUN_0335cf90(param_1);
      }
      ppuVar11 = param_2;
      while (puVar17 = *ppuVar11, ((uint)puVar17 >> 3 & 1) == 0) {
        if ((((ulong)puVar17 & 1) != 0) ||
           (ppuVar11 = (undefined **)ppuVar11[1], ppuVar11 == (undefined **)0x0)) goto LAB_0335d44c;
      }
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11 = (undefined **)ppuVar11[(ulong)(byte)POPCOUNT((byte)puVar17 & 7) + 2];
        local_290 = ppuVar11;
        if (ppuVar11 == (undefined **)0x0) {
          local_288 = (char *)0x0;
        }
        else {
          sVar8 = strlen((char *)ppuVar11);
          local_288 = (char *)((long)ppuVar11 + sVar8);
        }
        goto LAB_0335d45c;
      }
LAB_0335d44c:
      local_288 = (char *)0x0;
      local_290 = (undefined **)0x0;
LAB_0335d45c:
      do {
        uVar6 = (uint)*param_2;
        if ((uVar6 >> 0xf & 1) != 0) {
          uVar18 = CONCAT44(uVar6,uVar6) & 0x7fff00007fff;
          bVar5 = param_2[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8))) + 2]
                  != (undefined *)0x0;
          goto LAB_0335d4a4;
        }
        if (((ulong)*param_2 & 9) != 0) break;
        param_2 = (undefined **)param_2[1];
      } while (param_2 != (undefined **)0x0);
      bVar5 = false;
LAB_0335d4a4:
      puVar7 = (ulong *)FUN_03367c74(param_1 + 0x8b,&local_290,uVar25,bVar5);
      return (undefined **)puVar7;
    }
    if ((param_2 != (undefined **)0x0) && (((ulong)param_2[2] & 0x1f) == 8)) {
LAB_0335d38c:
      uVar18 = FUN_033670d0(param_2);
      if ((uVar18 & 1) != 0) {
        return param_2;
      }
      do {
        if ((*(byte *)ppuVar11 >> 1 & 1) != 0) {
          if (ppuVar11[3] != (undefined *)0x0) {
            uVar25 = FUN_0335cf90(param_1);
            goto LAB_0335d538;
          }
          break;
        }
        ppuVar11 = (undefined **)ppuVar11[1];
      } while (ppuVar11 != (undefined **)0x0);
      uVar25 = 0;
LAB_0335d538:
      do {
        puVar17 = *param_2;
        if (((uint)puVar17 >> 3 & 1) != 0) {
          if (param_2 != (undefined **)0x0) {
            ppuVar11 = (undefined **)param_2[(ulong)(byte)POPCOUNT((byte)puVar17 & 7) + 2];
            local_290 = ppuVar11;
            if (ppuVar11 == (undefined **)0x0) {
              local_288 = (char *)0x0;
            }
            else {
              sVar8 = strlen((char *)ppuVar11);
              local_288 = (char *)((long)ppuVar11 + sVar8);
            }
            goto LAB_0335d5bc;
          }
          break;
        }
      } while ((((ulong)puVar17 & 1) == 0) &&
              (param_2 = (undefined **)param_2[1], param_2 != (undefined **)0x0));
      local_288 = (char *)0x0;
      local_290 = (undefined **)0x0;
LAB_0335d5bc:
      puVar7 = (ulong *)FUN_03368094(param_1 + 0x8b,&local_290,uVar25,1,0,0,0);
      return (undefined **)puVar7;
    }
  }
  if ((param_2 != (undefined **)0x0) && (((ulong)param_2[2] & 0x1f) == 3)) {
LAB_0335d3cc:
    do {
      if ((uVar6 >> 3 & 1) != 0) {
        puVar17 = ppuVar11[(ulong)(byte)POPCOUNT((byte)uVar6 & 7) + 2];
LAB_0335d614:
        uVar18 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,puVar17,0xffffffff,1);
        for (; ((ulong)*param_2 & 1) == 0; param_2 = (undefined **)param_2[1]) {
        }
        puVar17 = param_2[2];
        puVar7 = (ulong *)(**(code **)(param_1[0x28] + 0x18))(param_1 + 0x28,0x38);
        *puVar7 = 0x30000d;
        puVar7[1] = 0;
        puVar7[4] = uVar18;
        puVar7[5] = 0x40004;
        puVar7[6] = 0x1000;
        puVar7[2] = (ulong)puVar17 & 0x80 | 3;
        puVar7[3] = (ulong)(param_1 + 0x46);
        return (undefined **)puVar7;
      }
      if ((((ulong)puVar17 & 1) != 0) ||
         (ppuVar11 = (undefined **)ppuVar11[1], ppuVar11 == (undefined **)0x0)) {
        puVar17 = (undefined *)0x0;
        goto LAB_0335d614;
      }
      puVar17 = *ppuVar11;
      uVar6 = (uint)puVar17;
    } while( true );
  }
LAB_0335d4b8:
  if (param_2 == (undefined **)0x0) {
    return (undefined **)(ulong *)0x0;
  }
  if (((ulong)ppuVar11[2] & 0x1f) != 1) {
    return param_2;
  }
  puVar7 = (ulong *)(**(code **)(**(long **)PTR_DAT_047ddc48 + 0x30))
                              (*(long **)PTR_DAT_047ddc48,param_2);
  if (puVar7 == (ulong *)0x0) {
    return param_2;
  }
  if (puVar7 == (ulong *)PTR_DAT_047e5c40) {
    return (undefined **)(ulong *)PTR_DAT_047e5c40;
  }
  puVar13 = puVar7;
  while( true ) {
    uVar6 = (uint)*puVar13;
    if ((uVar6 >> 0xd & 1) != 0) break;
    if (((*puVar13 & 1) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0))
    goto LAB_0335d954;
  }
  if (puVar13 != (ulong *)0x0) {
    uVar6 = uVar6 & 0x1fff;
    local_290 = (undefined **)
                (puVar13 + (ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8))) + 2);
    goto LAB_0335d95c;
  }
LAB_0335d954:
  local_290 = (undefined **)0x0;
LAB_0335d95c:
  puVar13 = (ulong *)PTR_DAT_047e5c40;
  while( true ) {
    uVar6 = (uint)*puVar13;
    if ((uVar6 >> 0xd & 1) != 0) break;
    if (((*puVar13 & 1) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0))
    goto LAB_0335d9c0;
  }
  if ((puVar13 != (ulong *)0x0) &&
     (uVar18 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff,
     local_70 = (undefined **)
                (puVar13 + (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8))) + 2
                ), local_290 != (undefined **)0x0)) {
    uVar18 = FUN_031dd354(&local_290,&local_70);
    if ((uVar18 & 1) == 0) {
      return param_2;
    }
    return (undefined **)puVar7;
  }
LAB_0335d9c0:
  puVar13 = (ulong *)PTR_DAT_047e5c40;
  do {
    if ((*puVar13 & 1) != 0) break;
    puVar13 = (ulong *)puVar13[1];
  } while (puVar13 != (ulong *)0x0);
  puVar20 = puVar7;
  do {
    if (puVar20 == puVar13) {
      return (undefined **)puVar7;
    }
    puVar20 = (ulong *)puVar20[1];
  } while (puVar20 != (ulong *)0x0);
  return param_2;
  while ((((ulong)puVar17 & 9) == 0 &&
         (param_2 = (undefined **)param_2[1], param_2 != (undefined **)0x0))) {
LAB_0335d0d8:
    puVar17 = *param_2;
    if (((uint)puVar17 >> 4 & 1) != 0) {
      uVar10 = *(undefined4 *)(param_2 + (ulong)(byte)POPCOUNT((byte)puVar17 & 0xf) + 2);
      goto LAB_0335d8d0;
    }
  }
  uVar10 = 0;
LAB_0335d8d0:
  lVar9 = (**(code **)(*param_1 + 8))(param_1,&local_70,uVar10);
  pcVar4 = local_288;
  local_288 = (char *)((ulong)local_288 & 0xffffffff00000000);
  if ((-1 < (long)pcVar4) && (local_290 != (undefined **)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return (undefined **)*(ulong **)(lVar9 + 0x50);
  while (ppuVar11 = (undefined **)ppuVar11[1], ppuVar11 != (undefined **)0x0) {
LAB_0335d560:
    puVar17 = *ppuVar11;
    if (((uint)puVar17 >> 3 & 1) != 0) {
      puVar22 = (undefined *)0x0;
      if (ppuVar11 != (undefined **)0x0) {
        puVar22 = ppuVar11[(ulong)(byte)POPCOUNT((byte)puVar17 & 7) + 2];
      }
      goto LAB_0335d690;
    }
    if (((ulong)puVar17 & 1) != 0) {
      puVar22 = (undefined *)0x0;
      goto LAB_0335d690;
    }
  }
  puVar22 = (undefined *)0x0;
LAB_0335d690:
  local_228[0] = 7;
  uVar18 = local_230 | 0x800001;
  if (puVar22 != (undefined *)0x0) {
    uVar18 = local_230 | 0x800009;
    local_210 = puVar22;
  }
  local_230 = uVar18 | 0x100000;
  local_188 = 0;
  ppuVar11 = local_48;
  while( true ) {
    uVar16 = (uint)*ppuVar11;
    if ((uVar16 >> 0x17 & 1) != 0) break;
    if ((((ulong)*ppuVar11 & 1) != 0) ||
       (ppuVar11 = (undefined **)ppuVar11[1], ppuVar11 == (undefined **)0x0)) goto LAB_0335d83c;
  }
  if (ppuVar11 != (undefined **)0x0) {
    uVar18 = CONCAT44(uVar16,uVar16) & 0x7fffff007fffff;
    psVar14 = (short *)ppuVar11[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8))
                                             + POPCOUNT((char)(uVar18 >> 0x10))) + 2];
    if ((psVar14 != (short *)0x0) &&
       (sVar2 = *psVar14, sVar3 = psVar14[1], (long)sVar3 + (long)sVar2 != 0)) {
      plVar12 = (long *)(psVar14 + 4);
      do {
        local_170 = 0;
        puVar7 = (ulong *)*plVar12;
        if (puVar7 != (ulong *)0x0) {
          puVar13 = puVar7;
          do {
            uVar16 = (uint)*puVar13;
            if ((uVar16 >> 0x10 & 1) != 0) {
              uVar18 = CONCAT44(uVar16,uVar16) & 0xffff0000ffff;
              uVar18 = puVar13[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)))
                               + 2];
              goto LAB_0335d778;
            }
          } while (((*puVar13 & 1) == 0) && (puVar13 = (ulong *)puVar13[1], puVar13 != (ulong *)0x0)
                  );
        }
        uVar18 = 0;
LAB_0335d778:
        uVar16 = (uint)*puVar7;
        if ((uVar16 >> 0x11 & 1) == 0) {
          uVar24 = 0;
        }
        else {
          uVar15 = CONCAT44(uVar16,uVar16) & 0x1ffff0001ffff;
          uVar24 = *(ushort *)
                    ((long)puVar7 +
                    (ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8)) +
                                 POPCOUNT((char)(uVar15 >> 0x10))) * 8 + 0x12);
        }
        uVar25 = FUN_0335cf90(param_1,puVar7[1]);
        lVar9 = FUN_031d8fdc(&local_290,uVar24);
        local_230 = local_230 | 0x800000;
        *(long **)(lVar9 + 0x168) = local_128;
        if (local_128 == (long *)0x0) {
          uVar15 = *(ulong *)(lVar9 + 0x60) & 0xfffffffffbffffff;
          *(ulong *)(lVar9 + 0x60) = uVar15;
        }
        else {
          uVar15 = *(ulong *)(lVar9 + 0x60) | 0x4000000;
          *(ulong *)(lVar9 + 0x60) = uVar15;
          *(long **)(lVar9 + 0x138) = local_128;
        }
        *(undefined8 *)(lVar9 + 0xf8) = 0;
        uVar16 = 0xffff;
        if ((uVar24 & 0x10) != 0) {
          uVar16 = 0;
        }
        *(undefined8 *)(lVar9 + 0x58) = uVar25;
        *(ulong *)(lVar9 + 0x60) = uVar15 | 0x70000;
        uVar1 = (uint)uVar24 << 0x10 | 0x200000;
        if ((uVar24 & 0x30) != 0) {
          uVar1 = (uint)uVar24 << 0x10;
        }
        plVar12 = plVar12 + 1;
        *(ulong *)(lVar9 + 0xe8) = uVar18;
        *(ulong *)(lVar9 + 0xf0) = (ulong)(uVar1 | uVar16);
      } while (plVar12 != (long *)(psVar14 + ((long)sVar3 + (long)sVar2) * 4 + 4));
    }
  }
LAB_0335d83c:
  local_170 = 0;
  local_180 = (ulong)local_240 | 0x1020;
  local_240 = (uint)local_180;
  if (param_1 == (long *)0x0) {
    local_230 = local_230 & 0xfffffffffbffffff | 0x200000;
  }
  else {
    local_230 = local_230 | 0x4200000;
    local_158 = param_1;
  }
  local_128 = param_1;
  FUN_031d8d9c(&local_290,param_1 + 0x28,&local_70);
  *(undefined ***)(param_1[0x35] + (long)(int)uVar6 * 0x10 + 8) = local_70;
  FUN_031d798c(&local_290);
  return local_70;
}


