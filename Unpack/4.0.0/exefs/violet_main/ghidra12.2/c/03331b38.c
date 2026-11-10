/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03331b38; name: FUN_03331b38
 */


undefined4 * FUN_03331b38(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  size_t sVar9;
  void *pvVar10;
  undefined2 *puVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  undefined **ppuVar15;
  long lVar16;
  short sVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  short *psVar26;
  char *__s;
  int iVar27;
  undefined4 *local_4c0;
  undefined *puStack_4b8;
  undefined *local_4b0;
  undefined8 uStack_4a8;
  undefined4 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined4 local_488;
  undefined4 local_484;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined4 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined1 auStack_458 [128];
  void *local_3d8;
  ulong uStack_3d0;
  undefined4 *local_3c8;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined4 local_344;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined1 *local_330;
  undefined4 local_328;
  undefined4 local_324;
  undefined1 auStack_320 [32];
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 *local_2f0;
  undefined8 local_2e8;
  undefined1 auStack_2e0 [24];
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined2 local_2a8;
  undefined1 local_2a6;
  void *local_2a0;
  undefined8 local_298;
  undefined *local_290;
  undefined *local_288;
  undefined *local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  uint local_240;
  ulong local_238;
  ulong local_230;
  ulong local_228 [2];
  undefined8 *local_218;
  undefined8 local_1d0;
  long local_158;
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [32];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [24];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70 [2];
  
  puVar6 = PTR_DAT_047e5b60;
  puVar5 = PTR_DAT_047e5b58;
  local_290 = (undefined *)0x0;
  uVar14 = *(uint *)(param_1 + 0x374);
  plVar1 = (long *)(param_1 + 0x368);
  iVar27 = (int)((ulong)param_2 >> 0x20);
  if (0 < (int)uVar14) {
    uVar13 = (int)param_2 * -0x61c8864f;
    uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    uVar4 = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar13 = iVar27 * -0x61c8864f;
    uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
    uVar20 = (ulong)(uVar14 & (uVar4 + (uVar4 >> 2) + uVar13 * 0x40 + 0x9e3779b9 ^ uVar13));
    lVar18 = *plVar1;
    puVar22 = *(ulong **)(lVar18 + uVar20 * 0x10);
    if (puVar22 != (ulong *)0xffffffffffffffff) {
      if (puVar22 != param_2) {
        do {
          uVar20 = (ulong)((int)uVar20 + 1U & uVar14);
          puVar22 = *(ulong **)(lVar18 + uVar20 * 0x10);
          if (puVar22 == (ulong *)0xffffffffffffffff) goto LAB_03331bf4;
        } while (puVar22 != param_2);
      }
      ppuVar15 = (undefined **)(lVar18 + uVar20 * 0x10 + 8);
      goto LAB_03331bf8;
    }
  }
LAB_03331bf4:
  ppuVar15 = &local_290;
LAB_03331bf8:
  if ((undefined4 *)*ppuVar15 != (undefined4 *)0x0) {
    return (undefined4 *)*ppuVar15;
  }
  local_268 = 0;
  local_260 = 0;
  local_270 = 0xffffffff;
  local_290 = PTR_DAT_047e5b58 + 0x10;
  local_288 = PTR_DAT_047e5b60 + 0x10;
  local_278 = 0x4000;
  local_100 = auStack_f0;
  local_f8 = 0x8000000200000000;
  local_c0 = auStack_b0;
  local_280 = PTR_PTR_047d1a50 + 0x20;
  local_258 = 0x8000000000000000;
  local_250 = 0;
  local_248 = 0x8000000000000000;
  local_240 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0x8000000000000000;
  local_110 = 0;
  local_108 = 0x8000000000000000;
  local_d0 = 0;
  local_c8 = 0x8000000000000000;
  local_b8 = 0x8000000300000000;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0x8000000000000000;
  local_80 = 0;
  local_78 = 1;
  local_76 = 0;
  memset(local_228,0,0x100);
  local_238 = param_2[1];
  uVar20 = *param_2;
  puVar22 = param_2 + 2;
  lVar18 = 0;
  do {
    uVar14 = 1 << (ulong)((uint)lVar18 & 0x1f);
    uVar13 = (uint)uVar20;
    if ((uVar20 & uVar14) == 0) {
      uVar23 = 0;
    }
    else {
      uVar14 = uVar14 - 1 & uVar13;
      uVar23 = puVar22[(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8)) +
                             POPCOUNT((char)(uVar14 >> 0x10)) + POPCOUNT((char)(uVar14 >> 0x18)))];
    }
    lVar16 = lVar18 + 1;
    local_228[lVar18] = uVar23;
    lVar18 = lVar16;
  } while (lVar16 != 0x20);
  uVar21 = 0;
  puVar24 = param_2;
  uVar23 = uVar20;
  if ((uVar13 >> 0x15 & 1) != 0) goto LAB_03331d50;
  do {
    uVar25 = 0;
    while( true ) {
      uVar21 = uVar25 | uVar21;
      if (((uVar23 & 1) != 0) || (puVar24 = (ulong *)puVar24[1], puVar24 == (ulong *)0x0)) {
        local_240 = (uint)uVar21 & 0xffff;
        if (param_1 == 0) {
          local_230 = uVar20 & 0xfbffffff;
        }
        else {
          local_230 = uVar20 & 0xffffffff | 0x4000000;
          local_158 = param_1;
        }
        local_230 = local_230 | 0x800;
        local_1d0 = 0;
        local_128 = param_1;
        if ((uVar20 & 1) == 0) goto LAB_03331f58;
        puVar24 = param_2;
        if ((*puVar22 & 0x1f) == 8) {
          puVar19 = param_2;
          if ((uVar13 >> 2 & 1) == 0) goto LAB_03331e28;
          goto LAB_03331e38;
        }
        if ((*puVar22 & 0x1f) != 6) goto LAB_03331f58;
        puVar19 = param_2;
        if ((uVar13 >> 2 & 1) == 0) goto LAB_03331df0;
        goto LAB_03331e00;
      }
      uVar23 = *puVar24;
      if (((uint)uVar23 >> 0x15 & 1) == 0) break;
LAB_03331d50:
      uVar25 = CONCAT44((int)uVar23,(int)uVar23) & 0x1fffff001fffff;
      uVar25 = puVar24[(ulong)(byte)(POPCOUNT((char)uVar25) + POPCOUNT((char)(uVar25 >> 8)) +
                                    POPCOUNT((char)(uVar25 >> 0x10))) + 2];
    }
  } while( true );
  while (uVar20 = *puVar19, ((uint)uVar20 >> 2 & 1) == 0) {
LAB_03331e28:
    puVar19 = (ulong *)puVar19[1];
    if (puVar19 == (ulong *)0x0) {
      uVar20 = 0;
      goto LAB_03331ec8;
    }
  }
LAB_03331e38:
  uVar20 = puVar19[(uVar20 >> 1 & 1) + (uVar20 & 1) + 2];
LAB_03331ec8:
  local_218 = (undefined8 *)(**(code **)(*(long *)(param_1 + 800) + 0x18))(param_1 + 800,0x20);
  *(undefined4 *)(local_218 + 1) = 1;
  *local_218 = &PTR_LAB_047ac6b0;
  local_218[2] = uVar20;
  local_218[3] = param_1;
  local_230 = local_230 | 4;
  puVar19 = param_2;
  do {
    if (((byte)*puVar19 >> 1 & 1) != 0) {
      if (puVar19[3] != 0) goto LAB_03331f24;
      break;
    }
    puVar19 = (ulong *)puVar19[1];
  } while (puVar19 != (ulong *)0x0);
  goto LAB_03331f58;
  while (puVar24 = (ulong *)puVar24[1], puVar24 != (ulong *)0x0) {
LAB_03331f24:
    if (((byte)*puVar24 >> 1 & 1) != 0) goto LAB_03331f3c;
  }
  goto LAB_03331f34;
  while (uVar20 = *puVar19, ((uint)uVar20 >> 2 & 1) == 0) {
LAB_03331df0:
    puVar19 = (ulong *)puVar19[1];
    if (puVar19 == (ulong *)0x0) {
      uVar20 = 0;
      goto LAB_03331e54;
    }
  }
LAB_03331e00:
  uVar20 = puVar19[(uVar20 >> 1 & 1) + (uVar20 & 1) + 2];
LAB_03331e54:
  local_218 = (undefined8 *)(**(code **)(*(long *)(param_1 + 800) + 0x18))(param_1 + 800,0x20);
  *(undefined4 *)(local_218 + 1) = 1;
  *local_218 = &PTR_LAB_047ac618;
  local_218[2] = uVar20;
  local_218[3] = param_1;
  local_230 = local_230 | 4;
  puVar19 = param_2;
  do {
    if (((byte)*puVar19 >> 1 & 1) != 0) {
      if (puVar19[3] != 0) goto LAB_03331eb0;
      break;
    }
    puVar19 = (ulong *)puVar19[1];
  } while (puVar19 != (ulong *)0x0);
  goto LAB_03331f58;
LAB_03331f3c:
  uVar20 = puVar24[3];
  goto LAB_03331f40;
  while (((*puVar24 & 1) == 0 && (puVar24 = (ulong *)puVar24[1], puVar24 != (ulong *)0x0))) {
LAB_03332170:
    uVar14 = (uint)*puVar24;
    if ((uVar14 >> 0x10 & 1) != 0) {
      uVar14 = uVar14 & 0xffff;
      __s = (char *)puVar24[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))) +
                            2];
      goto LAB_033321ac;
    }
  }
  __s = (char *)0x0;
LAB_033321ac:
  sVar9 = strlen(__s);
  sVar9 = (size_t)((int)sVar9 + 1);
  pvVar10 = (void *)(**(code **)(*plVar2 + 0x18))(plVar2,sVar9);
  memcpy(pvVar10,__s,sVar9);
  uStack_4a8 = 0x4000;
  local_4a0 = 0xffffffff;
  local_488 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_484 = 0x80000000;
  local_470 = 0;
  local_480 = 0;
  uStack_478 = 0x8000000000000000;
  local_460 = 0;
  local_348 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_324 = 0x80000002;
  local_344 = 0x80000000;
  local_2e8 = 0x8000000300000000;
  local_340 = 0;
  uStack_338 = 0x8000000000000000;
  local_328 = 0;
  local_300 = 0;
  local_2f8 = 0x8000000000000000;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0x8000000000000000;
  local_2b0 = 0;
  local_2a6 = 0;
  local_2a8 = 1;
  local_4c0 = (undefined4 *)(puVar5 + 0x10);
  puStack_4b8 = puVar6 + 0x10;
  local_4b0 = puVar3;
  local_330 = auStack_320;
  local_2f0 = auStack_2e0;
  memset(auStack_458,0,0x100);
  uStack_3d0 = 0;
  uVar14 = (uint)*puVar22;
  if ((uVar14 >> 0x11 & 1) != 0) {
    uVar20 = CONCAT44(uVar14,uVar14) & 0x1ffff0001ffff;
    uStack_3d0 = (ulong)(ushort)puVar22[(ulong)(byte)(POPCOUNT((char)uVar20) +
                                                      POPCOUNT((char)(uVar20 >> 8)) +
                                                     POPCOUNT((char)(uVar20 >> 0x10))) + 2];
  }
  uStack_3d0 = uStack_3d0 | 0x200000;
  local_3c8 = puVar7;
  local_460 = 0x70000;
  local_468 = uVar8;
  local_3d8 = pvVar10;
  FUN_031d8d9c(&local_4c0,plVar2,local_70);
  uVar8 = local_70[0];
  lVar16 = (long)(int)local_298;
  if ((int)(local_298._4_4_ & 0x7fffffff) <= (int)local_298) {
    FUN_031bc928(&local_2a0,PTR_PTR_047d1a50,lVar16 + 1);
  }
  *(undefined8 *)((long)local_2a0 + (long)(int)local_298 * 8) = uVar8;
  local_298 = CONCAT44(local_298._4_4_,(int)(lVar16 + 1));
  FUN_031d798c(&local_4c0);
  sVar12 = *psVar26;
  sVar17 = psVar26[1];
LAB_03332338:
  lVar18 = lVar18 + 1;
  if ((long)sVar17 + (long)sVar12 <= lVar18) goto code_r0x0333234c;
  goto LAB_033320e4;
code_r0x0333234c:
  iVar27 = (int)local_298;
  goto LAB_03332360;
  while (puVar24 = (ulong *)puVar24[1], puVar24 != (ulong *)0x0) {
LAB_03331eb0:
    if (((byte)*puVar24 >> 1 & 1) != 0) goto LAB_03331f3c;
  }
LAB_03331f34:
  uVar20 = 0;
LAB_03331f40:
  local_228[1] = FUN_03331b38(param_1,uVar20);
  local_230 = local_230 | 2;
LAB_03331f58:
  if (param_2[1] != 0) {
    local_238 = FUN_03331b38(param_1);
  }
  plVar2 = (long *)(param_1 + 800);
  FUN_031d8d9c(&local_290,plVar2,&local_4c0);
  puVar7 = local_4c0;
  uVar14 = *(uint *)(param_1 + 0x374);
  if ((int)uVar14 < *(int *)(param_1 + 0x370) * 2) {
    FUN_02ef5fd4(plVar1,PTR_PTR_047d1a50,uVar14 * 2 + 2);
    uVar14 = *(uint *)(param_1 + 0x374);
  }
  uVar13 = (int)param_2 * -0x61c8864f;
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  uVar4 = uVar13 >> 0x10 | uVar13 << 0x10;
  uVar13 = iVar27 * -0x61c8864f;
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
  uVar13 = uVar4 + (uVar4 >> 2) + uVar13 * 0x40 + 0x9e3779b9 ^ uVar13;
  while( true ) {
    uVar13 = uVar14 & uVar13;
    puVar24 = *(ulong **)(*plVar1 + (ulong)uVar13 * 0x10);
    if (puVar24 == (ulong *)0xffffffffffffffff) break;
    if (puVar24 == param_2) {
      iVar27 = 0;
      goto LAB_0333200c;
    }
    uVar13 = uVar13 + 1;
  }
  iVar27 = 1;
LAB_0333200c:
  *(int *)(param_1 + 0x370) = *(int *)(param_1 + 0x370) + iVar27;
  *(ulong **)(*plVar1 + (-(ulong)(uVar13 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar13 << 4)) =
       param_2;
  *(undefined4 **)(*(long *)(param_1 + 0x368) + (long)(int)uVar13 * 0x10 + 8) = puVar7;
  uVar14 = (uint)*param_2;
  if ((*param_2 & 1) == 0) {
    do {
      param_2 = (ulong *)param_2[1];
    } while ((*param_2 & 1) == 0);
  }
  if (((uVar14 >> 0x17 & 1) != 0) && ((param_2[2] & 0x1f) == 7)) {
    uVar20 = CONCAT44(uVar14,uVar14) & 0x7fffff007fffff;
    psVar26 = (short *)puVar22[(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8)) +
                                     POPCOUNT((char)(uVar20 >> 0x10)))];
    if (psVar26 != (short *)0x0) {
      local_2a0 = (void *)0x0;
      local_298 = -0x8000000000000000;
      sVar12 = *psVar26;
      sVar17 = psVar26[1];
      if (0 < (int)sVar17 + (int)sVar12) {
        lVar18 = 0;
        puVar3 = PTR_PTR_047d1a50 + 0x20;
LAB_033320e4:
        puVar22 = *(ulong **)(psVar26 + lVar18 * 4 + 4);
        if (puVar22 != (ulong *)0x0) {
          puVar24 = puVar22;
          while( true ) {
            uVar14 = (uint)*puVar24;
            if ((uVar14 >> 0x10 & 1) != 0) break;
            if (((*puVar24 & 1) != 0) || (puVar24 = (ulong *)puVar24[1], puVar24 == (ulong *)0x0))
            goto LAB_03332338;
          }
          uVar20 = CONCAT44(uVar14,uVar14) & 0xffff0000ffff;
          if ((puVar24[(ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8))) + 2] !=
               0) && ((uVar14 = (uint)*puVar22, (uVar14 >> 0x11 & 1) == 0 ||
                      (uVar20 = CONCAT44(uVar14,uVar14) & 0x1ffff0001ffff,
                      ((uint)puVar22[(ulong)(byte)(POPCOUNT((char)uVar20) +
                                                   POPCOUNT((char)(uVar20 >> 8)) +
                                                  POPCOUNT((char)(uVar20 >> 0x10))) + 2] >> 0x10 & 1
                      ) == 0)))) {
            uVar8 = FUN_03331b38(param_1,puVar22[1]);
            puVar24 = puVar22;
            goto LAB_03332170;
          }
        }
        goto LAB_03332338;
      }
      iVar27 = 0;
LAB_03332360:
      pvVar10 = local_2a0;
      uVar20 = (ulong)(iVar27 << 3);
      puVar11 = (undefined2 *)(**(code **)(*plVar2 + 0x18))(plVar2,uVar20 + 8);
      *puVar11 = (short)iVar27;
      puVar11[1] = 0;
      puVar11[2] = (short)iVar27;
      if (pvVar10 == (void *)0x0) {
        memset(puVar11 + 4,0,uVar20 & 0xfffffff8);
      }
      else {
        memcpy(puVar11 + 4,pvVar10,uVar20);
      }
      lVar18 = local_298;
      uVar20 = CONCAT44(*puVar7,*puVar7) & 0x7fffff007fffff;
      *(undefined2 **)
       (puVar7 + (ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8)) +
                              POPCOUNT((char)(uVar20 >> 0x10))) * 2 + 4) = puVar11;
      uVar20 = (ulong)local_298._4_4_;
      local_298 = (ulong)local_298._4_4_ << 0x20;
      if ((-1 < lVar18) && (local_2a0 != (void *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_2a0,uVar20 << 3);
      }
    }
  }
  FUN_031d798c(&local_290);
  return puVar7;
}


