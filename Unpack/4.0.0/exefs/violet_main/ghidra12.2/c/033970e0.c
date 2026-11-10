/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033970e0; name: FUN_033970e0
 */


undefined8 FUN_033970e0(undefined8 *param_1,long *param_2,long *param_3)

{
  void *__src;
  void *__dest;
  long *plVar1;
  ThreadType *pTVar2;
  size_t __n;
  long *plVar3;
  size_t sVar4;
  char *local_1a0;
  undefined8 uStack_198;
  undefined8 *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  char local_150 [256];
  
  __n = ((ulong)*(uint *)(param_2[2] + (long)(int)param_2[3] * 0x18 + -0x14) & 0x3fffffff) - 8;
  __dest = (void *)(**(code **)(*param_3 + 0x18))(param_3);
  plVar3 = (long *)*param_2;
  __src = (void *)*plVar3;
  sVar4 = plVar3[1] - (long)__src;
  if ((long)__n <= (long)sVar4) {
    memcpy(__dest,__src,__n);
    *plVar3 = *plVar3 + __n;
LAB_033971a8:
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = __dest;
    param_1[1] = (long)__dest + __n;
    param_1[2] = __dest;
    return 0;
  }
  plVar1 = (long *)plVar3[7];
  if (plVar1 == (long *)0x0) {
    memcpy(__dest,__src,sVar4);
    *plVar3 = plVar3[1];
  }
  else {
    sVar4 = (**(code **)(*plVar1 + 0x38))(plVar1,plVar3,__dest,__n);
  }
  if (sVar4 == __n) goto LAB_033971a8;
  if (DAT_0488dfa8 == '\0') {
    if (DAT_046aaf68 == '\0') goto LAB_0339725c;
LAB_03397290:
    local_190 = &DAT_0488df58;
    uStack_188 = 1;
    pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
    local_180 = nn::os::GetThreadId(pTVar2);
    local_170 = 0;
    local_168 = (char *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    local_150[0] = '\0';
    uStack_198 = 0x10000000000;
    local_1a0 = local_150;
    local_178 = local_150;
    FUN_0322c554(&local_1a0,"Invalid section size",PTR_DAT_047d1b38);
    local_168 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_160 = 0x98;
    if (local_150[0] != '\0') {
      sVar4 = strlen(local_150);
      (local_150 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
      (local_150 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
      printf("%s",local_150);
      fflush(*(FILE **)PTR_stdout_047cb860);
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_03397290;
    local_1a0 = (char *)0x0;
    local_190 = &DAT_0488df58;
    uStack_188 = 1;
    pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
    local_180 = nn::os::GetThreadId(pTVar2);
    local_178 = (char *)0x0;
    local_170 = 0;
    local_168 = (char *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    FUN_0322c554(&local_1a0,"Invalid section size",PTR_DAT_047d1b38);
    local_168 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_160 = 0x98;
    FUN_0322c8e0(&local_1a0);
  }
  if (((ulong)local_178 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_178 + -1,0);
  }
LAB_0339725c:
  *(byte *)(*param_2 + 0x20) = *(byte *)(*param_2 + 0x20) | 2;
  return 0x80040200;
}


