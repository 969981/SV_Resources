/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0338dd08; name: FUN_0338dd08
 */


undefined4 * FUN_0338dd08(undefined4 *param_1,ulong *param_2)

{
  uint uVar1;
  ThreadType *pTVar2;
  undefined4 *puVar3;
  size_t sVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
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
  
  puVar3 = param_1;
  if (param_1[0x4a] == 2) {
    puVar6 = (undefined8 *)*param_2;
    puVar8 = (undefined8 *)param_2[1];
    if (((int)puVar8 - (int)puVar6 & 7U) == 0) {
      if (puVar8 == puVar6) {
        return param_1;
      }
      do {
        if (puVar8 < puVar6 + 1) {
          uVar9 = 0;
          *param_2 = (ulong)puVar8;
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
        }
        else {
          uVar9 = *puVar6;
          *param_2 = (ulong)(puVar6 + 1);
        }
        iVar5 = param_1[0x48];
        lVar7 = (long)iVar5;
        if ((int)(param_1[0x49] & 0x7fffffff) <= iVar5) {
          puVar3 = (undefined4 *)FUN_03394ab8(param_1 + 0x46,lVar7 + 1);
          iVar5 = param_1[0x48];
        }
        *(undefined8 *)(*(long *)(param_1 + 0x46) + (long)iVar5 * 8) = uVar9;
        param_1[0x48] = (int)(lVar7 + 1);
        puVar6 = (undefined8 *)*param_2;
        puVar8 = (undefined8 *)param_2[1];
      } while (puVar8 != puVar6);
      return puVar3;
    }
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_0338df28;
LAB_0338df4c:
      local_180 = &DAT_0488df58;
      uStack_178 = 1;
      pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
      local_170 = nn::os::GetThreadId(pTVar2);
      local_190 = local_140;
      local_160 = 0;
      local_158 = (char *)0x0;
      local_150 = 0;
      uStack_148 = 0;
      local_140[0] = '\0';
      uStack_188 = 0x10000000000;
      local_168 = local_190;
      puVar3 = (undefined4 *)
               FUN_0322c554(&local_190,"Type compendium ID has the wrong size.",PTR_DAT_047d1b38);
      local_150 = 0x839;
      goto LAB_0338dfa8;
    }
    if (DAT_046aaf68 != '\0') goto LAB_0338df4c;
    local_190 = (char *)0x0;
    local_180 = &DAT_0488df58;
    uStack_178 = 1;
    pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar2);
    local_168 = (char *)0x0;
    local_160 = 0;
    local_158 = (char *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    FUN_0322c554(&local_190,"Type compendium ID has the wrong size.",PTR_DAT_047d1b38);
    local_150 = 0x839;
LAB_0338de10:
    local_158 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    puVar3 = (undefined4 *)FUN_0322c8e0(&local_190);
  }
  else {
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_0338df28;
    }
    else if (DAT_046aaf68 == '\0') {
      local_190 = (char *)0x0;
      local_180 = &DAT_0488df58;
      uStack_178 = 1;
      pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
      local_170 = nn::os::GetThreadId(pTVar2);
      local_168 = (char *)0x0;
      local_160 = 0;
      local_158 = (char *)0x0;
      local_150 = 0;
      uStack_148 = 0;
      FUN_0322c554(&local_190,"Unexpected compendium ID section (TCID).",PTR_DAT_047d1b38);
      local_150 = 0x838;
      goto LAB_0338de10;
    }
    local_180 = &DAT_0488df58;
    uStack_178 = 1;
    pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar2);
    local_190 = local_140;
    local_160 = 0;
    local_158 = (char *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    local_140[0] = '\0';
    uStack_188 = 0x10000000000;
    local_168 = local_190;
    puVar3 = (undefined4 *)
             FUN_0322c554(&local_190,"Unexpected compendium ID section (TCID).",PTR_DAT_047d1b38);
    local_150 = 0x838;
LAB_0338dfa8:
    local_158 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    if (local_140[0] != '\0') {
      sVar4 = strlen(local_140);
      (local_140 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
      (local_140 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
      printf("%s",local_140);
      uVar1 = fflush(*(FILE **)PTR_stdout_047cb860);
      puVar3 = (undefined4 *)(ulong)uVar1;
    }
  }
  if (((ulong)local_168 & 1) != 0) {
    puVar3 = (undefined4 *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_168 + -1,0);
  }
LAB_0338df28:
  *param_1 = 0x80040200;
  return puVar3;
}


