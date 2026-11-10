/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031e1140; name: FUN_031e1140
 */


ulong FUN_031e1140(ulong param_1)

{
  uint uVar1;
  ThreadType *pTVar2;
  ulong uVar3;
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
  ulong local_18;
  
  local_18 = param_1;
  if (DAT_04884588 < 2) {
    if (DAT_046aaf68 == '\0') {
      return param_1;
    }
  }
  else if (DAT_046aaf68 == '\0') {
    local_180 = (char *)0x0;
    local_170 = &DAT_04884538;
    uStack_168 = 2;
    pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
    local_160 = nn::os::GetThreadId(pTVar2);
    local_158 = (char *)0x0;
    local_150 = 0;
    local_148 = (char *)0x0;
    local_140 = 0;
    uStack_138 = 0;
    FUN_0322c554(&local_180,
                 "Instances of a non-reflected class inheriting from {0} have been passed to reflection and will be treated as instances of their reflected ancestor. Mark subclasses of {0} as Reflect or NoReflect to suppress this warning."
                 ,PTR_DAT_047e5c18,&local_18);
    local_148 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Core/hkReflectType.cpp"
    ;
    local_140 = 0x5a;
    uStack_168 = CONCAT44(0x34fdd456,(undefined4)uStack_168);
    uVar3 = FUN_0322c8e0(&local_180);
    goto LAB_031e11dc;
  }
  local_170 = &DAT_04884538;
  uStack_168 = 2;
  pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
  local_160 = nn::os::GetThreadId(pTVar2);
  local_150 = 0;
  local_148 = (char *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_130[0] = '\0';
  uStack_178 = 0x10000000000;
  local_180 = local_130;
  local_158 = local_130;
  uVar3 = FUN_0322c554(&local_180,
                       "Instances of a non-reflected class inheriting from {0} have been passed to reflection and will be treated as instances of their reflected ancestor. Mark subclasses of {0} as Reflect or NoReflect to suppress this warning."
                       ,PTR_DAT_047e5c18,&local_18);
  local_148 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Core/hkReflectType.cpp"
  ;
  local_140 = 0x5a;
  uStack_168 = CONCAT44(0x34fdd456,(undefined4)uStack_168);
  if (local_130[0] != '\0') {
    sVar4 = strlen(local_130);
    (local_130 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
    (local_130 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
    printf("%s",local_130);
    uVar1 = fflush(*(FILE **)PTR_stdout_047cb860);
    uVar3 = (ulong)uVar1;
  }
LAB_031e11dc:
  if (((ulong)local_158 & 1) != 0) {
    uVar3 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_158 + -1,0);
  }
  return uVar3;
}


