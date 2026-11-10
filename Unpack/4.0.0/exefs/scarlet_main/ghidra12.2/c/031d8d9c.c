/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d8d9c; name: FUN_031d8d9c
 */


undefined8 FUN_031d8d9c(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  ThreadType *pTVar2;
  void *__s;
  undefined8 uVar3;
  size_t sVar4;
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
  
  *param_3 = 0;
  if ((param_1[0xc] & 0x100001U) != 1) {
    iVar1 = (**(code **)(*param_1 + 0x10))();
    if ((param_1[0x42] != 0) &&
       (*(long **)(param_1[0x42] + 8) = param_2, (char)param_1[0x43] != '\0')) {
      *(long *)(param_1[0x42] + 0x10) = (long)iVar1;
    }
    __s = (void *)(**(code **)(*param_2 + 0x18))(param_2,(long)iVar1);
    memset(__s,0,(long)iVar1);
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1,__s,iVar1);
    *param_3 = uVar3;
    return 0;
  }
  if (DAT_04884290 == '\0') {
    if (DAT_046aaf68 == '\0') {
      return 0x80040200;
    }
  }
  else if (DAT_046aaf68 == '\0') {
    local_190 = (char *)0x0;
    local_180 = &DAT_04884240;
    uStack_178 = 1;
    pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar2);
    local_168 = (char *)0x0;
    local_160 = 0;
    local_158 = (char *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    FUN_0322c554(&local_190,"You must have an Opt::SIZE_ALIGN if you have an Opt::FORMAT",
                 PTR_DAT_047d1b38);
    local_158 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Builder/hkTypeBuilder.cpp"
    ;
    local_150 = 0x3db;
    uStack_178 = CONCAT44(0x18bd024f,(undefined4)uStack_178);
    FUN_0322c8e0(&local_190);
    goto LAB_031d8e54;
  }
  local_180 = &DAT_04884240;
  uStack_178 = 1;
  pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
  local_170 = nn::os::GetThreadId(pTVar2);
  local_160 = 0;
  local_158 = (char *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_140[0] = '\0';
  uStack_188 = 0x10000000000;
  local_190 = local_140;
  local_168 = local_140;
  FUN_0322c554(&local_190,"You must have an Opt::SIZE_ALIGN if you have an Opt::FORMAT",
               PTR_DAT_047d1b38);
  local_158 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Builder/hkTypeBuilder.cpp"
  ;
  local_150 = 0x3db;
  uStack_178 = CONCAT44(0x18bd024f,(undefined4)uStack_178);
  if (local_140[0] != '\0') {
    sVar4 = strlen(local_140);
    (local_140 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
    (local_140 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
    printf("%s",local_140);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_031d8e54:
  if (((ulong)local_168 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_168 + -1,0);
  }
  return 0x80040200;
}


