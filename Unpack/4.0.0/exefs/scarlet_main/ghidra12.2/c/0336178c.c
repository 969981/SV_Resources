/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336178c; name: FUN_0336178c
 */


undefined4 * FUN_0336178c(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  size_t sVar10;
  void *pvVar11;
  undefined2 *puVar12;
  short sVar13;
  uint uVar14;
  long lVar15;
  short sVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  int iVar22;
  undefined4 *puVar23;
  ulong uVar24;
  char *__s;
  long *plVar25;
  short *psVar26;
  undefined4 *local_4c8;
  undefined *puStack_4c0;
  undefined *local_4b8;
  undefined8 uStack_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined4 local_490;
  undefined4 local_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined4 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined1 auStack_460 [96];
  undefined8 local_400;
  void *local_3e0;
  ulong uStack_3d8;
  undefined4 *local_3d0;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 *local_338;
  undefined4 local_330;
  undefined4 local_32c;
  undefined1 auStack_328 [32];
  undefined8 local_308;
  undefined8 local_300;
  undefined1 *local_2f8;
  undefined8 local_2f0;
  undefined1 auStack_2e8 [24];
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined2 local_2b0;
  undefined1 local_2ae;
  void *local_2a8;
  undefined8 local_2a0;
  undefined *local_298;
  undefined *local_290;
  undefined *local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  uint local_248;
  ulong *local_240;
  ulong local_238;
  ulong local_230 [2];
  undefined8 *local_220;
  undefined8 local_1d8;
  ulong local_188;
  long local_160;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [24];
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  ulong *local_78;
  undefined8 local_70 [2];
  
  plVar2 = (long *)(param_1 + 0x408);
  local_78 = param_2;
  lVar8 = FUN_03362068(plVar2,&local_78);
  puVar6 = PTR_DAT_047e5b60;
  puVar5 = PTR_DAT_047e5b58;
  plVar25 = (long *)PTR_PTR_047d1a50;
  if ((lVar8 != 0) &&
     (puVar23 = *(undefined4 **)(*plVar2 + (long)*(int *)(lVar8 + 4) * 0x10 + 8),
     puVar23 != (undefined4 *)0x0)) {
    return puVar23;
  }
  local_270 = 0;
  local_268 = 0;
  local_278 = 0xffffffff;
  local_298 = PTR_DAT_047e5b58 + 0x10;
  local_290 = PTR_DAT_047e5b60 + 0x10;
  local_280 = 0x4000;
  local_108 = auStack_f8;
  local_100 = 0x8000000200000000;
  local_c8 = auStack_b8;
  local_288 = PTR_PTR_047d1a50 + 0x20;
  local_260 = 0x8000000000000000;
  local_258 = 0;
  local_250 = 0x8000000000000000;
  local_248 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0x8000000000000000;
  local_118 = 0;
  local_110 = 0x8000000000000000;
  local_d8 = 0;
  local_d0 = 0x8000000000000000;
  local_c0 = 0x8000000300000000;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0x8000000000000000;
  local_88 = 0;
  local_80 = 1;
  local_7e = 0;
  memset(local_230,0,0x100);
  uVar24 = *param_2;
  local_240 = (ulong *)param_2[1];
  lVar8 = 0;
  do {
    uVar7 = 1 << (ulong)((uint)lVar8 & 0x1f);
    uVar14 = (uint)uVar24;
    if ((uVar24 & uVar7) == 0) {
      uVar19 = 0;
    }
    else {
      uVar7 = uVar7 - 1 & uVar14;
      uVar19 = (param_2 + 2)
               [(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8)) +
                      POPCOUNT((char)(uVar7 >> 0x10)) + POPCOUNT((char)(uVar7 >> 0x18)))];
    }
    lVar15 = lVar8 + 1;
    local_230[lVar8] = uVar19;
    lVar8 = lVar15;
  } while (lVar15 != 0x20);
  uVar18 = 0;
  puVar20 = param_2;
  uVar19 = uVar24;
  if ((uVar14 >> 0x15 & 1) != 0) goto LAB_0336192c;
LAB_03361924:
  uVar21 = 0;
  while ((uVar18 = uVar21 | uVar18, (uVar19 & 1) == 0 &&
         (puVar20 = (ulong *)puVar20[1], puVar20 != (ulong *)0x0))) {
    uVar19 = *puVar20;
    if (((uint)uVar19 >> 0x15 & 1) == 0) goto LAB_03361924;
LAB_0336192c:
    uVar21 = CONCAT44((int)uVar19,(int)uVar19) & 0x1fffff001fffff;
    uVar21 = puVar20[(ulong)(byte)(POPCOUNT((char)uVar21) + POPCOUNT((char)(uVar21 >> 8)) +
                                  POPCOUNT((char)(uVar21 >> 0x10))) + 2];
  }
  local_248 = (uint)uVar18 & 0xffff | 0x1000;
  local_188 = (ulong)local_248;
  if ((uVar24 & 1) != 0) {
    if (param_2 == (ulong *)0x0) goto LAB_033619f4;
    puVar20 = param_2;
    if ((param_2[2] & 0x1f) == 7) goto LAB_03361a0c;
    goto LAB_033619f8;
  }
  puVar20 = local_240;
  if ((*local_240 & 1) == 0) {
    do {
      puVar20 = (ulong *)puVar20[1];
    } while ((*puVar20 & 1) == 0);
  }
  if ((param_2 == (ulong *)0x0) || ((puVar20[2] & 0x1f) != 7)) {
    puVar20 = local_240;
    if ((uVar24 & 1) == 0) {
      for (; (*puVar20 & 1) == 0; puVar20 = (ulong *)puVar20[1]) {
      }
    }
    else {
LAB_033619f4:
      puVar20 = param_2;
    }
LAB_033619f8:
    if ((param_2 != (ulong *)0x0) && ((puVar20[2] & 0x1f) == 6)) goto LAB_03361a0c;
    local_238 = uVar24 & 0xfbffffff | 0x200000;
    local_130 = 0;
  }
  else {
LAB_03361a0c:
    if (param_1 == 0) {
      local_238 = uVar24 & 0xfbffffff | 0x200000;
    }
    else {
      local_238 = uVar24 & 0xffffffff | 0x4200000;
      local_160 = param_1;
    }
    local_238 = local_238 | 0x800;
    local_1d8 = 0;
    local_130 = param_1;
  }
  if ((uVar24 & 1) == 0) goto LAB_03361bec;
  uVar19 = param_2[2] & 0x1f;
  if (param_2 == (ulong *)0x0 || uVar19 != 6) {
    if (param_2 == (ulong *)0x0 || uVar19 != 8) goto LAB_03361bec;
    puVar20 = param_2;
    if ((uVar14 >> 2 & 1) == 0) {
      while (puVar20 = (ulong *)puVar20[1], puVar20 != (ulong *)0x0) {
        uVar24 = *puVar20;
        if (((uint)uVar24 >> 2 & 1) != 0) goto LAB_03361a9c;
      }
      uVar24 = 0;
    }
    else {
LAB_03361a9c:
      uVar24 = puVar20[(uVar24 >> 1 & 1) + (uVar24 & 1) + 2];
    }
    local_220 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x140) + 0x18))(param_1 + 0x140,0x20)
    ;
    *(undefined4 *)(local_220 + 1) = 1;
    *local_220 = &PTR_LAB_047ad2c0;
    local_220[2] = uVar24;
    local_220[3] = param_1;
    local_238 = local_238 | 4;
    puVar20 = param_2;
    do {
      if (((byte)*puVar20 >> 1 & 1) != 0) {
        if (puVar20[3] != 0) {
          while (((byte)*param_2 >> 1 & 1) == 0) {
            param_2 = (ulong *)param_2[1];
            if (param_2 == (ulong *)0x0) goto LAB_03361bc8;
          }
LAB_03361bd0:
          uVar24 = param_2[3];
          goto LAB_03361bd4;
        }
        break;
      }
      puVar20 = (ulong *)puVar20[1];
    } while (puVar20 != (ulong *)0x0);
  }
  else {
    puVar20 = param_2;
    if ((uVar14 >> 2 & 1) == 0) {
      while (puVar20 = (ulong *)puVar20[1], puVar20 != (ulong *)0x0) {
        uVar24 = *puVar20;
        if (((uint)uVar24 >> 2 & 1) != 0) goto LAB_03361ad4;
      }
      uVar24 = 0;
    }
    else {
LAB_03361ad4:
      uVar24 = puVar20[(uVar24 >> 1 & 1) + (uVar24 & 1) + 2];
    }
    local_220 = (undefined8 *)(**(code **)(*(long *)(param_1 + 0x140) + 0x18))(param_1 + 0x140,0x20)
    ;
    *(undefined4 *)(local_220 + 1) = 1;
    *local_220 = &PTR_LAB_047ad208;
    local_220[2] = uVar24;
    local_220[3] = param_1;
    local_238 = local_238 | 4;
    puVar20 = param_2;
    do {
      if (((byte)*puVar20 >> 1 & 1) != 0) {
        if (puVar20[3] != 0) {
          do {
            if (((byte)*param_2 >> 1 & 1) != 0) goto LAB_03361bd0;
            param_2 = (ulong *)param_2[1];
          } while (param_2 != (ulong *)0x0);
LAB_03361bc8:
          uVar24 = 0;
LAB_03361bd4:
          local_230[1] = FUN_0336178c(param_1,uVar24);
          local_238 = local_238 | 2;
        }
        break;
      }
      puVar20 = (ulong *)puVar20[1];
    } while (puVar20 != (ulong *)0x0);
  }
LAB_03361bec:
  if (local_78[1] != 0) {
    local_240 = (ulong *)FUN_0336178c(param_1);
  }
  plVar3 = (long *)(param_1 + 0x140);
  FUN_031d8d9c(&local_298,plVar3,&local_4c8);
  puVar23 = local_4c8;
  uVar7 = FUN_0335ddd8(plVar2,&local_78);
  if (*(uint *)(param_1 + 0x410) == uVar7) {
    iVar22 = uVar7 + 1;
    if ((int)(*(uint *)(param_1 + 0x414) & 0x7fffffff) <= (int)uVar7) {
      FUN_0335def4(plVar2,PTR_PTR_047d1a50,(long)iVar22);
      uVar7 = *(uint *)(param_1 + 0x410);
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x408) + (long)(int)uVar7 * 0x10);
    *puVar1 = local_78;
    puVar1[1] = puVar23;
    *(int *)(param_1 + 0x410) = iVar22;
  }
  else {
    *(undefined4 **)(*plVar2 + ((long)((ulong)uVar7 << 0x20) >> 0x1c) + 8) = puVar23;
  }
  uVar7 = (uint)*local_78;
  if ((uVar7 >> 0x17 & 1) == 0) goto LAB_0336203c;
  uVar24 = CONCAT44(uVar7,uVar7) & 0x7fffff007fffff;
  psVar26 = (short *)local_78[(ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8)) +
                                           POPCOUNT((char)(uVar24 >> 0x10))) + 2];
  if (psVar26 == (short *)0x0) goto LAB_0336203c;
  local_2a8 = (void *)0x0;
  local_2a0 = -0x8000000000000000;
  sVar13 = *psVar26;
  sVar16 = psVar26[1];
  if (0 < (int)sVar16 + (int)sVar13) {
    lVar8 = 0;
    puVar4 = (undefined *)((long)plVar25 + 0x20);
LAB_03361d18:
    puVar20 = *(ulong **)(psVar26 + lVar8 * 4 + 4);
    if (puVar20 != (ulong *)0x0) {
      puVar17 = puVar20;
      while( true ) {
        uVar7 = (uint)*puVar17;
        if ((uVar7 >> 0x10 & 1) != 0) break;
        if (((*puVar17 & 1) != 0) || (puVar17 = (ulong *)puVar17[1], puVar17 == (ulong *)0x0))
        goto LAB_03361f78;
      }
      uVar24 = CONCAT44(uVar7,uVar7) & 0xffff0000ffff;
      if ((puVar17[(ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8))) + 2] != 0)
         && ((uVar7 = (uint)*puVar20, (uVar7 >> 0x11 & 1) == 0 ||
             (uVar24 = CONCAT44(uVar7,uVar7) & 0x1ffff0001ffff,
             ((uint)puVar20[(ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8)) +
                                         POPCOUNT((char)(uVar24 >> 0x10))) + 2] >> 0x10 & 1) == 0)))
         ) {
        uVar9 = FUN_0336178c(param_1,puVar20[1]);
        puVar17 = puVar20;
        goto LAB_03361da4;
      }
    }
    goto LAB_03361f78;
  }
  iVar22 = 0;
LAB_03361fa0:
  pvVar11 = local_2a8;
  uVar24 = (ulong)(iVar22 << 3);
  puVar12 = (undefined2 *)(**(code **)(*plVar3 + 0x18))(plVar3,uVar24 + 8);
  *puVar12 = (short)iVar22;
  puVar12[1] = 0;
  puVar12[2] = (short)iVar22;
  if (pvVar11 == (void *)0x0) {
    memset(puVar12 + 4,0,uVar24 & 0xfffffff8);
  }
  else {
    memcpy(puVar12 + 4,pvVar11,uVar24);
  }
  lVar8 = local_2a0;
  uVar24 = CONCAT44(*puVar23,*puVar23) & 0x7fffff007fffff;
  *(undefined2 **)
   (puVar23 +
   (ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8)) +
                POPCOUNT((char)(uVar24 >> 0x10))) * 2 + 4) = puVar12;
  uVar24 = (ulong)local_2a0._4_4_;
  local_2a0 = (ulong)local_2a0._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_2a8 != (void *)0x0)) {
    (**(code **)(*plVar25 + 0x20))(plVar25,local_2a8,uVar24 << 3);
  }
LAB_0336203c:
  FUN_031d798c(&local_298);
  return puVar23;
  while (((*puVar17 & 1) == 0 && (puVar17 = (ulong *)puVar17[1], puVar17 != (ulong *)0x0))) {
LAB_03361da4:
    uVar7 = (uint)*puVar17;
    if ((uVar7 >> 0x10 & 1) != 0) {
      uVar7 = uVar7 & 0xffff;
      __s = (char *)puVar17[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) + 2]
      ;
      goto LAB_03361de0;
    }
  }
  __s = (char *)0x0;
LAB_03361de0:
  sVar10 = strlen(__s);
  sVar10 = (size_t)((int)sVar10 + 1);
  pvVar11 = (void *)(**(code **)(*plVar3 + 0x18))(plVar3,sVar10);
  memcpy(pvVar11,__s,sVar10);
  uStack_4b0 = 0x4000;
  local_4a8 = 0xffffffff;
  local_490 = 0;
  local_4a0 = 0;
  uStack_498 = 0;
  local_48c = 0x80000000;
  local_478 = 0;
  local_488 = 0;
  uStack_480 = 0x8000000000000000;
  local_468 = 0;
  local_350 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_32c = 0x80000002;
  local_34c = 0x80000000;
  local_2f0 = 0x8000000300000000;
  local_348 = 0;
  uStack_340 = 0x8000000000000000;
  local_330 = 0;
  local_308 = 0;
  local_300 = 0x8000000000000000;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0x8000000000000000;
  local_2b8 = 0;
  local_2ae = 0;
  local_2b0 = 1;
  local_4c8 = (undefined4 *)(puVar5 + 0x10);
  puStack_4c0 = puVar6 + 0x10;
  local_4b8 = puVar4;
  local_338 = auStack_328;
  local_2f8 = auStack_2e8;
  memset(auStack_460,0,0x100);
  uStack_3d8 = 0;
  uVar7 = (uint)*puVar20;
  if ((uVar7 >> 0x11 & 1) != 0) {
    uVar24 = CONCAT44(uVar7,uVar7) & 0x1ffff0001ffff;
    uStack_3d8 = (ulong)(ushort)puVar20[(ulong)(byte)(POPCOUNT((char)uVar24) +
                                                      POPCOUNT((char)(uVar24 >> 8)) +
                                                     POPCOUNT((char)(uVar24 >> 0x10))) + 2];
  }
  uStack_3d8 = uStack_3d8 | 0x200000;
  local_400 = 0;
  local_468 = 0x71000;
  local_3d0 = puVar23;
  local_470 = uVar9;
  local_3e0 = pvVar11;
  FUN_031d8d9c(&local_4c8,plVar3,local_70);
  uVar9 = local_70[0];
  plVar25 = (long *)PTR_PTR_047d1a50;
  lVar15 = (long)(int)local_2a0;
  if ((int)(local_2a0._4_4_ & 0x7fffffff) <= (int)local_2a0) {
    FUN_031bc928(&local_2a8,PTR_PTR_047d1a50,lVar15 + 1);
  }
  *(undefined8 *)((long)local_2a8 + (long)(int)local_2a0 * 8) = uVar9;
  local_2a0 = CONCAT44(local_2a0._4_4_,(int)(lVar15 + 1));
  FUN_031d798c(&local_4c8);
  sVar13 = *psVar26;
  sVar16 = psVar26[1];
LAB_03361f78:
  lVar8 = lVar8 + 1;
  if ((long)sVar16 + (long)sVar13 <= lVar8) goto code_r0x03361f8c;
  goto LAB_03361d18;
code_r0x03361f8c:
  iVar22 = (int)local_2a0;
  goto LAB_03361fa0;
}


