/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03385040; name: FUN_03385040
 */


int * FUN_03385040(int *param_1,ulong *param_2,ulong param_3,long param_4)

{
  MutexType *pMVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ThreadType *pTVar8;
  ulong uVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  int *local_218;
  int *piStack_210;
  ulong local_208;
  ulong local_200;
  long local_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined4 local_1e0;
  int *local_1d8;
  int *piStack_1d0;
  ulong local_1c8;
  ulong local_1c0;
  int local_1b4;
  char *local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  char local_160 [256];
  int local_48;
  int local_44;
  
  if ((param_3 & 1) == 0) {
    return param_1;
  }
  if (param_4 == 0) {
    lVar15 = *(long *)PTR_DAT_047e3fe8;
    pMVar1 = (MutexType *)(lVar15 + 0xc0);
    nn::os::LockMutex(pMVar1);
    local_1d8 = (int *)*param_2;
    piStack_1d0 = (int *)param_2[1];
    local_1c8 = param_2[2];
    local_1c0 = param_2[3];
    lVar11 = *(long *)(param_1 + 4);
    iVar3 = param_1[6];
    uVar13 = FUN_03391790(&local_1d8);
    if (uVar13 >> 0x1f == 0) {
      if ((char)local_1c0 != '\0') goto LAB_0338522c;
      if (-1 < *param_1) {
        if (0 < (int)uVar13) {
          do {
            uVar9 = FUN_03391790(&local_1d8);
            if (uVar9 >> 0x1f != 0) {
              local_1c0 = local_1c0 | 2;
            }
            piVar7 = local_1d8 + 1;
            iVar5 = (int)uVar9;
            local_1f8 = CONCAT44(local_1f8._4_4_,iVar5);
            if (piStack_1d0 < piVar7) {
              local_1d8 = piStack_1d0;
              local_44 = 0;
              local_1c0 = local_1c0 | 3;
LAB_033856dc:
              *param_1 = -0x7ffbfe00;
LAB_033856e8:
              if (DAT_0488dfa8 == '\0') {
                if (DAT_046aaf68 == '\0') break;
              }
              else if (DAT_046aaf68 == '\0') {
                local_1b0 = (char *)0x0;
                local_1a0 = &DAT_0488df58;
                uStack_198 = 1;
                pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
                local_190 = nn::os::GetThreadId(pTVar8);
                local_188 = (char *)0x0;
                local_180 = 0;
                local_178 = (char *)0x0;
                local_170 = 0;
                uStack_168 = 0;
                FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
                local_170 = 0x96c;
                goto LAB_0338529c;
              }
              local_1a0 = &DAT_0488df58;
              uStack_198 = 1;
              pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
              local_190 = nn::os::GetThreadId(pTVar8);
              local_1b0 = local_160;
              local_180 = 0;
              local_178 = (char *)0x0;
              local_170 = 0;
              uStack_168 = 0;
              local_160[0] = '\0';
              uStack_1a8 = 0x10000000000;
              local_188 = local_1b0;
              FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
              local_170 = 0x96c;
              goto LAB_03385c00;
            }
            iVar4 = *local_1d8;
            local_1d8 = piVar7;
            local_44 = iVar4;
            if ((char)local_1c0 != '\0') goto LAB_033856dc;
            if (*param_1 < 0) goto LAB_033856e8;
            if ((iVar5 < 1) || (iVar3 <= iVar5)) {
              if (DAT_0488dfa8 != '\0') {
                if (DAT_046aaf68 != '\0') goto LAB_03385a1c;
                local_1b0 = (char *)0x0;
                local_1a0 = &DAT_0488df58;
                uStack_198 = 1;
                pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
                local_190 = nn::os::GetThreadId(pTVar8);
                local_188 = (char *)0x0;
                local_180 = 0;
                local_178 = (char *)0x0;
                local_170 = 0;
                uStack_168 = 0;
                FUN_0322c554(&local_1b0,"Invalid type ID (out of bounds) when reading property hash"
                             ,PTR_DAT_047d1b38);
                local_170 = 0x971;
LAB_03385904:
                local_178 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                ;
                FUN_0322c8e0(&local_1b0);
                goto LAB_03385910;
              }
              if (DAT_046aaf68 != '\0') {
LAB_03385a1c:
                local_1a0 = &DAT_0488df58;
                uStack_198 = 1;
                pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
                local_190 = nn::os::GetThreadId(pTVar8);
                local_1b0 = local_160;
                local_180 = 0;
                local_178 = (char *)0x0;
                local_170 = 0;
                uStack_168 = 0;
                local_160[0] = '\0';
                uStack_1a8 = 0x10000000000;
                local_188 = local_1b0;
                FUN_0322c554(&local_1b0,"Invalid type ID (out of bounds) when reading property hash"
                             ,PTR_DAT_047d1b38);
                local_170 = 0x971;
                goto LAB_03385d88;
              }
LAB_03385ae8:
              *param_1 = -0x7ffbfe00;
              break;
            }
            lVar12 = *(long *)(lVar11 + (uVar9 & 0xffffffff) * 8);
            if (lVar12 == 0) {
              if (DAT_0488dfa8 == '\0') {
                if (DAT_046aaf68 == '\0') goto LAB_03385ae8;
              }
              else if (DAT_046aaf68 == '\0') {
                local_1b0 = (char *)0x0;
                local_1a0 = &DAT_0488df58;
                uStack_198 = 1;
                pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
                local_190 = nn::os::GetThreadId(pTVar8);
                local_188 = (char *)0x0;
                local_180 = 0;
                local_178 = (char *)0x0;
                local_170 = 0;
                uStack_168 = 0;
                FUN_0322c554(&local_1b0,
                             "Type ${} is not initialized; HASHES section must have been loaded before PROPS_HASHES"
                             ,&DAT_044e9048,&local_1f8);
                local_170 = 0x974;
                goto LAB_03385904;
              }
              local_1a0 = &DAT_0488df58;
              uStack_198 = 1;
              pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
              local_190 = nn::os::GetThreadId(pTVar8);
              local_1b0 = local_160;
              local_180 = 0;
              local_178 = (char *)0x0;
              local_170 = 0;
              uStack_168 = 0;
              local_160[0] = '\0';
              uStack_1a8 = 0x10000000000;
              local_188 = local_1b0;
              FUN_0322c554(&local_1b0,
                           "Type ${} is not initialized; HASHES section must have been loaded before PROPS_HASHES"
                           ,&DAT_044e9048,&local_1f8);
              local_170 = 0x974;
LAB_03385d88:
              local_178 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
              ;
              if (local_160[0] != '\0') {
                sVar10 = strlen(local_160);
                (local_160 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[0] = '\n';
                (local_160 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[1] = '\0';
                printf("%s",local_160);
                fflush(*(FILE **)PTR_stdout_047cb860);
              }
LAB_03385910:
              if (((ulong)local_188 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
              }
              goto LAB_03385ae8;
            }
            local_48 = FUN_031ea078(lVar15 + 0x80,lVar12,&local_1b0);
            if (iVar4 != local_48) {
              if (DAT_0488dfa8 == '\0') {
                if (DAT_046aaf68 == '\0') goto LAB_03385ae8;
              }
              else if (DAT_046aaf68 == '\0') {
                local_1b0 = (char *)0x0;
                local_1a0 = &DAT_0488df58;
                uStack_198 = 1;
                pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
                local_190 = nn::os::GetThreadId(pTVar8);
                local_188 = (char *)0x0;
                local_180 = 0;
                local_178 = (char *)0x0;
                local_170 = 0;
                uStack_168 = 0;
                FUN_0322c554(&local_1b0,
                             "Property hash in file for type ${}, \'{}\' ({}) does not match native hash ({})"
                             ,&DAT_047b2b98,&local_1f8,
                             *(long *)(param_1 + 0x18) + (long)(int)local_1f8 * 8,&local_44,
                             &local_48);
                local_170 = 0x97b;
                goto LAB_03385904;
              }
              local_1a0 = &DAT_0488df58;
              uStack_198 = 1;
              pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
              local_190 = nn::os::GetThreadId(pTVar8);
              local_1b0 = local_160;
              local_180 = 0;
              local_178 = (char *)0x0;
              local_170 = 0;
              uStack_168 = 0;
              uStack_1a8 = 0x10000000000;
              local_160[0] = '\0';
              local_188 = local_1b0;
              FUN_0322c554(&local_1b0,
                           "Property hash in file for type ${}, \'{}\' ({}) does not match native hash ({})"
                           ,&DAT_047b2b98,&local_1f8,
                           *(long *)(param_1 + 0x18) + (long)(int)local_1f8 * 8,&local_44,&local_48)
              ;
              local_170 = 0x97b;
              goto LAB_03385d88;
            }
            uVar6 = (int)uVar13 - 1;
            uVar13 = (ulong)uVar6;
            *(undefined1 *)(*(long *)(param_1 + 0x72) + (long)(int)local_1f8) = 1;
          } while (uVar6 != 0);
        }
        goto LAB_033852d4;
      }
    }
    else {
      local_1c0 = local_1c0 | 2;
LAB_0338522c:
      *param_1 = -0x7ffbfe00;
    }
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_033852d4;
LAB_03385ba4:
      local_1a0 = &DAT_0488df58;
      uStack_198 = 1;
      pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar8);
      local_1b0 = local_160;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      local_160[0] = '\0';
      uStack_1a8 = 0x10000000000;
      local_188 = local_1b0;
      FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
      local_170 = 0x966;
LAB_03385c00:
      local_178 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      if (local_160[0] != '\0') {
        sVar10 = strlen(local_160);
        (local_160 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[0] = '\n';
        (local_160 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[1] = '\0';
        printf("%s",local_160);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
    }
    else {
      if (DAT_046aaf68 != '\0') goto LAB_03385ba4;
      local_1b0 = (char *)0x0;
      local_1a0 = &DAT_0488df58;
      uStack_198 = 1;
      pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar8);
      local_188 = (char *)0x0;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
      local_170 = 0x966;
LAB_0338529c:
      local_178 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      FUN_0322c8e0(&local_1b0);
    }
    if (((ulong)local_188 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
    }
LAB_033852d4:
    piVar7 = (int *)nn::os::UnlockMutex(pMVar1);
    return piVar7;
  }
  local_1f8 = 0;
  local_1f0 = -0x8000000000000000;
  local_1e8 = &DAT_03d7702c;
  local_1e0 = 0;
  local_218 = (int *)*param_2;
  piStack_210 = (int *)param_2[1];
  local_208 = param_2[2];
  local_200 = param_2[3];
  lVar15 = *(long *)(param_1 + 4);
  iVar3 = param_1[6];
  piVar7 = (int *)FUN_03391790(&local_218);
  if ((ulong)piVar7 >> 0x1f == 0) {
    if ((char)local_200 != '\0') goto LAB_03385114;
    if (-1 < *param_1) {
      piVar14 = piVar7;
      if (0 < (int)piVar7) {
        do {
          piVar7 = (int *)FUN_03391790(&local_218);
          if ((ulong)piVar7 >> 0x1f != 0) {
            local_200 = local_200 | 2;
          }
          piVar2 = local_218 + 1;
          local_44 = (int)piVar7;
          if (piStack_210 < piVar2) {
            local_218 = piStack_210;
            local_48 = 0;
            local_200 = local_200 | 3;
LAB_0338546c:
            *param_1 = -0x7ffbfe00;
LAB_03385478:
            if (DAT_0488dfa8 == '\0') {
              if (DAT_046aaf68 == '\0') break;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1b0 = (char *)0x0;
              local_1a0 = &DAT_0488df58;
              uStack_198 = 1;
              pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
              local_190 = nn::os::GetThreadId(pTVar8);
              local_188 = (char *)0x0;
              local_180 = 0;
              local_178 = (char *)0x0;
              local_170 = 0;
              uStack_168 = 0;
              FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
              local_170 = 0x96c;
              goto LAB_03385184;
            }
            local_1a0 = &DAT_0488df58;
            uStack_198 = 1;
            pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar8);
            local_1b0 = local_160;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            local_160[0] = '\0';
            uStack_1a8 = 0x10000000000;
            local_188 = local_1b0;
            piVar7 = (int *)FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
            local_170 = 0x96c;
            goto LAB_03385b54;
          }
          iVar5 = *local_218;
          local_218 = piVar2;
          local_48 = iVar5;
          if ((char)local_200 != '\0') goto LAB_0338546c;
          if (*param_1 < 0) goto LAB_03385478;
          if ((local_44 < 1) || (iVar3 <= local_44)) {
            if (DAT_0488dfa8 != '\0') {
              if (DAT_046aaf68 != '\0') goto LAB_0338593c;
              local_1b0 = (char *)0x0;
              local_1a0 = &DAT_0488df58;
              uStack_198 = 1;
              pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
              local_190 = nn::os::GetThreadId(pTVar8);
              local_188 = (char *)0x0;
              local_180 = 0;
              local_178 = (char *)0x0;
              local_170 = 0;
              uStack_168 = 0;
              FUN_0322c554(&local_1b0,"Invalid type ID (out of bounds) when reading property hash",
                           PTR_DAT_047d1b38);
              local_170 = 0x971;
LAB_03385694:
              local_178 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
              ;
              piVar7 = (int *)FUN_0322c8e0(&local_1b0);
              goto LAB_033856a0;
            }
            if (DAT_046aaf68 != '\0') {
LAB_0338593c:
              local_1a0 = &DAT_0488df58;
              uStack_198 = 1;
              pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
              local_190 = nn::os::GetThreadId(pTVar8);
              local_1b0 = local_160;
              local_180 = 0;
              local_178 = (char *)0x0;
              local_170 = 0;
              uStack_168 = 0;
              local_160[0] = '\0';
              uStack_1a8 = 0x10000000000;
              local_188 = local_1b0;
              piVar7 = (int *)FUN_0322c554(&local_1b0,
                                           "Invalid type ID (out of bounds) when reading property hash"
                                           ,PTR_DAT_047d1b38);
              local_170 = 0x971;
              goto LAB_03385cc4;
            }
LAB_03385a08:
            *param_1 = -0x7ffbfe00;
            break;
          }
          lVar11 = *(long *)(lVar15 + ((ulong)piVar7 & 0xffffffff) * 8);
          if (lVar11 == 0) {
            if (DAT_0488dfa8 == '\0') {
              if (DAT_046aaf68 == '\0') goto LAB_03385a08;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1b0 = (char *)0x0;
              local_1a0 = &DAT_0488df58;
              uStack_198 = 1;
              pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
              local_190 = nn::os::GetThreadId(pTVar8);
              local_188 = (char *)0x0;
              local_180 = 0;
              local_178 = (char *)0x0;
              local_170 = 0;
              uStack_168 = 0;
              FUN_0322c554(&local_1b0,
                           "Type ${} is not initialized; HASHES section must have been loaded before PROPS_HASHES"
                           ,&DAT_044e9048,&local_44);
              local_170 = 0x974;
              goto LAB_03385694;
            }
            local_1a0 = &DAT_0488df58;
            uStack_198 = 1;
            pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar8);
            local_1b0 = local_160;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            local_160[0] = '\0';
            uStack_1a8 = 0x10000000000;
            local_188 = local_1b0;
            piVar7 = (int *)FUN_0322c554(&local_1b0,
                                         "Type ${} is not initialized; HASHES section must have been loaded before PROPS_HASHES"
                                         ,&DAT_044e9048,&local_44);
            local_170 = 0x974;
LAB_03385cc4:
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            if (local_160[0] != '\0') {
              sVar10 = strlen(local_160);
              (local_160 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[0] = '\n';
              (local_160 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[1] = '\0';
              printf("%s",local_160);
              uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
              piVar7 = (int *)(ulong)uVar6;
            }
LAB_033856a0:
            if (((ulong)local_188 & 1) != 0) {
              piVar7 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
            }
            goto LAB_03385a08;
          }
          piVar7 = (int *)FUN_031ea078(&local_1f8,lVar11,&local_1b0);
          local_1b4 = (int)piVar7;
          if (iVar5 != local_1b4) {
            if (DAT_0488dfa8 == '\0') {
              if (DAT_046aaf68 == '\0') goto LAB_03385a08;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1b0 = (char *)0x0;
              local_1a0 = &DAT_0488df58;
              uStack_198 = 1;
              pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
              local_190 = nn::os::GetThreadId(pTVar8);
              local_188 = (char *)0x0;
              local_180 = 0;
              local_178 = (char *)0x0;
              local_170 = 0;
              uStack_168 = 0;
              FUN_0322c554(&local_1b0,
                           "Property hash in file for type ${}, \'{}\' ({}) does not match native hash ({})"
                           ,&DAT_047b2b98,&local_44,*(long *)(param_1 + 0x18) + (long)local_44 * 8,
                           &local_48,&local_1b4);
              local_170 = 0x97b;
              goto LAB_03385694;
            }
            local_1a0 = &DAT_0488df58;
            uStack_198 = 1;
            pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar8);
            local_1b0 = local_160;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            uStack_1a8 = 0x10000000000;
            local_160[0] = '\0';
            local_188 = local_1b0;
            piVar7 = (int *)FUN_0322c554(&local_1b0,
                                         "Property hash in file for type ${}, \'{}\' ({}) does not match native hash ({})"
                                         ,&DAT_047b2b98,&local_44,
                                         *(long *)(param_1 + 0x18) + (long)local_44 * 8,&local_48,
                                         &local_1b4);
            local_170 = 0x97b;
            goto LAB_03385cc4;
          }
          uVar6 = (int)piVar14 - 1;
          *(undefined1 *)(*(long *)(param_1 + 0x72) + (long)local_44) = 1;
          piVar14 = (int *)(ulong)uVar6;
        } while (uVar6 != 0);
      }
      goto LAB_033851bc;
    }
  }
  else {
    local_200 = local_200 | 2;
LAB_03385114:
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_0488dfa8 == '\0') {
    if (DAT_046aaf68 == '\0') goto LAB_033851bc;
LAB_03385af8:
    local_1a0 = &DAT_0488df58;
    uStack_198 = 1;
    pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
    local_190 = nn::os::GetThreadId(pTVar8);
    local_1b0 = local_160;
    local_180 = 0;
    local_178 = (char *)0x0;
    local_170 = 0;
    uStack_168 = 0;
    local_160[0] = '\0';
    uStack_1a8 = 0x10000000000;
    local_188 = local_1b0;
    piVar7 = (int *)FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
    local_170 = 0x966;
LAB_03385b54:
    local_178 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    if (local_160[0] != '\0') {
      sVar10 = strlen(local_160);
      (local_160 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[0] = '\n';
      (local_160 + (int)((int)sVar10 - (uint)((int)sVar10 == 0xff)))[1] = '\0';
      printf("%s",local_160);
      uVar6 = fflush(*(FILE **)PTR_stdout_047cb860);
      piVar7 = (int *)(ulong)uVar6;
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_03385af8;
    local_1b0 = (char *)0x0;
    local_1a0 = &DAT_0488df58;
    uStack_198 = 1;
    pTVar8 = (ThreadType *)nn::os::GetCurrentThread();
    local_190 = nn::os::GetThreadId(pTVar8);
    local_188 = (char *)0x0;
    local_180 = 0;
    local_178 = (char *)0x0;
    local_170 = 0;
    uStack_168 = 0;
    FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
    local_170 = 0x966;
LAB_03385184:
    local_178 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    piVar7 = (int *)FUN_0322c8e0(&local_1b0);
  }
  if (((ulong)local_188 & 1) != 0) {
    piVar7 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
  }
LAB_033851bc:
  if ((local_1e8 != (undefined *)0x0) && (*(int *)(local_1e8 + 4) != -2)) {
    piVar7 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_1e8,0);
    local_1e8 = &DAT_03d7702c;
    local_1e0 = 0;
  }
  lVar15 = local_1f0;
  uVar13 = (ulong)local_1f0._4_4_;
  local_1f0 = (ulong)local_1f0._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_1f8 != 0)) {
    piVar7 = (int *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                              (PTR_PTR_047d1a50,local_1f8,uVar13 << 4);
  }
  return piVar7;
}


