/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0335c714; name: FUN_0335c714
 */


void FUN_0335c714(long *param_1,int param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined **ppuVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  uint uVar14;
  int iVar15;
  ulong *puVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong *puVar25;
  undefined **ppuVar26;
  undefined **local_310;
  undefined *local_308;
  undefined *local_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  uint local_2c0;
  ulong local_2b8;
  ulong local_2b0;
  ulong local_2a8 [5];
  undefined4 local_280;
  code *local_270;
  undefined *local_260;
  undefined *local_258;
  undefined1 *local_220;
  undefined *local_1e0;
  code *local_1d0;
  undefined *local_1c8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined *local_188;
  code *local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 auStack_170 [32];
  undefined8 local_150;
  undefined8 local_148;
  undefined1 *local_140;
  undefined8 local_138;
  undefined1 auStack_130 [24];
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined2 local_f8;
  undefined1 local_f6;
  long *local_88;
  undefined **local_80;
  undefined *puStack_78;
  undefined *local_70 [2];
  
  iVar6 = (int)param_1[0x6a];
  if ((param_2 < iVar6) && (*(char *)(param_1[0x69] + (long)param_2) != '\0')) {
    return;
  }
  iVar1 = param_2 + 1;
  plVar2 = param_1 + 0x69;
  if (0 < iVar1 - iVar6) {
    if ((int)(*(uint *)((long)param_1 + 0x354) & 0x7fffffff) <= param_2) {
      FUN_02e7fe28(plVar2,PTR_PTR_047d1a50,(long)iVar1);
    }
    memset((void *)(param_1[0x69] + (long)iVar6),0,(ulong)(uint)(iVar1 - iVar6));
    *(int *)(param_1 + 0x6a) = iVar1;
  }
  *(undefined1 *)(*plVar2 + (long)param_2) = 1;
  puVar25 = (ulong *)param_3[1];
  if (puVar25 == (ulong *)0x0) {
    return;
  }
  iVar7 = *(int *)(param_3 + 3);
  uVar24 = *param_3;
  local_70[0] = (undefined *)0x0;
  iVar6 = -iVar7;
  if (-1 < iVar7) {
    iVar6 = iVar7;
  }
  puVar16 = puVar25;
  while (uVar19 = *puVar16, ((uint)uVar19 >> 3 & 1) == 0) {
    if (((uVar19 & 1) != 0) || (puVar16 = (ulong *)puVar16[1], puVar16 == (ulong *)0x0))
    goto LAB_0335c930;
  }
  if (puVar16[(ulong)(byte)POPCOUNT((byte)uVar19 & 7) + 2] != 0) {
    uVar19 = *puVar25;
    puVar16 = puVar25;
    if ((uVar19 & 1) == 0) {
      do {
        puVar16 = (ulong *)puVar16[1];
      } while ((*puVar16 & 1) == 0);
    }
    if ((puVar16[2] & 0x1f) == 7) {
      uVar23 = 0;
      puVar16 = puVar25;
      if (((uint)uVar19 >> 0x15 & 1) != 0) goto LAB_0335c874;
      do {
        uVar22 = 0;
        while( true ) {
          uVar23 = uVar22 | uVar23;
          if (((uVar19 & 1) != 0) || (puVar16 = (ulong *)puVar16[1], puVar16 == (ulong *)0x0)) {
            if (((uint)uVar23 >> 5 & 1) != 0) goto LAB_0335c930;
            if (param_4 != 0) goto LAB_0335cf70;
            local_310 = &local_300;
            local_280 = 1;
            local_300 = (undefined *)((ulong)local_300 & 0xffffffffffffff00);
            local_308 = (undefined *)0x8000008000000001;
            FUN_031e12d8(puVar25,&local_310,0,0);
            puStack_78 = (undefined *)((long)local_310 + (long)(int)local_308 + -1);
            local_80 = local_310;
            puVar16 = puVar25;
            goto LAB_0335c910;
          }
          uVar19 = *puVar16;
          if (((uint)uVar19 >> 0x15 & 1) == 0) break;
LAB_0335c874:
          uVar22 = CONCAT44((int)uVar19,(int)uVar19) & 0x1fffff001fffff;
          uVar22 = puVar16[(ulong)(byte)(POPCOUNT((char)uVar22) + POPCOUNT((char)(uVar22 >> 8)) +
                                        POPCOUNT((char)(uVar22 >> 0x10))) + 2];
        }
      } while( true );
    }
  }
LAB_0335c930:
  if ((*puVar25 & 1) == 0) {
    ppuVar26 = local_70;
    ppuVar10 = (undefined **)(PTR_DAT_047e5b58 + 0x10);
    puVar3 = PTR_DAT_047e5b60 + 0x10;
    puVar4 = PTR_PTR_047d1a50 + 0x20;
    do {
      uStack_2f8 = 0x4000;
      local_2f0 = 0xffffffff;
      local_2d8 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      local_2d4 = 0x80000000;
      local_2c0 = 0;
      local_2d0 = 0;
      uStack_2c8 = 0x8000000000000000;
      local_2b8 = 0;
      local_2b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = (undefined *)0x8000000000000000;
      local_174 = 0x80000002;
      local_178 = 0;
      local_150 = 0;
      local_148 = 0x8000000000000000;
      local_138 = 0x8000000300000000;
      local_118 = 0;
      local_110 = 0;
      local_108 = 0x8000000000000000;
      local_100 = 0;
      local_f8 = 1;
      local_f6 = 0;
      local_190 = 0;
      local_188 = (undefined *)0x8000000000000000;
      local_310 = ppuVar10;
      local_308 = puVar3;
      local_300 = puVar4;
      local_180 = (code *)auStack_170;
      local_140 = auStack_130;
      memset(local_2a8,0,0x100);
      local_2b8 = puVar25[1];
      uVar19 = *puVar25;
      local_2b0 = uVar19 & 0xffffffff;
      lVar18 = 0;
      do {
        uVar9 = 1 << (ulong)((uint)lVar18 & 0x1f);
        if (((uVar19 & uVar9) == 0) || ((*puVar25 & (ulong)uVar9) == 0)) {
          uVar23 = 0;
        }
        else {
          uVar9 = uVar9 - 1 & (uint)*puVar25;
          uVar23 = puVar25[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                        POPCOUNT((char)(uVar9 >> 0x10)) +
                                        POPCOUNT((char)(uVar9 >> 0x18))) + 2];
        }
        lVar5 = lVar18 + 1;
        local_2a8[lVar18] = uVar23;
        lVar18 = lVar5;
      } while (lVar5 != 0x20);
      uVar19 = 0;
      puVar16 = puVar25;
      do {
        uVar9 = (uint)*puVar16;
        if ((uVar9 >> 0x15 & 1) == 0) {
          uVar23 = 0;
        }
        else {
          uVar23 = CONCAT44(uVar9,uVar9) & 0x1fffff001fffff;
          uVar23 = puVar16[(ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8)) +
                                        POPCOUNT((char)(uVar23 >> 0x10))) + 2];
        }
        uVar19 = uVar23 | uVar19;
      } while (((*puVar16 & 1) == 0) && (puVar16 = (ulong *)puVar16[1], puVar16 != (ulong *)0x0));
      local_2c0 = (uint)uVar19 & 0xffff;
      FUN_031d8d9c(&local_310,param_1 + 0x28,&local_80);
      *ppuVar26 = (undefined *)local_80;
      puVar25 = (ulong *)puVar25[1];
      ppuVar26 = local_80 + 1;
      FUN_031d798c(&local_310);
    } while ((*puVar25 & 1) == 0);
  }
  else {
    ppuVar26 = local_70;
  }
  puVar16 = (ulong *)FUN_0335cf90(param_1,puVar25);
  FUN_0335da14(param_1,puVar16,param_2,0,iVar6);
  goto LAB_0335cb74;
  while (((uVar19 & 9) == 0 && (puVar16 = (ulong *)puVar16[1], puVar16 != (ulong *)0x0))) {
LAB_0335c910:
    uVar19 = *puVar16;
    if (((uint)uVar19 >> 4 & 1) != 0) {
      uVar11 = (undefined4)puVar16[(ulong)(byte)POPCOUNT((byte)uVar19 & 0xf) + 2];
      goto LAB_0335cf30;
    }
  }
  uVar11 = 0;
LAB_0335cf30:
  param_4 = (**(code **)(*param_1 + 8))(param_1,&local_80,uVar11);
  puVar3 = local_308;
  local_308 = (undefined *)((ulong)local_308 & 0xffffffff00000000);
  if ((-1 < (long)puVar3) && (local_310 != (undefined **)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
LAB_0335cf70:
  puVar16 = *(ulong **)(param_4 + 0x50);
  FUN_033690d4(param_4,param_2,0,iVar6);
  ppuVar26 = local_70;
LAB_0335cb74:
  *ppuVar26 = (undefined *)puVar16;
  puVar17 = puVar16;
  do {
    uVar9 = (uint)*puVar17;
    if ((uVar9 >> 0x14 & 1) != 0) {
      uVar14 = 0;
      if (puVar17 != (ulong *)0x0) {
        uVar19 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
        uVar14 = (uint)(ushort)puVar17[(ulong)(byte)(POPCOUNT((char)uVar19) +
                                                     POPCOUNT((char)(uVar19 >> 8)) +
                                                    POPCOUNT((char)(uVar19 >> 0x10))) + 2];
      }
      goto LAB_0335cbc0;
    }
    if ((*puVar17 & 1) != 0) {
      uVar14 = 0;
      goto LAB_0335cbc0;
    }
    puVar17 = (ulong *)puVar17[1];
  } while (puVar17 != (ulong *)0x0);
  uVar14 = 0;
LAB_0335cbc0:
  ppuVar26 = (undefined **)(ulong)(uVar14 * iVar6);
  local_80 = (undefined **)0x0;
  if (uVar14 * iVar6 == 0) {
    ppuVar10 = (undefined **)0x0;
  }
  else {
    local_310 = ppuVar26;
    ppuVar10 = (undefined **)(**(code **)(param_1[0x28] + 0x10))(param_1 + 0x28,ppuVar26,&local_310)
    ;
    local_80 = ppuVar10;
    memset(ppuVar10,0,(size_t)ppuVar26);
  }
  iVar8 = FUN_03357154(param_1 + 0x57,local_70[0]);
  iVar15 = (int)param_1[0x5b];
  iVar7 = iVar15;
  if (iVar15 <= iVar1) {
    iVar7 = iVar1;
  }
  if ((int)(*(uint *)((long)param_1 + 0x2dc) & 0x7fffffff) < iVar7) {
    FUN_033277d4(param_1 + 0x5a,PTR_PTR_047d1a50,(long)iVar7);
    iVar15 = (int)param_1[0x5b];
  }
  if (iVar15 < iVar7) {
    puVar20 = (undefined8 *)(param_1[0x5a] + (long)iVar15 * 0x18);
    lVar18 = (long)iVar7 * 0x18 + (long)iVar15 * -0x18;
    *(int *)(param_1 + 0x5b) = iVar7;
    do {
      *(undefined4 *)((long)puVar20 + 0x14) = 0;
      lVar18 = lVar18 + -0x18;
      *(undefined1 *)(puVar20 + 2) = 0;
      *puVar20 = 0;
      puVar20[1] = 0;
      puVar20 = puVar20 + 3;
    } while (lVar18 != 0);
  }
  else if (iVar7 < iVar15) {
    *(int *)(param_1 + 0x5b) = iVar7;
  }
  uVar21 = *(undefined8 *)(param_1[0x58] + (long)iVar8 * 8);
  puVar20 = (undefined8 *)(param_1[0x5a] + (long)param_2 * 0x18);
  *(undefined1 *)(puVar20 + 2) = 1;
  *puVar20 = ppuVar10;
  puVar20[1] = uVar21;
  *(int *)((long)puVar20 + 0x14) = iVar6;
  lVar18 = param_1[0x6a];
  uVar9 = iVar1 - (int)lVar18;
  if (0 < (int)uVar9) {
    if ((int)(*(uint *)((long)param_1 + 0x354) & 0x7fffffff) <= param_2) {
      FUN_02e7fe28(plVar2,PTR_PTR_047d1a50,(long)iVar1);
    }
    memset((void *)(param_1[0x69] + (long)(int)lVar18),0,(ulong)uVar9);
    *(int *)(param_1 + 0x6a) = iVar1;
  }
  *(undefined1 *)(*plVar2 + (long)param_2) = 1;
  if (iVar6 != 0) {
    if (puVar25 == puVar16) {
      uVar21 = FUN_031fa694(param_1 + 0x49,puVar25);
    }
    else {
      uVar21 = FUN_031fa91c(param_1 + 0x49,puVar25,puVar16);
    }
    plVar2 = param_1 + 0x79;
    uVar9 = FUN_033572a8(plVar2,&local_80);
    if (*(uint *)(param_1 + 0x7a) == uVar9) {
      iVar1 = uVar9 + 1;
      if ((int)(*(uint *)((long)param_1 + 0x3d4) & 0x7fffffff) <= (int)uVar9) {
        FUN_031d33d4(plVar2,PTR_PTR_047d1a50,(long)iVar1);
        uVar9 = *(uint *)(param_1 + 0x7a);
      }
      puVar20 = (undefined8 *)(param_1[0x79] + (long)(int)uVar9 * 0x10);
      *puVar20 = ppuVar10;
      *(int *)(puVar20 + 1) = param_2;
      *(int *)(param_1 + 0x7a) = iVar1;
    }
    else {
      *(int *)(*plVar2 + ((long)((ulong)uVar9 << 0x20) >> 0x1c) + 8) = param_2;
    }
    memset(&local_310,0,0x288);
    local_270 = FUN_03225a30;
    local_260 = PTR_LAB_047e5f00;
    local_1d0 = FUN_032259b8;
    local_1e0 = PTR_LAB_047e5f08;
    local_220 = &LAB_03225af8;
    local_258 = PTR_LAB_047e5f10;
    local_198 = PTR_FUN_047e5f18;
    local_1c8 = PTR_LAB_047e5f28;
    local_188 = PTR_FUN_047e5f20;
    local_180 = FUN_03225a94;
    while( true ) {
      uVar9 = (uint)*puVar16;
      if ((uVar9 >> 0x14 & 1) != 0) break;
      if (((*puVar16 & 1) != 0) || (puVar16 = (ulong *)puVar16[1], puVar16 == (ulong *)0x0))
      goto LAB_0335ce94;
    }
    if (puVar16 != (ulong *)0x0) {
      uVar19 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
      uVar12 = (undefined2)
               puVar16[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                    POPCOUNT((char)(uVar19 >> 0x10))) + 2];
      goto LAB_0335ce98;
    }
LAB_0335ce94:
    uVar12 = 0;
LAB_0335ce98:
    uVar9 = (uint)*puVar25;
    if ((uVar9 >> 0x14 & 1) == 0) {
      if (((*puVar25 & 1) != 0) || (puVar25 = (ulong *)puVar25[1], puVar25 == (ulong *)0x0))
      goto LAB_0335ced8;
      goto LAB_0335ce98;
    }
    if (puVar25 != (ulong *)0x0) {
      uVar19 = CONCAT44(uVar9,uVar9) & 0xfffff000fffff;
      uVar13 = (undefined2)
               puVar25[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                    POPCOUNT((char)(uVar19 >> 0x10))) + 2];
      goto LAB_0335cedc;
    }
LAB_0335ced8:
    uVar13 = 0;
LAB_0335cedc:
    local_88 = param_1;
    FUN_033573c4(&local_310,uVar21,ppuVar10,uVar24,uVar12,uVar13,iVar6);
  }
  return;
}


