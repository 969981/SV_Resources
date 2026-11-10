/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320ce24; name: FUN_0320ce24
 */


void FUN_0320ce24(undefined8 *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  MutexType *pMVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  ThreadType *pTVar11;
  long *plVar12;
  size_t sVar13;
  undefined *extraout_x1;
  long lVar14;
  long lVar15;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  uint uVar19;
  FILE *__stream;
  long lVar20;
  ulong *puVar21;
  ulong *puVar22;
  long *plVar23;
  ulong uVar24;
  ulong *puVar25;
  undefined8 *puVar26;
  long *plVar27;
  int iVar28;
  long lVar29;
  long lStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  long lStack_11d8;
  undefined8 uStack_11d0;
  long *plStack_11c8;
  long *plStack_11c0;
  int iStack_11b8;
  undefined8 uStack_11b4;
  undefined8 *puStack_11a8;
  char **ppcStack_11a0;
  undefined *puStack_1198;
  undefined8 **ppuStack_1190;
  char *pcStack_1188;
  undefined4 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  char *pcStack_1168;
  long lStack_1160;
  long lStack_1158;
  ulong uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  ulong uStack_1138;
  long *plStack_1130;
  undefined *puStack_1128;
  long *plStack_1120;
  undefined8 uStack_1118;
  undefined *puStack_1110;
  undefined **ppuStack_1108;
  ulong **ppuStack_1100;
  long lStack_10f8;
  ulong uStack_10f0;
  long lStack_10e8;
  ulong *puStack_10e0;
  ulong uStack_10d8;
  undefined4 uStack_1070;
  ulong *puStack_1068;
  undefined8 uStack_1060;
  undefined8 *puStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  ulong *puStack_1040;
  undefined8 uStack_1038;
  char *pcStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  ulong auStack_1018 [505];
  
  plVar27 = param_1 + 2;
  iVar8 = FUN_03213500(plVar27,param_3);
  if (*(int *)(param_1 + 3) == iVar8) {
    iVar28 = iVar8 + 1;
    if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) <= iVar8) {
      FUN_03213674(plVar27,(long)iVar28);
      iVar8 = *(int *)(param_1 + 3);
    }
    lVar18 = *plVar27;
    puVar26 = (undefined8 *)(lVar18 + (long)iVar8 * 0x30);
    uVar9 = param_3[1];
    *puVar26 = *param_3;
    puVar26[1] = uVar9;
    uVar24 = param_3[2];
    puVar26[2] = uVar24;
    if ((uVar24 & 1) != 0) {
      piVar3 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar18 = lVar18 + (long)iVar8 * 0x30;
    lVar14 = param_2[1];
    *(long *)(lVar18 + 0x18) = *param_2;
    *(long *)(lVar18 + 0x20) = lVar14;
    uVar24 = param_2[2];
    *(ulong *)(lVar18 + 0x28) = uVar24;
    if ((uVar24 & 1) != 0) {
      piVar3 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *(int *)(param_1 + 3) = iVar28;
  }
  else {
    lVar14 = *plVar27 + (long)iVar8 * 0x30;
    lVar18 = param_2[1];
    *(long *)(lVar14 + 0x18) = *param_2;
    *(long *)(lVar14 + 0x20) = lVar18;
    if ((param_2[2] & 1U) != 0) {
      piVar3 = (int *)((param_2[2] & 0xfffffffffffffffeU) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar24 = *(ulong *)(lVar14 + 0x28);
    if ((uVar24 & 1) != 0) {
      plVar23 = (long *)(uVar24 & 0xfffffffffffffffe);
      plVar27 = plVar23 + 1;
      do {
        lVar18 = *plVar27;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar6) {
          *(int *)plVar27 = (int)lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar23 != (long *)0x0) && ((int)lVar18 == 1)) {
        (**(code **)(*plVar23 + 8))();
      }
    }
    *(ulong *)(lVar14 + 0x28) = param_2[2];
  }
  lVar18 = tpidr_el0;
  lVar14 = *(long *)(lVar18 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar14;
  }
  plVar27 = *(long **)(lVar14 + 0x3e0);
  if (plVar27 != (long *)0x0) {
    lVar14 = *plVar27;
    if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
      (**(code **)(lVar14 + 0x18))("Reflect.Clone",0xd,*(undefined8 *)(lVar14 + 0x28));
      if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
        (**(code **)(lVar14 + 0x18))("Start",5,*(undefined8 *)(lVar14 + 0x28));
      }
    }
    puVar26 = (undefined8 *)plVar27[2];
    uVar24 = (long)puVar26 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
      *puVar26 = "LtReflect.Clone";
      puVar26[2] = "StStart";
      uVar9 = nn::os::GetSystemTick();
      puVar26[1] = uVar9;
    }
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar27[6] != 0)) {
      puVar26 = (undefined8 *)plVar27[2];
      uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
      if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
        *puVar26 = &DAT_03c4e575;
        puVar26[1] = *(undefined8 *)(plVar27[6] + 8);
      }
    }
  }
  lStack_1160 = *param_2;
  lStack_1158 = param_2[1];
  pcStack_1168 = "clone dst={} src={}";
  uStack_1150 = param_2[2];
  if ((uStack_1150 & 1) != 0) {
    piVar3 = (int *)((uStack_1150 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_1148 = *param_3;
  uStack_1140 = param_3[1];
  uStack_1138 = param_3[2];
  if ((uStack_1138 & 1) != 0) {
    piVar3 = (int *)((uStack_1138 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar7 = PTR_DAT_047e5e20;
  ppcStack_11a0 = &pcStack_1168;
  puStack_11a8 = &DAT_04884eb8;
  pcStack_1188 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
  ;
  uStack_1180 = 0xc3;
  puStack_1198 = &DAT_046a9088;
  uStack_1178 = 0;
  uStack_1170 = 0x8000000000000000;
  plStack_1130 = plVar27;
  if (DAT_046aaf68 == '\0') {
    iVar8 = *(int *)PTR_DAT_047e5e20;
    lVar15 = (long)iVar8;
    lVar14 = *(long *)(lVar18 + 0x1000b8);
    if (lVar14 == 0) {
      lVar14 = FUN_00e5d3b4();
      *(long *)(lVar18 + 0x1000b8) = lVar14;
      iVar8 = *(int *)puVar7;
      ppuStack_1190 = *(undefined8 ***)(lVar14 + lVar15 * 8 + 1000);
      if (lVar14 == 0) {
        lVar14 = FUN_00e5d3b4();
        *(long *)(lVar18 + 0x1000b8) = lVar14;
      }
    }
    else {
      ppuStack_1190 = *(undefined8 ***)(lVar14 + lVar15 * 8 + 1000);
    }
    *(undefined8 ***)(lVar14 + (long)iVar8 * 8 + 1000) = &puStack_11a8;
  }
  else {
    ppuStack_1190 = &puStack_11a8;
  }
  lStack_11d8 = 0;
  uStack_11d0 = 0x8000000000000000;
  iStack_11b8 = 0;
  uStack_11b4 = 0x80000000;
  plStack_11c8 = (long *)0x0;
  plStack_11c0 = (long *)0x0;
  lVar14 = param_1[6];
  if (lVar14 == 0) {
    param_1[6] = &lStack_11d8;
  }
  (**(code **)(*param_4 + 0x30))(param_4,param_1 + 2);
  *param_1 = param_4;
  lVar15 = *(long *)(lVar18 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar15;
  }
  plVar27 = *(long **)(lVar15 + 0x3e0);
  if (plVar27 != (long *)0x0) {
    lVar15 = *plVar27;
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar27[6] != 0)) {
      puVar26 = (undefined8 *)plVar27[2];
      uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
      if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
        *puVar26 = &DAT_03c4e575;
        puVar26[1] = *(undefined8 *)(plVar27[6] + 8);
      }
    }
    puVar26 = (undefined8 *)plVar27[2];
    uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
    if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
      *puVar26 = "StClone";
      uVar9 = nn::os::GetSystemTick();
      puVar26[1] = uVar9;
    }
    if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
      (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
    }
    if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
      (**(code **)(lVar15 + 0x18))("Clone",5,*(undefined8 *)(lVar15 + 0x28));
    }
  }
  uStack_11e8 = 0;
  uStack_11e0 = 0;
  uStack_11f8 = 0;
  uStack_11f0 = 0;
  lStack_1208 = 0;
  uStack_1200 = 0x8000000000000000;
  FUN_032107fc(&lStack_1208,1);
  lVar20 = lStack_1208;
  plVar27 = (long *)(lStack_1208 + (long)(int)uStack_1200 * 0x30);
  lVar15 = param_2[1];
  *plVar27 = *param_2;
  plVar27[1] = lVar15;
  uVar24 = param_2[2];
  plVar27[2] = uVar24;
  if ((uVar24 & 1) != 0) {
    piVar3 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar15 = lStack_1208 + (long)(int)uStack_1200 * 0x30;
  uVar9 = param_3[1];
  *(undefined8 *)(lVar15 + 0x18) = *param_3;
  *(undefined8 *)(lVar15 + 0x20) = uVar9;
  uVar24 = param_3[2];
  *(ulong *)(lVar15 + 0x28) = uVar24;
  if ((uVar24 & 1) != 0) {
    piVar3 = (int *)((uVar24 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,1);
  plVar27 = param_1 + 7;
  iVar8 = *(int *)(param_1 + 8);
  lVar15 = (long)iVar8;
  if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) <= iVar8) {
    FUN_032107fc(plVar27,lVar15 + 1);
    iVar8 = *(int *)(param_1 + 8);
  }
  puVar26 = (undefined8 *)(param_1[7] + (long)iVar8 * 0x30);
  *puVar26 = uStack_11e8;
  puVar26[1] = uStack_11e0;
  puVar26[4] = uStack_11f0;
  puVar26[5] = 0;
  puVar26[2] = 0;
  puVar26[3] = uStack_11f8;
  *(int *)(param_1 + 8) = (int)(lVar15 + 1);
  iVar28 = 1;
  FUN_0320f220(param_1,param_2,param_3,1);
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 != 0) {
    __stream = *(FILE **)PTR_stdout_047cb860;
    iVar28 = 1;
    uVar19 = 1;
LAB_0320b6fc:
    if (-1 < *(int *)(param_1 + 1)) goto code_r0x0320b704;
    lVar15 = *plVar27;
    lVar20 = lVar15 + (long)iVar8 * 0x30;
    do {
      if ((*(ulong *)(lVar20 + -8) & 1) != 0) {
        plVar23 = (long *)(*(ulong *)(lVar20 + -8) & 0xfffffffffffffffe);
        plVar27 = plVar23 + 1;
        do {
          lVar29 = *plVar27;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar6) {
            *(int *)plVar27 = (int)lVar29 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar23 != (long *)0x0) && ((int)lVar29 == 1)) {
          (**(code **)(*plVar23 + 8))();
        }
      }
      puVar25 = (ulong *)(lVar20 + -0x20);
      lVar20 = lVar20 + -0x30;
      if ((*puVar25 & 1) != 0) {
        plVar23 = (long *)(*puVar25 & 0xfffffffffffffffe);
        plVar27 = plVar23 + 1;
        do {
          lVar29 = *plVar27;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar6) {
            *(int *)plVar27 = (int)lVar29 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar23 != (long *)0x0) && ((int)lVar29 == 1)) {
          (**(code **)(*plVar23 + 8))();
        }
      }
    } while (lVar20 != lVar15);
    goto LAB_0320bcac;
  }
  uVar19 = 1;
LAB_0320bcac:
  *(undefined4 *)(param_1 + 8) = 0;
  lVar15 = *(long *)(lVar18 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar15;
  }
  lVar20 = *(long *)(lVar15 + 0x3e0);
  if (lVar20 != 0) {
    puVar26 = *(undefined8 **)(lVar20 + 0x10);
    uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
    if ((uVar24 <= *(ulong *)(lVar20 + 0x18)) &&
       (*(ulong *)(lVar20 + 0x10) = uVar24, puVar26 != (undefined8 *)0x0)) {
      *puVar26 = "MiNumClones";
      *(float *)(puVar26 + 1) = (float)uVar19;
      lVar15 = *(long *)(lVar18 + 0x1000b8);
    }
  }
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar15;
  }
  plVar27 = *(long **)(lVar15 + 0x3e0);
  if (plVar27 != (long *)0x0) {
    lVar15 = *plVar27;
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar27[6] != 0)) {
      puVar26 = (undefined8 *)plVar27[2];
      uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
      if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
        *puVar26 = &DAT_03c4e575;
        puVar26[1] = *(undefined8 *)(plVar27[6] + 8);
      }
    }
    puVar26 = (undefined8 *)plVar27[2];
    uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
    if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
      *puVar26 = "StEnd";
      uVar9 = nn::os::GetSystemTick();
      puVar26[1] = uVar9;
    }
    if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
      (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
    }
    if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
      (**(code **)(lVar15 + 0x18))("End",3,*(undefined8 *)(lVar15 + 0x28));
    }
  }
  (**(code **)(*param_4 + 0x38))(param_4,param_1 + 1);
  if (*(int *)(param_1 + 1) < 0) {
    if (DAT_04884f08 < 2) {
      if (DAT_046aaf68 != '\0') goto LAB_0320c9a4;
    }
    else {
      if (DAT_046aaf68 == '\0') {
        puStack_1058 = &DAT_04884eb8;
        puStack_1068 = (ulong *)0x0;
        uStack_1050 = 2;
        pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
        uStack_1048 = nn::os::GetThreadId(pTVar11);
        puStack_1040 = (ulong *)0x0;
        uStack_1038 = 0;
        pcStack_1030 = (char *)0x0;
        uStack_1028 = 0;
        uStack_1020 = 0;
        FUN_0322c554(&puStack_1068,"Unable to clone object {} or one of its dependencies",
                     PTR_DAT_047e5e28,param_3);
        pcStack_1030 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        uStack_1028 = 0x134;
        FUN_0322c8e0(&puStack_1068);
      }
      else {
LAB_0320c9a4:
        puStack_1058 = &DAT_04884eb8;
        puStack_1068 = (ulong *)0x0;
        uStack_1050 = 2;
        pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
        uStack_1048 = nn::os::GetThreadId(pTVar11);
        uStack_1038 = 0;
        pcStack_1030 = (char *)0x0;
        uStack_1028 = 0;
        uStack_1020 = 0;
        auStack_1018[0]._0_1_ = '\0';
        uStack_1060 = 0x10000000000;
        puStack_1068 = auStack_1018;
        puStack_1040 = auStack_1018;
        FUN_0322c554(&puStack_1068,"Unable to clone object {} or one of its dependencies",
                     PTR_DAT_047e5e28,param_3);
        uStack_1028 = 0x134;
        pcStack_1030 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        if ((char)auStack_1018[0] != '\0') {
          sVar13 = strlen((char *)auStack_1018);
          *(undefined2 *)
           ((long)auStack_1018 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
          printf("%s",auStack_1018);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      if (((ulong)puStack_1040 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)puStack_1040 + -1),0);
      }
    }
    uVar24 = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    if ((uVar24 & 1) != 0) {
      plVar23 = (long *)(uVar24 & 0xfffffffffffffffe);
      plVar27 = plVar23 + 1;
      do {
        lVar18 = *plVar27;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar6) {
          *(int *)plVar27 = (int)lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar23 != (long *)0x0) && ((int)lVar18 == 1)) {
        (**(code **)(*plVar23 + 8))();
      }
    }
LAB_0320bfe8:
    if (lVar14 != 0) goto LAB_0320c1cc;
  }
  else {
    if (*(int *)(param_1[6] + 0x28) != 0) goto LAB_0320bfe8;
    lVar15 = *(long *)(lVar18 + 0x1000b8);
    if (lVar15 == 0) {
      lVar15 = FUN_00e5d3b4();
      *(long *)(lVar18 + 0x1000b8) = lVar15;
    }
    plVar27 = *(long **)(lVar15 + 0x3e0);
    if (plVar27 != (long *)0x0) {
      lVar15 = *plVar27;
      if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar27[6] != 0)) {
        puVar26 = (undefined8 *)plVar27[2];
        uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
        if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
          *puVar26 = &DAT_03c4e575;
          puVar26[1] = *(undefined8 *)(plVar27[6] + 8);
        }
      }
      puVar26 = (undefined8 *)plVar27[2];
      uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
      if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
        *puVar26 = "StAfterReflectNew";
        uVar9 = nn::os::GetSystemTick();
        puVar26[1] = uVar9;
      }
      if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
        (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
      }
      if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
        (**(code **)(lVar15 + 0x18))("AfterReflectNew",0xf,*(undefined8 *)(lVar15 + 0x28));
      }
    }
    puVar25 = (ulong *)param_2[1];
    if (puVar25 != (ulong *)0x0) {
      lVar15 = *param_2;
      if (puVar25 == (ulong *)PTR_DAT_047ddc28) {
LAB_0320c088:
        uVar24 = 0;
        do {
          uVar19 = (uint)*puVar25;
          if ((uVar19 >> 0x15 & 1) == 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = CONCAT44(uVar19,uVar19) & 0x1fffff001fffff;
            uVar16 = puVar25[(ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)) +
                                          POPCOUNT((char)(uVar16 >> 0x10))) + 2];
          }
          uVar24 = uVar16 | uVar24;
        } while (((*puVar25 & 1) == 0) && (puVar25 = (ulong *)puVar25[1], puVar25 != (ulong *)0x0));
        if ((lVar15 != 0) && (((uint)uVar24 >> 3 & 1) == 0)) {
          lVar20 = param_1[6];
          if (*(long *)(lVar15 + 8) != 0) {
            plVar27 = (long *)(lVar15 + 0x10);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar6) {
                *plVar27 = *plVar27 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          plVar27 = *(long **)(lVar20 + 0x10);
          *(long *)(lVar20 + 0x10) = lVar15;
          if ((plVar27 != (long *)0x0) && (plVar27[1] != 0)) {
            plVar23 = plVar27 + 2;
            do {
              lVar15 = *plVar23;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar6) {
                *plVar23 = lVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar15 + -1 == 0) {
              (**(code **)(*plVar27 + 0x18))();
            }
          }
        }
      }
      else {
        puStack_1068 = puVar25;
        while( true ) {
          uVar19 = (uint)*puStack_1068;
          if ((uVar19 >> 0xd & 1) != 0) break;
          if (((*puStack_1068 & 1) != 0) ||
             (puStack_1068 = (ulong *)puStack_1068[1], puStack_1068 == (ulong *)0x0))
          goto LAB_0320c024;
        }
        if (puStack_1068 != (ulong *)0x0) {
          uVar24 = CONCAT44(uVar19,uVar19) & 0x1fff00001fff;
          puStack_1068 = puStack_1068 +
                         (ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8))) + 2;
          goto LAB_0320c02c;
        }
LAB_0320c024:
        puStack_1068 = (ulong *)0x0;
LAB_0320c02c:
        puVar21 = (ulong *)PTR_DAT_047ddc28;
        while( true ) {
          uVar19 = (uint)*puVar21;
          if ((uVar19 >> 0xd & 1) != 0) break;
          if (((*puVar21 & 1) != 0) || (puVar21 = (ulong *)puVar21[1], puVar21 == (ulong *)0x0))
          goto LAB_0320c130;
        }
        if (puVar21 != (ulong *)0x0) {
          uVar24 = CONCAT44(uVar19,uVar19) & 0x1fff00001fff;
          ppuStack_1100 =
               (ulong **)
               (puVar21 + (ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8))) + 2)
          ;
          if (puStack_1068 == (ulong *)0x0) goto LAB_0320c134;
          uVar24 = FUN_031dd354(&puStack_1068,&ppuStack_1100);
          if ((uVar24 & 1) == 0) goto LAB_0320c160;
          goto LAB_0320c088;
        }
LAB_0320c130:
        ppuStack_1100 = (ulong **)0x0;
LAB_0320c134:
        puVar21 = (ulong *)PTR_DAT_047ddc28;
        do {
          if ((*puVar21 & 1) != 0) break;
          puVar21 = (ulong *)puVar21[1];
        } while (puVar21 != (ulong *)0x0);
        puVar22 = puVar25;
        do {
          if (puVar22 == puVar21) goto LAB_0320c088;
          puVar22 = (ulong *)puVar22[1];
        } while (puVar22 != (ulong *)0x0);
      }
    }
LAB_0320c160:
    puVar7 = PTR_PTR_047d1a50;
    if (*(int *)(param_1 + 10) != 0) {
      puVar26 = (undefined8 *)param_1[9];
      lVar15 = (long)*(int *)(param_1 + 10) << 3;
      do {
        lVar29 = param_1[6];
        iVar8 = *(int *)(lVar29 + 0x20);
        uVar9 = *puVar26;
        lVar20 = (long)iVar8;
        if ((int)(*(uint *)(lVar29 + 0x24) & 0x7fffffff) <= iVar8) {
          FUN_0321a300(lVar29 + 0x18,puVar7,lVar20 + 1);
          iVar8 = *(int *)(lVar29 + 0x20);
        }
        puVar26 = puVar26 + 1;
        lVar15 = lVar15 + -8;
        *(undefined8 *)(*(long *)(lVar29 + 0x18) + (long)iVar8 * 8) = uVar9;
        *(int *)(lVar29 + 0x20) = (int)(lVar20 + 1);
      } while (lVar15 != 0);
    }
    if (lVar14 != 0) goto LAB_0320c1cc;
    lVar14 = *(long *)(lVar18 + 0x1000b8);
    if (lVar14 == 0) {
      lVar14 = FUN_00e5d3b4();
      *(long *)(lVar18 + 0x1000b8) = lVar14;
    }
    plVar27 = *(long **)(lVar14 + 0x3e0);
    if (plVar27 != (long *)0x0) {
      lVar14 = *plVar27;
      if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
        (**(code **)(lVar14 + 0x18))
                  ("Reflect.CallAfterReflectNew",0x1b,*(undefined8 *)(lVar14 + 0x28));
      }
      puVar26 = (undefined8 *)plVar27[2];
      uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
      if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
        *puVar26 = "TtReflect.CallAfterReflectNew";
        uVar9 = nn::os::GetSystemTick();
        puVar26[1] = uVar9;
      }
      if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar27[6] != 0)) {
        puVar26 = (undefined8 *)plVar27[2];
        uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
        if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
          *puVar26 = &DAT_03c4e575;
          puVar26[1] = *(undefined8 *)(plVar27[6] + 8);
        }
      }
    }
    plStack_1120 = plVar27;
    if (uStack_11b4._4_4_ == 0) {
      lVar14 = *(long *)(lVar18 + 0x1000b8);
      if (lVar14 == 0) {
        lVar14 = FUN_00e5d3b4();
        *(long *)(lVar18 + 0x1000b8) = lVar14;
      }
      lVar18 = *(long *)(lVar14 + 0x3e0);
      if (lVar18 != 0) {
        puVar26 = *(undefined8 **)(lVar18 + 0x10);
        uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
        if ((uVar24 <= *(ulong *)(lVar18 + 0x18)) &&
           (*(ulong *)(lVar18 + 0x10) = uVar24, puVar26 != (undefined8 *)0x0)) {
          *puVar26 = "MiNumVars";
          *(float *)(puVar26 + 1) = (float)(int)uStack_11d0;
        }
      }
      if ((int)uStack_11d0 != 0) {
        pMVar1 = (MutexType *)(DAT_04884f20 + 0x18);
        nn::os::LockMutex(pMVar1);
        if (0 < (int)uStack_11d0) {
          lVar18 = (uStack_11d0 & 0xffffffff) + 1;
          lVar14 = (uStack_11d0 & 0xffffffff) << 5;
          do {
            lVar15 = lStack_11d8 + lVar14;
            iVar4 = *(int *)(lVar15 + -8);
            iVar8 = -iVar4;
            if (-1 < iVar4) {
              iVar8 = iVar4;
            }
            FUN_031dbc90(*(undefined8 *)(lVar15 + -0x20),*(undefined8 *)(lVar15 + -0x18),iVar8);
            lVar18 = lVar18 + -1;
            lVar14 = lVar14 + -0x20;
          } while (1 < lVar18);
        }
        nn::os::UnlockMutex(pMVar1);
      }
      lVar18 = lStack_11d8;
      if (iStack_11b8 != 0) {
        lVar14 = (long)iStack_11b8 << 3;
        plVar23 = plStack_11c0;
        do {
          if (*(ulong *)(*plVar23 + 0x10) < 2) {
            if ((long *)*plVar23 == (long *)0x0) {
              puStack_1128 = (undefined *)0x0;
              goto LAB_0320cc00;
            }
            puVar26 = *(undefined8 **)*plVar23;
            if (puVar26 != (undefined8 *)0x0) {
              pcVar17 = (code *)*puVar26;
              goto LAB_0320cbfc;
            }
            puVar26 = (undefined8 *)PTR_DAT_047ddc28;
            goto LAB_0320cbb0;
          }
          plVar23 = plVar23 + 1;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
      if ((int)uStack_11d0 != 0) {
        lVar14 = lStack_11d8 + (long)(int)uStack_11d0 * 0x20;
        do {
          puVar25 = (ulong *)(lVar14 + -0x10);
          lVar14 = lVar14 + -0x20;
          if ((*puVar25 & 1) != 0) {
            plVar10 = (long *)(*puVar25 & 0xfffffffffffffffe);
            plVar23 = plVar10 + 1;
            do {
              lVar15 = *plVar23;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar6) {
                *(int *)plVar23 = (int)lVar15 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((plVar10 != (long *)0x0) && ((int)lVar15 == 1)) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        } while (lVar14 != lVar18);
      }
      plVar23 = plStack_11c0;
      uStack_11d0 = uStack_11d0 & 0xffffffff00000000;
      if (iStack_11b8 != 0) {
        plVar10 = plStack_11c0 + iStack_11b8;
        do {
          plVar10 = plVar10 + -1;
          plVar12 = (long *)*plVar10;
          if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
            plVar2 = plVar12 + 2;
            do {
              lVar18 = *plVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = lVar18 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar18 + -1 == 0) {
              (**(code **)(*plVar12 + 0x18))();
            }
          }
        } while (plVar10 != plVar23);
      }
      plVar23 = plStack_11c8;
      iStack_11b8 = 0;
      plStack_11c8 = (long *)0x0;
      if ((plVar23 != (long *)0x0) && (plVar23[1] != 0)) {
        plVar10 = plVar23 + 2;
        do {
          lVar18 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 + -1 == 0) {
          (**(code **)(*plVar23 + 0x18))();
        }
      }
    }
    else if (DAT_04884f08 == 0) {
      if (DAT_046aaf68 != '\0') goto LAB_0320caac;
    }
    else {
      if (DAT_046aaf68 == '\0') {
        puStack_1058 = &DAT_04884eb8;
        puStack_1068 = (ulong *)0x0;
        uStack_1050 = 1;
        pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
        uStack_1048 = nn::os::GetThreadId(pTVar11);
        puStack_1040 = (ulong *)0x0;
        uStack_1038 = 0;
        pcStack_1030 = (char *)0x0;
        uStack_1028 = 0;
        uStack_1020 = 0;
        FUN_0322c554(&puStack_1068,"AfterReflectNew should never be called from this handler",
                     PTR_DAT_047d1b38);
        pcStack_1030 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        uStack_1028 = 0x2e0;
        FUN_0322c8e0(&puStack_1068);
      }
      else {
LAB_0320caac:
        puStack_1058 = &DAT_04884eb8;
        uStack_1050 = 1;
        pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
        uStack_1048 = nn::os::GetThreadId(pTVar11);
        uStack_1038 = 0;
        pcStack_1030 = (char *)0x0;
        uStack_1028 = 0;
        uStack_1020 = 0;
        auStack_1018[0]._0_1_ = '\0';
        uStack_1060 = 0x10000000000;
        puStack_1068 = auStack_1018;
        puStack_1040 = auStack_1018;
        FUN_0322c554(&puStack_1068,"AfterReflectNew should never be called from this handler",
                     PTR_DAT_047d1b38);
        uStack_1028 = 0x2e0;
        pcStack_1030 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        if ((char)auStack_1018[0] != '\0') {
          sVar13 = strlen((char *)auStack_1018);
          *(undefined2 *)
           ((long)auStack_1018 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) = 10;
          printf("%s",auStack_1018);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      if (((ulong)puStack_1040 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)puStack_1040 + -1),0);
      }
    }
    if (plVar27 != (long *)0x0) {
      lVar18 = *plVar27;
      if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar27[6] != 0)) {
        puVar26 = (undefined8 *)plVar27[2];
        uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
        if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
          *puVar26 = &DAT_03c4e575;
          puVar26[1] = *(undefined8 *)(plVar27[6] + 8);
        }
      }
      puVar26 = (undefined8 *)plVar27[2];
      uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
      if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
        *puVar26 = &DAT_03c2d363;
        uVar9 = nn::os::GetSystemTick();
        puVar26[1] = uVar9;
      }
      if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
        (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
      }
    }
  }
  param_1[6] = 0;
LAB_0320c1cc:
  lVar18 = lStack_1208;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (iVar28 != 0) {
    lVar14 = lStack_1208 + (long)iVar28 * 0x30;
    do {
      if ((*(ulong *)(lVar14 + -8) & 1) != 0) {
        plVar23 = (long *)(*(ulong *)(lVar14 + -8) & 0xfffffffffffffffe);
        plVar27 = plVar23 + 1;
        do {
          lVar15 = *plVar27;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar6) {
            *(int *)plVar27 = (int)lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar23 != (long *)0x0) && ((int)lVar15 == 1)) {
          (**(code **)(*plVar23 + 8))();
        }
      }
      puVar25 = (ulong *)(lVar14 + -0x20);
      lVar14 = lVar14 + -0x30;
      if ((*puVar25 & 1) != 0) {
        plVar23 = (long *)(*puVar25 & 0xfffffffffffffffe);
        plVar27 = plVar23 + 1;
        do {
          lVar15 = *plVar27;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar6) {
            *(int *)plVar27 = (int)lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar23 != (long *)0x0) && ((int)lVar15 == 1)) {
          (**(code **)(*plVar23 + 8))();
        }
      }
    } while (lVar14 != lVar18);
  }
  uVar16 = uStack_1200;
  uVar24 = uStack_1200 >> 0x20;
  uStack_1200 = uVar24 << 0x20;
  if ((lVar18 != 0) && (-1 < (long)uVar16)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar18,uVar24 * 0x30);
  }
  plVar27 = plStack_11c0;
  if (iStack_11b8 != 0) {
    plVar23 = plStack_11c0 + iStack_11b8;
    do {
      plVar23 = plVar23 + -1;
      plVar10 = (long *)*plVar23;
      if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
        plVar12 = plVar10 + 2;
        do {
          lVar18 = *plVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
    } while (plVar23 != plVar27);
  }
  iStack_11b8 = 0;
  if ((-1 < (int)uStack_11b4) && (plStack_11c0 != (long *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,plStack_11c0,(uStack_11b4 & 0xffffffff) << 3);
  }
  plStack_11c0 = (long *)0x0;
  uStack_11b4 = CONCAT44(uStack_11b4._4_4_,0x80000000);
  if ((plStack_11c8 != (long *)0x0) && (plStack_11c8[1] != 0)) {
    plVar27 = plStack_11c8 + 2;
    do {
      lVar18 = *plVar27;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar6) {
        *plVar27 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 + -1 == 0) {
      (**(code **)(*plStack_11c8 + 0x18))();
    }
  }
  lVar18 = lStack_11d8;
  if ((int)uStack_11d0 != 0) {
    lVar14 = lStack_11d8 + (long)(int)uStack_11d0 * 0x20;
    do {
      puVar25 = (ulong *)(lVar14 + -0x10);
      lVar14 = lVar14 + -0x20;
      if ((*puVar25 & 1) != 0) {
        plVar23 = (long *)(*puVar25 & 0xfffffffffffffffe);
        plVar27 = plVar23 + 1;
        do {
          lVar15 = *plVar27;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar6) {
            *(int *)plVar27 = (int)lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar23 != (long *)0x0) && ((int)lVar15 == 1)) {
          (**(code **)(*plVar23 + 8))();
        }
      }
    } while (lVar14 != lVar18);
  }
  uVar24 = uStack_11d0;
  uVar16 = (ulong)uStack_11d0._4_4_;
  uStack_11d0 = (ulong)uStack_11d0._4_4_ << 0x20;
  if ((-1 < (long)uVar24) && (lStack_11d8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lStack_11d8,uVar16 << 5);
  }
  FUN_0322ccb8(&puStack_11a8);
  if ((uStack_1138 & 1) != 0) {
    plVar23 = (long *)(uStack_1138 & 0xfffffffffffffffe);
    plVar27 = plVar23 + 1;
    do {
      lVar18 = *plVar27;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar6) {
        *(int *)plVar27 = (int)lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar23 != (long *)0x0) && ((int)lVar18 == 1)) {
      (**(code **)(*plVar23 + 8))();
    }
  }
  if ((uStack_1150 & 1) != 0) {
    plVar23 = (long *)(uStack_1150 & 0xfffffffffffffffe);
    plVar27 = plVar23 + 1;
    do {
      lVar18 = *plVar27;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar6) {
        *(int *)plVar27 = (int)lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar23 != (long *)0x0) && ((int)lVar18 == 1)) {
      (**(code **)(*plVar23 + 8))();
    }
  }
  if (plStack_1130 != (long *)0x0) {
    lVar18 = *plStack_1130;
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plStack_1130[6] != 0)) {
      puVar26 = (undefined8 *)plStack_1130[2];
      uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
      if ((uVar24 <= (ulong)plStack_1130[3]) &&
         (plStack_1130[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
        *puVar26 = &DAT_03c4e575;
        puVar26[1] = *(undefined8 *)(plStack_1130[6] + 8);
      }
    }
    puVar26 = (undefined8 *)plStack_1130[2];
    uVar24 = (long)puVar26 + 0x17U & 0xfffffffffffffff8;
    if ((uVar24 <= (ulong)plStack_1130[3]) &&
       (plStack_1130[2] = uVar24, puVar26 != (undefined8 *)0x0)) {
      *puVar26 = &DAT_03c3697b;
      uVar9 = nn::os::GetSystemTick();
      puVar26[1] = uVar9;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
      if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
        (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
      }
    }
  }
  return;
code_r0x0320b704:
  lVar15 = *plVar27;
  plVar23 = (long *)(lVar15 + ((long)iVar8 + -1) * 0x30);
  ppuStack_1100 = (ulong **)*plVar23;
  lStack_10f8 = plVar23[1];
  uStack_10f0 = plVar23[2];
  if ((uStack_10f0 & 1) != 0) {
    piVar3 = (int *)((uStack_10f0 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar15 = lVar15 + ((long)iVar8 + -1) * 0x30;
  lStack_10e8 = *(long *)(lVar15 + 0x18);
  puStack_10e0 = *(ulong **)(lVar15 + 0x20);
  uStack_10d8 = *(ulong *)(lVar15 + 0x28);
  if ((uStack_10d8 & 1) != 0) {
    piVar3 = (int *)((uStack_10d8 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar15 = param_1[7] + (long)*(int *)(param_1 + 8) * 0x30;
  uVar24 = *(ulong *)(lVar15 + -8);
  if ((uVar24 & 1) != 0) {
    plVar10 = (long *)(uVar24 & 0xfffffffffffffffe);
    plVar23 = plVar10 + 1;
    do {
      lVar29 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = (int)lVar29 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar29 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  uVar24 = *(ulong *)(lVar15 + -0x20);
  if ((uVar24 & 1) != 0) {
    plVar10 = (long *)(uVar24 & 0xfffffffffffffffe);
    plVar23 = plVar10 + 1;
    do {
      lVar15 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = (int)lVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar15 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  lVar15 = lStack_1208;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  if (lStack_10e8 == 0) {
    lVar20 = lStack_1208 + (long)iVar28 * 0x30;
    uVar24 = *(ulong *)(lVar20 + -8);
    if ((uVar24 & 1) != 0) {
      plVar10 = (long *)(uVar24 & 0xfffffffffffffffe);
      plVar23 = plVar10 + 1;
      do {
        lVar29 = *plVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *(int *)plVar23 = (int)lVar29 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar29 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    uVar24 = *(ulong *)(lVar20 + -0x20);
    if ((uVar24 & 1) != 0) {
      plVar10 = (long *)(uVar24 & 0xfffffffffffffffe);
      plVar23 = plVar10 + 1;
      do {
        lVar20 = *plVar23;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar6) {
          *(int *)plVar23 = (int)lVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar10 != (long *)0x0) && ((int)lVar20 == 1)) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    iVar28 = iVar28 + -1;
    uStack_1200 = CONCAT44(uStack_1200._4_4_,iVar28);
  }
  else {
    puVar25 = puStack_10e0;
    if ((*puStack_10e0 & 1) == 0) {
      do {
        puVar25 = (ulong *)puVar25[1];
      } while ((*puVar25 & 1) == 0);
    }
    if ((puStack_10e0 != (ulong *)0x0) && ((puVar25[2] & 0x1f) == 8)) {
      puVar25 = puStack_10e0;
      if ((*puStack_10e0 & 1) == 0) {
        do {
          puVar25 = (ulong *)puVar25[1];
          if (puVar25 == (ulong *)0x0) {
            if (iVar28 == 0) goto LAB_0320b9e8;
            goto LAB_0320b900;
          }
        } while ((*puVar25 & 1) == 0);
      }
      if ((int)(puVar25[2] >> 8) == 0 && iVar28 != 0) {
LAB_0320b900:
        lVar15 = (long)iVar28 * 0x30;
        do {
          if ((lStack_10e8 == *(long *)(lVar20 + lVar15 + -0x18)) &&
             (puStack_10e0 == *(ulong **)(lVar20 + lVar15 + -0x10))) {
            if (DAT_04884f08 == 0) {
              if (DAT_046aaf68 != '\0') goto LAB_0320bb58;
            }
            else {
              if (DAT_046aaf68 == '\0') {
                puStack_1058 = &DAT_04884eb8;
                puStack_1068 = (ulong *)0x0;
                uStack_1050 = 1;
                pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
                uStack_1048 = nn::os::GetThreadId(pTVar11);
                uStack_1020 = 0;
                puStack_1040 = (ulong *)0x0;
                uStack_1038 = 0;
                pcStack_1030 = (char *)0x0;
                uStack_1028 = 0;
                FUN_0322c554(&puStack_1068,"Found loop through array {}",PTR_DAT_047e5e28,
                             &lStack_10e8);
                pcStack_1030 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                ;
                uStack_1028 = 0xf0;
                FUN_0322c8e0(&puStack_1068);
              }
              else {
LAB_0320bb58:
                puStack_1058 = &DAT_04884eb8;
                puStack_1068 = (ulong *)0x0;
                uStack_1050 = 1;
                pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
                uStack_1048 = nn::os::GetThreadId(pTVar11);
                uStack_1038 = 0;
                pcStack_1030 = (char *)0x0;
                uStack_1028 = 0;
                uStack_1020 = 0;
                auStack_1018[0]._0_1_ = '\0';
                uStack_1060 = 0x10000000000;
                puStack_1068 = auStack_1018;
                puStack_1040 = auStack_1018;
                FUN_0322c554(&puStack_1068,"Found loop through array {}",PTR_DAT_047e5e28,
                             &lStack_10e8);
                pcStack_1030 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                ;
                uStack_1028 = 0xf0;
                if ((char)auStack_1018[0] != '\0') {
                  sVar13 = strlen((char *)auStack_1018);
                  *(undefined2 *)
                   ((long)auStack_1018 + (long)(int)((int)sVar13 - (uint)((int)sVar13 == 0xff))) =
                       10;
                  printf("%s",auStack_1018);
                  fflush(__stream);
                }
              }
              if (((ulong)puStack_1040 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)puStack_1040 + -1),0);
              }
            }
            *(undefined4 *)(param_1 + 1) = 0x80040200;
            break;
          }
          lVar15 = lVar15 + -0x30;
        } while (lVar15 != 0);
      }
    }
LAB_0320b9e8:
    iVar8 = iVar28 + 1;
    lVar15 = lVar20;
    if ((int)(uStack_1200._4_4_ & 0x7fffffff) <= iVar28) {
      FUN_032107fc(&lStack_1208,(long)iVar8);
      lVar15 = lStack_1208;
      iVar28 = (int)uStack_1200;
    }
    plVar23 = (long *)(lVar15 + (long)iVar28 * 0x30);
    *plVar23 = (long)ppuStack_1100;
    plVar23[1] = lStack_10f8;
    plVar23[2] = uStack_10f0;
    if ((uStack_10f0 & 1) != 0) {
      piVar3 = (int *)((uStack_10f0 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar20 = lVar15 + (long)iVar28 * 0x30;
    *(long *)(lVar20 + 0x18) = lStack_10e8;
    *(ulong **)(lVar20 + 0x20) = puStack_10e0;
    *(ulong *)(lVar20 + 0x28) = uStack_10d8;
    if ((uStack_10d8 & 1) != 0) {
      piVar3 = (int *)((uStack_10d8 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = *piVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_1200 = CONCAT44(uStack_1200._4_4_,iVar8);
    iVar28 = *(int *)(param_1 + 8);
    lVar20 = (long)iVar28;
    uVar19 = uVar19 + 1;
    if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) <= iVar28) {
      FUN_032107fc(plVar27,lVar20 + 1);
      iVar28 = *(int *)(param_1 + 8);
    }
    puVar26 = (undefined8 *)(param_1[7] + (long)iVar28 * 0x30);
    *puVar26 = uStack_11e8;
    puVar26[1] = uStack_11e0;
    puVar26[4] = uStack_11f0;
    puVar26[5] = 0;
    puVar26[2] = 0;
    puVar26[3] = uStack_11f8;
    *(int *)(param_1 + 8) = (int)(lVar20 + 1);
    FUN_0320f220(param_1,&ppuStack_1100,&lStack_10e8,0);
    iVar28 = iVar8;
  }
  if ((uStack_10d8 & 1) != 0) {
    plVar10 = (long *)(uStack_10d8 & 0xfffffffffffffffe);
    plVar23 = plVar10 + 1;
    do {
      lVar20 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = (int)lVar20 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar20 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  if ((uStack_10f0 & 1) != 0) {
    plVar10 = (long *)(uStack_10f0 & 0xfffffffffffffffe);
    plVar23 = plVar10 + 1;
    do {
      lVar20 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *(int *)plVar23 = (int)lVar20 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar20 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  iVar8 = *(int *)(param_1 + 8);
  lVar20 = lVar15;
  if (iVar8 == 0) goto LAB_0320bcac;
  goto LAB_0320b6fc;
  while (puVar26 = (undefined8 *)puVar26[1], puVar26 != (undefined8 *)0x0) {
LAB_0320cbb0:
    uVar19 = (uint)*puVar26;
    puStack_1128 = PTR_DAT_047ddc28;
    if ((uVar19 >> 0xb & 1) != 0) {
      uVar24 = CONCAT44(uVar19,uVar19) & 0x7ff000007ff;
      pcVar17 = (code *)puVar26[(ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8))
                                             ) + 2];
      if (pcVar17 != (code *)0x0) {
LAB_0320cbfc:
        (*pcVar17)();
        puStack_1128 = extraout_x1;
      }
      break;
    }
  }
LAB_0320cc00:
  ppuStack_1108 = &puStack_1128;
  uStack_1070 = 1;
  uStack_1118 = 1;
  puStack_1110 = PTR_DAT_047e5c18;
  ppuStack_1100 = &puStack_1068;
  puStack_1068 = (ulong *)((ulong)puStack_1068 & 0xffffffffffffff00);
  uStack_10f0 = uStack_10f0 & 0xffffffffffffff00;
  lStack_10f8 = 0x8000100000000001;
  FUN_031c8aac(&ppuStack_1100,
               "A cloned object of type \'{}\' has stopped being referenced before/while calling afterReflectNew"
               ,&uStack_1118);
                    /* WARNING: Subroutine does not return */
  FUN_032270d0(0x5c9ebbbc,
               "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
               ,0x2f4,ppuStack_1100);
}


