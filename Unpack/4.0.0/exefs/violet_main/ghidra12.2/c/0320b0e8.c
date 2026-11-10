/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0320b0e8; name: FUN_0320b0e8
 */


long * FUN_0320b0e8(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  MutexType *pMVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ThreadType *pTVar12;
  long *plVar13;
  size_t sVar14;
  undefined *extraout_x1;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  code *pcVar20;
  long lVar21;
  FILE *__stream;
  long lVar22;
  ulong *puVar23;
  ulong *puVar24;
  long lVar25;
  long *plVar26;
  ulong *puVar27;
  int iVar28;
  long *plVar29;
  int iVar30;
  long local_1208;
  undefined8 local_1200;
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  long local_11d8;
  undefined8 local_11d0;
  long *local_11c8;
  long *local_11c0;
  int local_11b8;
  undefined8 local_11b4;
  undefined8 *local_11a8;
  char **ppcStack_11a0;
  undefined *local_1198;
  undefined8 **local_1190;
  char *local_1188;
  undefined4 local_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  char *local_1168;
  long lStack_1160;
  long local_1158;
  ulong local_1150;
  long local_1148;
  long lStack_1140;
  ulong local_1138;
  long *local_1130;
  undefined *local_1128;
  long *local_1120;
  undefined8 local_1118;
  undefined *local_1110;
  undefined **ppuStack_1108;
  ulong **local_1100;
  long lStack_10f8;
  ulong local_10f0;
  long local_10e8;
  ulong *local_10e0;
  ulong local_10d8;
  undefined4 local_1070;
  ulong *local_1068;
  undefined8 uStack_1060;
  undefined8 *local_1058;
  undefined8 local_1050;
  undefined8 local_1048;
  ulong *local_1040;
  undefined8 local_1038;
  char *local_1030;
  undefined8 local_1028;
  undefined8 local_1020;
  ulong local_1018 [467];
  char *local_180;
  undefined8 uStack_178;
  undefined8 *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  char local_130 [232];
  
  if (*param_3 == 0) {
    if (DAT_04884f08 < 2) {
      if (DAT_046aaf68 == '\0') goto LAB_0320b1d4;
LAB_0320b1f0:
      local_170 = &DAT_04884eb8;
      uStack_168 = 2;
      pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
      local_160 = nn::os::GetThreadId(pTVar12);
      local_150 = 0;
      local_148 = (char *)0x0;
      local_140 = 0;
      uStack_138 = 0;
      local_130[0] = '\0';
      uStack_178 = 0x10000000000;
      local_180 = local_130;
      local_158 = local_130;
      param_2 = (long *)FUN_0322c554(&local_180,"Attempting to clone a null var",PTR_DAT_047d1b38);
      local_148 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      local_140 = 0x33d;
      if (local_130[0] != '\0') {
        sVar14 = strlen(local_130);
        (local_130 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[0] = '\n';
        (local_130 + (int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))[1] = '\0';
        printf("%s",local_130);
        uVar8 = fflush(*(FILE **)PTR_stdout_047cb860);
        param_2 = (long *)(ulong)uVar8;
      }
    }
    else {
      if (DAT_046aaf68 != '\0') goto LAB_0320b1f0;
      local_180 = (char *)0x0;
      local_170 = &DAT_04884eb8;
      uStack_168 = 2;
      pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
      local_160 = nn::os::GetThreadId(pTVar12);
      local_158 = (char *)0x0;
      local_150 = 0;
      local_148 = (char *)0x0;
      local_140 = 0;
      uStack_138 = 0;
      FUN_0322c554(&local_180,"Attempting to clone a null var",PTR_DAT_047d1b38);
      local_148 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      local_140 = 0x33d;
      param_2 = (long *)FUN_0322c8e0(&local_180);
    }
    if (((ulong)local_158 & 1) != 0) {
      param_2 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,local_158 + -1,0);
    }
LAB_0320b1d4:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return param_2;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar9 = (undefined8 *)*param_2;
  lVar25 = tpidr_el0;
  lVar15 = *(long *)(lVar25 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar25 + 0x1000b8) = lVar15;
  }
  plVar29 = *(long **)(lVar15 + 0x3e0);
  if (plVar29 != (long *)0x0) {
    lVar15 = *plVar29;
    if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
      (**(code **)(lVar15 + 0x18))("Reflect.Clone",0xd,*(undefined8 *)(lVar15 + 0x28));
      if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
        (**(code **)(lVar15 + 0x18))("Start",5,*(undefined8 *)(lVar15 + 0x28));
      }
    }
    puVar18 = (undefined8 *)plVar29[2];
    uVar16 = (long)puVar18 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)plVar29[3]) && (plVar29[2] = uVar16, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = "LtReflect.Clone";
      puVar18[2] = "StStart";
      uVar10 = nn::os::GetSystemTick();
      puVar18[1] = uVar10;
    }
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar29[6] != 0)) {
      puVar18 = (undefined8 *)plVar29[2];
      uVar16 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar29[3]) && (plVar29[2] = uVar16, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(plVar29[6] + 8);
      }
    }
  }
  lStack_1160 = *param_1;
  local_1158 = param_1[1];
  local_1168 = "clone dst={} src={}";
  local_1150 = param_1[2];
  if ((local_1150 & 1) != 0) {
    piVar1 = (int *)((local_1150 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_1148 = *param_3;
  lStack_1140 = param_3[1];
  local_1138 = param_3[2];
  if ((local_1138 & 1) != 0) {
    piVar1 = (int *)((local_1138 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar7 = PTR_DAT_047e5e20;
  ppcStack_11a0 = &local_1168;
  local_11a8 = &DAT_04884eb8;
  local_1188 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
  ;
  local_1180 = 0xc3;
  local_1198 = &DAT_046a9088;
  local_1178 = 0;
  uStack_1170 = 0x8000000000000000;
  local_1130 = plVar29;
  if (DAT_046aaf68 == '\0') {
    iVar28 = *(int *)PTR_DAT_047e5e20;
    lVar17 = (long)iVar28;
    lVar15 = *(long *)(lVar25 + 0x1000b8);
    if (lVar15 == 0) {
      lVar15 = FUN_00e5d3b4();
      *(long *)(lVar25 + 0x1000b8) = lVar15;
      iVar28 = *(int *)puVar7;
      local_1190 = *(undefined8 ***)(lVar15 + lVar17 * 8 + 1000);
      if (lVar15 == 0) {
        lVar15 = FUN_00e5d3b4();
        *(long *)(lVar25 + 0x1000b8) = lVar15;
      }
    }
    else {
      local_1190 = *(undefined8 ***)(lVar15 + lVar17 * 8 + 1000);
    }
    *(undefined8 ***)(lVar15 + (long)iVar28 * 8 + 1000) = &local_11a8;
  }
  else {
    local_1190 = &local_11a8;
  }
  local_11d8 = 0;
  local_11d0 = 0x8000000000000000;
  local_11b8 = 0;
  local_11b4 = 0x80000000;
  local_11c8 = (long *)0x0;
  local_11c0 = (long *)0x0;
  lVar15 = puVar9[6];
  if (lVar15 == 0) {
    puVar9[6] = &local_11d8;
  }
  (**(code **)(*param_4 + 0x30))(param_4,puVar9 + 2);
  *puVar9 = param_4;
  lVar17 = *(long *)(lVar25 + 0x1000b8);
  if (lVar17 == 0) {
    lVar17 = FUN_00e5d3b4();
    *(long *)(lVar25 + 0x1000b8) = lVar17;
  }
  plVar29 = *(long **)(lVar17 + 0x3e0);
  if (plVar29 != (long *)0x0) {
    lVar17 = *plVar29;
    if (((*(byte *)(lVar17 + 0x38) & 1) != 0) && (plVar29[6] != 0)) {
      puVar18 = (undefined8 *)plVar29[2];
      uVar16 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar29[3]) && (plVar29[2] = uVar16, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(plVar29[6] + 8);
      }
    }
    puVar18 = (undefined8 *)plVar29[2];
    uVar16 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)plVar29[3]) && (plVar29[2] = uVar16, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = "StClone";
      uVar10 = nn::os::GetSystemTick();
      puVar18[1] = uVar10;
    }
    if (*(code **)(lVar17 + 0x20) != (code *)0x0) {
      (**(code **)(lVar17 + 0x20))(*(undefined8 *)(lVar17 + 0x28));
    }
    if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
      (**(code **)(lVar17 + 0x18))("Clone",5,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  local_11e8 = 0;
  uStack_11e0 = 0;
  local_11f8 = 0;
  uStack_11f0 = 0;
  local_1208 = 0;
  local_1200 = 0x8000000000000000;
  FUN_032107fc(&local_1208,1);
  lVar22 = local_1208;
  plVar29 = (long *)(local_1208 + (long)(int)local_1200 * 0x30);
  lVar17 = param_1[1];
  *plVar29 = *param_1;
  plVar29[1] = lVar17;
  uVar16 = param_1[2];
  plVar29[2] = uVar16;
  if ((uVar16 & 1) != 0) {
    piVar1 = (int *)((uVar16 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar21 = local_1208 + (long)(int)local_1200 * 0x30;
  lVar17 = param_3[1];
  *(long *)(lVar21 + 0x18) = *param_3;
  *(long *)(lVar21 + 0x20) = lVar17;
  uVar16 = param_3[2];
  *(ulong *)(lVar21 + 0x28) = uVar16;
  if ((uVar16 & 1) != 0) {
    piVar1 = (int *)((uVar16 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_1200 = CONCAT44(local_1200._4_4_,1);
  plVar29 = puVar9 + 7;
  iVar28 = *(int *)(puVar9 + 8);
  lVar17 = (long)iVar28;
  if ((int)(*(uint *)((long)puVar9 + 0x44) & 0x7fffffff) <= iVar28) {
    FUN_032107fc(plVar29,lVar17 + 1);
    iVar28 = *(int *)(puVar9 + 8);
  }
  puVar18 = (undefined8 *)(puVar9[7] + (long)iVar28 * 0x30);
  *puVar18 = local_11e8;
  puVar18[1] = uStack_11e0;
  puVar18[4] = uStack_11f0;
  puVar18[5] = 0;
  puVar18[2] = 0;
  puVar18[3] = local_11f8;
  *(int *)(puVar9 + 8) = (int)(lVar17 + 1);
  iVar30 = 1;
  FUN_0320f220(puVar9,param_1,param_3,1);
  iVar28 = *(int *)(puVar9 + 8);
  if (iVar28 != 0) {
    __stream = *(FILE **)PTR_stdout_047cb860;
    iVar30 = 1;
    uVar8 = 1;
LAB_0320b6fc:
    if (-1 < *(int *)(puVar9 + 1)) goto code_r0x0320b704;
    lVar17 = *plVar29;
    lVar22 = lVar17 + (long)iVar28 * 0x30;
    do {
      if ((*(ulong *)(lVar22 + -8) & 1) != 0) {
        plVar26 = (long *)(*(ulong *)(lVar22 + -8) & 0xfffffffffffffffe);
        plVar29 = plVar26 + 1;
        do {
          lVar21 = *plVar29;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar6) {
            *(int *)plVar29 = (int)lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar26 != (long *)0x0) && ((int)lVar21 == 1)) {
          (**(code **)(*plVar26 + 8))();
        }
      }
      puVar27 = (ulong *)(lVar22 + -0x20);
      lVar22 = lVar22 + -0x30;
      if ((*puVar27 & 1) != 0) {
        plVar26 = (long *)(*puVar27 & 0xfffffffffffffffe);
        plVar29 = plVar26 + 1;
        do {
          lVar21 = *plVar29;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar6) {
            *(int *)plVar29 = (int)lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar26 != (long *)0x0) && ((int)lVar21 == 1)) {
          (**(code **)(*plVar26 + 8))();
        }
      }
    } while (lVar22 != lVar17);
    goto LAB_0320bcac;
  }
  uVar8 = 1;
LAB_0320bcac:
  *(undefined4 *)(puVar9 + 8) = 0;
  lVar17 = *(long *)(lVar25 + 0x1000b8);
  if (lVar17 == 0) {
    lVar17 = FUN_00e5d3b4();
    *(long *)(lVar25 + 0x1000b8) = lVar17;
  }
  lVar22 = *(long *)(lVar17 + 0x3e0);
  if (lVar22 != 0) {
    puVar18 = *(undefined8 **)(lVar22 + 0x10);
    uVar16 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= *(ulong *)(lVar22 + 0x18)) &&
       (*(ulong *)(lVar22 + 0x10) = uVar16, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = "MiNumClones";
      *(float *)(puVar18 + 1) = (float)uVar8;
      lVar17 = *(long *)(lVar25 + 0x1000b8);
    }
  }
  if (lVar17 == 0) {
    lVar17 = FUN_00e5d3b4();
    *(long *)(lVar25 + 0x1000b8) = lVar17;
  }
  plVar29 = *(long **)(lVar17 + 0x3e0);
  if (plVar29 != (long *)0x0) {
    lVar17 = *plVar29;
    if (((*(byte *)(lVar17 + 0x38) & 1) != 0) && (plVar29[6] != 0)) {
      puVar18 = (undefined8 *)plVar29[2];
      uVar16 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar29[3]) && (plVar29[2] = uVar16, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(plVar29[6] + 8);
      }
    }
    puVar18 = (undefined8 *)plVar29[2];
    uVar16 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)plVar29[3]) && (plVar29[2] = uVar16, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = "StEnd";
      uVar10 = nn::os::GetSystemTick();
      puVar18[1] = uVar10;
    }
    if (*(code **)(lVar17 + 0x20) != (code *)0x0) {
      (**(code **)(lVar17 + 0x20))(*(undefined8 *)(lVar17 + 0x28));
    }
    if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
      (**(code **)(lVar17 + 0x18))("End",3,*(undefined8 *)(lVar17 + 0x28));
    }
  }
  (**(code **)(*param_4 + 0x38))(param_4,puVar9 + 1);
  if (*(int *)(puVar9 + 1) < 0) {
    if (DAT_04884f08 < 2) {
      if (DAT_046aaf68 != '\0') goto LAB_0320c9a4;
    }
    else {
      if (DAT_046aaf68 == '\0') {
        local_1058 = &DAT_04884eb8;
        local_1068 = (ulong *)0x0;
        local_1050 = 2;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_1048 = nn::os::GetThreadId(pTVar12);
        local_1040 = (ulong *)0x0;
        local_1038 = 0;
        local_1030 = (char *)0x0;
        local_1028 = 0;
        local_1020 = 0;
        FUN_0322c554(&local_1068,"Unable to clone object {} or one of its dependencies",
                     PTR_DAT_047e5e28,param_3);
        local_1030 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        local_1028 = 0x134;
        FUN_0322c8e0(&local_1068);
      }
      else {
LAB_0320c9a4:
        local_1058 = &DAT_04884eb8;
        local_1068 = (ulong *)0x0;
        local_1050 = 2;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_1048 = nn::os::GetThreadId(pTVar12);
        local_1038 = 0;
        local_1030 = (char *)0x0;
        local_1028 = 0;
        local_1020 = 0;
        local_1018[0]._0_1_ = '\0';
        uStack_1060 = 0x10000000000;
        local_1068 = local_1018;
        local_1040 = local_1018;
        FUN_0322c554(&local_1068,"Unable to clone object {} or one of its dependencies",
                     PTR_DAT_047e5e28,param_3);
        local_1028 = 0x134;
        local_1030 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        if ((char)local_1018[0] != '\0') {
          sVar14 = strlen((char *)local_1018);
          *(undefined2 *)((long)local_1018 + (long)(int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))
               = 10;
          printf("%s",local_1018);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      if (((ulong)local_1040 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1040 + -1),0);
      }
    }
    uVar16 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((uVar16 & 1) != 0) {
      plVar26 = (long *)(uVar16 & 0xfffffffffffffffe);
      plVar29 = plVar26 + 1;
      do {
        lVar25 = *plVar29;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar6) {
          *(int *)plVar29 = (int)lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar26 != (long *)0x0) && ((int)lVar25 == 1)) {
        (**(code **)(*plVar26 + 8))();
      }
    }
LAB_0320bfe8:
    if (lVar15 != 0) goto LAB_0320c1cc;
  }
  else {
    if (*(int *)(puVar9[6] + 0x28) != 0) goto LAB_0320bfe8;
    lVar17 = *(long *)(lVar25 + 0x1000b8);
    if (lVar17 == 0) {
      lVar17 = FUN_00e5d3b4();
      *(long *)(lVar25 + 0x1000b8) = lVar17;
    }
    plVar29 = *(long **)(lVar17 + 0x3e0);
    if (plVar29 != (long *)0x0) {
      lVar17 = *plVar29;
      if (((*(byte *)(lVar17 + 0x38) & 1) != 0) && (plVar29[6] != 0)) {
        puVar18 = (undefined8 *)plVar29[2];
        uVar16 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
        if ((uVar16 <= (ulong)plVar29[3]) && (plVar29[2] = uVar16, puVar18 != (undefined8 *)0x0)) {
          *puVar18 = &DAT_03c4e575;
          puVar18[1] = *(undefined8 *)(plVar29[6] + 8);
        }
      }
      puVar18 = (undefined8 *)plVar29[2];
      uVar16 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar29[3]) && (plVar29[2] = uVar16, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = "StAfterReflectNew";
        uVar10 = nn::os::GetSystemTick();
        puVar18[1] = uVar10;
      }
      if (*(code **)(lVar17 + 0x20) != (code *)0x0) {
        (**(code **)(lVar17 + 0x20))(*(undefined8 *)(lVar17 + 0x28));
      }
      if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
        (**(code **)(lVar17 + 0x18))("AfterReflectNew",0xf,*(undefined8 *)(lVar17 + 0x28));
      }
    }
    puVar27 = (ulong *)param_1[1];
    if (puVar27 != (ulong *)0x0) {
      lVar17 = *param_1;
      if (puVar27 == (ulong *)PTR_DAT_047ddc28) {
LAB_0320c088:
        uVar16 = 0;
        do {
          uVar8 = (uint)*puVar27;
          if ((uVar8 >> 0x15 & 1) == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = CONCAT44(uVar8,uVar8) & 0x1fffff001fffff;
            uVar19 = puVar27[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                          POPCOUNT((char)(uVar19 >> 0x10))) + 2];
          }
          uVar16 = uVar19 | uVar16;
        } while (((*puVar27 & 1) == 0) && (puVar27 = (ulong *)puVar27[1], puVar27 != (ulong *)0x0));
        if ((lVar17 != 0) && (((uint)uVar16 >> 3 & 1) == 0)) {
          lVar22 = puVar9[6];
          if (*(long *)(lVar17 + 8) != 0) {
            plVar29 = (long *)(lVar17 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar6) {
                *plVar29 = *plVar29 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plVar29 = *(long **)(lVar22 + 0x10);
          *(long *)(lVar22 + 0x10) = lVar17;
          if ((plVar29 != (long *)0x0) && (plVar29[1] != 0)) {
            plVar26 = plVar29 + 2;
            do {
              lVar17 = *plVar26;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar6) {
                *plVar26 = lVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar17 + -1 == 0) {
              (**(code **)(*plVar29 + 0x18))();
            }
          }
        }
      }
      else {
        local_1068 = puVar27;
        while( true ) {
          uVar8 = (uint)*local_1068;
          if ((uVar8 >> 0xd & 1) != 0) break;
          if (((*local_1068 & 1) != 0) ||
             (local_1068 = (ulong *)local_1068[1], local_1068 == (ulong *)0x0)) goto LAB_0320c024;
        }
        if (local_1068 != (ulong *)0x0) {
          uVar16 = CONCAT44(uVar8,uVar8) & 0x1fff00001fff;
          local_1068 = local_1068 +
                       (ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8))) + 2;
          goto LAB_0320c02c;
        }
LAB_0320c024:
        local_1068 = (ulong *)0x0;
LAB_0320c02c:
        puVar23 = (ulong *)PTR_DAT_047ddc28;
        while( true ) {
          uVar8 = (uint)*puVar23;
          if ((uVar8 >> 0xd & 1) != 0) break;
          if (((*puVar23 & 1) != 0) || (puVar23 = (ulong *)puVar23[1], puVar23 == (ulong *)0x0))
          goto LAB_0320c130;
        }
        if (puVar23 != (ulong *)0x0) {
          uVar16 = CONCAT44(uVar8,uVar8) & 0x1fff00001fff;
          local_1100 = (ulong **)
                       (puVar23 +
                       (ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8))) + 2);
          if (local_1068 == (ulong *)0x0) goto LAB_0320c134;
          uVar16 = FUN_031dd354(&local_1068,&local_1100);
          if ((uVar16 & 1) == 0) goto LAB_0320c160;
          goto LAB_0320c088;
        }
LAB_0320c130:
        local_1100 = (ulong **)0x0;
LAB_0320c134:
        puVar23 = (ulong *)PTR_DAT_047ddc28;
        do {
          if ((*puVar23 & 1) != 0) break;
          puVar23 = (ulong *)puVar23[1];
        } while (puVar23 != (ulong *)0x0);
        puVar24 = puVar27;
        do {
          if (puVar24 == puVar23) goto LAB_0320c088;
          puVar24 = (ulong *)puVar24[1];
        } while (puVar24 != (ulong *)0x0);
      }
    }
LAB_0320c160:
    puVar7 = PTR_PTR_047d1a50;
    if (*(int *)(puVar9 + 10) != 0) {
      puVar18 = (undefined8 *)puVar9[9];
      lVar17 = (long)*(int *)(puVar9 + 10) << 3;
      do {
        lVar21 = puVar9[6];
        iVar28 = *(int *)(lVar21 + 0x20);
        uVar10 = *puVar18;
        lVar22 = (long)iVar28;
        if ((int)(*(uint *)(lVar21 + 0x24) & 0x7fffffff) <= iVar28) {
          FUN_0321a300(lVar21 + 0x18,puVar7,lVar22 + 1);
          iVar28 = *(int *)(lVar21 + 0x20);
        }
        puVar18 = puVar18 + 1;
        lVar17 = lVar17 + -8;
        *(undefined8 *)(*(long *)(lVar21 + 0x18) + (long)iVar28 * 8) = uVar10;
        *(int *)(lVar21 + 0x20) = (int)(lVar22 + 1);
      } while (lVar17 != 0);
    }
    if (lVar15 != 0) goto LAB_0320c1cc;
    lVar15 = *(long *)(lVar25 + 0x1000b8);
    if (lVar15 == 0) {
      lVar15 = FUN_00e5d3b4();
      *(long *)(lVar25 + 0x1000b8) = lVar15;
    }
    plVar29 = *(long **)(lVar15 + 0x3e0);
    if (plVar29 != (long *)0x0) {
      lVar15 = *plVar29;
      if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
        (**(code **)(lVar15 + 0x18))
                  ("Reflect.CallAfterReflectNew",0x1b,*(undefined8 *)(lVar15 + 0x28));
      }
      puVar18 = (undefined8 *)plVar29[2];
      uVar16 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar29[3]) && (plVar29[2] = uVar16, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = "TtReflect.CallAfterReflectNew";
        uVar10 = nn::os::GetSystemTick();
        puVar18[1] = uVar10;
      }
      if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar29[6] != 0)) {
        puVar18 = (undefined8 *)plVar29[2];
        uVar16 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
        if ((uVar16 <= (ulong)plVar29[3]) && (plVar29[2] = uVar16, puVar18 != (undefined8 *)0x0)) {
          *puVar18 = &DAT_03c4e575;
          puVar18[1] = *(undefined8 *)(plVar29[6] + 8);
        }
      }
    }
    local_1120 = plVar29;
    if (local_11b4._4_4_ == 0) {
      lVar15 = *(long *)(lVar25 + 0x1000b8);
      if (lVar15 == 0) {
        lVar15 = FUN_00e5d3b4();
        *(long *)(lVar25 + 0x1000b8) = lVar15;
      }
      lVar25 = *(long *)(lVar15 + 0x3e0);
      if (lVar25 != 0) {
        puVar18 = *(undefined8 **)(lVar25 + 0x10);
        uVar16 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
        if ((uVar16 <= *(ulong *)(lVar25 + 0x18)) &&
           (*(ulong *)(lVar25 + 0x10) = uVar16, puVar18 != (undefined8 *)0x0)) {
          *puVar18 = "MiNumVars";
          *(float *)(puVar18 + 1) = (float)(int)local_11d0;
        }
      }
      if ((int)local_11d0 != 0) {
        pMVar2 = (MutexType *)(DAT_04884f20 + 0x18);
        nn::os::LockMutex(pMVar2);
        if (0 < (int)local_11d0) {
          lVar25 = (local_11d0 & 0xffffffff) + 1;
          lVar15 = (local_11d0 & 0xffffffff) << 5;
          do {
            lVar17 = local_11d8 + lVar15;
            iVar4 = *(int *)(lVar17 + -8);
            iVar28 = -iVar4;
            if (-1 < iVar4) {
              iVar28 = iVar4;
            }
            FUN_031dbc90(*(undefined8 *)(lVar17 + -0x20),*(undefined8 *)(lVar17 + -0x18),iVar28);
            lVar25 = lVar25 + -1;
            lVar15 = lVar15 + -0x20;
          } while (1 < lVar25);
        }
        nn::os::UnlockMutex(pMVar2);
      }
      lVar25 = local_11d8;
      if (local_11b8 != 0) {
        lVar15 = (long)local_11b8 << 3;
        plVar26 = local_11c0;
        do {
          if (*(ulong *)(*plVar26 + 0x10) < 2) {
            if ((long *)*plVar26 == (long *)0x0) {
              local_1128 = (undefined *)0x0;
              goto LAB_0320cc00;
            }
            puVar9 = *(undefined8 **)*plVar26;
            if (puVar9 != (undefined8 *)0x0) {
              pcVar20 = (code *)*puVar9;
              goto LAB_0320cbfc;
            }
            puVar9 = (undefined8 *)PTR_DAT_047ddc28;
            goto LAB_0320cbb0;
          }
          plVar26 = plVar26 + 1;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
      if ((int)local_11d0 != 0) {
        lVar15 = local_11d8 + (long)(int)local_11d0 * 0x20;
        do {
          puVar27 = (ulong *)(lVar15 + -0x10);
          lVar15 = lVar15 + -0x20;
          if ((*puVar27 & 1) != 0) {
            plVar11 = (long *)(*puVar27 & 0xfffffffffffffffe);
            plVar26 = plVar11 + 1;
            do {
              lVar17 = *plVar26;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar6) {
                *(int *)plVar26 = (int)lVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((plVar11 != (long *)0x0) && ((int)lVar17 == 1)) {
              (**(code **)(*plVar11 + 8))();
            }
          }
        } while (lVar15 != lVar25);
      }
      plVar26 = local_11c0;
      local_11d0 = local_11d0 & 0xffffffff00000000;
      if (local_11b8 != 0) {
        plVar11 = local_11c0 + local_11b8;
        do {
          plVar11 = plVar11 + -1;
          plVar13 = (long *)*plVar11;
          if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
            plVar3 = plVar13 + 2;
            do {
              lVar25 = *plVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *plVar3 = lVar25 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar25 + -1 == 0) {
              (**(code **)(*plVar13 + 0x18))();
            }
          }
        } while (plVar11 != plVar26);
      }
      plVar26 = local_11c8;
      local_11b8 = 0;
      local_11c8 = (long *)0x0;
      if ((plVar26 != (long *)0x0) && (plVar26[1] != 0)) {
        plVar11 = plVar26 + 2;
        do {
          lVar25 = *plVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar25 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar25 + -1 == 0) {
          (**(code **)(*plVar26 + 0x18))();
        }
      }
    }
    else if (DAT_04884f08 == 0) {
      if (DAT_046aaf68 != '\0') goto LAB_0320caac;
    }
    else {
      if (DAT_046aaf68 == '\0') {
        local_1058 = &DAT_04884eb8;
        local_1068 = (ulong *)0x0;
        local_1050 = 1;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_1048 = nn::os::GetThreadId(pTVar12);
        local_1040 = (ulong *)0x0;
        local_1038 = 0;
        local_1030 = (char *)0x0;
        local_1028 = 0;
        local_1020 = 0;
        FUN_0322c554(&local_1068,"AfterReflectNew should never be called from this handler",
                     PTR_DAT_047d1b38);
        local_1030 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        local_1028 = 0x2e0;
        FUN_0322c8e0(&local_1068);
      }
      else {
LAB_0320caac:
        local_1058 = &DAT_04884eb8;
        local_1050 = 1;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_1048 = nn::os::GetThreadId(pTVar12);
        local_1038 = 0;
        local_1030 = (char *)0x0;
        local_1028 = 0;
        local_1020 = 0;
        local_1018[0]._0_1_ = '\0';
        uStack_1060 = 0x10000000000;
        local_1068 = local_1018;
        local_1040 = local_1018;
        FUN_0322c554(&local_1068,"AfterReflectNew should never be called from this handler",
                     PTR_DAT_047d1b38);
        local_1028 = 0x2e0;
        local_1030 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        if ((char)local_1018[0] != '\0') {
          sVar14 = strlen((char *)local_1018);
          *(undefined2 *)((long)local_1018 + (long)(int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))
               = 10;
          printf("%s",local_1018);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      if (((ulong)local_1040 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1040 + -1),0);
      }
    }
    if (plVar29 != (long *)0x0) {
      lVar25 = *plVar29;
      if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (plVar29[6] != 0)) {
        puVar18 = (undefined8 *)plVar29[2];
        uVar16 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
        if ((uVar16 <= (ulong)plVar29[3]) && (plVar29[2] = uVar16, puVar18 != (undefined8 *)0x0)) {
          *puVar18 = &DAT_03c4e575;
          puVar18[1] = *(undefined8 *)(plVar29[6] + 8);
        }
      }
      puVar18 = (undefined8 *)plVar29[2];
      uVar16 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar29[3]) && (plVar29[2] = uVar16, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c2d363;
        uVar10 = nn::os::GetSystemTick();
        puVar18[1] = uVar10;
      }
      if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
        (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
      }
    }
  }
  puVar9[6] = 0;
LAB_0320c1cc:
  lVar25 = local_1208;
  *puVar9 = 0;
  *(undefined4 *)(puVar9 + 10) = 0;
  if (iVar30 != 0) {
    lVar15 = local_1208 + (long)iVar30 * 0x30;
    do {
      if ((*(ulong *)(lVar15 + -8) & 1) != 0) {
        plVar26 = (long *)(*(ulong *)(lVar15 + -8) & 0xfffffffffffffffe);
        plVar29 = plVar26 + 1;
        do {
          lVar17 = *plVar29;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar6) {
            *(int *)plVar29 = (int)lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar26 != (long *)0x0) && ((int)lVar17 == 1)) {
          (**(code **)(*plVar26 + 8))();
        }
      }
      puVar27 = (ulong *)(lVar15 + -0x20);
      lVar15 = lVar15 + -0x30;
      if ((*puVar27 & 1) != 0) {
        plVar26 = (long *)(*puVar27 & 0xfffffffffffffffe);
        plVar29 = plVar26 + 1;
        do {
          lVar17 = *plVar29;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar6) {
            *(int *)plVar29 = (int)lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar26 != (long *)0x0) && ((int)lVar17 == 1)) {
          (**(code **)(*plVar26 + 8))();
        }
      }
    } while (lVar15 != lVar25);
  }
  uVar19 = local_1200;
  uVar16 = local_1200 >> 0x20;
  local_1200 = uVar16 << 0x20;
  if ((lVar25 != 0) && (-1 < (long)uVar19)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar25,uVar16 * 0x30);
  }
  plVar29 = local_11c0;
  if (local_11b8 != 0) {
    plVar26 = local_11c0 + local_11b8;
    do {
      plVar26 = plVar26 + -1;
      plVar11 = (long *)*plVar26;
      if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
        plVar13 = plVar11 + 2;
        do {
          lVar25 = *plVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar25 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar25 + -1 == 0) {
          (**(code **)(*plVar11 + 0x18))();
        }
      }
    } while (plVar26 != plVar29);
  }
  local_11b8 = 0;
  if ((-1 < (int)local_11b4) && (local_11c0 != (long *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_11c0,(local_11b4 & 0xffffffff) << 3);
  }
  local_11c0 = (long *)0x0;
  local_11b4 = CONCAT44(local_11b4._4_4_,0x80000000);
  if ((local_11c8 != (long *)0x0) && (local_11c8[1] != 0)) {
    plVar29 = local_11c8 + 2;
    do {
      lVar25 = *plVar29;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar6) {
        *plVar29 = lVar25 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar25 + -1 == 0) {
      (**(code **)(*local_11c8 + 0x18))();
    }
  }
  lVar25 = local_11d8;
  if ((int)local_11d0 != 0) {
    lVar15 = local_11d8 + (long)(int)local_11d0 * 0x20;
    do {
      puVar27 = (ulong *)(lVar15 + -0x10);
      lVar15 = lVar15 + -0x20;
      if ((*puVar27 & 1) != 0) {
        plVar26 = (long *)(*puVar27 & 0xfffffffffffffffe);
        plVar29 = plVar26 + 1;
        do {
          lVar17 = *plVar29;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar6) {
            *(int *)plVar29 = (int)lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar26 != (long *)0x0) && ((int)lVar17 == 1)) {
          (**(code **)(*plVar26 + 8))();
        }
      }
    } while (lVar15 != lVar25);
  }
  uVar16 = local_11d0;
  uVar19 = (ulong)local_11d0._4_4_;
  local_11d0 = (ulong)local_11d0._4_4_ << 0x20;
  if ((-1 < (long)uVar16) && (local_11d8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_11d8,uVar19 << 5);
  }
  plVar29 = (long *)FUN_0322ccb8(&local_11a8);
  if ((local_1138 & 1) != 0) {
    plVar29 = (long *)(local_1138 & 0xfffffffffffffffe);
    plVar26 = plVar29 + 1;
    do {
      lVar25 = *plVar26;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = (int)lVar25 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar29 != (long *)0x0) && ((int)lVar25 == 1)) {
      plVar29 = (long *)(**(code **)(*plVar29 + 8))();
    }
  }
  if ((local_1150 & 1) != 0) {
    plVar29 = (long *)(local_1150 & 0xfffffffffffffffe);
    plVar26 = plVar29 + 1;
    do {
      lVar25 = *plVar26;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = (int)lVar25 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar29 != (long *)0x0) && ((int)lVar25 == 1)) {
      plVar29 = (long *)(**(code **)(*plVar29 + 8))();
    }
  }
  if (local_1130 != (long *)0x0) {
    lVar25 = *local_1130;
    if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (local_1130[6] != 0)) {
      puVar9 = (undefined8 *)local_1130[2];
      uVar16 = (long)puVar9 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)local_1130[3]) && (local_1130[2] = uVar16, puVar9 != (undefined8 *)0x0))
      {
        *puVar9 = &DAT_03c4e575;
        puVar9[1] = *(undefined8 *)(local_1130[6] + 8);
      }
    }
    puVar9 = (undefined8 *)local_1130[2];
    uVar16 = (long)puVar9 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)local_1130[3]) && (local_1130[2] = uVar16, puVar9 != (undefined8 *)0x0)) {
      *puVar9 = &DAT_03c3697b;
      plVar29 = (long *)nn::os::GetSystemTick();
      puVar9[1] = plVar29;
    }
    if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
      plVar29 = (long *)(**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
      if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
        plVar29 = (long *)(**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
      }
    }
  }
  return plVar29;
code_r0x0320b704:
  lVar17 = *plVar29;
  plVar26 = (long *)(lVar17 + ((long)iVar28 + -1) * 0x30);
  local_1100 = (ulong **)*plVar26;
  lStack_10f8 = plVar26[1];
  local_10f0 = plVar26[2];
  if ((local_10f0 & 1) != 0) {
    piVar1 = (int *)((local_10f0 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar17 = lVar17 + ((long)iVar28 + -1) * 0x30;
  local_10e8 = *(long *)(lVar17 + 0x18);
  local_10e0 = *(ulong **)(lVar17 + 0x20);
  local_10d8 = *(ulong *)(lVar17 + 0x28);
  if ((local_10d8 & 1) != 0) {
    piVar1 = (int *)((local_10d8 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar17 = puVar9[7] + (long)*(int *)(puVar9 + 8) * 0x30;
  uVar16 = *(ulong *)(lVar17 + -8);
  if ((uVar16 & 1) != 0) {
    plVar11 = (long *)(uVar16 & 0xfffffffffffffffe);
    plVar26 = plVar11 + 1;
    do {
      lVar21 = *plVar26;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = (int)lVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar21 == 1)) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  uVar16 = *(ulong *)(lVar17 + -0x20);
  if ((uVar16 & 1) != 0) {
    plVar11 = (long *)(uVar16 & 0xfffffffffffffffe);
    plVar26 = plVar11 + 1;
    do {
      lVar17 = *plVar26;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = (int)lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar17 == 1)) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  lVar17 = local_1208;
  *(int *)(puVar9 + 8) = *(int *)(puVar9 + 8) + -1;
  if (local_10e8 == 0) {
    lVar22 = local_1208 + (long)iVar30 * 0x30;
    uVar16 = *(ulong *)(lVar22 + -8);
    if ((uVar16 & 1) != 0) {
      plVar11 = (long *)(uVar16 & 0xfffffffffffffffe);
      plVar26 = plVar11 + 1;
      do {
        lVar21 = *plVar26;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar6) {
          *(int *)plVar26 = (int)lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar11 != (long *)0x0) && ((int)lVar21 == 1)) {
        (**(code **)(*plVar11 + 8))();
      }
    }
    uVar16 = *(ulong *)(lVar22 + -0x20);
    if ((uVar16 & 1) != 0) {
      plVar11 = (long *)(uVar16 & 0xfffffffffffffffe);
      plVar26 = plVar11 + 1;
      do {
        lVar22 = *plVar26;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar6) {
          *(int *)plVar26 = (int)lVar22 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar11 != (long *)0x0) && ((int)lVar22 == 1)) {
        (**(code **)(*plVar11 + 8))();
      }
    }
    iVar30 = iVar30 + -1;
    local_1200 = CONCAT44(local_1200._4_4_,iVar30);
  }
  else {
    puVar27 = local_10e0;
    if ((*local_10e0 & 1) == 0) {
      do {
        puVar27 = (ulong *)puVar27[1];
      } while ((*puVar27 & 1) == 0);
    }
    if ((local_10e0 != (ulong *)0x0) && ((puVar27[2] & 0x1f) == 8)) {
      puVar27 = local_10e0;
      if ((*local_10e0 & 1) == 0) {
        do {
          puVar27 = (ulong *)puVar27[1];
          if (puVar27 == (ulong *)0x0) {
            if (iVar30 == 0) goto LAB_0320b9e8;
            goto LAB_0320b900;
          }
        } while ((*puVar27 & 1) == 0);
      }
      if ((int)(puVar27[2] >> 8) == 0 && iVar30 != 0) {
LAB_0320b900:
        lVar17 = (long)iVar30 * 0x30;
        do {
          if ((local_10e8 == *(long *)(lVar22 + lVar17 + -0x18)) &&
             (local_10e0 == *(ulong **)(lVar22 + lVar17 + -0x10))) {
            if (DAT_04884f08 == 0) {
              if (DAT_046aaf68 != '\0') goto LAB_0320bb58;
            }
            else {
              if (DAT_046aaf68 == '\0') {
                local_1058 = &DAT_04884eb8;
                local_1068 = (ulong *)0x0;
                local_1050 = 1;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_1048 = nn::os::GetThreadId(pTVar12);
                local_1020 = 0;
                local_1040 = (ulong *)0x0;
                local_1038 = 0;
                local_1030 = (char *)0x0;
                local_1028 = 0;
                FUN_0322c554(&local_1068,"Found loop through array {}",PTR_DAT_047e5e28,&local_10e8)
                ;
                local_1030 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                ;
                local_1028 = 0xf0;
                FUN_0322c8e0(&local_1068);
              }
              else {
LAB_0320bb58:
                local_1058 = &DAT_04884eb8;
                local_1068 = (ulong *)0x0;
                local_1050 = 1;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_1048 = nn::os::GetThreadId(pTVar12);
                local_1038 = 0;
                local_1030 = (char *)0x0;
                local_1028 = 0;
                local_1020 = 0;
                local_1018[0]._0_1_ = '\0';
                uStack_1060 = 0x10000000000;
                local_1068 = local_1018;
                local_1040 = local_1018;
                FUN_0322c554(&local_1068,"Found loop through array {}",PTR_DAT_047e5e28,&local_10e8)
                ;
                local_1030 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                ;
                local_1028 = 0xf0;
                if ((char)local_1018[0] != '\0') {
                  sVar14 = strlen((char *)local_1018);
                  *(undefined2 *)
                   ((long)local_1018 + (long)(int)((int)sVar14 - (uint)((int)sVar14 == 0xff))) = 10;
                  printf("%s",local_1018);
                  fflush(__stream);
                }
              }
              if (((ulong)local_1040 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)local_1040 + -1),0);
              }
            }
            *(undefined4 *)(puVar9 + 1) = 0x80040200;
            break;
          }
          lVar17 = lVar17 + -0x30;
        } while (lVar17 != 0);
      }
    }
LAB_0320b9e8:
    iVar28 = iVar30 + 1;
    lVar17 = lVar22;
    if ((int)(local_1200._4_4_ & 0x7fffffff) <= iVar30) {
      FUN_032107fc(&local_1208,(long)iVar28);
      lVar17 = local_1208;
      iVar30 = (int)local_1200;
    }
    plVar26 = (long *)(lVar17 + (long)iVar30 * 0x30);
    *plVar26 = (long)local_1100;
    plVar26[1] = lStack_10f8;
    plVar26[2] = local_10f0;
    if ((local_10f0 & 1) != 0) {
      piVar1 = (int *)((local_10f0 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar22 = lVar17 + (long)iVar30 * 0x30;
    *(long *)(lVar22 + 0x18) = local_10e8;
    *(ulong **)(lVar22 + 0x20) = local_10e0;
    *(ulong *)(lVar22 + 0x28) = local_10d8;
    if ((local_10d8 & 1) != 0) {
      piVar1 = (int *)((local_10d8 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_1200 = CONCAT44(local_1200._4_4_,iVar28);
    iVar30 = *(int *)(puVar9 + 8);
    lVar22 = (long)iVar30;
    uVar8 = uVar8 + 1;
    if ((int)(*(uint *)((long)puVar9 + 0x44) & 0x7fffffff) <= iVar30) {
      FUN_032107fc(plVar29,lVar22 + 1);
      iVar30 = *(int *)(puVar9 + 8);
    }
    puVar18 = (undefined8 *)(puVar9[7] + (long)iVar30 * 0x30);
    *puVar18 = local_11e8;
    puVar18[1] = uStack_11e0;
    puVar18[4] = uStack_11f0;
    puVar18[5] = 0;
    puVar18[2] = 0;
    puVar18[3] = local_11f8;
    *(int *)(puVar9 + 8) = (int)(lVar22 + 1);
    FUN_0320f220(puVar9,&local_1100,&local_10e8,0);
    iVar30 = iVar28;
  }
  if ((local_10d8 & 1) != 0) {
    plVar11 = (long *)(local_10d8 & 0xfffffffffffffffe);
    plVar26 = plVar11 + 1;
    do {
      lVar22 = *plVar26;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = (int)lVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar22 == 1)) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  if ((local_10f0 & 1) != 0) {
    plVar11 = (long *)(local_10f0 & 0xfffffffffffffffe);
    plVar26 = plVar11 + 1;
    do {
      lVar22 = *plVar26;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar6) {
        *(int *)plVar26 = (int)lVar22 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar22 == 1)) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  iVar28 = *(int *)(puVar9 + 8);
  lVar22 = lVar17;
  if (iVar28 == 0) goto LAB_0320bcac;
  goto LAB_0320b6fc;
  while (puVar9 = (undefined8 *)puVar9[1], puVar9 != (undefined8 *)0x0) {
LAB_0320cbb0:
    uVar8 = (uint)*puVar9;
    local_1128 = PTR_DAT_047ddc28;
    if ((uVar8 >> 0xb & 1) != 0) {
      uVar16 = CONCAT44(uVar8,uVar8) & 0x7ff000007ff;
      pcVar20 = (code *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)))
                               + 2];
      if (pcVar20 != (code *)0x0) {
LAB_0320cbfc:
        (*pcVar20)();
        local_1128 = extraout_x1;
      }
      break;
    }
  }
LAB_0320cc00:
  ppuStack_1108 = &local_1128;
  local_1070 = 1;
  local_1118 = 1;
  local_1110 = PTR_DAT_047e5c18;
  local_1100 = &local_1068;
  local_1068 = (ulong *)((ulong)local_1068 & 0xffffffffffffff00);
  local_10f0 = local_10f0 & 0xffffffffffffff00;
  lStack_10f8 = 0x8000100000000001;
  FUN_031c8aac(&local_1100,
               "A cloned object of type \'{}\' has stopped being referenced before/while calling afterReflectNew"
               ,&local_1118);
                    /* WARNING: Subroutine does not return */
  FUN_032270d0(0x5c9ebbbc,
               "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
               ,0x2f4,local_1100);
}


