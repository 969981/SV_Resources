/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03382ec8; name: FUN_03382ec8
 */


undefined8 * FUN_03382ec8(undefined8 *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ThreadType *pTVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
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
  
  puVar5 = param_1;
  if ((param_3 & 1) == 0) {
LAB_03382ee8:
    puVar2 = PTR_DAT_047d1a08;
    if (param_1[0x21] == 0) {
      local_190 = (char *)0x20;
      puVar4 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_190,0);
      puVar5 = puVar4;
      if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
        puVar5 = (undefined8 *)(**(code **)(puVar2 + 0x10))(puVar4,"hkHashSet");
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined4 *)((long)puVar4 + 0xc) = 0x80000000;
      puVar4[2] = &DAT_03d7702c;
      puVar4[3] = 0;
      *(undefined4 *)(puVar4 + 3) = 0;
      plVar10 = (long *)param_1[0x21];
      param_1[0x21] = puVar4;
      if (plVar10 != (long *)0x0) {
        lVar8 = plVar10[2];
        if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
          (**(code **)(puVar2 + 8))(PTR_PTR_047d1a50[8],lVar8,0);
          plVar10[2] = (long)&DAT_03d7702c;
          *(undefined4 *)(plVar10 + 3) = 0;
        }
        *(undefined4 *)(plVar10 + 1) = 0;
        if ((-1 < (int)*(uint *)((long)plVar10 + 0xc)) && (*plVar10 != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*plVar10,(ulong)*(uint *)((long)plVar10 + 0xc) << 2);
        }
        *plVar10 = 0;
        *(undefined4 *)((long)plVar10 + 0xc) = 0x80000000;
        puVar5 = (undefined8 *)(**(code **)(puVar2 + 8))(0,plVar10,0);
      }
    }
    return puVar5;
  }
  uVar9 = param_2[1] - *param_2;
  if ((uVar9 & 7) == 0) {
    uVar3 = (uint)(uVar9 >> 3);
    if (0 < (int)uVar3) {
      uVar9 = uVar9 >> 3 & 0xffffffff;
      plVar10 = (long *)param_2[2];
      do {
        if (*plVar10 != 0) {
          if (DAT_0488dfa8 == '\0') {
            if (DAT_046aaf68 == '\0') goto LAB_033830d4;
          }
          else if (DAT_046aaf68 == '\0') {
            local_190 = (char *)0x0;
            local_180 = &DAT_0488df58;
            uStack_178 = 1;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_170 = nn::os::GetThreadId(pTVar6);
            local_168 = (char *)0x0;
            local_160 = 0;
            local_158 = (char *)0x0;
            local_150 = 0;
            uStack_148 = 0;
            FUN_0322c554(&local_190,"Buffer already inplace loaded",PTR_DAT_047d1b38);
            local_150 = 0x9a0;
            goto LAB_03383060;
          }
          local_180 = &DAT_0488df58;
          uStack_178 = 1;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_170 = nn::os::GetThreadId(pTVar6);
          local_190 = local_140;
          local_160 = 0;
          local_158 = (char *)0x0;
          local_150 = 0;
          uStack_148 = 0;
          local_140[0] = '\0';
          uStack_188 = 0x10000000000;
          local_168 = local_190;
          puVar5 = (undefined8 *)
                   FUN_0322c554(&local_190,"Buffer already inplace loaded",PTR_DAT_047d1b38);
          local_150 = 0x9a0;
          goto LAB_033832d4;
        }
        uVar9 = uVar9 - 1;
        plVar10 = plVar10 + 1;
      } while (uVar9 != 0);
    }
    if ((param_3 >> 8 & 1) == 0) {
      param_1[2] = (long *)param_2[2];
      *(uint *)(param_1 + 3) = uVar3;
      *(uint *)((long)param_1 + 0x1c) = uVar3 | 0x80000000;
    }
    else {
      if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) < (int)uVar3) {
        puVar5 = (undefined8 *)FUN_031d93e4(param_1 + 2,PTR_PTR_047d1a50,(long)(int)uVar3);
      }
      if ((*(int *)(param_1 + 3) < (int)uVar3) || ((int)uVar3 < *(int *)(param_1 + 3))) {
        *(uint *)(param_1 + 3) = uVar3;
      }
    }
    if ((int)(*(uint *)((long)param_1 + 0x1d4) & 0x7fffffff) < (int)uVar3) {
      puVar5 = (undefined8 *)FUN_02e7fe28(param_1 + 0x39,PTR_PTR_047d1a50,(long)(int)uVar3);
    }
    uVar1 = *(uint *)(param_1 + 0x3a);
    if ((int)uVar1 < (int)uVar3) {
      *(uint *)(param_1 + 0x3a) = uVar3;
      puVar5 = memset((void *)(param_1[0x39] + (long)(int)uVar1),0,(ulong)(~uVar1 + uVar3) + 1);
    }
    else if ((int)uVar3 < (int)uVar1) {
      *(uint *)(param_1 + 0x3a) = uVar3;
    }
    goto LAB_03382ee8;
  }
  if (DAT_0488dfa8 == '\0') {
    if (DAT_046aaf68 == '\0') goto LAB_033830d4;
LAB_03383268:
    local_180 = &DAT_0488df58;
    uStack_178 = 1;
    pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar6);
    local_190 = local_140;
    local_160 = 0;
    local_158 = (char *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    local_140[0] = '\0';
    uStack_188 = 0x10000000000;
    local_168 = local_190;
    puVar5 = (undefined8 *)
             FUN_0322c554(&local_190,"NATIVE_POINTERS section has the wrong size",PTR_DAT_047d1b38);
    local_150 = 0x99b;
    uStack_178 = CONCAT44(0x574328eb,(undefined4)uStack_178);
LAB_033832d4:
    local_158 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    if (local_140[0] != '\0') {
      sVar7 = strlen(local_140);
      (local_140 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[0] = '\n';
      (local_140 + (int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))[1] = '\0';
      printf("%s",local_140);
      uVar3 = fflush(*(FILE **)PTR_stdout_047cb860);
      puVar5 = (undefined8 *)(ulong)uVar3;
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_03383268;
    local_190 = (char *)0x0;
    local_180 = &DAT_0488df58;
    uStack_178 = 1;
    pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
    local_170 = nn::os::GetThreadId(pTVar6);
    local_168 = (char *)0x0;
    local_160 = 0;
    local_158 = (char *)0x0;
    local_150 = 0;
    uStack_148 = 0;
    FUN_0322c554(&local_190,"NATIVE_POINTERS section has the wrong size",PTR_DAT_047d1b38);
    local_150 = 0x99b;
    uStack_178 = CONCAT44(0x574328eb,(undefined4)uStack_178);
LAB_03383060:
    local_158 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    puVar5 = (undefined8 *)FUN_0322c8e0(&local_190);
  }
  if (((ulong)local_168 & 1) != 0) {
    puVar5 = (undefined8 *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_168 + -1,0);
  }
LAB_033830d4:
  *(undefined4 *)param_1 = 0x80040200;
  return puVar5;
}


