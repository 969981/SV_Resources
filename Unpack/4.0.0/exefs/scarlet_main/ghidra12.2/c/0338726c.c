/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0338726c; name: FUN_0338726c
 */


int * FUN_0338726c(int *param_1,ulong *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ThreadType *pTVar4;
  int *piVar5;
  size_t sVar6;
  int *piVar7;
  char *local_180;
  undefined8 uStack_178;
  undefined8 *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  char local_130 [256];
  
  piVar1 = (int *)param_2[1];
  piVar5 = (int *)*param_2 + 1;
  if (piVar1 < piVar5) {
    *param_2 = (ulong)piVar1;
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
LAB_033872b8:
    *param_1 = -0x7ffbfe00;
  }
  else {
    iVar2 = *(int *)*param_2;
    *param_2 = (ulong)piVar5;
    if ((char)param_2[3] != '\0') goto LAB_033872b8;
    if (-1 < *param_1) {
      piVar7 = param_1;
      if (iVar2 == param_1[0x3e]) {
        if (piVar5 == piVar1) {
          return param_1;
        }
        if (DAT_0488dfa8 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_033875a4;
LAB_033875c4:
          local_170 = &DAT_0488df58;
          uStack_168 = 1;
          pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
          local_160 = nn::os::GetThreadId(pTVar4);
          local_180 = local_130;
          local_150 = 0;
          local_148 = (char *)0x0;
          local_140 = 0;
          uStack_138 = 0;
          local_130[0] = '\0';
          uStack_178 = 0x10000000000;
          local_158 = local_180;
          piVar7 = (int *)FUN_0322c554(&local_180,"Oversized type sequence section (TSEQ).",
                                       PTR_DAT_047d1b38);
          local_140 = 0x829;
          uStack_168 = CONCAT44(0x6e8537db,(undefined4)uStack_168);
          goto LAB_03387630;
        }
        if (DAT_046aaf68 != '\0') goto LAB_033875c4;
        local_180 = (char *)0x0;
        local_170 = &DAT_0488df58;
        uStack_168 = 1;
        pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
        local_160 = nn::os::GetThreadId(pTVar4);
        local_158 = (char *)0x0;
        local_150 = 0;
        local_148 = (char *)0x0;
        local_140 = 0;
        uStack_138 = 0;
        FUN_0322c554(&local_180,"Oversized type sequence section (TSEQ).",PTR_DAT_047d1b38);
        local_140 = 0x829;
        uStack_168 = CONCAT44(0x6e8537db,(undefined4)uStack_168);
LAB_03387508:
        local_148 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        piVar7 = (int *)FUN_0322c8e0(&local_180);
      }
      else {
        if (DAT_0488dfa8 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_033875a4;
        }
        else if (DAT_046aaf68 == '\0') {
          local_180 = (char *)0x0;
          local_170 = &DAT_0488df58;
          uStack_168 = 1;
          pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
          local_160 = nn::os::GetThreadId(pTVar4);
          local_158 = (char *)0x0;
          local_150 = 0;
          local_148 = (char *)0x0;
          local_140 = 0;
          uStack_138 = 0;
          FUN_0322c554(&local_180,
                       "Sequence number incorrect. This reader didn\'t read the stream as it was written"
                       ,PTR_DAT_047d1b38);
          local_140 = 0x828;
          goto LAB_03387508;
        }
        local_170 = &DAT_0488df58;
        uStack_168 = 1;
        pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
        local_160 = nn::os::GetThreadId(pTVar4);
        local_180 = local_130;
        local_150 = 0;
        local_148 = (char *)0x0;
        local_140 = 0;
        uStack_138 = 0;
        local_130[0] = '\0';
        uStack_178 = 0x10000000000;
        local_158 = local_180;
        piVar7 = (int *)FUN_0322c554(&local_180,
                                     "Sequence number incorrect. This reader didn\'t read the stream as it was written"
                                     ,PTR_DAT_047d1b38);
        local_140 = 0x828;
LAB_03387630:
        local_148 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        if (local_130[0] != '\0') {
          sVar6 = strlen(local_130);
          (local_130 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
          (local_130 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
          printf("%s",local_130);
          uVar3 = fflush(*(FILE **)PTR_stdout_047cb860);
          piVar7 = (int *)(ulong)uVar3;
        }
      }
      if (((ulong)local_158 & 1) != 0) {
        piVar7 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_158 + -1,0);
      }
LAB_033875a4:
      *param_1 = -0x7ffbfe00;
      return piVar7;
    }
  }
  if (DAT_0488dfa8 == '\0') {
    if (DAT_046aaf68 == '\0') {
      return param_1;
    }
  }
  else if (DAT_046aaf68 == '\0') {
    local_180 = (char *)0x0;
    local_170 = &DAT_0488df58;
    uStack_168 = 1;
    pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
    local_160 = nn::os::GetThreadId(pTVar4);
    local_158 = (char *)0x0;
    local_150 = 0;
    local_148 = (char *)0x0;
    local_140 = 0;
    uStack_138 = 0;
    FUN_0322c554(&local_180,"Error in input stream.",PTR_DAT_047d1b38);
    local_148 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_140 = 0x827;
    piVar5 = (int *)FUN_0322c8e0(&local_180);
    goto LAB_03387334;
  }
  local_170 = &DAT_0488df58;
  uStack_168 = 1;
  pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
  local_160 = nn::os::GetThreadId(pTVar4);
  local_150 = 0;
  local_148 = (char *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_130[0] = '\0';
  uStack_178 = 0x10000000000;
  local_180 = local_130;
  local_158 = local_130;
  piVar5 = (int *)FUN_0322c554(&local_180,"Error in input stream.",PTR_DAT_047d1b38);
  local_148 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  local_140 = 0x827;
  if (local_130[0] != '\0') {
    sVar6 = strlen(local_130);
    (local_130 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
    (local_130 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
    printf("%s",local_130);
    uVar3 = fflush(*(FILE **)PTR_stdout_047cb860);
    piVar5 = (int *)(ulong)uVar3;
  }
LAB_03387334:
  if (((ulong)local_158 & 1) != 0) {
    piVar5 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_158 + -1,0);
  }
  return piVar5;
}


