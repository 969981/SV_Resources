/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03363850; name: FUN_03363850
 */


undefined8
FUN_03363850(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  ThreadType *pTVar3;
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
  
  FUN_031ca554(&local_190,*param_3,param_3[1]);
  puVar1 = (undefined2 *)FUN_031e1c40(param_2,(ulong)local_190 & 0xfffffffffffffffe,0);
  if (((ulong)local_190 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_190 + -1,0);
  }
  if ((undefined2 *)0x1 < puVar1) {
    uVar2 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*param_4,
                         *(int *)(param_4 + 1) - (int)*param_4,1);
    *(undefined8 *)
     (puVar1 + (ulong)(byte)(POPCOUNT((char)*puVar1) + POPCOUNT((char)((ushort)*puVar1 >> 8))) * 4 +
               8) = uVar2;
    return 0;
  }
  if (DAT_0488d8c8 == '\0') {
    if (DAT_046aaf68 == '\0') {
      return 0x80040200;
    }
  }
  else if (DAT_046aaf68 == '\0') {
    local_190 = (char *)0x0;
    local_180 = &DAT_0488d878;
    uStack_178 = 1;
    pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar3);
    local_168 = (char *)0x0;
    local_160 = 0;
    local_158 = (char *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    FUN_0322c554(&local_190,"Field {} not found applying patch {}",&DAT_047ad350,param_3,param_1);
    local_158 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
    ;
    local_150 = 0x9c1;
    FUN_0322c8e0(&local_190);
    goto LAB_0336398c;
  }
  local_180 = &DAT_0488d878;
  uStack_178 = 1;
  pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
  local_170 = nn::os::GetThreadId(pTVar3);
  local_160 = 0;
  local_158 = (char *)0x0;
  local_140[0] = '\0';
  local_150 = 0;
  uStack_148 = 0;
  uStack_188 = 0x10000000000;
  local_190 = local_140;
  local_168 = local_140;
  FUN_0322c554(&local_190,"Field {} not found applying patch {}",&DAT_047ad350,param_3,param_1);
  local_158 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
  ;
  local_150 = 0x9c1;
  if (local_140[0] != '\0') {
    sVar4 = strlen(local_140);
    (local_140 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
    (local_140 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
    printf("%s",local_140);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_0336398c:
  if (((ulong)local_168 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_168 + -1,0);
  }
  return 0x80040200;
}


