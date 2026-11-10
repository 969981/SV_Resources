/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033a4724; name: FUN_033a4724
 */


ulong FUN_033a4724(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  ThreadType *pTVar4;
  size_t sVar5;
  int iVar6;
  long lVar7;
  FILE *pFVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  int *piVar14;
  long local_1d0;
  ulong local_1c8;
  char *local_1c0;
  undefined8 uStack_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  undefined8 local_178;
  char local_170 [256];
  ulong local_70 [2];
  
  if (DAT_0488e150 < 4) {
    if (DAT_046aaf68 != '\0') goto LAB_033a4f80;
  }
  else {
    if (DAT_046aaf68 == '\0') {
      local_1c0 = (char *)0x0;
      local_1b0 = &DAT_0488e100;
      local_1a8 = 4;
      pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
      local_1a0 = nn::os::GetThreadId(pTVar4);
      local_198 = (char *)0x0;
      local_190 = 0;
      local_188 = (char *)0x0;
      local_180 = 0;
      local_178 = 0;
      FUN_0322c554(&local_1c0,"CalcSig",PTR_DAT_047d1b38);
      local_188 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
      ;
      local_180 = 0x253;
      local_1a8._0_2_ = CONCAT11(1,(undefined1)local_1a8);
      FUN_0322c8e0(&local_1c0);
    }
    else {
LAB_033a4f80:
      local_1b0 = &DAT_0488e100;
      local_1a8 = 4;
      pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
      local_1a0 = nn::os::GetThreadId(pTVar4);
      local_190 = 0;
      local_188 = (char *)0x0;
      local_180 = 0;
      local_178 = 0;
      local_170[0] = '\0';
      uStack_1b8 = 0x10000000000;
      local_1c0 = local_170;
      local_198 = local_170;
      FUN_0322c554(&local_1c0,"CalcSig",PTR_DAT_047d1b38);
      local_188 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
      ;
      local_180 = 0x253;
      local_1a8._0_2_ = CONCAT11(1,(undefined1)local_1a8);
      if (local_170[0] != '\0') {
        sVar5 = strlen(local_170);
        (local_170 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[0] = '\n';
        (local_170 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[1] = '\0';
        printf("%s",local_170);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
    }
    if (((ulong)local_198 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_198 + -1,0);
    }
  }
  lVar7 = (long)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) == 0) {
    local_1c8 = 0;
  }
  else {
    local_1c8 = 0xffffffffffffffff;
    pbVar12 = *(byte **)(param_1 + 0x18);
    do {
      local_1c8 = *(ulong *)(&DAT_03d76748 + (local_1c8 & 0xff ^ (ulong)*pbVar12) * 8) ^
                  local_1c8 >> 8;
      lVar7 = lVar7 + -1;
      pbVar12 = pbVar12 + 1;
    } while (lVar7 != 0);
    local_1c8 = ~local_1c8;
  }
  if (DAT_0488e150 < 4) {
    if (DAT_046aaf68 == '\0') goto LAB_033a48e0;
LAB_033a5034:
    local_1c0 = (char *)0x0;
    local_1b0 = &DAT_0488e100;
    local_1a8 = 4;
    pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
    local_1a0 = nn::os::GetThreadId(pTVar4);
    local_190 = 0;
    local_188 = (char *)0x0;
    local_180 = 0;
    local_178 = 0;
    uStack_1b8 = 0x10000000000;
    local_170[0] = '\0';
    local_1d0 = (long)*(int *)(param_1 + 0x20);
    local_1c0 = local_170;
    local_198 = local_170;
    FUN_0322c554(&local_1c0,"Encoded bodies {}b -> {}",&DAT_047b2fc8,&local_1d0,&local_1c8);
    local_188 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
    ;
    local_180 = 0x256;
    if (local_170[0] != '\0') {
      sVar5 = strlen(local_170);
      (local_170 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[0] = '\n';
      (local_170 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[1] = '\0';
      printf("%s",local_170);
      fflush(*(FILE **)PTR_stdout_047cb860);
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_033a5034;
    local_1c0 = (char *)0x0;
    local_1b0 = &DAT_0488e100;
    local_1a8 = 4;
    pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
    local_1a0 = nn::os::GetThreadId(pTVar4);
    local_198 = (char *)0x0;
    local_190 = 0;
    local_188 = (char *)0x0;
    local_180 = 0;
    local_178 = 0;
    local_70[0] = (ulong)*(int *)(param_1 + 0x20);
    FUN_0322c554(&local_1c0,"Encoded bodies {}b -> {}",&DAT_047b2fc8,local_70,&local_1c8);
    local_188 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
    ;
    local_180 = 0x256;
    FUN_0322c8e0(&local_1c0);
  }
  if (((ulong)local_198 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_198 + -1,0);
  }
LAB_033a48e0:
  puVar3 = PTR_DAT_047e5b08;
  local_70[0] = local_1c8;
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x30);
    puVar1 = puVar10 + *(int *)(param_1 + 0x38);
    pFVar8 = *(FILE **)PTR_stdout_047cb860;
    do {
      uVar9 = local_70[0];
      pbVar12 = (byte *)*puVar10;
      sVar5 = strlen((char *)pbVar12);
      uVar9 = ~uVar9;
      if (sVar5 << 0x20 != 0) {
        lVar7 = (long)(sVar5 << 0x20) >> 0x20;
        pbVar13 = pbVar12;
        if ((sVar5 & 1) != 0) {
          pbVar13 = pbVar12 + 1;
          uVar9 = *(ulong *)(&DAT_03d76748 + (uVar9 & 0xff ^ (ulong)*pbVar12) * 8) ^ uVar9 >> 8;
          lVar7 = lVar7 + -1;
        }
        if ((int)sVar5 != 1) {
          do {
            uVar9 = *(ulong *)(&DAT_03d76748 + (uVar9 & 0xff ^ (ulong)*pbVar13) * 8) ^ uVar9 >> 8;
            pbVar12 = pbVar13 + 1;
            pbVar13 = pbVar13 + 2;
            uVar9 = *(ulong *)(&DAT_03d76748 + (uVar9 & 0xff ^ (ulong)*pbVar12) * 8) ^ uVar9 >> 8;
            lVar7 = lVar7 + -2;
          } while (lVar7 != 0);
        }
      }
      local_70[0] = ~uVar9;
      if (DAT_0488e150 < 4) {
        if (DAT_046aaf68 != '\0') goto LAB_033a4a54;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_1c0 = (char *)0x0;
          local_1b0 = &DAT_0488e100;
          local_1a8 = 4;
          pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
          local_1a0 = nn::os::GetThreadId(pTVar4);
          local_178 = 0;
          local_198 = (char *)0x0;
          local_190 = 0;
          local_188 = (char *)0x0;
          local_180 = 0;
          FUN_0322c554(&local_1c0,"String \'{}\' -> {}",puVar3,puVar10,local_70);
          local_188 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
          ;
          local_180 = 0x21b;
          FUN_0322c8e0(&local_1c0);
        }
        else {
LAB_033a4a54:
          local_1c0 = (char *)0x0;
          local_1b0 = &DAT_0488e100;
          local_1a8 = 4;
          pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
          local_1a0 = nn::os::GetThreadId(pTVar4);
          local_190 = 0;
          local_188 = (char *)0x0;
          local_180 = 0;
          local_178 = 0;
          local_170[0] = '\0';
          uStack_1b8 = 0x10000000000;
          local_1c0 = local_170;
          local_198 = local_170;
          FUN_0322c554(&local_1c0,"String \'{}\' -> {}",puVar3,puVar10,local_70);
          local_188 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
          ;
          local_180 = 0x21b;
          if (local_170[0] != '\0') {
            sVar5 = strlen(local_170);
            (local_170 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[0] = '\n';
            (local_170 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[1] = '\0';
            printf("%s",local_170);
            fflush(pFVar8);
          }
        }
        if (((ulong)local_198 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_198 + -1,0);
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar1);
  }
  iVar6 = *(int *)(param_1 + 0xe0);
  local_1c8 = local_70[0];
  if (0 < iVar6) {
    pFVar8 = *(FILE **)PTR_stdout_047cb860;
    lVar7 = 0;
    do {
      lVar11 = *(long *)(param_1 + 0xd8);
      pbVar12 = (byte *)(lVar11 + lVar7 * 0x18);
      uVar9 = *(ulong *)(&DAT_03d76748 + (~local_1c8 & 0xff ^ (ulong)*pbVar12) * 8) ^
              ~local_1c8 >> 8;
      uVar9 = *(ulong *)(&DAT_03d76748 + (uVar9 & 0xff ^ (ulong)pbVar12[1]) * 8) ^ uVar9 >> 8;
      uVar9 = *(ulong *)(&DAT_03d76748 + (uVar9 & 0xff ^ (ulong)pbVar12[2]) * 8) ^ uVar9 >> 8;
      local_1c8 = *(ulong *)(&DAT_03d76748 + (uVar9 & 0xff ^ (ulong)pbVar12[3]) * 8) ^
                  uVar9 >> 8 ^ 0xffffffffffffffff;
      if (DAT_0488e150 < 4) {
        if (DAT_046aaf68 != '\0') goto LAB_033a4d64;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_1c0 = (char *)0x0;
          local_1b0 = &DAT_0488e100;
          local_1a8 = 4;
          pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
          local_1a0 = nn::os::GetThreadId(pTVar4);
          local_178 = 0;
          local_198 = (char *)0x0;
          local_190 = 0;
          local_188 = (char *)0x0;
          local_180 = 0;
          FUN_0322c554(&local_1c0,"NameId {} -> {}",&DAT_047b2fe0,pbVar12,&local_1c8);
          local_188 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
          ;
          local_180 = 0x25c;
          FUN_0322c8e0(&local_1c0);
        }
        else {
LAB_033a4d64:
          local_1c0 = (char *)0x0;
          local_1b0 = &DAT_0488e100;
          local_1a8 = 4;
          pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
          local_1a0 = nn::os::GetThreadId(pTVar4);
          local_190 = 0;
          local_188 = (char *)0x0;
          local_180 = 0;
          local_178 = 0;
          local_170[0] = '\0';
          uStack_1b8 = 0x10000000000;
          local_1c0 = local_170;
          local_198 = local_170;
          FUN_0322c554(&local_1c0,"NameId {} -> {}",&DAT_047b2fe0,pbVar12,&local_1c8);
          local_188 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
          ;
          local_180 = 0x25c;
          if (local_170[0] != '\0') {
            sVar5 = strlen(local_170);
            (local_170 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[0] = '\n';
            (local_170 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[1] = '\0';
            printf("%s",local_170);
            fflush(pFVar8);
          }
        }
        if (((ulong)local_198 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_198 + -1,0);
        }
      }
      local_1c8 = ~local_1c8;
      piVar14 = (int *)(lVar11 + lVar7 * 0x18 + 0x10);
      if (*piVar14 != 0) {
        pbVar12 = *(byte **)(lVar11 + lVar7 * 0x18 + 8);
        lVar11 = (long)*piVar14 * -0x10;
        do {
          uVar9 = *(ulong *)(&DAT_03d76748 + (local_1c8 & 0xff ^ (ulong)*pbVar12) * 8) ^
                  local_1c8 >> 8;
          pbVar13 = pbVar12 + 1;
          pbVar12 = pbVar12 + 2;
          local_1c8 = *(ulong *)(&DAT_03d76748 + (uVar9 & 0xff ^ (ulong)*pbVar13) * 8) ^ uVar9 >> 8;
          lVar11 = lVar11 + 2;
        } while (lVar11 != 0);
      }
      local_1c8 = ~local_1c8;
      if (DAT_0488e150 < 4) {
        if (DAT_046aaf68 != '\0') goto LAB_033a4e18;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_1c0 = (char *)0x0;
          local_1b0 = &DAT_0488e100;
          local_1a8 = 4;
          pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
          local_1a0 = nn::os::GetThreadId(pTVar4);
          local_198 = (char *)0x0;
          local_190 = 0;
          local_188 = (char *)0x0;
          local_180 = 0;
          local_178 = 0;
          local_70[0] = (ulong)*piVar14;
          FUN_0322c554(&local_1c0,"{} ParamId -> {}",&DAT_047b2fc8,local_70,&local_1c8);
          local_188 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
          ;
          local_180 = 0x25e;
          FUN_0322c8e0(&local_1c0);
        }
        else {
LAB_033a4e18:
          local_1c0 = (char *)0x0;
          local_1b0 = &DAT_0488e100;
          local_1a8 = 4;
          pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
          local_1a0 = nn::os::GetThreadId(pTVar4);
          local_190 = 0;
          local_188 = (char *)0x0;
          local_180 = 0;
          local_178 = 0;
          local_170[0] = '\0';
          uStack_1b8 = 0x10000000000;
          local_1d0 = (long)*piVar14;
          local_1c0 = local_170;
          local_198 = local_170;
          FUN_0322c554(&local_1c0,"{} ParamId -> {}",&DAT_047b2fc8,&local_1d0,&local_1c8);
          local_188 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
          ;
          local_180 = 0x25e;
          if (local_170[0] != '\0') {
            sVar5 = strlen(local_170);
            (local_170 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[0] = '\n';
            (local_170 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[1] = '\0';
            printf("%s",local_170);
            fflush(pFVar8);
          }
        }
        if (((ulong)local_198 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_198 + -1,0);
        }
      }
      iVar6 = *(int *)(param_1 + 0xe0);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  uVar9 = local_1c8;
  *(int *)(param_1 + 0xf8) = iVar6;
  *(ulong *)(param_1 + 0x100) = local_1c8;
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x38);
  if (3 < DAT_0488e150) {
    local_1c0 = (char *)0x0;
    local_1b0 = &DAT_0488e100;
    local_1a8 = CONCAT71(local_1a8._1_7_,4);
    uVar2 = (uint)local_1a8;
    local_1a8 = (ulong)(uVar2 & 0xffff);
    pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
    local_1a0 = nn::os::GetThreadId(pTVar4);
    local_198 = (char *)0x0;
    local_1a8._0_2_ = CONCAT11(0xff,(undefined1)local_1a8);
    local_190 = 0;
    local_188 = (char *)0x0;
    local_180 = 0;
    local_178 = 0;
    FUN_0322c8e0(&local_1c0);
    if (((ulong)local_198 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,(long)local_198 - 1,0);
    }
  }
  return uVar9;
}


