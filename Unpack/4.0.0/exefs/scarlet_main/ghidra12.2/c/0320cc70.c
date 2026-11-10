/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320cc70; name: FUN_0320cc70
 */


long * FUN_0320cc70(long *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  ThreadType *pTVar3;
  size_t sVar4;
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
  
  if ((*param_1 != 0) || (*param_2 != 0)) {
    FUN_00cb44e4(&local_180);
    FUN_0320ce24(&local_180,param_1,param_2,param_3);
    plVar2 = (long *)FUN_00cb4718(&local_180);
    return plVar2;
  }
  if (DAT_04884f08 < 2) {
    if (DAT_046aaf68 == '\0') {
      return param_1;
    }
  }
  else if (DAT_046aaf68 == '\0') {
    local_180 = (char *)0x0;
    local_170 = &DAT_04884eb8;
    uStack_168 = 2;
    pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
    local_160 = nn::os::GetThreadId(pTVar3);
    local_158 = (char *)0x0;
    local_150 = 0;
    local_148 = (char *)0x0;
    local_140 = 0;
    uStack_138 = 0;
    FUN_0322c554(&local_180,"Attempting to clone a null var",PTR_DAT_047d1b38);
    local_148 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
    ;
    local_140 = 0x34c;
    plVar2 = (long *)FUN_0322c8e0(&local_180);
    goto LAB_0320cd4c;
  }
  local_170 = &DAT_04884eb8;
  uStack_168 = 2;
  pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
  local_160 = nn::os::GetThreadId(pTVar3);
  local_150 = 0;
  local_148 = (char *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_130[0] = '\0';
  uStack_178 = 0x10000000000;
  local_180 = local_130;
  local_158 = local_130;
  plVar2 = (long *)FUN_0322c554(&local_180,"Attempting to clone a null var",PTR_DAT_047d1b38);
  local_148 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
  ;
  local_140 = 0x34c;
  if (local_130[0] != '\0') {
    sVar4 = strlen(local_130);
    (local_130 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
    (local_130 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
    printf("%s",local_130);
    uVar1 = fflush(*(FILE **)PTR_stdout_047cb860);
    plVar2 = (long *)(ulong)uVar1;
  }
LAB_0320cd4c:
  if (((ulong)local_158 & 1) != 0) {
    plVar2 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_158 + -1,0);
  }
  return plVar2;
}


