/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033956cc; name: FUN_033956cc
 */


undefined8 * FUN_033956cc(int *param_1,long *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  ThreadType *pTVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  size_t sVar9;
  long lVar10;
  undefined4 *puVar11;
  char *pcVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  ulong *puVar19;
  ulong local_1e0;
  ulong local_1d8;
  byte *local_1d0;
  undefined8 *local_1c8;
  uint local_1c0;
  uint local_1bc;
  char *local_1b8;
  undefined8 uStack_1b0;
  undefined8 *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  char *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  char local_168 [264];
  
  iVar17 = param_1[0x1a];
  puVar16 = (undefined8 *)(long)iVar17;
  puVar4 = (undefined8 *)FUN_03391790(param_2);
  if ((ulong)puVar4 >> 0x1f == 0) {
    if ((char)param_2[3] != '\0') goto LAB_03395724;
    if (*param_1 < 0) goto LAB_03395730;
    iVar14 = (int)puVar4;
    if (iVar14 < iVar17) {
      if (DAT_0488dfa8 == '\0') {
        if (DAT_046aaf68 == '\0') goto LAB_03395920;
      }
      else if (DAT_046aaf68 == '\0') {
        local_1b8 = (char *)0x0;
        local_1a8 = &DAT_0488df58;
        uStack_1a0 = 1;
        pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
        local_198 = nn::os::GetThreadId(pTVar5);
        local_190 = (char *)0x0;
        local_188 = 0;
        local_180 = (char *)0x0;
        local_178 = 0;
        uStack_170 = 0;
        FUN_0322c554(&local_1b8,"Cannot remove types.",PTR_DAT_047d1b38);
        local_178 = 0x86f;
        goto LAB_033958e8;
      }
      local_1a8 = &DAT_0488df58;
      uStack_1a0 = 1;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_198 = nn::os::GetThreadId(pTVar5);
      local_1b8 = local_168;
      local_188 = 0;
      local_180 = (char *)0x0;
      local_178 = 0;
      uStack_170 = 0;
      local_168[0] = '\0';
      uStack_1b0 = 0x10000000000;
      local_190 = local_1b8;
      puVar4 = (undefined8 *)FUN_0322c554(&local_1b8,"Cannot remove types.",PTR_DAT_047d1b38);
      local_178 = 0x86f;
      goto LAB_033968fc;
    }
    if (iVar17 == iVar14) {
      return puVar4;
    }
    iVar18 = iVar14 - iVar17;
    if (param_2[1] - *param_2 < (long)iVar18) {
      if (DAT_0488dfa8 == '\0') {
        if (DAT_046aaf68 == '\0') goto LAB_03395920;
      }
      else if (DAT_046aaf68 == '\0') {
        local_1b8 = (char *)0x0;
        local_1a8 = &DAT_0488df58;
        uStack_1a0 = 1;
        pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
        local_198 = nn::os::GetThreadId(pTVar5);
        local_190 = (char *)0x0;
        local_188 = 0;
        local_180 = (char *)0x0;
        local_178 = 0;
        uStack_170 = 0;
        FUN_0322c554(&local_1b8,"More types than would fit in the section",PTR_DAT_047d1b38);
        local_178 = 0x876;
        goto LAB_033958e8;
      }
      local_1a8 = &DAT_0488df58;
      uStack_1a0 = 1;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_198 = nn::os::GetThreadId(pTVar5);
      local_1b8 = local_168;
      local_188 = 0;
      local_180 = (char *)0x0;
      local_178 = 0;
      uStack_170 = 0;
      local_168[0] = '\0';
      uStack_1b0 = 0x10000000000;
      local_190 = local_1b8;
      puVar4 = (undefined8 *)
               FUN_0322c554(&local_1b8,"More types than would fit in the section",PTR_DAT_047d1b38);
      local_178 = 0x876;
      goto LAB_033968fc;
    }
    plVar1 = (long *)(param_1 + 0x18);
    if ((int)(param_1[0x1b] & 0x7fffffffU) < iVar14) {
      FUN_03396ae4(plVar1,puVar4);
    }
    uVar3 = param_1[0x1a];
    if ((int)uVar3 < iVar14) {
      param_1[0x1a] = iVar14;
      memset((void *)(*(long *)(param_1 + 0x18) + (long)(int)uVar3 * 8),0,
             (ulong)(~uVar3 + iVar14) * 8 + 8);
    }
    else if (iVar14 < (int)uVar3) {
      param_1[0x1a] = iVar14;
    }
    if ((param_1[0x4a] == 2) && ((int)(param_1[0x4f] & 0x7fffffffU) < iVar14)) {
      FUN_03396bf8(param_1 + 0x4c,PTR_PTR_047d1a50,puVar4);
    }
    local_1b8 = (char *)((long)iVar18 * 0x38);
    plVar15 = (long *)(param_1 + 0x2c);
    puVar6 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,local_1b8,&local_1b8);
    if (iVar17 < iVar14) {
      puVar7 = puVar16;
      do {
        puVar6[2] = 1;
        puVar6[3] = 0;
        *(int *)(puVar6 + 6) = (int)puVar7;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *puVar6 = &DAT_00100001;
        puVar6[1] = 0;
        *(undefined8 **)(*plVar1 + (long)puVar7 * 8) = puVar6;
        puVar7 = (undefined8 *)((long)puVar7 + 1);
        puVar6 = puVar6 + 7;
      } while (puVar4 != puVar7);
    }
    param_1[0x7e] = param_1[0x7e] + iVar18;
    if (param_3 != 0) {
LAB_03395a38:
      if (iVar14 <= iVar17) {
        return puVar6;
      }
      do {
        puVar19 = *(ulong **)(*plVar1 + (long)puVar16 * 8);
        puVar4 = (undefined8 *)FUN_03391790(param_2);
        local_1bc = (uint)puVar4;
        if ((ulong)puVar4 >> 0x1f != 0) {
          *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_033961b0:
          *param_1 = -0x7ffbfe00;
LAB_033961bc:
          if (DAT_0488dfa8 == '\0') {
            if (DAT_046aaf68 == '\0') {
              return puVar4;
            }
          }
          else if (DAT_046aaf68 == '\0') {
            local_1b8 = (char *)0x0;
            local_1a8 = &DAT_0488df58;
            uStack_1a0 = 1;
            pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
            local_198 = nn::os::GetThreadId(pTVar5);
            local_190 = (char *)0x0;
            local_188 = 0;
            local_180 = (char *)0x0;
            local_178 = 0;
            uStack_170 = 0;
            FUN_0322c554(&local_1b8,"Error in input stream.",PTR_DAT_047d1b38);
            local_178 = 0x8a5;
            goto LAB_03395794;
          }
          local_1a8 = &DAT_0488df58;
          uStack_1a0 = 1;
          pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
          local_198 = nn::os::GetThreadId(pTVar5);
          local_1b8 = local_168;
          local_188 = 0;
          local_180 = (char *)0x0;
          local_178 = 0;
          uStack_170 = 0;
          local_168[0] = '\0';
          uStack_1b0 = 0x10000000000;
          local_190 = local_1b8;
          puVar16 = (undefined8 *)FUN_0322c554(&local_1b8,"Error in input stream.",PTR_DAT_047d1b38)
          ;
          local_178 = 0x8a5;
          goto LAB_03396084;
        }
        if ((char)param_2[3] != '\0') goto LAB_033961b0;
        if (*param_1 < 0) goto LAB_033961bc;
        if (param_1[0x4a] == 2) {
          iVar17 = param_1[0x4e];
          lVar10 = (long)iVar17;
          if ((int)(param_1[0x4f] & 0x7fffffffU) <= iVar17) {
            FUN_03396e08(param_1 + 0x4c,PTR_PTR_047d1a50,lVar10 + 1);
            iVar17 = param_1[0x4e];
            puVar4 = (undefined8 *)(ulong)local_1bc;
          }
          puVar11 = (undefined4 *)(*(long *)(param_1 + 0x4c) + (long)iVar17 * 0x18);
          *puVar11 = (int)puVar4;
          puVar11[1] = 1;
          *(undefined8 *)(puVar11 + 2) = 0;
          *(undefined8 *)(puVar11 + 4) = 0x8000000000000000;
          param_1[0x4e] = (int)(lVar10 + 1);
          puVar4 = (undefined8 *)(ulong)local_1bc;
          if (local_1bc != 0xffffffff) goto LAB_03395ae0;
        }
        else {
LAB_03395ae0:
          if (param_1[0x1e] <= (int)puVar4) {
            if (DAT_0488dfa8 == '\0') {
              if (DAT_046aaf68 == '\0') goto LAB_03395920;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1b8 = (char *)0x0;
              local_1a8 = &DAT_0488df58;
              uStack_1a0 = 1;
              pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
              local_198 = nn::os::GetThreadId(pTVar5);
              local_190 = (char *)0x0;
              local_188 = 0;
              local_180 = (char *)0x0;
              local_178 = 0;
              uStack_170 = 0;
              FUN_0322c554(&local_1b8,"Invalid type name string ID #{} (out of bounds).",
                           &DAT_044e9048,&local_1bc);
              local_178 = 0x8b3;
              goto LAB_033958e8;
            }
            local_1a8 = &DAT_0488df58;
            uStack_1a0 = 1;
            pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
            local_198 = nn::os::GetThreadId(pTVar5);
            local_1b8 = local_168;
            local_188 = 0;
            local_180 = (char *)0x0;
            local_178 = 0;
            uStack_170 = 0;
            local_168[0] = '\0';
            uStack_1b0 = 0x10000000000;
            local_190 = local_1b8;
            puVar4 = (undefined8 *)
                     FUN_0322c554(&local_1b8,"Invalid type name string ID #{} (out of bounds).",
                                  &DAT_044e9048,&local_1bc);
            local_178 = 0x8b3;
            goto LAB_033968fc;
          }
          pcVar12 = *(char **)(*(long *)(param_1 + 0x1c) + (long)(int)puVar4 * 8);
          if (*pcVar12 != '\0') {
            *puVar19 = *puVar19 | 8;
            puVar19[3] = (ulong)pcVar12;
          }
        }
        puVar4 = (undefined8 *)FUN_03391790(param_2);
        if ((ulong)puVar4 >> 0x1f != 0) {
          *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_03396350:
          *param_1 = -0x7ffbfe00;
LAB_0339635c:
          if (DAT_0488dfa8 == '\0') {
            if (DAT_046aaf68 == '\0') {
              return puVar4;
            }
          }
          else if (DAT_046aaf68 == '\0') {
            local_1b8 = (char *)0x0;
            local_1a8 = &DAT_0488df58;
            uStack_1a0 = 1;
            pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
            local_198 = nn::os::GetThreadId(pTVar5);
            local_190 = (char *)0x0;
            local_188 = 0;
            local_180 = (char *)0x0;
            local_178 = 0;
            uStack_170 = 0;
            FUN_0322c554(&local_1b8,"Error in input stream.",PTR_DAT_047d1b38);
            local_178 = 0x8be;
            goto LAB_03395794;
          }
          local_1a8 = &DAT_0488df58;
          uStack_1a0 = 1;
          pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
          local_198 = nn::os::GetThreadId(pTVar5);
          local_1b8 = local_168;
          local_188 = 0;
          local_180 = (char *)0x0;
          local_178 = 0;
          uStack_170 = 0;
          local_168[0] = '\0';
          uStack_1b0 = 0x10000000000;
          local_190 = local_1b8;
          puVar16 = (undefined8 *)FUN_0322c554(&local_1b8,"Error in input stream.",PTR_DAT_047d1b38)
          ;
          local_178 = 0x8be;
          goto LAB_03396084;
        }
        if ((char)param_2[3] != '\0') goto LAB_03396350;
        if (*param_1 < 0) goto LAB_0339635c;
        if (0 < (int)puVar4) {
          lVar10 = param_2[1] - *param_2;
          if (lVar10 < 0) {
            lVar10 = lVar10 + 1;
          }
          if (lVar10 >> 1 < (long)puVar4) {
            if (DAT_0488dfa8 == '\0') {
              if (DAT_046aaf68 == '\0') goto LAB_03395920;
            }
            else if (DAT_046aaf68 == '\0') {
              local_1b8 = (char *)0x0;
              local_1a8 = &DAT_0488df58;
              uStack_1a0 = 1;
              pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
              local_198 = nn::os::GetThreadId(pTVar5);
              local_190 = (char *)0x0;
              local_188 = 0;
              local_180 = (char *)0x0;
              local_178 = 0;
              uStack_170 = 0;
              FUN_0322c554(&local_1b8,"Invalid template",PTR_DAT_047d1b38);
              local_178 = 0x8c1;
              goto LAB_033958e8;
            }
            local_1a8 = &DAT_0488df58;
            uStack_1a0 = 1;
            pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
            local_198 = nn::os::GetThreadId(pTVar5);
            local_1b8 = local_168;
            local_188 = 0;
            local_180 = (char *)0x0;
            local_178 = 0;
            uStack_170 = 0;
            local_168[0] = '\0';
            uStack_1b0 = 0x10000000000;
            local_190 = local_1b8;
            puVar4 = (undefined8 *)FUN_0322c554(&local_1b8,"Invalid template",PTR_DAT_047d1b38);
            local_178 = 0x8c1;
            goto LAB_033968fc;
          }
          puVar6 = (undefined8 *)
                   (**(code **)(*(long *)(param_1 + 0x2c) + 0x18))
                             (plVar15,(long)puVar4 * 0x10 + 0x10);
          *puVar6 = 0;
          puVar6[1] = puVar4;
          *puVar19 = *puVar19 | 0x8000;
          puVar19[4] = (ulong)puVar6;
          puVar7 = puVar6;
          if (param_1[0x4a] == 2) {
            if ((int)(*(uint *)(*(long *)(param_1 + 0x4c) + ((long)param_1[0x4e] + -1) * 0x18 + 0x14
                               ) & 0x7fffffff) < (int)puVar4) {
              puVar7 = (undefined8 *)
                       FUN_03396fe0(*(long *)(param_1 + 0x4c) + ((long)param_1[0x4e] + -1) * 0x18 +
                                    8,PTR_PTR_047d1a50,puVar4);
            }
          }
          puVar4 = puVar7;
          lVar10 = puVar6[1] << 4;
          if (lVar10 != 0) {
            puVar6 = puVar6 + 3;
            do {
              uVar8 = FUN_03391790(param_2);
              if (uVar8 >> 0x1f != 0) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
              }
              local_1c0 = (uint)uVar8;
              puVar4 = (undefined8 *)FUN_03391790(param_2);
              local_1c8 = puVar4;
              if ((char)param_2[3] != '\0') {
                *param_1 = -0x7ffbfe00;
LAB_033960e0:
                if (DAT_0488dfa8 == '\0') {
                  if (DAT_046aaf68 == '\0') {
                    return puVar4;
                  }
                }
                else if (DAT_046aaf68 == '\0') {
                  local_1b8 = (char *)0x0;
                  local_1a8 = &DAT_0488df58;
                  uStack_1a0 = 1;
                  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                  local_198 = nn::os::GetThreadId(pTVar5);
                  local_190 = (char *)0x0;
                  local_188 = 0;
                  local_180 = (char *)0x0;
                  local_178 = 0;
                  uStack_170 = 0;
                  FUN_0322c554(&local_1b8,"Error in input stream.",PTR_DAT_047d1b38);
                  local_178 = 0x8d2;
                  goto LAB_03395794;
                }
                local_1a8 = &DAT_0488df58;
                uStack_1a0 = 1;
                pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar5);
                local_1b8 = local_168;
                local_188 = 0;
                local_180 = (char *)0x0;
                local_178 = 0;
                uStack_170 = 0;
                local_168[0] = '\0';
                uStack_1b0 = 0x10000000000;
                local_190 = local_1b8;
                puVar16 = (undefined8 *)
                          FUN_0322c554(&local_1b8,"Error in input stream.",PTR_DAT_047d1b38);
                local_178 = 0x8d2;
                goto LAB_03396084;
              }
              if (*param_1 < 0) goto LAB_033960e0;
              if (param_1[0x4a] == 2) {
                lVar13 = *(long *)(param_1 + 0x4c) + (long)param_1[0x4e] * 0x18;
                iVar17 = *(int *)(lVar13 + -8);
                plVar2 = (long *)(*(long *)(lVar13 + -0x10) + (long)iVar17 * 0x10);
                *plVar2 = (long)(int)(uint)uVar8;
                plVar2[1] = (long)puVar4;
                *(int *)(lVar13 + -8) = iVar17 + 1;
                uVar8 = (ulong)local_1c0;
              }
              iVar17 = (int)uVar8;
              local_1d0 = *(byte **)(*(long *)(param_1 + 0x1c) + (long)iVar17 * 8);
              if ((iVar17 < 0) || (param_1[0x1e] <= iVar17)) {
                if (DAT_0488dfa8 == '\0') {
                  if (DAT_046aaf68 == '\0') goto LAB_03395920;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_1b8 = (char *)0x0;
                  local_1a8 = &DAT_0488df58;
                  uStack_1a0 = 1;
                  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                  local_198 = nn::os::GetThreadId(pTVar5);
                  local_190 = (char *)0x0;
                  local_188 = 0;
                  local_180 = (char *)0x0;
                  local_178 = 0;
                  uStack_170 = 0;
                  goto LAB_03395fb8;
                }
                local_1a8 = &DAT_0488df58;
                uStack_1a0 = 1;
                pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar5);
                local_1b8 = local_168;
                local_188 = 0;
                local_180 = (char *)0x0;
                local_168[0] = '\0';
                local_178 = 0;
                uStack_170 = 0;
                uStack_1b0 = 0x10000000000;
                goto LAB_03396464;
              }
              if ((*local_1d0 == 0) || (local_1d0[1] == 0)) {
                if (DAT_0488dfa8 == '\0') {
                  if (DAT_046aaf68 == '\0') goto LAB_03395920;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_1b8 = (char *)0x0;
                  local_1a8 = &DAT_0488df58;
                  uStack_1a0 = 1;
                  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                  local_198 = nn::os::GetThreadId(pTVar5);
                  local_190 = (char *)0x0;
                  local_188 = 0;
                  local_180 = (char *)0x0;
                  local_178 = 0;
                  uStack_170 = 0;
                  goto LAB_03396010;
                }
                local_1a8 = &DAT_0488df58;
                uStack_1a0 = 1;
                pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar5);
                local_1b8 = local_168;
                local_188 = 0;
                local_180 = (char *)0x0;
                local_168[0] = '\0';
                local_178 = 0;
                uStack_170 = 0;
                uStack_1b0 = 0x10000000000;
                goto LAB_033964b8;
              }
              if ((*local_1d0 & 0xfd) != 0x74) {
                if (DAT_0488dfa8 == '\0') {
                  if (DAT_046aaf68 == '\0') goto LAB_03395920;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_1b8 = (char *)0x0;
                  local_1a8 = &DAT_0488df58;
                  uStack_1a0 = 1;
                  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                  local_198 = nn::os::GetThreadId(pTVar5);
                  local_190 = (char *)0x0;
                  local_188 = 0;
                  local_180 = (char *)0x0;
                  local_178 = 0;
                  uStack_170 = 0;
                  goto LAB_03396188;
                }
                local_1a8 = &DAT_0488df58;
                uStack_1a0 = 1;
                pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                local_198 = nn::os::GetThreadId(pTVar5);
                local_1b8 = local_168;
                local_188 = 0;
                local_180 = (char *)0x0;
                local_168[0] = '\0';
                local_178 = 0;
                uStack_170 = 0;
                uStack_1b0 = 0x10000000000;
                goto LAB_033966a4;
              }
              *puVar6 = local_1d0;
              puVar7 = puVar4;
              if (*local_1d0 == 0x74) {
                if ((puVar4 == (undefined8 *)0x0) || ((undefined8 *)(long)param_1[0x1a] <= puVar4))
                {
                  if (DAT_0488dfa8 == '\0') {
                    if (DAT_046aaf68 == '\0') goto LAB_03395920;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_1b8 = (char *)0x0;
                    local_1a8 = &DAT_0488df58;
                    uStack_1a0 = 1;
                    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                    local_198 = nn::os::GetThreadId(pTVar5);
                    local_190 = (char *)0x0;
                    local_188 = 0;
                    local_180 = (char *)0x0;
                    local_178 = 0;
                    uStack_170 = 0;
                    goto LAB_033962c8;
                  }
                  local_1a8 = &DAT_0488df58;
                  uStack_1a0 = 1;
                  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
                  local_198 = nn::os::GetThreadId(pTVar5);
                  local_1b8 = local_168;
                  local_188 = 0;
                  local_180 = (char *)0x0;
                  local_168[0] = '\0';
                  local_178 = 0;
                  uStack_170 = 0;
                  uStack_1b0 = 0x10000000000;
                  goto LAB_033966f8;
                }
                puVar7 = *(undefined8 **)
                          (*plVar1 +
                          (-((ulong)puVar4 >> 0x1f & 1) & 0xfffffff800000000 |
                          ((ulong)puVar4 & 0xffffffff) << 3));
              }
              puVar6[-1] = puVar7;
              puVar6 = puVar6 + 2;
              lVar10 = lVar10 + -0x10;
            } while (lVar10 != 0);
          }
        }
        puVar16 = (undefined8 *)((long)puVar16 + 1);
        if ((int)puVar16 == iVar14) {
          return puVar4;
        }
      } while( true );
    }
    if (1 < iVar17) {
      iVar18 = 1;
      do {
        FUN_03391790(param_2);
        puVar6 = (undefined8 *)FUN_03391790(param_2);
        if ((ulong)puVar6 >> 0x1f != 0) {
          *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_03395ea0:
          *param_1 = -0x7ffbfe00;
LAB_03395eac:
          if (DAT_0488dfa8 == '\0') {
            if (DAT_046aaf68 == '\0') {
              return puVar6;
            }
          }
          else if (DAT_046aaf68 == '\0') {
            local_1b8 = (char *)0x0;
            local_1a8 = &DAT_0488df58;
            uStack_1a0 = 1;
            pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
            local_198 = nn::os::GetThreadId(pTVar5);
            local_190 = (char *)0x0;
            local_188 = 0;
            local_180 = (char *)0x0;
            local_178 = 0;
            uStack_170 = 0;
            FUN_0322c554(&local_1b8,"Error in input stream.",PTR_DAT_047d1b38);
            local_178 = 0x894;
            goto LAB_03395794;
          }
          local_1a8 = &DAT_0488df58;
          uStack_1a0 = 1;
          pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
          local_198 = nn::os::GetThreadId(pTVar5);
          local_1b8 = local_168;
          local_188 = 0;
          local_180 = (char *)0x0;
          local_178 = 0;
          uStack_170 = 0;
          local_168[0] = '\0';
          uStack_1b0 = 0x10000000000;
          local_190 = local_1b8;
          puVar16 = (undefined8 *)FUN_0322c554(&local_1b8,"Error in input stream.",PTR_DAT_047d1b38)
          ;
          local_178 = 0x894;
          goto LAB_03396084;
        }
        if ((char)param_2[3] != '\0') goto LAB_03395ea0;
        if (*param_1 < 0) goto LAB_03395eac;
        puVar4 = puVar6;
        if (0 < (int)puVar6) {
          do {
            FUN_03391790(param_2);
            puVar6 = (undefined8 *)FUN_03391790(param_2);
            uVar3 = (int)puVar4 - 1;
            puVar4 = (undefined8 *)(ulong)uVar3;
          } while (uVar3 != 0);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != iVar17);
    }
    if ((char)param_2[3] == '\0') {
      if (-1 < *param_1) goto LAB_03395a38;
    }
    else {
      *param_1 = -0x7ffbfe00;
    }
    if (DAT_0488dfa8 != '\0') {
      if (DAT_046aaf68 != '\0') goto LAB_03395e34;
      local_1b8 = (char *)0x0;
      local_1a8 = &DAT_0488df58;
      uStack_1a0 = 1;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_198 = nn::os::GetThreadId(pTVar5);
      local_190 = (char *)0x0;
      local_188 = 0;
      local_180 = (char *)0x0;
      local_178 = 0;
      uStack_170 = 0;
      FUN_0322c554(&local_1b8,"Error in input stream.",PTR_DAT_047d1b38);
      local_178 = 0x89b;
      goto LAB_03395794;
    }
    if (DAT_046aaf68 == '\0') {
      return puVar6;
    }
LAB_03395e34:
    local_1a8 = &DAT_0488df58;
    uStack_1a0 = 1;
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    local_198 = nn::os::GetThreadId(pTVar5);
    local_1b8 = local_168;
    local_188 = 0;
    local_180 = (char *)0x0;
    local_178 = 0;
    uStack_170 = 0;
    local_168[0] = '\0';
    uStack_1b0 = 0x10000000000;
    local_190 = local_1b8;
    puVar16 = (undefined8 *)FUN_0322c554(&local_1b8,"Error in input stream.",PTR_DAT_047d1b38);
    local_178 = 0x89b;
  }
  else {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_03395724:
    *param_1 = -0x7ffbfe00;
LAB_03395730:
    if (DAT_0488dfa8 == '\0') {
      if (DAT_046aaf68 == '\0') {
        return puVar4;
      }
    }
    else if (DAT_046aaf68 == '\0') {
      local_1b8 = (char *)0x0;
      local_1a8 = &DAT_0488df58;
      uStack_1a0 = 1;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_198 = nn::os::GetThreadId(pTVar5);
      local_190 = (char *)0x0;
      local_188 = 0;
      local_180 = (char *)0x0;
      local_178 = 0;
      uStack_170 = 0;
      FUN_0322c554(&local_1b8,"Error in input stream.",PTR_DAT_047d1b38);
      local_178 = 0x86c;
LAB_03395794:
      local_180 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      puVar16 = (undefined8 *)FUN_0322c8e0(&local_1b8);
      goto LAB_033957a0;
    }
    local_1a8 = &DAT_0488df58;
    uStack_1a0 = 1;
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    local_198 = nn::os::GetThreadId(pTVar5);
    local_1b8 = local_168;
    local_188 = 0;
    local_180 = (char *)0x0;
    local_178 = 0;
    uStack_170 = 0;
    local_168[0] = '\0';
    uStack_1b0 = 0x10000000000;
    local_190 = local_1b8;
    puVar16 = (undefined8 *)FUN_0322c554(&local_1b8,"Error in input stream.",PTR_DAT_047d1b38);
    local_178 = 0x86c;
  }
LAB_03396084:
  local_180 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  if (local_168[0] != '\0') {
    sVar9 = strlen(local_168);
    (local_168 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = '\n';
    (local_168 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = '\0';
    printf("%s",local_168);
    uVar3 = fflush(*(FILE **)PTR_stdout_047cb860);
    puVar16 = (undefined8 *)(ulong)uVar3;
  }
LAB_033957a0:
  if (((ulong)local_190 & 1) == 0) {
    return puVar16;
  }
  puVar16 = (undefined8 *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_190 + -1,0);
  return puVar16;
LAB_03395fb8:
  uVar8 = *puVar19;
  if (((uint)uVar8 >> 3 & 1) == 0) {
    if (((uVar8 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
    goto LAB_033965cc;
    goto LAB_03395fb8;
  }
  if (puVar19 != (ulong *)0x0) {
    local_1d8 = puVar19[(ulong)(byte)POPCOUNT((byte)uVar8 & 7) + 2];
    goto LAB_033965d0;
  }
LAB_033965cc:
  local_1d8 = 0;
LAB_033965d0:
  FUN_0322c554(&local_1b8,
               "Invalid template parameter name string ID #{} (out of bounds) for type \'{}\'.",
               PTR_DAT_047e6898,&local_1c0,&local_1d8);
  local_178 = 0x8dd;
  goto LAB_033958e8;
LAB_03396464:
  uVar8 = *puVar19;
  if (((uint)uVar8 >> 3 & 1) == 0) {
    if (((uVar8 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
    goto LAB_03396974;
    goto LAB_03396464;
  }
  if (puVar19 != (ulong *)0x0) {
    local_1e0 = puVar19[(ulong)(byte)POPCOUNT((byte)uVar8 & 7) + 2];
    goto LAB_03396978;
  }
LAB_03396974:
  local_1e0 = 0;
LAB_03396978:
  local_190 = local_1b8;
  puVar4 = (undefined8 *)
           FUN_0322c554(&local_1b8,
                        "Invalid template parameter name string ID #{} (out of bounds) for type \'{}\'."
                        ,PTR_DAT_047e6898,&local_1c0,&local_1e0);
  local_178 = 0x8dd;
  goto LAB_033968fc;
LAB_03396010:
  uVar8 = *puVar19;
  if (((uint)uVar8 >> 3 & 1) == 0) {
    if (((uVar8 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
    goto LAB_0339662c;
    goto LAB_03396010;
  }
  if (puVar19 != (ulong *)0x0) {
    local_1d8 = puVar19[(ulong)(byte)POPCOUNT((byte)uVar8 & 7) + 2];
    goto LAB_03396630;
  }
LAB_0339662c:
  local_1d8 = 0;
LAB_03396630:
  FUN_0322c554(&local_1b8,
               "Invalid template parameter string ID #{} with empty name for type \'{}\': \'{}\'.",
               &DAT_047b2e48,&local_1c0,&local_1d8,&local_1d0);
  local_178 = 0x8e0;
  goto LAB_033958e8;
LAB_033964b8:
  uVar8 = *puVar19;
  if (((uint)uVar8 >> 3 & 1) == 0) {
    if (((uVar8 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
    goto LAB_033969d8;
    goto LAB_033964b8;
  }
  if (puVar19 != (ulong *)0x0) {
    local_1e0 = puVar19[(ulong)(byte)POPCOUNT((byte)uVar8 & 7) + 2];
    goto LAB_033969dc;
  }
LAB_033969d8:
  local_1e0 = 0;
LAB_033969dc:
  local_190 = local_1b8;
  puVar4 = (undefined8 *)
           FUN_0322c554(&local_1b8,
                        "Invalid template parameter string ID #{} with empty name for type \'{}\': \'{}\'."
                        ,&DAT_047b2e48,&local_1c0,&local_1e0,&local_1d0);
  local_178 = 0x8e0;
  goto LAB_033968fc;
LAB_03396188:
  uVar8 = *puVar19;
  if (((uint)uVar8 >> 3 & 1) == 0) {
    if (((uVar8 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
    goto LAB_033967a0;
    goto LAB_03396188;
  }
  if (puVar19 != (ulong *)0x0) {
    local_1d8 = puVar19[(ulong)(byte)POPCOUNT((byte)uVar8 & 7) + 2];
    goto LAB_033967a4;
  }
LAB_033967a0:
  local_1d8 = 0;
LAB_033967a4:
  FUN_0322c554(&local_1b8,
               "Invalid template parameter name \'{}\' for type \'{}\' (expected \'t\' for type, \'v\' for value; found \'{}\' instead)."
               ,&DAT_047b2e68,&local_1d0,&local_1d8,local_1d0);
  local_178 = 0x8e4;
  goto LAB_033958e8;
LAB_033966a4:
  uVar8 = *puVar19;
  if (((uint)uVar8 >> 3 & 1) == 0) {
    if (((uVar8 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
    goto LAB_03396a40;
    goto LAB_033966a4;
  }
  if (puVar19 != (ulong *)0x0) {
    local_1e0 = puVar19[(ulong)(byte)POPCOUNT((byte)uVar8 & 7) + 2];
    goto LAB_03396a44;
  }
LAB_03396a40:
  local_1e0 = 0;
LAB_03396a44:
  local_190 = local_1b8;
  puVar4 = (undefined8 *)
           FUN_0322c554(&local_1b8,
                        "Invalid template parameter name \'{}\' for type \'{}\' (expected \'t\' for type, \'v\' for value; found \'{}\' instead)."
                        ,&DAT_047b2e68,&local_1d0,&local_1e0,local_1d0);
  local_178 = 0x8e4;
  goto LAB_033968fc;
LAB_033962c8:
  uVar8 = *puVar19;
  if (((uint)uVar8 >> 3 & 1) == 0) {
    if (((uVar8 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
    goto LAB_03396804;
    goto LAB_033962c8;
  }
  if (puVar19 != (ulong *)0x0) {
    local_1d8 = puVar19[(ulong)(byte)POPCOUNT((byte)uVar8 & 7) + 2];
    goto LAB_03396808;
  }
LAB_03396804:
  local_1d8 = 0;
LAB_03396808:
  FUN_0322c554(&local_1b8,"Invalid template type ID #{} (out of bounds) for type \'{}\'.",
               &DAT_047b2e88,&local_1c8,&local_1d8);
  local_178 = 0x8ec;
LAB_033958e8:
  local_180 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  puVar4 = (undefined8 *)FUN_0322c8e0(&local_1b8);
  goto LAB_033958f4;
LAB_033966f8:
  uVar8 = *puVar19;
  if (((uint)uVar8 >> 3 & 1) == 0) {
    if (((uVar8 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
    goto LAB_03396aa8;
    goto LAB_033966f8;
  }
  if (puVar19 != (ulong *)0x0) {
    local_1e0 = puVar19[(ulong)(byte)POPCOUNT((byte)uVar8 & 7) + 2];
    goto LAB_03396aac;
  }
LAB_03396aa8:
  local_1e0 = 0;
LAB_03396aac:
  local_190 = local_1b8;
  puVar4 = (undefined8 *)
           FUN_0322c554(&local_1b8,"Invalid template type ID #{} (out of bounds) for type \'{}\'.",
                        &DAT_047b2e88,&local_1c8,&local_1e0);
  local_178 = 0x8ec;
LAB_033968fc:
  local_180 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  if (local_168[0] != '\0') {
    sVar9 = strlen(local_168);
    (local_168 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[0] = '\n';
    (local_168 + (int)((int)sVar9 - (uint)((int)sVar9 == 0xff)))[1] = '\0';
    printf("%s",local_168);
    uVar3 = fflush(*(FILE **)PTR_stdout_047cb860);
    puVar4 = (undefined8 *)(ulong)uVar3;
  }
LAB_033958f4:
  if (((ulong)local_190 & 1) != 0) {
    puVar4 = (undefined8 *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_190 + -1,0);
  }
LAB_03395920:
  *param_1 = -0x7ffbfe00;
  return puVar4;
}


