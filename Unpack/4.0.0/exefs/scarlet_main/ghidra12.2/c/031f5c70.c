/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f5c70; name: FUN_031f5c70
 */


undefined4
FUN_031f5c70(ulong *param_1,long param_2,long param_3,int *param_4,undefined8 param_5,
            undefined8 param_6)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ThreadType *pTVar7;
  size_t sVar8;
  undefined4 uVar9;
  ulong *puVar10;
  FILE *__stream;
  ulong *puVar11;
  char *pcVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  char *__s;
  int local_294;
  undefined1 *local_290;
  int local_288;
  uint local_284;
  undefined1 auStack_280 [128];
  char *local_200;
  char *local_1f8;
  byte *local_1f0;
  byte *pbStack_1e8;
  int local_1dc;
  undefined8 **local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 **local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 *local_188 [8];
  undefined4 local_148;
  ulong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70 [4];
  
  puVar10 = param_1;
  do {
    uVar14 = (uint)*puVar10;
    if ((uVar14 >> 0xf & 1) != 0) {
      uVar14 = uVar14 & 0x7fff;
      uVar17 = puVar10[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))) + 2];
      goto LAB_031f5cf0;
    }
  } while (((*puVar10 & 9) == 0) && (puVar10 = (ulong *)puVar10[1], puVar10 != (ulong *)0x0));
  uVar17 = 0;
LAB_031f5cf0:
  local_88 = param_1;
  local_80 = param_5;
  uStack_78 = param_6;
  if (param_2 == param_3) {
    if (uVar17 == 0) goto LAB_031f6374;
    if (DAT_04884ce8 < 4) {
      if (DAT_046aaf68 == '\0') {
        return 0x80040257;
      }
    }
    else if (DAT_046aaf68 == '\0') {
      local_1d8 = (undefined8 **)0x0;
      local_1c8 = &DAT_04884c98;
      uStack_1c0 = 4;
      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
      local_1b8 = nn::os::GetThreadId(pTVar7);
      local_1b0 = (undefined8 **)0x0;
      local_1a8 = 0;
      local_1a0 = (char *)0x0;
      local_198 = 0;
      local_190 = 0;
      while (uVar17 = *param_1, ((uint)uVar17 >> 3 & 1) == 0) {
        if (((uVar17 & 1) != 0) || (param_1 = (ulong *)param_1[1], param_1 == (ulong *)0x0))
        goto LAB_031f64ec;
      }
      if (param_1 != (ulong *)0x0) {
        local_290 = (undefined1 *)param_1[(ulong)(byte)POPCOUNT((byte)uVar17 & 7) + 2];
        goto LAB_031f64f0;
      }
LAB_031f64ec:
      local_290 = (undefined1 *)0x0;
LAB_031f64f0:
      FUN_0322c554(&local_1d8,
                   "Cannot lookup generic template type \'{}\' by root name alone, need to specify a specialization with arguments."
                   ,&DAT_044e9758,&local_290);
      local_198 = 0x183;
      goto LAB_031f651c;
    }
    local_1c8 = &DAT_04884c98;
    uStack_1c0 = 4;
    pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
    local_1b8 = nn::os::GetThreadId(pTVar7);
    local_1d8 = local_188;
    local_1a8 = 0;
    local_1a0 = (char *)0x0;
    local_198 = 0;
    local_190 = 0;
    local_1d0 = 0x10000000000;
    local_188[0]._0_1_ = '\0';
    while (uVar17 = *param_1, ((uint)uVar17 >> 3 & 1) == 0) {
      if (((uVar17 & 1) != 0) || (param_1 = (ulong *)param_1[1], param_1 == (ulong *)0x0))
      goto LAB_031f66a8;
    }
    if (param_1 != (ulong *)0x0) {
      local_1f0 = (byte *)param_1[(ulong)(byte)POPCOUNT((byte)uVar17 & 7) + 2];
      goto LAB_031f66ac;
    }
LAB_031f66a8:
    local_1f0 = (byte *)0x0;
LAB_031f66ac:
    local_1b0 = local_1d8;
    FUN_0322c554(&local_1d8,
                 "Cannot lookup generic template type \'{}\' by root name alone, need to specify a specialization with arguments."
                 ,&DAT_044e9758,&local_1f0);
    local_198 = 0x183;
  }
  else {
    if (uVar17 != 0) {
      uVar14 = (uint)*(ulong *)(uVar17 + 8) & 0xffff;
      uVar15 = (uint)((ulong)(param_3 - param_2) >> 4);
      if (uVar14 != uVar15) {
        iVar4 = 1;
        if ((int)uVar14 < (int)uVar15) {
          iVar4 = -1;
        }
LAB_031f63f8:
        *param_4 = iVar4;
        return 0;
      }
      local_1dc = 0;
      if ((*(ulong *)(uVar17 + 8) & 0xffff) != 0) {
        __stream = *(FILE **)PTR_stdout_047cb860;
        uVar2 = 0x80040257;
        do {
          plVar1 = (long *)(param_2 + (long)local_1dc * 0x10);
          local_1f0 = (byte *)*plVar1;
          pbStack_1e8 = (byte *)plVar1[1];
          local_70[0] = 0x80040257;
          if (local_1f0 == pbStack_1e8) {
            if (DAT_04884ce8 == 0) {
              return 0x80040257;
            }
            local_1d8 = (undefined8 **)0x0;
            local_1c8 = &DAT_04884c98;
            uStack_1c0 = 1;
            pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
            local_1b8 = nn::os::GetThreadId(pTVar7);
            local_1a8 = 0;
            local_1a0 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
            ;
            local_1b0 = (undefined8 **)0x0;
            local_198 = 0x1a9;
            local_190 = 0;
            FUN_0322c554(&local_1d8,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e5dc8,
                         "argumentName.isEmpty()",local_70);
            FUN_0322c554(&local_1d8,"Invalid empty name for template argument #{}",&DAT_044e9048,
                         &local_1dc);
            FUN_0322c8e0(&local_1d8);
            if (((ulong)local_1b0 & 1) == 0) {
              return local_70[0];
            }
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(long)local_1b0 - 1,0);
            return local_70[0];
          }
          puVar10 = (ulong *)(uVar17 + 0x10 + (long)local_1dc * 0x10);
          if (9 < *local_1f0 - 0x30 != (*(char *)puVar10[1] == 't')) {
            iVar4 = -1;
            if (9 < (*local_1f0 - 0x30 & 0xff)) {
              iVar4 = 1;
            }
            goto LAB_031f63f8;
          }
          if (*(char *)puVar10[1] == 't') {
            local_200 = (char *)0x0;
            local_1f8 = (char *)0x0;
            local_288 = 0;
            local_284 = 0x80000008;
            local_290 = auStack_280;
            iVar4 = FUN_031f5500(local_1f0,pbStack_1e8,&local_200,&local_290);
            if (iVar4 < 0) {
              if (DAT_04884ce8 < 4) {
                if (DAT_046aaf68 != '\0') goto LAB_031f6144;
              }
              else if (DAT_046aaf68 == '\0') {
                local_1d8 = (undefined8 **)0x0;
                local_1c8 = &DAT_04884c98;
                uStack_1c0 = 4;
                pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
                local_1b8 = nn::os::GetThreadId(pTVar7);
                local_1b0 = (undefined8 **)0x0;
                local_1a0 = (char *)0x0;
                local_198 = 0;
                FUN_0322c554(&local_1d8,
                             "Failed to parse invalid type name \'{}\' for template argument #{}.",
                             &DAT_046a7e28,&local_1f0,&local_1dc);
                local_1a0 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
                ;
                local_198 = 0x1bb;
                FUN_0322c8e0(&local_1d8);
                if (((ulong)local_1b0 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_1b0 + -1),0);
                }
              }
              else {
LAB_031f6144:
                local_1d8 = (undefined8 **)0x0;
                local_1c8 = &DAT_04884c98;
                uStack_1c0 = 4;
                pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
                local_1b8 = nn::os::GetThreadId(pTVar7);
                local_1a0 = (char *)0x0;
                local_198 = 0;
                local_1d0 = 0x10000000000;
                local_188[0]._0_1_ = '\0';
                local_1d8 = local_188;
                local_1b0 = local_188;
                FUN_0322c554(&local_1d8,
                             "Failed to parse invalid type name \'{}\' for template argument #{}.",
                             &DAT_046a7e28,&local_1f0,&local_1dc);
                local_1a0 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
                ;
                local_198 = 0x1bb;
                if ((char)local_188[0] != '\0') {
                  sVar8 = strlen((char *)local_188);
                  *(undefined2 *)
                   ((long)local_188 + (long)(int)((int)sVar8 - (uint)((int)sVar8 == 0xff))) = 10;
                  printf("%s",local_188);
                  fflush(__stream);
                }
                if (((ulong)local_1b0 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_1b0 + -1),0);
                }
              }
              bVar18 = false;
              local_70[0] = 0x80040257;
            }
            else {
              puVar10 = (ulong *)*puVar10;
              puVar11 = puVar10;
              do {
                uVar13 = *puVar11;
                if (((uint)uVar13 >> 3 & 1) != 0) {
                  if (puVar11 != (ulong *)0x0) {
                    __s = (char *)puVar11[(ulong)(byte)POPCOUNT((byte)uVar13 & 7) + 2];
                    if (__s == (char *)0x0) {
LAB_031f5f5c:
                      pcVar12 = (char *)0x0;
                    }
                    else {
                      sVar8 = strlen(__s);
                      pcVar12 = __s + sVar8;
                    }
                    goto LAB_031f5f60;
                  }
                  break;
                }
                if ((uVar13 & 1) != 0) {
                  __s = (char *)0x0;
                  goto LAB_031f5f5c;
                }
                puVar11 = (ulong *)puVar11[1];
              } while (puVar11 != (ulong *)0x0);
              pcVar12 = (char *)0x0;
              __s = (char *)0x0;
LAB_031f5f60:
              if (local_200 == __s) {
                if (local_1f8 == pcVar12) {
LAB_031f5ff0:
                  iVar4 = FUN_031f5c70(puVar10,local_290,local_290 + (long)local_288 * 0x10,
                                       &local_294,local_1f0,pbStack_1e8);
                  if (iVar4 < 0) {
                    uVar9 = uVar2;
                    if (DAT_04884ce8 < 4) {
                      if (DAT_046aaf68 != '\0') goto LAB_031f622c;
                    }
                    else if (DAT_046aaf68 == '\0') {
                      local_1d8 = (undefined8 **)0x0;
                      local_1c8 = &DAT_04884c98;
                      uStack_1c0 = 4;
                      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
                      local_1b8 = nn::os::GetThreadId(pTVar7);
                      local_1b0 = (undefined8 **)0x0;
                      local_1a0 = (char *)0x0;
                      local_198 = 0;
                      FUN_0322c554(&local_1d8,
                                   "Failed to parse template arguments of invalid type name \'{}\' for registry lookup."
                                   ,PTR_DAT_047e5b50,&local_1f0);
                      local_1a0 = 
                      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
                      ;
                      local_198 = 0x1ce;
                      FUN_0322c8e0(&local_1d8);
                      if (((ulong)local_1b0 & 1) != 0) {
                        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_1b0 + -1),0);
                      }
                    }
                    else {
LAB_031f622c:
                      local_1d8 = (undefined8 **)0x0;
                      local_1c8 = &DAT_04884c98;
                      uStack_1c0 = 4;
                      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
                      local_1b8 = nn::os::GetThreadId(pTVar7);
                      local_1a0 = (char *)0x0;
                      local_198 = 0;
                      local_1d0 = 0x10000000000;
                      local_188[0]._0_1_ = '\0';
                      local_1d8 = local_188;
                      local_1b0 = local_188;
                      FUN_0322c554(&local_1d8,
                                   "Failed to parse template arguments of invalid type name \'{}\' for registry lookup."
                                   ,PTR_DAT_047e5b50,&local_1f0);
                      local_1a0 = 
                      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
                      ;
                      local_198 = 0x1ce;
                      if ((char)local_188[0] != '\0') {
                        sVar8 = strlen((char *)local_188);
                        *(undefined2 *)
                         ((long)local_188 + (long)(int)((int)sVar8 - (uint)((int)sVar8 == 0xff))) =
                             10;
                        printf("%s",local_188);
                        fflush(__stream);
                      }
                      if (((ulong)local_1b0 & 1) != 0) {
                        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_1b0 + -1),0);
                      }
                    }
LAB_031f60f0:
                    bVar18 = false;
                    local_70[0] = uVar9;
                  }
                  else {
                    if (local_294 != 0) {
                      *param_4 = local_294;
                      uVar9 = 0;
                      goto LAB_031f60f0;
                    }
                    bVar18 = true;
                  }
                  goto LAB_031f60f8;
                }
                iVar4 = -1;
                if (local_1f8 < pcVar12) {
                  iVar4 = 1;
                }
              }
              else {
                uVar13 = (long)local_1f8 - (long)local_200;
                uVar16 = (long)pcVar12 - (long)__s;
                sVar8 = uVar13;
                if (uVar16 <= uVar13) {
                  sVar8 = uVar16;
                }
                iVar5 = memcmp(local_200,__s,sVar8);
                iVar4 = 1;
                if (-1 < iVar5) {
                  iVar4 = -1;
                }
                if (iVar5 == 0) {
                  iVar4 = -1;
                  if (uVar13 < uVar16) {
                    iVar4 = 1;
                  }
                  if (uVar13 == uVar16) goto LAB_031f5ff0;
                }
              }
              bVar18 = false;
              *param_4 = iVar4;
              local_70[0] = 0;
            }
LAB_031f60f8:
            local_288 = 0;
            if ((-1 < (int)local_284) && (local_290 != (undefined1 *)0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                        (PTR_PTR_047d1a50 + 0x20,local_290,(ulong)local_284 << 4);
            }
            if (!bVar18) {
              return local_70[0];
            }
          }
          else {
            uVar13 = *puVar10;
            local_1d0 = -0x7fffff8000000000;
            local_148 = 1;
            local_1d8 = &local_1c8;
            FUN_031c6afc(&local_1d8,local_1f0,(int)pbStack_1e8 - (int)local_1f0);
            uVar6 = strtoull((char *)local_1d8,(char **)0x0,0);
            lVar3 = local_1d0;
            if (uVar6 != uVar13) {
              iVar4 = 1;
              if (uVar13 < uVar6) {
                iVar4 = -1;
              }
              *param_4 = iVar4;
              local_70[0] = 0;
              local_1d0 = (ulong)local_1d0._4_4_ << 0x20;
              if (lVar3 < 0) {
                return 0;
              }
              if (local_1d8 == (undefined8 **)0x0) {
                return 0;
              }
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
              return local_70[0];
            }
            local_1d0 = (ulong)local_1d0._4_4_ << 0x20;
            if ((-1 < lVar3) && (local_1d8 != (undefined8 **)0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
            }
          }
          local_1dc = local_1dc + 1;
        } while (local_1dc < (int)(uint)*(ushort *)(uVar17 + 8));
      }
LAB_031f6374:
      *param_4 = 0;
      return 0;
    }
    if (DAT_04884ce8 < 4) {
      if (DAT_046aaf68 == '\0') {
        return 0x80040257;
      }
    }
    else if (DAT_046aaf68 == '\0') {
      local_1d8 = (undefined8 **)0x0;
      local_1c8 = &DAT_04884c98;
      uStack_1c0 = 4;
      pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
      local_1b8 = nn::os::GetThreadId(pTVar7);
      local_1b0 = (undefined8 **)0x0;
      local_1a8 = 0;
      local_1a0 = (char *)0x0;
      local_198 = 0;
      local_190 = 0;
      FUN_0322c554(&local_1d8,
                   "Type \'{}\' is not a template type, cannot lookup invalid type name \'{}\'.",
                   &DAT_046a7d70,&local_88,&local_80);
      local_198 = 0x18e;
LAB_031f651c:
      local_1a0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
      ;
      FUN_0322c8e0(&local_1d8);
      goto LAB_031f6528;
    }
    local_1c8 = &DAT_04884c98;
    uStack_1c0 = 4;
    pTVar7 = (ThreadType *)nn::os::GetCurrentThread();
    local_1b8 = nn::os::GetThreadId(pTVar7);
    local_1d8 = local_188;
    local_1a8 = 0;
    local_1a0 = (char *)0x0;
    local_198 = 0;
    local_190 = 0;
    local_1d0 = 0x10000000000;
    local_188[0]._0_1_ = '\0';
    local_1b0 = local_1d8;
    FUN_0322c554(&local_1d8,
                 "Type \'{}\' is not a template type, cannot lookup invalid type name \'{}\'.",
                 &DAT_046a7d70,&local_88,&local_80);
    local_198 = 0x18e;
  }
  local_1a0 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
  ;
  if ((char)local_188[0] != '\0') {
    sVar8 = strlen((char *)local_188);
    *(undefined2 *)((long)local_188 + (long)(int)((int)sVar8 - (uint)((int)sVar8 == 0xff))) = 10;
    printf("%s",local_188);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_031f6528:
  if (((ulong)local_1b0 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(long)local_1b0 + -1,0);
  }
  return 0x80040257;
}


