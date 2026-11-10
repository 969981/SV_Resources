/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033812c4; name: FUN_033812c4
 */


ulong FUN_033812c4(int *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;
  ThreadType *pTVar5;
  size_t sVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  char *local_1c0;
  undefined8 uStack_1b8;
  undefined8 *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  char local_170 [256];
  undefined8 local_70;
  char *local_68;
  char *pcStack_60;
  char local_58;
  
  local_58 = '\0';
  local_68 = (char *)0x0;
  pcStack_60 = (char *)0x0;
  local_70 = 0;
  uVar4 = FUN_033970e0(&local_70,param_2,param_1 + 0x2c);
  pcVar2 = local_68;
  puVar1 = PTR_PTR_047d1a50;
  if (-1 < (int)uVar4) {
    if (pcStack_60 != local_68) {
      pcVar9 = pcStack_60;
      pcVar10 = pcStack_60;
      do {
        if (*pcVar9 == '\0') {
          iVar7 = param_1[0x1e];
          lVar8 = (long)iVar7;
          if ((int)(param_1[0x1f] & 0x7fffffffU) <= iVar7) {
            uVar4 = FUN_031b108c(param_1 + 0x1c,puVar1,lVar8 + 1);
            iVar7 = param_1[0x1e];
          }
          *(char **)(*(long *)(param_1 + 0x1c) + (long)iVar7 * 8) = pcVar10;
          pcVar10 = pcVar9 + 1;
          param_1[0x1e] = (int)(lVar8 + 1);
        }
        pcVar9 = pcVar9 + 1;
      } while (pcVar2 != pcVar9);
    }
    if (local_58 == '\0') {
      if (-1 < *param_1) {
        return uVar4;
      }
    }
    else {
      *param_1 = -0x7ffbfe00;
    }
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') {
        return uVar4;
      }
    }
    else if (DAT_046aaf68 == '\0') {
      local_1c0 = (char *)0x0;
      local_1b0 = &DAT_0488df58;
      uStack_1a8 = 1;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_1a0 = nn::os::GetThreadId(pTVar5);
      local_198 = (char *)0x0;
      local_190 = 0;
      local_188 = (char *)0x0;
      local_180 = 0;
      uStack_178 = 0;
      FUN_0322c554(&local_1c0,"Error in input stream.",PTR_DAT_047d1b38);
      local_188 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      local_180 = 0x47c;
      uVar4 = FUN_0322c8e0(&local_1c0);
      goto LAB_033813f0;
    }
    local_1b0 = &DAT_0488df58;
    uStack_1a8 = 1;
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    local_1a0 = nn::os::GetThreadId(pTVar5);
    local_190 = 0;
    local_188 = (char *)0x0;
    local_180 = 0;
    uStack_178 = 0;
    local_170[0] = '\0';
    uStack_1b8 = 0x10000000000;
    local_1c0 = local_170;
    local_198 = local_170;
    uVar4 = FUN_0322c554(&local_1c0,"Error in input stream.",PTR_DAT_047d1b38);
    local_188 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_180 = 0x47c;
    if (local_170[0] != '\0') {
      sVar6 = strlen(local_170);
      (local_170 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
      (local_170 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
      printf("%s",local_170);
      uVar3 = fflush(*(FILE **)PTR_stdout_047cb860);
      uVar4 = (ulong)uVar3;
    }
LAB_033813f0:
    if (((ulong)local_198 & 1) != 0) {
      uVar4 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_198 + -1,0);
    }
    return uVar4;
  }
  if (DAT_0488dfa8 == '\0') {
    if (DAT_046aaf68 == '\0') goto LAB_03381570;
LAB_03381598:
    local_1b0 = &DAT_0488df58;
    uStack_1a8 = 1;
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    local_1a0 = nn::os::GetThreadId(pTVar5);
    local_190 = 0;
    local_188 = (char *)0x0;
    local_180 = 0;
    uStack_178 = 0;
    local_170[0] = '\0';
    uStack_1b8 = 0x10000000000;
    local_1c0 = local_170;
    local_198 = local_170;
    uVar4 = FUN_0322c554(&local_1c0,"Failed to read string section",PTR_DAT_047d1b38);
    local_188 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_180 = 0x47a;
    if (local_170[0] != '\0') {
      sVar6 = strlen(local_170);
      (local_170 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
      (local_170 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
      printf("%s",local_170);
      uVar3 = fflush(*(FILE **)PTR_stdout_047cb860);
      uVar4 = (ulong)uVar3;
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_03381598;
    local_1c0 = (char *)0x0;
    local_1b0 = &DAT_0488df58;
    uStack_1a8 = 1;
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    local_1a0 = nn::os::GetThreadId(pTVar5);
    local_198 = (char *)0x0;
    local_190 = 0;
    local_188 = (char *)0x0;
    local_180 = 0;
    uStack_178 = 0;
    FUN_0322c554(&local_1c0,"Failed to read string section",PTR_DAT_047d1b38);
    local_188 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_180 = 0x47a;
    uVar4 = FUN_0322c8e0(&local_1c0);
  }
  if (((ulong)local_198 & 1) != 0) {
    uVar4 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_198 + -1,0);
  }
LAB_03381570:
  *param_1 = -0x7ffbfe00;
  return uVar4;
}


