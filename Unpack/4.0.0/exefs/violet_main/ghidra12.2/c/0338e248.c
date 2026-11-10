/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0338e248; name: FUN_0338e248
 */


ulong FUN_0338e248(int *param_1,long *param_2,undefined8 *param_3,undefined1 *param_4)

{
  long *plVar1;
  uint *puVar2;
  undefined *puVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ThreadType *pTVar14;
  size_t sVar15;
  ulong *puVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  int *piVar23;
  long lVar24;
  long lVar25;
  short *psVar26;
  long *plVar27;
  ulong *puVar28;
  long lVar29;
  byte *pbVar30;
  int local_640;
  ulong local_638;
  undefined8 *local_630;
  long local_620;
  uint *local_618;
  undefined *puStack_610;
  undefined8 *local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  uint *local_5f0;
  undefined8 local_5e8;
  char *local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  uint local_5c8 [2];
  undefined *local_5c0;
  undefined8 local_5b8;
  undefined1 auStack_5b0 [128];
  char *local_530;
  undefined *puStack_528;
  undefined *local_520;
  ulong local_510;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined1 *local_488;
  undefined4 local_480;
  undefined4 local_47c;
  undefined1 auStack_478 [32];
  undefined8 local_458;
  undefined8 local_450;
  undefined1 *local_448;
  undefined8 local_440;
  undefined1 auStack_438 [24];
  undefined4 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined2 local_400;
  undefined1 local_3fe;
  undefined8 local_3f8;
  uint local_3ec;
  char *local_3e8;
  uint local_3dc;
  undefined8 local_3d8;
  undefined1 *local_3d0;
  int local_3c8;
  uint local_3c4;
  undefined1 local_3c0 [128];
  undefined1 *local_340;
  int local_338;
  uint local_334;
  undefined1 local_330 [128];
  undefined1 *local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [8];
  uint *local_298;
  undefined *local_290;
  undefined8 *local_288;
  undefined8 local_280;
  undefined8 local_278;
  uint *local_270;
  undefined8 local_268;
  char *local_260;
  undefined8 local_258;
  undefined8 local_250;
  uint local_248 [2];
  undefined8 local_240;
  ulong local_238;
  ulong local_230;
  undefined *local_228;
  int *local_220;
  ulong local_218;
  long local_210;
  undefined8 local_1c0;
  long *local_1b8;
  ulong local_190;
  ulong local_188;
  short *local_178;
  undefined8 local_168;
  int *local_160;
  undefined8 local_150;
  int *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [32];
  long local_d8;
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
  undefined4 local_78;
  int local_74;
  undefined8 local_70;
  
  *param_3 = 0;
  *param_4 = 0;
  uVar11 = FUN_03391790(param_2);
  if (uVar11 >> 0x1f != 0) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
  }
  iVar10 = (int)uVar11;
  local_74 = iVar10;
  uVar12 = FUN_03391790(param_2);
  if (uVar12 >> 0x1f != 0) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
  }
  uVar13 = FUN_03391790(param_2);
  pbVar30 = (byte *)(param_2 + 3);
  local_78 = (uint)uVar13;
  if (uVar13 >> 0x20 != 0) {
    *pbVar30 = *pbVar30 | 2;
LAB_0338e2f4:
    *param_1 = -0x7ffbfe00;
LAB_0338e300:
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') {
        return uVar13;
      }
    }
    else if (DAT_046aaf68 == '\0') {
      local_288 = &DAT_0488df58;
      local_298 = (uint *)0x0;
      local_280 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_278 = nn::os::GetThreadId(pTVar14);
      local_270 = (uint *)0x0;
      local_268 = 0;
      local_260 = (char *)0x0;
      local_258 = 0;
      local_250 = 0;
      FUN_0322c554(&local_298,"Error in input stream.",PTR_DAT_047d1b38);
      local_260 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      local_258 = 0x58a;
      uVar11 = FUN_0322c8e0(&local_298);
      goto LAB_0338e384;
    }
    local_288 = &DAT_0488df58;
    local_280 = 1;
    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
    local_278 = nn::os::GetThreadId(pTVar14);
    local_268 = 0;
    local_260 = (char *)0x0;
    local_258 = 0;
    local_250 = 0;
    local_290 = (undefined *)0x10000000000;
    local_248[0] = local_248[0] & 0xffffff00;
    local_298 = local_248;
    local_270 = local_248;
    uVar11 = FUN_0322c554(&local_298,"Error in input stream.",PTR_DAT_047d1b38);
    local_260 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_258 = 0x58a;
    if ((char)local_248[0] != '\0') {
      sVar15 = strlen((char *)local_248);
      *(undefined2 *)((long)local_248 + (long)(int)((int)sVar15 - (uint)((int)sVar15 == 0xff))) = 10
      ;
      printf("%s",local_248);
      uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
      uVar11 = (ulong)uVar6;
    }
LAB_0338e384:
    if (((ulong)local_270 & 1) == 0) {
      return uVar11;
    }
    uVar11 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_270 + -1),0);
    return uVar11;
  }
  if (*pbVar30 != 0) goto LAB_0338e2f4;
  if (*param_1 < 0) goto LAB_0338e300;
  if ((iVar10 < 1) || (param_1[0x1a] <= iVar10)) {
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_0338f154;
    }
    else if (DAT_046aaf68 == '\0') {
      local_288 = &DAT_0488df58;
      local_298 = (uint *)0x0;
      local_280 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_278 = nn::os::GetThreadId(pTVar14);
      local_270 = (uint *)0x0;
      local_268 = 0;
      local_260 = (char *)0x0;
      local_258 = 0;
      local_250 = 0;
      FUN_0322c554(&local_298,"Invalid type ID (out of bounds).",PTR_DAT_047d1b38);
      uVar17 = 0x71b95bd8;
      local_258 = 0x58e;
LAB_0338e634:
      local_280 = CONCAT44(uVar17,(undefined4)local_280);
      goto LAB_0338f128;
    }
    local_288 = &DAT_0488df58;
    local_280 = 1;
    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
    local_278 = nn::os::GetThreadId(pTVar14);
    local_298 = local_248;
    local_268 = 0;
    local_260 = (char *)0x0;
    local_258 = 0;
    local_250 = 0;
    local_290 = (undefined *)0x10000000000;
    local_248[0] = local_248[0] & 0xffffff00;
    local_270 = local_298;
    uVar13 = FUN_0322c554(&local_298,"Invalid type ID (out of bounds).",PTR_DAT_047d1b38);
    uVar17 = 0x71b95bd8;
    local_258 = 0x58e;
LAB_0338e774:
    local_280 = CONCAT44(uVar17,(undefined4)local_280);
LAB_03390dd4:
    local_260 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    if ((char)local_248[0] != '\0') {
      sVar15 = strlen((char *)local_248);
      *(undefined2 *)((long)local_248 + (long)(int)((int)sVar15 - (uint)((int)sVar15 == 0xff))) = 10
      ;
      printf("%s",local_248);
      uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
      uVar13 = (ulong)uVar6;
    }
LAB_0338f130:
    if (((ulong)local_270 & 1) != 0) {
      uVar13 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,(long)local_270 + -1,0);
    }
LAB_0338f154:
    *param_1 = -0x7ffbfe00;
    return uVar13;
  }
  if (param_1[6] <= iVar10) {
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_0338f154;
    }
    else if (DAT_046aaf68 == '\0') {
      local_288 = &DAT_0488df58;
      local_298 = (uint *)0x0;
      local_280 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_278 = nn::os::GetThreadId(pTVar14);
      local_270 = (uint *)0x0;
      local_268 = 0;
      local_260 = (char *)0x0;
      local_258 = 0;
      local_250 = 0;
      FUN_0322c554(&local_298,"Invalid type ID (out of bounds).",PTR_DAT_047d1b38);
      local_258 = 0x58f;
      uVar17 = 0x71b95bd9;
      goto LAB_0338e634;
    }
    local_288 = &DAT_0488df58;
    local_280 = 1;
    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
    local_278 = nn::os::GetThreadId(pTVar14);
    local_298 = local_248;
    local_268 = 0;
    local_260 = (char *)0x0;
    local_258 = 0;
    local_250 = 0;
    local_290 = (undefined *)0x10000000000;
    local_248[0] = local_248[0] & 0xffffff00;
    local_270 = local_298;
    uVar13 = FUN_0322c554(&local_298,"Invalid type ID (out of bounds).",PTR_DAT_047d1b38);
    local_258 = 0x58f;
    uVar17 = 0x71b95bd9;
    goto LAB_0338e774;
  }
  if (*(long *)(*(long *)(param_1 + 4) + (uVar11 & 0xffffffff) * 8) != 0) {
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_0338f154;
    }
    else if (DAT_046aaf68 == '\0') {
      local_288 = &DAT_0488df58;
      local_298 = (uint *)0x0;
      local_280 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_278 = nn::os::GetThreadId(pTVar14);
      local_270 = (uint *)0x0;
      local_268 = 0;
      local_260 = (char *)0x0;
      local_258 = 0;
      local_250 = 0;
      FUN_0322c554(&local_298,"TypeId {} already read",&DAT_044e9048,&local_74);
      local_258 = 0x590;
      goto LAB_0338f128;
    }
    local_288 = &DAT_0488df58;
    local_280 = 1;
    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
    local_278 = nn::os::GetThreadId(pTVar14);
    local_298 = local_248;
    local_268 = 0;
    local_260 = (char *)0x0;
    local_258 = 0;
    local_250 = 0;
    local_290 = (undefined *)0x10000000000;
    local_248[0] = local_248[0] & 0xffffff00;
    local_270 = local_298;
    uVar13 = FUN_0322c554(&local_298,"TypeId {} already read",&DAT_044e9048,&local_74);
    local_258 = 0x590;
    goto LAB_03390dd4;
  }
  puVar28 = *(ulong **)(*(long *)(param_1 + 0x18) + (uVar11 & 0xffffffff) * 8);
  if (((int)uVar12 < 0) || (param_1[0x1a] <= (int)uVar12)) {
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_0338f154;
    }
    else if (DAT_046aaf68 == '\0') {
      local_288 = &DAT_0488df58;
      local_298 = (uint *)0x0;
      local_280 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_278 = nn::os::GetThreadId(pTVar14);
      local_270 = (uint *)0x0;
      local_268 = 0;
      local_260 = (char *)0x0;
      local_258 = 0;
      local_250 = 0;
      while (uVar11 = *puVar28, ((uint)uVar11 >> 3 & 1) == 0) {
        if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
        goto LAB_0338ee8c;
      }
      if (puVar28 != (ulong *)0x0) {
        local_618 = (uint *)puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
        goto LAB_0338ee90;
      }
LAB_0338ee8c:
      local_618 = (uint *)0x0;
LAB_0338ee90:
      FUN_0322c554(&local_298,"Invalid parent type ID (out of bounds) for type \'{}\'.",
                   &DAT_044e9758,&local_618);
      local_258 = 0x594;
      goto LAB_0338f128;
    }
    local_288 = &DAT_0488df58;
    local_280 = 1;
    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
    local_278 = nn::os::GetThreadId(pTVar14);
    local_298 = local_248;
    local_268 = 0;
    local_260 = (char *)0x0;
    local_258 = 0;
    local_250 = 0;
    local_290 = (undefined *)0x10000000000;
    local_248[0] = local_248[0] & 0xffffff00;
    while (uVar11 = *puVar28, ((uint)uVar11 >> 3 & 1) == 0) {
      if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
      goto LAB_03390a30;
    }
    if (puVar28 != (ulong *)0x0) {
      local_3d8 = puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
      goto LAB_03390a34;
    }
LAB_03390a30:
    local_3d8 = 0;
LAB_03390a34:
    local_270 = local_298;
    uVar13 = FUN_0322c554(&local_298,"Invalid parent type ID (out of bounds) for type \'{}\'.",
                          &DAT_044e9758,&local_3d8);
    local_258 = 0x594;
    goto LAB_03390dd4;
  }
  uVar11 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  bVar4 = (uVar13 & 1) != 0;
  if (bVar4) {
    local_78 = local_78 ^ 1;
    uVar13 = (ulong)local_78;
    local_70 = CONCAT44((int)uVar11,1);
  }
  uVar6 = (uint)bVar4;
  uVar7 = (uint)uVar13;
  if ((uVar7 >> 1 & 1) == 0) {
    uVar9 = (uint)bVar4;
    if ((uVar7 >> 2 & 1) != 0) goto LAB_0338e910;
LAB_0338e878:
    uVar6 = uVar9;
    if (((uint)uVar13 >> 3 & 1) != 0) goto LAB_0338e924;
LAB_0338e87c:
    uVar7 = uVar6;
    if (((uint)uVar13 >> 4 & 1) != 0) goto LAB_0338e938;
LAB_0338e880:
    uVar6 = uVar7;
    if (((uint)uVar13 >> 5 & 1) != 0) goto LAB_0338e94c;
LAB_0338e884:
    uVar7 = uVar6;
    if (((uint)uVar13 >> 6 & 1) != 0) goto LAB_0338e960;
LAB_0338e888:
    uVar6 = uVar7;
    if (((uint)uVar13 >> 7 & 1) != 0) goto LAB_0338e974;
LAB_0338e88c:
    if (((uint)uVar13 >> 8 & 1) != 0) goto LAB_0338e988;
LAB_0338e890:
    uVar7 = (uint)uVar13;
  }
  else {
    uVar6 = bVar4 | 2;
    local_78 = uVar7 ^ 2;
    uVar13 = (ulong)local_78;
    local_70 = CONCAT44(local_70._4_4_,(uint)bVar4) | 2;
    uVar9 = uVar6;
    if ((uVar7 >> 2 & 1) == 0) goto LAB_0338e878;
LAB_0338e910:
    uVar9 = uVar6 | 0x10;
    uVar7 = (uint)uVar13;
    local_78 = uVar7 ^ 4;
    uVar13 = (ulong)local_78;
    local_70 = CONCAT44(local_70._4_4_,uVar6) | 0x10;
    uVar6 = uVar9;
    if ((uVar7 >> 3 & 1) == 0) goto LAB_0338e87c;
LAB_0338e924:
    uVar6 = uVar9 | 0x100000;
    uVar8 = (uint)uVar13;
    local_78 = uVar8 ^ 8;
    uVar13 = (ulong)local_78;
    local_70 = CONCAT44(local_70._4_4_,uVar9) | 0x100000;
    uVar7 = uVar6;
    if ((uVar8 >> 4 & 1) == 0) goto LAB_0338e880;
LAB_0338e938:
    uVar7 = uVar6 | 0x200000;
    uVar9 = (uint)uVar13;
    local_78 = uVar9 ^ 0x10;
    uVar13 = (ulong)local_78;
    local_70 = CONCAT44(local_70._4_4_,uVar6) | 0x200000;
    uVar6 = uVar7;
    if ((uVar9 >> 5 & 1) == 0) goto LAB_0338e884;
LAB_0338e94c:
    uVar6 = uVar7 | 0x800000;
    uVar9 = (uint)uVar13;
    local_78 = uVar9 ^ 0x20;
    uVar13 = (ulong)local_78;
    local_70 = CONCAT44(local_70._4_4_,uVar7) | 0x800000;
    uVar7 = uVar6;
    if ((uVar9 >> 6 & 1) == 0) goto LAB_0338e888;
LAB_0338e960:
    uVar7 = uVar6 | 0x4000;
    uVar9 = (uint)uVar13;
    local_78 = uVar9 ^ 0x40;
    uVar13 = (ulong)local_78;
    local_70 = CONCAT44(local_70._4_4_,uVar6) | 0x4000;
    uVar6 = uVar7;
    if ((uVar9 >> 7 & 1) == 0) goto LAB_0338e88c;
LAB_0338e974:
    uVar6 = uVar7 | 0x2000000;
    uVar9 = (uint)uVar13;
    local_78 = uVar9 ^ 0x80;
    uVar13 = (ulong)local_78;
    local_70 = CONCAT44(local_70._4_4_,uVar7) | 0x2000000;
    if ((uVar9 >> 8 & 1) == 0) goto LAB_0338e890;
LAB_0338e988:
    local_78 = (uint)uVar13 ^ 0x100;
    uVar13 = (ulong)local_78;
    local_70 = CONCAT44(local_70._4_4_,uVar6) | 0x10000000;
    uVar6 = uVar6 | 0x10000000;
    uVar7 = local_78;
  }
  if (uVar7 != 0) {
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_0338f154;
LAB_0338ee00:
      local_288 = &DAT_0488df58;
      local_280 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_278 = nn::os::GetThreadId(pTVar14);
      local_298 = local_248;
      local_268 = 0;
      local_260 = (char *)0x0;
      local_258 = 0;
      local_250 = 0;
      local_290 = (undefined *)0x10000000000;
      local_248[0] = local_248[0] & 0xffffff00;
      while (uVar11 = *puVar28, ((uint)uVar11 >> 3 & 1) == 0) {
        if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
        goto LAB_03390c10;
      }
      if (puVar28 != (ulong *)0x0) {
        local_3d8 = puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
        goto LAB_03390c14;
      }
LAB_03390c10:
      local_3d8 = 0;
LAB_03390c14:
      local_270 = local_298;
      uVar13 = FUN_0322c554(&local_298,"Invalid Opt bits 0x{:x} on content of type \'{}\'.",
                            &DAT_047b2eb0,&local_78,&local_3d8);
      local_258 = 0x5a6;
      goto LAB_03390dd4;
    }
    if (DAT_046aaf68 != '\0') goto LAB_0338ee00;
    local_288 = &DAT_0488df58;
    local_298 = (uint *)0x0;
    local_280 = 1;
    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
    local_278 = nn::os::GetThreadId(pTVar14);
    local_270 = (uint *)0x0;
    local_268 = 0;
    local_260 = (char *)0x0;
    local_258 = 0;
    local_250 = 0;
    while (uVar11 = *puVar28, ((uint)uVar11 >> 3 & 1) == 0) {
      if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
      goto LAB_0338ef50;
    }
    if (puVar28 != (ulong *)0x0) {
      local_618 = (uint *)puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
      goto LAB_0338ef54;
    }
LAB_0338ef50:
    local_618 = (uint *)0x0;
LAB_0338ef54:
    FUN_0322c554(&local_298,"Invalid Opt bits 0x{:x} on content of type \'{}\'.",&DAT_047b2eb0,
                 &local_78,&local_618);
    local_258 = 0x5a6;
LAB_0338f128:
    local_260 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    uVar13 = FUN_0322c8e0(&local_298);
    goto LAB_0338f130;
  }
  if ((~param_1[0x8a] & uVar6) != 0) {
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_0338f154;
    }
    else if (DAT_046aaf68 == '\0') {
      local_288 = &DAT_0488df58;
      local_298 = (uint *)0x0;
      local_280 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_278 = nn::os::GetThreadId(pTVar14);
      local_270 = (uint *)0x0;
      local_268 = 0;
      local_260 = (char *)0x0;
      local_258 = 0;
      local_250 = 0;
      while (uVar11 = *puVar28, ((uint)uVar11 >> 3 & 1) == 0) {
        if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
        goto LAB_0338f0ec;
      }
      if (puVar28 != (ulong *)0x0) {
        local_618 = (uint *)puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
        goto LAB_0338f0f0;
      }
LAB_0338f0ec:
      local_618 = (uint *)0x0;
LAB_0338f0f0:
      FUN_0322c554(&local_298,"Forbidden Opt bits 0x{:x} on content of type \'{}\'.",&DAT_047b2eb0,
                   &local_70,&local_618);
      local_258 = 0x5a9;
      goto LAB_0338f128;
    }
    local_288 = &DAT_0488df58;
    local_280 = 1;
    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
    local_278 = nn::os::GetThreadId(pTVar14);
    local_298 = local_248;
    local_268 = 0;
    local_260 = (char *)0x0;
    local_258 = 0;
    local_250 = 0;
    local_290 = (undefined *)0x10000000000;
    local_248[0] = local_248[0] & 0xffffff00;
    while (uVar11 = *puVar28, ((uint)uVar11 >> 3 & 1) == 0) {
      if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
      goto LAB_03390d94;
    }
    if (puVar28 != (ulong *)0x0) {
      local_3d8 = puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
      goto LAB_03390d98;
    }
LAB_03390d94:
    local_3d8 = 0;
LAB_03390d98:
    local_270 = local_298;
    uVar13 = FUN_0322c554(&local_298,"Forbidden Opt bits 0x{:x} on content of type \'{}\'.",
                          &DAT_047b2eb0,&local_70,&local_3d8);
    local_258 = 0x5a9;
    goto LAB_03390dd4;
  }
  local_278 = CONCAT44(local_278._4_4_,0xffffffff);
  local_298 = (uint *)(PTR_DAT_047e5b58 + 0x10);
  local_290 = PTR_DAT_047e5b60 + 0x10;
  local_280 = 0x4000;
  local_260 = (char *)0x8000000000000000;
  local_250 = 0x8000000000000000;
  local_120 = 0x8000000000000000;
  local_110 = 0x8000000000000000;
  local_d0 = 0x8000000000000000;
  local_288 = (undefined8 *)(PTR_PTR_047d1a50 + 0x20);
  local_108 = auStack_f8;
  local_c8 = auStack_b8;
  local_90 = 0x8000000000000000;
  local_270 = (uint *)0x0;
  local_268 = 0;
  local_258 = 0;
  local_240 = 0;
  local_128 = 0;
  local_118 = 0;
  local_100 = 0x8000000200000000;
  local_d8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_7e = 0;
  local_248[0] = 0;
  local_80 = 1;
  local_c0 = 0x8000000300000000;
  local_78 = uVar6;
  memset(&local_230,0,0x100);
  local_238 = 0x4000000;
  local_3d0 = local_3c0;
  local_340 = local_330;
  local_2b0 = local_2a0;
  local_3c8 = 0;
  local_3c4 = 0x80000020;
  local_338 = 0;
  local_334 = 0x80000020;
  local_2a8 = -0x7ffffffe00000000;
  local_3d8 = uVar12 & 0xffffffff;
  local_3dc = 0;
  local_160 = param_1;
  local_130 = param_1;
  if ((uVar6 & 1) != 0) {
    uVar11 = FUN_03391790(param_2);
    uVar6 = (uint)uVar11;
    local_3dc = uVar6;
    if (uVar11 >> 0x20 == 0) {
      if (*(byte *)(param_2 + 3) != 0) goto LAB_0338f020;
      if (*param_1 < 0) goto LAB_0338f02c;
      local_238 = local_238 | 1;
      piVar23 = (int *)&DAT_0488dfc8;
      local_230 = uVar11;
      switch(uVar6 & 0x1f) {
      case 0:
        break;
      case 1:
        piVar23 = (int *)&DAT_0488dfd8;
        break;
      case 2:
      case 4:
      case 5:
        puVar16 = (ulong *)(**(code **)(**(long **)PTR_DAT_047ddc48 + 0x60))
                                     (*(long **)PTR_DAT_047ddc48,uVar11 & 0xffffffff);
        if (puVar16 != (ulong *)0x0) {
          do {
            uVar11 = *puVar16;
            if (((uint)uVar11 >> 2 & 1) != 0) {
              piVar23 = (int *)puVar16[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
              goto LAB_0338fa50;
            }
            puVar16 = (ulong *)puVar16[1];
          } while (puVar16 != (ulong *)0x0);
          piVar23 = (int *)0x0;
LAB_0338fa50:
          break;
        }
        if (DAT_0488dfa8 != '\0') {
          if (DAT_046aaf68 != '\0') goto LAB_0338fe74;
          local_618 = (uint *)0x0;
          local_608 = &DAT_0488df58;
          uStack_600 = 1;
          pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
          local_5f8 = nn::os::GetThreadId(pTVar14);
          local_5f0 = (uint *)0x0;
          local_5e8 = 0;
          local_5e0 = (char *)0x0;
          local_5d8 = 0;
          uStack_5d0 = 0;
          while (uVar11 = *puVar28, ((uint)uVar11 >> 3 & 1) == 0) {
            if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
            goto LAB_03390178;
          }
          if (puVar28 != (ulong *)0x0) {
            local_70 = puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
            goto LAB_0339017c;
          }
LAB_03390178:
          local_70 = 0;
LAB_0339017c:
          FUN_0322c554(&local_618,
                       "Cannot find a built-in type corresponding to format 0x{:x8} of type \'{}\' (invalid format?)."
                       ,&DAT_047b2eb0,&local_3dc,&local_70);
          local_5d8 = 0x5d9;
          uVar17 = 0x775182a1;
          goto LAB_0338fb00;
        }
        if (DAT_046aaf68 == '\0') goto LAB_0338fb38;
LAB_0338fe74:
        local_608 = &DAT_0488df58;
        uStack_600 = 1;
        pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
        local_5f8 = nn::os::GetThreadId(pTVar14);
        local_618 = local_5c8;
        local_5e8 = 0;
        local_5e0 = (char *)0x0;
        local_5c8[0] = local_5c8[0] & 0xffffff00;
        local_5d8 = 0;
        uStack_5d0 = 0;
        puStack_610 = (undefined *)0x10000000000;
        while (uVar11 = *puVar28, ((uint)uVar11 >> 3 & 1) == 0) {
          if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
          goto LAB_0339155c;
        }
        if (puVar28 != (ulong *)0x0) {
          local_3e8 = (char *)puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
          goto LAB_03391560;
        }
LAB_0339155c:
        local_3e8 = (char *)0x0;
LAB_03391560:
        local_5f0 = local_618;
        FUN_0322c554(&local_618,
                     "Cannot find a built-in type corresponding to format 0x{:x8} of type \'{}\' (invalid format?)."
                     ,&DAT_047b2eb0,&local_3dc,&local_3e8);
        local_5d8 = 0x5d9;
        uVar17 = 0x775182a1;
        goto LAB_03390f48;
      case 3:
        piVar23 = param_1 + 0x68;
        break;
      case 6:
        piVar23 = param_1 + 0x5c;
        break;
      case 7:
        piVar23 = (int *)PTR_DAT_047e67a8;
        break;
      case 8:
        piVar23 = param_1 + 0x62;
        break;
      default:
        if (DAT_0488dfa8 != '\0') {
          if (DAT_046aaf68 == '\0') {
            local_618 = (uint *)0x0;
            local_608 = &DAT_0488df58;
            uStack_600 = 1;
            pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
            local_5f8 = nn::os::GetThreadId(pTVar14);
            local_3f8 = CONCAT44(local_3f8._4_4_,local_3dc) & 0xffffffff0000001f;
            local_5f0 = (uint *)0x0;
            local_5e8 = 0;
            local_5e0 = (char *)0x0;
            local_5d8 = 0;
            uStack_5d0 = 0;
            while (uVar11 = *puVar28, ((uint)uVar11 >> 3 & 1) == 0) {
              if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
              goto LAB_0339066c;
            }
            if (puVar28 != (ulong *)0x0) {
              local_70 = puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
              goto LAB_03390670;
            }
LAB_0339066c:
            local_70 = 0;
LAB_03390670:
            FUN_0322c554(&local_618,"Unknown format kind 0x{:x8} for type \'{}\'.",&DAT_047b2eb0,
                         &local_3f8,&local_70);
            local_5d8 = 0x5ef;
            goto LAB_0338fb04;
          }
LAB_0339002c:
          local_608 = &DAT_0488df58;
          uStack_600 = 1;
          pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
          local_5f8 = nn::os::GetThreadId(pTVar14);
          local_618 = local_5c8;
          local_5e8 = 0;
          local_5e0 = (char *)0x0;
          local_5c8[0] = local_5c8[0] & 0xffffff00;
          puStack_610 = (undefined *)0x10000000000;
          local_3ec = local_3dc & 0x1f;
          local_5d8 = 0;
          uStack_5d0 = 0;
          while (uVar11 = *puVar28, ((uint)uVar11 >> 3 & 1) == 0) {
            if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
            goto LAB_033915cc;
          }
          if (puVar28 != (ulong *)0x0) {
            local_3e8 = (char *)puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
            goto LAB_033915d0;
          }
LAB_033915cc:
          local_3e8 = (char *)0x0;
LAB_033915d0:
          local_5f0 = local_618;
          FUN_0322c554(&local_618,"Unknown format kind 0x{:x8} for type \'{}\'.",&DAT_047b2eb0,
                       &local_3ec,&local_3e8);
          local_5d8 = 0x5ef;
          goto LAB_03390f4c;
        }
        if (DAT_046aaf68 != '\0') goto LAB_0339002c;
        goto LAB_0338fb38;
      }
      local_238 = local_238 | 4;
      local_220 = piVar23;
      if (((byte)local_78 >> 1 & 1) == 0) goto LAB_0338eae0;
      if (uVar6 == 0) goto LAB_0338fa8c;
      uVar11 = FUN_03391790(param_2);
      if (uVar11 >> 0x1f == 0) {
        if (*(byte *)(param_2 + 3) != 0) goto LAB_0338fbf8;
        if (-1 < *param_1) {
          local_238 = local_238 | 2;
          if ((int)uVar11 < param_1[0x1a]) {
            local_228 = (undefined *)0x0;
            local_3d8 = CONCAT44((int)uVar11,(int)local_3d8);
          }
          else {
            local_228 = PTR_DAT_047e5f40;
          }
          goto LAB_0338eae0;
        }
      }
      else {
        *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_0338fbf8:
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_0488dfa8 == '\0') {
        if (DAT_046aaf68 == '\0') goto LAB_0338fb44;
      }
      else if (DAT_046aaf68 == '\0') {
        local_618 = (uint *)0x0;
        local_608 = &DAT_0488df58;
        uStack_600 = 1;
        pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
        local_5f8 = nn::os::GetThreadId(pTVar14);
        local_5f0 = (uint *)0x0;
        local_5e8 = 0;
        local_5e0 = (char *)0x0;
        local_5d8 = 0;
        uStack_5d0 = 0;
        FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
        local_5d8 = 0x5f9;
        goto LAB_0338f090;
      }
      local_608 = &DAT_0488df58;
      uStack_600 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_5f8 = nn::os::GetThreadId(pTVar14);
      local_618 = local_5c8;
      local_5e8 = 0;
      local_5e0 = (char *)0x0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      local_5c8[0] = local_5c8[0] & 0xffffff00;
      puStack_610 = (undefined *)0x10000000000;
      local_5f0 = local_618;
      FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
      local_5d8 = 0x5f9;
LAB_0338f1e0:
      local_5e0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      if ((char)local_5c8[0] != '\0') {
        sVar15 = strlen((char *)local_5c8);
        *(undefined2 *)((long)local_5c8 + (long)(int)((int)sVar15 - (uint)((int)sVar15 == 0xff))) =
             10;
        printf("%s",local_5c8);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
    }
    else {
      *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_0338f020:
      *param_1 = -0x7ffbfe00;
LAB_0338f02c:
      if (DAT_0488dfa8 == '\0') {
        if (DAT_046aaf68 == '\0') goto LAB_0338fb44;
LAB_0338f184:
        local_608 = &DAT_0488df58;
        uStack_600 = 1;
        pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
        local_5f8 = nn::os::GetThreadId(pTVar14);
        local_618 = local_5c8;
        local_5e8 = 0;
        local_5e0 = (char *)0x0;
        local_5d8 = 0;
        uStack_5d0 = 0;
        local_5c8[0] = local_5c8[0] & 0xffffff00;
        puStack_610 = (undefined *)0x10000000000;
        local_5f0 = local_618;
        FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
        local_5d8 = 0x5be;
        goto LAB_0338f1e0;
      }
      if (DAT_046aaf68 != '\0') goto LAB_0338f184;
      local_618 = (uint *)0x0;
      local_608 = &DAT_0488df58;
      uStack_600 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_5f8 = nn::os::GetThreadId(pTVar14);
      local_5f0 = (uint *)0x0;
      local_5e8 = 0;
      local_5e0 = (char *)0x0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
      local_5d8 = 0x5be;
LAB_0338f090:
      local_5e0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      FUN_0322c8e0(&local_618);
    }
    if (((ulong)local_5f0 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,(undefined *)((long)local_5f0 + -1),0);
    }
    goto LAB_0338fb44;
  }
  if ((uVar6 >> 1 & 1) != 0) {
LAB_0338fa8c:
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_0338fb38;
    }
    else if (DAT_046aaf68 == '\0') {
      local_618 = (uint *)0x0;
      local_608 = &DAT_0488df58;
      uStack_600 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_5f8 = nn::os::GetThreadId(pTVar14);
      local_5f0 = (uint *)0x0;
      local_5e8 = 0;
      local_5e0 = (char *)0x0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      FUN_0322c554(&local_618,"Invalid type #{} with Opt::SUBTYPE optional but no Opt::FORMAT.",
                   &DAT_044e9048,&local_74);
      local_5d8 = 0x5f6;
      uVar17 = 0x1aff8e1a;
LAB_0338fb00:
      uStack_600 = CONCAT44(uVar17,(undefined4)uStack_600);
      goto LAB_0338fb04;
    }
    local_608 = &DAT_0488df58;
    uStack_600 = 1;
    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
    local_5f8 = nn::os::GetThreadId(pTVar14);
    local_618 = local_5c8;
    local_5e8 = 0;
    local_5e0 = (char *)0x0;
    local_5d8 = 0;
    uStack_5d0 = 0;
    local_5c8[0] = local_5c8[0] & 0xffffff00;
    puStack_610 = (undefined *)0x10000000000;
    local_5f0 = local_618;
    FUN_0322c554(&local_618,"Invalid type #{} with Opt::SUBTYPE optional but no Opt::FORMAT.",
                 &DAT_044e9048,&local_74);
    local_5d8 = 0x5f6;
    uVar17 = 0x1aff8e1a;
LAB_03390f48:
    uStack_600 = CONCAT44(uVar17,(undefined4)uStack_600);
    goto LAB_03390f4c;
  }
LAB_0338eae0:
  if ((local_78 >> 4 & 1) == 0) {
    if ((local_78 >> 0x14 & 1) == 0) {
joined_r0x0338f598:
      if ((local_78 >> 0x15 & 1) == 0) {
        if ((local_78 >> 0x17 & 1) == 0) {
LAB_0338eaf4:
          if ((local_78._1_1_ >> 6 & 1) == 0) {
LAB_0338eafc:
            if ((local_78._3_1_ >> 1 & 1) == 0) {
LAB_0338eb04:
              puVar3 = PTR_PTR_047d1a50;
              uVar6 = (uint)*puVar28;
              if ((uVar6 >> 3 & 1) != 0) {
                if (puVar28[(ulong)(byte)POPCOUNT((byte)*puVar28 & 7) + 2] != 0) {
                  local_238 = local_238 | 8;
                  uVar6 = (uint)*puVar28;
                  local_218 = puVar28[(ulong)(byte)POPCOUNT((byte)*puVar28 & 7) + 2];
                }
              }
              if ((uVar6 >> 0xf & 1) != 0) {
                uVar11 = CONCAT44(uVar6,uVar6) & 0x7fff00007fff;
                plVar20 = (long *)puVar28[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                       POPCOUNT((char)(uVar11 >> 8))) + 2];
                if ((plVar20 != (long *)0x0) && ((short)plVar20[1] != 0)) {
                  local_238 = local_238 | 0x8000;
                  local_1b8 = plVar20;
                  if ((ulong)*(ushort *)(plVar20 + 1) != 0) {
                    lVar29 = (ulong)*(ushort *)(plVar20 + 1) << 4;
                    do {
                      plVar27 = plVar20 + 2;
                      if (*(char *)plVar20[3] == 't') {
                        uVar17 = *(undefined4 *)(*plVar27 + 0x30);
                        lVar21 = (long)local_338;
                        if ((int)(local_334 & 0x7fffffff) <= local_338) {
                          FUN_0133bb88(&local_340,puVar3,lVar21 + 1);
                        }
                        *(undefined4 *)(local_340 + (long)local_338 * 4) = uVar17;
                        local_338 = (int)(lVar21 + 1);
                        *plVar27 = 0;
                      }
                      lVar29 = lVar29 + -0x10;
                      plVar20 = plVar27;
                    } while (lVar29 != 0);
                  }
                }
              }
              if ((local_78._3_1_ >> 4 & 1) != 0) {
                local_238 = local_238 | 0x10000000;
                local_150 = 0;
              }
              iVar10 = FUN_031d8d9c(&local_298,param_1 + 0x2c,param_3);
              if (-1 < iVar10) {
                local_630 = (undefined8 *)*param_3;
                uVar6 = (uint)*local_630;
                if ((uVar6 >> 0x17 & 1) != 0) {
                  uVar11 = CONCAT44(uVar6,uVar6) & 0x7fffff007fffff;
                  lVar29 = local_630[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                   POPCOUNT((char)(uVar11 >> 8)) +
                                                  POPCOUNT((char)(uVar11 >> 0x10))) + 2];
                  if (lVar29 != 0) {
                    sVar5 = *(short *)(lVar29 + 4);
                    if ((long)sVar5 != 0) {
                      uVar17 = **(undefined4 **)(lVar29 + 8);
                      uVar11 = CONCAT44(uVar17,uVar17) & 0x3ffff0003ffff;
                      *(undefined8 **)
                       (*(undefined4 **)(lVar29 + 8) +
                       (ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                    POPCOUNT((char)(uVar11 >> 0x10))) * 2 + 4) = local_630;
                      if (sVar5 != 1) {
                        lVar21 = (long)sVar5 * 8 + -8;
                        puVar22 = (undefined8 *)(lVar29 + 0x10);
                        do {
                          lVar21 = lVar21 + -8;
                          uVar17 = *(undefined4 *)*puVar22;
                          uVar11 = CONCAT44(uVar17,uVar17) & 0x3ffff0003ffff;
                          *(undefined8 *)
                           ((undefined4 *)*puVar22 +
                           (ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                        POPCOUNT((char)(uVar11 >> 0x10))) * 2 + 4) = *param_3;
                          puVar22 = puVar22 + 1;
                        } while (lVar21 != 0);
                      }
                      local_630 = (undefined8 *)*param_3;
                    }
                  }
                }
                *(undefined8 **)(*(long *)(param_1 + 4) + (long)local_74 * 8) = local_630;
                local_620 = *(long *)(param_1 + 4);
                plVar20 = (long *)(param_1 + 0x28);
                iVar10 = param_1[0x2a];
                if (iVar10 != 0) {
                  iVar19 = param_1[6];
                  do {
                    lVar29 = *plVar20 + (long)iVar10 * 0x10;
                    iVar10 = *(int *)(lVar29 + -8);
                    if ((iVar19 <= iVar10) ||
                       (lVar21 = *(long *)(local_620 + (long)iVar10 * 8), lVar21 == 0)) break;
                    **(long **)(lVar29 + -0x10) = lVar21;
                    iVar10 = param_1[0x2a] + -1;
                    param_1[0x2a] = iVar10;
                  } while (iVar10 != 0);
                  local_620 = *(long *)(param_1 + 4);
                }
                iVar19 = (int)local_3d8;
                iVar10 = param_1[6];
                lVar29 = *(long *)(param_1 + 0x18);
                if (0 < (int)local_3d8) {
                  plVar27 = local_630 + 1;
                  if (((int)local_3d8 < iVar10) &&
                     (lVar21 = *(long *)(local_620 + (local_3d8 & 0xffffffff) * 8), lVar21 != 0)) {
                    *plVar27 = lVar21;
                  }
                  else {
                    *plVar27 = *(long *)(lVar29 + (local_3d8 & 0xffffffff) * 8);
                    iVar18 = param_1[0x2a];
                    lVar21 = (long)iVar18;
                    if ((int)(param_1[0x2b] & 0x7fffffffU) <= iVar18) {
                      FUN_03395570(plVar20,lVar21 + 1);
                      iVar18 = param_1[0x2a];
                    }
                    plVar1 = (long *)(*(long *)(param_1 + 0x28) + (long)iVar18 * 0x10);
                    *plVar1 = (long)plVar27;
                    *(int *)(plVar1 + 1) = iVar19;
                    param_1[0x2a] = (int)(lVar21 + 1);
                  }
                }
                uVar6 = local_3d8._4_4_;
                if (0 < (int)local_3d8._4_4_) {
                  if (((uint)*local_630 >> 1 & 1) == 0) {
                    plVar27 = (long *)0x0;
                  }
                  else {
                    plVar27 = local_630 + (ulong)(byte)POPCOUNT((byte)*local_630 & 1) + 2;
                  }
                  if (((int)local_3d8._4_4_ < iVar10) &&
                     (lVar21 = *(long *)(local_620 + (ulong)local_3d8._4_4_ * 8), lVar21 != 0)) {
                    *plVar27 = lVar21;
                  }
                  else {
                    *plVar27 = *(long *)(lVar29 + (ulong)local_3d8._4_4_ * 8);
                    iVar19 = param_1[0x2a];
                    lVar21 = (long)iVar19;
                    if ((int)(param_1[0x2b] & 0x7fffffffU) <= iVar19) {
                      FUN_03395570(plVar20,lVar21 + 1);
                      iVar19 = param_1[0x2a];
                    }
                    plVar1 = (long *)(*(long *)(param_1 + 0x28) + (long)iVar19 * 0x10);
                    *plVar1 = (long)plVar27;
                    *(uint *)(plVar1 + 1) = uVar6;
                    param_1[0x2a] = (int)(lVar21 + 1);
                  }
                }
                if (local_3c8 != 0) {
                  uVar6 = (uint)*local_630;
                  if ((uVar6 >> 0x17 & 1) == 0) {
                    psVar26 = (short *)0x0;
                  }
                  else {
                    uVar11 = CONCAT44(uVar6,uVar6) & 0x7fffff007fffff;
                    psVar26 = (short *)local_630[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                               POPCOUNT((char)(uVar11 >> 8)) +
                                                              POPCOUNT((char)(uVar11 >> 0x10))) + 2]
                    ;
                  }
                  if (0 < *psVar26) {
                    lVar21 = 0;
                    do {
                      plVar27 = (long *)(*(long *)(psVar26 + lVar21 * 4 + 4) + 8);
                      iVar19 = *(int *)(local_3d0 + lVar21 * 4);
                      if ((iVar19 < iVar10) &&
                         (lVar24 = *(long *)(local_620 + (long)iVar19 * 8), lVar24 != 0)) {
                        *plVar27 = lVar24;
                      }
                      else {
                        *plVar27 = *(long *)(lVar29 + (long)iVar19 * 8);
                        iVar18 = param_1[0x2a];
                        lVar24 = (long)iVar18;
                        if ((int)(param_1[0x2b] & 0x7fffffffU) <= iVar18) {
                          FUN_03395570(plVar20,lVar24 + 1);
                          iVar18 = param_1[0x2a];
                        }
                        plVar1 = (long *)(*(long *)(param_1 + 0x28) + (long)iVar18 * 0x10);
                        *plVar1 = (long)plVar27;
                        *(int *)(plVar1 + 1) = iVar19;
                        param_1[0x2a] = (int)(lVar24 + 1);
                      }
                      lVar21 = lVar21 + 1;
                    } while (lVar21 < *psVar26);
                  }
                }
                if (local_338 != 0) {
                  uVar6 = (uint)*local_630;
                  if ((uVar6 >> 0xf & 1) == 0) {
                    lVar21 = 0;
                  }
                  else {
                    uVar11 = CONCAT44(uVar6,uVar6) & 0x7fff00007fff;
                    lVar21 = local_630[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                    POPCOUNT((char)(uVar11 >> 8))) + 2];
                  }
                  if (0 < local_338) {
                    lVar24 = 0;
                    plVar27 = (long *)(lVar21 + 0x10);
                    do {
                      plVar1 = (long *)(lVar21 + 0x10) + (ulong)*(ushort *)(lVar21 + 8) * 2;
                      if (plVar27 != plVar1) {
                        do {
                          if (*(char *)plVar27[1] == 't') goto LAB_03390888;
                          plVar27 = plVar27 + 2;
                        } while (plVar1 != plVar27);
                        plVar27 = plVar1;
                      }
LAB_03390888:
                      iVar19 = *(int *)(local_340 + lVar24 * 4);
                      if ((iVar19 < iVar10) &&
                         (lVar25 = *(long *)(local_620 + (long)iVar19 * 8), lVar25 != 0)) {
                        *plVar27 = lVar25;
                      }
                      else {
                        *plVar27 = *(long *)(lVar29 + (long)iVar19 * 8);
                        iVar18 = param_1[0x2a];
                        lVar25 = (long)iVar18;
                        if ((int)(param_1[0x2b] & 0x7fffffffU) <= iVar18) {
                          FUN_03395570(plVar20,lVar25 + 1);
                          iVar18 = param_1[0x2a];
                        }
                        puVar22 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar18 * 0x10);
                        *puVar22 = plVar27;
                        *(int *)(puVar22 + 1) = iVar19;
                        param_1[0x2a] = (int)(lVar25 + 1);
                      }
                      lVar24 = lVar24 + 1;
                      plVar27 = plVar27 + 2;
                    } while (lVar24 < local_338);
                  }
                }
                if (0 < (int)local_2a8) {
                  lVar21 = 0;
                  uVar11 = CONCAT44(*(undefined4 *)local_630,*(undefined4 *)local_630) &
                           0x3fff00003fff;
                  plVar27 = (long *)(local_630[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                            POPCOUNT((char)(uVar11 >> 8))) + 2] + 8)
                  ;
                  do {
                    iVar19 = *(int *)(local_2b0 + lVar21 * 4);
                    if ((iVar19 < iVar10) &&
                       (lVar24 = *(long *)(local_620 + (long)iVar19 * 8), lVar24 != 0)) {
                      *plVar27 = lVar24;
                    }
                    else {
                      *plVar27 = *(long *)(lVar29 + (long)iVar19 * 8);
                      iVar18 = param_1[0x2a];
                      lVar24 = (long)iVar18;
                      if ((int)(param_1[0x2b] & 0x7fffffffU) <= iVar18) {
                        FUN_03395570(plVar20,lVar24 + 1);
                        iVar18 = param_1[0x2a];
                      }
                      puVar22 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)iVar18 * 0x10);
                      *puVar22 = plVar27;
                      *(int *)(puVar22 + 1) = iVar19;
                      param_1[0x2a] = (int)(lVar24 + 1);
                    }
                    lVar21 = lVar21 + 1;
                    plVar27 = plVar27 + 2;
                  } while (lVar21 < (int)local_2a8);
                }
                if (*(code **)(param_1 + 0x9c) != (code *)0x0) {
                  (**(code **)(param_1 + 0x9c))(*param_3);
                }
                goto LAB_0338fb44;
              }
              if (DAT_0488dfa8 == '\0') {
                if (DAT_046aaf68 == '\0') goto LAB_0338fb38;
              }
              else if (DAT_046aaf68 == '\0') {
                local_618 = (uint *)0x0;
                local_608 = &DAT_0488df58;
                uStack_600 = 1;
                pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                local_5f8 = nn::os::GetThreadId(pTVar14);
                local_5f0 = (uint *)0x0;
                local_5e8 = 0;
                local_5e0 = (char *)0x0;
                local_5d8 = 0;
                uStack_5d0 = 0;
                FUN_0322c554(&local_618,"Failed to allocate type from builder",PTR_DAT_047d1b38);
                local_5d8 = 0x6bf;
                goto LAB_0338fb04;
              }
              local_608 = &DAT_0488df58;
              uStack_600 = 1;
              pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
              local_5f8 = nn::os::GetThreadId(pTVar14);
              local_618 = local_5c8;
              local_5e8 = 0;
              local_5e0 = (char *)0x0;
              local_5d8 = 0;
              uStack_5d0 = 0;
              local_5c8[0] = local_5c8[0] & 0xffffff00;
              puStack_610 = (undefined *)0x10000000000;
              local_5f0 = local_618;
              FUN_0322c554(&local_618,"Failed to allocate type from builder",PTR_DAT_047d1b38);
              local_5d8 = 0x6bf;
              goto LAB_03390f4c;
            }
            uVar11 = FUN_03391790(param_2);
            if (uVar11 >> 0x1f == 0) {
              if (*(byte *)(param_2 + 3) != 0) goto LAB_0338fdd0;
              if (-1 < *param_1) {
                if (param_1[0x26] <= (int)uVar11) {
                  if (DAT_0488dfa8 == '\0') {
                    if (DAT_046aaf68 == '\0') goto LAB_0338fb38;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_618 = (uint *)0x0;
                    local_608 = &DAT_0488df58;
                    uStack_600 = 1;
                    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                    local_5f8 = nn::os::GetThreadId(pTVar14);
                    local_5f0 = (uint *)0x0;
                    local_5e8 = 0;
                    local_5e0 = (char *)0x0;
                    local_5d8 = 0;
                    uStack_5d0 = 0;
                    while (uVar11 = *puVar28, ((uint)uVar11 >> 3 & 1) == 0) {
                      if (((uVar11 & 1) != 0) ||
                         (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
                      goto LAB_03391288;
                    }
                    if (puVar28 != (ulong *)0x0) {
                      local_70 = puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
                      goto LAB_0339128c;
                    }
LAB_03391288:
                    local_70 = 0;
LAB_0339128c:
                    FUN_0322c554(&local_618,
                                 "Invalid attribute string ID (out of bounds) for type \'{}\'.",
                                 &DAT_044e9758,&local_70);
                    local_5d8 = 0x691;
                    goto LAB_0338fb04;
                  }
                  local_608 = &DAT_0488df58;
                  uStack_600 = 1;
                  pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                  local_5f8 = nn::os::GetThreadId(pTVar14);
                  local_618 = local_5c8;
                  local_5e8 = 0;
                  local_5e0 = (char *)0x0;
                  local_5c8[0] = local_5c8[0] & 0xffffff00;
                  local_5d8 = 0;
                  uStack_5d0 = 0;
                  puStack_610 = (undefined *)0x10000000000;
                  while (uVar11 = *puVar28, ((uint)uVar11 >> 3 & 1) == 0) {
                    if (((uVar11 & 1) != 0) ||
                       (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0)) goto LAB_03391634;
                  }
                  if (puVar28 != (ulong *)0x0) {
                    local_3e8 = (char *)puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
                    goto LAB_03391638;
                  }
LAB_03391634:
                  local_3e8 = (char *)0x0;
LAB_03391638:
                  local_5f0 = local_618;
                  FUN_0322c554(&local_618,
                               "Invalid attribute string ID (out of bounds) for type \'{}\'.",
                               &DAT_044e9758,&local_3e8);
                  local_5d8 = 0x691;
                  goto LAB_03390f4c;
                }
                local_238 = local_238 | 0x2000000;
                local_168 = *(undefined8 *)(*(long *)(param_1 + 0x24) + uVar11 * 8);
                goto LAB_0338eb04;
              }
            }
            else {
              *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_0338fdd0:
              *param_1 = -0x7ffbfe00;
            }
            if (DAT_0488dfa8 == '\0') {
              if (DAT_046aaf68 == '\0') goto LAB_0338fb44;
            }
            else if (DAT_046aaf68 == '\0') {
              local_618 = (uint *)0x0;
              local_608 = &DAT_0488df58;
              uStack_600 = 1;
              pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
              local_5f8 = nn::os::GetThreadId(pTVar14);
              local_5f0 = (uint *)0x0;
              local_5e8 = 0;
              local_5e0 = (char *)0x0;
              local_5d8 = 0;
              uStack_5d0 = 0;
              FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
              local_5d8 = 0x690;
              goto LAB_0338f090;
            }
            local_608 = &DAT_0488df58;
            uStack_600 = 1;
            pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
            local_5f8 = nn::os::GetThreadId(pTVar14);
            local_618 = local_5c8;
            local_5e8 = 0;
            local_5e0 = (char *)0x0;
            local_5d8 = 0;
            uStack_5d0 = 0;
            local_5c8[0] = local_5c8[0] & 0xffffff00;
            puStack_610 = (undefined *)0x10000000000;
            local_5f0 = local_618;
            FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
            local_5d8 = 0x690;
            goto LAB_0338f1e0;
          }
          uVar11 = FUN_03391790(param_2);
          if (uVar11 >> 0x1f == 0) {
            if (*(byte *)(param_2 + 3) != 0) goto LAB_0338f934;
            if (-1 < *param_1) {
              lVar29 = param_2[1] - *param_2;
              if (lVar29 < 0) {
                lVar29 = lVar29 + 1;
              }
              if (lVar29 >> 1 < (long)uVar11) {
                if (DAT_0488dfa8 == '\0') {
                  if (DAT_046aaf68 == '\0') goto LAB_0338fb38;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_618 = (uint *)0x0;
                  local_608 = &DAT_0488df58;
                  uStack_600 = 1;
                  pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                  local_5f8 = nn::os::GetThreadId(pTVar14);
                  local_5f0 = (uint *)0x0;
                  local_5e8 = 0;
                  local_5e0 = (char *)0x0;
                  local_5d8 = 0;
                  uStack_5d0 = 0;
                  FUN_0322c554(&local_618,"Too many fields",PTR_DAT_047d1b38);
                  local_5d8 = 0x67f;
                  goto LAB_0338fb04;
                }
                local_608 = &DAT_0488df58;
                uStack_600 = 1;
                pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                local_5f8 = nn::os::GetThreadId(pTVar14);
                local_618 = local_5c8;
                local_5e8 = 0;
                local_5e0 = (char *)0x0;
                local_5d8 = 0;
                uStack_5d0 = 0;
                local_5c8[0] = local_5c8[0] & 0xffffff00;
                puStack_610 = (undefined *)0x10000000000;
                local_5f0 = local_618;
                FUN_0322c554(&local_618,"Too many fields",PTR_DAT_047d1b38);
                local_5d8 = 0x67f;
                goto LAB_03390f4c;
              }
              if (0 < (int)uVar11) {
                do {
                  uVar12 = FUN_03391790(param_2);
                  if (uVar12 >> 0x1f != 0) {
                    *pbVar30 = *pbVar30 | 2;
                  }
                  uVar13 = FUN_03391790(param_2);
                  if (uVar13 >> 0x1f != 0) {
                    *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_03391130:
                    *param_1 = -0x7ffbfe00;
LAB_0339113c:
                    if (DAT_0488dfa8 == '\0') {
                      if (DAT_046aaf68 == '\0') goto LAB_0338fb44;
                    }
                    else if (DAT_046aaf68 == '\0') {
                      local_618 = (uint *)0x0;
                      local_608 = &DAT_0488df58;
                      uStack_600 = 1;
                      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                      local_5f8 = nn::os::GetThreadId(pTVar14);
                      local_5f0 = (uint *)0x0;
                      local_5e8 = 0;
                      local_5e0 = (char *)0x0;
                      local_5d8 = 0;
                      uStack_5d0 = 0;
                      FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
                      local_5d8 = 0x685;
                      goto LAB_0338f090;
                    }
                    local_608 = &DAT_0488df58;
                    uStack_600 = 1;
                    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                    local_5f8 = nn::os::GetThreadId(pTVar14);
                    local_618 = local_5c8;
                    local_5e8 = 0;
                    local_5e0 = (char *)0x0;
                    local_5d8 = 0;
                    uStack_5d0 = 0;
                    local_5c8[0] = local_5c8[0] & 0xffffff00;
                    puStack_610 = (undefined *)0x10000000000;
                    local_5f0 = local_618;
                    FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
                    local_5d8 = 0x685;
                    goto LAB_0338f1e0;
                  }
                  if (*(byte *)(param_2 + 3) != 0) goto LAB_03391130;
                  if (*param_1 < 0) goto LAB_0339113c;
                  iVar10 = (int)uVar12;
                  if ((iVar10 < 1) || (param_1[0x1a] <= iVar10)) {
                    if (DAT_0488dfa8 == '\0') {
                      if (DAT_046aaf68 == '\0') goto LAB_0338fb38;
                    }
                    else if (DAT_046aaf68 == '\0') {
                      local_618 = (uint *)0x0;
                      local_608 = &DAT_0488df58;
                      uStack_600 = 1;
                      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                      local_5f8 = nn::os::GetThreadId(pTVar14);
                      local_5f0 = (uint *)0x0;
                      local_5e8 = 0;
                      local_5e0 = (char *)0x0;
                      local_5d8 = 0;
                      uStack_5d0 = 0;
                      goto LAB_03391248;
                    }
                    local_608 = &DAT_0488df58;
                    uStack_600 = 1;
                    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                    local_5f8 = nn::os::GetThreadId(pTVar14);
                    local_618 = local_5c8;
                    local_5e8 = 0;
                    local_5e0 = (char *)0x0;
                    local_5c8[0] = local_5c8[0] & 0xffffff00;
                    local_5d8 = 0;
                    uStack_5d0 = 0;
                    puStack_610 = (undefined *)0x10000000000;
                    goto LAB_03391404;
                  }
                  local_238 = local_238 | 0x4000;
                  lVar21 = (long)(int)local_d0;
                  lVar29 = lVar21 + 1;
                  local_1c0 = 0;
                  if ((int)(local_d0._4_4_ & 0x7fffffff) <= (int)local_d0) {
                    FUN_031d964c(&local_d8,PTR_PTR_047d1a50 + 0x20,lVar29);
                  }
                  puVar22 = (undefined8 *)(local_d8 + lVar21 * 0x10);
                  local_d0 = CONCAT44(local_d0._4_4_,(int)lVar29);
                  *puVar22 = 0;
                  puVar22[1] = uVar13;
                  lVar29 = (long)(int)local_2a8;
                  if ((int)(local_2a8._4_4_ & 0x7fffffff) <= (int)local_2a8) {
                    FUN_0133bb88(&local_2b0,PTR_PTR_047d1a50,lVar29 + 1);
                  }
                  uVar6 = (int)uVar11 - 1;
                  uVar11 = (ulong)uVar6;
                  *(int *)(local_2b0 + (long)(int)local_2a8 * 4) = iVar10;
                  local_2a8 = CONCAT44(local_2a8._4_4_,(int)(lVar29 + 1));
                } while (uVar6 != 0);
              }
              goto LAB_0338eafc;
            }
          }
          else {
            *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_0338f934:
            *param_1 = -0x7ffbfe00;
          }
          if (DAT_0488dfa8 == '\0') {
            if (DAT_046aaf68 == '\0') goto LAB_0338fb44;
          }
          else if (DAT_046aaf68 == '\0') {
            local_618 = (uint *)0x0;
            local_608 = &DAT_0488df58;
            uStack_600 = 1;
            pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
            local_5f8 = nn::os::GetThreadId(pTVar14);
            local_5f0 = (uint *)0x0;
            local_5e8 = 0;
            local_5e0 = (char *)0x0;
            local_5d8 = 0;
            uStack_5d0 = 0;
            FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
            local_5d8 = 0x67e;
            goto LAB_0338f090;
          }
          local_608 = &DAT_0488df58;
          uStack_600 = 1;
          pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
          local_5f8 = nn::os::GetThreadId(pTVar14);
          local_618 = local_5c8;
          local_5e8 = 0;
          local_5e0 = (char *)0x0;
          local_5d8 = 0;
          uStack_5d0 = 0;
          local_5c8[0] = local_5c8[0] & 0xffffff00;
          puStack_610 = (undefined *)0x10000000000;
          local_5f0 = local_618;
          FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
          local_5d8 = 0x67e;
          goto LAB_0338f1e0;
        }
LAB_0338f6d8:
        uVar11 = FUN_03391790(param_2);
        if (uVar11 >> 0x20 == 0) {
          if (*(byte *)(param_2 + 3) != 0) goto LAB_0338f6fc;
          if (-1 < *param_1) {
            lVar21 = param_2[1] - *param_2;
            uVar6 = (uint)uVar11 & 0xffff;
            local_638 = (ulong)uVar6;
            lVar29 = lVar21 + 3;
            if (-1 < lVar21) {
              lVar29 = lVar21;
            }
            if (lVar29 >> 2 < (long)local_638) {
              if (DAT_0488dfa8 == '\0') {
                if (DAT_046aaf68 == '\0') goto LAB_0338fb38;
              }
              else if (DAT_046aaf68 == '\0') {
                local_618 = (uint *)0x0;
                local_608 = &DAT_0488df58;
                uStack_600 = 1;
                pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                local_5f8 = nn::os::GetThreadId(pTVar14);
                local_5f0 = (uint *)0x0;
                local_5e8 = 0;
                local_5e0 = (char *)0x0;
                local_5d8 = 0;
                uStack_5d0 = 0;
                FUN_0322c554(&local_618,"Too many fields",PTR_DAT_047d1b38);
                local_5d8 = 0x639;
                goto LAB_0338fb04;
              }
              local_608 = &DAT_0488df58;
              uStack_600 = 1;
              pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
              local_5f8 = nn::os::GetThreadId(pTVar14);
              local_618 = local_5c8;
              local_5e8 = 0;
              local_5e0 = (char *)0x0;
              local_5d8 = 0;
              uStack_5d0 = 0;
              local_5c8[0] = local_5c8[0] & 0xffffff00;
              puStack_610 = (undefined *)0x10000000000;
              local_5f0 = local_618;
              FUN_0322c554(&local_618,"Too many fields",PTR_DAT_047d1b38);
              local_5d8 = 0x639;
              goto LAB_03390f4c;
            }
            plVar20 = (long *)(param_1 + 0x2c);
            uVar7 = (uint)uVar11 >> 0x10;
            iVar10 = uVar7 + uVar6;
            uVar12 = (ulong)(uint)(iVar10 * 8);
            psVar26 = (short *)(**(code **)(*plVar20 + 0x18))(plVar20,uVar12 + 8);
            psVar26[1] = (short)(uVar11 >> 0x10);
            puVar16 = (ulong *)(psVar26 + 4);
            *psVar26 = (short)uVar11;
            psVar26[2] = (short)iVar10;
            memset(puVar16,0,uVar12);
            local_238 = local_238 | 0x800000;
            local_178 = psVar26;
            if ((uVar11 & 0xffff) != 0) {
              puVar2 = (uint *)(PTR_DAT_047e5b58 + 0x10);
              puVar3 = PTR_DAT_047e5b60 + 0x10;
              puVar22 = (undefined8 *)(PTR_PTR_047d1a50 + 0x20);
              do {
                uVar11 = FUN_03391790(param_2);
                if (0xffff < uVar11) {
                  *pbVar30 = *pbVar30 | 2;
                }
                if (param_1[0x22] <= (int)((uint)uVar11 & 0xffff)) {
                  if (DAT_0488dfa8 == '\0') {
                    if (DAT_046aaf68 == '\0') goto LAB_0338fb38;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_618 = (uint *)0x0;
                    local_608 = &DAT_0488df58;
                    uStack_600 = 1;
                    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                    local_5f8 = nn::os::GetThreadId(pTVar14);
                    local_5f0 = (uint *)0x0;
                    local_5e8 = 0;
                    local_5e0 = (char *)0x0;
                    local_5d8 = 0;
                    uStack_5d0 = 0;
                    FUN_0322c554(&local_618,"Invalid field name string ID (out of bounds).",
                                 PTR_DAT_047d1b38);
                    local_5d8 = 0x644;
                    goto LAB_0338fb04;
                  }
                  local_608 = &DAT_0488df58;
                  uStack_600 = 1;
                  pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                  local_5f8 = nn::os::GetThreadId(pTVar14);
                  local_618 = local_5c8;
                  local_5e8 = 0;
                  local_5e0 = (char *)0x0;
                  local_5d8 = 0;
                  uStack_5d0 = 0;
                  local_5c8[0] = local_5c8[0] & 0xffffff00;
                  puStack_610 = (undefined *)0x10000000000;
                  local_5f0 = local_618;
                  FUN_0322c554(&local_618,"Invalid field name string ID (out of bounds).",
                               PTR_DAT_047d1b38);
                  local_5d8 = 0x644;
                  goto LAB_03390f4c;
                }
                local_3e8 = *(char **)(*(long *)(param_1 + 0x20) +
                                      (ulong)((uint)uVar11 & 0xffff) * 8);
                uVar11 = FUN_03391790(param_2);
                if (0xffff < uVar11) {
                  *pbVar30 = *pbVar30 | 2;
                }
                if (((uint)uVar11 >> 7 & 1) == 0) {
                  local_640 = 0;
                }
                else {
                  *param_4 = 1;
                  uVar11 = (ulong)((uint)uVar11 & 0xffffff7f);
                  local_640 = FUN_03391790(param_2);
                }
                uVar12 = FUN_03391790(param_2);
                if (0xffff < uVar12) {
                  *pbVar30 = *pbVar30 | 2;
                }
                uVar13 = FUN_03391790(param_2);
                if (uVar13 >> 0x1f != 0) {
                  *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_03390fa0:
                  *param_1 = -0x7ffbfe00;
LAB_03390fac:
                  if (DAT_0488dfa8 == '\0') {
                    if (DAT_046aaf68 == '\0') goto LAB_0338fb44;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_618 = (uint *)0x0;
                    local_608 = &DAT_0488df58;
                    uStack_600 = 1;
                    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                    local_5f8 = nn::os::GetThreadId(pTVar14);
                    local_5f0 = (uint *)0x0;
                    local_5e8 = 0;
                    local_5e0 = (char *)0x0;
                    local_5d8 = 0;
                    uStack_5d0 = 0;
                    FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
                    local_5d8 = 0x656;
                    goto LAB_0338f090;
                  }
                  local_608 = &DAT_0488df58;
                  uStack_600 = 1;
                  pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                  local_5f8 = nn::os::GetThreadId(pTVar14);
                  local_618 = local_5c8;
                  local_5e8 = 0;
                  local_5e0 = (char *)0x0;
                  local_5d8 = 0;
                  uStack_5d0 = 0;
                  local_5c8[0] = local_5c8[0] & 0xffffff00;
                  puStack_610 = (undefined *)0x10000000000;
                  local_5f0 = local_618;
                  FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
                  local_5d8 = 0x656;
                  goto LAB_0338f1e0;
                }
                if (*(byte *)(param_2 + 3) != 0) goto LAB_03390fa0;
                if (*param_1 < 0) goto LAB_03390fac;
                iVar10 = (int)uVar13;
                if ((iVar10 < 1) || (param_1[0x1a] <= iVar10)) {
                  if (DAT_0488dfa8 == '\0') {
                    if (DAT_046aaf68 == '\0') goto LAB_0338fb38;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_618 = (uint *)0x0;
                    local_608 = &DAT_0488df58;
                    uStack_600 = 1;
                    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                    local_5f8 = nn::os::GetThreadId(pTVar14);
                    local_5f0 = (uint *)0x0;
                    local_5e8 = 0;
                    local_5e0 = (char *)0x0;
                    local_5d8 = 0;
                    uStack_5d0 = 0;
                    goto LAB_033910b8;
                  }
                  local_608 = &DAT_0488df58;
                  uStack_600 = 1;
                  pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                  local_5f8 = nn::os::GetThreadId(pTVar14);
                  local_618 = local_5c8;
                  local_5e8 = 0;
                  local_5e0 = (char *)0x0;
                  local_5c8[0] = local_5c8[0] & 0xffffff00;
                  local_5d8 = 0;
                  uStack_5d0 = 0;
                  puStack_610 = (undefined *)0x10000000000;
                  goto LAB_0339135c;
                }
                if (((uint)uVar11 & 0x30) != 0x20) {
                  if (DAT_0488dfa8 == '\0') {
                    if (DAT_046aaf68 == '\0') goto LAB_0338fb38;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_618 = (uint *)0x0;
                    local_608 = &DAT_0488df58;
                    uStack_600 = 1;
                    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                    local_5f8 = nn::os::GetThreadId(pTVar14);
                    local_5f0 = (uint *)0x0;
                    local_5e8 = 0;
                    local_5e0 = (char *)0x0;
                    local_5d8 = 0;
                    uStack_5d0 = 0;
                    goto LAB_03391110;
                  }
                  local_608 = &DAT_0488df58;
                  uStack_600 = 1;
                  pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                  local_5f8 = nn::os::GetThreadId(pTVar14);
                  local_618 = local_5c8;
                  local_5e8 = 0;
                  local_5e0 = (char *)0x0;
                  local_5c8[0] = local_5c8[0] & 0xffffff00;
                  local_5d8 = 0;
                  uStack_5d0 = 0;
                  puStack_610 = (undefined *)0x10000000000;
                  goto LAB_033913b0;
                }
                uStack_600 = 0x4000;
                local_5f8 = CONCAT44(local_5f8._4_4_,0xffffffff);
                local_5f0 = (uint *)0x0;
                local_5e8 = 0;
                local_5e0 = (char *)0x8000000000000000;
                local_5c8[0] = 0;
                local_5d8 = 0;
                uStack_5d0 = 0x8000000000000000;
                local_5c0 = (undefined *)0x0;
                local_4a0 = 0;
                local_4b0 = 0;
                uStack_4a8 = 0;
                local_47c = 0x80000002;
                local_49c = 0x80000000;
                local_440 = 0x8000000300000000;
                local_498 = 0;
                uStack_490 = 0x8000000000000000;
                local_480 = 0;
                local_458 = 0;
                local_450 = 0x8000000000000000;
                local_420 = 0;
                local_418 = 0;
                local_410 = 0x8000000000000000;
                local_408 = 0;
                local_3fe = 0;
                local_400 = 1;
                local_618 = puVar2;
                puStack_610 = puVar3;
                local_608 = puVar22;
                local_488 = auStack_478;
                local_448 = auStack_438;
                memset(auStack_5b0,0,0x100);
                uVar9 = (uint)uVar11 << 0x10;
                uVar6 = uVar9 | 0x200000;
                if ((uVar11 & 0x30) != 0) {
                  uVar6 = uVar9;
                }
                puStack_528 = (undefined *)(ulong)(uVar6 | (uint)uVar12 & 0xffff);
                local_5b8 = 0x70000;
                local_530 = local_3e8;
                local_520 = PTR_DAT_047e5f40;
                if (local_640 != 0) {
                  local_510 = (ulong)(uint)(local_640 << 0x1c);
                  local_5b8 = 0x170000;
                }
                FUN_031d8d9c(&local_618,plVar20,&local_70);
                *puVar16 = local_70;
                lVar29 = (long)local_3c8;
                if ((int)(local_3c4 & 0x7fffffff) <= local_3c8) {
                  FUN_0133bb88(&local_3d0,PTR_PTR_047d1a50,lVar29 + 1);
                }
                *(int *)(local_3d0 + (long)local_3c8 * 4) = iVar10;
                local_3c8 = (int)(lVar29 + 1);
                FUN_031d798c(&local_618);
                local_638 = local_638 - 1;
                puVar16 = puVar16 + 1;
              } while (local_638 != 0);
            }
            if (uVar7 != 0) {
              puVar2 = (uint *)(PTR_DAT_047e5b58 + 0x10);
              puVar3 = PTR_DAT_047e5b60 + 0x10;
              uVar6 = 0;
              puVar22 = (undefined8 *)(PTR_PTR_047d1a50 + 0x20);
              do {
                uStack_600 = 0x4000;
                local_5f8 = CONCAT44(local_5f8._4_4_,0xffffffff);
                local_5f0 = (uint *)0x0;
                local_5e8 = 0;
                local_5e0 = (char *)0x8000000000000000;
                local_5d8 = 0;
                uStack_5d0 = 0x8000000000000000;
                local_5c8[0] = 0;
                local_4a0 = 0;
                local_4b0 = 0;
                uStack_4a8 = 0;
                local_49c = 0x80000000;
                local_47c = 0x80000002;
                local_480 = 0;
                local_440 = 0x8000000300000000;
                local_498 = 0;
                uStack_490 = 0x8000000000000000;
                local_458 = 0;
                local_450 = 0x8000000000000000;
                local_420 = 0;
                local_418 = 0;
                local_410 = 0x8000000000000000;
                local_408 = 0;
                local_400 = 1;
                local_3fe = 0;
                local_618 = puVar2;
                puStack_610 = puVar3;
                local_608 = puVar22;
                local_488 = auStack_478;
                local_448 = auStack_438;
                memset(auStack_5b0,0,0x100);
                local_530 = "$PLACEHOLDER$";
                puStack_528 = &DAT_00110000;
                local_520 = PTR_DAT_047e5f40;
                local_5c0 = PTR_DAT_047e5f40;
                local_5b8 = 0x70000;
                sVar5 = *psVar26;
                FUN_031d8d9c(&local_618,plVar20,&local_70);
                *(ulong *)(psVar26 + (long)(int)(uVar6 + (int)sVar5) * 4 + 4) = local_70;
                FUN_031d798c(&local_618);
                uVar6 = uVar6 + 1;
              } while (uVar7 != uVar6);
            }
            goto LAB_0338eaf4;
          }
        }
        else {
          *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_0338f6fc:
          *param_1 = -0x7ffbfe00;
        }
        if (DAT_0488dfa8 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_0338fb44;
        }
        else if (DAT_046aaf68 == '\0') {
          local_618 = (uint *)0x0;
          local_608 = &DAT_0488df58;
          uStack_600 = 1;
          pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
          local_5f8 = nn::os::GetThreadId(pTVar14);
          local_5f0 = (uint *)0x0;
          local_5e8 = 0;
          local_5e0 = (char *)0x0;
          local_5d8 = 0;
          uStack_5d0 = 0;
          FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
          local_5d8 = 0x634;
          goto LAB_0338f090;
        }
        local_608 = &DAT_0488df58;
        uStack_600 = 1;
        pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
        local_5f8 = nn::os::GetThreadId(pTVar14);
        local_618 = local_5c8;
        local_5e8 = 0;
        local_5e0 = (char *)0x0;
        local_5d8 = 0;
        uStack_5d0 = 0;
        local_5c8[0] = local_5c8[0] & 0xffffff00;
        puStack_610 = (undefined *)0x10000000000;
        local_5f0 = local_618;
        FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
        local_5d8 = 0x634;
        goto LAB_0338f1e0;
      }
      uVar11 = FUN_03391790(param_2);
      if (uVar11 < 0x10000) {
        if (*(byte *)(param_2 + 3) != 0) goto LAB_0338f5c0;
        if (-1 < *param_1) {
          local_238 = local_238 | 0x200000;
          local_188 = uVar11;
          if ((local_78 >> 0x17 & 1) != 0) goto LAB_0338f6d8;
          goto LAB_0338eaf4;
        }
      }
      else {
        *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_0338f5c0:
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_0488dfa8 == '\0') {
        if (DAT_046aaf68 == '\0') goto LAB_0338fb44;
      }
      else if (DAT_046aaf68 == '\0') {
        local_618 = (uint *)0x0;
        local_608 = &DAT_0488df58;
        uStack_600 = 1;
        pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
        local_5f8 = nn::os::GetThreadId(pTVar14);
        local_5f0 = (uint *)0x0;
        local_5e8 = 0;
        local_5e0 = (char *)0x0;
        local_5d8 = 0;
        uStack_5d0 = 0;
        FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
        local_5d8 = 0x62c;
        goto LAB_0338f090;
      }
      local_608 = &DAT_0488df58;
      uStack_600 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_5f8 = nn::os::GetThreadId(pTVar14);
      local_618 = local_5c8;
      local_5e8 = 0;
      local_5e0 = (char *)0x0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      local_5c8[0] = local_5c8[0] & 0xffffff00;
      puStack_610 = (undefined *)0x10000000000;
      local_5f0 = local_618;
      FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
      local_5d8 = 0x62c;
      goto LAB_0338f1e0;
    }
LAB_0338f370:
    uVar11 = FUN_03391790(param_2);
    if (uVar11 >> 0x20 != 0) {
      *pbVar30 = *pbVar30 | 2;
    }
    uVar12 = FUN_03391790(param_2);
    if (uVar12 >> 0x20 == 0) {
      if (*(byte *)(param_2 + 3) != 0) goto LAB_0338f418;
      if (-1 < *param_1) {
        local_190 = uVar11 & 0xffff | (uVar12 & 0xfff) << 0x10 | (uVar12 >> 0xc & 0xf) << 0x1c;
        local_238 = local_238 | 0x100000;
        goto joined_r0x0338f598;
      }
    }
    else {
      *pbVar30 = *(byte *)(param_2 + 3) | 2;
LAB_0338f418:
      *param_1 = -0x7ffbfe00;
    }
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_0338fb44;
    }
    else if (DAT_046aaf68 == '\0') {
      local_618 = (uint *)0x0;
      local_608 = &DAT_0488df58;
      uStack_600 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_5f8 = nn::os::GetThreadId(pTVar14);
      local_5f0 = (uint *)0x0;
      local_5e8 = 0;
      local_5e0 = (char *)0x0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
      local_5d8 = 0x61f;
      goto LAB_0338f090;
    }
    local_608 = &DAT_0488df58;
    uStack_600 = 1;
    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
    local_5f8 = nn::os::GetThreadId(pTVar14);
    local_618 = local_5c8;
    local_5e8 = 0;
    local_5e0 = (char *)0x0;
    local_5d8 = 0;
    uStack_5d0 = 0;
    local_5c8[0] = local_5c8[0] & 0xffffff00;
    puStack_610 = (undefined *)0x10000000000;
    local_5f0 = local_618;
    FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
    local_5d8 = 0x61f;
    goto LAB_0338f1e0;
  }
  local_70 = FUN_03391790(param_2);
  if ((char)param_2[3] != '\0') {
    *param_1 = -0x7ffbfe00;
LAB_0338f250:
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_0338fb44;
    }
    else if (DAT_046aaf68 == '\0') {
      local_618 = (uint *)0x0;
      local_608 = &DAT_0488df58;
      uStack_600 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_5f8 = nn::os::GetThreadId(pTVar14);
      local_5f0 = (uint *)0x0;
      local_5e8 = 0;
      local_5e0 = (char *)0x0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
      local_5d8 = 0x611;
      goto LAB_0338f090;
    }
    local_608 = &DAT_0488df58;
    uStack_600 = 1;
    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
    local_5f8 = nn::os::GetThreadId(pTVar14);
    local_618 = local_5c8;
    local_5e8 = 0;
    local_5e0 = (char *)0x0;
    local_5d8 = 0;
    uStack_5d0 = 0;
    local_5c8[0] = local_5c8[0] & 0xffffff00;
    puStack_610 = (undefined *)0x10000000000;
    local_5f0 = local_618;
    FUN_0322c554(&local_618,"Error in input stream.",PTR_DAT_047d1b38);
    local_5d8 = 0x611;
    goto LAB_0338f1e0;
  }
  if (*param_1 < 0) goto LAB_0338f250;
  if (0xfffffffdffffffff < local_70 - 0x100000000) {
    if ((int)local_70 < 0) {
      if (DAT_0488dfa8 == '\0') {
        if (DAT_046aaf68 == '\0') goto LAB_0338fb38;
      }
      else if (DAT_046aaf68 == '\0') {
        local_618 = (uint *)0x0;
        local_608 = &DAT_0488df58;
        uStack_600 = 1;
        pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
        local_5f8 = nn::os::GetThreadId(pTVar14);
        local_5f0 = (uint *)0x0;
        local_5e8 = 0;
        local_5e0 = (char *)0x0;
        local_5d8 = 0;
        uStack_5d0 = 0;
        FUN_0322c554(&local_618,"Invalid negative version for type #{}.",&DAT_044e9048,&local_74);
        local_5d8 = 0x616;
        goto LAB_0338fb04;
      }
      local_608 = &DAT_0488df58;
      uStack_600 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_5f8 = nn::os::GetThreadId(pTVar14);
      local_618 = local_5c8;
      local_5e8 = 0;
      local_5e0 = (char *)0x0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      local_5c8[0] = local_5c8[0] & 0xffffff00;
      puStack_610 = (undefined *)0x10000000000;
      local_5f0 = local_618;
      FUN_0322c554(&local_618,"Invalid negative version for type #{}.",&DAT_044e9048,&local_74);
      local_5d8 = 0x616;
      goto LAB_03390f4c;
    }
    local_210 = (long)(int)local_70;
    local_238 = local_238 | 0x10;
    if ((local_78 >> 0x14 & 1) != 0) goto LAB_0338f370;
    goto joined_r0x0338f598;
  }
  if (DAT_0488dfa8 != '\0') {
    if (DAT_046aaf68 == '\0') {
      local_618 = (uint *)0x0;
      local_608 = &DAT_0488df58;
      uStack_600 = 1;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_5f8 = nn::os::GetThreadId(pTVar14);
      local_5f0 = (uint *)0x0;
      local_5e8 = 0;
      local_5e0 = (char *)0x0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      FUN_0322c554(&local_618,"Invalid version number {} for type #{}.",&DAT_047b2ec8,&local_70,
                   &local_74);
      local_5d8 = 0x614;
      uVar17 = 0xfc913ab0;
      goto LAB_0338fb00;
    }
LAB_0338f8bc:
    local_608 = &DAT_0488df58;
    uStack_600 = 1;
    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
    local_5f8 = nn::os::GetThreadId(pTVar14);
    local_618 = local_5c8;
    local_5e8 = 0;
    local_5e0 = (char *)0x0;
    local_5c8[0] = local_5c8[0] & 0xffffff00;
    local_5d8 = 0;
    uStack_5d0 = 0;
    puStack_610 = (undefined *)0x10000000000;
    local_5f0 = local_618;
    FUN_0322c554(&local_618,"Invalid version number {} for type #{}.",&DAT_047b2ec8,&local_70,
                 &local_74);
    local_5d8 = 0x614;
    uVar17 = 0xfc913ab0;
    goto LAB_03390f48;
  }
  if (DAT_046aaf68 != '\0') goto LAB_0338f8bc;
  goto LAB_0338fb38;
LAB_033910b8:
  uVar11 = *puVar28;
  if (((uint)uVar11 >> 3 & 1) == 0) {
    if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
    goto LAB_03391444;
    goto LAB_033910b8;
  }
  if (puVar28 != (ulong *)0x0) {
    local_70 = puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
    goto LAB_03391448;
  }
LAB_03391444:
  local_70 = 0;
LAB_03391448:
  FUN_0322c554(&local_618,"Invalid field type ID (out of bounds) for type \'{}\'.",&DAT_044e9758,
               &local_70);
  local_5d8 = 0x657;
  goto LAB_0338fb04;
LAB_0339135c:
  uVar11 = *puVar28;
  if (((uint)uVar11 >> 3 & 1) == 0) {
    if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
    goto LAB_03391694;
    goto LAB_0339135c;
  }
  if (puVar28 != (ulong *)0x0) {
    local_3f8 = puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
    goto LAB_03391698;
  }
LAB_03391694:
  local_3f8 = 0;
LAB_03391698:
  local_5f0 = local_618;
  FUN_0322c554(&local_618,"Invalid field type ID (out of bounds) for type \'{}\'.",&DAT_044e9758,
               &local_3f8);
  local_5d8 = 0x657;
  goto LAB_03390f4c;
LAB_03391110:
  uVar11 = *puVar28;
  if (((uint)uVar11 >> 3 & 1) == 0) {
    if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
    goto LAB_033914a0;
    goto LAB_03391110;
  }
  if (puVar28 != (ulong *)0x0) {
    local_70 = puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
    goto LAB_033914a4;
  }
LAB_033914a0:
  local_70 = 0;
LAB_033914a4:
  FUN_0322c554(&local_618,"Invalid flags on {}::{}",PTR_DAT_047e5f48,&local_70,&local_3e8);
  local_5d8 = 0x659;
  goto LAB_0338fb04;
LAB_033913b0:
  uVar11 = *puVar28;
  if (((uint)uVar11 >> 3 & 1) == 0) {
    if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
    goto LAB_033916f4;
    goto LAB_033913b0;
  }
  if (puVar28 != (ulong *)0x0) {
    local_3f8 = puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
    goto LAB_033916f8;
  }
LAB_033916f4:
  local_3f8 = 0;
LAB_033916f8:
  local_5f0 = local_618;
  FUN_0322c554(&local_618,"Invalid flags on {}::{}",PTR_DAT_047e5f48,&local_3f8,&local_3e8);
  local_5d8 = 0x659;
  goto LAB_03390f4c;
LAB_03391248:
  uVar11 = *puVar28;
  if (((uint)uVar11 >> 3 & 1) == 0) {
    if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
    goto LAB_03391500;
    goto LAB_03391248;
  }
  if (puVar28 != (ulong *)0x0) {
    local_70 = puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
    goto LAB_03391504;
  }
LAB_03391500:
  local_70 = 0;
LAB_03391504:
  FUN_0322c554(&local_618,"Invalid interface type ID (out of bounds) for type \'{}\'.",&DAT_044e9758
               ,&local_70);
  local_5d8 = 0x686;
LAB_0338fb04:
  local_5e0 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  FUN_0322c8e0(&local_618);
  goto LAB_0338fb0c;
LAB_03391404:
  uVar11 = *puVar28;
  if (((uint)uVar11 >> 3 & 1) == 0) {
    if (((uVar11 & 1) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
    goto LAB_03391758;
    goto LAB_03391404;
  }
  if (puVar28 != (ulong *)0x0) {
    local_3e8 = (char *)puVar28[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
    goto LAB_0339175c;
  }
LAB_03391758:
  local_3e8 = (char *)0x0;
LAB_0339175c:
  local_5f0 = local_618;
  FUN_0322c554(&local_618,"Invalid interface type ID (out of bounds) for type \'{}\'.",&DAT_044e9758
               ,&local_3e8);
  local_5d8 = 0x686;
LAB_03390f4c:
  local_5e0 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  if ((char)local_5c8[0] != '\0') {
    sVar15 = strlen((char *)local_5c8);
    *(undefined2 *)((long)local_5c8 + (long)(int)((int)sVar15 - (uint)((int)sVar15 == 0xff))) = 10;
    printf("%s",local_5c8);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_0338fb0c:
  if (((ulong)local_5f0 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(undefined *)((long)local_5f0 + -1),0);
  }
LAB_0338fb38:
  *param_1 = -0x7ffbfe00;
LAB_0338fb44:
  lVar29 = local_2a8;
  uVar11 = (ulong)local_2a8._4_4_;
  local_2a8 = (ulong)local_2a8._4_4_ << 0x20;
  if ((-1 < lVar29) && (local_2b0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_2b0,uVar11 << 2);
  }
  local_2b0 = (undefined1 *)0x0;
  local_2a8 = CONCAT44(0x80000000,(int)local_2a8);
  local_338 = 0;
  if ((-1 < (int)local_334) && (local_340 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_340,(ulong)local_334 << 2);
  }
  local_340 = (undefined1 *)0x0;
  local_334 = 0x80000000;
  local_3c8 = 0;
  if ((-1 < (int)local_3c4) && (local_3d0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_3d0,(ulong)local_3c4 << 2);
  }
  uVar11 = FUN_031d798c(&local_298);
  return uVar11;
}


