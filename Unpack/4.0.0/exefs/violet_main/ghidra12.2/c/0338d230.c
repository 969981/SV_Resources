/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0338d230; name: FUN_0338d230
 */


int * FUN_0338d230(int *param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  ThreadType *pTVar7;
  int *piVar8;
  size_t sVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_1a8;
  long local_1a0 [2];
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
  long local_28;
  
  piVar8 = param_1;
  if (param_1[0x4a] == 1) {
    plVar3 = (long *)*param_2;
    plVar4 = (long *)param_2[1];
    if (7 < (long)plVar4 - (long)plVar3) {
      plVar1 = plVar3 + 1;
      if (plVar4 < plVar1) {
        *param_2 = (ulong)plVar4;
        *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
        local_28 = 0;
LAB_0338d45c:
        *param_1 = -0x7ffbfe00;
LAB_0338d468:
        if (DAT_0488dfa8 == '\0') {
          if (DAT_046aaf68 == '\0') {
            return param_1;
          }
        }
        else if (DAT_046aaf68 == '\0') {
          local_190 = (char *)0x0;
          local_180 = &DAT_0488df58;
          uStack_178 = 1;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_170 = nn::os::GetThreadId(pTVar7);
          local_168 = (char *)0x0;
          local_160 = 0;
          local_158 = (char *)0x0;
          local_150 = 0;
          uStack_148 = 0;
          FUN_0322c554(&local_190,"Error in input stream.",PTR_DAT_047d1b38);
          local_150 = 0x846;
LAB_0338d4cc:
          local_158 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          piVar8 = (int *)FUN_0322c8e0(&local_190);
          goto LAB_0338d4d8;
        }
        local_180 = &DAT_0488df58;
        uStack_178 = 1;
        pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
        local_170 = nn::os::GetThreadId(pTVar7);
        local_190 = local_140;
        local_160 = 0;
        local_158 = (char *)0x0;
        local_150 = 0;
        uStack_148 = 0;
        local_140[0] = '\0';
        uStack_188 = 0x10000000000;
        local_168 = local_190;
        piVar8 = (int *)FUN_0322c554(&local_190,"Error in input stream.",PTR_DAT_047d1b38);
        local_150 = 0x846;
      }
      else {
        local_28 = *plVar3;
        *param_2 = (ulong)plVar1;
        if ((char)param_2[3] != '\0') goto LAB_0338d45c;
        if (*param_1 < 0) goto LAB_0338d468;
        plVar2 = (long *)(param_1 + 0x46);
        if (0 < param_1[0x48]) {
          uVar11 = 0;
          do {
            if (*(long *)(*plVar2 + uVar11 * 8) == local_28) {
              if ((int)uVar11 != -1) {
                if ((param_3 & 1) == 0) {
                  return param_1;
                }
                if ((long)plVar4 - (long)plVar1 != 0x10) {
                  if (DAT_0488dfa8 == '\0') {
                    if (DAT_046aaf68 == '\0') goto LAB_0338d504;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_190 = (char *)0x0;
                    local_180 = &DAT_0488df58;
                    uStack_178 = 1;
                    pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
                    local_170 = nn::os::GetThreadId(pTVar7);
                    local_168 = (char *)0x0;
                    local_160 = 0;
                    local_158 = (char *)0x0;
                    local_150 = 0;
                    uStack_148 = 0;
                    FUN_0322c554(&local_190,"COMPENDIUM_REFERENCE wrong size",PTR_DAT_047d1b38);
                    local_150 = 0x84f;
                    goto LAB_0338d354;
                  }
                  local_180 = &DAT_0488df58;
                  uStack_178 = 1;
                  pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
                  local_170 = nn::os::GetThreadId(pTVar7);
                  local_190 = local_140;
                  local_160 = 0;
                  local_158 = (char *)0x0;
                  local_150 = 0;
                  uStack_148 = 0;
                  local_140[0] = '\0';
                  uStack_188 = 0x10000000000;
                  local_168 = local_190;
                  piVar8 = (int *)FUN_0322c554(&local_190,"COMPENDIUM_REFERENCE wrong size",
                                               PTR_DAT_047d1b38);
                  local_150 = 0x84f;
                  goto LAB_0338d40c;
                }
                if (plVar4 < plVar3 + 3) {
                  *param_2 = (ulong)plVar4;
                  *(undefined1 *)(param_2 + 3) = 1;
                }
                else {
                  *param_2 = (ulong)(plVar3 + 3);
                }
                if ((*plVar1 == 0) && (plVar3[2] == 0)) {
                  lVar10 = *(long *)(param_1 + 4);
                  iVar5 = param_1[6];
                  *plVar1 = lVar10;
                  plVar3[2] = lVar10 + (long)iVar5 * 8;
                  return param_1;
                }
                if (DAT_0488dfa8 == '\0') {
                  if (DAT_046aaf68 == '\0') goto LAB_0338d504;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_190 = (char *)0x0;
                  local_180 = &DAT_0488df58;
                  uStack_178 = 1;
                  pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
                  local_170 = nn::os::GetThreadId(pTVar7);
                  local_168 = (char *)0x0;
                  local_160 = 0;
                  local_158 = (char *)0x0;
                  local_150 = 0;
                  uStack_148 = 0;
                  FUN_0322c554(&local_190,"Buffer already inplace loaded",PTR_DAT_047d1b38);
                  local_150 = 0x854;
                  goto LAB_0338d354;
                }
                local_180 = &DAT_0488df58;
                uStack_178 = 1;
                pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
                local_170 = nn::os::GetThreadId(pTVar7);
                local_190 = local_140;
                local_160 = 0;
                local_158 = (char *)0x0;
                local_150 = 0;
                uStack_148 = 0;
                local_140[0] = '\0';
                uStack_188 = 0x10000000000;
                local_168 = local_190;
                piVar8 = (int *)FUN_0322c554(&local_190,"Buffer already inplace loaded",
                                             PTR_DAT_047d1b38);
                local_150 = 0x854;
                goto LAB_0338d40c;
              }
              break;
            }
            uVar11 = uVar11 + 1;
          } while ((uint)param_1[0x48] != uVar11);
        }
        if (DAT_0488dfa8 != '\0') {
          if (DAT_046aaf68 != '\0') goto LAB_0338d6b8;
          local_190 = (char *)0x0;
          local_180 = &DAT_0488df58;
          uStack_178 = 1;
          pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
          local_170 = nn::os::GetThreadId(pTVar7);
          local_168 = (char *)0x0;
          local_160 = 0;
          local_158 = (char *)0x0;
          local_150 = 0;
          uStack_148 = 0;
          FUN_0322c554(&local_190,"Compendium with signature {} needed to load ({} are loaded)",
                       &DAT_047b2b48,&local_28,plVar2);
          local_150 = 0x849;
          goto LAB_0338d4cc;
        }
        if (DAT_046aaf68 == '\0') {
          return param_1;
        }
LAB_0338d6b8:
        local_180 = &DAT_0488df58;
        uStack_178 = 1;
        pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
        local_170 = nn::os::GetThreadId(pTVar7);
        local_190 = local_140;
        local_160 = 0;
        local_158 = (char *)0x0;
        local_140[0] = '\0';
        local_150 = 0;
        uStack_148 = 0;
        uStack_188 = 0x10000000000;
        local_168 = local_190;
        piVar8 = (int *)FUN_0322c554(&local_190,
                                     "Compendium with signature {} needed to load ({} are loaded)",
                                     &DAT_047b2b48,&local_28,plVar2);
        local_150 = 0x849;
      }
      local_158 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      if (local_140[0] != '\0') {
        sVar9 = strlen(local_140);
        (local_140 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = '\n';
        (local_140 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = '\0';
        printf("%s",local_140);
        uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
        piVar8 = (int *)(ulong)uVar6;
      }
LAB_0338d4d8:
      if (((ulong)local_168 & 1) == 0) {
        return piVar8;
      }
      piVar8 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_168 + -1,0);
      return piVar8;
    }
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_0338d504;
    }
    else if (DAT_046aaf68 == '\0') {
      local_190 = (char *)0x0;
      local_180 = &DAT_0488df58;
      uStack_178 = 1;
      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
      local_170 = nn::os::GetThreadId(pTVar7);
      local_168 = (char *)0x0;
      local_160 = 0;
      local_158 = (char *)0x0;
      local_150 = 0;
      uStack_148 = 0;
      local_28 = param_2[1] - *param_2;
      local_1a0[1] = 8;
      FUN_0322c554(&local_190,"TCRF chunk is the wrong size ({}, expected at least {})",
                   &DAT_047b2b30,&local_28,local_1a0 + 1);
      local_150 = 0x844;
      goto LAB_0338d354;
    }
    local_180 = &DAT_0488df58;
    uStack_178 = 1;
    pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar7);
    local_160 = 0;
    local_158 = (char *)0x0;
    uStack_188 = 0x10000000000;
    local_150 = 0;
    uStack_148 = 0;
    local_140[0] = '\0';
    local_1a0[0] = param_2[1] - *param_2;
    local_1a8 = 8;
    local_190 = local_140;
    local_168 = local_140;
    piVar8 = (int *)FUN_0322c554(&local_190,
                                 "TCRF chunk is the wrong size ({}, expected at least {})",
                                 &DAT_047b2b30,local_1a0,&local_1a8);
    local_158 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    local_150 = 0x844;
    if (local_140[0] != '\0') {
      sVar9 = strlen(local_140);
      (local_140 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = '\n';
      (local_140 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = '\0';
      goto LAB_0338d998;
    }
  }
  else {
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_0338d504;
    }
    else if (DAT_046aaf68 == '\0') {
      local_190 = (char *)0x0;
      local_180 = &DAT_0488df58;
      uStack_178 = 1;
      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
      local_170 = nn::os::GetThreadId(pTVar7);
      local_168 = (char *)0x0;
      local_160 = 0;
      local_158 = (char *)0x0;
      local_150 = 0;
      uStack_148 = 0;
      FUN_0322c554(&local_190,"Encountered compendium reference, but no compendium loaded",
                   PTR_DAT_047d1b38);
      local_150 = 0x843;
LAB_0338d354:
      local_158 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      piVar8 = (int *)FUN_0322c8e0(&local_190);
      goto LAB_0338d360;
    }
    local_180 = &DAT_0488df58;
    uStack_178 = 1;
    pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar7);
    local_190 = local_140;
    local_160 = 0;
    local_158 = (char *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    local_140[0] = '\0';
    uStack_188 = 0x10000000000;
    local_168 = local_190;
    piVar8 = (int *)FUN_0322c554(&local_190,
                                 "Encountered compendium reference, but no compendium loaded",
                                 PTR_DAT_047d1b38);
    local_150 = 0x843;
LAB_0338d40c:
    local_158 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    if (local_140[0] != '\0') {
      sVar9 = strlen(local_140);
      (local_140 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = '\n';
      (local_140 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = '\0';
LAB_0338d998:
      printf("%s",local_140);
      uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
      piVar8 = (int *)(ulong)uVar6;
    }
  }
LAB_0338d360:
  if (((ulong)local_168 & 1) != 0) {
    piVar8 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_168 + -1,0);
  }
LAB_0338d504:
  *param_1 = -0x7ffbfe00;
  return piVar8;
}


