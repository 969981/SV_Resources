/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c8c08; name: FUN_031c8c08
 */


uint FUN_031c8c08(long *param_1,char *param_2,ulong *param_3)

{
  undefined *puVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  ThreadType *pTVar11;
  size_t sVar12;
  void *__dest;
  long *plVar13;
  char *pcVar14;
  undefined8 **__src;
  undefined *puVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  char *pcVar22;
  long lVar23;
  char *pcVar24;
  ulong *puVar25;
  ulong uVar26;
  long lVar27;
  char *pcVar28;
  char *__s;
  uint unaff_w23;
  char *pcVar29;
  uint local_180;
  uint local_154;
  undefined1 *local_148;
  ulong local_140;
  undefined1 local_138 [16];
  undefined8 **local_128;
  int local_120;
  int local_11c;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulong local_100;
  undefined8 uStack_f8;
  char *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_98;
  undefined8 local_90;
  ulong *puStack_88;
  ulong local_80;
  uint local_78 [2];
  uint local_70 [4];
  
  if (param_2 == (char *)0x0) {
    uVar19 = 0;
    if (*param_3 != 0) {
      uVar19 = 0x80040257;
    }
    return uVar19;
  }
  local_148 = local_138;
  local_140 = 0x8000000a00000000;
  iVar17 = (int)*param_3;
  iVar10 = iVar17;
  if (9 < iVar17) {
    iVar10 = 10;
  }
  if ((int)param_1[0x12] != 0) {
    iVar10 = iVar17;
  }
  if (iVar10 < 0xb) {
    local_140._0_4_ = 0;
  }
  else {
    FUN_02e7fe28(&local_148,PTR_PTR_047d1a50,iVar10);
  }
  if ((int)(uint)local_140 < iVar10) {
    lVar27 = (long)(int)(uint)local_140;
    uVar19 = ~(uint)local_140;
    local_140 = CONCAT44(local_140._4_4_,iVar10);
    memset(local_148 + lVar27,0,(ulong)(iVar10 + uVar19) + 1);
  }
  else if (iVar10 < (int)(uint)local_140) {
    local_140 = CONCAT44(local_140._4_4_,iVar10);
  }
  local_154 = 0;
  puVar1 = PTR_PTR_047d1a50 + 0x20;
  pcVar29 = (char *)0x0;
  __s = (char *)0x0;
LAB_031c8d1c:
  pcVar24 = param_2 + 2;
  for (lVar27 = 0; cVar6 = param_2[lVar27], cVar6 != '\0'; lVar27 = lVar27 + 1) {
    if (cVar6 == '{') {
      pcVar16 = param_2 + lVar27;
      pcVar22 = pcVar16 + 1;
      cVar6 = *pcVar22;
      if (cVar6 == '{') {
LAB_031c8d9c:
        pcVar16 = pcVar22;
        unaff_w23 = 1;
        pcVar28 = param_2 + lVar27 + 2;
      }
      else {
        if (lVar27 == 0) goto LAB_031c8dcc;
        unaff_w23 = 1;
        pcVar28 = pcVar16;
      }
      goto LAB_031c8db8;
    }
    if (cVar6 == '}') {
      pcVar28 = param_2 + lVar27;
      local_70[0] = 0x8004ffff;
      pcVar22 = pcVar28 + 1;
      if (pcVar28[1] == '}') goto LAB_031c8d9c;
      if (DAT_04883320 == '\0') {
        uVar19 = 0x8004ffff;
        goto LAB_031c9c60;
      }
      local_128 = (undefined8 **)0x0;
      local_118 = &DAT_048832d0;
      uStack_110 = 1;
      pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
      local_108 = nn::os::GetThreadId(pTVar11);
      local_100 = 0;
      uStack_f8 = 0;
      local_e0 = 0;
      local_f0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp"
      ;
      uStack_e8 = 0x4f6;
      FUN_0322c554(&local_128,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_047e5960,
                   "m_fmt[1] != \'}\'",local_70);
      FUN_0322c554(&local_128,"Unescaped right curly brace",PTR_DAT_047d1b38);
      FUN_0322c8e0(&local_128);
      if ((local_100 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_100 - 1,0);
      }
      goto LAB_031c8ffc;
    }
    pcVar24 = pcVar24 + 1;
  }
  pcVar16 = param_2 + lVar27;
  unaff_w23 = (uint)(lVar27 != 0);
  pcVar28 = pcVar16;
LAB_031c8db8:
  local_70[0] = 0;
  __s = param_2;
  pcVar29 = pcVar16;
  goto LAB_031c9004;
LAB_031c8dcc:
  if (cVar6 == '\0') goto LAB_031c8eb0;
  if (cVar6 == '{') {
    local_90 = CONCAT44(local_90._4_4_,0x8004ffff);
    pcVar28 = pcVar24 + -1;
    if (DAT_04883320 == '\0') goto LAB_031c8ff4;
    local_128 = (undefined8 **)0x0;
    local_118 = &DAT_048832d0;
    uStack_110 = 1;
    pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
    local_108 = nn::os::GetThreadId(pTVar11);
    local_e0 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp"
    ;
    uStack_e8 = 0x522;
    FUN_0322c554(&local_128,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_046a4150,&DAT_03c38de7,
                 &local_90);
    pcVar16 = "Left curly brace within placeholder";
    goto LAB_031c8fbc;
  }
  if (cVar6 == '}') {
    pcVar29 = pcVar24 + -1;
    local_90 = local_90 & 0xffffffff00000000;
    unaff_w23 = 2;
    pcVar28 = pcVar24;
    __s = pcVar22;
    goto LAB_031c8ff4;
  }
  cVar6 = *pcVar24;
  pcVar24 = pcVar24 + 1;
  goto LAB_031c8dcc;
LAB_031c8eb0:
  local_90 = CONCAT44(local_90._4_4_,0x8004ffff);
  pcVar28 = pcVar24 + -1;
  if (DAT_04883320 != '\0') {
    local_128 = (undefined8 **)0x0;
    local_118 = &DAT_048832d0;
    uStack_110 = 1;
    pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
    local_108 = nn::os::GetThreadId(pTVar11);
    local_e0 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp"
    ;
    uStack_e8 = 0x526;
    FUN_0322c554(&local_128,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_046a4150,&DAT_03c38de7,
                 &local_90);
    pcVar16 = "Truncated placeholder string";
LAB_031c8fbc:
    pcVar28 = pcVar24 + -1;
    FUN_0322c554(&local_128,pcVar16,PTR_DAT_047d1b38);
    FUN_0322c8e0(&local_128);
    if ((local_100 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_100 - 1,0);
    }
  }
LAB_031c8ff4:
  local_70[0] = (uint)local_90;
LAB_031c8ffc:
  uVar19 = local_70[0];
  if ((int)local_70[0] < 0) goto LAB_031c9c60;
LAB_031c9004:
  param_2 = pcVar28;
  if (unaff_w23 == 1) {
    if (__s != (char *)0x0) {
      iVar10 = (int)pcVar29 - (int)__s;
      if (iVar10 < 0) {
        sVar12 = strlen(__s);
        iVar10 = (int)sVar12;
      }
      iVar8 = (int)param_1[1];
      iVar10 = (int)((long)iVar8 + -1) + iVar10;
      uVar19 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      iVar18 = uVar19 - 1;
      iVar17 = iVar10;
      if (iVar18 <= iVar10) {
        iVar17 = iVar18;
      }
      if ((int)param_1[0x12] != 0) {
        iVar17 = iVar10;
      }
      iVar10 = iVar17 + 1;
      iVar18 = iVar8;
      if ((int)uVar19 <= iVar17) {
        FUN_030b4a20(param_1,puVar1,(long)iVar10);
        iVar18 = (int)param_1[1];
      }
      if ((iVar18 <= iVar17) || (iVar10 < iVar18)) {
        *(int *)(param_1 + 1) = iVar10;
      }
      *(undefined1 *)(*param_1 + (long)iVar17) = 0;
      memmove((void *)(*param_1 + (long)iVar8 + -1),__s,(long)((int)param_1[1] - iVar8));
    }
    goto LAB_031c8d1c;
  }
  if (unaff_w23 != 2) {
    if (unaff_w23 == 0) goto LAB_031c9c18;
    goto LAB_031c8d1c;
  }
  pcVar24 = pcVar29;
  do {
    if (__s == pcVar24) {
      pcVar24 = (char *)0x0;
      break;
    }
    pcVar24 = pcVar24 + -1;
  } while (*pcVar24 != ':');
  bVar9 = pcVar24 != (char *)0x0;
  pcVar16 = pcVar29;
  if (bVar9) {
    pcVar16 = pcVar24;
  }
  pcVar22 = (char *)0x0;
  if (bVar9) {
    pcVar22 = pcVar24 + 1;
  }
  pcVar24 = (char *)0x0;
  if (bVar9) {
    pcVar24 = pcVar29;
  }
  lVar27 = 0;
  do {
    lVar23 = lVar27;
    if ((long)__s - (long)pcVar16 == lVar23) {
      uVar19 = 0;
      goto LAB_031c93e4;
    }
    lVar27 = lVar23 + -1;
  } while (pcVar16[lVar23 + -1] != ',');
  local_90 = CONCAT44(local_90._4_4_,0x80040257);
  pcVar28 = pcVar16 + lVar23 + -1;
  if (lVar23 == 0) {
    if (DAT_04883320 == '\0') {
      uVar19 = 0x80040257;
      local_78[0] = 0x80040257;
      goto LAB_031c9c60;
    }
    local_128 = (undefined8 **)0x0;
    local_118 = &DAT_048832d0;
    uStack_110 = 1;
    pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
    local_108 = nn::os::GetThreadId(pTVar11);
    uStack_e8 = 0x4c;
    pcVar16 = "s.isEmpty()";
LAB_031c9258:
    pcVar14 = "HK_RETURN_RES_IF({}) returning {}. ";
    puVar15 = PTR_DAT_047e5968;
LAB_031c92d0:
    local_e0 = 0;
    local_f0 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp"
    ;
    uStack_f8 = 0;
    local_100 = 0;
    FUN_0322c554(&local_128,pcVar14,puVar15,pcVar16,&local_90);
    FUN_0322c554(&local_128,&DAT_03c886bc,PTR_DAT_047d1b38);
    FUN_0322c8e0(&local_128);
    if ((local_100 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_100 - 1,0);
    }
LAB_031c9318:
    uVar19 = 0;
  }
  else {
    if (pcVar28[1] == '+') {
      bVar9 = false;
LAB_031c91b8:
      pcVar14 = pcVar28 + 2;
    }
    else {
      if (pcVar28[1] == '-') {
        bVar9 = true;
        goto LAB_031c91b8;
      }
      bVar9 = false;
      pcVar14 = pcVar28 + 1;
    }
    iVar10 = FUN_031ca280(pcVar14,pcVar16,local_70);
    local_90 = CONCAT44(local_90._4_4_,iVar10);
    if (iVar10 < 0) {
      if (DAT_04883320 != '\0') {
        local_128 = (undefined8 **)0x0;
        local_118 = &DAT_048832d0;
        uStack_110 = 1;
        pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
        local_108 = nn::os::GetThreadId(pTVar11);
        pcVar14 = "HK_RETURN_IF_FAILED({}) returning {}. ";
        pcVar16 = "parseUnsignedDecimal(s, &num)";
        uStack_e8 = 0x57;
        puVar15 = PTR_DAT_047e5970;
        goto LAB_031c92d0;
      }
      goto LAB_031c9318;
    }
    uVar19 = 0x80000000;
    if (!bVar9) {
      uVar19 = 0x7fffffff;
    }
    local_90 = CONCAT44(local_90._4_4_,0x80040257);
    if (uVar19 < local_70[0]) {
      if (DAT_04883320 != '\0') {
        local_128 = (undefined8 **)0x0;
        local_118 = &DAT_048832d0;
        uStack_110 = 1;
        pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
        local_108 = nn::os::GetThreadId(pTVar11);
        uStack_e8 = 0x5a;
        pcVar16 = "num > limit";
        goto LAB_031c9258;
      }
      goto LAB_031c9318;
    }
    uVar19 = -local_70[0];
    if (!bVar9) {
      uVar19 = local_70[0];
    }
    local_90 = (ulong)local_90._4_4_ << 0x20;
  }
  local_78[0] = (uint)local_90;
  if ((int)(uint)local_90 < 0) {
    if (DAT_04883320 == '\0') {
      uVar19 = (uint)local_90;
      goto LAB_031c9c60;
    }
    local_128 = (undefined8 **)0x0;
    local_118 = &DAT_048832d0;
    uStack_110 = 1;
    pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
    local_108 = nn::os::GetThreadId(pTVar11);
    local_e0 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp"
    ;
    uStack_e8 = 0x493;
    FUN_0322c554(&local_128,"HK_RETURN_IF_FAILED({}) returning {}. ",&DAT_046a4348,
                 "parseSignedDecimal(numAndWidth.right, &width)",local_78);
    FUN_0322c554(&local_128,&DAT_03c886bc,PTR_DAT_047d1b38);
    FUN_0322c8e0(&local_128);
  }
  else {
    local_78[0] = 0x80040257;
    uVar4 = -uVar19;
    if (-1 < (int)uVar19) {
      uVar4 = uVar19;
    }
    pcVar16 = pcVar28;
    if ((int)uVar4 < 0x101) {
LAB_031c93e4:
      local_70[0] = local_154;
      if ((pcVar16 != __s) &&
         (local_78[0] = FUN_031ca280(__s,pcVar16,local_70), (int)local_78[0] < 0)) {
        if (DAT_04883320 != '\0') {
          local_128 = (undefined8 **)0x0;
          local_118 = &DAT_048832d0;
          uStack_110 = 1;
          pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
          local_108 = nn::os::GetThreadId(pTVar11);
          local_100 = 0;
          uStack_f8 = 0;
          local_e0 = 0;
          local_f0 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp"
          ;
          uStack_e8 = 0x49c;
          FUN_0322c554(&local_128,"HK_RETURN_IF_FAILED({}) returning {}. ",PTR_DAT_047e5978,
                       "parseUnsignedDecimal(spec, &num)",local_78);
          FUN_0322c554(&local_128,&DAT_03c886bc,PTR_DAT_047d1b38);
          FUN_0322c8e0(&local_128);
          if ((local_100 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_100 - 1,0);
          }
        }
        goto LAB_031c9be4;
      }
      local_180 = local_70[0];
      local_78[0] = 0x80040257;
      if (*param_3 <= (ulong)local_70[0]) {
        if (DAT_04883320 != '\0') {
          local_128 = (undefined8 **)0x0;
          local_118 = &DAT_048832d0;
          uStack_110 = 1;
          pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
          local_108 = nn::os::GetThreadId(pTVar11);
          local_e0 = 0;
          local_100 = 0;
          uStack_f8 = 0;
          local_f0 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp"
          ;
          uStack_e8 = 0x4a2;
          FUN_0322c554(&local_128,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_046a4668,
                       "num >= args.getSize()",local_78);
          FUN_0322c554(&local_128,&DAT_03c886bc,PTR_DAT_047d1b38);
          FUN_0322c8e0(&local_128);
          if ((local_100 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_100 - 1,0);
          }
        }
        goto LAB_031c9be4;
      }
      local_90 = param_3[(ulong)local_70[0] + 2];
      puStack_88 = *(ulong **)(param_3[1] + (ulong)local_70[0] * 8 + 8);
      local_80 = 0;
      puVar25 = puStack_88;
      if (puStack_88 != (ulong *)0x0) {
        do {
          uVar26 = *puVar25;
          if (((uint)uVar26 >> 2 & 1) != 0) {
            local_80 = puVar25[(uVar26 >> 1 & 1) + (uVar26 & 1) + 2];
            goto LAB_031c96b4;
          }
          puVar25 = (ulong *)puVar25[1];
        } while (puVar25 != (ulong *)0x0);
        local_80 = 0;
      }
LAB_031c96b4:
      if ((local_80 & 1) != 0) {
        piVar2 = (int *)((local_80 & 0xfffffffffffffffe) + 8);
        do {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (local_90 == 0) {
        iVar8 = (int)param_1[1];
        uVar19 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        iVar10 = iVar8 + 8;
        iVar18 = uVar19 - 1;
        iVar17 = iVar10;
        if (iVar18 <= iVar10) {
          iVar17 = iVar18;
        }
        if ((int)param_1[0x12] != 0) {
          iVar17 = iVar10;
        }
        iVar10 = iVar17 + 1;
        iVar18 = iVar8;
        if ((int)uVar19 <= iVar17) {
          FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar10,pcVar24);
          iVar18 = (int)param_1[1];
        }
        if (iVar18 <= iVar17 || iVar10 < iVar18) {
          *(int *)(param_1 + 1) = iVar10;
        }
        *(undefined1 *)(*param_1 + (long)iVar17) = 0;
        memcpy((void *)(*param_1 + (long)iVar8 + -1),"(NullVar)",(long)((int)param_1[1] - iVar8));
        local_78[0] = 0x80040257;
        if ((local_80 & 1) != 0) {
          plVar13 = (long *)(local_80 & 0xfffffffffffffffe);
          plVar3 = plVar13 + 1;
          do {
            lVar27 = *plVar3;
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar9) {
              *(int *)plVar3 = (int)lVar27 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((plVar13 != (long *)0x0) && ((int)lVar27 == 1)) {
            (**(code **)(*plVar13 + 8))();
          }
        }
        goto LAB_031c9be4;
      }
      local_120 = 1;
      local_11c = -0x7fffff80;
      local_118 = (undefined8 *)((ulong)local_118 & 0xffffffffffffff00);
      local_98 = (undefined4)param_1[0x12];
      local_128 = &local_118;
      FUN_031e3480(&local_90,&local_128,pcVar22);
      __src = local_128;
      uVar4 = -uVar19;
      if (-1 < (int)uVar19) {
        uVar4 = uVar19;
      }
      iVar10 = local_120 + -1;
      iVar17 = uVar4 - iVar10;
      if (iVar17 < 1) {
        if (local_128 != (undefined8 **)0x0) {
          if (local_120 < 1) {
            sVar12 = strlen((char *)local_128);
            iVar10 = (int)sVar12;
          }
          iVar8 = (int)param_1[1];
          iVar10 = (int)((long)iVar8 + -1) + iVar10;
          uVar19 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
          iVar18 = uVar19 - 1;
          iVar17 = iVar10;
          if (iVar18 <= iVar10) {
            iVar17 = iVar18;
          }
          if ((int)param_1[0x12] != 0) {
            iVar17 = iVar10;
          }
          iVar10 = iVar17 + 1;
          iVar18 = iVar8;
          if ((int)uVar19 <= iVar17) {
            FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar10);
            iVar18 = (int)param_1[1];
          }
          if ((iVar18 <= iVar17) || (iVar10 < iVar18)) {
            *(int *)(param_1 + 1) = iVar10;
          }
          *(undefined1 *)(*param_1 + (long)iVar17) = 0;
          __dest = (void *)(*param_1 + (long)iVar8 + -1);
          iVar8 = (int)param_1[1] - iVar8;
LAB_031c9b74:
          memmove(__dest,__src,(long)iVar8);
        }
      }
      else if ((int)uVar19 < 1) {
        if (local_128 != (undefined8 **)0x0) {
          if (local_120 < 1) {
            sVar12 = strlen((char *)local_128);
            iVar10 = (int)sVar12;
          }
          iVar18 = (int)param_1[1];
          iVar10 = (int)((long)iVar18 + -1) + iVar10;
          uVar19 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
          iVar21 = uVar19 - 1;
          iVar8 = iVar10;
          if (iVar21 <= iVar10) {
            iVar8 = iVar21;
          }
          if ((int)param_1[0x12] != 0) {
            iVar8 = iVar10;
          }
          iVar10 = iVar8 + 1;
          iVar21 = iVar18;
          if ((int)uVar19 <= iVar8) {
            FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar10);
            iVar21 = (int)param_1[1];
          }
          if ((iVar21 <= iVar8) || (iVar10 < iVar21)) {
            *(int *)(param_1 + 1) = iVar10;
          }
          *(undefined1 *)(*param_1 + (long)iVar8) = 0;
          memmove((void *)(*param_1 + (long)iVar18 + -1),__src,(long)((int)param_1[1] - iVar18));
        }
        *(undefined1 *)((long)(int)param_1[1] + *param_1 + -1) = 0x20;
        uVar20 = *(uint *)(param_1 + 1);
        uVar4 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        uVar19 = uVar20 + iVar17;
        uVar7 = uVar4 - 1;
        uVar5 = uVar19;
        if ((int)uVar7 <= (int)uVar19) {
          uVar5 = uVar7;
        }
        if ((int)param_1[0x12] != 0) {
          uVar5 = uVar19;
        }
        if ((int)uVar4 < (int)uVar5) {
          FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)(int)uVar5);
          uVar20 = *(uint *)(param_1 + 1);
        }
        if ((int)uVar20 < (int)uVar5) {
          *(uint *)(param_1 + 1) = uVar5;
          memset((void *)(*param_1 + (long)(int)uVar20),0x20,(ulong)(uVar5 + ~uVar20) + 1);
          uVar20 = *(uint *)(param_1 + 1);
        }
        else if ((int)uVar5 < (int)uVar20) {
          *(uint *)(param_1 + 1) = uVar5;
          uVar20 = uVar5;
        }
        *(undefined1 *)(*param_1 + (long)(int)uVar20 + -1) = 0;
      }
      else {
        *(undefined1 *)((long)(int)param_1[1] + *param_1 + -1) = 0x20;
        uVar20 = *(uint *)(param_1 + 1);
        uVar4 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        uVar19 = uVar20 + iVar17;
        uVar7 = uVar4 - 1;
        uVar5 = uVar19;
        if ((int)uVar7 <= (int)uVar19) {
          uVar5 = uVar7;
        }
        if ((int)param_1[0x12] != 0) {
          uVar5 = uVar19;
        }
        if ((int)uVar4 < (int)uVar5) {
          FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)(int)uVar5);
          uVar20 = *(uint *)(param_1 + 1);
        }
        if ((int)uVar20 < (int)uVar5) {
          *(uint *)(param_1 + 1) = uVar5;
          memset((void *)(*param_1 + (long)(int)uVar20),0x20,(ulong)(uVar5 + ~uVar20) + 1);
          uVar20 = *(uint *)(param_1 + 1);
        }
        else if ((int)uVar5 < (int)uVar20) {
          *(uint *)(param_1 + 1) = uVar5;
          uVar20 = uVar5;
        }
        __src = local_128;
        *(undefined1 *)(*param_1 + (long)(int)uVar20 + -1) = 0;
        if (local_128 != (undefined8 **)0x0) {
          if (local_120 < 1) {
            sVar12 = strlen((char *)local_128);
            iVar10 = (int)sVar12;
          }
          else {
            iVar10 = local_120 + -1;
          }
          iVar8 = (int)param_1[1];
          iVar10 = (int)((long)iVar8 + -1) + iVar10;
          uVar19 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
          iVar18 = uVar19 - 1;
          iVar17 = iVar10;
          if (iVar18 <= iVar10) {
            iVar17 = iVar18;
          }
          if ((int)param_1[0x12] != 0) {
            iVar17 = iVar10;
          }
          iVar10 = iVar17 + 1;
          iVar18 = iVar8;
          if ((int)uVar19 <= iVar17) {
            FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar10);
            iVar18 = (int)param_1[1];
          }
          if ((iVar18 <= iVar17) || (iVar10 < iVar18)) {
            *(int *)(param_1 + 1) = iVar10;
          }
          *(undefined1 *)(*param_1 + (long)iVar17) = 0;
          __dest = (void *)(*param_1 + (long)iVar8 + -1);
          iVar8 = (int)param_1[1] - iVar8;
          goto LAB_031c9b74;
        }
      }
      local_120 = 0;
      if ((-1 < local_11c) && (local_128 != (undefined8 **)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      if ((local_80 & 1) != 0) {
        plVar13 = (long *)(local_80 & 0xfffffffffffffffe);
        plVar3 = plVar13 + 1;
        do {
          lVar27 = *plVar3;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar9) {
            *(int *)plVar3 = (int)lVar27 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((plVar13 != (long *)0x0) && ((int)lVar27 == 1)) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      local_78[0] = 0;
      goto LAB_031c9be4;
    }
    if (DAT_04883320 == '\0') goto LAB_031c9be4;
    local_128 = (undefined8 **)0x0;
    local_118 = &DAT_048832d0;
    uStack_110 = 1;
    pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
    local_108 = nn::os::GetThreadId(pTVar11);
    local_e0 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Container/String/hkStringBuf.cpp"
    ;
    uStack_e8 = 0x494;
    FUN_0322c554(&local_128,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_046a43e8,
                 "hkMath::abs(width) > 256",local_78);
    FUN_0322c554(&local_128,"Width field too large",PTR_DAT_047d1b38);
    FUN_0322c8e0(&local_128);
  }
  if ((local_100 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_100 - 1,0);
  }
LAB_031c9be4:
  uVar19 = local_78[0];
  if ((int)local_78[0] < 0) goto LAB_031c9c60;
  if ((-1 < (int)local_180) && ((int)local_180 < (int)(uint)local_140)) {
    local_148[local_180] = 1;
  }
  local_154 = local_180 + 1;
  goto LAB_031c8d1c;
LAB_031c9c18:
  if (0 < (int)(uint)local_140) {
    uVar26 = 0;
    do {
      if (local_148[uVar26] == '\0') {
        if (-1 < (int)uVar26) {
          uVar19 = 0x80048005;
          goto LAB_031c9c60;
        }
        break;
      }
      uVar26 = uVar26 + 1;
    } while ((local_140 & 0xffffffff) != uVar26);
  }
  uVar19 = 0;
LAB_031c9c60:
  uVar26 = local_140;
  local_140 = local_140 & 0xffffffff00000000;
  if ((-1 < (long)uVar26) && (local_148 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
  }
  return uVar19;
}


