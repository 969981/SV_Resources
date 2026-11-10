/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031b41d0; name: FUN_031b41d0
 */


undefined8 FUN_031b41d0(ulong *param_1,int *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ThreadType *pTVar9;
  ulong uVar10;
  size_t sVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  char local_150 [256];
  short local_50;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  
  uStack_48 = 0;
  local_50 = 0;
  uStack_4e = 0;
  uStack_4a = 0;
  puVar1 = (undefined8 *)*param_1;
  uVar10 = param_1[1];
  sVar11 = uVar10 - (long)puVar1;
  if ((long)sVar11 < 0xe) {
    plVar7 = (long *)param_1[7];
    if (plVar7 == (long *)0x0) {
      memcpy(&local_50,puVar1,sVar11);
      *param_1 = uVar10;
    }
    else {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7,param_1,&local_50,0xe);
      if (lVar8 == 0xe) goto LAB_031b4250;
    }
    if (DAT_0487f048 == '\0') {
      if (DAT_046aaf68 == '\0') {
        return 0x80040200;
      }
    }
    else if (DAT_046aaf68 == '\0') {
      local_1a0 = (char *)0x0;
      local_190 = &DAT_0487eff8;
      uStack_188 = 1;
      pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar9);
      local_178 = (char *)0x0;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      FUN_0322c554(&local_1a0,"Failed to read header data.",PTR_DAT_047d1b38);
      local_160 = 0x13e;
      goto LAB_031b4ca8;
    }
    local_190 = &DAT_0487eff8;
    uStack_188 = 1;
    pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
    local_180 = nn::os::GetThreadId(pTVar9);
    local_1a0 = local_150;
    local_170 = 0;
    local_168 = (char *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    local_150[0] = '\0';
    local_198 = 0x10000000000;
    local_178 = local_1a0;
    FUN_0322c554(&local_1a0,"Failed to read header data.",PTR_DAT_047d1b38);
    local_160 = 0x13e;
  }
  else {
    uVar12 = *puVar1;
    uStack_48 = (undefined6)((ulong)*(undefined8 *)((long)puVar1 + 6) >> 0x10);
    local_50 = (short)uVar12;
    uStack_4e = (undefined4)((ulong)uVar12 >> 0x10);
    uStack_4a = (undefined2)((ulong)uVar12 >> 0x30);
    *param_1 = (long)puVar1 + 0xe;
LAB_031b4250:
    if (local_50 != 0x4d42) {
      if (DAT_0487f048 == '\0') {
        if (DAT_046aaf68 == '\0') {
          return 0x80040200;
        }
      }
      else if (DAT_046aaf68 == '\0') {
        local_1a0 = (char *)0x0;
        local_190 = &DAT_0487eff8;
        uStack_188 = 1;
        pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar9);
        local_178 = (char *)0x0;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        FUN_0322c554(&local_1a0,"The file is not a BMP file. Expected magic number {:x}, got {:x}.",
                     &DAT_046a1ed0,&DAT_03d76470,&local_50);
        local_160 = 0x145;
        goto LAB_031b4ca8;
      }
      local_190 = &DAT_0487eff8;
      uStack_188 = 1;
      pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar9);
      local_1a0 = local_150;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_150[0] = '\0';
      local_160 = 0;
      uStack_158 = 0;
      local_198 = 0x10000000000;
      local_178 = local_1a0;
      FUN_0322c554(&local_1a0,"The file is not a BMP file. Expected magic number {:x}, got {:x}.",
                   &DAT_046a1ed0,&DAT_03d76470,&local_50);
      local_160 = 0x145;
      goto LAB_031b4d54;
    }
    pvVar2 = (void *)*param_1;
    if ((long)(param_1[1] - (long)pvVar2) < 0x28) {
      plVar7 = (long *)param_1[7];
      if (plVar7 == (long *)0x0) {
        memcpy(param_2,pvVar2,param_1[1] - (long)pvVar2);
        *param_1 = param_1[1];
      }
      else {
        lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7,param_1,param_2,0x28);
        if (lVar8 == 0x28) goto LAB_031b43ac;
      }
      if (DAT_0487f048 == '\0') {
        if (DAT_046aaf68 == '\0') {
          return 0x80040200;
        }
      }
      else if (DAT_046aaf68 == '\0') {
        local_1a0 = (char *)0x0;
        local_190 = &DAT_0487eff8;
        uStack_188 = 1;
        pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar9);
        local_178 = (char *)0x0;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        FUN_0322c554(&local_1a0,"Failed to read header data (V3).",PTR_DAT_047d1b38);
        local_160 = 0x14d;
        goto LAB_031b4ca8;
      }
      local_190 = &DAT_0487eff8;
      uStack_188 = 1;
      pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar9);
      local_1a0 = local_150;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      local_150[0] = '\0';
      local_198 = 0x10000000000;
      local_178 = local_1a0;
      FUN_0322c554(&local_1a0,"Failed to read header data (V3).",PTR_DAT_047d1b38);
      local_160 = 0x14d;
      goto LAB_031b4d54;
    }
    memcpy(param_2,pvVar2,0x28);
    *param_1 = *param_1 + 0x28;
LAB_031b43ac:
    iVar6 = *param_2;
    uVar13 = iVar6 - 0x28;
    if ((int)uVar13 < 0) {
      if (DAT_0487f048 == '\0') {
        if (DAT_046aaf68 == '\0') {
          return 0x80040200;
        }
      }
      else if (DAT_046aaf68 == '\0') {
        local_1a0 = (char *)0x0;
        local_190 = &DAT_0487eff8;
        uStack_188 = 1;
        pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar9);
        local_178 = (char *)0x0;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        FUN_0322c554(&local_1a0,"The file header was shorter than expected.",PTR_DAT_047d1b38);
        local_160 = 0x156;
        goto LAB_031b4ca8;
      }
      local_190 = &DAT_0487eff8;
      uStack_188 = 1;
      pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar9);
      local_1a0 = local_150;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      local_150[0] = '\0';
      local_198 = 0x10000000000;
      local_178 = local_1a0;
      FUN_0322c554(&local_1a0,"The file header was shorter than expected.",PTR_DAT_047d1b38);
      local_160 = 0x156;
      goto LAB_031b4d54;
    }
    if (uVar13 < 0x44) {
      bVar5 = true;
    }
    else {
      pvVar2 = (void *)*param_1;
      uVar10 = param_1[1];
      sVar11 = uVar10 - (long)pvVar2;
      if ((long)sVar11 < 0x44) {
        plVar7 = (long *)param_1[7];
        if (plVar7 == (long *)0x0) {
          memcpy(&local_1e8,pvVar2,sVar11);
          *param_1 = uVar10;
        }
        else {
          lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7,param_1,&local_1e8,0x44);
          if (lVar8 == 0x44) goto LAB_031b4644;
        }
        if (DAT_0487f048 == '\0') {
          if (DAT_046aaf68 == '\0') {
            return 0x80040200;
          }
        }
        else if (DAT_046aaf68 == '\0') {
          local_1a0 = (char *)0x0;
          local_190 = &DAT_0487eff8;
          uStack_188 = 1;
          pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
          local_180 = nn::os::GetThreadId(pTVar9);
          local_178 = (char *)0x0;
          local_170 = 0;
          local_168 = (char *)0x0;
          local_160 = 0;
          uStack_158 = 0;
          FUN_0322c554(&local_1a0,"Failed to read header data (V4).",PTR_DAT_047d1b38);
          local_160 = 0x161;
          goto LAB_031b4ca8;
        }
        local_190 = &DAT_0487eff8;
        uStack_188 = 1;
        pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar9);
        local_1a0 = local_150;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        local_150[0] = '\0';
        local_198 = 0x10000000000;
        local_178 = local_1a0;
        FUN_0322c554(&local_1a0,"Failed to read header data (V4).",PTR_DAT_047d1b38);
        local_160 = 0x161;
        goto LAB_031b4d54;
      }
      memcpy(&local_1e8,pvVar2,0x44);
      *param_1 = (long)pvVar2 + 0x44;
LAB_031b4644:
      bVar5 = false;
      uVar13 = iVar6 - 0x6c;
    }
    if (param_1[1] < *param_1 + (ulong)uVar13) {
      plVar7 = (long *)param_1[7];
      uVar10 = 0;
      if (plVar7 != (long *)0x0) {
        uVar10 = (**(code **)(*plVar7 + 0x30))(plVar7,param_1,(ulong)uVar13);
      }
      if (uVar10 != uVar13) {
        if (DAT_0487f048 == '\0') {
          if (DAT_046aaf68 == '\0') {
            return 0x80040200;
          }
        }
        else if (DAT_046aaf68 == '\0') {
          local_1a0 = (char *)0x0;
          local_190 = &DAT_0487eff8;
          uStack_188 = 1;
          pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
          local_180 = nn::os::GetThreadId(pTVar9);
          local_178 = (char *)0x0;
          local_170 = 0;
          local_168 = (char *)0x0;
          local_160 = 0;
          uStack_158 = 0;
          FUN_0322c554(&local_1a0,"Failed to skip remaining header data.",PTR_DAT_047d1b38);
          local_160 = 0x16a;
          goto LAB_031b4ca8;
        }
        local_190 = &DAT_0487eff8;
        uStack_188 = 1;
        pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar9);
        local_1a0 = local_150;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        local_150[0] = '\0';
        local_198 = 0x10000000000;
        local_178 = local_1a0;
        FUN_0322c554(&local_1a0,"Failed to skip remaining header data.",PTR_DAT_047d1b38);
        local_160 = 0x16a;
        goto LAB_031b4d54;
      }
    }
    else {
      *param_1 = *param_1 + (ulong)uVar13;
    }
    uVar4 = *(ushort *)((long)param_2 + 0xe);
    uVar13 = (uint)uVar4;
    param_2[0xb] = (uint)uVar4;
    param_2[0xc] = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    switch(param_2[4]) {
    case 0:
      if (uVar4 < 8) {
        if ((uVar4 == 1) || (uVar4 == 4)) {
LAB_031b4978:
          *(undefined1 *)(param_2 + 10) = 1;
          goto LAB_031b4980;
        }
        break;
      }
      if (uVar4 == 0x20) goto LAB_031b4980;
      if (uVar4 != 0x18) {
        if (uVar4 == 8) goto LAB_031b4978;
        break;
      }
      iVar6 = 0x5e;
LAB_031b4984:
      param_2[0xc] = iVar6;
LAB_031b4988:
      if (0x10000 < (uint)param_2[1]) {
        if (DAT_0487f048 == '\0') {
          if (DAT_046aaf68 == '\0') {
            return 0x80040200;
          }
        }
        else if (DAT_046aaf68 == '\0') {
          local_1a0 = (char *)0x0;
          local_190 = &DAT_0487eff8;
          uStack_188 = 1;
          pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
          local_180 = nn::os::GetThreadId(pTVar9);
          local_178 = (char *)0x0;
          local_170 = 0;
          local_168 = (char *)0x0;
          local_160 = 0;
          uStack_158 = 0;
          FUN_0322c554(&local_1a0,"Image specifies width > 65536. Header corrupted?",
                       PTR_DAT_047d1b38);
          local_160 = 0x1d3;
          goto LAB_031b4ca8;
        }
        local_190 = &DAT_0487eff8;
        uStack_188 = 1;
        pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar9);
        local_1a0 = local_150;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        local_150[0] = '\0';
        local_198 = 0x10000000000;
        local_178 = local_1a0;
        FUN_0322c554(&local_1a0,"Image specifies width > 65536. Header corrupted?",PTR_DAT_047d1b38)
        ;
        local_160 = 0x1d3;
        goto LAB_031b4d54;
      }
      if (0x10000 < (uint)param_2[2]) {
        if (DAT_0487f048 == '\0') {
          if (DAT_046aaf68 == '\0') {
            return 0x80040200;
          }
        }
        else if (DAT_046aaf68 == '\0') {
          local_1a0 = (char *)0x0;
          local_190 = &DAT_0487eff8;
          uStack_188 = 1;
          pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
          local_180 = nn::os::GetThreadId(pTVar9);
          local_178 = (char *)0x0;
          local_170 = 0;
          local_168 = (char *)0x0;
          local_160 = 0;
          uStack_158 = 0;
          FUN_0322c554(&local_1a0,"Image specifies height > 65536. Header corrupted?",
                       PTR_DAT_047d1b38);
          local_160 = 0x1db;
          goto LAB_031b4ca8;
        }
        local_190 = &DAT_0487eff8;
        uStack_188 = 1;
        pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar9);
        local_1a0 = local_150;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        local_150[0] = '\0';
        local_198 = 0x10000000000;
        local_178 = local_1a0;
        FUN_0322c554(&local_1a0,"Image specifies height > 65536. Header corrupted?",PTR_DAT_047d1b38
                    );
        local_160 = 0x1db;
        goto LAB_031b4d54;
      }
      uVar3 = param_2[5];
      param_2[0xd] = uVar3;
      if (uVar3 < 0x40000001) {
        uVar13 = uVar13 * param_2[1] + 0x1f >> 3 & 0x1ffffffc;
        param_2[0xe] = uVar13;
        if (uVar3 != 0) {
          return 0;
        }
        if (param_2[4] == 0) {
          param_2[0xd] = uVar13 * param_2[2];
          return 0;
        }
        if (DAT_0487f048 == '\0') {
          if (DAT_046aaf68 == '\0') {
            return 0x80040200;
          }
        }
        else if (DAT_046aaf68 == '\0') {
          local_1a0 = (char *)0x0;
          local_190 = &DAT_0487eff8;
          uStack_188 = 1;
          pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
          local_180 = nn::os::GetThreadId(pTVar9);
          local_178 = (char *)0x0;
          local_170 = 0;
          local_168 = (char *)0x0;
          local_160 = 0;
          uStack_158 = 0;
          FUN_0322c554(&local_1a0,"The data size wasn\'t specified in the header.",PTR_DAT_047d1b38)
          ;
          local_160 = 0x1ed;
          goto LAB_031b4ca8;
        }
        local_190 = &DAT_0487eff8;
        uStack_188 = 1;
        pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar9);
        local_1a0 = local_150;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        local_150[0] = '\0';
        local_198 = 0x10000000000;
        local_178 = local_1a0;
        FUN_0322c554(&local_1a0,"The data size wasn\'t specified in the header.",PTR_DAT_047d1b38);
        local_160 = 0x1ed;
        goto LAB_031b4d54;
      }
      if (DAT_0487f048 == '\0') {
        if (DAT_046aaf68 == '\0') {
          return 0x80040200;
        }
LAB_031b4da8:
        local_190 = &DAT_0487eff8;
        uStack_188 = 1;
        pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar9);
        local_1a0 = local_150;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        local_150[0] = '\0';
        local_198 = 0x10000000000;
        local_178 = local_1a0;
        FUN_0322c554(&local_1a0,"Image specifies data size > 1GiB. Header corrupted?",
                     PTR_DAT_047d1b38);
        local_160 = 0x1e3;
        goto LAB_031b4d54;
      }
      if (DAT_046aaf68 != '\0') goto LAB_031b4da8;
      local_1a0 = (char *)0x0;
      local_190 = &DAT_0487eff8;
      uStack_188 = 1;
      pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar9);
      local_178 = (char *)0x0;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      FUN_0322c554(&local_1a0,"Image specifies data size > 1GiB. Header corrupted?",PTR_DAT_047d1b38
                  );
      local_160 = 0x1e3;
      goto LAB_031b4ca8;
    case 1:
      if (uVar4 == 8) {
LAB_031b47c4:
        *(undefined2 *)(param_2 + 10) = 0x101;
LAB_031b4980:
        iVar6 = 0x5c;
        goto LAB_031b4984;
      }
      break;
    case 2:
      if (uVar4 == 4) goto LAB_031b47c4;
      break;
    case 3:
      if ((uVar4 == 0x20) || (uVar4 == 0x10)) {
        if (bVar5) {
          puVar1 = (undefined8 *)*param_1;
          uVar10 = param_1[1];
          sVar11 = uVar10 - (long)puVar1;
          if ((long)sVar11 < 0xc) {
            plVar7 = (long *)param_1[7];
            if (plVar7 == (long *)0x0) {
              memcpy(&local_1a0,puVar1,sVar11);
              *param_1 = uVar10;
              return 0x80040200;
            }
            lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7,param_1,&local_1a0,0xc);
            if (lVar8 != 0xc) {
              return 0x80040200;
            }
          }
          else {
            local_1a0 = (char *)*puVar1;
            local_198 = CONCAT44(local_198._4_4_,*(undefined4 *)(puVar1 + 1));
            *param_1 = (long)puVar1 + 0xc;
          }
          uStack_1dc = 0;
          uVar13 = param_2[0xb];
          local_1e8 = (undefined4)local_1a0;
          uStack_1e4 = local_1a0._4_4_;
          local_1e0 = (undefined4)local_198;
        }
        else {
        }
        iVar6 = FUN_031b9910(local_1e8,uStack_1e4,local_1e0,uStack_1dc,uVar13);
        param_2[0xc] = iVar6;
        if (iVar6 != 0) goto LAB_031b4988;
      }
    }
    if (DAT_0487f048 == '\0') {
      if (DAT_046aaf68 == '\0') {
        return 0x80040200;
      }
    }
    else if (DAT_046aaf68 == '\0') {
      local_1a0 = (char *)0x0;
      local_190 = &DAT_0487eff8;
      uStack_188 = 1;
      pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar9);
      local_178 = (char *)0x0;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      FUN_0322c554(&local_1a0,"Unknown or unsupported BMP encoding.",PTR_DAT_047d1b38);
      local_160 = 0x1cb;
LAB_031b4ca8:
      local_168 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
      ;
      FUN_0322c8e0(&local_1a0);
      goto LAB_031b4cb4;
    }
    local_190 = &DAT_0487eff8;
    uStack_188 = 1;
    pTVar9 = (ThreadType *)nn::os::GetCurrentThread();
    local_180 = nn::os::GetThreadId(pTVar9);
    local_1a0 = local_150;
    local_170 = 0;
    local_168 = (char *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    local_150[0] = '\0';
    local_198 = 0x10000000000;
    local_178 = local_1a0;
    FUN_0322c554(&local_1a0,"Unknown or unsupported BMP encoding.",PTR_DAT_047d1b38);
    local_160 = 0x1cb;
  }
LAB_031b4d54:
  local_168 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
  ;
  if (local_150[0] != '\0') {
    sVar11 = strlen(local_150);
    (local_150 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[0] = '\n';
    (local_150 + (int)((int)sVar11 - (uint)((int)sVar11 == 0xff)))[1] = '\0';
    printf("%s",local_150);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_031b4cb4:
  if (((ulong)local_178 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_178 + -1,0);
  }
  return 0x80040200;
}


