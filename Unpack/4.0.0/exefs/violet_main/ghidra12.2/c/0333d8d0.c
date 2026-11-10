/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0333d8d0; name: FUN_0333d8d0
 */


undefined4 FUN_0333d8d0(long *param_1,undefined8 *param_2)

{
  char *__s;
  char *pcVar1;
  long lVar2;
  ThreadType *pTVar3;
  size_t sVar4;
  long lVar5;
  char *local_190;
  void *pvStack_188;
  undefined8 *local_180;
  char *pcStack_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  char local_140 [256];
  
  __s = (char *)*param_2;
  pcVar1 = (char *)param_2[1];
  if (__s == pcVar1) {
    return 0xffffffff;
  }
  lVar2 = FUN_033419cc();
  if ((lVar2 != 0) && (lVar5 = *param_1, lVar5 != 0)) {
LAB_0333d90c:
    return *(undefined4 *)(lVar5 + (long)*(int *)(lVar2 + 4) * 0x10 + 8);
  }
  if (((long)pcVar1 - (long)__s == 0) ||
     (pvStack_188 = memchr(__s,0x3c,(long)pcVar1 - (long)__s), pvStack_188 == (void *)0x0)) {
    local_190 = (char *)*param_2;
    pvStack_188 = (void *)param_2[1];
  }
  else {
    local_180 = (undefined8 *)((long)pvStack_188 + 1);
    local_190 = __s;
    pcStack_178 = pcVar1;
    lVar2 = FUN_033419cc(param_1,&local_190);
    if ((lVar2 != 0) && (lVar5 = *param_1, lVar5 != 0)) goto LAB_0333d90c;
  }
  if (DAT_0488d698 == '\0') {
    if (DAT_046aaf68 == '\0') {
      return 0xffffffff;
    }
  }
  else if (DAT_046aaf68 == '\0') {
    local_190 = (char *)0x0;
    local_180 = &DAT_0488d648;
    pcStack_178 = (char *)0x1;
    pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar3);
    local_168 = (char *)0x0;
    local_160 = 0;
    local_158 = (char *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    FUN_0322c554(&local_190,"Patch {} is missing a DEPENDS component for {}",PTR_DAT_047e6700,
                 param_1[4],param_2);
    local_158 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkModifiableTypeSet.cpp"
    ;
    local_150 = 0x863;
    FUN_0322c8e0(&local_190);
    goto LAB_0333d9e0;
  }
  local_180 = &DAT_0488d648;
  pcStack_178 = (char *)0x1;
  pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
  local_170 = nn::os::GetThreadId(pTVar3);
  local_160 = 0;
  local_158 = (char *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_140[0] = '\0';
  pvStack_188 = (void *)0x10000000000;
  local_190 = local_140;
  local_168 = local_140;
  FUN_0322c554(&local_190,"Patch {} is missing a DEPENDS component for {}",PTR_DAT_047e6700,
               param_1[4],param_2);
  local_158 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkModifiableTypeSet.cpp"
  ;
  local_150 = 0x863;
  if (local_140[0] != '\0') {
    sVar4 = strlen(local_140);
    (local_140 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
    (local_140 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
    printf("%s",local_140);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_0333d9e0:
  if (((ulong)local_168 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_168 + -1,0);
  }
  return 0xffffffff;
}


