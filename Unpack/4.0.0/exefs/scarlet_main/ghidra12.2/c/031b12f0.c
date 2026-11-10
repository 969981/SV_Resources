/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031b12f0; name: FUN_031b12f0
 */


undefined8 FUN_031b12f0(long *param_1,int *param_2)

{
  void *__src;
  undefined8 *__src_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ThreadType *pTVar6;
  size_t sVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  uint5 local_1c8;
  undefined3 uStack_1c3;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  char *local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  char local_160 [256];
  
  __src = (void *)*param_1;
  if (param_1[1] - (long)__src < 0x80) {
    plVar4 = (long *)param_1[7];
    if (plVar4 == (long *)0x0) {
      memcpy(param_2,__src,param_1[1] - (long)__src);
      *param_1 = param_1[1];
    }
    else {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4,param_1,param_2,0x80);
      if (lVar5 == 0x80) goto LAB_031b136c;
    }
    if (DAT_0487efb8 == '\0') {
      if (DAT_046aaf68 == '\0') {
        return 0x80040200;
      }
    }
    else if (DAT_046aaf68 == '\0') {
      local_1b0 = (char *)0x0;
      local_1a0 = &DAT_0487ef68;
      uStack_198 = 1;
      pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar6);
      local_188 = (char *)0x0;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      FUN_0322c554(&local_1b0,"Failed to read file header.",PTR_DAT_047d1b38);
      local_170 = 0xff;
      goto LAB_031b1da8;
    }
    local_1a0 = &DAT_0487ef68;
    uStack_198 = 1;
    pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
    local_190 = nn::os::GetThreadId(pTVar6);
    local_1b0 = local_160;
    local_180 = 0;
    local_178 = (char *)0x0;
    local_170 = 0;
    uStack_168 = 0;
    local_160[0] = '\0';
    uStack_1a8 = 0x10000000000;
    local_188 = local_1b0;
    FUN_0322c554(&local_1b0,"Failed to read file header.",PTR_DAT_047d1b38);
    local_170 = 0xff;
LAB_031b1624:
    local_178 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
    ;
    if (local_160[0] == '\0') goto LAB_031b1db4;
    sVar7 = strlen(local_160);
    pcVar9 = local_160 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff)) + -0x50;
  }
  else {
    memcpy(param_2,__src,0x80);
    *param_1 = *param_1 + 0x80;
LAB_031b136c:
    if (*param_2 != 0x20534444) {
      if (DAT_0487efb8 == '\0') {
        if (DAT_046aaf68 == '\0') {
          return 0x80040200;
        }
      }
      else if (DAT_046aaf68 == '\0') {
        local_1b0 = (char *)0x0;
        local_1a0 = &DAT_0487ef68;
        uStack_198 = 1;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar6);
        local_188 = (char *)0x0;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        FUN_0322c554(&local_1b0,"The file is not a recognized DDS file.",PTR_DAT_047d1b38);
        local_170 = 0x105;
        goto LAB_031b1da8;
      }
      local_1a0 = &DAT_0487ef68;
      uStack_198 = 1;
      pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar6);
      local_1b0 = local_160;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      local_160[0] = '\0';
      uStack_1a8 = 0x10000000000;
      local_188 = local_1b0;
      FUN_0322c554(&local_1b0,"The file is not a recognized DDS file.",PTR_DAT_047d1b38);
      local_170 = 0x105;
      goto LAB_031b1624;
    }
    piVar10 = param_2 + 1;
    if (*piVar10 == 0x7c) {
      piVar10 = param_2 + 0x13;
      *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 2) >> 3 & 1;
      if (*piVar10 != 0x20) {
        if (DAT_0487efb8 == '\0') {
          if (DAT_046aaf68 == '\0') {
            return 0x80040200;
          }
        }
        else if (DAT_046aaf68 == '\0') {
          local_1b0 = (char *)0x0;
          local_1a0 = &DAT_0487ef68;
          uStack_198 = 1;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar6);
          local_188 = (char *)0x0;
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          FUN_0322c554(&local_1b0,
                       "The pixel format size {} doesn\'t match the expected value of 32.",
                       &DAT_046a1d60,piVar10);
          local_170 = 0x113;
          goto LAB_031b1da8;
        }
        local_1a0 = &DAT_0487ef68;
        uStack_198 = 1;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar6);
        local_1b0 = local_160;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        local_160[0] = '\0';
        uStack_1a8 = 0x10000000000;
        local_188 = local_1b0;
        FUN_0322c554(&local_1b0,"The pixel format size {} doesn\'t match the expected value of 32.",
                     &DAT_046a1d60,piVar10);
        local_170 = 0x113;
        goto LAB_031b17e0;
      }
      if (((uint)param_2[0x14] >> 2 & 1) != 0) {
        uVar1 = param_2[0x15];
        if ((int)uVar1 < 0x32495441) {
          if ((int)uVar1 < 0x30315844) {
            switch(uVar1) {
            case 0x6f:
              iVar8 = 0;
              iVar3 = 0x46;
              break;
            case 0x70:
              iVar8 = 0;
              iVar3 = 0x3c;
              break;
            case 0x71:
              iVar8 = 0;
              iVar3 = 0x32;
              break;
            case 0x72:
              iVar8 = 0;
              iVar3 = 0x28;
              break;
            case 0x73:
              iVar8 = 0;
              iVar3 = 0x1e;
              break;
            case 0x74:
              iVar8 = 0;
              iVar3 = 10;
              break;
            default:
              if (uVar1 != 0x24) goto LAB_031b1be4;
              iVar3 = 0x35;
              iVar8 = 0;
            }
            goto LAB_031b1d10;
          }
          if (uVar1 != 0x30315844) {
            if (uVar1 == 0x31495441) {
LAB_031b1a98:
              iVar3 = 0x96;
              iVar8 = 0;
            }
            else {
              if (uVar1 != 0x31545844) goto LAB_031b1be4;
              iVar3 = 0x78;
              iVar8 = 0;
            }
            goto LAB_031b1d10;
          }
          __src_00 = (undefined8 *)*param_1;
          lVar5 = param_1[1];
          sVar7 = lVar5 - (long)__src_00;
          if (0x13 < (long)sVar7) {
            _local_1c8 = *__src_00;
            uStack_1c0 = __src_00[1];
            local_1b8 = *(undefined4 *)(__src_00 + 2);
            *param_1 = (long)__src_00 + 0x14;
LAB_031b1cb8:
            lVar5 = 1;
            piVar10 = &DAT_0487f19c;
            do {
              if (piVar10[-0xe] == (int)local_1c8) {
                lVar5 = lVar5 + -1;
LAB_031b1d08:
                iVar3 = (int)lVar5;
                if (iVar3 != 0) {
                  iVar8 = uStack_1c0._4_4_;
                  goto LAB_031b1d10;
                }
                break;
              }
              if (*piVar10 == (int)local_1c8) goto LAB_031b1d08;
              lVar5 = lVar5 + 2;
              piVar10 = piVar10 + 0x1c;
            } while (lVar5 != 0x117);
            if (DAT_0487efb8 == '\0') {
              if (DAT_046aaf68 == '\0') {
                return 0x80040200;
              }
            }
            else if (DAT_046aaf68 == '\0') {
              local_1b0 = (char *)0x0;
              local_1a0 = &DAT_0487ef68;
              uStack_198 = 1;
              pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
              local_190 = nn::os::GetThreadId(pTVar6);
              local_188 = (char *)0x0;
              local_180 = 0;
              local_178 = (char *)0x0;
              local_170 = 0;
              uStack_168 = 0;
              FUN_0322c554(&local_1b0,"The DXGI format {} has no equivalent image format.",
                           &DAT_046a1d60,&local_1c8);
              local_170 = 0x12a;
              goto LAB_031b1da8;
            }
            local_1a0 = &DAT_0487ef68;
            uStack_198 = 1;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar6);
            local_1b0 = local_160;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            local_160[0] = '\0';
            uStack_1a8 = 0x10000000000;
            local_188 = local_1b0;
            FUN_0322c554(&local_1b0,"The DXGI format {} has no equivalent image format.",
                         &DAT_046a1d60,&local_1c8);
            local_170 = 0x12a;
            goto LAB_031b1624;
          }
          plVar4 = (long *)param_1[7];
          if (plVar4 == (long *)0x0) {
            memcpy(&local_1c8,__src_00,sVar7);
            *param_1 = lVar5;
          }
          else {
            lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4,param_1,&local_1c8,0x14);
            if (lVar5 == 0x14) goto LAB_031b1cb8;
          }
          if (DAT_0487efb8 == '\0') {
            if (DAT_046aaf68 == '\0') {
              return 0x80040200;
            }
LAB_031b1fd0:
            local_1a0 = &DAT_0487ef68;
            uStack_198 = 1;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar6);
            local_1b0 = local_160;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            local_160[0] = '\0';
            uStack_1a8 = 0x10000000000;
            local_188 = local_1b0;
            FUN_0322c554(&local_1b0,"Failed to read file header.",PTR_DAT_047d1b38);
            local_170 = 0x122;
            goto LAB_031b1624;
          }
          if (DAT_046aaf68 != '\0') goto LAB_031b1fd0;
          local_1b0 = (char *)0x0;
          local_1a0 = &DAT_0487ef68;
          uStack_198 = 1;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar6);
          local_188 = (char *)0x0;
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          FUN_0322c554(&local_1b0,"Failed to read file header.",PTR_DAT_047d1b38);
          local_170 = 0x122;
LAB_031b1da8:
          local_178 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
          ;
          FUN_0322c8e0(&local_1b0);
          goto LAB_031b1db4;
        }
        if ((int)uVar1 < 0x35545844) {
          if ((int)uVar1 < 0x33545844) {
            if (uVar1 == 0x32495441) {
LAB_031b1a8c:
              iVar8 = 0;
              iVar3 = 0xa0;
              goto LAB_031b1d10;
            }
            if (uVar1 == 0x32545844) goto LAB_031b1aa4;
          }
          else {
            if (uVar1 == 0x33545844) {
LAB_031b1aa4:
              iVar8 = 0;
              iVar3 = 0x82;
              goto LAB_031b1d10;
            }
            if (uVar1 == 0x34545844) goto LAB_031b1a80;
          }
LAB_031b1be4:
          local_1c8 = (uint5)uVar1;
          if (DAT_0487efb8 == '\0') {
            if (DAT_046aaf68 == '\0') {
              return 0x80040200;
            }
          }
          else if (DAT_046aaf68 == '\0') {
            local_1b0 = (char *)0x0;
            local_1a0 = &DAT_0487ef68;
            uStack_198 = 1;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar6);
            local_188 = (char *)0x0;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            FUN_0322c554(&local_1b0,"The FourCC code \'{}\' was not recognized.",PTR_DAT_047e5900,
                         &local_1c8);
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
            ;
            local_170 = 0x13c;
            FUN_0322c8e0(&local_1b0);
            goto LAB_031b1c78;
          }
          local_1a0 = &DAT_0487ef68;
          uStack_198 = 1;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar6);
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          local_160[0] = '\0';
          uStack_1a8 = 0x10000000000;
          local_1b0 = local_160;
          local_188 = local_160;
          FUN_0322c554(&local_1b0,"The FourCC code \'{}\' was not recognized.",PTR_DAT_047e5900,
                       &local_1c8);
          local_178 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
          ;
          local_170 = 0x13c;
          if (local_160[0] != '\0') {
            sVar7 = strlen(local_160);
            (local_160 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[0] = '\n';
            (local_160 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[1] = '\0';
            FUN_0322f020(local_160);
          }
LAB_031b1c78:
          if (((ulong)local_188 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
          }
          return 0x80040200;
        }
        if ((int)uVar1 < 0x53354342) {
          if (uVar1 == 0x35545844) {
LAB_031b1a80:
            iVar8 = 0;
            iVar3 = 0x8c;
          }
          else {
            if (uVar1 != 0x53344342) goto LAB_031b1be4;
            iVar8 = 0;
            iVar3 = 0x97;
          }
        }
        else {
          if (uVar1 != 0x53354342) {
            if (uVar1 == 0x55344342) goto LAB_031b1a98;
            if (uVar1 == 0x55354342) goto LAB_031b1a8c;
            goto LAB_031b1be4;
          }
          iVar8 = 0;
          iVar3 = 0xa1;
        }
LAB_031b1d10:
        uVar1 = param_2[0x1c];
        *(byte *)(param_2 + 0x22) = *(byte *)(param_2 + 0x1b) >> 3 & 1;
        uVar2 = uVar1 >> 9 & 1;
        param_2[0x21] = iVar3;
        *(byte *)((long)param_2 + 0x8a) = (byte)(uVar1 >> 0x15) & 1;
        *(char *)((long)param_2 + 0x89) = (char)uVar2;
        if (((uVar1 >> 0x15 & 1) == 0) || (uVar2 == 0)) {
          if (iVar8 < 2) {
            iVar8 = 1;
          }
          param_2[0x23] = iVar8;
          return 0;
        }
        if (DAT_0487efb8 == '\0') {
          if (DAT_046aaf68 == '\0') {
            return 0x80040200;
          }
        }
        else if (DAT_046aaf68 == '\0') {
          local_1b0 = (char *)0x0;
          local_1a0 = &DAT_0487ef68;
          uStack_198 = 1;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar6);
          local_188 = (char *)0x0;
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          FUN_0322c554(&local_1b0,"The header specifies both the VOLUME and CUBEMAP flags.",
                       PTR_DAT_047d1b38);
          local_170 = 0x15f;
          goto LAB_031b1da8;
        }
        local_1a0 = &DAT_0487ef68;
        uStack_198 = 1;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar6);
        local_1b0 = local_160;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        local_160[0] = '\0';
        uStack_1a8 = 0x10000000000;
        local_188 = local_1b0;
        FUN_0322c554(&local_1b0,"The header specifies both the VOLUME and CUBEMAP flags.",
                     PTR_DAT_047d1b38);
        local_170 = 0x15f;
        goto LAB_031b1624;
      }
      if ((param_2[0x14] & 0x20043U) == 0) {
        if (DAT_0487efb8 == '\0') {
          if (DAT_046aaf68 == '\0') {
            return 0x80040200;
          }
        }
        else if (DAT_046aaf68 == '\0') {
          local_1b0 = (char *)0x0;
          local_1a0 = &DAT_0487ef68;
          uStack_198 = 1;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar6);
          local_188 = (char *)0x0;
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          FUN_0322c554(&local_1b0,
                       "The image format is neither specified as a pixel mask nor as a FourCC code."
                       ,PTR_DAT_047d1b38);
          local_170 = 0x152;
          goto LAB_031b1da8;
        }
        local_1a0 = &DAT_0487ef68;
        uStack_198 = 1;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar6);
        local_1b0 = local_160;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        local_160[0] = '\0';
        uStack_1a8 = 0x10000000000;
        local_188 = local_1b0;
        FUN_0322c554(&local_1b0,
                     "The image format is neither specified as a pixel mask nor as a FourCC code.",
                     PTR_DAT_047d1b38);
        local_170 = 0x152;
        goto LAB_031b1624;
      }
      piVar10 = param_2 + 0x16;
      piVar11 = param_2 + 0x17;
      piVar12 = param_2 + 0x18;
      piVar13 = param_2 + 0x19;
      piVar14 = param_2 + 0x1a;
      iVar3 = FUN_031b9910(*piVar11,*piVar12,*piVar13,*piVar14,*piVar10);
      if (iVar3 != 0) {
        iVar8 = 0;
        goto LAB_031b1d10;
      }
      if (DAT_0487efb8 == '\0') {
        if (DAT_046aaf68 == '\0') {
          return 0x80040200;
        }
      }
      else if (DAT_046aaf68 == '\0') {
        local_1b0 = (char *)0x0;
        local_1a0 = &DAT_0487ef68;
        uStack_198 = 1;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar6);
        local_188 = (char *)0x0;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        FUN_0322c554(&local_1b0,
                     "The pixel mask specified was not recognized (R: 0x{%08x}, G: 0x{%08x}, B: 0x{%08x}, A: 0x{%08x}, BPP: {})."
                     ,&DAT_046a1e08,piVar11,piVar12,piVar13,piVar14,piVar10);
        local_170 = 0x14c;
        goto LAB_031b1da8;
      }
      local_1a0 = &DAT_0487ef68;
      uStack_198 = 1;
      pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar6);
      local_180 = 0;
      local_178 = (char *)0x0;
      local_160[0] = '\0';
      local_170 = 0;
      uStack_168 = 0;
      uStack_1a8 = 0x10000000000;
      local_1b0 = local_160;
      local_188 = local_160;
      FUN_0322c554(&local_1b0,
                   "The pixel mask specified was not recognized (R: 0x{%08x}, G: 0x{%08x}, B: 0x{%08x}, A: 0x{%08x}, BPP: {})."
                   ,&DAT_046a1e08,piVar11,piVar12,piVar13,piVar14,piVar10);
      local_178 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
      ;
      local_170 = 0x14c;
      if (local_160[0] == '\0') goto LAB_031b1db4;
      sVar7 = strlen(local_160);
      pcVar9 = local_160 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff)) + -0x50;
    }
    else {
      if (DAT_0487efb8 == '\0') {
        if (DAT_046aaf68 == '\0') {
          return 0x80040200;
        }
      }
      else if (DAT_046aaf68 == '\0') {
        local_1b0 = (char *)0x0;
        local_1a0 = &DAT_0487ef68;
        uStack_198 = 1;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar6);
        local_188 = (char *)0x0;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        FUN_0322c554(&local_1b0,"The file header size {} doesn\'t match the expected size of 124.",
                     &DAT_046a1d60,piVar10);
        local_170 = 0x10b;
        goto LAB_031b1da8;
      }
      local_1a0 = &DAT_0487ef68;
      uStack_198 = 1;
      pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar6);
      local_1b0 = local_160;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      local_160[0] = '\0';
      uStack_1a8 = 0x10000000000;
      local_188 = local_1b0;
      FUN_0322c554(&local_1b0,"The file header size {} doesn\'t match the expected size of 124.",
                   &DAT_046a1d60,piVar10);
      local_170 = 0x10b;
LAB_031b17e0:
      local_178 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
      ;
      if (local_160[0] == '\0') goto LAB_031b1db4;
      sVar7 = strlen(local_160);
      pcVar9 = local_160 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff)) + -0x50;
    }
  }
  pcVar9[0x50] = '\n';
  pcVar9[0x51] = '\0';
  FUN_0322f020(local_160);
LAB_031b1db4:
  if (((ulong)local_188 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
  }
  return 0x80040200;
}


