/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0338299c; name: FUN_0338299c
 */


int * FUN_0338299c(int *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ThreadType *pTVar3;
  int *piVar4;
  size_t sVar5;
  int *piVar6;
  char *local_190;
  undefined8 uStack_188;
  undefined8 *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  char local_140 [256];
  int local_24;
  
  piVar6 = (int *)param_2[1];
  piVar4 = (int *)*param_2 + 1;
  if (piVar6 < piVar4) {
    local_24 = 0;
    *param_2 = (ulong)piVar6;
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
    piVar4 = piVar6;
  }
  else {
    local_24 = *(int *)*param_2;
    *param_2 = (ulong)piVar4;
  }
  if (piVar6 < piVar4 + 1) {
    *param_2 = (ulong)piVar6;
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
LAB_03382a20:
    *param_1 = -0x7ffbfe00;
  }
  else {
    iVar1 = *piVar4;
    *param_2 = (ulong)(piVar4 + 1);
    if ((char)param_2[3] != '\0') goto LAB_03382a20;
    if (-1 < *param_1) {
      piVar4 = param_1 + 0x44;
      piVar6 = param_1;
      if (local_24 == param_1[0x44]) {
        *piVar4 = iVar1;
        if (param_2[1] == *param_2) {
          return param_1;
        }
        if (DAT_0488dfa8 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_03382d5c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_190 = (char *)0x0;
          local_180 = &DAT_0488df58;
          uStack_178 = 1;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_170 = nn::os::GetThreadId(pTVar3);
          local_168 = (char *)0x0;
          local_160 = 0;
          local_158 = (char *)0x0;
          local_150 = 0;
          uStack_148 = 0;
          FUN_0322c554(&local_190,"Oversized type rolling hash section (TSHA).",PTR_DAT_047d1b38);
          local_150 = 0x833;
          uStack_178 = CONCAT44(0x6e8537db,(undefined4)uStack_178);
LAB_03382c84:
          local_158 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          piVar6 = (int *)FUN_0322c8e0(&local_190);
          goto LAB_03382c8c;
        }
        local_180 = &DAT_0488df58;
        uStack_178 = 1;
        pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
        local_170 = nn::os::GetThreadId(pTVar3);
        local_160 = 0;
        local_158 = (char *)0x0;
        local_150 = 0;
        uStack_148 = 0;
        local_140[0] = '\0';
        uStack_188 = 0x10000000000;
        local_190 = local_140;
        local_168 = local_140;
        piVar6 = (int *)FUN_0322c554(&local_190,"Oversized type rolling hash section (TSHA).",
                                     PTR_DAT_047d1b38);
        local_158 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        local_150 = 0x833;
        uStack_178 = CONCAT44(0x6e8537db,(undefined4)uStack_178);
        if (local_140[0] != '\0') {
          sVar5 = strlen(local_140);
          (local_140 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[0] = '\n';
          (local_140 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[1] = '\0';
LAB_03382e20:
          printf("%s",local_140);
          uVar2 = fflush(*(FILE **)PTR_stdout_047cb860);
          piVar6 = (int *)(ulong)uVar2;
        }
      }
      else {
        if (DAT_0488dfa8 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_03382d5c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_190 = (char *)0x0;
          local_180 = &DAT_0488df58;
          uStack_178 = 1;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_170 = nn::os::GetThreadId(pTVar3);
          local_168 = (char *)0x0;
          local_160 = 0;
          local_158 = (char *)0x0;
          local_150 = 0;
          uStack_148 = 0;
          FUN_0322c554(&local_190,
                       "Read format has lost sync: invalid previous type rolling hash (expected 0x{:x8}, got 0x{:x8})."
                       ,PTR_DAT_047e6878,piVar4,&local_24);
          local_150 = 0x831;
          goto LAB_03382c84;
        }
        local_180 = &DAT_0488df58;
        uStack_178 = 1;
        pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
        local_170 = nn::os::GetThreadId(pTVar3);
        local_160 = 0;
        local_158 = (char *)0x0;
        local_150 = 0;
        uStack_148 = 0;
        uStack_188 = 0x10000000000;
        local_140[0] = '\0';
        local_190 = local_140;
        local_168 = local_140;
        piVar6 = (int *)FUN_0322c554(&local_190,
                                     "Read format has lost sync: invalid previous type rolling hash (expected 0x{:x8}, got 0x{:x8})."
                                     ,PTR_DAT_047e6878,piVar4,&local_24);
        local_158 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        local_150 = 0x831;
        if (local_140[0] != '\0') {
          sVar5 = strlen(local_140);
          (local_140 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[0] = '\n';
          (local_140 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[1] = '\0';
          goto LAB_03382e20;
        }
      }
LAB_03382c8c:
      if (((ulong)local_168 & 1) != 0) {
        piVar6 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_168 + -1,0);
      }
LAB_03382d5c:
      *param_1 = -0x7ffbfe00;
      return piVar6;
    }
  }
  if (DAT_0488dfa8 == '\0') {
    if (DAT_046aaf68 == '\0') {
      return param_1;
    }
  }
  else if (DAT_046aaf68 == '\0') {
    local_190 = (char *)0x0;
    local_180 = &DAT_0488df58;
    uStack_178 = 1;
    pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar3);
    local_168 = (char *)0x0;
    local_160 = 0;
    local_158 = (char *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    FUN_0322c554(&local_190,"Error in input stream.",PTR_DAT_047d1b38);
    local_158 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_150 = 0x830;
    piVar4 = (int *)FUN_0322c8e0(&local_190);
    goto LAB_03382a9c;
  }
  local_180 = &DAT_0488df58;
  uStack_178 = 1;
  pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
  local_170 = nn::os::GetThreadId(pTVar3);
  local_160 = 0;
  local_158 = (char *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_140[0] = '\0';
  uStack_188 = 0x10000000000;
  local_190 = local_140;
  local_168 = local_140;
  piVar4 = (int *)FUN_0322c554(&local_190,"Error in input stream.",PTR_DAT_047d1b38);
  local_158 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  local_150 = 0x830;
  if (local_140[0] != '\0') {
    sVar5 = strlen(local_140);
    (local_140 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[0] = '\n';
    (local_140 + (int)((int)sVar5 - (uint)((int)sVar5 == 0xff)))[1] = '\0';
    printf("%s",local_140);
    uVar2 = fflush(*(FILE **)PTR_stdout_047cb860);
    piVar4 = (int *)(ulong)uVar2;
  }
LAB_03382a9c:
  if (((ulong)local_168 & 1) != 0) {
    piVar4 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_168 + -1,0);
  }
  return piVar4;
}


