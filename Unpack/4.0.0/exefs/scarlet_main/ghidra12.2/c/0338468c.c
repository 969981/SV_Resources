/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0338468c; name: FUN_0338468c
 */


int * FUN_0338468c(int *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int *piVar2;
  ThreadType *pTVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  size_t sVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  undefined8 local_1b0;
  undefined8 *local_1a8;
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
  uint local_34;
  
  if ((param_3 & 1) != 0) {
    return param_1;
  }
  if (param_1[6] != param_1[0x1a]) {
    if (DAT_0488dfa8 == '\0') {
      piVar4 = param_1;
      if (DAT_046aaf68 == '\0') goto LAB_0338482c;
LAB_03384ee8:
      local_190 = &DAT_0488df58;
      uStack_188 = 1;
      pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar3);
      local_1a0 = local_150;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      local_150[0] = '\0';
      uStack_198 = 0x10000000000;
      local_178 = local_1a0;
      piVar4 = (int *)FUN_0322c554(&local_1a0,"Type bodies have not been read yet",PTR_DAT_047d1b38)
      ;
      local_160 = 0x801;
LAB_03384f44:
      local_168 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      if (local_150[0] != '\0') {
        sVar7 = strlen(local_150);
        (local_150 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[0] = '\n';
        (local_150 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[1] = '\0';
        printf("%s",local_150);
        uVar1 = fflush(*(FILE **)PTR_stdout_047cb860);
        piVar4 = (int *)(ulong)uVar1;
      }
    }
    else {
      if (DAT_046aaf68 != '\0') goto LAB_03384ee8;
      local_1a0 = (char *)0x0;
      local_190 = &DAT_0488df58;
      uStack_188 = 1;
      pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar3);
      local_178 = (char *)0x0;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      FUN_0322c554(&local_1a0,"Type bodies have not been read yet",PTR_DAT_047d1b38);
      local_160 = 0x801;
LAB_03384748:
      local_168 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      piVar4 = (int *)FUN_0322c8e0(&local_1a0);
    }
    if (((ulong)local_178 & 1) != 0) {
      piVar4 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_178 + -1,0);
    }
LAB_0338482c:
    *param_1 = -0x7ffbfe00;
    return piVar4;
  }
  piVar2 = (int *)FUN_03391790(param_2);
  if ((ulong)piVar2 >> 0x1f == 0) {
    if (*(char *)(param_2 + 0x18) != '\0') goto LAB_03384784;
    if (*param_1 < 0) goto LAB_03384790;
    if ((int)piVar2 < 1) {
      return piVar2;
    }
    iVar12 = 0;
    while( true ) {
      uVar5 = FUN_03391790(param_2);
      if (uVar5 >> 0x1f != 0) {
        *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
      }
      uVar6 = FUN_03391790(param_2);
      if (uVar6 >> 0x20 != 0) {
        *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
      }
      local_34 = (uint)uVar6;
      piVar4 = (int *)FUN_03391790(param_2);
      if ((int *)0xffff < piVar4) break;
      if (*(char *)(param_2 + 0x18) != '\0') goto LAB_03384ac8;
      if (*param_1 < 0) goto LAB_03384ad4;
      if (((int)uVar5 < 1) || (param_1[0x1a] <= (int)uVar5)) {
        if (DAT_0488dfa8 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_0338482c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1a0 = (char *)0x0;
          local_190 = &DAT_0488df58;
          uStack_188 = 1;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_180 = nn::os::GetThreadId(pTVar3);
          local_178 = (char *)0x0;
          local_170 = 0;
          local_168 = (char *)0x0;
          local_160 = 0;
          uStack_158 = 0;
          FUN_0322c554(&local_1a0,"Invalid context ID (out of bounds) when reading decl",
                       PTR_DAT_047d1b38);
          local_160 = 0x80d;
          goto LAB_03384748;
        }
        local_190 = &DAT_0488df58;
        uStack_188 = 1;
        pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar3);
        local_1a0 = local_150;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        local_150[0] = '\0';
        uStack_198 = 0x10000000000;
        local_178 = local_1a0;
        piVar4 = (int *)FUN_0322c554(&local_1a0,
                                     "Invalid context ID (out of bounds) when reading decl",
                                     PTR_DAT_047d1b38);
        local_160 = 0x80d;
        goto LAB_03384f44;
      }
      local_1a8 = *(undefined8 **)(*(long *)(param_1 + 4) + (uVar5 & 0xffffffff) * 8);
      if (param_1[0x22] <= (int)piVar4) {
        if (DAT_0488dfa8 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_0338482c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1a0 = (char *)0x0;
          local_190 = &DAT_0488df58;
          uStack_188 = 1;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_180 = nn::os::GetThreadId(pTVar3);
          local_178 = (char *)0x0;
          local_170 = 0;
          local_168 = (char *)0x0;
          local_160 = 0;
          uStack_158 = 0;
          FUN_0322c554(&local_1a0,"Invalid field name string ID (out of bounds)",PTR_DAT_047d1b38);
          local_160 = 0x811;
          goto LAB_03384748;
        }
        local_190 = &DAT_0488df58;
        uStack_188 = 1;
        pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar3);
        local_1a0 = local_150;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        local_150[0] = '\0';
        uStack_198 = 0x10000000000;
        local_178 = local_1a0;
        piVar4 = (int *)FUN_0322c554(&local_1a0,"Invalid field name string ID (out of bounds)",
                                     PTR_DAT_047d1b38);
        local_160 = 0x811;
        goto LAB_03384f44;
      }
      local_1b0 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)piVar4 * 8);
      puVar8 = local_1a8;
      while (((uint)*puVar8 >> 0x17 & 1) == 0) {
        puVar8 = (undefined8 *)puVar8[1];
        if (puVar8 == (undefined8 *)0x0) goto LAB_033849e8;
      }
      uVar1 = (uint)*puVar8 & 0x7fffff;
      psVar9 = (short *)puVar8[(ulong)(byte)(POPCOUNT((char)uVar1) + POPCOUNT((char)(uVar1 >> 8)) +
                                            POPCOUNT((char)(uVar1 >> 0x10))) + 2];
      if (psVar9 == (short *)0x0) {
LAB_033849e8:
        if (DAT_0488dfa8 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_0338482c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1a0 = (char *)0x0;
          local_190 = &DAT_0488df58;
          uStack_188 = 1;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_180 = nn::os::GetThreadId(pTVar3);
          local_178 = (char *)0x0;
          local_170 = 0;
          local_168 = (char *)0x0;
          local_160 = 0;
          uStack_158 = 0;
          FUN_0322c554(&local_1a0,"Cannot add decl to \'{}\' as it does not have Opt::DECLS",
                       PTR_DAT_047e5c18,&local_1a8);
          local_160 = 0x816;
          goto LAB_03384748;
        }
        local_190 = &DAT_0488df58;
        uStack_188 = 1;
        pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar3);
        local_1a0 = local_150;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        local_150[0] = '\0';
        uStack_198 = 0x10000000000;
        local_178 = local_1a0;
        piVar4 = (int *)FUN_0322c554(&local_1a0,
                                     "Cannot add decl to \'{}\' as it does not have Opt::DECLS",
                                     PTR_DAT_047e5c18,&local_1a8);
        local_160 = 0x816;
        goto LAB_03384f44;
      }
      if ((uint)((int)psVar9[1] + (int)*psVar9) <= (uint)uVar6) {
        if (DAT_0488dfa8 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_0338482c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1a0 = (char *)0x0;
          local_190 = &DAT_0488df58;
          uStack_188 = 1;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_180 = nn::os::GetThreadId(pTVar3);
          local_178 = (char *)0x0;
          local_170 = 0;
          local_168 = (char *)0x0;
          local_160 = 0;
          uStack_158 = 0;
          FUN_0322c554(&local_1a0,"Invalid decl index (out of bounds)",PTR_DAT_047d1b38);
          local_160 = 0x817;
          goto LAB_03384748;
        }
        local_190 = &DAT_0488df58;
        uStack_188 = 1;
        pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar3);
        local_1a0 = local_150;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        local_150[0] = '\0';
        uStack_198 = 0x10000000000;
        local_178 = local_1a0;
        piVar4 = (int *)FUN_0322c554(&local_1a0,"Invalid decl index (out of bounds)",
                                     PTR_DAT_047d1b38);
        local_160 = 0x817;
        goto LAB_03384f44;
      }
      puVar10 = *(undefined8 **)((long)psVar9 + ((long)(uVar6 << 0x20) >> 0x1d) + 8);
      uVar1 = (uint)*puVar10;
      puVar8 = puVar10;
      if ((uVar1 >> 0x10 & 1) == 0) {
        do {
          puVar8 = (undefined8 *)puVar8[1];
          uVar11 = (uint)*puVar8;
        } while ((uVar11 >> 0x10 & 1) == 0);
      }
      else {
        uVar11 = uVar1;
      }
      if (*(char *)puVar8[(ulong)(byte)(POPCOUNT((char)(uVar11 & 0xffff)) +
                                       POPCOUNT((char)((uVar11 & 0xffff) >> 8))) + 2] != '$') {
        if (DAT_0488dfa8 == '\0') {
          if (DAT_046aaf68 == '\0') goto LAB_0338482c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1a0 = (char *)0x0;
          local_190 = &DAT_0488df58;
          uStack_188 = 1;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_180 = nn::os::GetThreadId(pTVar3);
          local_178 = (char *)0x0;
          local_170 = 0;
          local_168 = (char *)0x0;
          local_160 = 0;
          uStack_158 = 0;
          FUN_0322c554(&local_1a0,"Decl {} of \'{}\' (\'{}\') has already been read",&DAT_047b2b10,
                       &local_34,&local_1a8,&local_1b0);
          local_160 = 0x81a;
          goto LAB_03384748;
        }
        local_190 = &DAT_0488df58;
        uStack_188 = 1;
        pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar3);
        local_1a0 = local_150;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_150[0] = '\0';
        local_160 = 0;
        uStack_158 = 0;
        uStack_198 = 0x10000000000;
        local_178 = local_1a0;
        piVar4 = (int *)FUN_0322c554(&local_1a0,"Decl {} of \'{}\' (\'{}\') has already been read",
                                     &DAT_047b2b10,&local_34,&local_1a8,&local_1b0);
        local_160 = 0x81a;
        goto LAB_03384f44;
      }
      uVar5 = CONCAT44(uVar1,uVar1) & 0xffff0000ffff;
      iVar12 = iVar12 + 1;
      puVar10[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8))) + 2] = local_1b0;
      if (iVar12 == (int)piVar2) {
        return piVar4;
      }
    }
    *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
LAB_03384ac8:
    *param_1 = -0x7ffbfe00;
LAB_03384ad4:
    if (DAT_0488dfa8 != '\0') {
      if (DAT_046aaf68 != '\0') goto LAB_03384b40;
      local_1a0 = (char *)0x0;
      local_190 = &DAT_0488df58;
      uStack_188 = 1;
      pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar3);
      local_178 = (char *)0x0;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      FUN_0322c554(&local_1a0,"Error in input stream.",PTR_DAT_047d1b38);
      local_160 = 0x80a;
      goto LAB_033847f4;
    }
    if (DAT_046aaf68 == '\0') {
      return piVar4;
    }
LAB_03384b40:
    local_190 = &DAT_0488df58;
    uStack_188 = 1;
    pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
    local_180 = nn::os::GetThreadId(pTVar3);
    local_1a0 = local_150;
    local_170 = 0;
    local_168 = (char *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    local_150[0] = '\0';
    uStack_198 = 0x10000000000;
    local_178 = local_1a0;
    piVar4 = (int *)FUN_0322c554(&local_1a0,"Error in input stream.",PTR_DAT_047d1b38);
    local_160 = 0x80a;
  }
  else {
    *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
LAB_03384784:
    *param_1 = -0x7ffbfe00;
LAB_03384790:
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') {
        return piVar2;
      }
    }
    else if (DAT_046aaf68 == '\0') {
      local_1a0 = (char *)0x0;
      local_190 = &DAT_0488df58;
      uStack_188 = 1;
      pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
      local_180 = nn::os::GetThreadId(pTVar3);
      local_178 = (char *)0x0;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      FUN_0322c554(&local_1a0,"Error in input stream.",PTR_DAT_047d1b38);
      local_160 = 0x804;
LAB_033847f4:
      local_168 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      piVar4 = (int *)FUN_0322c8e0(&local_1a0);
      goto LAB_03384800;
    }
    local_190 = &DAT_0488df58;
    uStack_188 = 1;
    pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
    local_180 = nn::os::GetThreadId(pTVar3);
    local_1a0 = local_150;
    local_170 = 0;
    local_168 = (char *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    local_150[0] = '\0';
    uStack_198 = 0x10000000000;
    local_178 = local_1a0;
    piVar4 = (int *)FUN_0322c554(&local_1a0,"Error in input stream.",PTR_DAT_047d1b38);
    local_160 = 0x804;
  }
  local_168 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  if (local_150[0] != '\0') {
    sVar7 = strlen(local_150);
    (local_150 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[0] = '\n';
    (local_150 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[1] = '\0';
    printf("%s",local_150);
    uVar1 = fflush(*(FILE **)PTR_stdout_047cb860);
    piVar4 = (int *)(ulong)uVar1;
  }
LAB_03384800:
  if (((ulong)local_178 & 1) != 0) {
    piVar4 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_178 + -1,0);
  }
  return piVar4;
}


