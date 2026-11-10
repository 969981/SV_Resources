/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033924d4; name: FUN_033924d4
 */


void FUN_033924d4(ulong *param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  ThreadType *pTVar2;
  size_t sVar3;
  code *pcVar4;
  long lVar5;
  int *piVar7;
  int *piVar6;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  char *local_1d0;
  char *pcStack_1c8;
  char *local_1c0;
  ulong local_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  char local_180 [256];
  undefined1 *local_80;
  ulong local_78;
  undefined1 auStack_70 [16];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  
  local_80 = auStack_70;
  local_78 = 0x8000001000000000;
  iVar11 = (int)((long)param_4 - (long)param_3 >> 4) * -0x55555555;
  if (iVar11 < 0x11) {
    local_78._0_4_ = 0;
  }
  else {
    FUN_02e7fe28(&local_80,PTR_PTR_047d1a50 + 0x20,(long)iVar11);
  }
  if ((int)(uint)local_78 < iVar11) {
    lVar5 = (long)(int)(uint)local_78;
    uVar1 = ~(uint)local_78;
    local_78 = CONCAT44(local_78._4_4_,iVar11);
    memset(local_80 + lVar5,0,(ulong)(uVar1 + iVar11) + 1);
  }
  else if (iVar11 < (int)(uint)local_78) {
    local_78 = CONCAT44(local_78._4_4_,iVar11);
  }
  if (-1 < *param_2) {
    do {
      iVar11 = FUN_033923b4(param_1,0);
      if (iVar11 == 0) goto LAB_03392814;
      if (iVar11 == 1) {
        if (1 < DAT_0488dfa8) {
          if (DAT_046aaf68 != '\0') goto LAB_03392938;
          local_1d0 = (char *)0x0;
          local_1c0 = (char *)&DAT_0488df58;
          local_1b8 = 2;
          pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
          local_1b0 = nn::os::GetThreadId(pTVar2);
          local_1a8 = (char *)0x0;
          local_1a0 = 0;
          local_198 = (char *)0x0;
          local_190 = 0;
          uStack_188 = 0;
          FUN_0322c554(&local_1d0,"IO error",PTR_DAT_047d1b38);
          local_190 = 0x50f;
LAB_033927d4:
          local_198 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          FUN_0322c8e0(&local_1d0);
          goto LAB_033927e0;
        }
        if (DAT_046aaf68 != '\0') {
LAB_03392938:
          local_1c0 = (char *)&DAT_0488df58;
          local_1b8 = 2;
          pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
          local_1b0 = nn::os::GetThreadId(pTVar2);
          local_1d0 = local_180;
          local_1a0 = 0;
          local_198 = (char *)0x0;
          local_190 = 0;
          uStack_188 = 0;
          local_180[0] = '\0';
          pcStack_1c8 = (char *)0x10000000000;
          local_1a8 = local_1d0;
          FUN_0322c554(&local_1d0,"IO error",PTR_DAT_047d1b38);
          local_190 = 0x50f;
          goto LAB_03392a5c;
        }
LAB_0339280c:
        *param_2 = -0x7ffbfe00;
        break;
      }
      if (param_3 == param_4) {
LAB_03392748:
        local_48 = (undefined1)((uint)iVar11 >> 0x18);
        local_47 = (undefined1)((uint)iVar11 >> 0x10);
        local_46 = (undefined1)((uint)iVar11 >> 8);
        local_45 = (undefined1)iVar11;
        local_44 = 0;
        if (DAT_0488dfa8 < 2) {
          if (DAT_046aaf68 == '\0') goto LAB_0339280c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1d0 = (char *)0x0;
          local_1c0 = (char *)&DAT_0488df58;
          local_1b8 = 2;
          pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
          local_1b0 = nn::os::GetThreadId(pTVar2);
          local_1a8 = (char *)0x0;
          local_1a0 = 0;
          local_198 = (char *)0x0;
          local_190 = 0;
          uStack_188 = 0;
          FUN_0322c554(&local_1d0,"Unexpected section {}",PTR_DAT_047e5900,&local_48);
          local_190 = 0x539;
          goto LAB_033927d4;
        }
        local_1c0 = (char *)&DAT_0488df58;
        local_1b8 = 2;
        pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
        local_1b0 = nn::os::GetThreadId(pTVar2);
        local_1d0 = local_180;
        local_1a0 = 0;
        local_198 = (char *)0x0;
        local_190 = 0;
        uStack_188 = 0;
        local_180[0] = '\0';
        pcStack_1c8 = (char *)0x10000000000;
        local_1a8 = local_1d0;
        FUN_0322c554(&local_1d0,"Unexpected section {}",PTR_DAT_047e5900,&local_48);
        local_190 = 0x539;
LAB_03392a5c:
        local_198 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        if (local_180[0] != '\0') {
          sVar3 = strlen(local_180);
          (local_180 + (int)((int)sVar3 - (uint)((int)sVar3 == 0xff)))[0] = '\n';
          (local_180 + (int)((int)sVar3 - (uint)((int)sVar3 == 0xff)))[1] = '\0';
          printf("%s",local_180);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
LAB_033927e0:
        if (((ulong)local_1a8 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1a8 + -1,0);
        }
        goto LAB_0339280c;
      }
      piVar6 = param_3;
      while (piVar7 = piVar6 + 0xc, *piVar6 != iVar11) {
        piVar6 = piVar7;
        if (param_4 == piVar7) goto LAB_03392748;
      }
      if (piVar6 == (int *)0x0) goto LAB_03392748;
      iVar11 = (int)((ulong)((long)piVar6 - (long)param_3) >> 4) * -0x55555555;
      if (local_80[iVar11] != '\0') {
        if (DAT_0488dfa8 < 2) {
          if (DAT_046aaf68 == '\0') goto LAB_0339280c;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1d0 = (char *)0x0;
          local_1c0 = (char *)&DAT_0488df58;
          local_1b8 = 2;
          pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
          local_1b0 = nn::os::GetThreadId(pTVar2);
          local_1a8 = (char *)0x0;
          local_1a0 = 0;
          local_198 = (char *)0x0;
          local_190 = 0;
          uStack_188 = 0;
          FUN_0322c554(&local_1d0,"Duplicate section",PTR_DAT_047d1b38);
          local_190 = 0x532;
          goto LAB_033927d4;
        }
        local_1c0 = (char *)&DAT_0488df58;
        local_1b8 = 2;
        pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
        local_1b0 = nn::os::GetThreadId(pTVar2);
        local_1d0 = local_180;
        local_1a0 = 0;
        local_198 = (char *)0x0;
        local_190 = 0;
        uStack_188 = 0;
        local_180[0] = '\0';
        pcStack_1c8 = (char *)0x10000000000;
        local_1a8 = local_1d0;
        FUN_0322c554(&local_1d0,"Duplicate section",PTR_DAT_047d1b38);
        local_190 = 0x532;
        goto LAB_03392a5c;
      }
      local_80[iVar11] = 1;
      pcVar4 = *(code **)(piVar6 + 10);
      if (pcVar4 == (code *)0x0) {
        uVar8 = (((ulong)*(uint *)(param_1[5] + (long)(int)param_1[6] * 0x18 + -0x14) & 0x3fffffff)
                + *param_1) - 8;
        if (param_1[1] < uVar8) {
          *param_1 = param_1[1];
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
          iVar11 = -0x7ffbfe00;
        }
        else {
          *param_1 = uVar8;
          iVar11 = 0;
          if ((char)param_1[3] != '\0') {
            iVar11 = -0x7ffbfe00;
          }
        }
        *param_2 = iVar11;
      }
      else {
        puVar9 = (uint *)(param_1[5] + (long)(int)param_1[6] * 0x18 + -0x14);
        local_1d0 = (char *)*param_1;
        if ((char *)param_1[1] < local_1d0 + (((ulong)*puVar9 & 0x3fffffff) - 8)) {
          *param_1 = param_1[1];
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
        }
        else {
          *param_1 = (ulong)(local_1d0 + (((ulong)*puVar9 & 0x3fffffff) - 8));
        }
        local_1b8 = local_1b8 & 0xffffffffffffff00;
        pcStack_1c8 = local_1d0 + (((ulong)*puVar9 & 0x3fffffff) - 8);
        local_1c0 = local_1d0;
        (*pcVar4)(&local_1d0,param_2);
        iVar11 = *param_2;
      }
      if (-1 < iVar11) {
        lVar5 = (long)(int)param_1[6] + -1;
        lVar10 = param_1[5] + lVar5 * 0x18;
        if (*param_1 - param_1[2] ==
            *(long *)(lVar10 + 8) + ((ulong)*(uint *)(lVar10 + 4) & 0x3fffffff)) {
          param_1[4] = *(ulong *)(param_1[5] + lVar5 * 0x18 + 0x10);
          *(int *)(param_1 + 6) = (int)lVar5;
        }
        else {
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
        }
      }
    } while (-1 < *param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0;
LAB_03392814:
  uVar8 = local_78;
  local_78 = local_78 & 0xffffffff00000000;
  if ((-1 < (long)uVar8) && (local_80 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return;
}


