/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f5500; name: FUN_031f5500
 */


undefined4 FUN_031f5500(byte *param_1,byte *param_2,ulong *param_3,long *param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  byte bVar3;
  void *pvVar4;
  ThreadType *pTVar5;
  size_t sVar6;
  char *pcVar7;
  undefined *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *local_1d0;
  undefined8 uStack_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  char local_180 [256];
  byte *local_80;
  byte *pbStack_78;
  undefined4 local_70 [4];
  
  *param_3 = (ulong)param_1;
  param_3[1] = (ulong)param_2;
  local_80 = param_1;
  pbStack_78 = param_2;
  pvVar4 = memchr(param_1,0x3c,(long)param_2 - (long)param_1);
  iVar9 = (int)pvVar4 - (int)param_1;
  if (pvVar4 == (void *)0x0) {
    iVar9 = -1;
  }
  if (iVar9 == -1) {
    pbVar11 = (byte *)*param_3;
    pbVar10 = (byte *)param_3[1];
    if (pbVar11 == pbVar10) {
      return 0;
    }
    pbVar15 = pbVar10 + -1;
    if (*pbVar15 != 0x2a) {
      return 0;
    }
    if (pbVar11 == pbVar15) {
      pbVar15 = pbVar11;
    }
    else if (pbVar11 < pbVar15) {
      do {
        if (0x20 < *pbVar11 || (1L << ((ulong)*pbVar11 & 0x3f) & 0x100002600U) == 0)
        goto LAB_031f59c4;
        pbVar11 = pbVar11 + 1;
      } while (pbVar15 != pbVar11);
      pbVar11 = pbVar15;
    }
    else {
LAB_031f59c4:
      pbVar10 = pbVar10 + -2;
      if (pbVar11 < pbVar10) {
        do {
          if (0x20 < *pbVar10 || (1L << ((ulong)*pbVar10 & 0x3f) & 0x100002600U) == 0) break;
          pbVar10 = pbVar10 + -1;
        } while (pbVar11 < pbVar10);
        pbVar15 = pbVar10 + 1;
      }
    }
    iVar9 = (int)param_4[1];
    lVar13 = (long)iVar9;
    if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar9) {
      FUN_031c6934(param_4,PTR_PTR_047d1a50 + 0x20,lVar13 + 1);
      iVar9 = (int)param_4[1];
    }
    puVar2 = (ulong *)(*param_4 + (long)iVar9 * 0x10);
    *puVar2 = (ulong)pbVar11;
    puVar2[1] = (ulong)pbVar15;
    *(int *)(param_4 + 1) = (int)(lVar13 + 1);
    *param_3 = (ulong)&DAT_03c62cc9;
    param_3[1] = (ulong)&DAT_03c62ccb;
    return 0;
  }
  if (iVar9 != 0) {
    pbVar11 = param_1 + iVar9;
    pbVar10 = param_1;
    pbVar15 = pbVar11;
    if (iVar9 < 1) {
LAB_031f56c8:
      pbVar14 = pbVar11 + -1;
      if (pbVar10 < pbVar14) {
        do {
          if (0x20 < *pbVar14 || (1L << ((ulong)*pbVar14 & 0x3f) & 0x100002600U) == 0) break;
          pbVar14 = pbVar14 + -1;
        } while (pbVar10 < pbVar14);
        pbVar15 = pbVar14 + 1;
      }
    }
    else {
      lVar13 = (long)iVar9;
      do {
        if (0x20 < *pbVar10 || (1L << ((ulong)*pbVar10 & 0x3f) & 0x100002600U) == 0)
        goto LAB_031f56c8;
        pbVar10 = pbVar10 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      pbVar10 = pbVar11;
    }
    iVar12 = -1;
    *param_3 = (ulong)pbVar10;
    param_3[1] = (ulong)pbVar15;
    do {
      if (param_1 == param_2) goto LAB_031f5738;
      pbVar10 = param_2 + -1;
      param_2 = param_2 + -1;
    } while (*pbVar10 != 0x3e);
    iVar12 = (int)param_2 - (int)param_1;
LAB_031f5738:
    local_70[0] = 0x80040257;
    if (iVar12 < iVar9) {
      if (DAT_04884ce8 == 0) {
        return 0x80040257;
      }
      local_1d0 = (char *)0x0;
      local_1c0 = &DAT_04884c98;
      uStack_1b8 = 1;
      pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
      local_1b0 = nn::os::GetThreadId(pTVar5);
      local_1a8 = (char *)0x0;
      local_1a0 = 0;
      local_198 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
      ;
      local_190 = 0x146;
      uStack_188 = 0;
      FUN_0322c554(&local_1d0,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_046a7c30,
                   "indexOfClose < indexOfOpen",local_70);
      pcVar7 = "Invalid type name: \'{}\' (invalid arguments)";
LAB_031f5b74:
      FUN_0322c554(&local_1d0,pcVar7,PTR_DAT_047e5b50,&local_80);
      FUN_0322c8e0(&local_1d0);
      if (((ulong)local_1a8 & 1) == 0) {
        return local_70[0];
      }
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,(long)local_1a8 - 1,0);
      return local_70[0];
    }
    param_1 = param_1 + iVar12;
    pbVar10 = pbVar11 + 1;
    pbVar11 = pbVar11 + 2;
    if (pbVar11 < param_1) {
      puVar8 = PTR_PTR_047d1a50 + 0x20;
      pbVar15 = pbVar10;
      do {
        iVar9 = 0;
        pbVar14 = pbVar15;
        while( true ) {
          pbVar15 = pbVar11;
          bVar3 = *pbVar15;
          if (bVar3 == 0x3e) {
            local_70[0] = 0x80040257;
            if (0 < iVar9) {
              iVar9 = iVar9 + -1;
              goto LAB_031f5834;
            }
            if (DAT_04884ce8 == 0) {
              return 0x80040257;
            }
            local_1d0 = (char *)0x0;
            local_1c0 = &DAT_04884c98;
            uStack_1b8 = 1;
            pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
            local_1b0 = nn::os::GetThreadId(pTVar5);
            pcVar7 = "bracketNesting <= 0";
            local_190 = 0x15d;
            puVar8 = PTR_DAT_047e5a10;
            goto LAB_031f5b60;
          }
          if (bVar3 != 0x3c) break;
          iVar9 = iVar9 + 1;
LAB_031f5834:
          pbVar11 = pbVar15 + 1;
          pbVar14 = pbVar15;
          if (param_1 == pbVar15 + 1) {
            local_70[0] = 0x80040257;
            if (iVar9 == 0) goto LAB_031f5984;
            if (DAT_04884ce8 == 0) {
              return 0x80040257;
            }
            local_1d0 = (char *)0x0;
            local_1c0 = &DAT_04884c98;
            uStack_1b8 = 1;
            pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
            local_1b0 = nn::os::GetThreadId(pTVar5);
            pcVar7 = "bracketNesting";
            local_190 = 0x166;
            puVar8 = &DAT_046a7cd0;
LAB_031f5b60:
            uStack_188 = 0;
            local_198 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
            ;
            local_1a0 = 0;
            local_1a8 = (char *)0x0;
            FUN_0322c554(&local_1d0,"HK_RETURN_RES_IF({}) returning {}. ",puVar8,pcVar7,local_70);
            pcVar7 = "Invalid type name: {} (invalid brackets nesting)";
            goto LAB_031f5b74;
          }
        }
        if ((iVar9 != 0) || (bVar3 != 0x2c)) goto LAB_031f5834;
        if (pbVar10 == pbVar15) {
          pbVar16 = pbVar10;
          pbVar15 = pbVar10;
        }
        else {
          pbVar16 = pbVar15;
          if (pbVar10 < pbVar15) {
            do {
              if (0x20 < *pbVar10 || (1L << ((ulong)*pbVar10 & 0x3f) & 0x100002600U) == 0)
              goto LAB_031f5880;
              pbVar10 = pbVar10 + 1;
            } while (pbVar15 != pbVar10);
            pbVar10 = pbVar15;
          }
          else {
LAB_031f5880:
            pbVar11 = pbVar15 + -1;
            if (pbVar10 < pbVar11) {
              do {
                if (0x20 < *pbVar11 || (1L << ((ulong)*pbVar11 & 0x3f) & 0x100002600U) == 0) break;
                pbVar11 = pbVar11 + -1;
              } while (pbVar10 < pbVar11);
              pbVar16 = pbVar11 + 1;
            }
            else {
            }
          }
        }
        iVar9 = (int)param_4[1];
        lVar13 = (long)iVar9;
        if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar9) {
          FUN_031c6934(param_4,puVar8,lVar13 + 1);
          iVar9 = (int)param_4[1];
        }
        puVar1 = (undefined8 *)(*param_4 + (long)iVar9 * 0x10);
        pbVar11 = pbVar15 + 1;
        *puVar1 = pbVar10;
        puVar1[1] = pbVar16;
        pbVar10 = pbVar14 + 2;
        *(int *)(param_4 + 1) = (int)(lVar13 + 1);
      } while (pbVar11 != param_1);
    }
LAB_031f5984:
    local_70[0] = 0x80040257;
    if (param_1 <= pbVar10) {
      return 0;
    }
    do {
      if (0x20 < *pbVar10 || (1L << ((ulong)*pbVar10 & 0x3f) & 0x100002600U) == 0) {
        pbVar11 = param_1 + -1;
        if (pbVar10 < pbVar11) goto LAB_031f5a74;
        goto LAB_031f5a9c;
      }
      pbVar10 = pbVar10 + 1;
    } while (param_1 != pbVar10);
    pbVar10 = param_1;
    goto LAB_031f5a9c;
  }
  if (DAT_04884ce8 < 2) {
    if (DAT_046aaf68 == '\0') {
      return 0x80040200;
    }
  }
  else if (DAT_046aaf68 == '\0') {
    local_1d0 = (char *)0x0;
    local_1c0 = &DAT_04884c98;
    uStack_1b8 = 2;
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    local_1b0 = nn::os::GetThreadId(pTVar5);
    local_1a8 = (char *)0x0;
    local_1a0 = 0;
    local_198 = (char *)0x0;
    local_190 = 0;
    uStack_188 = 0;
    FUN_0322c554(&local_1d0,"Invalid type name: \'{}\' (empty root)",PTR_DAT_047e5b50,&local_80);
    local_198 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
    ;
    local_190 = 0x13a;
    FUN_0322c8e0(&local_1d0);
    goto LAB_031f55d4;
  }
  local_1c0 = &DAT_04884c98;
  uStack_1b8 = 2;
  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
  local_1b0 = nn::os::GetThreadId(pTVar5);
  local_1a0 = 0;
  local_198 = (char *)0x0;
  local_190 = 0;
  uStack_188 = 0;
  local_180[0] = '\0';
  uStack_1c8 = 0x10000000000;
  local_1d0 = local_180;
  local_1a8 = local_180;
  FUN_0322c554(&local_1d0,"Invalid type name: \'{}\' (empty root)",PTR_DAT_047e5b50,&local_80);
  local_198 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
  ;
  local_190 = 0x13a;
  if (local_180[0] != '\0') {
    sVar6 = strlen(local_180);
    (local_180 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[0] = '\n';
    (local_180 + (int)((int)sVar6 - (uint)((int)sVar6 == 0xff)))[1] = '\0';
    printf("%s",local_180);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_031f55d4:
  if (((ulong)local_1a8 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1a8 + -1,0);
  }
  return 0x80040200;
  while (pbVar11 = pbVar11 + -1, pbVar10 < pbVar11) {
LAB_031f5a74:
    if (0x20 < *pbVar11 || (1L << ((ulong)*pbVar11 & 0x3f) & 0x100002600U) == 0) break;
  }
  param_1 = pbVar11 + 1;
LAB_031f5a9c:
  iVar9 = (int)param_4[1];
  lVar13 = (long)iVar9;
  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar9) {
    FUN_031c6934(param_4,PTR_PTR_047d1a50 + 0x20,lVar13 + 1);
    iVar9 = (int)param_4[1];
  }
  puVar2 = (ulong *)(*param_4 + (long)iVar9 * 0x10);
  *puVar2 = (ulong)pbVar10;
  puVar2[1] = (ulong)param_1;
  *(int *)(param_4 + 1) = (int)(lVar13 + 1);
  return 0;
}


