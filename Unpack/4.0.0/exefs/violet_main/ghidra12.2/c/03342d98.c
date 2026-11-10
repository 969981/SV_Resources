/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03342d98; name: FUN_03342d98
 */


undefined8 FUN_03342d98(long *param_1)

{
  ThreadType *pTVar1;
  size_t sVar2;
  long local_1a0;
  long lStack_198;
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
  long local_40;
  long lStack_38;
  
  if ((int)param_1[4] == -1) {
    if (*param_1 == param_1[1]) {
      if (*(int *)((long)param_1 + 0x24) == -1) {
        if (DAT_0488d790 == '\0') {
          if (DAT_046aaf68 == '\0') {
            return 0;
          }
        }
        else if (DAT_046aaf68 == '\0') {
          local_190 = (char *)0x0;
          local_180 = &DAT_0488d740;
          uStack_178 = 1;
          pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
          local_170 = nn::os::GetThreadId(pTVar1);
          local_168 = (char *)0x0;
          local_160 = 0;
          local_158 = (char *)0x0;
          local_150 = 0;
          uStack_148 = 0;
          FUN_0322c554(&local_190,
                       "Found incorrectly defined patch {}. Add new class patch (HK_CLASS_ADDED) has \'destination\' class version set to HK_CLASS_REMOVED."
                       ,&DAT_047acc68,param_1);
          local_150 = 0x129;
          goto LAB_03342eb8;
        }
        local_180 = &DAT_0488d740;
        uStack_178 = 1;
        pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
        local_170 = nn::os::GetThreadId(pTVar1);
        local_190 = local_140;
        local_160 = 0;
        local_158 = (char *)0x0;
        local_150 = 0;
        uStack_148 = 0;
        local_140[0] = '\0';
        uStack_188 = 0x10000000000;
        local_168 = local_190;
        FUN_0322c554(&local_190,
                     "Found incorrectly defined patch {}. Add new class patch (HK_CLASS_ADDED) has \'destination\' class version set to HK_CLASS_REMOVED."
                     ,&DAT_047acc68,param_1);
        local_150 = 0x129;
      }
      else {
        if (param_1[2] != param_1[3]) {
          return 1;
        }
        if (DAT_0488d790 == '\0') {
          if (DAT_046aaf68 == '\0') {
            return 0;
          }
        }
        else if (DAT_046aaf68 == '\0') {
          local_190 = (char *)0x0;
          local_180 = &DAT_0488d740;
          uStack_178 = 1;
          pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
          local_170 = nn::os::GetThreadId(pTVar1);
          local_168 = (char *)0x0;
          local_160 = 0;
          local_158 = (char *)0x0;
          local_150 = 0;
          uStack_148 = 0;
          FUN_0322c554(&local_190,
                       "Found incorrectly defined patch {}. Add new class patch (HK_CLASS_ADDED) has \'destination\' class name set to null."
                       ,&DAT_047acc68,param_1);
          local_150 = 0x12e;
LAB_03342eb8:
          local_158 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
          ;
          FUN_0322c8e0(&local_190);
          goto LAB_03342ec4;
        }
        local_180 = &DAT_0488d740;
        uStack_178 = 1;
        pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
        local_170 = nn::os::GetThreadId(pTVar1);
        local_190 = local_140;
        local_160 = 0;
        local_158 = (char *)0x0;
        local_150 = 0;
        uStack_148 = 0;
        local_140[0] = '\0';
        uStack_188 = 0x10000000000;
        local_168 = local_190;
        FUN_0322c554(&local_190,
                     "Found incorrectly defined patch {}. Add new class patch (HK_CLASS_ADDED) has \'destination\' class name set to null."
                     ,&DAT_047acc68,param_1);
        local_150 = 0x12e;
      }
    }
    else {
      if (DAT_0488d790 == '\0') {
        if (DAT_046aaf68 == '\0') {
          return 0;
        }
      }
      else if (DAT_046aaf68 == '\0') {
        local_190 = (char *)0x0;
        local_180 = &DAT_0488d740;
        uStack_178 = 1;
        pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
        local_170 = nn::os::GetThreadId(pTVar1);
        local_168 = (char *)0x0;
        local_160 = 0;
        local_158 = (char *)0x0;
        local_150 = 0;
        uStack_148 = 0;
        local_40 = *param_1;
        lStack_38 = param_1[1];
        FUN_0322c554(&local_190,
                     "Found incorrectly defined patch {}. Add new class patch (HK_CLASS_ADDED) has \'source\' class name  set to \'{}\', but must be nullptr."
                     ,PTR_DAT_047e6700,param_1,&local_40);
        local_150 = 0x124;
        goto LAB_03342eb8;
      }
      local_180 = &DAT_0488d740;
      uStack_178 = 1;
      pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
      local_170 = nn::os::GetThreadId(pTVar1);
      local_190 = local_140;
      local_160 = 0;
      local_158 = (char *)0x0;
      local_150 = 0;
      uStack_148 = 0;
      uStack_188 = 0x10000000000;
      local_140[0] = '\0';
      local_1a0 = *param_1;
      lStack_198 = param_1[1];
      local_168 = local_190;
      FUN_0322c554(&local_190,
                   "Found incorrectly defined patch {}. Add new class patch (HK_CLASS_ADDED) has \'source\' class name  set to \'{}\', but must be nullptr."
                   ,PTR_DAT_047e6700,param_1,&local_1a0);
      local_150 = 0x124;
    }
  }
  else {
    if (*param_1 != param_1[1]) {
      return 1;
    }
    if (DAT_0488d790 == '\0') {
      if (DAT_046aaf68 == '\0') {
        return 0;
      }
    }
    else if (DAT_046aaf68 == '\0') {
      local_190 = (char *)0x0;
      local_180 = &DAT_0488d740;
      uStack_178 = 1;
      pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
      local_170 = nn::os::GetThreadId(pTVar1);
      local_168 = (char *)0x0;
      local_160 = 0;
      local_158 = (char *)0x0;
      local_150 = 0;
      uStack_148 = 0;
      FUN_0322c554(&local_190,
                   "Found incorrectly defined patch {}. Update class patch has \'source\' class name set to nullptr."
                   ,&DAT_047acc68,param_1);
      local_150 = 0x143;
      goto LAB_03342eb8;
    }
    local_180 = &DAT_0488d740;
    uStack_178 = 1;
    pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar1);
    local_190 = local_140;
    local_160 = 0;
    local_158 = (char *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    local_140[0] = '\0';
    uStack_188 = 0x10000000000;
    local_168 = local_190;
    FUN_0322c554(&local_190,
                 "Found incorrectly defined patch {}. Update class patch has \'source\' class name set to nullptr."
                 ,&DAT_047acc68,param_1);
    local_150 = 0x143;
  }
  local_158 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
  ;
  if (local_140[0] != '\0') {
    sVar2 = strlen(local_140);
    (local_140 + (int)((int)sVar2 - (uint)((int)sVar2 == 0xff)))[0] = '\n';
    (local_140 + (int)((int)sVar2 - (uint)((int)sVar2 == 0xff)))[1] = '\0';
    printf("%s",local_140);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_03342ec4:
  if (((ulong)local_168 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_168 + -1,0);
  }
  return 0;
}


