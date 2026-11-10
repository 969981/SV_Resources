/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03222e64; name: FUN_03222e64
 */


undefined4 FUN_03222e64(long *param_1,ulong *param_2)

{
  bool bVar1;
  bool bVar2;
  ThreadType *pTVar3;
  size_t sVar4;
  long lVar5;
  ulong *puVar6;
  char *pcVar7;
  ulong uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  byte bVar13;
  ulong *local_1c0;
  ulong *local_1b8;
  char *local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  byte local_198;
  undefined1 local_197;
  undefined2 local_196;
  undefined4 local_194;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  char local_160 [256];
  undefined4 local_48 [2];
  
  local_48[0] = 0;
  uVar12 = *param_2;
  uVar9 = (uint)uVar12;
  if ((uVar12 & 1) == 0) {
    if ((uVar9 >> 1 & 1) != 0) {
      FUN_0321e9cc(local_48);
      lVar5 = *(long *)(*param_1 + 0x28);
      if (lVar5 != 0) {
        bVar13 = *(byte *)(*param_1 + 0x30);
        if (*(byte *)(lVar5 + 0x50) < bVar13) {
          if (DAT_046aaf68 != '\0') goto LAB_03223d20;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1b0 = (char *)0x0;
            local_197 = 0;
            local_196 = 0;
            local_194 = 0;
            local_1a0 = lVar5;
            local_198 = bVar13;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar3);
            local_188 = (char *)0x0;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::SUBTYPE.",&DAT_046aa4e8,
                         param_2);
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_170 = 0x1b3;
            FUN_0322c8e0(&local_1b0);
          }
          else {
LAB_03223d20:
            local_197 = 0;
            local_196 = 0;
            local_194 = 0;
            local_1a0 = lVar5;
            local_198 = bVar13;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar3);
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            local_160[0] = '\0';
            uStack_1a8 = 0x10000000000;
            local_1b0 = local_160;
            local_188 = local_160;
            FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::SUBTYPE.",&DAT_046aa4e8,
                         param_2);
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_170 = 0x1b3;
            if (local_160[0] != '\0') {
              sVar4 = strlen(local_160);
              (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
              (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
              printf("%s",local_160);
              fflush(*(FILE **)PTR_stdout_047cb860);
            }
          }
          if (((ulong)local_188 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
          }
        }
      }
      if (*(char *)*param_1 != '\0') {
        return local_48[0];
      }
      uVar9 = (uint)*param_2;
    }
    if ((uVar9 >> 10 & 1) != 0) {
      FUN_0321e9cc(local_48);
      lVar5 = *(long *)(*param_1 + 0x28);
      if (lVar5 != 0) {
        bVar13 = *(byte *)(*param_1 + 0x30);
        if (*(byte *)(lVar5 + 0x50) < bVar13) {
          if (DAT_046aaf68 != '\0') goto LAB_03223eb4;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1b0 = (char *)0x0;
            local_197 = 0;
            local_196 = 0;
            local_194 = 0;
            local_1a0 = lVar5;
            local_198 = bVar13;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar3);
            local_188 = (char *)0x0;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::FUNCTIONS.",&DAT_046aa4e8,
                         param_2);
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_170 = 0x1b4;
            FUN_0322c8e0(&local_1b0);
          }
          else {
LAB_03223eb4:
            local_1b0 = (char *)0x0;
            local_197 = 0;
            local_196 = 0;
            local_194 = 0;
            local_1a0 = lVar5;
            local_198 = bVar13;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar3);
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            local_160[0] = '\0';
            uStack_1a8 = 0x10000000000;
            local_1b0 = local_160;
            local_188 = local_160;
            FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::FUNCTIONS.",&DAT_046aa4e8,
                         param_2);
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_170 = 0x1b4;
            if (local_160[0] != '\0') {
              sVar4 = strlen(local_160);
              (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
              (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
              printf("%s",local_160);
              fflush(*(FILE **)PTR_stdout_047cb860);
            }
          }
          if (((ulong)local_188 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
          }
        }
      }
      if (*(char *)*param_1 != '\0') {
        return local_48[0];
      }
      uVar9 = (uint)*param_2;
    }
    if ((uVar9 >> 0xe & 1) != 0) {
      FUN_0321e9cc(local_48);
      lVar5 = *(long *)(*param_1 + 0x28);
      if (lVar5 != 0) {
        bVar13 = *(byte *)(*param_1 + 0x30);
        if (*(byte *)(lVar5 + 0x50) < bVar13) {
          if (DAT_046aaf68 != '\0') goto LAB_03224050;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1b0 = (char *)0x0;
            local_197 = 0;
            local_196 = 0;
            local_194 = 0;
            local_1a0 = lVar5;
            local_198 = bVar13;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar3);
            local_188 = (char *)0x0;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::INTERFACES.",&DAT_046aa4e8
                         ,param_2);
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_170 = 0x1b5;
            FUN_0322c8e0(&local_1b0);
          }
          else {
LAB_03224050:
            local_1b0 = (char *)0x0;
            local_197 = 0;
            local_196 = 0;
            local_194 = 0;
            local_1a0 = lVar5;
            local_198 = bVar13;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar3);
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            local_160[0] = '\0';
            uStack_1a8 = 0x10000000000;
            local_1b0 = local_160;
            local_188 = local_160;
            FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::INTERFACES.",&DAT_046aa4e8
                         ,param_2);
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_170 = 0x1b5;
            if (local_160[0] != '\0') {
              sVar4 = strlen(local_160);
              (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
              (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
              printf("%s",local_160);
              fflush(*(FILE **)PTR_stdout_047cb860);
            }
          }
          if (((ulong)local_188 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
          }
        }
      }
      if (*(char *)*param_1 != '\0') {
        return local_48[0];
      }
      uVar9 = (uint)*param_2;
    }
    if ((uVar9 >> 0xd & 1) != 0) {
      FUN_0321e9cc(local_48);
      lVar5 = *(long *)(*param_1 + 0x28);
      if (lVar5 != 0) {
        bVar13 = *(byte *)(*param_1 + 0x30);
        if (*(byte *)(lVar5 + 0x50) < bVar13) {
          if (DAT_046aaf68 != '\0') goto LAB_03224108;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1b0 = (char *)0x0;
            local_197 = 0;
            local_196 = 0;
            local_194 = 0;
            local_1a0 = lVar5;
            local_198 = bVar13;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar3);
            local_188 = (char *)0x0;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::INHERITANCE.",
                         &DAT_046aa4e8,param_2);
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_170 = 0x1b6;
            FUN_0322c8e0(&local_1b0);
          }
          else {
LAB_03224108:
            local_1b0 = (char *)0x0;
            local_197 = 0;
            local_196 = 0;
            local_194 = 0;
            local_1a0 = lVar5;
            local_198 = bVar13;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar3);
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            local_160[0] = '\0';
            uStack_1a8 = 0x10000000000;
            local_1b0 = local_160;
            local_188 = local_160;
            FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::INHERITANCE.",
                         &DAT_046aa4e8,param_2);
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_170 = 0x1b6;
            if (local_160[0] != '\0') {
              sVar4 = strlen(local_160);
              (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
              (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
              printf("%s",local_160);
              fflush(*(FILE **)PTR_stdout_047cb860);
            }
          }
          if (((ulong)local_188 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
          }
        }
      }
      if (*(char *)*param_1 != '\0') {
        return local_48[0];
      }
      uVar9 = (uint)*param_2;
    }
    if ((uVar9 >> 6 & 1) != 0) {
      FUN_0321e9cc(local_48);
      lVar5 = *(long *)(*param_1 + 0x28);
      if (lVar5 != 0) {
        bVar13 = *(byte *)(*param_1 + 0x30);
        if (*(byte *)(lVar5 + 0x50) < bVar13) {
          if (DAT_046aaf68 != '\0') goto LAB_03224344;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1b0 = (char *)0x0;
            local_197 = 0;
            local_196 = 0;
            local_194 = 0;
            local_1a0 = lVar5;
            local_198 = bVar13;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar3);
            local_188 = (char *)0x0;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::DEF_CONSTRUCTOR.",
                         &DAT_046aa4e8,param_2);
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_170 = 0x1b7;
            FUN_0322c8e0(&local_1b0);
          }
          else {
LAB_03224344:
            local_1b0 = (char *)0x0;
            local_197 = 0;
            local_196 = 0;
            local_194 = 0;
            local_1a0 = lVar5;
            local_198 = bVar13;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar3);
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            local_160[0] = '\0';
            uStack_1a8 = 0x10000000000;
            local_1b0 = local_160;
            local_188 = local_160;
            FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::DEF_CONSTRUCTOR.",
                         &DAT_046aa4e8,param_2);
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_170 = 0x1b7;
            if (local_160[0] != '\0') {
              sVar4 = strlen(local_160);
              (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
              (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
              printf("%s",local_160);
              fflush(*(FILE **)PTR_stdout_047cb860);
            }
          }
          if (((ulong)local_188 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
          }
        }
      }
      if (*(char *)*param_1 != '\0') {
        return local_48[0];
      }
      uVar9 = (uint)*param_2;
    }
    if ((uVar9 >> 8 & 1) != 0) {
      FUN_0321e9cc(local_48);
      lVar5 = *(long *)(*param_1 + 0x28);
      if (lVar5 != 0) {
        bVar13 = *(byte *)(*param_1 + 0x30);
        if (*(byte *)(lVar5 + 0x50) < bVar13) {
          if (DAT_046aaf68 != '\0') goto LAB_032244bc;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1b0 = (char *)0x0;
            local_197 = 0;
            local_196 = 0;
            local_194 = 0;
            local_1a0 = lVar5;
            local_198 = bVar13;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar3);
            local_188 = (char *)0x0;
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::DESTRUCTOR.",&DAT_046aa4e8
                         ,param_2);
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_170 = 0x1b8;
            FUN_0322c8e0(&local_1b0);
          }
          else {
LAB_032244bc:
            local_197 = 0;
            local_196 = 0;
            local_194 = 0;
            local_1a0 = lVar5;
            local_198 = bVar13;
            pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
            local_190 = nn::os::GetThreadId(pTVar3);
            local_180 = 0;
            local_178 = (char *)0x0;
            local_170 = 0;
            uStack_168 = 0;
            local_160[0] = '\0';
            uStack_1a8 = 0x10000000000;
            local_1b0 = local_160;
            local_188 = local_160;
            FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::DESTRUCTOR.",&DAT_046aa4e8
                         ,param_2);
            local_178 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            local_170 = 0x1b8;
            if (local_160[0] != '\0') {
              sVar4 = strlen(local_160);
              (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
              (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
              printf("%s",local_160);
              fflush(*(FILE **)PTR_stdout_047cb860);
            }
          }
          if (((ulong)local_188 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
          }
        }
      }
      if (*(char *)*param_1 != '\0') {
        return local_48[0];
      }
      uVar9 = (uint)*param_2;
    }
    if ((uVar9 >> 0x17 & 1) == 0) {
      return local_48[0];
    }
    FUN_0321e9cc(local_48);
    local_1a0 = *(long *)(*param_1 + 0x28);
    if (local_1a0 == 0) {
      return local_48[0];
    }
    local_198 = *(byte *)(*param_1 + 0x30);
    if (local_198 <= *(byte *)(local_1a0 + 0x50)) {
      if (DAT_046aaf68 != '\0') goto LAB_03224638;
      local_1b0 = (char *)0x0;
      local_197 = 0;
      local_196 = 0;
      local_194 = 0;
      pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar3);
      local_188 = (char *)0x0;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::DECLS.",&DAT_046aa4e8,param_2);
      local_170 = 0x1b9;
      goto LAB_03223b04;
    }
    if (DAT_046aaf68 == '\0') {
      return local_48[0];
    }
LAB_03224638:
    local_197 = 0;
    local_196 = 0;
    local_194 = 0;
    pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
    local_190 = nn::os::GetThreadId(pTVar3);
    local_1b0 = local_160;
    local_180 = 0;
    local_178 = (char *)0x0;
    local_170 = 0;
    uStack_168 = 0;
    local_160[0] = '\0';
    uStack_1a8 = 0x10000000000;
    local_188 = local_1b0;
    FUN_0322c554(&local_1b0,"Decorator type \'{}\' has local Opt::DECLS.",&DAT_046aa4e8,param_2);
    local_170 = 0x1b9;
    goto LAB_0322469c;
  }
  pcVar10 = "found but not expected";
  uVar11 = 1;
  bVar2 = false;
  bVar1 = true;
  switch((uint)param_2[2] & 0x1f) {
  case 0:
  case 1:
    bVar2 = false;
    bVar1 = false;
    goto LAB_032230e4;
  case 2:
  case 3:
  case 4:
  case 5:
    break;
  case 6:
  case 8:
    uVar11 = 0;
    bVar2 = false;
    bVar1 = true;
    pcVar10 = "expected but not found";
    break;
  case 7:
    bVar2 = true;
    bVar1 = true;
LAB_032230e4:
    uVar11 = 1;
    pcVar10 = "found but not expected";
    break;
  default:
    FUN_0321e9cc(local_48);
    return local_48[0];
  }
  puVar6 = param_2;
  uVar8 = uVar12;
  if ((uVar9 >> 2 & 1) == 0) {
    do {
      puVar6 = (ulong *)puVar6[1];
      uVar8 = 0;
      if (puVar6 == (ulong *)0x0) goto LAB_03223120;
      uVar8 = *puVar6;
    } while (((uint)uVar8 >> 2 & 1) == 0);
  }
  uVar8 = puVar6[(uVar8 >> 1 & 1) + (uVar8 & 1) + 2];
LAB_03223120:
  if ((bVar1) && (uVar8 == 0)) {
    FUN_0321e9cc(local_48);
    lVar5 = *(long *)(*param_1 + 0x28);
    if (lVar5 != 0) {
      bVar13 = *(byte *)(*param_1 + 0x30);
      if (*(byte *)(lVar5 + 0x50) < bVar13) {
        if (DAT_046aaf68 != '\0') goto LAB_03223dd4;
      }
      else if (DAT_046aaf68 == '\0') {
        local_1b0 = (char *)0x0;
        local_197 = 0;
        local_196 = 0;
        local_194 = 0;
        local_1a0 = lVar5;
        local_198 = bVar13;
        pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar3);
        local_188 = (char *)0x0;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        FUN_0322c554(&local_1b0,"Invalid Impl for type \'{}\'.",&DAT_046aa4e8,param_2);
        local_178 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        local_170 = 0x1e4;
        FUN_0322c8e0(&local_1b0);
        if (((ulong)local_188 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
        }
      }
      else {
LAB_03223dd4:
        local_197 = 0;
        local_196 = 0;
        local_194 = 0;
        local_1a0 = lVar5;
        local_198 = bVar13;
        pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar3);
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        local_160[0] = '\0';
        uStack_1a8 = 0x10000000000;
        local_1b0 = local_160;
        local_188 = local_160;
        FUN_0322c554(&local_1b0,"Invalid Impl for type \'{}\'.",&DAT_046aa4e8,param_2);
        local_178 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        local_170 = 0x1e4;
        if (local_160[0] != '\0') {
          sVar4 = strlen(local_160);
          (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
          (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
          printf("%s",local_160);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
        if (((ulong)local_188 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
        }
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_48[0];
    }
    uVar12 = *param_2;
  }
  if ((uVar12 & 0x8008) == 0x8000) {
    FUN_0321e9cc(local_48);
    lVar5 = *(long *)(*param_1 + 0x28);
    if (lVar5 != 0) {
      bVar13 = *(byte *)(*param_1 + 0x30);
      if (*(byte *)(lVar5 + 0x50) < bVar13) {
        if (DAT_046aaf68 != '\0') goto LAB_03223f6c;
      }
      else if (DAT_046aaf68 == '\0') {
        local_1b0 = (char *)0x0;
        local_197 = 0;
        local_196 = 0;
        local_194 = 0;
        local_1a0 = lVar5;
        local_198 = bVar13;
        pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar3);
        local_188 = (char *)0x0;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        FUN_0322c554(&local_1b0,"Type \'{}\' has local Opt::TEMPLATE but no local Opt::NAME.",
                     &DAT_046aa4e8,param_2);
        local_178 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        local_170 = 0x1e8;
        FUN_0322c8e0(&local_1b0);
        if (((ulong)local_188 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
        }
      }
      else {
LAB_03223f6c:
        local_1b0 = (char *)0x0;
        local_197 = 0;
        local_196 = 0;
        local_194 = 0;
        local_1a0 = lVar5;
        local_198 = bVar13;
        pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar3);
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        local_160[0] = '\0';
        uStack_1a8 = 0x10000000000;
        local_1b0 = local_160;
        local_188 = local_160;
        FUN_0322c554(&local_1b0,"Type \'{}\' has local Opt::TEMPLATE but no local Opt::NAME.",
                     &DAT_046aa4e8,param_2);
        local_178 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        local_170 = 0x1e8;
        if (local_160[0] != '\0') {
          sVar4 = strlen(local_160);
          (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
          (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
          printf("%s",local_160);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
        if (((ulong)local_188 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
        }
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_48[0];
    }
  }
  if (((uint)uVar12 >> 3 & 1) != 0) {
    if ((((uint)*param_2 >> 3 & 1) == 0) ||
       (bVar13 = POPCOUNT((byte)*param_2 & 7),
       pcVar7 = (char *)(param_2 + 2)[CONCAT12(bVar13,(ushort)bVar13) & 0xff], pcVar7 == (char *)0x0
       )) {
      FUN_0321e9cc(local_48);
      lVar5 = *(long *)(*param_1 + 0x28);
      if (lVar5 != 0) {
        bVar13 = *(byte *)(*param_1 + 0x30);
        if (bVar13 <= *(byte *)(lVar5 + 0x50)) {
          if (DAT_046aaf68 != '\0') goto LAB_03224288;
          local_1b0 = (char *)0x0;
          local_197 = 0;
          local_196 = 0;
          local_194 = 0;
          local_1a0 = lVar5;
          local_198 = bVar13;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar3);
          local_188 = (char *)0x0;
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          local_1b8 = param_2;
          FUN_0322c554(&local_1b0,"Type {} has a null Opt::NAME",&DAT_046aa548,&local_1b8);
          local_170 = 0x1ed;
LAB_03223568:
          local_178 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          FUN_0322c8e0(&local_1b0);
          goto LAB_03223574;
        }
        if (DAT_046aaf68 != '\0') {
LAB_03224288:
          local_1b0 = (char *)0x0;
          local_197 = 0;
          local_196 = 0;
          local_194 = 0;
          local_1a0 = lVar5;
          local_198 = bVar13;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar3);
          local_1b0 = local_160;
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          local_160[0] = '\0';
          uStack_1a8 = 0x10000000000;
          local_1c0 = param_2;
          local_188 = local_1b0;
          FUN_0322c554(&local_1b0,"Type {} has a null Opt::NAME",&DAT_046aa548,&local_1c0);
          local_170 = 0x1ed;
          goto LAB_032242f4;
        }
      }
    }
    else {
      if (*pcVar7 != '\0') goto LAB_032235a4;
      FUN_0321e9cc(local_48);
      lVar5 = *(long *)(*param_1 + 0x28);
      if (lVar5 == 0) goto LAB_03223598;
      bVar13 = *(byte *)(*param_1 + 0x30);
      if (*(byte *)(lVar5 + 0x50) < bVar13) {
        if (DAT_046aaf68 == '\0') goto LAB_03223598;
      }
      else if (DAT_046aaf68 == '\0') {
        local_1b0 = (char *)0x0;
        local_197 = 0;
        local_196 = 0;
        local_194 = 0;
        local_1a0 = lVar5;
        local_198 = bVar13;
        pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
        local_190 = nn::os::GetThreadId(pTVar3);
        local_188 = (char *)0x0;
        local_180 = 0;
        local_178 = (char *)0x0;
        local_170 = 0;
        uStack_168 = 0;
        local_1b8 = param_2;
        FUN_0322c554(&local_1b0,"Type {} has an empty Opt::NAME",&DAT_046aa548,&local_1b8);
        local_170 = 0x1f0;
        goto LAB_03223568;
      }
      local_1b0 = (char *)0x0;
      local_197 = 0;
      local_196 = 0;
      local_194 = 0;
      local_1a0 = lVar5;
      local_198 = bVar13;
      pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
      local_190 = nn::os::GetThreadId(pTVar3);
      local_1b0 = local_160;
      local_180 = 0;
      local_178 = (char *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      local_160[0] = '\0';
      uStack_1a8 = 0x10000000000;
      local_1c0 = param_2;
      local_188 = local_1b0;
      FUN_0322c554(&local_1b0,"Type {} has an empty Opt::NAME",&DAT_046aa548,&local_1c0);
      local_170 = 0x1f0;
LAB_032242f4:
      local_178 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      if (local_160[0] != '\0') {
        sVar4 = strlen(local_160);
        (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
        (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
        printf("%s",local_160);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
LAB_03223574:
      if (((ulong)local_188 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
      }
    }
LAB_03223598:
    if (*(char *)*param_1 != '\0') {
      return local_48[0];
    }
  }
LAB_032235a4:
  uVar12 = *param_2;
  if ((uVar12 & 1) == 0) {
    FUN_0321e9cc(local_48);
    lVar5 = *(long *)(*param_1 + 0x28);
    if (lVar5 != 0) {
      bVar13 = *(byte *)(*param_1 + 0x30);
      if (*(byte *)(lVar5 + 0x50) < bVar13) {
        if (DAT_046aaf68 != '\0') goto LAB_032241c0;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_1b0 = (char *)0x0;
          local_197 = 0;
          local_196 = 0;
          local_194 = 0;
          local_1a0 = lVar5;
          local_198 = bVar13;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar3);
          local_188 = (char *)0x0;
          local_1b8 = (ulong *)0x3c30e80;
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          FUN_0322c554(&local_1b0,"Type \'{}\' has unexpected Opt::FORMAT ({}).",&DAT_046aa558,
                       param_2,&local_1b8);
          local_178 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          local_170 = 500;
          FUN_0322c8e0(&local_1b0);
        }
        else {
LAB_032241c0:
          local_1b0 = (char *)0x0;
          local_197 = 0;
          local_196 = 0;
          local_194 = 0;
          local_1a0 = lVar5;
          local_198 = bVar13;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar3);
          local_180 = 0;
          local_178 = (char *)0x0;
          uStack_1a8 = 0x10000000000;
          local_170 = 0;
          uStack_168 = 0;
          local_160[0] = '\0';
          local_1c0 = (ulong *)0x3c30e80;
          local_1b0 = local_160;
          local_188 = local_160;
          FUN_0322c554(&local_1b0,"Type \'{}\' has unexpected Opt::FORMAT ({}).",&DAT_046aa558,
                       param_2,&local_1c0);
          local_178 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          local_170 = 500;
          if (local_160[0] != '\0') {
            sVar4 = strlen(local_160);
            (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
            (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
            printf("%s",local_160);
            fflush(*(FILE **)PTR_stdout_047cb860);
          }
        }
        if (((ulong)local_188 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
        }
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_48[0];
    }
    uVar12 = *param_2;
  }
  uVar9 = (uint)uVar12;
  if (uVar11 == ((uint)(uVar12 >> 1) & 1)) {
    FUN_0321e9cc(local_48);
    lVar5 = *(long *)(*param_1 + 0x28);
    if (lVar5 != 0) {
      bVar13 = *(byte *)(*param_1 + 0x30);
      if (*(byte *)(lVar5 + 0x50) < bVar13) {
        if (DAT_046aaf68 != '\0') goto LAB_032243fc;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_1b0 = (char *)0x0;
          local_197 = 0;
          local_196 = 0;
          local_194 = 0;
          local_1a0 = lVar5;
          local_198 = bVar13;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar3);
          local_188 = (char *)0x0;
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          local_1b8 = (ulong *)pcVar10;
          FUN_0322c554(&local_1b0,"Type \'{}\' has unexpected Opt::SUBTYPE ({}).",&DAT_046aa558,
                       param_2,&local_1b8);
          local_178 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          local_170 = 0x1f5;
          FUN_0322c8e0(&local_1b0);
        }
        else {
LAB_032243fc:
          local_1b0 = (char *)0x0;
          local_197 = 0;
          local_196 = 0;
          local_194 = 0;
          local_1a0 = lVar5;
          local_198 = bVar13;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar3);
          local_180 = 0;
          local_178 = (char *)0x0;
          local_160[0] = '\0';
          local_170 = 0;
          uStack_168 = 0;
          uStack_1a8 = 0x10000000000;
          local_1c0 = (ulong *)pcVar10;
          local_1b0 = local_160;
          local_188 = local_160;
          FUN_0322c554(&local_1b0,"Type \'{}\' has unexpected Opt::SUBTYPE ({}).",&DAT_046aa558,
                       param_2,&local_1c0);
          local_178 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          local_170 = 0x1f5;
          if (local_160[0] != '\0') {
            sVar4 = strlen(local_160);
            (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
            (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
            printf("%s",local_160);
            fflush(*(FILE **)PTR_stdout_047cb860);
          }
        }
        if (((ulong)local_188 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
        }
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_48[0];
    }
    uVar9 = (uint)*param_2;
  }
  if ((bVar2) && ((uVar9 >> 0x17 & 1) == 0)) {
    FUN_0321e9cc(local_48);
    lVar5 = *(long *)(*param_1 + 0x28);
    if (lVar5 != 0) {
      bVar13 = *(byte *)(*param_1 + 0x30);
      if (*(byte *)(lVar5 + 0x50) < bVar13) {
        if (DAT_046aaf68 != '\0') goto LAB_03224570;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_1b0 = (char *)0x0;
          local_197 = 0;
          local_196 = 0;
          local_194 = 0;
          local_1a0 = lVar5;
          local_198 = bVar13;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar3);
          local_188 = (char *)0x0;
          local_1b8 = (ulong *)0x3c30e80;
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          FUN_0322c554(&local_1b0,"Type \'{}\' has unexpected Opt::DECLS ({}).",&DAT_046aa558,
                       param_2,&local_1b8);
          local_178 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          local_170 = 0x1f6;
          FUN_0322c8e0(&local_1b0);
        }
        else {
LAB_03224570:
          local_1b0 = (char *)0x0;
          local_197 = 0;
          local_196 = 0;
          local_194 = 0;
          local_1a0 = lVar5;
          local_198 = bVar13;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar3);
          local_180 = 0;
          local_178 = (char *)0x0;
          uStack_1a8 = 0x10000000000;
          local_170 = 0;
          uStack_168 = 0;
          local_160[0] = '\0';
          local_1c0 = (ulong *)0x3c30e80;
          local_1b0 = local_160;
          local_188 = local_160;
          FUN_0322c554(&local_1b0,"Type \'{}\' has unexpected Opt::DECLS ({}).",&DAT_046aa558,
                       param_2,&local_1c0);
          local_178 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          local_170 = 0x1f6;
          if (local_160[0] != '\0') {
            sVar4 = strlen(local_160);
            (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
            (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
            printf("%s",local_160);
            fflush(*(FILE **)PTR_stdout_047cb860);
          }
        }
        if (((ulong)local_188 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
        }
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_48[0];
    }
  }
  uVar12 = 0;
  puVar6 = param_2;
  do {
    uVar9 = (uint)*puVar6;
    if ((uVar9 >> 0x15 & 1) == 0) {
      uVar8 = 0;
    }
    else {
      uVar9 = uVar9 & 0x1fffff;
      uVar8 = puVar6[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                  POPCOUNT((char)(uVar9 >> 0x10))) + 2];
    }
    uVar12 = uVar8 | uVar12;
  } while (((*puVar6 & 1) == 0) && (puVar6 = (ulong *)puVar6[1], puVar6 != (ulong *)0x0));
  if (((uint)uVar12 >> 1 & 1) == 0) {
    return local_48[0];
  }
  puVar6 = param_2;
  while (uVar12 = *puVar6, ((uint)uVar12 >> 6 & 1) == 0) {
    if (((uVar12 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
    goto LAB_03223c2c;
  }
  if ((puVar6 != (ulong *)0x0) && (puVar6[(ulong)(byte)POPCOUNT((byte)uVar12 & 0x3f) + 2] != 0)) {
    FUN_0321e9cc(local_48);
    lVar5 = *(long *)(*param_1 + 0x28);
    if (lVar5 != 0) {
      bVar13 = *(byte *)(*param_1 + 0x30);
      if (*(byte *)(lVar5 + 0x50) < bVar13) {
        if (DAT_046aaf68 != '\0') goto LAB_0322475c;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_1b0 = (char *)0x0;
          local_197 = 0;
          local_196 = 0;
          local_194 = 0;
          local_1a0 = lVar5;
          local_198 = bVar13;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar3);
          local_188 = (char *)0x0;
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          FUN_0322c554(&local_1b0,
                       "Type \'{}\' is abstract and should not have a default constructor.",
                       &DAT_046aa4e8,param_2);
          local_178 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          local_170 = 0x1fa;
          FUN_0322c8e0(&local_1b0);
        }
        else {
LAB_0322475c:
          local_197 = 0;
          local_196 = 0;
          local_194 = 0;
          local_1a0 = lVar5;
          local_198 = bVar13;
          pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
          local_190 = nn::os::GetThreadId(pTVar3);
          local_180 = 0;
          local_178 = (char *)0x0;
          local_170 = 0;
          uStack_168 = 0;
          local_160[0] = '\0';
          uStack_1a8 = 0x10000000000;
          local_1b0 = local_160;
          local_188 = local_160;
          FUN_0322c554(&local_1b0,
                       "Type \'{}\' is abstract and should not have a default constructor.",
                       &DAT_046aa4e8,param_2);
          local_178 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          local_170 = 0x1fa;
          if (local_160[0] != '\0') {
            sVar4 = strlen(local_160);
            (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
            (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
            printf("%s",local_160);
            fflush(*(FILE **)PTR_stdout_047cb860);
          }
        }
        if (((ulong)local_188 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
        }
      }
    }
    if (*(char *)*param_1 != '\0') {
      return local_48[0];
    }
  }
LAB_03223c2c:
  puVar6 = param_2;
  while (uVar12 = *puVar6, ((uint)uVar12 >> 7 & 1) == 0) {
    if ((uVar12 & 1) != 0) {
      return local_48[0];
    }
    puVar6 = (ulong *)puVar6[1];
    if (puVar6 == (ulong *)0x0) {
      return local_48[0];
    }
  }
  if (puVar6 == (ulong *)0x0) {
    return local_48[0];
  }
  if (puVar6[(ulong)(byte)POPCOUNT((byte)uVar12 & 0x7f) + 2] == 0) {
    return local_48[0];
  }
  FUN_0321e9cc(local_48);
  local_1a0 = *(long *)(*param_1 + 0x28);
  if (local_1a0 == 0) {
    return local_48[0];
  }
  local_198 = *(byte *)(*param_1 + 0x30);
  if (*(byte *)(local_1a0 + 0x50) < local_198) {
    if (DAT_046aaf68 == '\0') {
      return local_48[0];
    }
  }
  else if (DAT_046aaf68 == '\0') {
    local_1b0 = (char *)0x0;
    local_197 = 0;
    local_196 = 0;
    local_194 = 0;
    pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
    local_190 = nn::os::GetThreadId(pTVar3);
    local_188 = (char *)0x0;
    local_180 = 0;
    local_178 = (char *)0x0;
    local_170 = 0;
    uStack_168 = 0;
    FUN_0322c554(&local_1b0,"Type \'{}\' is abstract and should not have a copy constructor.",
                 &DAT_046aa4e8,param_2);
    local_170 = 0x1fb;
LAB_03223b04:
    local_178 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
    ;
    FUN_0322c8e0(&local_1b0);
    goto LAB_03223b10;
  }
  local_197 = 0;
  local_196 = 0;
  local_194 = 0;
  pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
  local_190 = nn::os::GetThreadId(pTVar3);
  local_1b0 = local_160;
  local_180 = 0;
  local_178 = (char *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  local_160[0] = '\0';
  uStack_1a8 = 0x10000000000;
  local_188 = local_1b0;
  FUN_0322c554(&local_1b0,"Type \'{}\' is abstract and should not have a copy constructor.",
               &DAT_046aa4e8,param_2);
  local_170 = 0x1fb;
LAB_0322469c:
  local_178 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  if (local_160[0] != '\0') {
    sVar4 = strlen(local_160);
    (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[0] = '\n';
    (local_160 + (int)((int)sVar4 - (uint)((int)sVar4 == 0xff)))[1] = '\0';
    printf("%s",local_160);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_03223b10:
  if (((ulong)local_188 & 1) == 0) {
    return local_48[0];
  }
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_188 + -1,0);
  return local_48[0];
}


