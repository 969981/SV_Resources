/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031b4f0c; name: FUN_031b4f0c
 */


undefined8 FUN_031b4f0c(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  char *__n;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  char *pcVar10;
  void *pvVar11;
  ThreadType *pTVar12;
  ulong uVar13;
  size_t sVar14;
  char cVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  undefined4 *puVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  byte *extraout_x18;
  byte *extraout_x18_00;
  byte *extraout_x18_01;
  byte *pbVar28;
  undefined8 uVar29;
  size_t sVar30;
  uint uVar31;
  uint uVar32;
  byte *local_250;
  ulong local_248;
  byte *local_240;
  undefined8 local_238;
  char *local_230;
  undefined8 uStack_228;
  undefined8 *local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  char *local_208;
  undefined8 local_200;
  char *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  char local_1e0 [256];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulong local_c0;
  char local_b8;
  char local_b7;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  char local_70;
  long *local_68;
  uint local_48;
  uint local_44;
  
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  uStack_88 = 0;
  local_68 = (long *)*param_2;
  *param_2 = 0;
  if (local_68 == (long *)0x0) {
    local_a0 = (void *)param_2[1];
    local_98 = (void *)(param_2[2] + (long)local_a0);
    local_90 = local_a0;
  }
  else {
    (**(code **)(*local_68 + 0x10))(local_68,&local_a0);
  }
  local_e0 = 0;
  uVar29 = 0x80040200;
  local_c8 = 0;
  local_c0 = 0;
  local_70 = '\x01';
  local_d8 = 0;
  uStack_d0 = 0;
  iVar9 = FUN_031b41d0(&local_a0,&local_e0);
  if (iVar9 < 0) goto LAB_031b6250;
  uVar16 = local_e0._4_4_;
  uVar17 = (ulong)local_e0._4_4_;
  uVar31 = (uint)local_d8;
  *param_3 = 0x100000001;
  *(undefined4 *)(param_3 + 1) = 1;
  *(uint *)((long)param_3 + 0xc) = local_e0._4_4_;
  *(uint *)(param_3 + 2) = (uint)local_d8;
  *(undefined4 *)((long)param_3 + 0x14) = 1;
  *(uint *)(param_3 + 3) = local_b0;
  pcVar10 = (char *)FUN_031a8080(param_3);
  puVar6 = PTR_DAT_047d1a08;
  if ((char *)param_3[0x28] < pcVar10) {
    local_230 = pcVar10;
    pvVar11 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_230,0);
    __n = (char *)param_3[0x27];
    if (pcVar10 <= (char *)param_3[0x27]) {
      __n = pcVar10;
    }
    memcpy(pvVar11,(void *)param_3[0x26],(size_t)__n);
    if (*(char *)(param_3 + 0x29) == '\0') {
      (**(code **)(puVar6 + 8))(0,param_3[0x26],0);
    }
    param_3[0x26] = pvVar11;
    param_3[0x28] = pcVar10;
    *(undefined1 *)(param_3 + 0x29) = 0;
  }
  uVar32 = *(uint *)((long)param_3 + 0xc);
  param_3[0x27] = pcVar10;
  if (uVar32 < 2) {
    uVar32 = 1;
  }
  if (local_b8 == '\0') {
    uVar17 = (ulong)local_b0;
    uVar4 = (&DAT_0487f130)[(ulong)*(uint *)(param_3 + 3) * 0x1c];
    bVar1 = (&DAT_0487f132)[(ulong)*(uint *)(param_3 + 3) * 0x38];
    if (*(char *)((long)&DAT_0487f14d + uVar17 * 0x38 + 7) == '\0') {
      uVar16 = (uint)(ushort)(&DAT_0487f130)[uVar17 * 0x1c];
    }
    else {
      lVar26 = uVar17 * 0x38;
      iVar9 = (uint)(byte)(&DAT_0487f133)[lVar26] * (uint)(byte)(&DAT_0487f132)[lVar26] *
              (uint)(byte)(&DAT_0487f134)[lVar26];
      uVar16 = 0;
      if (iVar9 != 0) {
        uVar16 = (int)((uint)(ushort)(&DAT_0487f130)[uVar17 * 0x1c] + iVar9 + -1) / iVar9;
      }
    }
    if (uVar16 == local_b4) {
      pvVar11 = (void *)((long)local_a0 + (local_c0 & 0xffffffff) * 4);
      if (local_98 < pvVar11) {
        lVar27 = (local_c0 & 0xffffffff) * 4;
        lVar26 = 0;
        if (local_68 != (long *)0x0) {
          lVar26 = (**(code **)(*local_68 + 0x30))(local_68,&local_a0,lVar27);
        }
        if (lVar26 != lVar27) {
          if (DAT_0487f048 == '\0') {
            if (DAT_046aaf68 == '\0') goto LAB_031b6250;
          }
          else if (DAT_046aaf68 == '\0') {
            local_230 = (char *)0x0;
            local_220 = &DAT_0487eff8;
            uStack_218 = 1;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_210 = nn::os::GetThreadId(pTVar12);
            local_208 = (char *)0x0;
            local_200 = 0;
            local_1f8 = (char *)0x0;
            local_1f0 = 0;
            uStack_1e8 = 0;
            FUN_0322c554(&local_230,"Failed to skip palette data.",PTR_DAT_047d1b38);
            local_1f0 = 0x2fb;
            goto LAB_031b5788;
          }
          local_220 = &DAT_0487eff8;
          uStack_218 = 1;
          pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
          local_210 = nn::os::GetThreadId(pTVar12);
          local_230 = local_1e0;
          local_200 = 0;
          local_1f8 = (char *)0x0;
          local_1f0 = 0;
          uStack_1e8 = 0;
          local_1e0[0] = '\0';
          uStack_228 = 0x10000000000;
          local_208 = local_230;
          FUN_0322c554(&local_230,"Failed to skip palette data.",PTR_DAT_047d1b38);
          local_1f0 = 0x2fb;
          goto LAB_031b6324;
        }
      }
      else {
        local_a0 = pvVar11;
      }
      uVar16 = 0;
      if (bVar1 != 0) {
        uVar16 = (uVar32 - 1) / (uint)bVar1;
      }
      uVar16 = (uVar16 + 1) * (uint)uVar4 >> 3;
      uVar17 = (ulong)uVar16;
      do {
        uVar31 = uVar31 - 1;
        if ((int)uVar31 < 0) goto LAB_031b624c;
        uVar32 = *(uint *)((long)param_3 + 0xc);
        if (uVar32 < 2) {
          uVar32 = 1;
        }
        uVar20 = 0;
        if ((byte)(&DAT_0487f132)[(ulong)*(uint *)(param_3 + 3) * 0x38] != 0) {
          uVar20 = (uVar32 - 1) / (uint)(byte)(&DAT_0487f132)[(ulong)*(uint *)(param_3 + 3) * 0x38];
        }
        pvVar11 = (void *)((ulong)(((uVar20 + 1) *
                                    (uint)(ushort)(&DAT_0487f130)
                                                  [(ulong)*(uint *)(param_3 + 3) * 0x1c] >> 3) *
                                  uVar31) + param_3[0x26] + *(long *)param_3[4]);
        uVar23 = (long)local_98 - (long)local_a0;
        if ((long)uVar23 < (long)uVar17) {
          if (local_68 == (long *)0x0) {
            memcpy(pvVar11,local_a0,uVar23);
            local_a0 = local_98;
          }
          else {
            uVar23 = (**(code **)(*local_68 + 0x38))(local_68,&local_a0,pvVar11,uVar17);
          }
          if (uVar23 != uVar17) {
            if (DAT_0487f048 == '\0') {
              if (DAT_046aaf68 == '\0') goto LAB_031b6250;
            }
            else if (DAT_046aaf68 == '\0') {
              local_230 = (char *)0x0;
              local_220 = &DAT_0487eff8;
              uStack_218 = 1;
              pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
              local_210 = nn::os::GetThreadId(pTVar12);
              local_208 = (char *)0x0;
              local_200 = 0;
              local_1f8 = (char *)0x0;
              local_1f0 = 0;
              uStack_1e8 = 0;
              FUN_0322c554(&local_230,"Failed to read row data.",PTR_DAT_047d1b38);
              local_1f0 = 0x304;
              goto LAB_031b5788;
            }
            local_220 = &DAT_0487eff8;
            uStack_218 = 1;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_210 = nn::os::GetThreadId(pTVar12);
            local_230 = local_1e0;
            local_200 = 0;
            local_1f8 = (char *)0x0;
            local_1f0 = 0;
            uStack_1e8 = 0;
            local_1e0[0] = '\0';
            uStack_228 = 0x10000000000;
            local_208 = local_230;
            FUN_0322c554(&local_230,"Failed to read row data.",PTR_DAT_047d1b38);
            local_1f0 = 0x304;
            goto LAB_031b6324;
          }
        }
        else {
          memcpy(pvVar11,local_a0,uVar17);
          local_a0 = (void *)((long)local_a0 + uVar17);
        }
        uVar23 = (ulong)(local_a8 - uVar16);
        if (local_98 < (void *)((long)local_a0 + uVar23)) {
          uVar13 = 0;
          if (local_68 != (long *)0x0) {
            uVar13 = (**(code **)(*local_68 + 0x30))(local_68,&local_a0);
            uVar23 = (ulong)(local_a8 - uVar16);
          }
        }
        else {
          uVar13 = uVar23;
          local_a0 = (void *)((long)local_a0 + uVar23);
        }
      } while (uVar13 == uVar23);
      if (DAT_0487f048 == '\0') {
        if (DAT_046aaf68 == '\0') goto LAB_031b6250;
      }
      else if (DAT_046aaf68 == '\0') {
        local_230 = (char *)0x0;
        local_220 = &DAT_0487eff8;
        uStack_218 = 1;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_210 = nn::os::GetThreadId(pTVar12);
        local_208 = (char *)0x0;
        local_200 = 0;
        local_1f8 = (char *)0x0;
        local_1f0 = 0;
        uStack_1e8 = 0;
        FUN_0322c554(&local_230,"Failed to skip row data.",PTR_DAT_047d1b38);
        local_1f0 = 0x309;
        goto LAB_031b5788;
      }
      local_220 = &DAT_0487eff8;
      uStack_218 = 1;
      pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
      local_210 = nn::os::GetThreadId(pTVar12);
      local_230 = local_1e0;
      local_200 = 0;
      local_1f8 = (char *)0x0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_1e0[0] = '\0';
      uStack_228 = 0x10000000000;
      local_208 = local_230;
      FUN_0322c554(&local_230,"Failed to skip row data.",PTR_DAT_047d1b38);
      local_1f0 = 0x309;
LAB_031b6324:
      local_1f8 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
      ;
      if (local_1e0[0] != '\0') {
        sVar14 = strlen(local_1e0);
        (local_1e0 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[0] = '\n';
        (local_1e0 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[1] = '\0';
LAB_031b66ac:
        printf("%s",local_1e0);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
    }
    else {
      cVar15 = DAT_046aaf68;
      if (DAT_0487f048 == '\0') {
        if (DAT_046aaf68 == '\0') goto LAB_031b6250;
        cVar15 = '\x01';
      }
      if (cVar15 == '\0') {
        local_230 = (char *)0x0;
        local_220 = &DAT_0487eff8;
        uStack_218 = 1;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_210 = nn::os::GetThreadId(pTVar12);
        local_208 = (char *)0x0;
        uVar17 = (ulong)local_b0;
        local_200 = 0;
        local_1f8 = (char *)0x0;
        local_1f0 = 0;
        uStack_1e8 = 0;
        if (*(char *)((long)&DAT_0487f14d + uVar17 * 0x38 + 7) == '\0') {
          local_44 = (uint)(ushort)(&DAT_0487f130)[uVar17 * 0x1c];
        }
        else {
          lVar26 = uVar17 * 0x38;
          iVar9 = (uint)(byte)(&DAT_0487f133)[lVar26] * (uint)(byte)(&DAT_0487f132)[lVar26] *
                  (uint)(byte)(&DAT_0487f134)[lVar26];
          local_44 = 0;
          if (iVar9 != 0) {
            local_44 = (int)((uint)(ushort)(&DAT_0487f130)[uVar17 * 0x1c] + iVar9 + -1) / iVar9;
          }
        }
        local_240 = (byte *)FUN_031b97b4();
        FUN_0322c554(&local_230,
                     "The number of bits per pixel specified in the file ({}) does not match the expected value of {} for the format \'{}\'."
                     ,&DAT_046a1ee8,&local_b4,&local_44,&local_240);
        local_1f0 = 0x2f3;
LAB_031b5788:
        local_1f8 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
        ;
        FUN_0322c8e0(&local_230);
      }
      else {
        local_220 = &DAT_0487eff8;
        uStack_218 = 1;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_210 = nn::os::GetThreadId(pTVar12);
        local_200 = 0;
        local_1f8 = (char *)0x0;
        local_1e0[0] = '\0';
        uVar17 = (ulong)local_b0;
        uStack_228 = 0x10000000000;
        local_1f0 = 0;
        uStack_1e8 = 0;
        if (*(char *)((long)&DAT_0487f14d + uVar17 * 0x38 + 7) == '\0') {
          local_48 = (uint)(ushort)(&DAT_0487f130)[uVar17 * 0x1c];
        }
        else {
          lVar26 = uVar17 * 0x38;
          iVar9 = (uint)(byte)(&DAT_0487f133)[lVar26] * (uint)(byte)(&DAT_0487f132)[lVar26] *
                  (uint)(byte)(&DAT_0487f134)[lVar26];
          local_48 = 0;
          if (iVar9 != 0) {
            local_48 = (int)((uint)(ushort)(&DAT_0487f130)[uVar17 * 0x1c] + iVar9 + -1) / iVar9;
          }
        }
        local_230 = local_1e0;
        local_208 = local_1e0;
        local_250 = (byte *)FUN_031b97b4();
        FUN_0322c554(&local_230,
                     "The number of bits per pixel specified in the file ({}) does not match the expected value of {} for the format \'{}\'."
                     ,&DAT_046a1ee8,&local_b4,&local_48,&local_250);
        local_1f8 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
        ;
        local_1f0 = 0x2f3;
        if (local_1e0[0] != '\0') {
          sVar14 = strlen(local_1e0);
          (local_1e0 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[0] = '\n';
          (local_1e0 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[1] = '\0';
          goto LAB_031b66ac;
        }
      }
    }
    if (((ulong)local_208 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_208 + -1,0);
    }
    goto LAB_031b6250;
  }
  if ((uint)local_c0 == 0) {
    uVar32 = 1 << (ulong)(local_b4 & 0x1f);
  }
  else {
    uVar32 = (uint)local_c0;
    if (0x10000 < (uint)local_c0) {
      if (DAT_0487f048 == '\0') {
        if (DAT_046aaf68 == '\0') goto LAB_031b6250;
      }
      else if (DAT_046aaf68 == '\0') {
        local_230 = (char *)0x0;
        local_220 = &DAT_0487eff8;
        uStack_218 = 1;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_210 = nn::os::GetThreadId(pTVar12);
        local_208 = (char *)0x0;
        local_200 = 0;
        local_1f8 = (char *)0x0;
        local_1f0 = 0;
        uStack_1e8 = 0;
        FUN_0322c554(&local_230,"Palette size > 65536.",PTR_DAT_047d1b38);
        local_1f0 = 0x237;
        goto LAB_031b5788;
      }
      local_220 = &DAT_0487eff8;
      uStack_218 = 1;
      pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
      local_210 = nn::os::GetThreadId(pTVar12);
      local_230 = local_1e0;
      local_200 = 0;
      local_1f8 = (char *)0x0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_1e0[0] = '\0';
      uStack_228 = 0x10000000000;
      local_208 = local_230;
      FUN_0322c554(&local_230,"Palette size > 65536.",PTR_DAT_047d1b38);
      local_1f0 = 0x237;
      goto LAB_031b6324;
    }
  }
  local_240 = (byte *)0x0;
  local_238 = 0x8000000000000000;
  if ((int)uVar32 < 1) {
    local_238._0_4_ = 0;
  }
  else {
    FUN_031b678c(&local_240,uVar32);
  }
  if ((uint)local_238 != uVar32) {
    local_238 = CONCAT44(local_238._4_4_,uVar32);
  }
  sVar30 = (ulong)uVar32 * 4;
  sVar14 = (long)local_98 - (long)local_a0;
  if ((long)sVar14 < (long)((ulong)uVar32 * 4)) {
    if (local_68 == (long *)0x0) {
      memcpy(local_240,local_a0,sVar14);
      local_a0 = local_98;
    }
    else {
      sVar14 = (**(code **)(*local_68 + 0x38))(local_68,&local_a0,local_240,sVar30);
    }
    if (sVar14 == sVar30) goto LAB_031b54b4;
    if (DAT_0487f048 != '\0') {
      if (DAT_046aaf68 != '\0') {
LAB_031b57c0:
        local_220 = &DAT_0487eff8;
        uStack_218 = 1;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_210 = nn::os::GetThreadId(pTVar12);
        local_230 = local_1e0;
        local_200 = 0;
        local_1f8 = (char *)0x0;
        local_1f0 = 0;
        uStack_1e8 = 0;
        local_1e0[0] = '\0';
        uStack_228 = 0x10000000000;
        local_208 = local_230;
        FUN_0322c554(&local_230,"Failed to read palette data.",PTR_DAT_047d1b38);
        local_1f0 = 0x23f;
        goto LAB_031b5880;
      }
      local_230 = (char *)0x0;
      local_220 = &DAT_0487eff8;
      uStack_218 = 1;
      pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
      local_210 = nn::os::GetThreadId(pTVar12);
      local_208 = (char *)0x0;
      local_200 = 0;
      local_1f8 = (char *)0x0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      FUN_0322c554(&local_230,"Failed to read palette data.",PTR_DAT_047d1b38);
      local_1f0 = 0x23f;
LAB_031b5674:
      local_1f8 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
      ;
      FUN_0322c8e0(&local_230);
      goto LAB_031b5680;
    }
    if (DAT_046aaf68 != '\0') goto LAB_031b57c0;
LAB_031b6178:
    bVar8 = false;
  }
  else {
    memcpy(local_240,local_a0,sVar30);
    local_a0 = (void *)((long)local_a0 + sVar30);
LAB_031b54b4:
    uVar32 = local_ac;
    if (local_b7 == '\0') {
      local_250 = (byte *)0x0;
      local_248 = 0x8000000000000000;
      if ((int)local_ac < 1) {
        local_248._0_4_ = 0;
      }
      else {
        FUN_00cb58c0(&local_250,PTR_PTR_047d1a50,local_ac);
      }
      if ((uint)local_248 != uVar32) {
        local_248 = CONCAT44(local_248._4_4_,uVar32);
      }
      sVar30 = (long)local_98 - (long)local_a0;
      sVar14 = (size_t)local_ac;
      if ((long)sVar30 < (long)sVar14) {
        if (local_68 == (long *)0x0) {
          memcpy(local_250,local_a0,sVar30);
          local_a0 = local_98;
          sVar14 = sVar30;
        }
        else {
          sVar14 = (**(code **)(*local_68 + 0x38))(local_68,&local_a0,local_250,sVar14);
        }
      }
      else {
        memcpy(local_250,local_a0,sVar14);
        local_a0 = (void *)((long)local_a0 + sVar14);
      }
      if (sVar14 == local_ac) {
        if (uVar31 == 0) {
          bVar8 = true;
        }
        else {
          uVar32 = *(uint *)((long)param_3 + 0xc);
          uVar16 = 0;
          bVar8 = true;
          do {
            lVar26 = *(long *)param_3[4];
            if (uVar32 < 2) {
              uVar32 = 1;
            }
            lVar27 = param_3[0x26];
            uVar4 = (&DAT_0487f130)[(ulong)*(uint *)(param_3 + 3) * 0x1c];
            uVar20 = 0;
            if ((byte)(&DAT_0487f132)[(ulong)*(uint *)(param_3 + 3) * 0x38] != 0) {
              uVar20 = (uVar32 - 1) /
                       (uint)(byte)(&DAT_0487f132)[(ulong)*(uint *)(param_3 + 3) * 0x38];
            }
            uVar17 = 0;
            do {
              uVar32 = local_b4 * (int)uVar17;
              uVar23 = (ulong)(local_250[(ulong)(uVar32 >> 3) + (long)(int)(local_a8 * uVar16)] >>
                              ((ulong)(8 - (local_b4 + (uVar32 & 7))) & 0x3f)) &
                       (ulong)(uint)~(-1 << (ulong)(local_b4 & 0x1f));
              if ((uint)local_238 <= (uint)uVar23) {
                if (DAT_0487f048 == '\0') {
                  if (DAT_046aaf68 == '\0') goto LAB_031b61e8;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_230 = (char *)0x0;
                  local_220 = &DAT_0487eff8;
                  uStack_218 = 1;
                  pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                  local_210 = nn::os::GetThreadId(pTVar12);
                  local_208 = (char *)0x0;
                  local_200 = 0;
                  local_1f8 = (char *)0x0;
                  local_1f0 = 0;
                  uStack_1e8 = 0;
                  FUN_0322c554(&local_230,"Image contains invalid palette indices.",PTR_DAT_047d1b38
                              );
                  local_1f0 = 0x2e5;
                  goto LAB_031b5b10;
                }
                local_220 = &DAT_0487eff8;
                uStack_218 = 1;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_210 = nn::os::GetThreadId(pTVar12);
                local_230 = local_1e0;
                local_200 = 0;
                local_1f8 = (char *)0x0;
                local_1f0 = 0;
                uStack_1e8 = 0;
                local_1e0[0] = '\0';
                uStack_228 = 0x10000000000;
                local_208 = local_230;
                FUN_0322c554(&local_230,"Image contains invalid palette indices.",PTR_DAT_047d1b38);
                local_1f0 = 0x2e5;
                goto LAB_031b6720;
              }
              *(undefined4 *)
               ((ulong)(((uVar20 + 1) * (uint)uVar4 >> 3) * (uVar31 + ~uVar16)) + lVar27 + lVar26 +
               uVar17 * 4) = *(undefined4 *)(local_240 + uVar23 * 4);
              uVar32 = *(uint *)((long)param_3 + 0xc);
              uVar17 = uVar17 + 1;
              uVar22 = uVar32;
              if (uVar32 < 2) {
                uVar22 = 1;
              }
            } while (uVar17 < uVar22);
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar31);
        }
      }
      else {
        if (DAT_0487f048 == '\0') {
          if (DAT_046aaf68 != '\0') goto LAB_031b5b50;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_230 = (char *)0x0;
            local_220 = &DAT_0487eff8;
            uStack_218 = 1;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_210 = nn::os::GetThreadId(pTVar12);
            local_208 = (char *)0x0;
            local_200 = 0;
            local_1f8 = (char *)0x0;
            local_1f0 = 0;
            uStack_1e8 = 0;
            FUN_0322c554(&local_230,"Failed to read data.",PTR_DAT_047d1b38);
            local_1f0 = 0x2d5;
LAB_031b5b10:
            local_1f8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
            ;
            FUN_0322c8e0(&local_230);
          }
          else {
LAB_031b5b50:
            local_220 = &DAT_0487eff8;
            uStack_218 = 1;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_210 = nn::os::GetThreadId(pTVar12);
            local_230 = local_1e0;
            local_200 = 0;
            local_1f8 = (char *)0x0;
            local_1f0 = 0;
            uStack_1e8 = 0;
            local_1e0[0] = '\0';
            uStack_228 = 0x10000000000;
            local_208 = local_230;
            FUN_0322c554(&local_230,"Failed to read data.",PTR_DAT_047d1b38);
            local_1f0 = 0x2d5;
LAB_031b6720:
            local_1f8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
            ;
            if (local_1e0[0] != '\0') {
              sVar14 = strlen(local_1e0);
              (local_1e0 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[0] = '\n';
              (local_1e0 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[1] = '\0';
              printf("%s",local_1e0);
              fflush(*(FILE **)PTR_stdout_047cb860);
            }
          }
          if (((ulong)local_208 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_208 + -1,0);
          }
        }
LAB_031b61e8:
        bVar8 = false;
      }
      uVar17 = local_248;
      local_248 = local_248 & 0xffffffff00000000;
      if ((-1 < (long)uVar17) && (local_250 != (byte *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
      }
    }
    else {
      if ((local_ac & 1) != 0) {
        if (DAT_0487f048 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_031b6178;
        }
        else if (DAT_046aaf68 == '\0') {
          local_230 = (char *)0x0;
          local_220 = &DAT_0487eff8;
          uStack_218 = 1;
          pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
          local_210 = nn::os::GetThreadId(pTVar12);
          local_208 = (char *)0x0;
          local_200 = 0;
          local_1f8 = (char *)0x0;
          local_1f0 = 0;
          uStack_1e8 = 0;
          FUN_0322c554(&local_230,
                       "The data size is not a multiple of 2 bytes in an RLE-compressed file.",
                       PTR_DAT_047d1b38);
          local_1f0 = 0x248;
          goto LAB_031b5674;
        }
        local_220 = &DAT_0487eff8;
        uStack_218 = 1;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_210 = nn::os::GetThreadId(pTVar12);
        local_230 = local_1e0;
        local_200 = 0;
        local_1f8 = (char *)0x0;
        local_1f0 = 0;
        uStack_1e8 = 0;
        local_1e0[0] = '\0';
        uStack_228 = 0x10000000000;
        local_208 = local_230;
        FUN_0322c554(&local_230,
                     "The data size is not a multiple of 2 bytes in an RLE-compressed file.",
                     PTR_DAT_047d1b38);
        local_1f0 = 0x248;
LAB_031b5880:
        local_1f8 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
        ;
        if (local_1e0[0] != '\0') {
          sVar14 = strlen(local_1e0);
          (local_1e0 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[0] = '\n';
          (local_1e0 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[1] = '\0';
          printf("%s",local_1e0);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
LAB_031b5680:
        if (((ulong)local_208 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_208 + -1,0);
        }
        goto LAB_031b6178;
      }
      local_250 = (byte *)0x0;
      local_248 = 0x8000000000000000;
      if ((int)local_ac < 1) {
        local_248._0_4_ = 0;
      }
      else {
        FUN_00cb58c0(&local_250,PTR_PTR_047d1a50,local_ac);
      }
      if ((uint)local_248 != uVar32) {
        local_248 = CONCAT44(local_248._4_4_,uVar32);
      }
      sVar30 = (long)local_98 - (long)local_a0;
      sVar14 = (size_t)local_ac;
      if ((long)sVar30 < (long)sVar14) {
        if (local_68 == (long *)0x0) {
          memcpy(local_250,local_a0,sVar30);
          local_a0 = local_98;
          pbVar28 = extraout_x18_01;
          sVar14 = sVar30;
        }
        else {
          sVar14 = (**(code **)(*local_68 + 0x38))(local_68,&local_a0,local_250,sVar14);
          pbVar28 = extraout_x18;
        }
      }
      else {
        memcpy(local_250,local_a0,sVar14);
        local_a0 = (void *)((long)local_a0 + sVar14);
        pbVar28 = extraout_x18_00;
      }
      if (sVar14 == local_ac) {
        if (local_ac != 0) {
          uVar32 = *(uint *)((long)param_3 + 0xc);
          if (uVar32 < 2) {
            uVar32 = 1;
          }
          uVar20 = 0;
          if ((byte)(&DAT_0487f132)[(ulong)*(uint *)(param_3 + 3) * 0x38] != 0) {
            uVar20 = (uVar32 - 1) /
                     (uint)(byte)(&DAT_0487f132)[(ulong)*(uint *)(param_3 + 3) * 0x38];
          }
          uVar31 = uVar31 - 1;
          uVar32 = 0;
          lVar26 = (ulong)(((uVar20 + 1) *
                            (uint)(ushort)(&DAT_0487f130)[(ulong)*(uint *)(param_3 + 3) * 0x1c] >> 3
                           ) * uVar31) + param_3[0x26] + *(long *)param_3[4];
          pbVar19 = local_250;
          uVar20 = uVar31;
          do {
            bVar1 = *pbVar19;
            bVar2 = pbVar19[1];
            uVar23 = (ulong)bVar2;
            pbVar19 = pbVar19 + 2;
            if (bVar1 == 0) {
              if (bVar2 == 0) {
                if (uVar32 < uVar16) {
                  uVar23 = (ulong)uVar32;
                  uVar21 = ~uVar23;
                  uVar13 = (ulong)(uVar16 - uVar32) & 3;
                  if ((uVar16 - uVar32 & 3) != 0) {
                    do {
                      uVar13 = uVar13 - 1;
                      *(undefined4 *)(lVar26 + uVar23 * 4) = *(undefined4 *)local_240;
                      uVar23 = uVar23 + 1;
                    } while (uVar13 != 0);
                  }
                  if (2 < uVar21 + uVar17) {
                    lVar27 = uVar17 - uVar23;
                    puVar24 = (undefined4 *)(lVar26 + uVar23 * 4 + 8);
                    do {
                      lVar27 = lVar27 + -4;
                      puVar24[-2] = *(undefined4 *)local_240;
                      puVar24[-1] = *(undefined4 *)local_240;
                      *puVar24 = *(undefined4 *)local_240;
                      puVar24[1] = *(undefined4 *)local_240;
                      puVar24 = puVar24 + 4;
                    } while (lVar27 != 0);
                  }
                }
                uVar32 = 0;
                uVar20 = uVar20 - 1;
                lVar26 = lVar26 + uVar17 * -4;
              }
              else if (bVar2 == 1) {
                if ((uVar20 != 0) && (bVar8 = uVar32 != uVar31, uVar32 = uVar31, bVar8)) {
                  if (DAT_0487f048 == '\0') {
                    if (DAT_046aaf68 == '\0') goto LAB_031b6148;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_230 = (char *)0x0;
                    local_220 = &DAT_0487eff8;
                    uStack_218 = 1;
                    pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                    local_210 = nn::os::GetThreadId(pTVar12);
                    local_208 = (char *)0x0;
                    local_200 = 0;
                    local_1f8 = (char *)0x0;
                    local_1f0 = 0;
                    uStack_1e8 = 0;
                    FUN_0322c554(&local_230,"Unexpected end of image marker found.",PTR_DAT_047d1b38
                                );
                    local_1f0 = 0x29e;
                    goto LAB_031b6110;
                  }
                  local_220 = &DAT_0487eff8;
                  uStack_218 = 1;
                  pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                  local_210 = nn::os::GetThreadId(pTVar12);
                  local_230 = local_1e0;
                  local_200 = 0;
                  local_1f8 = (char *)0x0;
                  local_1f0 = 0;
                  uStack_1e8 = 0;
                  local_1e0[0] = '\0';
                  uStack_228 = 0x10000000000;
                  local_208 = local_230;
                  FUN_0322c554(&local_230,"Unexpected end of image marker found.",PTR_DAT_047d1b38);
                  local_1f0 = 0x29e;
                  goto LAB_031b65e0;
                }
              }
              else {
                uVar22 = (uint)bVar2;
                if (uVar22 == 2) {
                  if (DAT_0487f048 == '\0') {
                    if (DAT_046aaf68 == '\0') goto LAB_031b6148;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_230 = (char *)0x0;
                    local_220 = &DAT_0487eff8;
                    uStack_218 = 1;
                    pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                    local_210 = nn::os::GetThreadId(pTVar12);
                    local_208 = (char *)0x0;
                    local_200 = 0;
                    local_1f8 = (char *)0x0;
                    local_1f0 = 0;
                    uStack_1e8 = 0;
                    FUN_0322c554(&local_230,
                                 "Found a RLE compression position delta - this is not supported.",
                                 PTR_DAT_047d1b38);
                    local_1f0 = 0x2a4;
                    goto LAB_031b6110;
                  }
                  local_220 = &DAT_0487eff8;
                  uStack_218 = 1;
                  pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                  local_210 = nn::os::GetThreadId(pTVar12);
                  local_230 = local_1e0;
                  local_200 = 0;
                  local_1f8 = (char *)0x0;
                  local_1f0 = 0;
                  uStack_1e8 = 0;
                  local_1e0[0] = '\0';
                  uStack_228 = 0x10000000000;
                  local_208 = local_230;
                  FUN_0322c554(&local_230,
                               "Found a RLE compression position delta - this is not supported.",
                               PTR_DAT_047d1b38);
                  local_1f0 = 0x2a4;
                  goto LAB_031b65e0;
                }
                if ((uVar16 < uVar32 + uVar22) || (local_250 + sVar14 < pbVar19 + (uVar23 + 1 >> 1))
                   ) goto LAB_031b6148;
                if (local_b4 == 4) {
                  bVar1 = bVar2 >> 1;
                  pbVar18 = pbVar19;
                  if (bVar1 != 0) {
                    if (bVar1 != 1) {
                      iVar9 = -(bVar2 >> 1 & 0x7e);
                      pbVar28 = pbVar19;
                      do {
                        bVar3 = *pbVar28;
                        *(undefined4 *)(lVar26 + (ulong)uVar32 * 4) =
                             *(undefined4 *)(local_240 + ((ulong)(bVar3 >> 2) & 0x3c));
                        *(undefined4 *)(lVar26 + (ulong)(uVar32 + 1) * 4) =
                             *(undefined4 *)(local_240 + ((ulong)bVar3 & 0xf) * 4);
                        pbVar19 = pbVar28 + 2;
                        bVar3 = pbVar28[1];
                        *(undefined4 *)(lVar26 + (ulong)(uVar32 + 2) * 4) =
                             *(undefined4 *)(local_240 + ((ulong)(bVar3 >> 2) & 0x3c));
                        uVar22 = uVar32 + 3;
                        uVar32 = uVar32 + 4;
                        *(undefined4 *)(lVar26 + (ulong)uVar22 * 4) =
                             *(undefined4 *)(local_240 + ((ulong)bVar3 & 0xf) * 4);
                        iVar9 = iVar9 + 2;
                        pbVar28 = pbVar19;
                      } while (iVar9 != 0);
                    }
                    pbVar18 = pbVar19;
                    if ((bVar2 >> 1 & 1) != 0) {
                      pbVar18 = pbVar19 + 1;
                      bVar3 = *pbVar19;
                      uVar22 = uVar32 + 1;
                      *(undefined4 *)(lVar26 + (ulong)uVar32 * 4) =
                           *(undefined4 *)(local_240 + ((ulong)(bVar3 >> 2) & 0x3c));
                      uVar32 = uVar32 + 2;
                      *(undefined4 *)(lVar26 + (ulong)uVar22 * 4) =
                           *(undefined4 *)(local_240 + ((ulong)bVar3 & 0xf) * 4);
                      pbVar28 = local_240;
                    }
                  }
                  pbVar19 = pbVar18;
                  if ((bVar2 & 1) != 0) {
                    pbVar19 = pbVar18 + 1;
                    *(undefined4 *)(lVar26 + (ulong)uVar32 * 4) =
                         *(undefined4 *)(local_240 + ((ulong)(*pbVar18 >> 2) & 0x3c));
                    uVar32 = uVar32 + 1;
                    pbVar28 = local_240;
                  }
                  pbVar19 = pbVar19 + ((ulong)((uint)bVar1 + (uint)bVar2) & 1);
                }
                else {
                  uVar25 = uVar22 & 3;
                  if (2 < uVar22 - 1) {
                    lVar27 = 0;
                    do {
                      pbVar28 = pbVar19 + lVar27;
                      uVar13 = (ulong)uVar32 + lVar27;
                      lVar27 = lVar27 + 4;
                      *(undefined4 *)(lVar26 + (uVar13 & 0xffffffff) * 4) =
                           *(undefined4 *)(local_240 + (ulong)*pbVar28 * 4);
                      iVar9 = (int)uVar13;
                      *(undefined4 *)(lVar26 + (ulong)(iVar9 + 1) * 4) =
                           *(undefined4 *)(local_240 + (ulong)pbVar28[1] * 4);
                      *(undefined4 *)(lVar26 + (ulong)(iVar9 + 2) * 4) =
                           *(undefined4 *)(local_240 + (ulong)pbVar28[2] * 4);
                      *(undefined4 *)(lVar26 + (ulong)(iVar9 + 3) * 4) =
                           *(undefined4 *)(local_240 + (ulong)pbVar28[3] * 4);
                    } while ((bVar2 & 0xfc) != (uint)lVar27);
                    uVar32 = uVar32 + (uint)lVar27;
                    pbVar28 = (byte *)(ulong)uVar32;
                    pbVar19 = pbVar19 + lVar27;
                  }
                  pbVar18 = pbVar19;
                  if ((bVar2 & 3) != 0) {
                    do {
                      pbVar19 = pbVar18 + 1;
                      uVar25 = uVar25 - 1;
                      pbVar28 = (byte *)(ulong)(uVar32 + 1);
                      *(undefined4 *)(lVar26 + (ulong)uVar32 * 4) =
                           *(undefined4 *)(local_240 + (ulong)*pbVar18 * 4);
                      pbVar18 = pbVar19;
                      uVar32 = uVar32 + 1;
                    } while (uVar25 != 0);
                  }
                  pbVar19 = pbVar19 + (uVar23 & 1);
                  uVar32 = (uint)pbVar28;
                }
              }
            }
            else {
              uVar25 = uVar16 - uVar32;
              uVar22 = (uint)bVar1;
              if (uVar25 < bVar1 || uVar25 == bVar1) {
                uVar22 = uVar25;
              }
              if (local_b4 == 4) {
                uVar25 = uVar22 >> 1;
                if (uVar25 != 0) {
                  pbVar28 = (byte *)(ulong)(bVar2 >> 4);
                  uVar23 = uVar23 & 0xf;
                  if (uVar25 != 1) {
                    iVar9 = -(uVar25 & 0x7ffffffe);
                    do {
                      iVar9 = iVar9 + 2;
                      *(undefined4 *)(lVar26 + (ulong)uVar32 * 4) =
                           *(undefined4 *)(local_240 + (long)pbVar28 * 4);
                      *(undefined4 *)(lVar26 + (ulong)(uVar32 + 1) * 4) =
                           *(undefined4 *)(local_240 + uVar23 * 4);
                      uVar25 = uVar32 + 3;
                      *(undefined4 *)(lVar26 + (ulong)(uVar32 + 2) * 4) =
                           *(undefined4 *)(local_240 + (long)pbVar28 * 4);
                      uVar32 = uVar32 + 4;
                      *(undefined4 *)(lVar26 + (ulong)uVar25 * 4) =
                           *(undefined4 *)(local_240 + uVar23 * 4);
                    } while (iVar9 != 0);
                  }
                  if ((uVar22 >> 1 & 1) != 0) {
                    *(undefined4 *)(lVar26 + (ulong)uVar32 * 4) =
                         *(undefined4 *)(local_240 + (long)pbVar28 * 4);
                    uVar25 = uVar32 + 1;
                    uVar32 = uVar32 + 2;
                    *(undefined4 *)(lVar26 + (ulong)uVar25 * 4) =
                         *(undefined4 *)(local_240 + uVar23 * 4);
                    pbVar28 = local_240;
                  }
                }
                if ((uVar22 & 1) != 0) {
                  *(undefined4 *)(lVar26 + (ulong)uVar32 * 4) =
                       *(undefined4 *)(local_240 + ((ulong)(bVar2 >> 2) & 0x3c));
                  uVar32 = uVar32 + 1;
                }
              }
              else if (uVar22 != 0) {
                uVar5 = uVar22 - 1;
                uVar25 = uVar22 & 3;
                if (2 < uVar5) {
                  iVar9 = -(uVar22 & 0xfffffffc);
                  do {
                    iVar9 = iVar9 + 4;
                    *(undefined4 *)(lVar26 + (ulong)uVar32 * 4) =
                         *(undefined4 *)(local_240 + uVar23 * 4);
                    *(undefined4 *)(lVar26 + (ulong)(uVar32 + 1) * 4) =
                         *(undefined4 *)(local_240 + uVar23 * 4);
                    uVar22 = uVar32 + 3;
                    *(undefined4 *)(lVar26 + (ulong)(uVar32 + 2) * 4) =
                         *(undefined4 *)(local_240 + uVar23 * 4);
                    uVar5 = *(uint *)(local_240 + uVar23 * 4);
                    uVar32 = uVar32 + 4;
                    *(uint *)(lVar26 + (ulong)uVar22 * 4) = uVar5;
                  } while (iVar9 != 0);
                }
                pbVar28 = (byte *)(ulong)uVar5;
                for (; uVar25 != 0; uVar25 = uVar25 - 1) {
                  *(undefined4 *)(lVar26 + (ulong)uVar32 * 4) =
                       *(undefined4 *)(local_240 + uVar23 * 4);
                  uVar32 = uVar32 + 1;
                }
              }
            }
          } while (pbVar19 < local_250 + sVar14);
        }
        bVar8 = true;
      }
      else {
        if (DAT_0487f048 == '\0') {
          if (DAT_046aaf68 != '\0') goto LAB_031b6584;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_230 = (char *)0x0;
            local_220 = &DAT_0487eff8;
            uStack_218 = 1;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_210 = nn::os::GetThreadId(pTVar12);
            local_208 = (char *)0x0;
            local_200 = 0;
            local_1f8 = (char *)0x0;
            local_1f0 = 0;
            uStack_1e8 = 0;
            FUN_0322c554(&local_230,"Failed to read data.",PTR_DAT_047d1b38);
            local_1f0 = 0x251;
LAB_031b6110:
            local_1f8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
            ;
            FUN_0322c8e0(&local_230);
          }
          else {
LAB_031b6584:
            local_220 = &DAT_0487eff8;
            uStack_218 = 1;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_210 = nn::os::GetThreadId(pTVar12);
            local_230 = local_1e0;
            local_200 = 0;
            local_1f8 = (char *)0x0;
            local_1f0 = 0;
            uStack_1e8 = 0;
            local_1e0[0] = '\0';
            uStack_228 = 0x10000000000;
            local_208 = local_230;
            FUN_0322c554(&local_230,"Failed to read data.",PTR_DAT_047d1b38);
            local_1f0 = 0x251;
LAB_031b65e0:
            local_1f8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
            ;
            if (local_1e0[0] != '\0') {
              sVar14 = strlen(local_1e0);
              (local_1e0 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[0] = '\n';
              (local_1e0 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[1] = '\0';
              printf("%s",local_1e0);
              fflush(*(FILE **)PTR_stdout_047cb860);
            }
          }
          if (((ulong)local_208 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_208 + -1,0);
          }
        }
LAB_031b6148:
        bVar8 = false;
      }
      uVar17 = local_248;
      local_248 = local_248 & 0xffffffff00000000;
      if ((-1 < (long)uVar17) && (local_250 != (byte *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
      }
    }
    if (!bVar8) goto LAB_031b6178;
    bVar8 = true;
  }
  uVar31 = local_238._4_4_;
  uVar17 = (ulong)local_238._4_4_;
  local_238 = (ulong)local_238._4_4_ << 0x20;
  if ((-1 < (int)uVar31) && (local_240 != (byte *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_240,uVar17 << 2);
  }
  if (bVar8) {
LAB_031b624c:
    uVar29 = 0;
  }
LAB_031b6250:
  if (local_70 != '\0') {
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))(local_68,&local_a0);
      plVar7 = local_68;
      local_68 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    local_70 = '\0';
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  return uVar29;
}


