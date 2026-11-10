/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033833bc; name: FUN_033833bc
 */


int * FUN_033833bc(int *param_1,ulong *param_2,ulong param_3,long *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  ThreadType *pTVar5;
  size_t sVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  int *local_238;
  int *piStack_230;
  ulong local_228;
  ulong local_220;
  long *local_218;
  long local_210;
  undefined8 local_208;
  undefined *local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  int *local_1e8;
  int *piStack_1e0;
  ulong local_1d8;
  ulong local_1d0;
  long local_1c8;
  undefined8 local_1c0;
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
  
  if ((param_3 & 1) != 0) {
    if (param_4 == (long *)0x0) {
      local_1c8 = *(long *)PTR_DAT_047e3fe8;
      nn::os::LockMutex((MutexType *)(local_1c8 + 0xc0));
      local_1e8 = (int *)*param_2;
      piStack_1e0 = (int *)param_2[1];
      local_1d8 = param_2[2];
      local_1d0 = param_2[3];
      uVar10 = FUN_03391790(&local_1e8);
      if (uVar10 >> 0x1f == 0) {
        if ((char)local_1d0 != '\0') goto LAB_03383678;
        if (-1 < *param_1) {
          if ((long)uVar10 <= ((long)piStack_1e0 - (long)local_1e8) / 5) {
            if ((param_1[0x4a] == 2) && ((int)(param_1[0x5b] & 0x7fffffffU) < (int)uVar10)) {
              FUN_03394d44(param_1 + 0x58,PTR_PTR_047d1a50,uVar10);
            }
            if (0 < (int)uVar10) {
              do {
                uVar9 = FUN_03391790(&local_1e8);
                if (uVar9 >> 0x1f != 0) {
                  local_1d0 = local_1d0 | 2;
                }
                piVar4 = local_1e8 + 1;
                if (piStack_1e0 < piVar4) {
                  local_1e8 = piStack_1e0;
                  local_1b4 = 0;
                  local_1d0 = local_1d0 | 3;
LAB_03383fb0:
                  *param_1 = -0x7ffbfe00;
LAB_03383fbc:
                  if (DAT_0488dfa8 == '\0') {
                    if (DAT_046aaf68 == '\0') break;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_1b0 = (char *)0x0;
                    local_1a0 = &DAT_0488df58;
                    uStack_198 = 1;
                    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                    local_190 = nn::os::GetThreadId(pTVar5);
                    local_188 = (char *)0x0;
                    local_180 = 0;
                    local_178 = (char *)0x0;
                    local_170 = 0;
                    uStack_168 = 0;
                    FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
                    local_170 = 0x92a;
                    goto LAB_033836e8;
                  }
                  local_1a0 = &DAT_0488df58;
                  uStack_198 = 1;
                  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                  local_190 = nn::os::GetThreadId(pTVar5);
                  local_1b0 = local_160;
                  local_180 = 0;
                  local_178 = (char *)0x0;
                  local_170 = 0;
                  uStack_168 = 0;
                  local_160[0] = '\0';
                  uStack_1a8 = 0x10000000000;
                  local_188 = local_1b0;
                  FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
                  local_170 = 0x92a;
                  goto LAB_03384444;
                }
                local_1b4 = *local_1e8;
                local_1e8 = piVar4;
                if ((char)local_1d0 != '\0') goto LAB_03383fb0;
                if (*param_1 < 0) goto LAB_03383fbc;
                iVar12 = (int)uVar9;
                if ((iVar12 < 1) || (param_1[0x1a] <= iVar12)) {
                  if (DAT_0488dfa8 == '\0') {
                    if (DAT_046aaf68 == '\0') goto LAB_03383db4;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_1b0 = (char *)0x0;
                    local_1a0 = &DAT_0488df58;
                    uStack_198 = 1;
                    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                    local_190 = nn::os::GetThreadId(pTVar5);
                    local_188 = (char *)0x0;
                    local_180 = 0;
                    local_178 = (char *)0x0;
                    local_170 = 0;
                    uStack_168 = 0;
                    FUN_0322c554(&local_1b0,&DAT_03be65d6,&DAT_047b2b70,
                                 "typeIdIsNullOrOutOfBounds(tid, m_bundle)");
                    local_170 = 0x92b;
                    goto LAB_03383a30;
                  }
                  local_1a0 = &DAT_0488df58;
                  uStack_198 = 1;
                  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                  local_190 = nn::os::GetThreadId(pTVar5);
                  local_1b0 = local_160;
                  local_180 = 0;
                  local_178 = (char *)0x0;
                  local_160[0] = '\0';
                  local_170 = 0;
                  uStack_168 = 0;
                  uStack_1a8 = 0x10000000000;
                  local_188 = local_1b0;
                  FUN_0322c554(&local_1b0,&DAT_03be65d6,&DAT_047b2b70,
                               "typeIdIsNullOrOutOfBounds(tid, m_bundle)");
                  local_170 = 0x92b;
                  goto LAB_033845ac;
                }
                uVar14 = uVar9 & 0xffffffff;
                lVar11 = FUN_031dbaf4(&local_1c8,
                                      *(undefined8 *)
                                       (*(long *)(param_1 + 0x18) + (uVar9 & 0xffffffff) * 8));
                if (lVar11 == 0) {
                  if (DAT_0488dfa8 == '\0') {
                    if (DAT_046aaf68 == '\0') goto LAB_03383db4;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_1b0 = (char *)0x0;
                    local_1a0 = &DAT_0488df58;
                    uStack_198 = 1;
                    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                    local_190 = nn::os::GetThreadId(pTVar5);
                    local_188 = (char *)0x0;
                    local_180 = 0;
                    local_178 = (char *)0x0;
                    local_170 = 0;
                    uStack_168 = 0;
                    local_218 = *(long **)(*(long *)(param_1 + 0x18) + uVar14 * 8);
                    FUN_0322c554(&local_1b0,"Type {} with hash {:x} does not match a native type",
                                 &DAT_047b2b80,&local_218,&local_1b4);
                    local_170 = 0x92e;
                    goto LAB_03383a30;
                  }
                  local_1a0 = &DAT_0488df58;
                  uStack_198 = 1;
                  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                  local_190 = nn::os::GetThreadId(pTVar5);
                  local_1b0 = local_160;
                  local_180 = 0;
                  local_178 = (char *)0x0;
                  uStack_1a8 = 0x10000000000;
                  local_170 = 0;
                  uStack_168 = 0;
                  local_160[0] = '\0';
                  local_1c0 = *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar14 * 8);
                  local_188 = local_1b0;
                  FUN_0322c554(&local_1b0,"Type {} with hash {:x} does not match a native type",
                               &DAT_047b2b80,&local_1c0,&local_1b4);
                  local_170 = 0x92e;
                  goto LAB_033845ac;
                }
                *(long *)(*(long *)(param_1 + 4) + uVar14 * 8) = lVar11;
                if (param_1[0x4a] == 2) {
                  iVar13 = param_1[0x5a];
                  lVar11 = (long)iVar13;
                  if ((int)(param_1[0x5b] & 0x7fffffffU) <= iVar13) {
                    FUN_03394bcc(param_1 + 0x58,lVar11 + 1);
                    iVar13 = param_1[0x5a];
                  }
                  piVar4 = (int *)(*(long *)(param_1 + 0x58) + (long)iVar13 * 8);
                  *piVar4 = iVar12;
                  piVar4[1] = local_1b4;
                  param_1[0x5a] = (int)(lVar11 + 1);
                }
                uVar3 = (int)uVar10 - 1;
                uVar10 = (ulong)uVar3;
              } while (uVar3 != 0);
            }
            goto LAB_033837d0;
          }
          if (DAT_0488dfa8 == '\0') {
            if (DAT_046aaf68 != '\0') goto LAB_03384548;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_1b0 = (char *)0x0;
              local_1a0 = &DAT_0488df58;
              uStack_198 = 1;
              pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
              local_190 = nn::os::GetThreadId(pTVar5);
              local_188 = (char *)0x0;
              local_180 = 0;
              local_178 = (char *)0x0;
              local_170 = 0;
              uStack_168 = 0;
              FUN_0322c554(&local_1b0,&DAT_03be65d6,&DAT_047b2b60,"numHashes > rb.remaining() / 5");
              local_170 = 0x91e;
LAB_03383a30:
              local_178 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
              ;
              FUN_0322c8e0(&local_1b0);
            }
            else {
LAB_03384548:
              local_1a0 = &DAT_0488df58;
              uStack_198 = 1;
              pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
              local_190 = nn::os::GetThreadId(pTVar5);
              local_1b0 = local_160;
              local_180 = 0;
              local_178 = (char *)0x0;
              local_160[0] = '\0';
              local_170 = 0;
              uStack_168 = 0;
              uStack_1a8 = 0x10000000000;
              local_188 = local_1b0;
              FUN_0322c554(&local_1b0,&DAT_03be65d6,&DAT_047b2b60,"numHashes > rb.remaining() / 5");
              local_170 = 0x91e;
LAB_033845ac:
              local_178 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
              ;
              if (local_160[0] != '\0') {
                sVar6 = strlen(local_160);
                (local_160 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
                (local_160 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
                printf("%s",local_160);
                fflush(*(FILE **)PTR_stdout_047cb860);
              }
            }
            if (((ulong)local_188 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
            }
          }
LAB_03383db4:
          *param_1 = -0x7ffbfe00;
          goto LAB_033837d0;
        }
      }
      else {
        local_1d0 = local_1d0 | 2;
LAB_03383678:
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_0488dfa8 == '\0') {
        if (DAT_046aaf68 == '\0') goto LAB_033837d0;
LAB_033843e8:
        local_1a0 = &DAT_0488df58;
        uStack_198 = 1;
        pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar5);
        local_1b0 = local_160;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        local_160[0] = '\0';
        uStack_1a8 = 0x10000000000;
        local_188 = local_1b0;
        FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
        local_170 = 0x91c;
LAB_03384444:
        local_178 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        if (local_160[0] != '\0') {
          sVar6 = strlen(local_160);
          (local_160 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
          (local_160 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
          printf("%s",local_160);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      else {
        if (DAT_046aaf68 != '\0') goto LAB_033843e8;
        local_1b0 = (char *)0x0;
        local_1a0 = &DAT_0488df58;
        uStack_198 = 1;
        pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar5);
        local_188 = (char *)0x0;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
        local_170 = 0x91c;
LAB_033836e8:
        local_178 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        FUN_0322c8e0(&local_1b0);
      }
      if (((ulong)local_188 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
      }
LAB_033837d0:
      piVar4 = (int *)nn::os::UnlockMutex((MutexType *)(local_1c8 + 0xc0));
      return piVar4;
    }
    local_1f8 = 0;
    local_1f0 = 0xffffffffffffffff;
    local_210 = 0;
    local_208 = -0x8000000000000000;
    local_200 = &DAT_03d7702c;
    local_238 = (int *)*param_2;
    piStack_230 = (int *)param_2[1];
    local_228 = param_2[2];
    local_220 = param_2[3];
    local_218 = param_4;
    piVar7 = (int *)FUN_03391790(&local_238);
    piVar4 = piVar7;
    if ((ulong)piVar7 >> 0x1f == 0) {
      if ((char)local_220 != '\0') goto LAB_033834b4;
      if (-1 < *param_1) {
        if ((long)piVar7 <= ((long)piStack_230 - (long)local_238) / 5) {
          if ((param_1[0x4a] == 2) && ((int)(param_1[0x5b] & 0x7fffffffU) < (int)piVar7)) {
            piVar4 = (int *)FUN_03394d44(param_1 + 0x58,PTR_PTR_047d1a50,piVar7);
          }
          if (0 < (int)piVar7) {
            do {
              piVar4 = (int *)FUN_03391790(&local_238);
              if ((ulong)piVar4 >> 0x1f != 0) {
                local_220 = local_220 | 2;
              }
              piVar8 = local_238 + 1;
              if (piStack_230 < piVar8) {
                local_238 = piStack_230;
                local_1b4 = 0;
                local_220 = local_220 | 3;
LAB_03383e54:
                *param_1 = -0x7ffbfe00;
LAB_03383e60:
                if (DAT_0488dfa8 == '\0') {
                  if (DAT_046aaf68 == '\0') break;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_1b0 = (char *)0x0;
                  local_1a0 = &DAT_0488df58;
                  uStack_198 = 1;
                  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                  local_190 = nn::os::GetThreadId(pTVar5);
                  local_188 = (char *)0x0;
                  local_180 = 0;
                  local_178 = (char *)0x0;
                  local_170 = 0;
                  uStack_168 = 0;
                  FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
                  local_170 = 0x92a;
                  goto LAB_03383524;
                }
                local_1a0 = &DAT_0488df58;
                uStack_198 = 1;
                pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                local_190 = nn::os::GetThreadId(pTVar5);
                local_1b0 = local_160;
                local_180 = 0;
                local_178 = (char *)0x0;
                local_170 = 0;
                uStack_168 = 0;
                local_160[0] = '\0';
                uStack_1a8 = 0x10000000000;
                local_188 = local_1b0;
                piVar4 = (int *)FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
                local_170 = 0x92a;
                goto LAB_03384398;
              }
              iVar12 = *local_238;
              local_238 = piVar8;
              local_1b4 = iVar12;
              if ((char)local_220 != '\0') goto LAB_03383e54;
              if (*param_1 < 0) goto LAB_03383e60;
              iVar13 = (int)piVar4;
              if ((iVar13 < 1) || (param_1[0x1a] <= iVar13)) {
                if (DAT_0488dfa8 == '\0') {
                  if (DAT_046aaf68 == '\0') goto LAB_03383cb8;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_1b0 = (char *)0x0;
                  local_1a0 = &DAT_0488df58;
                  uStack_198 = 1;
                  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                  local_190 = nn::os::GetThreadId(pTVar5);
                  local_188 = (char *)0x0;
                  local_180 = 0;
                  local_178 = (char *)0x0;
                  local_170 = 0;
                  uStack_168 = 0;
                  FUN_0322c554(&local_1b0,&DAT_03be65d6,&DAT_047b2b70,
                               "typeIdIsNullOrOutOfBounds(tid, m_bundle)");
                  local_170 = 0x92b;
                  goto LAB_03383898;
                }
                local_1a0 = &DAT_0488df58;
                uStack_198 = 1;
                pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                local_190 = nn::os::GetThreadId(pTVar5);
                local_1b0 = local_160;
                local_180 = 0;
                local_178 = (char *)0x0;
                local_160[0] = '\0';
                local_170 = 0;
                uStack_168 = 0;
                uStack_1a8 = 0x10000000000;
                local_188 = local_1b0;
                piVar4 = (int *)FUN_0322c554(&local_1b0,&DAT_03be65d6,&DAT_047b2b70,
                                             "typeIdIsNullOrOutOfBounds(tid, m_bundle)");
                local_170 = 0x92b;
                goto LAB_033844f8;
              }
              uVar10 = (ulong)piVar4 & 0xffffffff;
              lVar11 = (**(code **)(*local_218 + 0x30))
                                 (local_218,
                                  *(undefined8 *)
                                   (*(long *)(param_1 + 0x18) + ((ulong)piVar4 & 0xffffffff) * 8));
              piVar4 = (int *)0x0;
              if ((lVar11 == 0) ||
                 (piVar4 = (int *)FUN_031e9ec4(&local_210,lVar11), (int)piVar4 != iVar12)) {
                if (DAT_0488dfa8 == '\0') {
                  if (DAT_046aaf68 == '\0') goto LAB_03383cb8;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_1b0 = (char *)0x0;
                  local_1a0 = &DAT_0488df58;
                  uStack_198 = 1;
                  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                  local_190 = nn::os::GetThreadId(pTVar5);
                  local_188 = (char *)0x0;
                  local_180 = 0;
                  local_178 = (char *)0x0;
                  local_170 = 0;
                  uStack_168 = 0;
                  local_1c0 = *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar10 * 8);
                  FUN_0322c554(&local_1b0,"Type {} with hash {:x} does not match a native type",
                               &DAT_047b2b80,&local_1c0,&local_1b4);
                  local_170 = 0x92e;
                  goto LAB_03383898;
                }
                local_1a0 = &DAT_0488df58;
                uStack_198 = 1;
                pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                local_190 = nn::os::GetThreadId(pTVar5);
                local_1b0 = local_160;
                local_180 = 0;
                local_178 = (char *)0x0;
                uStack_1a8 = 0x10000000000;
                local_170 = 0;
                uStack_168 = 0;
                local_160[0] = '\0';
                local_1c8 = *(long *)(*(long *)(param_1 + 0x18) + uVar10 * 8);
                local_188 = local_1b0;
                piVar4 = (int *)FUN_0322c554(&local_1b0,
                                             "Type {} with hash {:x} does not match a native type",
                                             &DAT_047b2b80,&local_1c8,&local_1b4);
                local_170 = 0x92e;
                goto LAB_033844f8;
              }
              *(long *)(*(long *)(param_1 + 4) + uVar10 * 8) = lVar11;
              if (param_1[0x4a] == 2) {
                iVar12 = param_1[0x5a];
                lVar11 = (long)iVar12;
                if ((int)(param_1[0x5b] & 0x7fffffffU) <= iVar12) {
                  piVar4 = (int *)FUN_03394bcc(param_1 + 0x58,lVar11 + 1);
                  iVar12 = param_1[0x5a];
                }
                piVar8 = (int *)(*(long *)(param_1 + 0x58) + (long)iVar12 * 8);
                *piVar8 = iVar13;
                piVar8[1] = local_1b4;
                param_1[0x5a] = (int)(lVar11 + 1);
              }
              uVar3 = (int)piVar7 - 1;
              piVar7 = (int *)(ulong)uVar3;
            } while (uVar3 != 0);
          }
          goto LAB_03383608;
        }
        if (DAT_0488dfa8 == '\0') {
          if (DAT_046aaf68 != '\0') goto LAB_03384494;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1b0 = (char *)0x0;
            local_1a0 = &DAT_0488df58;
            uStack_198 = 1;
            pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar5);
            local_188 = (char *)0x0;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            FUN_0322c554(&local_1b0,&DAT_03be65d6,&DAT_047b2b60,"numHashes > rb.remaining() / 5");
            local_170 = 0x91e;
LAB_03383898:
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            piVar4 = (int *)FUN_0322c8e0(&local_1b0);
          }
          else {
LAB_03384494:
            local_1a0 = &DAT_0488df58;
            uStack_198 = 1;
            pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar5);
            local_1b0 = local_160;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_160[0] = '\0';
            local_170 = 0;
            uStack_168 = 0;
            uStack_1a8 = 0x10000000000;
            local_188 = local_1b0;
            piVar4 = (int *)FUN_0322c554(&local_1b0,&DAT_03be65d6,&DAT_047b2b60,
                                         "numHashes > rb.remaining() / 5");
            local_170 = 0x91e;
LAB_033844f8:
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            if (local_160[0] != '\0') {
              sVar6 = strlen(local_160);
              (local_160 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
              (local_160 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
              printf("%s",local_160);
              uVar3 = fflush(*(FILE **)PTR_stdout_047cb860);
              piVar4 = (int *)(ulong)uVar3;
            }
          }
          if (((ulong)local_188 & 1) != 0) {
            piVar4 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
          }
        }
LAB_03383cb8:
        *param_1 = -0x7ffbfe00;
        goto LAB_03383608;
      }
    }
    else {
      local_220 = local_220 | 2;
LAB_033834b4:
      *param_1 = -0x7ffbfe00;
    }
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') goto LAB_03383608;
LAB_0338433c:
      local_1a0 = &DAT_0488df58;
      uStack_198 = 1;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar5);
      local_1b0 = local_160;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      local_160[0] = '\0';
      uStack_1a8 = 0x10000000000;
      local_188 = local_1b0;
      piVar4 = (int *)FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
      local_170 = 0x91c;
LAB_03384398:
      local_178 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      if (local_160[0] != '\0') {
        sVar6 = strlen(local_160);
        (local_160 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
        (local_160 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
        printf("%s",local_160);
        uVar3 = fflush(*(FILE **)PTR_stdout_047cb860);
        piVar4 = (int *)(ulong)uVar3;
      }
    }
    else {
      if (DAT_046aaf68 != '\0') goto LAB_0338433c;
      local_1b0 = (char *)0x0;
      local_1a0 = &DAT_0488df58;
      uStack_198 = 1;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar5);
      local_188 = (char *)0x0;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
      local_170 = 0x91c;
LAB_03383524:
      local_178 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      piVar4 = (int *)FUN_0322c8e0(&local_1b0);
    }
    if (((ulong)local_188 & 1) != 0) {
      piVar4 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
    }
LAB_03383608:
    if ((local_200 != (undefined *)0x0) && (*(int *)(local_200 + 4) != -2)) {
      piVar4 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_200,0);
      local_200 = &DAT_03d7702c;
      local_1f8 = 0;
    }
    lVar11 = local_208;
    uVar10 = (ulong)local_208._4_4_;
    local_208 = (ulong)local_208._4_4_ << 0x20;
    if (lVar11 < 0) {
      return piVar4;
    }
    if (local_210 == 0) {
      return piVar4;
    }
    piVar4 = (int *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                              (PTR_PTR_047d1a50,local_210,uVar10 << 4);
    return piVar4;
  }
  if (param_1[0x4a] != 2) {
    return param_1;
  }
  piVar4 = (int *)FUN_03391790(param_2);
  if ((ulong)piVar4 >> 0x1f == 0) {
    if ((char)param_2[3] != '\0') goto LAB_03383560;
    if (*param_1 < 0) goto LAB_0338356c;
    piVar7 = piVar4;
    if ((int)(param_1[0x5b] & 0x7fffffffU) < (int)piVar4) {
      piVar7 = (int *)FUN_03394d44(param_1 + 0x58,PTR_PTR_047d1a50,piVar4);
    }
    if ((int)piVar4 < 1) {
      return piVar7;
    }
    while( true ) {
      piVar7 = (int *)FUN_03391790(param_2);
      if ((ulong)piVar7 >> 0x1f != 0) {
        *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
      }
      puVar1 = (undefined4 *)*param_2 + 1;
      if ((undefined4 *)param_2[1] < puVar1) break;
      uVar2 = *(undefined4 *)*param_2;
      *param_2 = (ulong)puVar1;
      if ((char)param_2[3] != '\0') goto LAB_03383cd8;
      if (*param_1 < 0) goto LAB_03383ce4;
      iVar12 = param_1[0x5a];
      lVar11 = (long)iVar12;
      piVar8 = piVar7;
      if ((int)(param_1[0x5b] & 0x7fffffffU) <= iVar12) {
        piVar8 = (int *)FUN_03394bcc(param_1 + 0x58,lVar11 + 1);
        iVar12 = param_1[0x5a];
      }
      puVar1 = (undefined4 *)(*(long *)(param_1 + 0x58) + (long)iVar12 * 8);
      uVar3 = (int)piVar4 - 1;
      piVar4 = (int *)(ulong)uVar3;
      *puVar1 = (int)piVar7;
      puVar1[1] = uVar2;
      param_1[0x5a] = (int)(lVar11 + 1);
      if (uVar3 == 0) {
        return piVar8;
      }
    }
    *param_2 = param_2[1];
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
LAB_03383cd8:
    *param_1 = -0x7ffbfe00;
LAB_03383ce4:
    if (DAT_0488dfa8 != '\0') {
      if (DAT_046aaf68 != '\0') goto LAB_03383d50;
      local_1b0 = (char *)0x0;
      local_1a0 = &DAT_0488df58;
      uStack_198 = 1;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar5);
      local_188 = (char *)0x0;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
      local_170 = 0x957;
      goto LAB_033835d0;
    }
    if (DAT_046aaf68 == '\0') {
      return piVar7;
    }
LAB_03383d50:
    local_1a0 = &DAT_0488df58;
    uStack_198 = 1;
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    local_190 = nn::os::GetThreadId(pTVar5);
    local_1b0 = local_160;
    local_180 = 0;
    local_178 = (char *)0x0;
    local_170 = 0;
    uStack_168 = 0;
    local_160[0] = '\0';
    uStack_1a8 = 0x10000000000;
    local_188 = local_1b0;
    piVar4 = (int *)FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
    local_170 = 0x957;
  }
  else {
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
LAB_03383560:
    *param_1 = -0x7ffbfe00;
LAB_0338356c:
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') {
        return piVar4;
      }
    }
    else if (DAT_046aaf68 == '\0') {
      local_1b0 = (char *)0x0;
      local_1a0 = &DAT_0488df58;
      uStack_198 = 1;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar5);
      local_188 = (char *)0x0;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
      local_170 = 0x94f;
LAB_033835d0:
      local_178 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      piVar4 = (int *)FUN_0322c8e0(&local_1b0);
      goto LAB_033835dc;
    }
    local_1a0 = &DAT_0488df58;
    uStack_198 = 1;
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    local_190 = nn::os::GetThreadId(pTVar5);
    local_1b0 = local_160;
    local_180 = 0;
    local_178 = (char *)0x0;
    local_170 = 0;
    uStack_168 = 0;
    local_160[0] = '\0';
    uStack_1a8 = 0x10000000000;
    local_188 = local_1b0;
    piVar4 = (int *)FUN_0322c554(&local_1b0,"Error in input stream.",PTR_DAT_047d1b38);
    local_170 = 0x94f;
  }
  local_178 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  if (local_160[0] != '\0') {
    sVar6 = strlen(local_160);
    (local_160 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
    (local_160 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
    printf("%s",local_160);
    uVar3 = fflush(*(FILE **)PTR_stdout_047cb860);
    piVar4 = (int *)(ulong)uVar3;
  }
LAB_033835dc:
  if (((ulong)local_188 & 1) != 0) {
    piVar4 = (int *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
  }
  return piVar4;
}


