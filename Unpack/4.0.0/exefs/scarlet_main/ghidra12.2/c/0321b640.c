/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0321b640; name: FUN_0321b640
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0321b640(long *param_1,long *param_2,long *param_3,ulong **param_4)

{
  ulong *puVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  ThreadType *pTVar12;
  size_t sVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FILE *__stream;
  code *pcVar17;
  char *pcVar18;
  long lVar19;
  short *psVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  short *psVar26;
  ulong *puVar27;
  ulong *puVar28;
  ulong *puVar29;
  int local_240 [2];
  int local_238 [2];
  ulong local_230;
  ulong *local_228;
  undefined8 local_220;
  ulong *local_218;
  undefined8 local_210;
  undefined8 local_208;
  ulong local_200;
  undefined8 uStack_1f8;
  char *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  int local_1d8 [2];
  uint local_1d0;
  uint local_1cc;
  int local_1c8;
  uint local_1c4;
  uint local_1c0 [2];
  ulong **local_1b8;
  undefined8 local_1b0;
  ulong *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  ulong **local_190;
  undefined8 local_188;
  char *local_180;
  undefined8 local_178;
  undefined8 local_170;
  ulong *local_168 [33];
  
  local_240[0] = 0;
  if (param_2 != param_3) {
    __stream = *(FILE **)PTR_stdout_047cb860;
    plVar25 = param_2;
LAB_0321b6bc:
    puVar27 = (ulong *)*plVar25;
    puVar28 = puVar27;
    for (puVar29 = (ulong *)puVar27[1]; puVar29 != (ulong *)0x0; puVar29 = (ulong *)puVar29[1]) {
      pcVar17 = *(code **)(*param_1 + 0x10);
      if ((pcVar17 != (code *)0x0) &&
         (uVar10 = (*pcVar17)(puVar29,*(undefined8 *)(*param_1 + 0x18)), (uVar10 & 1) == 0)) {
LAB_0321b758:
        puVar28 = *(ulong **)(*param_1 + 0x28);
        if (puVar28 == (ulong *)0x0) goto LAB_0321b90c;
        bVar2 = *(byte *)(*param_1 + 0x30);
        if ((byte)puVar28[10] < bVar2) {
          if (DAT_046aaf68 == '\0') goto LAB_0321b90c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1b8 = (ulong **)0x0;
          local_1a0 = (ulong)bVar2;
          local_1a8 = puVar28;
          pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
          local_198 = nn::os::GetThreadId(pTVar12);
          local_170 = 0;
          local_190 = (ulong **)0x0;
          local_188 = 0;
          local_180 = (char *)0x0;
          local_178 = 0;
          goto LAB_0321b804;
        }
        local_1b8 = (ulong **)0x0;
        local_1a0 = (ulong)bVar2;
        local_1a8 = puVar28;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_198 = nn::os::GetThreadId(pTVar12);
        local_188 = 0;
        local_180 = (char *)0x0;
        local_178 = 0;
        local_170 = 0;
        local_1b0 = 0x10000000000;
        local_168[0]._0_1_ = '\0';
        goto LAB_0321b9dc;
      }
      if (puVar29 == puVar28) {
LAB_0321b72c:
        puVar28 = *(ulong **)(*param_1 + 0x28);
        if (puVar28 == (ulong *)0x0) goto LAB_0321b90c;
        bVar2 = *(byte *)(*param_1 + 0x30);
        if ((byte)puVar28[10] < bVar2) {
          if (DAT_046aaf68 == '\0') goto LAB_0321b90c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1b8 = (ulong **)0x0;
          local_1a0 = (ulong)bVar2;
          local_1a8 = puVar28;
          pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
          local_198 = nn::os::GetThreadId(pTVar12);
          local_170 = 0;
          local_190 = (ulong **)0x0;
          local_188 = 0;
          local_180 = (char *)0x0;
          local_178 = 0;
          goto LAB_0321b7b8;
        }
        local_1b8 = (ulong **)0x0;
        local_1a0 = (ulong)bVar2;
        local_1a8 = puVar28;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_198 = nn::os::GetThreadId(pTVar12);
        local_188 = 0;
        local_180 = (char *)0x0;
        local_178 = 0;
        local_170 = 0;
        local_1b0 = 0x10000000000;
        local_168[0]._0_1_ = '\0';
        goto LAB_0321b984;
      }
      puVar29 = (ulong *)puVar29[1];
      if (puVar29 == (ulong *)0x0) break;
      pcVar17 = *(code **)(*param_1 + 0x10);
      if ((pcVar17 != (code *)0x0) &&
         (uVar10 = (*pcVar17)(puVar29,*(undefined8 *)(*param_1 + 0x18)), (uVar10 & 1) == 0))
      goto LAB_0321b758;
      if (puVar29 == puVar28) goto LAB_0321b72c;
      puVar28 = (ulong *)puVar28[1];
    }
    goto LAB_0321b934;
  }
  local_238[0] = 0;
LAB_0321c28c:
  iVar8 = local_238[0];
  local_228 = (ulong *)0x0;
  local_220 = 0x8000000000000000;
  uVar14 = *(uint *)(param_4 + 1);
  local_240[0] = local_238[0];
  if ((int)uVar14 < 1) {
    local_228 = (ulong *)0x0;
    local_220 = -0x8000000000000000;
  }
  else {
    puVar29 = *param_4;
    local_228 = (ulong *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                   (PTR_PTR_047d1a50,(ulong)uVar14 << 3);
    uVar21 = uVar14 & 3;
    local_220 = CONCAT44(uVar14,uVar14);
    puVar28 = local_228;
    if (2 < uVar14 - 1) {
      iVar9 = -(uVar14 & 0xfffffffc);
      puVar27 = local_228;
      do {
        *puVar27 = *puVar29;
        puVar27[1] = puVar29[1];
        puVar27[2] = puVar29[2];
        puVar1 = puVar29 + 3;
        puVar28 = puVar27 + 4;
        puVar29 = puVar29 + 4;
        iVar9 = iVar9 + 4;
        puVar27[3] = *puVar1;
        puVar27 = puVar28;
      } while (iVar9 != 0);
    }
    for (; uVar21 != 0; uVar21 = uVar21 - 1) {
      *puVar28 = *puVar29;
      puVar28 = puVar28 + 1;
      puVar29 = puVar29 + 1;
    }
  }
  if (*(int *)((long)param_4[2] + 4) == -2) {
    local_218 = (ulong *)&DAT_03d7702c;
    local_210 = (ulong)local_210._4_4_ << 0x20;
  }
  else {
    local_210 = CONCAT44(local_210._4_4_,*(int *)(param_4 + 3));
    uVar14 = *(int *)(param_4 + 3) + 1;
    local_218 = (ulong *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                   (PTR_PTR_047d1a50,
                                    -(ulong)(uVar14 >> 0x1f) & 0xfffffff800000000 |
                                    (ulong)uVar14 << 3);
    memcpy(local_218,param_4[2],(long)*(int *)(param_4 + 3) * 8 + 8);
  }
  lVar19 = (long)(int)local_220 + (long)(int)((ulong)((long)param_3 - (long)param_2) >> 3);
  iVar9 = (int)lVar19;
  if ((int)(local_220._4_4_ & 0x7fffffff) < iVar9) {
    FUN_031bc928(&local_228,PTR_PTR_047d1a50,lVar19);
  }
  uVar14 = iVar9 + 1;
  uVar10 = (-(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar14 << 1) + (long)(int)uVar14;
  if (((((uint)((long)(int)local_210 << 1) < (uint)uVar10) && (-2 < iVar9)) && (uVar10 >> 0x20 == 0)
      ) && ((-1 < (int)local_210 && (((long)(int)local_210 & 0x7fffffffffffffffU) >> 0x1f == 0)))) {
    FUN_02e8d9d0(&local_218);
  }
  puVar5 = PTR_PTR_047d1a50;
  do {
    if (param_2 == param_3) goto LAB_0321e488;
    param_3 = param_3 + -1;
    local_1a8 = (ulong *)*param_3;
    local_1b0 = -0x7fffffdfffffffff;
    local_1b8 = &local_1a8;
    iVar9 = FUN_03224878(param_1,&local_1b8,&local_228);
    lVar19 = local_1b0;
    uVar10 = (ulong)local_1b0._4_4_;
    local_1b0 = (ulong)local_1b0._4_4_ << 0x20;
    if ((-1 < lVar19) && (local_1b8 != (ulong **)0x0)) {
      (**(code **)(*(long *)(puVar5 + 0x20) + 0x20))(puVar5 + 0x20,local_1b8,uVar10 << 3);
    }
  } while (-1 < iVar9);
  FUN_0321e9cc(local_240);
  iVar8 = local_240[0];
  if (*(char *)*param_1 == '\0') {
LAB_0321e488:
    local_238[0] = iVar8;
    if (iVar8 < 0) {
      if ((char)(*(ulong **)(*param_1 + 0x28))[10] != '\0') {
        local_1b8 = (ulong **)0x0;
        local_1a0 = 1;
        local_1a8 = *(ulong **)(*param_1 + 0x28);
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_198 = nn::os::GetThreadId(pTVar12);
        local_190 = (ulong **)0x0;
        local_188 = 0;
        local_180 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        local_178 = 0x449;
        local_170 = 0;
        FUN_0322c554(&local_1b8,"HK_RETURN_IF_FAILED({}) returning {}. ",&DAT_046aa408,"status",
                     local_238);
        FUN_0322c554(&local_1b8,&DAT_03c886bc,PTR_DAT_047d1b38);
        FUN_0322c8e0(&local_1b8);
        if (((ulong)local_190 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
        }
      }
      goto LAB_0321e558;
    }
    if (&local_228 != param_4) {
      *(undefined4 *)(param_4 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)param_4 + 0xc)) && (*param_4 != (ulong *)0x0)) {
        (**(code **)(*(long *)puVar5 + 0x20))
                  (puVar5,*param_4,(ulong)*(uint *)((long)param_4 + 0xc) << 3);
      }
      *param_4 = (ulong *)0x0;
      param_4[1] = (ulong *)0x8000000000000000;
      puVar6 = PTR_PTR_047d1a50;
      FUN_031bc084(&local_228,PTR_PTR_047d1a50);
      *param_4 = local_228;
      *(int *)(param_4 + 1) = (int)local_220;
      *(uint *)((long)param_4 + 0xc) = local_220._4_4_;
      local_228 = (ulong *)0x0;
      local_220 = 0;
      puVar28 = param_4[2];
      if ((puVar28 != (ulong *)0x0) && (*(int *)((long)puVar28 + 4) != -2)) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(puVar6[8],puVar28,0);
        param_4[2] = (ulong *)&DAT_03d7702c;
        *(undefined4 *)(param_4 + 3) = 0;
      }
      param_4[2] = local_218;
      *(int *)(param_4 + 3) = (int)local_210;
      local_218 = (ulong *)&DAT_03d7702c;
      local_210 = local_210 & 0xffffffff00000000;
    }
  }
  local_238[0] = iVar8;
LAB_0321e558:
  if ((local_218 != (ulong *)0x0) && (*(int *)((long)local_218 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar5[8],local_218,0);
    local_218 = (ulong *)&DAT_03d7702c;
    local_210 = local_210 & 0xffffffff00000000;
  }
  lVar19 = local_220;
  uVar10 = (ulong)local_220._4_4_;
  local_220 = (ulong)local_220._4_4_ << 0x20;
  if (lVar19 < 0) {
    return local_238[0];
  }
  if (local_228 == (ulong *)0x0) {
    return local_238[0];
  }
  (**(code **)(*(long *)puVar5 + 0x20))(puVar5,local_228,uVar10 << 3);
  return local_238[0];
LAB_0321b804:
  uVar10 = *puVar27;
  if (((uint)uVar10 >> 3 & 1) == 0) {
    if (((uVar10 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
    goto LAB_0321b8ac;
    goto LAB_0321b804;
  }
  if (puVar27 != (ulong *)0x0) {
    local_228 = (ulong *)puVar27[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
    goto LAB_0321b8b0;
  }
LAB_0321b8ac:
  local_228 = (ulong *)0x0;
LAB_0321b8b0:
  FUN_0322c554(&local_1b8,"Type \'{}\' has an unreachable type in parents chain",&DAT_044e9758,
               &local_228);
  local_1a0 = local_1a0 & 0xffffffff;
  local_178 = 0xc3;
  goto LAB_0321b8e0;
LAB_0321b9dc:
  uVar10 = *puVar27;
  if (((uint)uVar10 >> 3 & 1) == 0) {
    if (((uVar10 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
    goto LAB_0321ba8c;
    goto LAB_0321b9dc;
  }
  if (puVar27 != (ulong *)0x0) {
    local_230 = puVar27[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
    goto LAB_0321ba90;
  }
LAB_0321ba8c:
  local_230 = 0;
LAB_0321ba90:
  local_1b8 = local_168;
  local_190 = local_168;
  FUN_0322c554(&local_1b8,"Type \'{}\' has an unreachable type in parents chain",&DAT_044e9758,
               &local_230);
  local_1a0 = local_1a0 & 0xffffffff;
  local_178 = 0xc3;
  goto joined_r0x0321bac4;
LAB_0321b7b8:
  uVar10 = *puVar27;
  if (((uint)uVar10 >> 3 & 1) == 0) {
    if (((uVar10 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
    goto LAB_0321b844;
    goto LAB_0321b7b8;
  }
  if (puVar27 != (ulong *)0x0) {
    local_228 = (ulong *)puVar27[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
    goto LAB_0321b848;
  }
LAB_0321b844:
  local_228 = (ulong *)0x0;
LAB_0321b848:
  FUN_0322c554(&local_1b8,"Type \'{}\' has a loop in parents chain",&DAT_044e9758,&local_228);
  local_178 = 0xc4;
  local_1a0 = CONCAT44(0xa62e68d9,(undefined4)local_1a0);
LAB_0321b8e0:
  local_180 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  FUN_0322c8e0(&local_1b8);
  goto LAB_0321b8e8;
LAB_0321b984:
  uVar10 = *puVar27;
  if (((uint)uVar10 >> 3 & 1) == 0) {
    if (((uVar10 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
    goto LAB_0321ba1c;
    goto LAB_0321b984;
  }
  if (puVar27 != (ulong *)0x0) {
    local_230 = puVar27[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
    goto LAB_0321ba20;
  }
LAB_0321ba1c:
  local_230 = 0;
LAB_0321ba20:
  local_1b8 = local_168;
  local_190 = local_168;
  FUN_0322c554(&local_1b8,"Type \'{}\' has a loop in parents chain",&DAT_044e9758,&local_230);
  local_178 = 0xc4;
  local_1a0 = CONCAT44(0xa62e68d9,(undefined4)local_1a0);
joined_r0x0321bac4:
  local_180 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  if ((char)local_168[0] != '\0') {
    local_180 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
    ;
    sVar13 = strlen((char *)local_168);
    *(undefined2 *)((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
    printf("%s",local_168);
    fflush(__stream);
  }
LAB_0321b8e8:
  if (((ulong)local_190 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
  }
LAB_0321b90c:
  local_1b8 = (ulong **)((ulong)local_1b8 & 0xffffffff00000000);
  FUN_0321e9cc(&local_1b8);
  if (((int)local_1b8 < 0) && (FUN_0321e9cc(local_240), *(char *)*param_1 != '\0')) {
    return local_240[0];
  }
LAB_0321b934:
  plVar25 = plVar25 + 1;
  if (plVar25 == param_3) goto LAB_0321bb08;
  goto LAB_0321b6bc;
LAB_0321bb08:
  local_238[0] = local_240[0];
  if (-1 < local_240[0]) {
    plVar25 = param_2;
LAB_0321bb3c:
    puVar29 = (ulong *)*plVar25;
    local_1c0[0] = 0;
    puVar28 = puVar29;
    while( true ) {
      uVar14 = (uint)*puVar28;
      if ((uVar14 >> 0xf & 1) != 0) break;
      if (((*puVar28 & 9) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
      goto LAB_0321c05c;
    }
    uVar14 = uVar14 & 0x7fff;
    uVar10 = puVar28[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))) + 2];
    if (uVar10 != 0) {
      uVar3 = *(ushort *)(uVar10 + 8);
      if (0xff < uVar3) {
        puVar28 = *(ulong **)(*param_1 + 0x28);
        if (puVar28 == (ulong *)0x0) goto LAB_0321c168;
        bVar2 = *(byte *)(*param_1 + 0x30);
        if ((byte)puVar28[10] < bVar2) {
          if (DAT_046aaf68 == '\0') goto LAB_0321c168;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1b8 = (ulong **)0x0;
          local_1a0 = (ulong)bVar2;
          local_1a8 = puVar28;
          pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
          local_198 = nn::os::GetThreadId(pTVar12);
          local_170 = 0;
          local_190 = (ulong **)0x0;
          local_188 = 0;
          local_180 = (char *)0x0;
          local_178 = 0;
          goto LAB_0321c0c4;
        }
        local_1b8 = (ulong **)0x0;
        local_1a0 = (ulong)bVar2;
        local_1a8 = puVar28;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_198 = nn::os::GetThreadId(pTVar12);
        local_188 = 0;
        local_180 = (char *)0x0;
        local_178 = 0;
        local_170 = 0;
        local_1b0 = 0x10000000000;
        local_168[0]._0_1_ = '\0';
        goto LAB_0321c1c0;
      }
      local_1c4 = 0;
      if (uVar3 != 0) {
        goto LAB_0321bbd0;
      }
    }
    goto LAB_0321c05c;
  }
  local_1a8 = *(ulong **)(*param_1 + 0x28);
  if ((char)local_1a8[10] == '\0') {
    return local_240[0];
  }
  local_1b8 = (ulong **)0x0;
  local_1a0 = 1;
  pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
  local_198 = nn::os::GetThreadId(pTVar12);
  local_178 = 0x428;
  goto LAB_0321e7c0;
LAB_0321c0c4:
  uVar10 = *puVar29;
  if (((uint)uVar10 >> 3 & 1) == 0) {
    if (((uVar10 & 1) != 0) || (puVar29 = (ulong *)puVar29[1], puVar29 == (ulong *)0x0))
    goto LAB_0321c104;
    goto LAB_0321c0c4;
  }
  if (puVar29 != (ulong *)0x0) {
    local_228 = (ulong *)puVar29[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
    goto LAB_0321c108;
  }
LAB_0321c104:
  local_228 = (ulong *)0x0;
LAB_0321c108:
  FUN_0322c554(&local_1b8,
               "Template type \'{}\' has invalid number of template parameters greater than 255.",
               &DAT_044e9758,&local_228);
  local_1a0 = local_1a0 & 0xffffffff;
  local_180 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  local_178 = 0x40f;
  FUN_0322c8e0(&local_1b8);
  goto LAB_0321c144;
LAB_0321c1c0:
  uVar10 = *puVar29;
  if (((uint)uVar10 >> 3 & 1) == 0) {
    if (((uVar10 & 1) != 0) || (puVar29 = (ulong *)puVar29[1], puVar29 == (ulong *)0x0))
    goto LAB_0321c200;
    goto LAB_0321c1c0;
  }
  if (puVar29 != (ulong *)0x0) {
    local_230 = puVar29[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
    goto LAB_0321c204;
  }
LAB_0321c200:
  local_230 = 0;
LAB_0321c204:
  local_1b8 = local_168;
  local_190 = local_168;
  FUN_0322c554(&local_1b8,
               "Template type \'{}\' has invalid number of template parameters greater than 255.",
               &DAT_044e9758,&local_230);
  local_1a0 = local_1a0 & 0xffffffff;
  local_180 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  local_178 = 0x40f;
  if ((char)local_168[0] != '\0') {
    sVar13 = strlen((char *)local_168);
    *(undefined2 *)((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
    printf("%s",local_168);
    fflush(__stream);
  }
LAB_0321c144:
  if (((ulong)local_190 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
  }
LAB_0321c168:
  local_1b8 = (ulong **)((ulong)local_1b8 & 0xffffffff00000000);
  FUN_0321e9cc(&local_1b8);
  if ((int)local_1b8 < 0) {
LAB_0321c064:
    FUN_0321e9cc(local_240);
    if (*(char *)*param_1 != '\0') {
      return local_240[0];
    }
  }
LAB_0321c078:
  puVar5 = PTR_PTR_047d1a50;
  plVar25 = plVar25 + 1;
  if (plVar25 == param_3) goto LAB_0321c334;
  goto LAB_0321bb3c;
LAB_0321bbd0:
  do {
    plVar11 = (long *)(uVar10 + 0x10 + (long)(int)local_1c4 * 0x10);
    if (*(char *)plVar11[1] == 't') {
      if (*plVar11 == 0) {
        FUN_0321e9cc(local_1c0);
        puVar28 = *(ulong **)(*param_1 + 0x28);
        if (puVar28 != (ulong *)0x0) {
          bVar2 = *(byte *)(*param_1 + 0x30);
          if ((byte)puVar28[10] < bVar2) {
            if (DAT_046aaf68 != '\0') goto LAB_0321be54;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_1b8 = (ulong **)0x0;
              local_1a0 = (ulong)bVar2;
              local_1a8 = puVar28;
              pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
              local_198 = nn::os::GetThreadId(pTVar12);
              local_170 = 0;
              local_190 = (ulong **)0x0;
              local_188 = 0;
              local_180 = (char *)0x0;
              local_178 = 0;
              puVar28 = puVar29;
              do {
                uVar22 = *puVar28;
                if (((uint)uVar22 >> 3 & 1) != 0) {
                  local_228 = (ulong *)0x0;
                  if (puVar28 != (ulong *)0x0) {
                    local_228 = (ulong *)puVar28[(ulong)(byte)POPCOUNT((byte)uVar22 & 7) + 2];
                  }
                  goto LAB_0321bca4;
                }
                if ((uVar22 & 1) != 0) {
                  local_228 = (ulong *)0x0;
                  goto LAB_0321bca4;
                }
                puVar28 = (ulong *)puVar28[1];
              } while (puVar28 != (ulong *)0x0);
              local_228 = (ulong *)0x0;
LAB_0321bca4:
              FUN_0322c554(&local_1b8,
                           "Template type \'{}\' has invalid NULL template type parameter #{}.",
                           &DAT_046aa4a8,&local_228,&local_1c4);
              local_180 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_178 = 0x415;
              FUN_0322c8e0(&local_1b8);
            }
            else {
LAB_0321be54:
              local_1b8 = (ulong **)0x0;
              local_1a0 = (ulong)bVar2;
              local_1a8 = puVar28;
              pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
              local_198 = nn::os::GetThreadId(pTVar12);
              local_188 = 0;
              local_180 = (char *)0x0;
              local_178 = 0;
              local_170 = 0;
              local_1b0 = 0x10000000000;
              local_168[0]._0_1_ = '\0';
              puVar28 = puVar29;
              do {
                uVar22 = *puVar28;
                if (((uint)uVar22 >> 3 & 1) != 0) {
                  local_230 = 0;
                  if (puVar28 != (ulong *)0x0) {
                    local_230 = puVar28[(ulong)(byte)POPCOUNT((byte)uVar22 & 7) + 2];
                  }
                  goto LAB_0321bf38;
                }
                if ((uVar22 & 1) != 0) {
                  local_230 = 0;
                  goto LAB_0321bf38;
                }
                puVar28 = (ulong *)puVar28[1];
              } while (puVar28 != (ulong *)0x0);
              local_230 = 0;
LAB_0321bf38:
              local_1b8 = local_168;
              local_190 = local_168;
              FUN_0322c554(&local_1b8,
                           "Template type \'{}\' has invalid NULL template type parameter #{}.",
                           &DAT_046aa4a8,&local_230,&local_1c4);
              local_180 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_178 = 0x415;
              if ((char)local_168[0] != '\0') {
                sVar13 = strlen((char *)local_168);
                *(undefined2 *)
                 ((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
                printf("%s",local_168);
                fflush(__stream);
              }
            }
            if (((ulong)local_190 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
            }
          }
        }
        pcVar18 = (char *)*param_1;
        if (*pcVar18 != '\0') break;
      }
      else {
        pcVar18 = (char *)*param_1;
      }
      if ((*(code **)(pcVar18 + 0x10) != (code *)0x0) &&
         (uVar22 = (**(code **)(pcVar18 + 0x10))(*plVar11,*(undefined8 *)(pcVar18 + 0x18)),
         (uVar22 & 1) == 0)) {
        FUN_0321e9cc(local_1c0);
        puVar28 = *(ulong **)(*param_1 + 0x28);
        if (puVar28 != (ulong *)0x0) {
          bVar2 = *(byte *)(*param_1 + 0x30);
          if ((byte)puVar28[10] < bVar2) {
            if (DAT_046aaf68 != '\0') goto LAB_0321beb0;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_1b8 = (ulong **)0x0;
              local_1a0 = (ulong)bVar2;
              local_1a8 = puVar28;
              pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
              local_198 = nn::os::GetThreadId(pTVar12);
              local_170 = 0;
              local_190 = (ulong **)0x0;
              local_188 = 0;
              local_180 = (char *)0x0;
              local_178 = 0;
              puVar28 = puVar29;
              do {
                uVar22 = *puVar28;
                if (((uint)uVar22 >> 3 & 1) != 0) {
                  local_228 = (ulong *)0x0;
                  if (puVar28 != (ulong *)0x0) {
                    local_228 = (ulong *)puVar28[(ulong)(byte)POPCOUNT((byte)uVar22 & 7) + 2];
                  }
                  goto LAB_0321bdd4;
                }
                if ((uVar22 & 1) != 0) {
                  local_228 = (ulong *)0x0;
                  goto LAB_0321bdd4;
                }
                puVar28 = (ulong *)puVar28[1];
              } while (puVar28 != (ulong *)0x0);
              local_228 = (ulong *)0x0;
LAB_0321bdd4:
              FUN_0322c554(&local_1b8,
                           "Template type \'{}\' has unreachable template type parameter #{}.",
                           &DAT_046aa4a8,&local_228,&local_1c4);
              local_180 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_178 = 0x416;
              FUN_0322c8e0(&local_1b8);
            }
            else {
LAB_0321beb0:
              local_1b8 = (ulong **)0x0;
              local_1a0 = (ulong)bVar2;
              local_1a8 = puVar28;
              pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
              local_198 = nn::os::GetThreadId(pTVar12);
              local_188 = 0;
              local_180 = (char *)0x0;
              local_178 = 0;
              local_170 = 0;
              local_1b0 = 0x10000000000;
              local_168[0]._0_1_ = '\0';
              puVar28 = puVar29;
              do {
                uVar22 = *puVar28;
                if (((uint)uVar22 >> 3 & 1) != 0) {
                  local_230 = 0;
                  if (puVar28 != (ulong *)0x0) {
                    local_230 = puVar28[(ulong)(byte)POPCOUNT((byte)uVar22 & 7) + 2];
                  }
                  goto LAB_0321bfdc;
                }
                if ((uVar22 & 1) != 0) {
                  local_230 = 0;
                  goto LAB_0321bfdc;
                }
                puVar28 = (ulong *)puVar28[1];
              } while (puVar28 != (ulong *)0x0);
              local_230 = 0;
LAB_0321bfdc:
              local_1b8 = local_168;
              local_190 = local_168;
              FUN_0322c554(&local_1b8,
                           "Template type \'{}\' has unreachable template type parameter #{}.",
                           &DAT_046aa4a8,&local_230,&local_1c4);
              local_180 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_178 = 0x416;
              if ((char)local_168[0] != '\0') {
                sVar13 = strlen((char *)local_168);
                *(undefined2 *)
                 ((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
                printf("%s",local_168);
                fflush(__stream);
              }
            }
            if (((ulong)local_190 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
            }
          }
        }
        if (*(char *)*param_1 != '\0') break;
      }
    }
    local_1c4 = local_1c4 + 1;
  } while ((int)local_1c4 < (int)(uint)uVar3);
LAB_0321c05c:
  local_1b8 = (ulong **)CONCAT44(local_1b8._4_4_,local_1c0[0]);
  if (-1 < (int)local_1c0[0]) goto LAB_0321c078;
  goto LAB_0321c064;
LAB_0321c850:
  if ((puVar29 == (ulong *)0x0) ||
     (uVar14 = uVar14 & 0xfffff,
     (puVar29[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8)) +
                           POPCOUNT((char)(uVar14 >> 0x10))) + 2] & 0xfff0000) == 0)) {
LAB_0321cb8c:
    if (((uint)*puVar28 >> 0x15 & 1) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (uint)*puVar28 & 0x1fffff;
      uVar14 = (uint)puVar28[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8)) +
                                          POPCOUNT((char)(uVar14 >> 0x10))) + 2];
    }
    lVar19 = *param_1;
    if ((uVar14 & (*(uint *)(lVar19 + 4) ^ 0xffffffff)) != 0) {
      puVar29 = *(ulong **)(lVar19 + 0x28);
      if (puVar29 != (ulong *)0x0) {
        bVar2 = *(byte *)(lVar19 + 0x30);
        if ((byte)puVar29[10] < bVar2) {
          if (DAT_046aaf68 != '\0') goto LAB_0321de64;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1b8 = (ulong **)0x0;
            local_1a0 = (ulong)bVar2;
            local_1a8 = puVar29;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_198 = nn::os::GetThreadId(pTVar12);
            local_190 = (ulong **)0x0;
            local_188 = 0;
            local_180 = (char *)0x0;
            local_178 = 0;
            local_170 = 0;
            local_228 = (ulong *)CONCAT44(local_228._4_4_,
                                          uVar14 & (*(uint *)(*param_1 + 4) ^ 0xffffffff));
            FUN_0322c554(&local_1b8,"Type \'{}\' has invalid forbidden flag(s) 0x{:x8}.",
                         &DAT_046aa530,puVar28,&local_228);
            local_180 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_178 = 0x124;
            local_1a0 = CONCAT44(0xa62e68d8,(undefined4)local_1a0);
            FUN_0322c8e0(&local_1b8);
          }
          else {
LAB_0321de64:
            local_1b8 = (ulong **)0x0;
            local_1a0 = (ulong)bVar2;
            local_1a8 = puVar29;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_198 = nn::os::GetThreadId(pTVar12);
            local_188 = 0;
            local_180 = (char *)0x0;
            local_178 = 0;
            local_170 = 0;
            local_1b0 = 0x10000000000;
            local_168[0]._0_1_ = '\0';
            local_230 = CONCAT44(local_230._4_4_,uVar14 & (*(uint *)(*param_1 + 4) ^ 0xffffffff));
            local_1b8 = local_168;
            local_190 = local_168;
            FUN_0322c554(&local_1b8,"Type \'{}\' has invalid forbidden flag(s) 0x{:x8}.",
                         &DAT_046aa530,puVar28,&local_230);
            local_180 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_178 = 0x124;
            local_1a0 = CONCAT44(0xa62e68d8,(undefined4)local_1a0);
            if ((char)local_168[0] != '\0') {
              sVar13 = strlen((char *)local_168);
              *(undefined2 *)
               ((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
              printf("%s",local_168);
              fflush(__stream);
            }
          }
          if (((ulong)local_190 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
          }
        }
      }
      local_1b8 = (ulong **)((ulong)local_1b8 & 0xffffffff00000000);
      FUN_0321e9cc(&local_1b8);
      if (((int)local_1b8 < 0) && (FUN_0321e9cc(local_1d8), *(char *)*param_1 != '\0'))
      goto LAB_0321dd68;
    }
    iVar8 = FUN_03222e64(param_1,puVar28);
    if ((-1 < iVar8) || (FUN_0321e9cc(local_1d8), *(char *)*param_1 == '\0')) {
      uVar10 = *puVar28;
      uVar14 = (uint)uVar10;
      if ((uVar10 & 1) != 0) {
        local_230 = local_230 & 0xffffffff00000000;
        puVar29 = puVar28;
        while ((uVar14 >> 0x17 & 1) == 0) {
          if (((uVar10 & 1) != 0) || (puVar29 = (ulong *)puVar29[1], puVar29 == (ulong *)0x0))
          goto LAB_0321cd40;
          uVar10 = *puVar29;
          uVar14 = (uint)uVar10;
        }
        uVar10 = CONCAT44(uVar14,uVar14) & 0x7fffff007fffff;
        psVar20 = (short *)puVar29[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                 POPCOUNT((char)(uVar10 >> 8)) +
                                                POPCOUNT((char)(uVar10 >> 0x10))) + 2];
        if (psVar20 == (short *)0x0) {
LAB_0321cd40:
          psVar26 = (short *)0x0;
          psVar20 = (short *)0x0;
        }
        else {
          psVar26 = psVar20 + 4;
          psVar20 = psVar26 + ((long)psVar20[1] + (long)*psVar20) * 4;
        }
        for (; psVar26 != psVar20; psVar26 = psVar26 + 4) {
          puVar29 = *(ulong **)psVar26;
          if (puVar29[1] == 0) {
            FUN_0321e9cc(&local_230);
            puVar27 = *(ulong **)(*param_1 + 0x28);
            if (puVar27 != (ulong *)0x0) {
              bVar2 = *(byte *)(*param_1 + 0x30);
              if ((byte)puVar27[10] < bVar2) {
                if (DAT_046aaf68 != '\0') goto LAB_0321d298;
              }
              else {
                if (DAT_046aaf68 == '\0') {
                  local_1b8 = (ulong **)0x0;
                  local_1a0 = (ulong)bVar2;
                  local_1a8 = puVar27;
                  pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                  local_198 = nn::os::GetThreadId(pTVar12);
                  local_170 = 0;
                  local_190 = (ulong **)0x0;
                  local_188 = 0;
                  local_180 = (char *)0x0;
                  local_178 = 0;
                  FUN_0322c554(&local_1b8,"Record type \'{}\' has a field with no parent.",
                               &DAT_046aa4e8,puVar28);
                  local_180 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  local_178 = 0x207;
                  FUN_0322c8e0(&local_1b8);
                }
                else {
LAB_0321d298:
                  local_1b8 = (ulong **)0x0;
                  local_1a0 = (ulong)bVar2;
                  local_1a8 = puVar27;
                  pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                  local_198 = nn::os::GetThreadId(pTVar12);
                  local_188 = 0;
                  local_180 = (char *)0x0;
                  local_178 = 0;
                  local_170 = 0;
                  local_168[0]._0_1_ = '\0';
                  local_1b0 = 0x10000000000;
                  local_1b8 = local_168;
                  local_190 = local_168;
                  FUN_0322c554(&local_1b8,"Record type \'{}\' has a field with no parent.",
                               &DAT_046aa4e8,puVar28);
                  local_180 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  local_178 = 0x207;
                  if ((char)local_168[0] != '\0') {
                    sVar13 = strlen((char *)local_168);
                    *(undefined2 *)
                     ((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10
                    ;
                    printf("%s",local_168);
                    fflush(__stream);
                  }
                }
                if (((ulong)local_190 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
                }
              }
            }
            if (*(char *)*param_1 != '\0') break;
          }
          if (puVar29 != (ulong *)0x0) {
            puVar27 = puVar29;
            do {
              uVar14 = (uint)*puVar27;
              if ((uVar14 >> 0x10 & 1) != 0) {
                uVar10 = CONCAT44(uVar14,uVar14) & 0xffff0000ffff;
                local_228 = (ulong *)puVar27[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                          POPCOUNT((char)(uVar10 >> 8))) + 2];
                if (local_228 != (ulong *)0x0) goto LAB_0321cf40;
                goto LAB_0321ce44;
              }
            } while (((*puVar27 & 1) == 0) &&
                    (puVar27 = (ulong *)puVar27[1], puVar27 != (ulong *)0x0));
          }
          local_228 = (ulong *)0x0;
LAB_0321ce44:
          FUN_0321e9cc(&local_230);
          puVar27 = *(ulong **)(*param_1 + 0x28);
          if (puVar27 != (ulong *)0x0) {
            bVar2 = *(byte *)(*param_1 + 0x30);
            if ((byte)puVar27[10] < bVar2) {
              if (DAT_046aaf68 != '\0') goto LAB_0321d130;
            }
            else {
              if (DAT_046aaf68 == '\0') {
                local_1b8 = (ulong **)0x0;
                local_1a0 = (ulong)bVar2;
                local_1a8 = puVar27;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar12);
                local_170 = 0;
                local_190 = (ulong **)0x0;
                local_188 = 0;
                local_180 = (char *)0x0;
                local_178 = 0;
                FUN_0322c554(&local_1b8,"Record type \'{}\' has a field with no name.",&DAT_046aa4e8
                             ,puVar28);
                local_180 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                local_178 = 0x20b;
                FUN_0322c8e0(&local_1b8);
              }
              else {
LAB_0321d130:
                local_1b8 = (ulong **)0x0;
                local_1a0 = (ulong)bVar2;
                local_1a8 = puVar27;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar12);
                local_188 = 0;
                local_180 = (char *)0x0;
                local_178 = 0;
                local_170 = 0;
                local_168[0]._0_1_ = '\0';
                local_1b0 = 0x10000000000;
                local_1b8 = local_168;
                local_190 = local_168;
                FUN_0322c554(&local_1b8,"Record type \'{}\' has a field with no name.",&DAT_046aa4e8
                             ,puVar28);
                local_180 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                local_178 = 0x20b;
                if ((char)local_168[0] != '\0') {
                  sVar13 = strlen((char *)local_168);
                  *(undefined2 *)
                   ((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
                  printf("%s",local_168);
                  fflush(__stream);
                }
              }
              if (((ulong)local_190 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
              }
            }
          }
          if (*(char *)*param_1 != '\0') break;
          if (local_228 != (ulong *)0x0) {
LAB_0321cf40:
            if ((char)*local_228 == '\0') {
              FUN_0321e9cc(&local_230);
              puVar27 = *(ulong **)(*param_1 + 0x28);
              if (puVar27 != (ulong *)0x0) {
                bVar2 = *(byte *)(*param_1 + 0x30);
                if ((byte)puVar27[10] < bVar2) {
                  if (DAT_046aaf68 != '\0') goto LAB_0321d348;
                }
                else {
                  if (DAT_046aaf68 == '\0') {
                    local_1b8 = (ulong **)0x0;
                    local_1a0 = (ulong)bVar2;
                    local_1a8 = puVar27;
                    pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                    local_198 = nn::os::GetThreadId(pTVar12);
                    local_170 = 0;
                    local_190 = (ulong **)0x0;
                    local_188 = 0;
                    local_180 = (char *)0x0;
                    local_178 = 0;
                    FUN_0322c554(&local_1b8,"Record type \'{}\' has a field with an empty name.",
                                 &DAT_046aa4e8,puVar28);
                    local_180 = 
                    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    local_178 = 0x20e;
                    FUN_0322c8e0(&local_1b8);
                  }
                  else {
LAB_0321d348:
                    local_1b8 = (ulong **)0x0;
                    local_1a0 = (ulong)bVar2;
                    local_1a8 = puVar27;
                    pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                    local_198 = nn::os::GetThreadId(pTVar12);
                    local_188 = 0;
                    local_180 = (char *)0x0;
                    local_178 = 0;
                    local_170 = 0;
                    local_168[0]._0_1_ = '\0';
                    local_1b0 = 0x10000000000;
                    local_1b8 = local_168;
                    local_190 = local_168;
                    FUN_0322c554(&local_1b8,"Record type \'{}\' has a field with an empty name.",
                                 &DAT_046aa4e8,puVar28);
                    local_180 = 
                    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    local_178 = 0x20e;
                    if ((char)local_168[0] != '\0') {
                      sVar13 = strlen((char *)local_168);
                      *(undefined2 *)
                       ((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) =
                           10;
                      printf("%s",local_168);
                      fflush(__stream);
                    }
                  }
                  if (((ulong)local_190 & 1) != 0) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
                  }
                }
              }
              if (*(char *)*param_1 != '\0') break;
            }
          }
          if (puVar29 == (ulong *)0x0) {
LAB_0321d058:
            FUN_0321e9cc(&local_230);
            puVar29 = *(ulong **)(*param_1 + 0x28);
            if (puVar29 != (ulong *)0x0) {
              bVar2 = *(byte *)(*param_1 + 0x30);
              if ((byte)puVar29[10] < bVar2) {
                if (DAT_046aaf68 != '\0') goto LAB_0321d1dc;
              }
              else {
                if (DAT_046aaf68 == '\0') {
                  local_1b8 = (ulong **)0x0;
                  local_1a0 = (ulong)bVar2;
                  local_1a8 = puVar29;
                  pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                  local_198 = nn::os::GetThreadId(pTVar12);
                  local_170 = 0;
                  local_190 = (ulong **)0x0;
                  local_188 = 0;
                  local_180 = (char *)0x0;
                  local_178 = 0;
                  FUN_0322c554(&local_1b8,
                               "Record type \'{}\' has field \'{}\' with DECL context missing or pointing to another type."
                               ,&DAT_046aa558,puVar28,&local_228);
                  local_180 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  local_178 = 0x213;
                  FUN_0322c8e0(&local_1b8);
                }
                else {
LAB_0321d1dc:
                  local_1b8 = (ulong **)0x0;
                  local_1a0 = (ulong)bVar2;
                  local_1a8 = puVar29;
                  pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                  local_198 = nn::os::GetThreadId(pTVar12);
                  local_188 = 0;
                  local_180 = (char *)0x0;
                  local_178 = 0;
                  local_170 = 0;
                  local_1b0 = 0x10000000000;
                  local_168[0]._0_1_ = '\0';
                  local_1b8 = local_168;
                  local_190 = local_168;
                  FUN_0322c554(&local_1b8,
                               "Record type \'{}\' has field \'{}\' with DECL context missing or pointing to another type."
                               ,&DAT_046aa558,puVar28,&local_228);
                  local_180 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  local_178 = 0x213;
                  if ((char)local_168[0] != '\0') {
                    sVar13 = strlen((char *)local_168);
                    *(undefined2 *)
                     ((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10
                    ;
                    printf("%s",local_168);
                    fflush(__stream);
                  }
                }
                if (((ulong)local_190 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
                }
              }
            }
            if (*(char *)*param_1 != '\0') break;
          }
          else {
            do {
              uVar14 = (uint)*puVar29;
              if ((uVar14 >> 0x12 & 1) != 0) {
                uVar10 = CONCAT44(uVar14,uVar14) & 0x3ffff0003ffff;
                puVar29 = (ulong *)puVar29[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                         POPCOUNT((char)(uVar10 >> 8)) +
                                                        POPCOUNT((char)(uVar10 >> 0x10))) + 2];
                goto LAB_0321d050;
              }
            } while (((*puVar29 & 1) == 0) &&
                    (puVar29 = (ulong *)puVar29[1], puVar29 != (ulong *)0x0));
            puVar29 = (ulong *)0x0;
LAB_0321d050:
            if (puVar29 != puVar28) goto LAB_0321d058;
          }
        }
        if (((int)local_230 < 0) && (FUN_0321e9cc(local_1d8), *(char *)*param_1 != '\0')) {
          local_1b8 = (ulong **)CONCAT44(local_1b8._4_4_,local_1d8[0]);
          iVar8 = local_1d8[0];
          goto LAB_0321dd70;
        }
        local_230 = local_230 & 0xffffffff00000000;
        uVar10 = *puVar28;
        uVar14 = (uint)uVar10;
        puVar29 = puVar28;
        if ((uVar10 & 1) == 0) {
          do {
            puVar29 = (ulong *)puVar29[1];
          } while ((*puVar29 & 1) == 0);
        }
        if ((puVar29[2] & 0x1f) == 7) {
          uVar24 = 0;
          puVar29 = puVar28;
          uVar22 = uVar10;
          uVar21 = uVar14;
          while( true ) {
            if ((uVar21 >> 0x15 & 1) == 0) {
              uVar23 = 0;
            }
            else {
              uVar23 = CONCAT44((int)uVar22,(int)uVar22) & 0x1fffff001fffff;
              uVar23 = puVar29[(ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8))
                                            + POPCOUNT((char)(uVar23 >> 0x10))) + 2];
            }
            uVar24 = uVar23 | uVar24;
            if (((uVar22 & 1) != 0) || (puVar29 = (ulong *)puVar29[1], puVar29 == (ulong *)0x0))
            break;
            uVar22 = *puVar29;
            uVar21 = (uint)uVar22;
          }
          if (((uint)uVar24 >> 9 & 1) == 0) {
            uVar24 = 0;
            puVar29 = puVar28;
            uVar22 = uVar10;
            uVar21 = uVar14;
            while( true ) {
              if ((uVar21 >> 0x15 & 1) == 0) {
                uVar23 = 0;
              }
              else {
                uVar23 = CONCAT44((int)uVar22,(int)uVar22) & 0x1fffff001fffff;
                uVar23 = puVar29[(ulong)(byte)(POPCOUNT((char)uVar23) +
                                               POPCOUNT((char)(uVar23 >> 8)) +
                                              POPCOUNT((char)(uVar23 >> 0x10))) + 2];
              }
              uVar24 = uVar23 | uVar24;
              if (((uVar22 & 1) != 0) || (puVar29 = (ulong *)puVar29[1], puVar29 == (ulong *)0x0))
              break;
              uVar22 = *puVar29;
              uVar21 = (uint)uVar22;
            }
            bVar7 = (uVar24 & 3) == 0;
          }
          else {
            bVar7 = false;
          }
          puVar27 = puVar28;
          uVar21 = uVar14;
          puVar29 = puVar28;
          if ((uVar14 >> 0x14 & 1) == 0) {
            uVar22 = uVar10;
            do {
              if ((uVar22 & 1) != 0) {
                local_1c0[0] = 0;
                goto joined_r0x0321d5a4;
              }
              puVar27 = (ulong *)puVar27[1];
              local_1c0[0] = 0;
              if (puVar27 == (ulong *)0x0) goto joined_r0x0321d5a4;
              uVar22 = *puVar27;
              uVar21 = (uint)uVar22;
            } while ((uVar21 >> 0x14 & 1) == 0);
          }
          local_1c0[0] = 0;
          if (puVar27 != (ulong *)0x0) {
            uVar22 = CONCAT44(uVar21,uVar21) & 0xfffff000fffff;
            local_1c0[0] = (uint)(ushort)puVar27[(ulong)(byte)(POPCOUNT((char)uVar22) +
                                                               POPCOUNT((char)(uVar22 >> 8)) +
                                                              POPCOUNT((char)(uVar22 >> 0x10))) + 2]
            ;
          }
joined_r0x0321d5a4:
          do {
            if ((uVar14 >> 0x17 & 1) != 0) goto LAB_0321d5bc;
            if (((uVar10 & 1) != 0) || (puVar29 = (ulong *)puVar29[1], puVar29 == (ulong *)0x0))
            goto LAB_0321d5f4;
            uVar10 = *puVar29;
            uVar14 = (uint)uVar10;
          } while( true );
        }
      }
    }
  }
  else {
LAB_0321c87c:
    puVar29 = *(ulong **)(*param_1 + 0x28);
    if (puVar29 != (ulong *)0x0) {
      bVar2 = *(byte *)(*param_1 + 0x30);
      if ((byte)puVar29[10] < bVar2) {
        if (DAT_046aaf68 != '\0') goto LAB_0321e08c;
      }
      else if (DAT_046aaf68 == '\0') {
        local_1b8 = (ulong **)0x0;
        local_1a0 = (ulong)bVar2;
        local_1a8 = puVar29;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_198 = nn::os::GetThreadId(pTVar12);
        local_170 = 0;
        local_190 = (ulong **)0x0;
        local_188 = 0;
        local_180 = (char *)0x0;
        local_178 = 0;
        FUN_0322c554(&local_1b8,"Void/opaque type \'{}\' has non-zero size and/or alignment.",
                     &DAT_046aa4e8,puVar28);
        local_178 = 0x107;
LAB_0321cb44:
        local_180 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        local_1a0 = local_1a0 & 0xffffffff;
        FUN_0322c8e0(&local_1b8);
        if (((ulong)local_190 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
        }
      }
      else {
LAB_0321e08c:
        local_1b8 = (ulong **)0x0;
        local_1a0 = (ulong)bVar2;
        local_1a8 = puVar29;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_198 = nn::os::GetThreadId(pTVar12);
        local_188 = 0;
        local_180 = (char *)0x0;
        local_178 = 0;
        local_170 = 0;
        local_168[0]._0_1_ = '\0';
        local_1b0 = 0x10000000000;
        local_1b8 = local_168;
        local_190 = local_168;
        FUN_0322c554(&local_1b8,"Void/opaque type \'{}\' has non-zero size and/or alignment.",
                     &DAT_046aa4e8,puVar28);
        local_178 = 0x107;
LAB_0321e24c:
        local_180 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        local_1a0 = local_1a0 & 0xffffffff;
        if ((char)local_168[0] != '\0') {
          sVar13 = strlen((char *)local_168);
          *(undefined2 *)((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff)))
               = 10;
          printf("%s",local_168);
          fflush(__stream);
        }
        if (((ulong)local_190 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
        }
      }
    }
LAB_0321cb78:
    local_1b8 = (ulong **)((ulong)local_1b8 & 0xffffffff00000000);
    FUN_0321e9cc(&local_1b8);
    if ((-1 < (int)local_1b8) || (FUN_0321e9cc(local_1d8), *(char *)*param_1 == '\0'))
    goto LAB_0321cb8c;
  }
LAB_0321dd68:
  local_1b8 = (ulong **)CONCAT44(local_1b8._4_4_,local_1d8[0]);
  iVar8 = local_1d8[0];
LAB_0321dd70:
  if ((iVar8 < 0) && (FUN_0321e9cc(local_240), *(char *)*param_1 != '\0')) {
    return local_240[0];
  }
  plVar25 = plVar25 + 1;
  if (plVar25 == param_3) goto LAB_0321e6ac;
  goto LAB_0321c530;
LAB_0321d5bc:
  if (puVar29 == (ulong *)0x0) {
LAB_0321d5f4:
    psVar26 = (short *)0x0;
    psVar20 = (short *)0x0;
  }
  else {
    uVar10 = CONCAT44(uVar14,uVar14) & 0x7fffff007fffff;
    psVar20 = (short *)puVar29[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))
                                            + POPCOUNT((char)(uVar10 >> 0x10))) + 2];
    if (psVar20 == (short *)0x0) goto LAB_0321d5f4;
    psVar26 = psVar20 + 4;
    psVar20 = psVar26 + (long)*psVar20 * 4;
  }
  if (psVar26 != psVar20) {
    uVar21 = 0xffffffff;
    uVar14 = 0;
    do {
      local_228 = *(ulong **)psVar26;
      uVar10 = *local_228;
      uVar15 = (uint)uVar10;
      puVar29 = local_228;
      if ((uVar15 >> 0x11 & 1) == 0) {
        local_1c4 = 0;
      }
      else {
        uVar22 = CONCAT44(uVar15,uVar15) & 0x1ffff0001ffff;
        local_1c4 = (uint)(ushort)local_228[(ulong)(byte)(POPCOUNT((char)uVar22) +
                                                          POPCOUNT((char)(uVar22 >> 8)) +
                                                         POPCOUNT((char)(uVar22 >> 0x10))) + 2];
      }
      while ((uVar15 >> 0x14 & 1) == 0) {
        if ((uVar10 & 1) != 0) {
          uVar16 = 0;
          goto LAB_0321d688;
        }
        puVar29 = (ulong *)puVar29[1];
        uVar16 = 0;
        if (puVar29 == (ulong *)0x0) goto LAB_0321d688;
        uVar10 = *puVar29;
        uVar15 = (uint)uVar10;
      }
      uVar16 = 0;
      if (puVar29 != (ulong *)0x0) {
        uVar10 = CONCAT44(uVar15,uVar15) & 0xfffff000fffff;
        uVar16 = (uint)(ushort)puVar29[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                     POPCOUNT((char)(uVar10 >> 8)) +
                                                    POPCOUNT((char)(uVar10 >> 0x10))) + 2];
      }
LAB_0321d688:
      local_1c8 = uVar16 + local_1c4;
      if ((int)local_1c0[0] < local_1c8) {
        FUN_0321e9cc(&local_230);
        puVar29 = *(ulong **)(*param_1 + 0x28);
        if (puVar29 != (ulong *)0x0) {
          bVar2 = *(byte *)(*param_1 + 0x30);
          if ((byte)puVar29[10] < bVar2) {
            if (DAT_046aaf68 != '\0') goto LAB_0321da78;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_1b8 = (ulong **)0x0;
              local_1a0 = (ulong)bVar2;
              local_1a8 = puVar29;
              pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
              local_198 = nn::os::GetThreadId(pTVar12);
              local_170 = 0;
              local_190 = (ulong **)0x0;
              local_188 = 0;
              local_180 = (char *)0x0;
              local_178 = 0;
              puVar29 = local_228;
              do {
                uVar15 = (uint)*puVar29;
                if ((uVar15 >> 0x14 & 1) != 0) {
                  local_1cc = 0;
                  if (puVar29 != (ulong *)0x0) {
                    uVar10 = CONCAT44(uVar15,uVar15) & 0xfffff000fffff;
                    local_1cc = (uint)(ushort)puVar29[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                                    POPCOUNT((char)(uVar10 >> 8)) +
                                                                   POPCOUNT((char)(uVar10 >> 0x10)))
                                                      + 2];
                  }
                  goto LAB_0321d74c;
                }
                if ((*puVar29 & 1) != 0) {
                  local_1cc = 0;
                  goto LAB_0321d74c;
                }
                puVar29 = (ulong *)puVar29[1];
              } while (puVar29 != (ulong *)0x0);
              local_1cc = 0;
LAB_0321d74c:
              FUN_0322c554(&local_1b8,
                           "Record type \'{}\' has field \'{}\' with offset + size {} ({} + {}) greater than total type size {}."
                           ,&DAT_046aa588,puVar28,&local_228,&local_1c8,&local_1c4,&local_1cc,
                           local_1c0);
              local_180 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_178 = 0x230;
              FUN_0322c8e0(&local_1b8);
            }
            else {
LAB_0321da78:
              local_1b8 = (ulong **)0x0;
              local_1a0 = (ulong)bVar2;
              local_1a8 = puVar29;
              pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
              local_198 = nn::os::GetThreadId(pTVar12);
              local_188 = 0;
              local_180 = (char *)0x0;
              local_178 = 0;
              local_170 = 0;
              local_168[0]._0_1_ = '\0';
              local_1b0 = 0x10000000000;
              puVar29 = local_228;
              do {
                uVar15 = (uint)*puVar29;
                if ((uVar15 >> 0x14 & 1) != 0) {
                  local_1d0 = 0;
                  if (puVar29 != (ulong *)0x0) {
                    uVar10 = CONCAT44(uVar15,uVar15) & 0xfffff000fffff;
                    local_1d0 = (uint)(ushort)puVar29[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                                    POPCOUNT((char)(uVar10 >> 8)) +
                                                                   POPCOUNT((char)(uVar10 >> 0x10)))
                                                      + 2];
                  }
                  goto LAB_0321dbc4;
                }
                if ((*puVar29 & 1) != 0) {
                  local_1d0 = 0;
                  goto LAB_0321dbc4;
                }
                puVar29 = (ulong *)puVar29[1];
              } while (puVar29 != (ulong *)0x0);
              local_1d0 = 0;
LAB_0321dbc4:
              local_1b8 = local_168;
              local_190 = local_168;
              FUN_0322c554(&local_1b8,
                           "Record type \'{}\' has field \'{}\' with offset + size {} ({} + {}) greater than total type size {}."
                           ,&DAT_046aa588,puVar28,&local_228,&local_1c8,&local_1c4,&local_1d0,
                           local_1c0);
              local_180 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              local_178 = 0x230;
              if ((char)local_168[0] != '\0') {
                sVar13 = strlen((char *)local_168);
                *(undefined2 *)
                 ((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
                printf("%s",local_168);
                fflush(__stream);
              }
            }
            if (((ulong)local_190 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
            }
          }
        }
        if (*(char *)*param_1 == '\0') goto LAB_0321d7dc;
        bVar4 = true;
      }
      else {
LAB_0321d7dc:
        uVar15 = uVar14 + uVar21;
        if ((int)local_1c4 < (int)uVar15) {
          FUN_0321e9cc(&local_230);
          puVar29 = *(ulong **)(*param_1 + 0x28);
          if (puVar29 != (ulong *)0x0) {
            bVar2 = *(byte *)(*param_1 + 0x30);
            if ((byte)puVar29[10] < bVar2) {
              if (DAT_046aaf68 != '\0') goto LAB_0321dad0;
            }
            else {
              if (DAT_046aaf68 == '\0') {
                local_1b8 = (ulong **)0x0;
                local_1a0 = (ulong)bVar2;
                local_1a8 = puVar29;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar12);
                local_170 = 0;
                local_190 = (ulong **)0x0;
                local_188 = 0;
                local_180 = (char *)0x0;
                local_178 = 0;
                local_1cc = uVar15;
                FUN_0322c554(&local_1b8,
                             "Record type \'{}\' has field \'{}\' with offset {} less than the previous one + size {}. This means that fields either overlap or are not sorted."
                             ,&DAT_046aa5c0,puVar28,&local_228,&local_1c4,&local_1cc);
                local_180 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                local_178 = 0x233;
                FUN_0322c8e0(&local_1b8);
              }
              else {
LAB_0321dad0:
                local_1b8 = (ulong **)0x0;
                local_1a0 = (ulong)bVar2;
                local_1a8 = puVar29;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar12);
                local_188 = 0;
                local_180 = (char *)0x0;
                local_178 = 0;
                local_170 = 0;
                local_1b0 = 0x10000000000;
                local_168[0]._0_1_ = '\0';
                local_1d0 = uVar15;
                local_1b8 = local_168;
                local_190 = local_168;
                FUN_0322c554(&local_1b8,
                             "Record type \'{}\' has field \'{}\' with offset {} less than the previous one + size {}. This means that fields either overlap or are not sorted."
                             ,&DAT_046aa5c0,puVar28,&local_228,&local_1c4,&local_1d0);
                local_180 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                local_178 = 0x233;
                if ((char)local_168[0] != '\0') {
                  sVar13 = strlen((char *)local_168);
                  *(undefined2 *)
                   ((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
                  printf("%s",local_168);
                  fflush(__stream);
                }
              }
              if (((ulong)local_190 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
              }
            }
          }
          if (*(char *)*param_1 != '\0') {
            bVar4 = true;
            goto LAB_0321da60;
          }
        }
        uVar21 = local_1c4;
        puVar29 = local_228;
        while( true ) {
          uVar14 = (uint)*puVar29;
          if ((uVar14 >> 0x14 & 1) != 0) break;
          if (((*puVar29 & 1) != 0) || (puVar29 = (ulong *)puVar29[1], puVar29 == (ulong *)0x0))
          goto LAB_0321d930;
        }
        if (puVar29 != (ulong *)0x0) {
          uVar10 = CONCAT44(uVar14,uVar14) & 0xfffff000fffff;
          uVar14 = (uint)(ushort)puVar29[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                       POPCOUNT((char)(uVar10 >> 8)) +
                                                      POPCOUNT((char)(uVar10 >> 0x10))) + 2];
          goto LAB_0321d934;
        }
LAB_0321d930:
        uVar14 = 0;
LAB_0321d934:
        if (bVar7) {
          uVar10 = 0;
          puVar29 = local_228;
          do {
            uVar15 = (uint)*puVar29;
            if ((uVar15 >> 0x15 & 1) == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = CONCAT44(uVar15,uVar15) & 0x1fffff001fffff;
              uVar22 = puVar29[(ulong)(byte)(POPCOUNT((char)uVar22) + POPCOUNT((char)(uVar22 >> 8))
                                            + POPCOUNT((char)(uVar22 >> 0x10))) + 2];
            }
            uVar10 = uVar22 | uVar10;
          } while (((*puVar29 & 1) == 0) && (puVar29 = (ulong *)puVar29[1], puVar29 != (ulong *)0x0)
                  );
          if (((uint)uVar10 >> 9 & 1) != 0) {
            FUN_0321e9cc(&local_230);
            puVar29 = *(ulong **)(*param_1 + 0x28);
            if (puVar29 != (ulong *)0x0) {
              bVar2 = *(byte *)(*param_1 + 0x30);
              if ((byte)puVar29[10] < bVar2) {
                if (DAT_046aaf68 != '\0') goto LAB_0321dc58;
              }
              else if (DAT_046aaf68 == '\0') {
                local_1b8 = (ulong **)0x0;
                local_1a0 = (ulong)bVar2;
                local_1a8 = puVar29;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar12);
                local_170 = 0;
                local_190 = (ulong **)0x0;
                local_188 = 0;
                local_180 = (char *)0x0;
                local_178 = 0;
                FUN_0322c554(&local_1b8,
                             "Record type \'{}\' is retargetable, but it has field \'{}\' which is not retargetable. The record should be non-retargetable"
                             ,&DAT_046aa570,puVar28,&local_228);
                local_180 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                local_178 = 0x239;
                FUN_0322c8e0(&local_1b8);
                if (((ulong)local_190 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
                }
              }
              else {
LAB_0321dc58:
                local_1b8 = (ulong **)0x0;
                local_1a0 = (ulong)bVar2;
                local_1a8 = puVar29;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar12);
                local_188 = 0;
                local_180 = (char *)0x0;
                local_178 = 0;
                local_170 = 0;
                local_168[0]._0_1_ = '\0';
                local_1b0 = 0x10000000000;
                local_1b8 = local_168;
                local_190 = local_168;
                FUN_0322c554(&local_1b8,
                             "Record type \'{}\' is retargetable, but it has field \'{}\' which is not retargetable. The record should be non-retargetable"
                             ,&DAT_046aa570,puVar28,&local_228);
                local_180 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                local_178 = 0x239;
                if ((char)local_168[0] != '\0') {
                  sVar13 = strlen((char *)local_168);
                  *(undefined2 *)
                   ((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
                  printf("%s",local_168);
                  fflush(__stream);
                }
                if (((ulong)local_190 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
                }
              }
            }
            if (*(char *)*param_1 != '\0') {
              bVar4 = true;
              goto LAB_0321da60;
            }
          }
        }
        bVar4 = false;
      }
LAB_0321da60:
      psVar26 = psVar26 + 4;
    } while ((psVar26 != psVar20) && (!bVar4));
    if ((int)local_230 < 0) {
      FUN_0321e9cc(local_1d8);
    }
  }
  goto LAB_0321dd68;
LAB_0321e6ac:
  local_238[0] = local_240[0];
  if (local_240[0] < 0) {
    local_1a8 = *(ulong **)(*param_1 + 0x28);
    if ((char)local_1a8[10] == '\0') {
      return local_240[0];
    }
    local_1b8 = (ulong **)0x0;
    local_1a0 = 1;
    pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
    local_198 = nn::os::GetThreadId(pTVar12);
    local_178 = 0x43d;
    goto LAB_0321e7c0;
  }
  plVar25 = param_2;
  do {
    iVar8 = FUN_0321e9dc(param_1,*plVar25);
    if ((iVar8 < 0) && (FUN_0321e9cc(local_240), *(char *)*param_1 != '\0')) {
      return local_240[0];
    }
    plVar25 = plVar25 + 1;
  } while (param_3 != plVar25);
  local_238[0] = local_240[0];
  if (local_240[0] < 0) {
    local_1a8 = *(ulong **)(*param_1 + 0x28);
    if ((char)local_1a8[10] == '\0') {
      return local_240[0];
    }
    local_1b8 = (ulong **)0x0;
    local_1a0 = 1;
    pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
    local_198 = nn::os::GetThreadId(pTVar12);
    local_178 = 0x444;
    goto LAB_0321e7c0;
  }
  goto LAB_0321c28c;
LAB_0321c334:
  local_238[0] = local_240[0];
  if (local_240[0] < 0) {
    local_1a8 = *(ulong **)(*param_1 + 0x28);
    if ((char)local_1a8[10] == '\0') {
      return local_240[0];
    }
    local_1b8 = (ulong **)0x0;
    local_1a0 = 1;
    pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
    local_198 = nn::os::GetThreadId(pTVar12);
    local_178 = 0x430;
  }
  else {
    plVar25 = param_2;
    do {
      puVar28 = (ulong *)*plVar25;
      while( true ) {
        uVar14 = (uint)*puVar28;
        if ((uVar14 >> 0xf & 1) != 0) break;
        if (((*puVar28 & 9) != 0) || (puVar28 = (ulong *)puVar28[1], puVar28 == (ulong *)0x0))
        goto LAB_0321c4f0;
      }
      uVar10 = CONCAT44(uVar14,uVar14) & 0x7fff00007fff;
      if (puVar28[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2] != 0) {
        local_1b0 = -0x7ffffff7ffffffff;
        local_1b8 = &local_1a8;
        local_1a8 = (ulong *)*plVar25;
        iVar8 = FUN_03222744(param_1,&local_1b8);
        lVar19 = local_1b0;
        local_230 = CONCAT44(local_230._4_4_,iVar8);
        if (iVar8 < 0) {
          if ((char)(*(ulong **)(*param_1 + 0x28))[10] != '\0') {
            local_228 = (ulong *)0x0;
            local_210 = 1;
            local_218 = *(ulong **)(*param_1 + 0x28);
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_208 = nn::os::GetThreadId(pTVar12);
            local_200 = 0;
            uStack_1f8 = 0;
            local_1e0 = 0;
            local_1f0 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            uStack_1e8 = 0xd1;
            FUN_0322c554(&local_228,"HK_RETURN_IF_FAILED({}) returning {}. ",PTR_DAT_047e5978,
                         "checkSingleParams(templateStack)",&local_230);
            FUN_0322c554(&local_228,&DAT_03c886bc,PTR_DAT_047d1b38);
            FUN_0322c8e0(&local_228);
            if ((local_200 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_200 - 1,0);
            }
          }
          lVar19 = local_1b0;
          uVar10 = (ulong)local_1b0._4_4_;
          local_1b0 = (ulong)local_1b0._4_4_ << 0x20;
          if ((-1 < lVar19) && (local_1b8 != (ulong **)0x0)) {
            plVar11 = (long *)(puVar5 + 0x20);
            (**(code **)(*plVar11 + 0x20))(plVar11,local_1b8,uVar10 << 3);
          }
          if (((int)local_230 < 0) && (FUN_0321e9cc(local_240), *(char *)*param_1 != '\0')) {
            return local_240[0];
          }
        }
        else {
          uVar10 = (ulong)local_1b0._4_4_;
          local_1b0 = (ulong)local_1b0._4_4_ << 0x20;
          if ((-1 < lVar19) && (local_1b8 != (ulong **)0x0)) {
            plVar11 = (long *)(puVar5 + 0x20);
            (**(code **)(*plVar11 + 0x20))(plVar11,local_1b8,uVar10 << 3);
          }
        }
      }
LAB_0321c4f0:
      plVar25 = plVar25 + 1;
    } while (plVar25 != param_3);
    local_238[0] = local_240[0];
    if (-1 < local_240[0]) {
      plVar25 = param_2;
LAB_0321c530:
      puVar28 = (ulong *)*plVar25;
      local_1d8[0] = 0;
      lVar19 = *param_1;
      uVar10 = *puVar28;
      uVar14 = (uint)uVar10;
      if ((uVar10 & (*(ulong *)(lVar19 + 8) ^ 0xffffffffffffffff)) == 0) {
        if (((uVar14 >> 4 & 1) == 0) ||
           (*(int *)((long)puVar28 + (ulong)(byte)POPCOUNT((byte)uVar10 & 0xf) * 8 + 0x14) == 0)) {
LAB_0321c718:
          uVar10 = *puVar28;
          uVar14 = (uint)uVar10;
          if (((uVar10 & 1) != 0) && ((puVar28[2] & 0x1e) == 0)) {
            puVar27 = puVar28;
            uVar21 = uVar14;
            puVar29 = puVar28;
            if ((uVar14 >> 0x14 & 1) == 0) {
              uVar22 = uVar10;
              do {
                if (((uVar22 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
                goto joined_r0x0321c838;
                uVar22 = *puVar27;
                uVar21 = (uint)uVar22;
              } while ((uVar21 >> 0x14 & 1) == 0);
            }
            uVar21 = uVar21 & 0xfffff;
            if ((short)puVar27[(ulong)(byte)(POPCOUNT((char)uVar21) + POPCOUNT((char)(uVar21 >> 8))
                                            + POPCOUNT((char)(uVar21 >> 0x10))) + 2] == 0) {
joined_r0x0321c838:
              do {
                if ((uVar14 >> 0x14 & 1) != 0) goto LAB_0321c850;
                if (((uVar10 & 1) != 0) || (puVar29 = (ulong *)puVar29[1], puVar29 == (ulong *)0x0))
                goto LAB_0321cb8c;
                uVar10 = *puVar29;
                uVar14 = (uint)uVar10;
              } while( true );
            }
            goto LAB_0321c87c;
          }
          if ((uVar14 >> 0x14 & 1) != 0) {
            uVar14 = uVar14 & 0xfffff;
            uVar10 = puVar28[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8)) +
                                          POPCOUNT((char)(uVar14 >> 0x10))) + 2];
            local_228 = (ulong *)(uVar10 >> 0x10 & 0xfff);
            if ((uVar10 & 0xffff) == 0) {
              puVar29 = *(ulong **)(*param_1 + 0x28);
              if (puVar29 == (ulong *)0x0) goto LAB_0321cb78;
              bVar2 = *(byte *)(*param_1 + 0x30);
              if ((byte)puVar29[10] < bVar2) {
                if (DAT_046aaf68 == '\0') goto LAB_0321cb78;
              }
              else if (DAT_046aaf68 == '\0') {
                local_1b8 = (ulong **)0x0;
                local_1a0 = (ulong)bVar2;
                local_1a8 = puVar29;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar12);
                local_170 = 0;
                local_190 = (ulong **)0x0;
                local_188 = 0;
                local_180 = (char *)0x0;
                local_178 = 0;
                FUN_0322c554(&local_1b8,"Type \'{}\' has zero size.",&DAT_046aa4e8,puVar28);
                local_178 = 0x110;
                goto LAB_0321cb44;
              }
              local_1b8 = (ulong **)0x0;
              local_1a0 = (ulong)bVar2;
              local_1a8 = puVar29;
              pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
              local_198 = nn::os::GetThreadId(pTVar12);
              local_188 = 0;
              local_180 = (char *)0x0;
              local_178 = 0;
              local_170 = 0;
              local_168[0]._0_1_ = '\0';
              local_1b0 = 0x10000000000;
              local_1b8 = local_168;
              local_190 = local_168;
              FUN_0322c554(&local_1b8,"Type \'{}\' has zero size.",&DAT_046aa4e8,puVar28);
              local_178 = 0x110;
              goto LAB_0321e24c;
            }
            uVar22 = 0;
            puVar29 = puVar28;
            do {
              uVar14 = (uint)*puVar29;
              if ((uVar14 >> 0x15 & 1) == 0) {
                uVar24 = 0;
              }
              else {
                uVar14 = uVar14 & 0x1fffff;
                uVar24 = puVar29[(ulong)(byte)(POPCOUNT((char)uVar14) +
                                               POPCOUNT((char)(uVar14 >> 8)) +
                                              POPCOUNT((char)(uVar14 >> 0x10))) + 2];
              }
              uVar22 = uVar24 | uVar22;
            } while (((*puVar29 & 1) == 0) &&
                    (puVar29 = (ulong *)puVar29[1], puVar29 != (ulong *)0x0));
            if (((uint)uVar22 >> 1 & 1) != 0) goto LAB_0321cb8c;
            if (local_228 != (ulong *)0x0) {
              if (((ulong)local_228 & (ulong)((long)local_228 + -1)) == 0) {
                uVar14 = (uint)uVar10 & 0xffff;
                uVar21 = 0;
                uVar15 = (uint)local_228;
                if (uVar15 != 0) {
                  uVar21 = uVar14 / uVar15;
                }
                if (uVar14 == uVar21 * uVar15) goto LAB_0321cb8c;
                puVar29 = *(ulong **)(*param_1 + 0x28);
                if (puVar29 == (ulong *)0x0) goto LAB_0321cb78;
                bVar2 = *(byte *)(*param_1 + 0x30);
                if ((byte)puVar29[10] < bVar2) {
                  if (DAT_046aaf68 == '\0') goto LAB_0321cb78;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_1b8 = (ulong **)0x0;
                  local_1a0 = (ulong)bVar2;
                  local_1a8 = puVar29;
                  pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                  local_198 = nn::os::GetThreadId(pTVar12);
                  local_170 = 0;
                  local_190 = (ulong **)0x0;
                  local_188 = 0;
                  local_180 = (char *)0x0;
                  local_178 = 0;
                  FUN_0322c554(&local_1b8,
                               "Non-abstract type \'{}\' has size ({} bytes) not divisible by its alignment ({} bytes)."
                               ,&DAT_046aa510,puVar28,puVar28,&local_228);
                  local_178 = 0x118;
                  goto LAB_0321cb44;
                }
                local_1b8 = (ulong **)0x0;
                local_1a0 = (ulong)bVar2;
                local_1a8 = puVar29;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar12);
                local_188 = 0;
                local_180 = (char *)0x0;
                local_178 = 0;
                local_170 = 0;
                local_168[0]._0_1_ = '\0';
                local_1b0 = 0x10000000000;
                local_1b8 = local_168;
                local_190 = local_168;
                FUN_0322c554(&local_1b8,
                             "Non-abstract type \'{}\' has size ({} bytes) not divisible by its alignment ({} bytes)."
                             ,&DAT_046aa510,puVar28,puVar28,&local_228);
                local_178 = 0x118;
              }
              else {
                puVar29 = *(ulong **)(*param_1 + 0x28);
                if (puVar29 == (ulong *)0x0) goto LAB_0321cb78;
                bVar2 = *(byte *)(*param_1 + 0x30);
                if ((byte)puVar29[10] < bVar2) {
                  if (DAT_046aaf68 == '\0') goto LAB_0321cb78;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_1b8 = (ulong **)0x0;
                  local_1a0 = (ulong)bVar2;
                  local_1a8 = puVar29;
                  pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                  local_198 = nn::os::GetThreadId(pTVar12);
                  local_170 = 0;
                  local_190 = (ulong **)0x0;
                  local_188 = 0;
                  local_180 = (char *)0x0;
                  local_178 = 0;
                  FUN_0322c554(&local_1b8,
                               "Non-abstract type \'{}\' has non-power-of-two alignment ({} bytes)."
                               ,&DAT_046aa4f8,puVar28,&local_228);
                  local_178 = 0x117;
                  goto LAB_0321cb44;
                }
                local_1b8 = (ulong **)0x0;
                local_1a0 = (ulong)bVar2;
                local_1a8 = puVar29;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar12);
                local_188 = 0;
                local_180 = (char *)0x0;
                local_178 = 0;
                local_170 = 0;
                local_1b0 = 0x10000000000;
                local_168[0]._0_1_ = '\0';
                local_1b8 = local_168;
                local_190 = local_168;
                FUN_0322c554(&local_1b8,
                             "Non-abstract type \'{}\' has non-power-of-two alignment ({} bytes).",
                             &DAT_046aa4f8,puVar28,&local_228);
                local_178 = 0x117;
              }
              goto LAB_0321e24c;
            }
            puVar29 = *(ulong **)(*param_1 + 0x28);
            if (puVar29 != (ulong *)0x0) {
              bVar2 = *(byte *)(*param_1 + 0x30);
              if ((byte)puVar29[10] < bVar2) {
                if (DAT_046aaf68 != '\0') goto LAB_0321e0f8;
                goto LAB_0321cb78;
              }
              if (DAT_046aaf68 != '\0') {
LAB_0321e0f8:
                local_1b8 = (ulong **)0x0;
                local_1a0 = (ulong)bVar2;
                local_1a8 = puVar29;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar12);
                local_188 = 0;
                local_180 = (char *)0x0;
                local_178 = 0;
                local_170 = 0;
                local_168[0]._0_1_ = '\0';
                local_1b0 = 0x10000000000;
                local_1b8 = local_168;
                local_190 = local_168;
                FUN_0322c554(&local_1b8,"Non-abstract type \'{}\' has zero alignment.",&DAT_046aa4e8
                             ,puVar28);
                local_178 = 0x116;
                goto LAB_0321e24c;
              }
              local_1b8 = (ulong **)0x0;
              local_1a0 = (ulong)bVar2;
              local_1a8 = puVar29;
              pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
              local_198 = nn::os::GetThreadId(pTVar12);
              local_170 = 0;
              local_190 = (ulong **)0x0;
              local_188 = 0;
              local_180 = (char *)0x0;
              local_178 = 0;
              FUN_0322c554(&local_1b8,"Non-abstract type \'{}\' has zero alignment.",&DAT_046aa4e8,
                           puVar28);
              local_178 = 0x116;
              goto LAB_0321cb44;
            }
            goto LAB_0321cb78;
          }
          goto LAB_0321cb8c;
        }
        puVar29 = *(ulong **)(lVar19 + 0x28);
        if (puVar29 != (ulong *)0x0) {
          bVar2 = *(byte *)(lVar19 + 0x30);
          if ((byte)puVar29[10] < bVar2) {
            if (DAT_046aaf68 != '\0') goto LAB_0321df3c;
          }
          else if (DAT_046aaf68 == '\0') {
            local_1b8 = (ulong **)0x0;
            local_1a0 = (ulong)bVar2;
            local_1a8 = puVar29;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_198 = nn::os::GetThreadId(pTVar12);
            local_170 = 0;
            local_190 = (ulong **)0x0;
            local_188 = 0;
            local_180 = (char *)0x0;
            local_178 = 0;
            FUN_0322c554(&local_1b8,"Overflow in VERSION of type \'{}\' (should fit on 32 bits).",
                         &DAT_046aa4e8,puVar28);
            local_1a0 = local_1a0 & 0xffffffff;
            local_180 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_178 = 0xfb;
            FUN_0322c8e0(&local_1b8);
            if (((ulong)local_190 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
            }
          }
          else {
LAB_0321df3c:
            local_1b8 = (ulong **)0x0;
            local_1a0 = (ulong)bVar2;
            local_1a8 = puVar29;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_198 = nn::os::GetThreadId(pTVar12);
            local_188 = 0;
            local_180 = (char *)0x0;
            local_178 = 0;
            local_170 = 0;
            local_168[0]._0_1_ = '\0';
            local_1b0 = 0x10000000000;
            local_1b8 = local_168;
            local_190 = local_168;
            FUN_0322c554(&local_1b8,"Overflow in VERSION of type \'{}\' (should fit on 32 bits).",
                         &DAT_046aa4e8,puVar28);
            local_1a0 = local_1a0 & 0xffffffff;
            local_180 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_178 = 0xfb;
            if ((char)local_168[0] != '\0') {
              sVar13 = strlen((char *)local_168);
              *(undefined2 *)
               ((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
              printf("%s",local_168);
              fflush(__stream);
            }
            if (((ulong)local_190 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
            }
          }
        }
        local_1b8 = (ulong **)((ulong)local_1b8 & 0xffffffff00000000);
        FUN_0321e9cc(&local_1b8);
        if ((-1 < (int)local_1b8) || (FUN_0321e9cc(local_1d8), *(char *)*param_1 == '\0'))
        goto LAB_0321c718;
        goto LAB_0321dd68;
      }
      puVar28 = *(ulong **)(lVar19 + 0x28);
      if (puVar28 != (ulong *)0x0) {
        bVar2 = *(byte *)(lVar19 + 0x30);
        if ((byte)puVar28[10] < bVar2) {
          if (DAT_046aaf68 != '\0') goto LAB_0321dd98;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1b8 = (ulong **)0x0;
            local_1a0 = (ulong)bVar2;
            local_1a8 = puVar28;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_198 = nn::os::GetThreadId(pTVar12);
            local_190 = (ulong **)0x0;
            local_188 = 0;
            local_180 = (char *)0x0;
            local_178 = 0;
            local_170 = 0;
            local_228 = (ulong *)CONCAT44(local_228._4_4_,
                                          uVar14 & (*(uint *)(*param_1 + 8) ^ 0xffffffff));
            FUN_0322c554(&local_1b8,"Type has invalid optionals {}.",&DAT_046aa4d8,&local_228);
            local_1a0 = local_1a0 & 0xffffffff;
            local_180 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_178 = 0xdf;
            FUN_0322c8e0(&local_1b8);
          }
          else {
LAB_0321dd98:
            local_1b8 = (ulong **)0x0;
            local_1a0 = (ulong)bVar2;
            local_1a8 = puVar28;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_198 = nn::os::GetThreadId(pTVar12);
            local_188 = 0;
            local_180 = (char *)0x0;
            local_178 = 0;
            local_170 = 0;
            local_1b0 = 0x10000000000;
            local_168[0]._0_1_ = '\0';
            local_230 = CONCAT44(local_230._4_4_,uVar14 & (*(uint *)(*param_1 + 8) ^ 0xffffffff));
            local_1b8 = local_168;
            local_190 = local_168;
            FUN_0322c554(&local_1b8,"Type has invalid optionals {}.",&DAT_046aa4d8,&local_230);
            local_1a0 = local_1a0 & 0xffffffff;
            local_180 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_178 = 0xdf;
            if ((char)local_168[0] != '\0') {
              sVar13 = strlen((char *)local_168);
              *(undefined2 *)
               ((long)local_168 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
              printf("%s",local_168);
              fflush(__stream);
            }
          }
          if (((ulong)local_190 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_190 + -1),0);
          }
        }
      }
      local_1b8 = (ulong **)((ulong)local_1b8 & 0xffffffff00000000);
      FUN_0321e9cc(&local_1b8);
      iVar8 = (int)local_1b8;
      goto LAB_0321dd70;
    }
    local_1a8 = *(ulong **)(*param_1 + 0x28);
    if ((char)local_1a8[10] == '\0') {
      return local_240[0];
    }
    local_1b8 = (ulong **)0x0;
    local_1a0 = 1;
    pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
    local_198 = nn::os::GetThreadId(pTVar12);
    local_178 = 0x436;
  }
LAB_0321e7c0:
  local_180 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  local_188 = 0;
  local_190 = (ulong **)0x0;
  local_170 = 0;
  FUN_0322c554(&local_1b8,"HK_RETURN_IF_FAILED({}) returning {}. ",&DAT_046aa408,"status",local_238)
  ;
  FUN_0322c554(&local_1b8,&DAT_03c886bc,PTR_DAT_047d1b38);
  FUN_0322c8e0(&local_1b8);
  if (((ulong)local_190 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(long)local_190 - 1,0);
  }
  return local_238[0];
}


