/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0339733c; name: FUN_0339733c
 */


ulong FUN_0339733c(long *param_1,undefined8 *param_2,undefined4 *param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  ThreadType *pTVar3;
  size_t sVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
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
  undefined4 local_28;
  undefined4 local_24;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plVar5 = (long *)*param_2;
  param_1[4] = (long)plVar5;
  lVar8 = 8;
  if ((param_4 & 1) == 0) {
    lVar8 = 0;
  }
  lVar6 = ((ulong)*(uint *)(param_2[2] + (long)*(int *)(param_2 + 3) * 0x18 + -0x14) & 0x3fffffff) -
          8;
  param_1[5] = lVar6;
  lVar8 = lVar8 + lVar6;
  uVar2 = plVar5[1] - *plVar5;
  if (((long)uVar2 < lVar8) && (plVar7 = (long *)plVar5[7], plVar7 != (long *)0x0)) {
    uVar2 = (**(code **)(*plVar7 + 0x20))(plVar7,plVar5,lVar8);
  }
  if (lVar8 <= (long)uVar2) {
    lVar8 = *(long *)param_1[4];
    *param_1 = lVar8;
    param_1[1] = param_1[5] + lVar8;
    param_1[2] = lVar8;
    return uVar2;
  }
  if (DAT_0488dfa8 < 2) {
    if (DAT_046aaf68 == '\0') goto LAB_033974ac;
LAB_033974d0:
    local_180 = &DAT_0488df58;
    uStack_178 = 2;
    pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar3);
    local_160 = 0;
    local_158 = (char *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    uStack_188 = 0x10000000000;
    local_140[0] = '\0';
    local_28 = *(undefined4 *)(param_2[2] + (long)*(int *)(param_2 + 3) * 0x18 + -0x18);
    local_190 = local_140;
    local_168 = local_140;
    uVar2 = FUN_0322c554(&local_190,"Short read in section {:x}",PTR_DAT_047e5908,&local_28);
    local_158 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_150 = 0xbb;
    if (local_140[0] != '\0') {
      sVar4 = strlen(local_140);
      (local_140 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
      (local_140 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
      printf("%s",local_140);
      uVar1 = fflush(*(FILE **)PTR_stdout_047cb860);
      uVar2 = (ulong)uVar1;
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_033974d0;
    local_190 = (char *)0x0;
    local_180 = &DAT_0488df58;
    uStack_178 = 2;
    pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar3);
    local_168 = (char *)0x0;
    local_160 = 0;
    local_158 = (char *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    local_24 = *(undefined4 *)(param_2[2] + (long)*(int *)(param_2 + 3) * 0x18 + -0x18);
    FUN_0322c554(&local_190,"Short read in section {:x}",PTR_DAT_047e5908,&local_24);
    local_158 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_150 = 0xbb;
    uVar2 = FUN_0322c8e0(&local_190);
  }
  if (((ulong)local_168 & 1) != 0) {
    uVar2 = (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_168 + -1,0);
  }
LAB_033974ac:
  *param_3 = 0x80040200;
  return uVar2;
}


