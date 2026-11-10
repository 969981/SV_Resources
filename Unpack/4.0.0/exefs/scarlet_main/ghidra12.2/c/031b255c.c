/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031b255c; name: FUN_031b255c
 */


undefined8 FUN_031b255c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  void *__src;
  int iVar16;
  char cVar17;
  uint uVar18;
  ThreadType *pTVar19;
  size_t sVar20;
  undefined4 uVar21;
  char *pcVar22;
  long lVar23;
  uint uVar24;
  bool bVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined8 local_2a8;
  undefined8 local_2a0;
  char *local_298;
  undefined8 uStack_290;
  undefined8 *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  char *local_270;
  undefined8 local_268;
  char *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  char local_248 [256];
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  uint local_128;
  uint local_124;
  uint uStack_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  undefined4 local_e4;
  undefined8 local_e0;
  uint local_d8;
  int local_d4;
  int iStack_d0;
  int local_cc;
  int iStack_c8;
  undefined4 local_c4;
  uint uStack_c0;
  uint local_ac;
  undefined8 *local_a8;
  undefined8 *local_a0;
  long local_98;
  long local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  long *local_78;
  long *local_70;
  
  local_a8 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 1;
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  FUN_032282d4(&local_a8);
  uVar6 = param_3[1];
  uVar10 = param_3[2];
  uVar7 = param_3[5];
  uVar11 = param_3[6];
  uVar15 = (ulong)uVar11;
  uStack_120 = param_3[3];
  uVar12 = param_3[4];
  uVar27 = *param_3;
  if (uStack_120 < 2) {
    uStack_120 = 1;
  }
  uVar18 = uVar12;
  if (uVar12 < 2) {
    uVar18 = 1;
  }
  uVar5 = uVar7;
  if (uVar7 < 2) {
    uVar5 = 1;
  }
  local_ac = uVar6;
  memset(&local_128,0,0x78);
  local_138 = 0;
  local_130 = 0x7c20534444;
  local_148 = 0;
  local_140 = 0;
  if (uVar27 < 2) {
    uVar24 = 0x1007;
  }
  else {
    uVar24 = 0x21007;
    local_114 = uVar27;
  }
  local_124 = uVar18;
  if (uVar7 < 2) {
LAB_031b26a0:
    cVar17 = *(char *)((long)&DAT_0487f14d + uVar15 * 0x38 + 7);
    if (cVar17 == '\0') {
      uVar18 = 0;
      if ((byte)(&DAT_0487f132)[uVar15 * 0x38] != 0) {
        uVar18 = (uStack_120 - 1) / (uint)(byte)(&DAT_0487f132)[uVar15 * 0x38];
      }
      uVar24 = uVar24 | 8;
      local_11c = (uVar18 + 1) * (uint)(ushort)(&DAT_0487f130)[uVar15 * 0x1c] >> 3;
    }
    else {
      local_11c = 0;
      uVar24 = uVar24 | 0x80000;
    }
    if (uVar6 < 2) {
      uVar18 = 0;
      uVar21 = 0x1000;
LAB_031b2780:
      lVar23 = uVar15 * 0x38;
      if (1 < (uVar7 | uVar10)) {
        uVar21 = 0x1008;
      }
      uStack_c0 = uVar18 | 0x200000;
      if (uVar7 < 2) {
        uStack_c0 = uVar18;
      }
      iVar8 = *(int *)((long)&DAT_0487f135 + lVar23 + 7);
      iVar13 = *(int *)((long)&DAT_0487f13d + lVar23 + 3);
      iVar9 = *(int *)((long)&DAT_0487f13d + lVar23 + 7);
      iVar14 = *(int *)((long)&DAT_0487f145 + lVar23 + 3);
      local_c4 = 0x401008;
      if (uVar27 < 2) {
        local_c4 = uVar21;
      }
      local_e4 = 0x20;
      if (cVar17 == '\0') {
        uVar27 = (uint)(ushort)(&DAT_0487f130)[uVar15 * 0x1c];
      }
      else {
        lVar23 = uVar15 * 0x38;
        iVar16 = (uint)(byte)(&DAT_0487f133)[lVar23] * (uint)(byte)(&DAT_0487f132)[lVar23] *
                 (uint)(byte)(&DAT_0487f134)[lVar23];
        uVar27 = 0;
        if (iVar16 != 0) {
          uVar27 = (int)((uint)(ushort)(&DAT_0487f130)[uVar15 * 0x1c] + iVar16 + -1) / iVar16;
        }
      }
      if ((int)uVar11 < 0x46) {
        if ((int)uVar11 < 0x32) {
          if (uVar11 == 10) {
            bVar25 = false;
            uVar21 = 0x74;
          }
          else if (uVar11 == 0x1e) {
            bVar25 = false;
            uVar21 = 0x73;
          }
          else {
            if (uVar11 != 0x28) goto LAB_031b2a70;
            bVar25 = false;
            uVar21 = 0x72;
          }
        }
        else if (uVar11 == 0x32) {
          bVar25 = false;
          uVar21 = 0x71;
        }
        else if (uVar11 == 0x35) {
          bVar25 = false;
          uVar21 = 0x24;
        }
        else {
          if (uVar11 != 0x3c) goto LAB_031b2a70;
          bVar25 = false;
          uVar21 = 0x70;
        }
      }
      else if ((int)uVar11 < 0x8c) {
        if (uVar11 == 0x46) {
          bVar25 = false;
          uVar21 = 0x6f;
        }
        else if (uVar11 == 0x78) {
          bVar25 = false;
          uVar21 = 0x31545844;
        }
        else {
          if (uVar11 != 0x82) goto LAB_031b2a70;
          bVar25 = false;
          uVar21 = 0x33545844;
        }
      }
      else if (uVar11 == 0x8c) {
        bVar25 = false;
        uVar21 = 0x35545844;
      }
      else if (uVar11 == 0x96) {
        bVar25 = false;
        uVar21 = 0x31495441;
      }
      else if (uVar11 == 0xa0) {
        bVar25 = false;
        uVar21 = 0x32495441;
      }
      else {
LAB_031b2a70:
        uVar21 = 0;
        bVar25 = true;
      }
      iVar16 = (&DAT_0487f164)[uVar15 * 0xe];
      local_128 = uVar24;
      if (uVar10 < 2) {
        if ((((iVar13 == 0 && iVar8 == 0) && iVar9 == 0) && iVar14 == 0) ||
           (uVar18 = FUN_031b9910(iVar8,iVar13,iVar9,iVar14,uVar27), uVar11 != uVar18)) {
          if (bVar25) goto LAB_031b2af4;
          bVar25 = false;
          local_e0 = CONCAT44(uVar21,4);
        }
        else {
          bVar25 = false;
          local_e0 = CONCAT44(local_e0._4_4_,0x41);
          local_d8 = uVar27;
          local_d4 = iVar8;
          iStack_d0 = iVar13;
          local_cc = iVar9;
          iStack_c8 = iVar14;
        }
LAB_031b2bd0:
        puVar3 = local_a8 + 0x10;
        if (local_a0 < puVar3) {
          if (local_78 == (long *)0x0) {
            sVar20 = (long)local_a0 - (long)local_a8;
            memcpy(local_a8,&local_130,sVar20);
            local_a8 = local_a0;
          }
          else {
            sVar20 = (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_130,0x80);
          }
          if (sVar20 != 0x80) {
            uVar26 = 0x80040200;
            if (DAT_0487efb8 == '\0') {
              if (DAT_046aaf68 == '\0') goto LAB_031b307c;
            }
            else if (DAT_046aaf68 == '\0') {
              local_298 = (char *)0x0;
              local_288 = &DAT_0487ef68;
              uStack_280 = 1;
              pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
              local_278 = nn::os::GetThreadId(pTVar19);
              local_270 = (char *)0x0;
              local_268 = 0;
              local_260 = (char *)0x0;
              local_258 = 0;
              uStack_250 = 0;
              FUN_0322c554(&local_298,"Failed to write image header.",PTR_DAT_047d1b38);
              local_258 = 0x27e;
              goto LAB_031b304c;
            }
            local_288 = &DAT_0487ef68;
            uStack_280 = 1;
            pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
            local_278 = nn::os::GetThreadId(pTVar19);
            local_298 = local_248;
            local_268 = 0;
            local_260 = (char *)0x0;
            local_258 = 0;
            uStack_250 = 0;
            local_248[0] = '\0';
            uStack_290 = 0x10000000000;
            local_270 = local_298;
            FUN_0322c554(&local_298,"Failed to write image header.",PTR_DAT_047d1b38);
            local_258 = 0x27e;
            goto LAB_031b31b4;
          }
        }
        else {
          memcpy(local_a8,&local_130,0x80);
          local_a8 = puVar3;
        }
        if (bVar25) {
          if (local_a0 < (undefined8 *)((long)local_a8 + 0x14U)) {
            if (local_78 == (long *)0x0) {
              sVar20 = (long)local_a0 - (long)local_a8;
              memcpy(local_a8,&local_148,sVar20);
              local_a8 = local_a0;
            }
            else {
              sVar20 = (**(code **)(*local_78 + 0x30))(local_78,&local_a8,&local_148,0x14);
            }
            if (sVar20 != 0x14) {
              uVar26 = 0x80040200;
              if (DAT_0487efb8 == '\0') {
                if (DAT_046aaf68 == '\0') goto LAB_031b307c;
              }
              else if (DAT_046aaf68 == '\0') {
                local_298 = (char *)0x0;
                local_288 = &DAT_0487ef68;
                uStack_280 = 1;
                pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
                local_278 = nn::os::GetThreadId(pTVar19);
                local_270 = (char *)0x0;
                local_268 = 0;
                local_260 = (char *)0x0;
                local_258 = 0;
                uStack_250 = 0;
                FUN_0322c554(&local_298,"Failed to write image DX10 header.",PTR_DAT_047d1b38);
                local_258 = 0x286;
                goto LAB_031b304c;
              }
              local_288 = &DAT_0487ef68;
              uStack_280 = 1;
              pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
              local_278 = nn::os::GetThreadId(pTVar19);
              local_298 = local_248;
              local_268 = 0;
              local_260 = (char *)0x0;
              local_258 = 0;
              uStack_250 = 0;
              local_248[0] = '\0';
              uStack_290 = 0x10000000000;
              local_270 = local_298;
              FUN_0322c554(&local_298,"Failed to write image DX10 header.",PTR_DAT_047d1b38);
              local_258 = 0x286;
              goto LAB_031b31b4;
            }
          }
          else {
            *(undefined4 *)(local_a8 + 2) = local_138;
            *local_a8 = local_148;
            local_a8[1] = local_140;
            local_a8 = (undefined8 *)((long)local_a8 + 0x14U);
          }
        }
        __src = *(void **)(param_3 + 0x4c);
        sVar20 = *(size_t *)(param_3 + 0x4e);
        puVar3 = (undefined8 *)(sVar20 + (long)local_a8);
        if (local_a0 < puVar3) {
          if (local_78 == (long *)0x0) {
            sVar20 = (long)local_a0 - (long)local_a8;
            memcpy(local_a8,__src,sVar20);
            local_a8 = local_a0;
          }
          else {
            sVar20 = (**(code **)(*local_78 + 0x30))(local_78,&local_a8,__src,sVar20);
          }
        }
        else {
          memcpy(local_a8,__src,sVar20);
          local_a8 = puVar3;
        }
        if (sVar20 == *(size_t *)(param_3 + 0x4e)) {
          uVar26 = 0;
          goto LAB_031b307c;
        }
        uVar26 = 0x80040200;
        if (DAT_0487efb8 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_031b307c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_298 = (char *)0x0;
          local_288 = &DAT_0487ef68;
          uStack_280 = 1;
          pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
          local_278 = nn::os::GetThreadId(pTVar19);
          local_270 = (char *)0x0;
          local_268 = 0;
          local_260 = (char *)0x0;
          local_258 = 0;
          uStack_250 = 0;
          FUN_0322c554(&local_298,"Failed to write image data.",PTR_DAT_047d1b38);
          local_258 = 0x28d;
          goto LAB_031b304c;
        }
        local_288 = &DAT_0487ef68;
        uStack_280 = 1;
        pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
        local_278 = nn::os::GetThreadId(pTVar19);
        local_298 = local_248;
        local_268 = 0;
        local_260 = (char *)0x0;
        local_258 = 0;
        uStack_250 = 0;
        local_248[0] = '\0';
        uStack_290 = 0x10000000000;
        local_270 = local_298;
        FUN_0322c554(&local_298,"Failed to write image data.",PTR_DAT_047d1b38);
        local_258 = 0x28d;
        goto LAB_031b31b4;
      }
LAB_031b2af4:
      if (iVar16 != 0) {
        local_e0 = 0x3031584400000004;
        uVar21 = 2;
        if (1 < uVar12) {
          uVar21 = 3;
        }
        uVar4 = 4;
        if (uVar7 < 2) {
          uVar4 = uVar21;
        }
        local_148 = CONCAT44(uVar4,iVar16);
        if (1 < uVar6) {
          local_140 = 4;
        }
        bVar25 = true;
        local_140 = CONCAT44(uVar10,(undefined4)local_140);
        local_138 = 0;
        goto LAB_031b2bd0;
      }
      uVar26 = 0x80040200;
      if (DAT_0487efb8 == '\0') {
        if (DAT_046aaf68 == '\0') goto LAB_031b307c;
      }
      else if (DAT_046aaf68 == '\0') {
        local_298 = (char *)0x0;
        local_288 = &DAT_0487ef68;
        uStack_280 = 1;
        pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
        local_278 = nn::os::GetThreadId(pTVar19);
        local_270 = (char *)0x0;
        local_268 = 0;
        local_260 = (char *)0x0;
        local_258 = 0;
        uStack_250 = 0;
        local_2a0 = FUN_031b97b4(uVar15);
        FUN_0322c554(&local_298,
                     "The image needs to be written as a DXT10 file, but no matching DXGI format was found for \'{}\'."
                     ,&DAT_044e9758,&local_2a0);
        local_258 = 0x25a;
        goto LAB_031b304c;
      }
      local_288 = &DAT_0487ef68;
      uStack_280 = 1;
      pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
      local_278 = nn::os::GetThreadId(pTVar19);
      local_268 = 0;
      local_260 = (char *)0x0;
      local_248[0] = '\0';
      local_258 = 0;
      uStack_250 = 0;
      uStack_290 = 0x10000000000;
      local_298 = local_248;
      local_270 = local_248;
      local_2a8 = FUN_031b97b4(uVar15);
      FUN_0322c554(&local_298,
                   "The image needs to be written as a DXT10 file, but no matching DXGI format was found for \'{}\'."
                   ,&DAT_044e9758,&local_2a8);
      local_260 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
      ;
      local_258 = 0x25a;
      if (local_248[0] == '\0') goto LAB_031b3058;
      sVar20 = strlen(local_248);
      pcVar22 = local_248 + (long)(int)((int)sVar20 - (uint)((int)sVar20 == 0xff)) + -0x50;
      goto LAB_031b31e0;
    }
    if (uVar6 == 6) {
      if (1 < uVar7) {
        uVar26 = 0x80040200;
        if (DAT_0487efb8 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_031b307c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_298 = (char *)0x0;
          local_288 = &DAT_0487ef68;
          uStack_280 = 1;
          pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
          local_278 = nn::os::GetThreadId(pTVar19);
          local_270 = (char *)0x0;
          local_268 = 0;
          local_260 = (char *)0x0;
          local_258 = 0;
          uStack_250 = 0;
          FUN_0322c554(&local_298,
                       "The image is both a cubemap and volume texture. This is not supported.",
                       PTR_DAT_047d1b38);
          local_258 = 0x20d;
          goto LAB_031b304c;
        }
        local_288 = &DAT_0487ef68;
        uStack_280 = 1;
        pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
        local_278 = nn::os::GetThreadId(pTVar19);
        local_298 = local_248;
        local_268 = 0;
        local_260 = (char *)0x0;
        local_258 = 0;
        uStack_250 = 0;
        local_248[0] = '\0';
        uStack_290 = 0x10000000000;
        local_270 = local_298;
        FUN_0322c554(&local_298,
                     "The image is both a cubemap and volume texture. This is not supported.",
                     PTR_DAT_047d1b38);
        local_258 = 0x20d;
        goto LAB_031b31b4;
      }
      uVar18 = 0xfe00;
      uVar21 = 0x1008;
      goto LAB_031b2780;
    }
    uVar26 = 0x80040200;
    if (DAT_0487efb8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_031b307c;
LAB_031b29a0:
      local_288 = &DAT_0487ef68;
      uStack_280 = 1;
      pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
      local_278 = nn::os::GetThreadId(pTVar19);
      local_298 = local_248;
      local_268 = 0;
      local_260 = (char *)0x0;
      local_258 = 0;
      uStack_250 = 0;
      local_248[0] = '\0';
      uStack_290 = 0x10000000000;
      local_270 = local_298;
      FUN_0322c554(&local_298,"The image is a cubemap, but has {} faces instead of the expected 6.",
                   PTR_DAT_047e5908,&local_ac);
      local_258 = 0x207;
      goto LAB_031b31b4;
    }
    if (DAT_046aaf68 != '\0') goto LAB_031b29a0;
    local_298 = (char *)0x0;
    local_288 = &DAT_0487ef68;
    uStack_280 = 1;
    pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
    local_278 = nn::os::GetThreadId(pTVar19);
    local_270 = (char *)0x0;
    local_268 = 0;
    local_260 = (char *)0x0;
    local_258 = 0;
    uStack_250 = 0;
    FUN_0322c554(&local_298,"The image is a cubemap, but has {} faces instead of the expected 6.",
                 PTR_DAT_047e5908,&local_ac);
    local_258 = 0x207;
LAB_031b304c:
    local_260 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
    ;
    FUN_0322c8e0(&local_298);
  }
  else {
    if (uVar10 < 2) {
      uVar24 = uVar24 | 0x800000;
      local_118 = uVar5;
      goto LAB_031b26a0;
    }
    uVar26 = 0x80040200;
    if (DAT_0487efb8 != '\0') {
      if (DAT_046aaf68 != '\0') goto LAB_031b2930;
      local_298 = (char *)0x0;
      local_288 = &DAT_0487ef68;
      uStack_280 = 1;
      pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
      local_278 = nn::os::GetThreadId(pTVar19);
      local_270 = (char *)0x0;
      local_268 = 0;
      local_260 = (char *)0x0;
      local_258 = 0;
      uStack_250 = 0;
      FUN_0322c554(&local_298,
                   "The image is both an array and volume texture. This is not supported.",
                   PTR_DAT_047d1b38);
      local_258 = 0x1ed;
      goto LAB_031b304c;
    }
    if (DAT_046aaf68 == '\0') goto LAB_031b307c;
LAB_031b2930:
    local_288 = &DAT_0487ef68;
    uStack_280 = 1;
    pTVar19 = (ThreadType *)nn::os::GetCurrentThread();
    local_278 = nn::os::GetThreadId(pTVar19);
    local_298 = local_248;
    local_268 = 0;
    local_260 = (char *)0x0;
    local_258 = 0;
    uStack_250 = 0;
    local_248[0] = '\0';
    uStack_290 = 0x10000000000;
    local_270 = local_298;
    FUN_0322c554(&local_298,"The image is both an array and volume texture. This is not supported.",
                 PTR_DAT_047d1b38);
    local_258 = 0x1ed;
LAB_031b31b4:
    local_260 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
    ;
    if (local_248[0] != '\0') {
      sVar20 = strlen(local_248);
      pcVar22 = local_248 + (long)(int)((int)sVar20 - (uint)((int)sVar20 == 0xff)) + -0x50;
LAB_031b31e0:
      pcVar22[0x50] = '\n';
      pcVar22[0x51] = '\0';
      FUN_0322f020(local_248);
    }
  }
LAB_031b3058:
  uVar26 = 0x80040200;
  if (((ulong)local_270 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_270 + -1,0);
  }
LAB_031b307c:
  if (local_78 == (long *)0x0) {
    if ((local_90 != 0) && (local_70 != (long *)0x0)) {
      *local_70 = (long)local_a8 - local_98;
    }
  }
  else {
    (**(code **)(*local_78 + 0x28))(local_78,&local_a8);
    plVar2 = local_78;
    local_78 = (long *)0x0;
    if (plVar2 == (long *)0x0) {
      return uVar26;
    }
    if (plVar2[1] != 0) {
      plVar1 = plVar2 + 2;
      do {
        lVar23 = *plVar1;
        cVar17 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar25) {
          *plVar1 = lVar23 + -1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      if (lVar23 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  local_90 = 0;
  if ((local_78 != (long *)0x0) && (local_78[1] != 0)) {
    plVar2 = local_78 + 2;
    do {
      lVar23 = *plVar2;
      cVar17 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar25) {
        *plVar2 = lVar23 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar23 + -1 == 0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  return uVar26;
}


