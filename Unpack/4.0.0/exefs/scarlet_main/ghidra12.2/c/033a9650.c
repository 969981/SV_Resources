/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033a9650; name: FUN_033a9650
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_033a9650(long param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  long *plVar12;
  long *plVar13;
  ThreadType *pTVar14;
  longlong lVar15;
  size_t sVar16;
  undefined1 uVar17;
  uint uVar18;
  long lVar19;
  ulong *puVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 uVar24;
  ulong uVar25;
  char *pcVar26;
  ulong *puVar27;
  long lVar28;
  char *local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  char local_180 [260];
  int local_7c;
  byte *local_78;
  byte *pbStack_70;
  
  local_78 = (byte *)0x0;
  pbStack_70 = (byte *)0x0;
  iVar8 = FUN_033b2c50(param_2,&DAT_03c12387,&local_78);
  if (iVar8 < 0) {
    return 0x80040200;
  }
  if ((local_78 != pbStack_70) && (*local_78 == 0x22)) {
    local_78 = local_78 + 1;
    pbStack_70 = pbStack_70 + -1;
  }
  if ((ulong)((long)pbStack_70 - (long)local_78) < 6) {
    return 0x80040200;
  }
  if (*(int *)local_78 != 0x656a626f || *(short *)(local_78 + 4) != 0x7463) {
    return 0x80040200;
  }
  pbVar1 = local_78 + 6;
  uVar25 = (long)pbStack_70 - (long)pbVar1;
  if ((int)uVar25 < 1) {
    return 0x80040200;
  }
  pbVar21 = local_78 + 7;
  if (local_78[6] != 0x2d) {
    pbVar21 = pbVar1;
  }
  if (pbStack_70 <= pbVar21) {
    return 0x80040200;
  }
  bVar4 = *pbVar21;
  while( true ) {
    if (9 < bVar4 - 0x30) {
      return 0x80040200;
    }
    pbVar21 = pbVar21 + 1;
    if (pbStack_70 <= pbVar21) break;
    bVar4 = *pbVar21;
  }
  local_78 = pbVar1;
  if (0 < (int)uVar25) {
    strncpy((char *)&local_1d0,(char *)pbVar1,uVar25 & 0xffffffff);
  }
  local_180[uVar25 - 0x50] = '\0';
  lVar10 = strtoll((char *)&local_1d0,(char **)0x0,0);
  local_78 = (byte *)0x0;
  pbStack_70 = (byte *)0x0;
  iVar8 = FUN_033b2c50(param_2,"typeid",&local_78);
  if (iVar8 < 0) {
    return 0x80040200;
  }
  if ((local_78 != pbStack_70) && (*local_78 == 0x22)) {
    local_78 = local_78 + 1;
    pbStack_70 = pbStack_70 + -1;
  }
  if ((ulong)((long)pbStack_70 - (long)local_78) < 4) {
    return 0x80040200;
  }
  if (*(int *)local_78 != 0x65707974) {
    return 0x80040200;
  }
  pbVar1 = local_78 + 4;
  uVar25 = (long)pbStack_70 - (long)pbVar1;
  if ((int)uVar25 < 1) {
    return 0x80040200;
  }
  pbVar21 = local_78 + 5;
  if (local_78[4] != 0x2d) {
    pbVar21 = pbVar1;
  }
  if (pbStack_70 <= pbVar21) {
    return 0x80040200;
  }
  bVar4 = *pbVar21;
  while( true ) {
    if (9 < bVar4 - 0x30) {
      return 0x80040200;
    }
    pbVar21 = pbVar21 + 1;
    if (pbStack_70 <= pbVar21) break;
    bVar4 = *pbVar21;
  }
  local_78 = pbVar1;
  if (0 < (int)uVar25) {
    strncpy((char *)&local_1d0,(char *)pbVar1,uVar25 & 0xffffffff);
  }
  local_180[uVar25 - 0x50] = '\0';
  lVar11 = strtoll((char *)&local_1d0,(char **)0x0,0);
  local_7c = 0;
  if ((param_3 & 1) == 0) {
    pcVar26 = "object";
LAB_033a99ec:
    iVar8 = FUN_033a6b98(param_2,pcVar26);
    if (iVar8 < 0) {
      return 0;
    }
    iVar8 = (int)lVar10;
    do {
      puVar27 = *(ulong **)(*(long *)(param_1 + 0x68) + (long)(int)lVar11 * 8);
      puVar20 = puVar27;
      do {
        uVar18 = (uint)*puVar20;
        if ((uVar18 >> 0x13 & 1) != 0) {
          uVar25 = CONCAT44(uVar18,uVar18) & 0x7ffff0007ffff;
          plVar12 = (long *)puVar20[(ulong)(byte)(POPCOUNT((char)uVar25) +
                                                  POPCOUNT((char)(uVar25 >> 8)) +
                                                 POPCOUNT((char)(uVar25 >> 0x10))) + 2];
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x10))(&local_1d0,plVar12,puVar27);
            goto LAB_033a9a88;
          }
          break;
        }
        puVar20 = (ulong *)puVar20[1];
      } while (puVar20 != (ulong *)0x0);
      local_1c8 = 0;
      local_1c0 = (undefined8 *)0x0;
      local_1d0 = (char *)0x0;
LAB_033a9a88:
      iVar9 = local_7c;
      pcVar7 = local_1d0;
      if (local_7c == 0) {
        iVar9 = *(int *)(param_1 + 0x80);
        iVar2 = iVar9;
        if (iVar9 <= iVar8 + 1) {
          iVar2 = iVar8 + 1;
        }
        if ((int)(*(uint *)(param_1 + 0x84) & 0x7fffffff) < iVar2) {
          FUN_033277d4(param_1 + 0x78,PTR_PTR_047d1a50,(long)iVar2);
          iVar9 = *(int *)(param_1 + 0x80);
        }
        if (iVar9 < iVar2) {
          *(int *)(param_1 + 0x80) = iVar2;
          puVar22 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar9 * 0x18);
          lVar19 = (long)iVar2 * 0x18 + (long)iVar9 * -0x18;
          do {
            *(undefined4 *)((long)puVar22 + 0x14) = 0;
            lVar19 = lVar19 + -0x18;
            *(undefined1 *)(puVar22 + 2) = 0;
            *puVar22 = 0;
            puVar22[1] = 0;
            puVar22 = puVar22 + 3;
          } while (lVar19 != 0);
        }
        else if (iVar2 < iVar9) {
          uVar17 = 0;
          iVar9 = 0;
          *(int *)(param_1 + 0x80) = iVar2;
          goto LAB_033a9bc4;
        }
        uVar17 = 0;
        iVar9 = 0;
LAB_033a9bc4:
        lVar19 = *(long *)(param_1 + 0x78);
      }
      else {
        iVar23 = *(int *)(param_1 + 0x80);
        iVar2 = iVar8;
        if (iVar8 <= local_7c) {
          iVar2 = local_7c;
        }
        iVar3 = iVar23;
        if (iVar23 <= iVar2 + 1) {
          iVar3 = iVar2 + 1;
        }
        if ((int)(*(uint *)(param_1 + 0x84) & 0x7fffffff) < iVar3) {
          FUN_033277d4(param_1 + 0x78,PTR_PTR_047d1a50,(long)iVar3);
          iVar23 = *(int *)(param_1 + 0x80);
        }
        if (iVar23 < iVar3) {
          *(int *)(param_1 + 0x80) = iVar3;
          puVar22 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar23 * 0x18);
          lVar19 = (long)iVar3 * 0x18 + (long)iVar23 * -0x18;
          do {
            *(undefined4 *)((long)puVar22 + 0x14) = 0;
            lVar19 = lVar19 + -0x18;
            *(undefined1 *)(puVar22 + 2) = 0;
            *puVar22 = 0;
            puVar22[1] = 0;
            puVar22 = puVar22 + 3;
          } while (lVar19 != 0);
        }
        else if (iVar3 < iVar23) {
          *(int *)(param_1 + 0x80) = iVar3;
        }
        lVar19 = *(long *)(param_1 + 0x78);
        if (*(long *)(lVar19 + (long)iVar9 * 0x18) == 0) {
          *(int *)(lVar19 + (long)iVar9 * 0x18 + 0x14) = iVar8;
          uVar17 = 2;
          goto LAB_033a9bc4;
        }
        uVar17 = 2;
      }
      puVar22 = (undefined8 *)(lVar19 + (long)iVar8 * 0x18);
      uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)(int)lVar11 * 8);
      *(undefined1 *)(puVar22 + 2) = uVar17;
      *puVar22 = pcVar7;
      puVar22[1] = uVar24;
      *(int *)((long)puVar22 + 0x14) = iVar9;
      while( true ) {
        uVar18 = (uint)*puVar27;
        if ((uVar18 >> 0x14 & 1) != 0) break;
        if (((*puVar27 & 1) != 0) || (puVar27 = (ulong *)puVar27[1], puVar27 == (ulong *)0x0))
        goto LAB_033a9c28;
      }
      if (puVar27 != (ulong *)0x0) {
        uVar18 = uVar18 & 0xfffff;
        sVar16 = (size_t)(ushort)puVar27[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                       POPCOUNT((char)(uVar18 >> 8)) +
                                                      POPCOUNT((char)(uVar18 >> 0x10))) + 2];
        goto LAB_033a9c2c;
      }
LAB_033a9c28:
      sVar16 = 0;
LAB_033a9c2c:
      memset(local_1d0,0,sVar16);
      iVar9 = FUN_033a9f5c(param_1,param_2,&local_1d0);
      if (iVar9 < 0) {
        if (((ulong)local_1c0 & 1) == 0) {
          return 0x80040200;
        }
        plVar13 = (long *)((ulong)local_1c0 & 0xfffffffffffffffe);
        plVar12 = plVar13 + 1;
        do {
          lVar19 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *(int *)plVar12 = (int)lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (plVar13 == (long *)0x0) {
          return 0x80040200;
        }
        if ((int)lVar19 == 1) {
          (**(code **)(*plVar13 + 8))();
          return 0x80040200;
        }
        return 0x80040200;
      }
      if (((ulong)local_1c0 & 1) != 0) {
        plVar13 = (long *)((ulong)local_1c0 & 0xfffffffffffffffe);
        plVar12 = plVar13 + 1;
        do {
          lVar19 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *(int *)plVar12 = (int)lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar13 != (long *)0x0) && ((int)lVar19 == 1)) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      iVar9 = FUN_033a6b98(param_2,pcVar26);
      if (iVar9 < 0) {
        return 0;
      }
    } while( true );
  }
  uVar18 = *(uint *)(param_2 + 0x24);
  uVar25 = (ulong)(uVar18 & 0xfbcfa9e);
  lVar28 = *(long *)(param_2 + 0x18);
  lVar19 = *(long *)(lVar28 + uVar25 * 0x18);
  while (lVar19 != -1) {
    if ((lVar19 == 0xfbcfa9e) &&
       (iVar8 = strcmp("annotates",*(char **)(lVar28 + uVar25 * 0x18 + 8)), iVar8 == 0))
    goto LAB_033a990c;
    uVar25 = uVar25 + 1 & (long)(int)uVar18;
    lVar19 = *(long *)(lVar28 + uVar25 * 0x18);
  }
  uVar25 = (ulong)(uVar18 + 1);
LAB_033a990c:
  if (((int)uVar25 <= (int)uVar18) && (-1 < *(int *)(lVar28 + (long)(int)uVar25 * 0x18 + 0x10))) {
    local_78 = (byte *)0x0;
    pbStack_70 = (byte *)0x0;
    iVar8 = FUN_033b2c50(param_2,"annotates",&local_78);
    if (iVar8 < 0) {
      return 0x80040200;
    }
    if ((local_78 != pbStack_70) && (*local_78 == 0x22)) {
      local_78 = local_78 + 1;
      pbStack_70 = pbStack_70 + -1;
    }
    if ((ulong)((long)pbStack_70 - (long)local_78) < 6) {
      return 0x80040200;
    }
    if (*(int *)local_78 != 0x656a626f || *(short *)(local_78 + 4) != 0x7463) {
      return 0x80040200;
    }
    pbVar1 = local_78 + 6;
    uVar25 = (long)pbStack_70 - (long)pbVar1;
    if ((int)uVar25 < 1) {
      return 0x80040200;
    }
    pbVar21 = local_78 + 7;
    if (local_78[6] != 0x2d) {
      pbVar21 = pbVar1;
    }
    if (pbStack_70 <= pbVar21) {
      return 0x80040200;
    }
    bVar4 = *pbVar21;
    while( true ) {
      if (9 < bVar4 - 0x30) {
        return 0x80040200;
      }
      pbVar21 = pbVar21 + 1;
      if (pbStack_70 <= pbVar21) break;
      bVar4 = *pbVar21;
    }
    local_78 = pbVar1;
    if (0 < (int)uVar25) {
      strncpy((char *)&local_1d0,(char *)pbVar1,uVar25 & 0xffffffff);
    }
    local_180[uVar25 - 0x50] = '\0';
    lVar15 = strtoll((char *)&local_1d0,(char **)0x0,0);
    pcVar26 = "note";
    local_7c = (int)lVar15;
    goto LAB_033a99ec;
  }
  local_78 = (byte *)0x0;
  pbStack_70 = (byte *)0x0;
  iVar8 = FUN_033b2c50(param_2,&DAT_03c12387,&local_78);
  if (iVar8 < 0) {
    return 0x80040200;
  }
  if ((local_78 != pbStack_70) && (*local_78 == 0x22)) {
    local_78 = local_78 + 1;
    pbStack_70 = pbStack_70 + -1;
  }
  if ((ulong)((long)pbStack_70 - (long)local_78) < 4) {
    return 0x80040200;
  }
  if (*(int *)local_78 != 0x65746f6e) {
    return 0x80040200;
  }
  pbVar1 = local_78 + 4;
  uVar25 = (long)pbStack_70 - (long)pbVar1;
  if ((int)uVar25 < 1) {
    return 0x80040200;
  }
  pbVar21 = local_78 + 5;
  if (local_78[4] != 0x2d) {
    pbVar21 = pbVar1;
  }
  if (pbStack_70 <= pbVar21) {
    return 0x80040200;
  }
  bVar4 = *pbVar21;
  while( true ) {
    if (9 < bVar4 - 0x30) {
      return 0x80040200;
    }
    pbVar21 = pbVar21 + 1;
    if (pbStack_70 <= pbVar21) break;
    bVar4 = *pbVar21;
  }
  local_78 = pbVar1;
  if (0 < (int)uVar25) {
    strncpy((char *)&local_1d0,(char *)pbVar1,uVar25 & 0xffffffff);
  }
  local_180[uVar25 - 0x50] = '\0';
  lVar10 = strtoll((char *)&local_1d0,(char **)0x0,0);
  local_7c = (int)lVar10;
  if (DAT_0488e218 < 2) {
    if (DAT_046aaf68 == '\0') {
      return 0x80040200;
    }
  }
  else if (DAT_046aaf68 == '\0') {
    local_1d0 = (char *)0x0;
    local_1c0 = &DAT_0488e1c8;
    uStack_1b8 = 2;
    pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
    local_1b0 = nn::os::GetThreadId(pTVar14);
    local_1a8 = (char *)0x0;
    local_1a0 = 0;
    local_198 = (char *)0x0;
    local_190 = 0;
    uStack_188 = 0;
    FUN_0322c554(&local_1d0,
                 "Found deprecated note \'note{}\'. Must be assigned an explicit unique id and an \'annotates\' attribute, e.g. \'<note id=\"object99\" annotates=\"object{}\">\'"
                 ,&DAT_044e9030,&local_7c,&local_7c);
    local_198 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
    ;
    local_190 = 0x3b0;
    FUN_0322c8e0(&local_1d0);
    goto LAB_033a9e40;
  }
  local_1c0 = &DAT_0488e1c8;
  uStack_1b8 = 2;
  pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
  local_1b0 = nn::os::GetThreadId(pTVar14);
  local_1a0 = 0;
  local_198 = (char *)0x0;
  local_180[0] = '\0';
  local_190 = 0;
  uStack_188 = 0;
  local_1c8 = 0x10000000000;
  local_1d0 = local_180;
  local_1a8 = local_180;
  FUN_0322c554(&local_1d0,
               "Found deprecated note \'note{}\'. Must be assigned an explicit unique id and an \'annotates\' attribute, e.g. \'<note id=\"object99\" annotates=\"object{}\">\'"
               ,&DAT_044e9030,&local_7c,&local_7c);
  local_198 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
  ;
  local_190 = 0x3b0;
  if (local_180[0] != '\0') {
    sVar16 = strlen(local_180);
    (local_180 + (int)((int)sVar16 - (uint)((int)sVar16 == 0xff)))[0] = '\n';
    (local_180 + (int)((int)sVar16 - (uint)((int)sVar16 == 0xff)))[1] = '\0';
    printf("%s",local_180);
    fflush(*(FILE **)PTR_stdout_047cb860);
  }
LAB_033a9e40:
  if (((ulong)local_1a8 & 1) == 0) {
    return 0x80040200;
  }
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1a8 + -1,0);
  return 0x80040200;
}


