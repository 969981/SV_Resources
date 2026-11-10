/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03391d68; name: FUN_03391d68
 */


void FUN_03391d68(long *param_1,int *param_2,int *param_3,int *param_4)

{
  ulong uVar1;
  uint uVar2;
  ThreadType *pTVar3;
  size_t sVar4;
  ulong *puVar5;
  FILE *__stream;
  int *piVar6;
  code *pcVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined1 local_1e0;
  undefined1 local_1df;
  undefined1 local_1de;
  undefined1 local_1dd;
  undefined1 local_1dc;
  char *local_1d8;
  undefined8 uStack_1d0;
  undefined8 *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  char local_188 [256];
  undefined1 *local_88;
  ulong local_80;
  undefined1 auStack_78 [24];
  
  local_88 = auStack_78;
  local_80 = 0x8000001000000000;
  iVar12 = (int)((long)param_4 - (long)param_3 >> 4) * -0x55555555;
  if (iVar12 < 0x11) {
    local_80._0_4_ = 0;
  }
  else {
    FUN_02e7fe28(&local_88,PTR_PTR_047d1a50 + 0x20,(long)iVar12);
  }
  if ((int)(uint)local_80 < iVar12) {
    lVar10 = (long)(int)(uint)local_80;
    uVar2 = ~(uint)local_80;
    local_80 = CONCAT44(local_80._4_4_,iVar12);
    memset(local_88 + lVar10,0,(ulong)(uVar2 + iVar12) + 1);
  }
  else if (iVar12 < (int)(uint)local_80) {
    local_80 = CONCAT44(local_80._4_4_,iVar12);
  }
  if (-1 < *param_2) {
    __stream = *(FILE **)PTR_stdout_047cb860;
    do {
      iVar12 = FUN_03398304(param_1,0);
      if (iVar12 == 0) goto LAB_033922c8;
      if (iVar12 == 1) {
        if (DAT_0488dfa8 < 2) {
          if (DAT_046aaf68 != '\0') goto LAB_033921d0;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1d8 = (char *)0x0;
            local_1c8 = &DAT_0488df58;
            uStack_1c0 = 2;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_1b8 = nn::os::GetThreadId(pTVar3);
            local_1b0 = (char *)0x0;
            local_1a8 = 0;
            local_1a0 = (char *)0x0;
            local_198 = 0;
            local_190 = 0;
            FUN_0322c554(&local_1d8,"IO error",PTR_DAT_047d1b38);
            local_198 = 0x50f;
LAB_03392280:
            local_1a0 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            FUN_0322c8e0(&local_1d8);
          }
          else {
LAB_033921d0:
            local_1c8 = &DAT_0488df58;
            uStack_1c0 = 2;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_1b8 = nn::os::GetThreadId(pTVar3);
            local_1d8 = local_188;
            local_1a8 = 0;
            local_1a0 = (char *)0x0;
            local_198 = 0;
            local_190 = 0;
            local_188[0] = '\0';
            uStack_1d0 = 0x10000000000;
            local_1b0 = local_1d8;
            FUN_0322c554(&local_1d8,"IO error",PTR_DAT_047d1b38);
            local_198 = 0x50f;
LAB_03392364:
            local_1a0 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            if (local_188[0] != '\0') {
              sVar4 = strlen(local_188);
              (local_188 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
              (local_188 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
              printf("%s",local_188);
              fflush(__stream);
            }
          }
          if (((ulong)local_1b0 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1b0 + -1,0);
          }
        }
LAB_033922c0:
        *param_2 = -0x7ffbfe00;
        break;
      }
      if (param_3 != param_4) {
        piVar9 = param_3;
        do {
          piVar6 = piVar9 + 0xc;
          if (*piVar9 == iVar12) {
            if (piVar9 != (int *)0x0) {
              iVar12 = (int)((ulong)((long)piVar9 - (long)param_3) >> 4) * -0x55555555;
              if (local_88[iVar12] != '\0') {
                if (DAT_0488dfa8 < 2) {
                  if (DAT_046aaf68 == '\0') goto LAB_033922c0;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_1d8 = (char *)0x0;
                  local_1c8 = &DAT_0488df58;
                  uStack_1c0 = 2;
                  pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1b8 = nn::os::GetThreadId(pTVar3);
                  local_1b0 = (char *)0x0;
                  local_1a8 = 0;
                  local_1a0 = (char *)0x0;
                  local_198 = 0;
                  local_190 = 0;
                  FUN_0322c554(&local_1d8,"Duplicate section",PTR_DAT_047d1b38);
                  local_198 = 0x532;
                  goto LAB_03392280;
                }
                local_1c8 = &DAT_0488df58;
                uStack_1c0 = 2;
                pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
                local_1b8 = nn::os::GetThreadId(pTVar3);
                local_1d8 = local_188;
                local_1a8 = 0;
                local_1a0 = (char *)0x0;
                local_198 = 0;
                local_190 = 0;
                local_188[0] = '\0';
                uStack_1d0 = 0x10000000000;
                local_1b0 = local_1d8;
                FUN_0322c554(&local_1d8,"Duplicate section",PTR_DAT_047d1b38);
                local_198 = 0x532;
                goto LAB_03392364;
              }
              local_88[iVar12] = 1;
              pcVar7 = *(code **)(piVar9 + 2);
              uVar1 = *(ulong *)(piVar9 + 4);
              if ((pcVar7 == (code *)0x0) && (uVar1 == 0 || (uVar1 & 1) == 0)) {
                puVar5 = (ulong *)*param_1;
                uVar1 = *puVar5 + (((ulong)*(uint *)(param_1[2] + (long)(int)param_1[3] * 0x18 +
                                                    -0x14) & 0x3fffffff) - 8);
                if (puVar5[1] < uVar1) {
                  if ((long *)puVar5[7] != (long *)0x0) {
                    (**(code **)(*(long *)puVar5[7] + 0x30))();
                  }
                }
                else {
                  *puVar5 = uVar1;
                }
                iVar12 = 0;
                if (*(char *)(*param_1 + 0x20) != '\0') {
                  iVar12 = -0x7ffbfe00;
                }
                *param_2 = iVar12;
              }
              else {
                plVar8 = (long *)((long)param_2 + ((long)uVar1 >> 1));
                if ((uVar1 & 1) != 0) {
                  pcVar7 = *(code **)(pcVar7 + *plVar8);
                }
                (*pcVar7)(plVar8,param_1);
                iVar12 = *param_2;
              }
              if (-1 < iVar12) {
                plVar8 = (long *)*param_1;
                lVar10 = (long)(int)param_1[3] + -1;
                lVar11 = param_1[2] + lVar10 * 0x18;
                if ((plVar8[5] - plVar8[2]) + *plVar8 ==
                    *(long *)(lVar11 + 8) + ((ulong)*(uint *)(lVar11 + 4) & 0x3fffffff)) {
                  param_1[1] = *(long *)(param_1[2] + lVar10 * 0x18 + 0x10);
                  *(int *)(param_1 + 3) = (int)lVar10;
                }
                else {
                  *(byte *)(plVar8 + 4) = *(byte *)(plVar8 + 4) | 2;
                }
              }
              goto LAB_0339200c;
            }
            break;
          }
          piVar9 = piVar6;
        } while (param_4 != piVar6);
      }
      local_1e0 = (undefined1)((uint)iVar12 >> 0x18);
      local_1df = (undefined1)((uint)iVar12 >> 0x10);
      local_1de = (undefined1)((uint)iVar12 >> 8);
      local_1dd = (undefined1)iVar12;
      local_1dc = 0;
      if (DAT_0488dfa8 < 2) {
        if (DAT_046aaf68 != '\0') goto LAB_033920c0;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_1d8 = (char *)0x0;
          local_1c8 = &DAT_0488df58;
          uStack_1c0 = 2;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_1b8 = nn::os::GetThreadId(pTVar3);
          local_1b0 = (char *)0x0;
          local_1a8 = 0;
          local_190 = 0;
          local_1a0 = (char *)0x0;
          local_198 = 0;
          FUN_0322c554(&local_1d8,"Unexpected section {}",PTR_DAT_047e5900,&local_1e0);
          local_1a0 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          local_198 = 0x539;
          FUN_0322c8e0(&local_1d8);
        }
        else {
LAB_033920c0:
          local_1d8 = (char *)0x0;
          local_1c8 = &DAT_0488df58;
          uStack_1c0 = 2;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_1b8 = nn::os::GetThreadId(pTVar3);
          local_1a8 = 0;
          local_1a0 = (char *)0x0;
          local_198 = 0;
          local_190 = 0;
          local_188[0] = '\0';
          uStack_1d0 = 0x10000000000;
          local_1d8 = local_188;
          local_1b0 = local_188;
          FUN_0322c554(&local_1d8,"Unexpected section {}",PTR_DAT_047e5900,&local_1e0);
          local_1a0 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          local_198 = 0x539;
          if (local_188[0] != '\0') {
            sVar4 = strlen(local_188);
            (local_188 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
            (local_188 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
            printf("%s",local_188);
            fflush(__stream);
          }
        }
        if (((ulong)local_1b0 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1b0 + -1,0);
        }
      }
      *param_2 = -0x7ffbfe00;
LAB_0339200c:
    } while (-1 < *param_2);
  }
  *(undefined4 *)(param_1 + 3) = 0;
LAB_033922c8:
  uVar1 = local_80;
  local_80 = local_80 & 0xffffffff00000000;
  if ((-1 < (long)uVar1) && (local_88 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return;
}


