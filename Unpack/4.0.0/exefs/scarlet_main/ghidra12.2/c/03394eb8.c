/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03394eb8; name: FUN_03394eb8
 */


void FUN_03394eb8(ulong *param_1,long *param_2,int *param_3,int *param_4)

{
  long *plVar1;
  uint uVar2;
  ThreadType *pTVar3;
  size_t sVar4;
  FILE *__stream;
  int *piVar5;
  code *pcVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  undefined1 local_1e0;
  undefined1 local_1df;
  undefined1 local_1de;
  undefined1 local_1dd;
  undefined1 local_1dc;
  char *local_1d8;
  char *pcStack_1d0;
  char *local_1c8;
  ulong local_1c0;
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
  
  piVar13 = (int *)*param_2;
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
    lVar7 = (long)(int)(uint)local_80;
    uVar2 = ~(uint)local_80;
    local_80 = CONCAT44(local_80._4_4_,iVar12);
    memset(local_88 + lVar7,0,(ulong)(uVar2 + iVar12) + 1);
  }
  else if (iVar12 < (int)(uint)local_80) {
    local_80 = CONCAT44(local_80._4_4_,iVar12);
  }
  if (-1 < *piVar13) {
    __stream = *(FILE **)PTR_stdout_047cb860;
    do {
      iVar12 = FUN_033923b4(param_1,0);
      if (iVar12 == 0) goto LAB_03395484;
      if (iVar12 == 1) {
        if (DAT_0488dfa8 < 2) {
          if (DAT_046aaf68 != '\0') goto LAB_03395384;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1d8 = (char *)0x0;
            local_1c8 = (char *)&DAT_0488df58;
            local_1c0 = 2;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_1b8 = nn::os::GetThreadId(pTVar3);
            local_1b0 = (char *)0x0;
            local_1a8 = 0;
            local_1a0 = (char *)0x0;
            local_198 = 0;
            local_190 = 0;
            FUN_0322c554(&local_1d8,"IO error",PTR_DAT_047d1b38);
            local_198 = 0x50f;
LAB_03395434:
            local_1a0 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            FUN_0322c8e0(&local_1d8);
          }
          else {
LAB_03395384:
            local_1c8 = (char *)&DAT_0488df58;
            local_1c0 = 2;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_1b8 = nn::os::GetThreadId(pTVar3);
            local_1d8 = local_188;
            local_1a8 = 0;
            local_1a0 = (char *)0x0;
            local_198 = 0;
            local_190 = 0;
            local_188[0] = '\0';
            pcStack_1d0 = (char *)0x10000000000;
            local_1b0 = local_1d8;
            FUN_0322c554(&local_1d8,"IO error",PTR_DAT_047d1b38);
            local_198 = 0x50f;
LAB_03395520:
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
LAB_03395474:
        *piVar13 = -0x7ffbfe00;
        break;
      }
      if (param_3 != param_4) {
        piVar8 = param_3;
        do {
          piVar5 = piVar8 + 0xc;
          if (*piVar8 == iVar12) {
            if (piVar8 != (int *)0x0) {
              iVar12 = (int)((ulong)((long)piVar8 - (long)param_3) >> 4) * -0x55555555;
              if (local_88[iVar12] != '\0') {
                if (DAT_0488dfa8 < 2) {
                  if (DAT_046aaf68 == '\0') goto LAB_03395474;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_1d8 = (char *)0x0;
                  local_1c8 = (char *)&DAT_0488df58;
                  local_1c0 = 2;
                  pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1b8 = nn::os::GetThreadId(pTVar3);
                  local_1b0 = (char *)0x0;
                  local_1a8 = 0;
                  local_1a0 = (char *)0x0;
                  local_198 = 0;
                  local_190 = 0;
                  FUN_0322c554(&local_1d8,"Duplicate section",PTR_DAT_047d1b38);
                  local_198 = 0x532;
                  goto LAB_03395434;
                }
                local_1c8 = (char *)&DAT_0488df58;
                local_1c0 = 2;
                pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
                local_1b8 = nn::os::GetThreadId(pTVar3);
                local_1d8 = local_188;
                local_1a8 = 0;
                local_1a0 = (char *)0x0;
                local_198 = 0;
                local_190 = 0;
                local_188[0] = '\0';
                pcStack_1d0 = (char *)0x10000000000;
                local_1b0 = local_1d8;
                FUN_0322c554(&local_1d8,"Duplicate section",PTR_DAT_047d1b38);
                local_198 = 0x532;
                goto LAB_03395520;
              }
              local_88[iVar12] = 1;
              pcVar6 = *(code **)(piVar8 + 6);
              uVar9 = *(ulong *)(piVar8 + 8);
              if ((pcVar6 == (code *)0x0) && (uVar9 == 0 || (uVar9 & 1) == 0)) {
                uVar9 = (((ulong)*(uint *)(param_1[5] + (long)(int)param_1[6] * 0x18 + -0x14) &
                         0x3fffffff) + *param_1) - 8;
                if (param_1[1] < uVar9) {
                  *param_1 = param_1[1];
                  *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
                  iVar12 = -0x7ffbfe00;
                }
                else {
                  *param_1 = uVar9;
                  iVar12 = 0;
                  if ((char)param_1[3] != '\0') {
                    iVar12 = -0x7ffbfe00;
                  }
                }
                *piVar13 = iVar12;
              }
              else {
                lVar7 = param_2[1];
                plVar1 = (long *)(*param_2 + ((long)uVar9 >> 1));
                lVar11 = param_2[2];
                if ((uVar9 & 1) != 0) {
                  pcVar6 = *(code **)(pcVar6 + *plVar1);
                }
                puVar10 = (uint *)(param_1[5] + (long)(int)param_1[6] * 0x18 + -0x14);
                local_1d8 = (char *)*param_1;
                if ((char *)param_1[1] < local_1d8 + (((ulong)*puVar10 & 0x3fffffff) - 8)) {
                  *param_1 = param_1[1];
                  *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
                }
                else {
                  *param_1 = (ulong)(local_1d8 + (((ulong)*puVar10 & 0x3fffffff) - 8));
                }
                local_1c0 = local_1c0 & 0xffffffffffffff00;
                pcStack_1d0 = local_1d8 + (((ulong)*puVar10 & 0x3fffffff) - 8);
                local_1c8 = local_1d8;
                (*pcVar6)(plVar1,&local_1d8,lVar7,lVar11);
                iVar12 = *piVar13;
              }
              if (-1 < iVar12) {
                lVar7 = (long)(int)param_1[6] + -1;
                lVar11 = param_1[5] + lVar7 * 0x18;
                if (*param_1 - param_1[2] ==
                    *(long *)(lVar11 + 8) + ((ulong)*(uint *)(lVar11 + 4) & 0x3fffffff)) {
                  param_1[4] = *(ulong *)(param_1[5] + lVar7 * 0x18 + 0x10);
                  *(int *)(param_1 + 6) = (int)lVar7;
                }
                else {
                  *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
                }
              }
              goto LAB_03395160;
            }
            break;
          }
          piVar8 = piVar5;
        } while (param_4 != piVar5);
      }
      local_1e0 = (undefined1)((uint)iVar12 >> 0x18);
      local_1df = (undefined1)((uint)iVar12 >> 0x10);
      local_1de = (undefined1)((uint)iVar12 >> 8);
      local_1dd = (undefined1)iVar12;
      local_1dc = 0;
      if (DAT_0488dfa8 < 2) {
        if (DAT_046aaf68 != '\0') goto LAB_03395274;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_1d8 = (char *)0x0;
          local_1c8 = (char *)&DAT_0488df58;
          local_1c0 = 2;
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
LAB_03395274:
          local_1d8 = (char *)0x0;
          local_1c8 = (char *)&DAT_0488df58;
          local_1c0 = 2;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_1b8 = nn::os::GetThreadId(pTVar3);
          local_1a8 = 0;
          local_1a0 = (char *)0x0;
          local_198 = 0;
          local_190 = 0;
          local_188[0] = '\0';
          pcStack_1d0 = (char *)0x10000000000;
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
      *piVar13 = -0x7ffbfe00;
LAB_03395160:
    } while (-1 < *piVar13);
  }
  *(undefined4 *)(param_1 + 6) = 0;
LAB_03395484:
  uVar9 = local_80;
  local_80 = local_80 & 0xffffffff00000000;
  if ((-1 < (long)uVar9) && (local_88 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return;
}


