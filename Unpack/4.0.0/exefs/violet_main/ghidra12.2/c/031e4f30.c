/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e4f30; name: FUN_031e4f30
 */


void FUN_031e4f30(long param_1,char param_2,byte *param_3,byte *param_4,long *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ThreadType *pTVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte bVar10;
  long local_1b0;
  long local_1a8;
  undefined8 **local_1a0;
  ulong local_198;
  undefined8 *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 **local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 *local_150 [8];
  undefined4 local_110;
  ushort local_34 [2];
  
  bVar10 = 0x75;
  if (param_2 != '\0') {
    bVar10 = 100;
  }
  local_34[0] = 0x3f;
  if (param_3 == param_4) {
    local_34[0] = (ushort)bVar10;
  }
  else {
    bVar1 = *param_3;
    uVar2 = bVar1 - 0x44;
    if (uVar2 < 0x35) {
      if ((1L << ((ulong)uVar2 & 0x3f) & 0x2002100020021U) == 0) {
        if ((1L << ((ulong)uVar2 & 0x3f) & 0x10000000100000U) == 0) goto LAB_031e51b4;
        local_34[0] = (ushort)bVar1;
        if (param_2 == '\0') goto LAB_031e5350;
        if (DAT_04884830 == 0) {
          if (DAT_046aaf68 != '\0') goto LAB_031e5260;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1a0 = (undefined8 **)0x0;
            local_190 = &DAT_048847e0;
            uStack_188 = 1;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_180 = nn::os::GetThreadId(pTVar6);
            local_178 = (undefined8 **)0x0;
            local_1a8 = -param_1;
            local_170 = 0;
            local_168 = (char *)0x0;
            local_160 = 0;
            uStack_158 = 0;
            FUN_0322c554(&local_1a0,
                         "Cannot format negative integer \'{}\' with hexadecimal specifier \'{}\'. Falling back to decimal \'D\'."
                         ,&DAT_046a6670,&local_1a8,local_34);
            local_160 = 0x8b;
            goto LAB_031e5228;
          }
LAB_031e5260:
          local_190 = &DAT_048847e0;
          uStack_188 = 1;
          pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
          local_180 = nn::os::GetThreadId(pTVar6);
          local_170 = 0;
          local_168 = (char *)0x0;
          local_198 = 0x10000000000;
          local_1b0 = -param_1;
          local_150[0]._0_1_ = '\0';
          local_160 = 0;
          uStack_158 = 0;
          local_1a0 = local_150;
          local_178 = local_150;
          FUN_0322c554(&local_1a0,
                       "Cannot format negative integer \'{}\' with hexadecimal specifier \'{}\'. Falling back to decimal \'D\'."
                       ,&DAT_046a6670,&local_1b0,local_34);
          local_168 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
          ;
          local_160 = 0x8b;
          if ((char)local_150[0] != '\0') {
            sVar7 = strlen((char *)local_150);
            *(undefined2 *)((long)local_150 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff)))
                 = 10;
            printf("%s",local_150);
            fflush(*(FILE **)PTR_stdout_047cb860);
          }
          if (((ulong)local_178 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_178 + -1),0);
          }
        }
        goto LAB_031e534c;
      }
      local_34[0] = (ushort)bVar10;
      if ((bVar1 | 0x20) != 100) {
        local_1a8 = CONCAT62(local_1a8._2_6_,0x20);
        local_1a8 = CONCAT71(local_1a8._1_7_,bVar1);
        if (DAT_04884830 < 2) {
          if (DAT_046aaf68 != '\0') goto LAB_031e5104;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1a0 = (undefined8 **)0x0;
            local_190 = &DAT_048847e0;
            uStack_188 = 2;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_180 = nn::os::GetThreadId(pTVar6);
            local_178 = (undefined8 **)0x0;
            local_170 = 0;
            local_168 = (char *)0x0;
            local_160 = 0;
            uStack_158 = 0;
            FUN_0322c554(&local_1a0,
                         "Deprecated integer extra format specififer \'{}\'; use \'D\' (decimal) instead."
                         ,&DAT_046a65d8,&local_1a8);
            local_168 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
            ;
            local_160 = 0x83;
            FUN_0322c8e0(&local_1a0);
          }
          else {
LAB_031e5104:
            local_190 = &DAT_048847e0;
            uStack_188 = 2;
            pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
            local_180 = nn::os::GetThreadId(pTVar6);
            local_170 = 0;
            local_168 = (char *)0x0;
            local_160 = 0;
            uStack_158 = 0;
            local_150[0]._0_1_ = '\0';
            local_198 = 0x10000000000;
            local_1a0 = local_150;
            local_178 = local_150;
            FUN_0322c554(&local_1a0,
                         "Deprecated integer extra format specififer \'{}\'; use \'D\' (decimal) instead."
                         ,&DAT_046a65d8,&local_1a8);
            local_168 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
            ;
            local_160 = 0x83;
            if ((char)local_150[0] != '\0') {
              sVar7 = strlen((char *)local_150);
              *(undefined2 *)
               ((long)local_150 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) = 10;
              printf("%s",local_150);
              fflush(*(FILE **)PTR_stdout_047cb860);
            }
          }
          if (((ulong)local_178 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_178 + -1),0);
          }
        }
      }
    }
    else {
LAB_031e51b4:
      local_1a8 = CONCAT62(local_1a8._2_6_,0x20);
      local_1a8 = CONCAT71(local_1a8._1_7_,bVar1);
      if (DAT_04884830 == 0) {
        if (DAT_046aaf68 == '\0') goto LAB_031e534c;
LAB_031e551c:
        local_190 = &DAT_048847e0;
        uStack_188 = 1;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar6);
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        local_150[0]._0_1_ = '\0';
        local_198 = 0x10000000000;
        local_1a0 = local_150;
        local_178 = local_150;
        FUN_0322c554(&local_1a0,
                     "Invalid integer extra format specififer \'{}\'. Expected a character among [DdXx] or the deprecated [IiUu]."
                     ,&DAT_046a65d8,&local_1a8);
        local_168 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
        ;
        local_160 = 0x93;
        if ((char)local_150[0] != '\0') {
          sVar7 = strlen((char *)local_150);
          *(undefined2 *)((long)local_150 + (long)(int)((int)sVar7 - (uint)((int)sVar7 == 0xff))) =
               10;
          printf("%s",local_150);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      else {
        if (DAT_046aaf68 != '\0') goto LAB_031e551c;
        local_1a0 = (undefined8 **)0x0;
        local_190 = &DAT_048847e0;
        uStack_188 = 1;
        pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
        local_180 = nn::os::GetThreadId(pTVar6);
        local_178 = (undefined8 **)0x0;
        local_170 = 0;
        local_168 = (char *)0x0;
        local_160 = 0;
        uStack_158 = 0;
        FUN_0322c554(&local_1a0,
                     "Invalid integer extra format specififer \'{}\'. Expected a character among [DdXx] or the deprecated [IiUu]."
                     ,&DAT_046a65d8,&local_1a8);
        local_160 = 0x93;
LAB_031e5228:
        local_168 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Core/hkReflectVar.cpp"
        ;
        FUN_0322c8e0(&local_1a0);
      }
      if (((ulong)local_178 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_178 + -1),0);
      }
LAB_031e534c:
      local_34[0] = CONCAT11(local_34[0]._1_1_,bVar10);
    }
LAB_031e5350:
    iVar3 = (int)param_4 - (int)param_3;
    iVar4 = iVar3 + -1;
    if (iVar4 != 0 && 0 < iVar3) {
      local_1a0 = &local_190;
      local_198 = 0x8000008000000000;
      local_110 = 1;
      FUN_031c6afc(&local_1a0,param_3 + 1,iVar4);
      uVar8 = strtoul((char *)local_1a0,(char **)0x0,10);
      uVar5 = local_198;
      local_198 = local_198 & 0xffffffff00000000;
      if ((-1 < (long)uVar5) && (local_1a0 != (undefined8 **)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      uVar2 = *(uint *)((long)param_5 + 0xc) & 0x7fffffff;
      iVar3 = uVar2 - 1;
      if (uVar2 != 0 && iVar3 != 0) {
        iVar3 = 1;
      }
      if ((int)param_5[0x12] != 0) {
        iVar3 = 1;
      }
      iVar4 = iVar3 + 1;
      if ((int)uVar2 <= iVar3) {
        FUN_030b4a20(param_5,PTR_PTR_047d1a50 + 0x20,iVar4);
      }
      if (((int)param_5[1] <= iVar3) || (iVar4 < (int)param_5[1])) {
        *(int *)(param_5 + 1) = iVar4;
      }
      *(undefined1 *)(*param_5 + (long)iVar3) = 0;
      memcpy((void *)*param_5,&DAT_03ca40f5,(long)(int)param_5[1] - 1);
      if (0 < (int)uVar8) {
        FUN_031c6e40(param_5,&DAT_03ca91e0,uVar8 & 0xffffffff);
      }
      goto LAB_031e54cc;
    }
  }
  uVar2 = *(uint *)((long)param_5 + 0xc) & 0x7fffffff;
  iVar3 = uVar2 - 1;
  if (uVar2 != 0 && iVar3 != 0) {
    iVar3 = 1;
  }
  if ((int)param_5[0x12] != 0) {
    iVar3 = 1;
  }
  iVar4 = iVar3 + 1;
  if ((int)uVar2 <= iVar3) {
    FUN_030b4a20(param_5,PTR_PTR_047d1a50 + 0x20,iVar4);
  }
  if ((int)param_5[1] <= iVar3 || iVar4 < (int)param_5[1]) {
    *(int *)(param_5 + 1) = iVar4;
  }
  *(undefined1 *)(*param_5 + (long)iVar3) = 0;
  memcpy((void *)*param_5,&DAT_03ca40f5,(long)(int)param_5[1] - 1);
LAB_031e54cc:
  uVar9 = FUN_031c6fd4(param_5,(int)param_5[1] + -1,&DAT_03ca21b0,0xffffffff);
  FUN_031c6fd4(uVar9,(int)param_5[1] + -1,local_34,0xffffffff);
  return;
}


