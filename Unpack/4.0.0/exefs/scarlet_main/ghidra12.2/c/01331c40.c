/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01331c40; name: FUN_01331c40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01331c40(long *param_1,ulong *param_2)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  MutexType *pMVar17;
  size_t sVar18;
  void *__dest;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  long *plVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  long lVar30;
  undefined8 *puVar31;
  char *__s;
  ulong uVar32;
  long *plVar33;
  long *plVar34;
  MutexType *pMVar35;
  long *plVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  long lVar45;
  float fVar46;
  int iVar47;
  float fVar48;
  float fVar49;
  long *local_280;
  undefined1 *local_278;
  int local_270;
  uint local_26c;
  undefined1 auStack_268 [64];
  uint local_228;
  int local_224;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long **local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_68;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  plVar25 = param_1 + 5;
  param_1[3] = (long)&PTR_LAB_0460f240;
  *param_1 = (long)&PTR_LAB_0460ed98;
  param_1[4] = (long)&PTR_LAB_0460f4c8;
  FUN_02f08924(plVar25);
  FUN_02f1d1b8();
  param_1[0x91] = 0;
  param_1[0x97] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x9a] = 0;
  puVar10 = PTR_DAT_047d1a08;
  local_280 = (long *)0x410;
  puVar16 = (undefined4 *)(**(code **)PTR_DAT_047d1a08)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(puVar16,"Block");
  }
  plVar19 = param_1 + 0x9a;
  lVar45 = 0x1c;
  do {
    lVar30 = lVar45 + 0x10;
    *(undefined8 *)((long)puVar16 + lVar45 + -0xc) = 0xffffff00ffffff;
    *(undefined8 *)((long)puVar16 + lVar45 + -4) = 0xffffff00ffffff;
    lVar45 = lVar30;
  } while (lVar30 != 0x41c);
  *puVar16 = 0;
  puVar16[1] = 0;
  *(undefined8 *)(puVar16 + 2) = 0;
  do {
    if (*plVar19 != 0) {
      ClearExclusiveLocal();
      (**(code **)(puVar10 + 8))(0,puVar16,0);
      break;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar4) {
      *plVar19 = (long)puVar16;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  param_1[0xa6] = 0x3e8000003f000000;
  param_1[0xc2] = 0x3f0e38e43fe66666;
  lVar45 = NEON_fmov(0x3f800000,4);
  param_1[0xab] = lVar45;
  param_1[0xa7] = 0x3f6666663f666666;
  param_1[0xc3] = 0x3e8e38e440666666;
  lVar9 = _UNK_03cab6a8;
  lVar8 = _DAT_03cab6a0;
  lVar30 = _UNK_03caaf68;
  lVar45 = _DAT_03caaf60;
  param_1[0xb5] = 0x3f80000000000001;
  param_1[0xbd] = lVar9;
  param_1[0xbc] = lVar8;
  param_1[0xbf] = lVar30;
  param_1[0xbe] = lVar45;
  fVar40 = (float)DAT_03cb5538;
  uVar27 = (ulong)DAT_03cb5538 >> 0x20;
  param_1[0xa8] = 0x3d0888893d088889;
  param_1[0xac] = 0x3d0888893d088889;
  param_1[0xa9] = 0x41efffff41efffff;
  param_1[0xad] = 0x3c0888893c088889;
  *(undefined4 *)(param_1 + 0xa3) = 0x3f333333;
  param_1[0xc0] = 0x4285555542855555;
  param_1[0xb4] = 0x3e80000000000004;
  param_1[0xc1] = -0x3dfaaaaa3dfaaaab;
  param_1[0xaf] = 0x454ccb33454ccb33;
  *(undefined4 *)((long)param_1 + 0x59c) = 0x3dcccccd;
  param_1[0xb0] = 0x39a0014039a00140;
  param_1[0xb1] = 0x3dcccccd3dcccccd;
  fVar39 = (float)DAT_03cb5520;
  uVar28 = (ulong)DAT_03cb5520 >> 0x20;
  param_1[0xae] = 0x42efffff42efffff;
  lVar45 = _DAT_03cab4b0;
  fVar39 = SQRT(fVar39 + (float)uVar28 + 0.0);
  param_1[0xb9] = _UNK_03cab4b8;
  param_1[0xb8] = lVar45;
  lVar45 = _DAT_03cac170;
  uVar37 = (undefined4)_UNK_03cac178;
  if (fVar39 == 0.0) {
    fVar39 = 9.81;
  }
  param_1[0xa2] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)((long)param_1 + 0x5bc) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  *(undefined4 *)((long)param_1 + 0x5b4) = 0x5f7ffff0;
  param_1[0x99] = param_1[0x9a];
  param_1[0xbb] = CONCAT44(SQRT(fVar40 + (float)uVar27 + 0.0),uVar37);
  param_1[0xba] = lVar45;
  *(float *)(param_1 + 0xb6) = fVar39;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  memset(param_1 + 0xd4,0,0x158);
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  uVar27 = param_2[0x14];
  param_1[0x100] = uVar27;
  if ((uVar27 != 0) && (*(long *)(uVar27 + 8) != 0)) {
    plVar19 = (long *)(uVar27 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = *plVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0x104] = 0;
  param_1[0x105] = -0x8000000000000000;
  param_1[0x106] = 0;
  param_1[0x107] = -0x8000000000000000;
  param_1[0x108] = 0;
  param_1[0x109] = -0x8000000000000000;
  param_1[0x10a] = 0;
  param_1[0x10b] = -0x8000000000000000;
  param_1[0x10c] = 0;
  param_1[0x10d] = -0x8000000000000000;
  param_1[0x10e] = 0;
  param_1[0x10f] = -0x8000000000000000;
  param_1[0x112] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  param_1[0x117] = 0;
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  param_1[0x114] = 0;
  *(undefined8 *)((long)param_1 + 0x8d4) = 0x80000000;
  param_1[0x11c] = 0;
  param_1[0x11d] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  param_1[0x11f] = 0;
  param_1[0x122] = 0;
  param_1[0x121] = 0;
  uVar27 = param_2[0x13];
  param_1[0x123] = uVar27;
  if ((uVar27 != 0) && (*(long *)(uVar27 + 8) != 0)) {
    plVar19 = (long *)(uVar27 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = *plVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0x128] = 0;
  FUN_031c45a4(0x3f333333,param_1 + 300,(long)(int)param_2[2]);
  *(undefined1 *)(param_1 + 0x12f) = 0;
  FUN_031c45a4(0x3f333333,param_1 + 0x130,(long)(int)param_2[6]);
  *(undefined1 *)(param_1 + 0x133) = 0;
  param_1[0x134] = 0;
  if (*(long *)PTR_DAT_047d19f0 == 0) {
    local_b0 = 1;
    uStack_a8 = 0;
    local_a0 = &local_280;
    uStack_98 = 0;
    local_c0 = PTR_DAT_047e34b8 + 0x10;
    uStack_b8 = 0xffffffff;
    local_90 = 0x1bf;
    local_88 = 0;
    memset(&local_280,0,0x1c0);
    FUN_0322bd4c(&local_c0,
                 "Shape dispatch table is not initialized! Please call hknpShapeFunctionsSingleton::setDefaults() before creating world."
                 ,0x76);
    FUN_03226c50(0x34739d70,&local_280,
                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Physics/Physics/Dynamics/World/hknpWorld.cpp"
                 ,0xb2);
  }
  uVar27 = param_2[10];
  uVar32 = param_2[3];
  uVar28 = param_2[2];
  *plVar25 = 0;
  local_280 = (long *)0x20;
  pMVar17 = (MutexType *)(**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(pMVar17,"hkCriticalSection");
  }
  nn::os::InitializeMutex(pMVar17,true,0);
  pMVar35 = (MutexType *)param_1[0x25];
  param_1[0x25] = (long)pMVar17;
  if (pMVar35 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar35);
    (**(code **)(puVar10 + 8))(0,pMVar35,0);
  }
  *(bool *)(param_1 + 0xd) = (char)uVar27 != '\0';
  FUN_012e02d4(plVar25,uVar32,(int)uVar28);
  param_1[0x101] = 0;
  uVar27 = param_1[0x112];
  param_1[0x102] = 0;
  param_1[0x126] = 0;
  param_1[0x125] = 0;
  param_1[5] = (long)param_1;
  *(undefined4 *)(param_1 + 0x103) = 1;
  param_1[0x124] = 0;
  __s = (char *)(*param_2 & 0xfffffffffffffffe);
  if ((char *)(uVar27 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      uVar28 = 0;
    }
    else {
      sVar18 = strlen(__s);
      sVar18 = (size_t)((int)sVar18 + 1);
      __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar18);
      memcpy(__dest,__s,sVar18);
      uVar28 = (ulong)__dest | 1;
    }
    param_1[0x112] = uVar28;
    if ((uVar27 & 1) != 0) {
      (**(code **)(puVar10 + 8))(0,uVar27 - 1,0);
    }
  }
  uVar27 = param_2[0x10];
  param_1[0x111] = param_2[0x11];
  param_1[0x110] = uVar27;
  *(int *)(param_1 + 0x113) = (int)param_2[0x12];
  *(undefined1 *)(param_1 + 0x127) = 0;
  uVar27 = param_2[1];
  if ((uVar27 != 0) && (*(long *)(uVar27 + 8) != 0)) {
    plVar19 = (long *)(uVar27 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = *plVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar19 = (long *)param_1[0x94];
  param_1[0x94] = uVar27;
  if ((plVar19 != (long *)0x0) && (plVar19[1] != 0)) {
    plVar20 = plVar19 + 2;
    do {
      lVar45 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))();
    }
  }
  param_1[0xb2] =
       CONCAT44(*(undefined4 *)((long)param_2 + 0xec),*(undefined4 *)((long)param_2 + 0xec));
  *(int *)((long)param_1 + 0x59c) = (int)param_2[0x23];
  *(int *)(param_1 + 0xb3) = (int)param_2[0x1e];
  param_1[0xb1] = CONCAT44((int)param_2[0x1d],(int)param_2[0x1d]);
  if ((char)param_2[0x25] == '\0') {
    fVar39 = *(float *)((long)param_2 + 0x104);
    fVar40 = *(float *)(param_2 + 0x21);
    fVar46 = fVar39 / fVar40;
    param_1[0xa7] = CONCAT44(fVar40,fVar40);
    fVar44 = fVar39 * 0.5;
    *(float *)(param_1 + 0xa6) = fVar39;
    fVar39 = fVar40 / fVar39;
    *(float *)(param_1 + 0xc2) = fVar39;
    *(float *)((long)param_1 + 0x534) = fVar44;
    *(float *)((long)param_1 + 0x614) = fVar46;
    param_1[0xbd] = (ulong)(uint)fVar46;
    param_1[0xbc] = CONCAT44(fVar46,fVar46);
    *(float *)(param_1 + 0xc3) = fVar40 / fVar44;
    *(float *)((long)param_1 + 0x61c) = fVar44 / fVar40;
    param_1[0xbf] = (ulong)(uint)fVar39;
    param_1[0xbe] = CONCAT44(fVar39,fVar39);
    fVar46 = fVar46 * (float)param_1[0xae];
    fVar39 = -(fVar44 / fVar40) * (float)param_1[0xae];
    param_1[0xc0] = CONCAT44(fVar46,fVar46);
    param_1[0xc1] = CONCAT44(fVar39,fVar39);
    iVar15 = *(int *)((long)param_2 + 0x10c);
    uVar37 = (undefined4)param_2[0x22];
    fVar39 = (float)param_1[0xa8];
    auVar43._0_8_ = param_1[0xac];
    auVar43._8_8_ = 0;
  }
  else {
    local_280 = (long *)0x38;
    plVar19 = param_1 + 0xc9;
    plVar20 = (long *)(**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar20,"hknpVariableTimeStepUtil");
    }
    *plVar20 = (long)(PTR_DAT_047e4720 + 0x10);
    plVar20[1] = 0xffffffff;
    plVar20[2] = 1;
    plVar20[3] = 0x3f19999a3d088889;
    plVar20[4] = 0x43f800000;
    plVar20[5] = 0x800000001;
    *(undefined4 *)(plVar20 + 6) = 0x3db04387;
    plVar21 = (long *)*plVar19;
    if ((plVar21 != plVar20) && (*plVar19 = (long)plVar20, plVar21 != (long *)0x0)) {
      if (plVar21[1] != 0) {
        plVar20 = plVar21 + 2;
        do {
          lVar45 = *plVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = lVar45 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar45 + -1 == 0) {
          (**(code **)(*plVar21 + 0x18))();
        }
      }
      plVar20 = (long *)*plVar19;
    }
    fVar39 = *(float *)((long)param_2 + 0x104);
    iVar15 = *(int *)((long)param_2 + 0x10c);
    iVar26 = *(int *)((long)param_2 + 0x134);
    uVar27 = param_2[0x21];
    fVar40 = *(float *)((long)param_2 + 300);
    uVar28 = param_2[0x26];
    *(float *)(plVar20 + 3) = fVar40;
    *(float *)((long)plVar20 + 0x1c) = fVar39;
    *(int *)(plVar20 + 4) = (int)uVar27;
    *(int *)((long)plVar20 + 0x24) = iVar15;
    *(int *)(plVar20 + 5) = (int)uVar28;
    *(int *)((long)plVar20 + 0x2c) = iVar26;
    *(float *)(plVar20 + 6) = (fVar40 * (float)iVar26) / ((float)iVar15 * SQRT(fVar39));
    lVar45 = param_1[0xc9];
    fVar40 = *(float *)(lVar45 + 0x30);
    fVar46 = *(float *)(lVar45 + 0x1c);
    fVar39 = fVar40;
    if ((float)param_1[0xa8] <= fVar40) {
      fVar39 = (float)param_1[0xa8];
    }
    fVar49 = *(float *)(lVar45 + 0x20);
    iVar47 = *(int *)(lVar45 + 0x24);
    fVar44 = *(float *)(lVar45 + 0x18) / fVar39;
    iVar26 = *(int *)(lVar45 + 0x28);
    iVar15 = *(int *)(lVar45 + 0x2c);
    param_1[0xa7] = CONCAT44(fVar49,fVar49);
    iVar29 = (int)((float)iVar47 / fVar44 + 0.999);
    if (iVar26 <= iVar29) {
      iVar26 = iVar29;
    }
    if (iVar26 <= iVar15) {
      iVar15 = iVar26;
    }
    auVar43 = ZEXT416((uint)fVar40);
    if ((float)param_1[0xac] <= fVar40) {
      auVar43._0_8_ = param_1[0xac] & 0xffffffff;
      auVar43._8_8_ = 0;
    }
    fVar40 = (fVar44 * (float)iVar15) / (float)iVar47;
    fVar46 = fVar46 / (fVar40 * fVar40);
    if (1.0 < fVar46) {
      fVar46 = 1.0;
    }
    fVar48 = fVar46 / fVar49;
    fVar44 = fVar49 / fVar46;
    *(float *)(param_1 + 0xa6) = fVar46;
    fVar46 = fVar46 * 0.5;
    *(float *)((long)param_1 + 0x534) = fVar46;
    *(float *)((long)param_1 + 0x614) = fVar48;
    *(float *)(param_1 + 0xc2) = fVar44;
    *(float *)(param_1 + 0xc3) = fVar49 / fVar46;
    uVar37 = (undefined4)param_1[0xb5];
    fVar40 = fVar48 * (float)param_1[0xae];
    param_1[0xc0] = CONCAT44(fVar40,fVar40);
    fVar40 = -(fVar46 / fVar49) * (float)param_1[0xae];
    param_1[0xbd] = (ulong)(uint)fVar48;
    param_1[0xbc] = CONCAT44(fVar48,fVar48);
    param_1[0xbf] = (ulong)(uint)fVar44;
    param_1[0xbe] = CONCAT44(fVar44,fVar44);
    *(float *)((long)param_1 + 0x61c) = fVar46 / fVar49;
    param_1[0xc1] = CONCAT44(fVar40,fVar40);
  }
  FUN_02f48364(fVar39,auVar43,param_1 + 0xa6,param_1 + 0x110,iVar15,uVar37);
  auVar41 = ZEXT816(0x5f7ffff0);
  if (*(float *)((long)param_2 + 0x11c) < 1.8446726e+19) {
    auVar41 = ZEXT416((uint)((*(float *)((long)param_2 + 0x11c) * (float)(int)param_1[0xb4]) /
                            (float)param_1[0xa8]));
  }
  *(int *)((long)param_1 + 0x5b4) = auVar41._0_4_;
  plVar19 = (long *)param_2[0xb];
  if (plVar19 == (long *)0x0) {
    local_280 = (long *)0x78;
    plVar19 = (long *)(**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar19,"hknpMaterialLibrary");
    }
    FUN_0133b5b8(plVar19,0x40);
    plVar20 = (long *)param_1[0x115];
    if (((plVar20 != plVar19) && (param_1[0x115] = (long)plVar19, plVar20 != (long *)0x0)) &&
       (plVar20[1] != 0)) {
      plVar19 = plVar20 + 2;
      do {
        lVar45 = *plVar19 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = lVar45;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01332664:
      if (lVar45 == 0) {
        (**(code **)(*plVar20 + 0x18))();
      }
    }
  }
  else {
    plVar20 = (long *)param_1[0x115];
    if (plVar20 != plVar19) {
      if (plVar19[1] != 0) {
        plVar19 = plVar19 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = *plVar19 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar20 = (long *)param_1[0x115];
        plVar19 = (long *)param_2[0xb];
      }
      param_1[0x115] = (long)plVar19;
      if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
        plVar19 = plVar20 + 2;
        do {
          lVar45 = *plVar19 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = lVar45;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_01332664;
      }
    }
  }
  *(undefined4 *)((long)param_1 + 0x81c) = 0;
  *(uint *)((long)param_1 + 0x81c) = (uint)(*(char *)((long)param_2 + 0x115) == '\0') << 7;
  FUN_02f30b54(param_1[0x115] + 0x18,param_1,&LAB_02f30c10,0);
  FUN_02f30c38(param_1[0x115] + 0x28,param_1,&LAB_02f30cf4,0);
  FUN_02eb1718(param_1 + 0x119,0,*(undefined4 *)(param_1[0x115] + 0x50),0);
  plVar19 = (long *)param_2[0xc];
  if (plVar19 == (long *)0x0) {
    local_280 = (long *)0x70;
    plVar19 = (long *)(**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar19,"hknpMotionPropertiesLibrary");
    }
    plVar19[2] = 1;
    *plVar19 = (long)(PTR_DAT_047e3130 + 0x10);
    plVar19[1] = 0xffffffff;
    plVar19[3] = 0;
    plVar19[4] = 0;
    plVar19[5] = 0;
    plVar19[6] = 0;
    plVar19[7] = 0;
    plVar19[8] = 0;
    plVar19[9] = -0x8000000000000000;
    plVar19[10] = 0;
    *(undefined4 *)((long)plVar19 + 0x5c) = 0xffffffff;
    *(undefined4 *)(plVar19 + 0xc) = 0;
    *(undefined4 *)((long)plVar19 + 100) = 0xffffffff;
    lVar45 = plVar19[9];
    *(undefined4 *)(plVar19 + 0xb) = 0;
    iVar15 = FUN_0133ae28(plVar19 + 8,0,0x10,0x10);
    if (-1 < iVar15) {
      FUN_01339e74(plVar19 + 3,plVar19,(int)lVar45);
    }
    plVar20 = (long *)param_1[0x116];
    if ((plVar20 != plVar19) && (param_1[0x116] = (long)plVar19, plVar20 != (long *)0x0)) {
      if (plVar20[1] != 0) {
        plVar19 = plVar20 + 2;
        do {
          lVar45 = *plVar19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = lVar45 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar45 + -1 == 0) {
          (**(code **)(*plVar20 + 0x18))();
        }
      }
      plVar19 = (long *)param_1[0x116];
    }
    lVar45 = param_1[0x110];
    fVar39 = (float)lVar45;
    fVar40 = (float)((ulong)lVar45 >> 0x20);
    fVar46 = (float)param_1[0x111] * (float)param_1[0x111];
    auVar41._4_4_ = fVar46;
    auVar41._0_4_ = fVar46;
    auVar41._8_8_ = 0;
    FUN_0133a20c(SQRT(fVar39 * fVar39 + fVar40 * fVar40 + fVar46),plVar19);
  }
  else {
    plVar20 = (long *)param_1[0x116];
    if (plVar20 != plVar19) {
      if (plVar19[1] != 0) {
        plVar19 = plVar19 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = *plVar19 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar20 = (long *)param_1[0x116];
        plVar19 = (long *)param_2[0xc];
      }
      param_1[0x116] = (long)plVar19;
      if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
        plVar19 = plVar20 + 2;
        do {
          lVar45 = *plVar19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = lVar45 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar45 + -1 == 0) {
          (**(code **)(*plVar20 + 0x18))();
        }
      }
    }
  }
  FUN_02f30d14(param_1[0x116] + 0x28,param_1,&LAB_02f30dd0,0);
  plVar19 = (long *)param_2[0xd];
  if (plVar19 == (long *)0x0) {
    local_280 = (long *)0xa20;
    plVar19 = (long *)(**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar19,"hknpBodyQualityLibrary");
    }
    memset(plVar19 + 4,0,0xa00);
    puVar1 = PTR_DAT_047e4730;
    *plVar19 = (long)(PTR_DAT_047e4728 + 0x10);
    plVar19[1] = 0xffffffff;
    plVar19[2] = 1;
    plVar19[3] = 0;
    lVar45 = 0;
    do {
      lVar30 = lVar45 + 0x50;
      *(undefined **)((long)plVar19 + lVar45 + 0x20) = puVar1 + 0x10;
      *(undefined8 *)((long)plVar19 + lVar45 + 0x28) = 0xffffffff;
      *(undefined8 *)((long)plVar19 + lVar45 + 0x30) = 1;
      *(undefined8 *)((long)plVar19 + lVar45 + 0x3c) = 0xffffffff;
      *(undefined8 *)((long)plVar19 + lVar45 + 0x44) = 0x13dcccccd;
      *(undefined4 *)((long)plVar19 + lVar45 + 0x4c) = 1;
      *(undefined8 *)((long)plVar19 + lVar45 + 0x60) = 0x3a83126f3c23d70a;
      *(undefined4 *)((long)plVar19 + lVar45 + 0x68) = 0;
      *(undefined8 *)((long)plVar19 + lVar45 + 0x50) = 0x3d4ccccd3c23d70a;
      *(undefined8 *)((long)plVar19 + lVar45 + 0x58) = 0x3d4ccccd3c23d70a;
      lVar45 = lVar30;
    } while (lVar30 != 0xa00);
    plVar20 = (long *)param_1[0x117];
    if (((plVar20 != plVar19) && (param_1[0x117] = (long)plVar19, plVar20 != (long *)0x0)) &&
       (plVar20[1] != 0)) {
      plVar19 = plVar20 + 2;
      do {
        lVar45 = *plVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = lVar45 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar45 + -1 == 0) {
        (**(code **)(*plVar20 + 0x18))();
      }
    }
    local_280 = (long *)CONCAT62(CONCAT51(local_280._3_5_,*(undefined1 *)((long)param_2 + 0x94)),
                                 *(undefined2 *)((long)param_2 + 0xf4));
    FUN_02f484e0(param_1[0x117],&local_280);
  }
  else {
    plVar20 = (long *)param_1[0x117];
    if (plVar20 != plVar19) {
      if (plVar19[1] != 0) {
        plVar19 = plVar19 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = *plVar19 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar20 = (long *)param_1[0x117];
        plVar19 = (long *)param_2[0xd];
      }
      param_1[0x117] = (long)plVar19;
      if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
        plVar19 = plVar20 + 2;
        do {
          lVar45 = *plVar19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = lVar45 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar45 + -1 == 0) {
          (**(code **)(*plVar20 + 0x18))();
        }
      }
    }
  }
  FUN_02f47b18(param_1[0x117] + 0x18,param_1,&LAB_02f32c5c,0);
  FUN_02eb1718(param_1 + 0x11c,0,0x20,0);
  local_280 = (long *)0x58;
  plVar19 = (long *)(**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar19,"hknpShapeManager");
  }
  *plVar19 = (long)(PTR_DAT_047e4738 + 0x10);
  plVar19[1] = 0xffffffff;
  plVar19[2] = 1;
  plVar19[3] = 0;
  plVar19[4] = -0x100000000;
  plVar19[5] = 0;
  plVar19[7] = 0;
  plVar19[8] = -0x8000000000000000;
  plVar19[6] = -0x8000000000000000;
  local_280 = (long *)0x20;
  pMVar17 = (MutexType *)(**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(pMVar17,"hkCriticalSection");
  }
  nn::os::InitializeMutex(pMVar17,true,0);
  plVar19[9] = (long)pMVar17;
  *(undefined4 *)(plVar19 + 10) = 0;
  plVar20 = (long *)param_1[0x118];
  if (((plVar20 != plVar19) && (param_1[0x118] = (long)plVar19, plVar20 != (long *)0x0)) &&
     (plVar20[1] != 0)) {
    plVar19 = plVar20 + 2;
    do {
      lVar45 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar20 + 0x18))();
    }
  }
  plVar19 = (long *)param_2[0x24];
  if (plVar19 == (long *)0x0) {
    local_280 = (long *)0x28;
    plVar19 = (long *)(**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar19,"hknpBodyIntegrator");
    }
    puVar1 = PTR_DAT_047e4740;
    plVar19[2] = 1;
    plVar19[3] = 0;
    *plVar19 = (long)(puVar1 + 0x10);
    plVar19[1] = 0xffffffff;
    *(undefined4 *)(plVar19 + 4) = 0;
    plVar20 = (long *)param_1[0xca];
    if (((plVar20 != plVar19) && (param_1[0xca] = (long)plVar19, plVar20 != (long *)0x0)) &&
       (plVar20[1] != 0)) {
      plVar19 = plVar20 + 2;
      do {
        lVar45 = *plVar19 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = lVar45;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01334238:
      if (lVar45 == 0) {
        (**(code **)(*plVar20 + 0x18))();
      }
    }
  }
  else {
    plVar20 = (long *)param_1[0xca];
    if (plVar20 != plVar19) {
      if (plVar19[1] != 0) {
        plVar19 = plVar19 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = *plVar19 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar20 = (long *)param_1[0xca];
        plVar19 = (long *)param_2[0x24];
      }
      param_1[0xca] = (long)plVar19;
      if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
        plVar19 = plVar20 + 2;
        do {
          lVar45 = *plVar19 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = lVar45;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_01334238;
      }
    }
  }
  local_280 = (long *)0x50;
  lVar45 = (**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(lVar45,"hkPrimaryCommandDispatcher");
  }
  plVar19 = param_1 + 0x121;
  FUN_031c3d68(lVar45);
  param_1[0xff] = lVar45;
  *(undefined1 *)(param_1 + 299) = *(undefined1 *)((long)param_2 + 0x95);
  if (*(char *)((long)param_2 + 0x95) == '\0') {
    local_280 = (long *)0x80;
    lVar45 = (**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(lVar45,"hknpEventDispatcher");
    }
    FUN_02f4ee60(lVar45,param_1);
    if ((lVar45 != 0) && (*(long *)(lVar45 + 8) != 0)) {
      plVar20 = (long *)(lVar45 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *plVar20 = *plVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar20 = (long *)*plVar19;
    *plVar19 = lVar45;
    if ((plVar20 == (long *)0x0) || (plVar20[1] == 0)) goto LAB_01332d90;
    plVar21 = plVar20 + 2;
    do {
      lVar45 = *plVar21 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar4) {
        *plVar21 = lVar45;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    local_280 = (long *)0x98;
    plVar21 = (long *)(**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar21,"hknpEventMergeAndDispatcher");
    }
    FUN_02f4ee60(plVar21,param_1);
    puVar1 = PTR_DAT_047e4748;
    *(undefined1 *)(plVar21 + 0x10) = 0;
    *plVar21 = (long)(puVar1 + 0x10);
    plVar21[0x11] = 0;
    plVar21[0x12] = -0x8000000000000000;
    if ((plVar21 != (long *)0x0) && (plVar21[1] != 0)) {
      plVar20 = plVar21 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar4) {
          *plVar20 = *plVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar20 = (long *)*plVar19;
    *plVar19 = (long)plVar21;
    if ((plVar20 == (long *)0x0) || (plVar20[1] == 0)) goto LAB_01332d90;
    plVar21 = plVar20 + 2;
    do {
      lVar45 = *plVar21 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar4) {
        *plVar21 = lVar45;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar45 == 0) {
    (**(code **)(*plVar20 + 0x18))();
  }
LAB_01332d90:
  local_280 = (long *)0x28;
  plVar20 = (long *)(**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar20,"hknpApiCommandProcessor");
  }
  plVar20[1] = 0xffffffff;
  plVar36 = plVar20 + 2;
  *plVar36 = 1;
  puVar1 = PTR_DAT_047e4750 + 0x10;
  plVar20[3] = 0;
  plVar20[4] = (long)(param_1 + 3);
  *plVar20 = (long)puVar1;
  local_280 = (long *)0x38;
  plVar21 = (long *)(**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar21,"hknpInternalCommandProcessor");
  }
  plVar21[1] = 0xffffffff;
  plVar33 = plVar21 + 2;
  *plVar33 = 1;
  puVar1 = PTR_DAT_047e4758 + 0x10;
  plVar21[3] = 0;
  plVar21[4] = (long)param_1;
  *plVar21 = (long)puVar1;
  plVar21[5] = 0;
  plVar21[6] = -0x8000000000000000;
  local_280 = (long *)0x20;
  plVar22 = (long *)(**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar22,"hkDebugCommandProcessor");
  }
  plVar22[1] = 0xffffffff;
  plVar34 = plVar22 + 2;
  *plVar34 = 1;
  plVar22[3] = 0;
  *plVar22 = (long)(PTR_DAT_047e4760 + 0x10);
  if (plVar21[1] != 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar4) {
        *plVar33 = *plVar33 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar23 = (long *)param_1[0x122];
  param_1[0x122] = (long)plVar21;
  if ((plVar23 != (long *)0x0) && (plVar23[1] != 0)) {
    plVar2 = plVar23 + 2;
    do {
      lVar45 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))();
    }
  }
  lVar45 = param_1[0xff];
  if (plVar22[1] != 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar34,0x10);
      if (bVar4) {
        *plVar34 = *plVar34 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar23 = *(long **)(lVar45 + 0x10);
  *(long **)(lVar45 + 0x10) = plVar22;
  if ((plVar23 != (long *)0x0) && (plVar23[1] != 0)) {
    plVar2 = plVar23 + 2;
    do {
      lVar45 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))();
    }
  }
  lVar45 = param_1[0xff];
  if (plVar20[1] != 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar4) {
        *plVar36 = *plVar36 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar23 = *(long **)(lVar45 + 0x18);
  *(long **)(lVar45 + 0x18) = plVar20;
  if ((plVar23 != (long *)0x0) && (plVar23[1] != 0)) {
    plVar2 = plVar23 + 2;
    do {
      lVar45 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))();
    }
  }
  lVar45 = param_1[0xff];
  lVar30 = param_1[0x121];
  if ((lVar30 != 0) && (*(long *)(lVar30 + 8) != 0)) {
    plVar23 = (long *)(lVar30 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *plVar23 = *plVar23 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar23 = *(long **)(lVar45 + 0x28);
  *(long *)(lVar45 + 0x28) = lVar30;
  if ((plVar23 != (long *)0x0) && (plVar23[1] != 0)) {
    plVar2 = plVar23 + 2;
    do {
      lVar45 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))();
    }
  }
  lVar45 = param_1[0xff];
  if (plVar21[1] != 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar4) {
        *plVar33 = *plVar33 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar23 = *(long **)(lVar45 + 0x20);
  *(long **)(lVar45 + 0x20) = plVar21;
  if ((plVar23 != (long *)0x0) && (plVar23[1] != 0)) {
    plVar2 = plVar23 + 2;
    do {
      lVar45 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))();
    }
  }
  if (plVar20[1] != 0) {
    do {
      lVar45 = *plVar36;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar4) {
        *plVar36 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  if (plVar21[1] != 0) {
    do {
      lVar45 = *plVar33;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar4) {
        *plVar33 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
    }
  }
  if (plVar22[1] != 0) {
    do {
      lVar45 = *plVar34;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar34,0x10);
      if (bVar4) {
        *plVar34 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  plVar19 = (long *)*plVar19;
  if (plVar19[1] != 0) {
    plVar20 = plVar19 + 2;
    do {
      lVar45 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))();
    }
  }
  if (param_2[0x13] == 0) {
    local_280 = (long *)0x38;
    plVar19 = (long *)(**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar19,"hknpUserCommandDispatcher");
    }
    plVar19[2] = 1;
    *plVar19 = (long)(PTR_DAT_047e4768 + 0x10);
    plVar19[1] = 0xffffffff;
    plVar20 = plVar19 + 3;
    *plVar20 = 0;
    plVar19[4] = -0x8000000000000000;
    plVar19[5] = (long)&DAT_03d7702c;
    *(undefined4 *)(plVar19 + 6) = 0;
    local_280 = (long *)CONCAT44(local_280._4_4_,0xffffffff);
    uVar14 = FUN_02fda840(plVar20,&local_280);
    if (*(uint *)(plVar19 + 4) == uVar14) {
      iVar15 = uVar14 + 1;
      if ((int)(*(uint *)((long)plVar19 + 0x24) & 0x7fffffff) <= (int)uVar14) {
        FUN_02fda93c(plVar20,PTR_PTR_047d1a50,(long)iVar15);
        uVar14 = *(uint *)(plVar19 + 4);
      }
      puVar16 = (undefined4 *)(plVar19[3] + (long)(int)uVar14 * 0x10);
      *puVar16 = local_280._0_4_;
      *(undefined1 **)(puVar16 + 2) = &LAB_02fda6c0;
      *(int *)(plVar19 + 4) = iVar15;
    }
    else {
      *(undefined1 **)(*plVar20 + ((long)((ulong)uVar14 << 0x20) >> 0x1c) + 8) = &LAB_02fda6c0;
    }
    plVar20 = (long *)param_1[0x123];
    param_1[0x123] = (long)plVar19;
    if ((plVar20 != (long *)0x0) && (plVar20[1] != 0)) {
      plVar19 = plVar20 + 2;
      do {
        lVar45 = *plVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = lVar45 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar45 + -1 == 0) {
        (**(code **)(*plVar20 + 0x18))();
      }
    }
  }
  if ((char)param_2[0xe] == '\x01') {
    local_280 = (long *)0x2b0;
    plVar19 = (long *)(**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar19,"hknpDynamicSpaceSplitter");
    }
    uVar14 = *(uint *)((long)param_2 + 0x74);
    plVar19[2] = -0x8000000000000000;
    puVar1 = PTR_DAT_047e4770;
    *(undefined4 *)(plVar19 + 3) = 1;
    *plVar19 = (long)(puVar1 + 0x10);
    plVar19[1] = 0;
    *(undefined4 *)((long)plVar19 + 0x24) = 0;
    if (0 < (int)uVar14) {
      auVar41 = ZEXT816(0x40a00000);
      uVar27 = 0;
      do {
        fVar39 = (float)((uint)(uVar27 >> 2) & 0x3fffffff);
        lVar45 = uVar27 * 4;
        (plVar19 + uVar27 * 2 + 0x16)[1] = (ulong)(uint)(fVar39 * auVar41._0_4_);
        plVar19[uVar27 * 2 + 0x16] = CONCAT44(fVar39 * 10.0,(float)((uint)uVar27 & 3) * 10.0);
        uVar27 = uVar27 + 1;
        *(undefined4 *)((long)plVar19 + lVar45 + 0x28) = 0;
      } while (uVar14 != uVar27);
    }
    *(uint *)((long)plVar19 + 0x1c) = uVar14;
    *(int *)(plVar19 + 4) = (int)((uVar14 + 1) * uVar14) >> 1;
    FUN_02f502b4(plVar19);
  }
  else {
    local_280 = (long *)0x28;
    plVar19 = (long *)(**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar19,"hknpSingleCellSpaceSplitter");
    }
    plVar20 = plVar19 + 1;
    *plVar20 = 0;
    plVar19[2] = -0x8000000000000000;
    *(undefined4 *)(plVar19 + 3) = 0;
    *plVar19 = (long)(PTR_DAT_047e4778 + 0x10);
    *(undefined8 *)((long)plVar19 + 0x1c) = 0x100000001;
    FUN_02f51930(plVar20,PTR_PTR_047d1a50,1);
    if ((int)plVar19[2] != 1) {
      *(undefined4 *)(plVar19 + 2) = 1;
    }
    *(undefined2 *)*plVar20 = 0;
  }
  param_1[0x96] = (long)plVar19;
  *(int *)(param_1 + 0xa3) = (int)param_2[0x1f];
  *(undefined4 *)((long)param_1 + 0x51c) = 0;
  uVar27 = param_2[0x16];
  param_1[0x9d] = param_2[0x17];
  param_1[0x9c] = uVar27;
  uVar27 = param_2[0x18];
  param_1[0x9f] = param_2[0x19];
  param_1[0x9e] = uVar27;
  plVar19 = (long *)param_2[0x1a];
  if (plVar19 == (long *)0x0) {
    local_280 = (long *)0x18;
    plVar19 = (long *)(**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar19,"hknpDefaultBroadPhaseConfig");
    }
    plVar19[2] = 1;
    *plVar19 = (long)(PTR_DAT_047e4780 + 0x10);
    plVar19[1] = 0xffffffff;
  }
  else if (plVar19[1] != 0) {
    plVar20 = plVar19 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = *plVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar45 = (**(code **)(PTR_DAT_047e3348 + (ulong)(byte)param_2[0x15] * 8))(param_1,plVar19);
  param_1[0x98] = lVar45;
  plVar20 = (long *)param_1[0x128];
  param_1[0x128] = lVar45;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 8))();
  }
  FUN_02f30dd4(param_1 + 0xd8,param_1,FUN_02f30e90,0);
  if (plVar19[1] != 0) {
    plVar20 = plVar19 + 2;
    do {
      lVar45 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  local_280 = (long *)0x20;
  plVar19 = (long *)(**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar19,"hknpNullShapeTagCodec");
  }
  plVar19[2] = 1;
  *(undefined4 *)(plVar19 + 3) = 0;
  *(undefined1 *)((long)plVar19 + 0x1c) = 0;
  *plVar19 = (long)(PTR_DAT_047e4788 + 0x10);
  plVar19[1] = 0xffffffff;
  param_1[0x120] = (long)plVar19;
  local_280 = (long *)0x550;
  lVar45 = (**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(lVar45,"hknpCollisionDispatcher");
  }
  FUN_02f51b80(lVar45);
  param_1[0xa1] = lVar45;
  if (*(char *)((long)param_2 + 0x114) == '\0') {
    param_1[0xd3] = 0;
    lVar45 = 0;
  }
  else {
    local_280 = (long *)0x5c0;
    puVar24 = (undefined8 *)(**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(puVar24,"hknpDeactivationManager");
    }
    FUN_02f53014(puVar24);
    param_1[0xd3] = (long)puVar24;
    local_278 = auStack_268;
    *puVar24 = param_1;
    local_280 = (long *)param_1[0x94];
    local_270 = 0;
    local_26c = 0x80000008;
    local_228 = 0;
    iVar15 = (**(code **)(*local_280 + 0x50))();
    if (7 < iVar15) {
      iVar15 = 8;
    }
    local_224 = iVar15;
    if ((int)(local_26c & 0x7fffffff) < iVar15) {
      FUN_031c2ad4(&local_278,PTR_PTR_047d1a50,(long)iVar15);
    }
    puVar13 = local_278;
    if (local_270 != iVar15) {
      local_270 = iVar15;
    }
    puVar24[2] = local_280;
    *(undefined4 *)(puVar24 + 3) = 0;
    *(undefined1 *)((long)puVar24 + 0x1c) = 0;
    if ((int)local_228 < 1) {
      (**(code **)(*local_280 + 0x20))(local_280,local_278,6);
      local_228 = 5;
      puVar31 = (undefined8 *)(puVar13 + 0x28);
    }
    else {
      puVar31 = (undefined8 *)(local_278 + (ulong)(local_228 - 1) * 8);
      local_228 = local_228 - 1;
    }
    puVar31 = (undefined8 *)*puVar31;
    puVar31[2] = 0;
    puVar31[3] = 0;
    *puVar31 = 0;
    puVar31[1] = 0;
    *(undefined4 *)((long)puVar31 + 4) = *(undefined4 *)(puVar24 + 5);
    iVar15 = *(int *)(puVar24 + 5);
    lVar45 = (long)iVar15;
    if ((int)(*(uint *)((long)puVar24 + 0x2c) & 0x7fffffff) <= iVar15) {
      FUN_031c25b4(puVar24 + 4,PTR_PTR_047d1a50,lVar45 + 1);
      iVar15 = *(int *)(puVar24 + 5);
    }
    *(undefined8 **)(puVar24[4] + (long)iVar15 * 8) = puVar31;
    *(int *)(puVar24 + 5) = (int)(lVar45 + 1);
    puVar24[0x20] = "hknpDeactivationManager::m_inactiveParentCaches";
    FUN_02f5fee0(puVar24 + 0x22,&local_280,"hknpDeactivationManager::m_reactivatedCaches");
    FUN_02f5fee0(puVar24 + 0x76,&local_280,"hknpDeactivationManager::m_narrowphaseOutputCaches");
    *(undefined1 *)((long)puVar24 + 0x361) = 0;
    if (local_228 != 0) {
      (**(code **)(*local_280 + 0x28))(local_280,local_278);
      local_228 = 0;
    }
    local_270 = 0;
    if ((-1 < (int)local_26c) && (local_278 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,local_278,(ulong)local_26c << 3);
    }
    lVar45 = param_1[0xd3];
  }
  FUN_02f1d41c(param_1 + 0x28,param_2[5],(int)param_2[4],plVar25,lVar45);
  param_1[6] = (long)(param_1 + 0x28);
  iVar15 = *(int *)(param_1[0x96] + 0x1c) + (int)param_2[4];
  iVar26 = iVar15 * 0x20;
  if (*(int *)((long)param_1 + 0x624) < iVar15 * 0x20) {
    if (param_1[0xc5] != 0) {
      (**(code **)(puVar10 + 8))(0,param_1[0xc5],0);
      *(undefined4 *)((long)param_1 + 0x624) = 0;
      param_1[0xc5] = 0;
    }
    local_280 = (long *)(long)(iVar26 + 0x30);
    lVar45 = (**(code **)puVar10)(0,&local_280,0);
    param_1[0xc5] = lVar45;
    *(int *)((long)param_1 + 0x624) = iVar26;
  }
  if (*(int *)((long)param_1 + 0x634) < iVar26) {
    if (param_1[199] != 0) {
      (**(code **)(puVar10 + 8))(0,param_1[199],0);
      *(undefined4 *)((long)param_1 + 0x634) = 0;
      param_1[199] = 0;
    }
    local_280 = (long *)(long)(iVar26 + 0x30);
    lVar45 = (**(code **)puVar10)(0,&local_280,0);
    param_1[199] = lVar45;
    *(int *)((long)param_1 + 0x634) = iVar26;
  }
  lVar45 = param_1[0xd3];
  if (lVar45 != 0) {
    iVar26 = *(int *)(lVar45 + 0x390);
    iVar15 = (int)param_2[4];
    if ((int)param_2[4] <= iVar26) {
      iVar15 = iVar26;
    }
    if ((int)(*(uint *)(lVar45 + 0x394) & 0x7fffffff) < iVar15) {
      FUN_02f1daec(lVar45 + 0x388,PTR_PTR_047d1a50,(long)iVar15);
      iVar26 = *(int *)(lVar45 + 0x390);
    }
    if (iVar26 != iVar15) {
      *(int *)(lVar45 + 0x390) = iVar15;
    }
    uVar7 = _DAT_03caa9e0;
    uVar37 = (undefined4)_UNK_03caa9e8;
    uVar38 = (undefined4)((ulong)_UNK_03caa9e8 >> 0x20);
    auVar5._8_4_ = uVar37;
    auVar5._0_8_ = _DAT_03caa9e0;
    auVar5._12_4_ = uVar38;
    auVar42._8_8_ = auVar41._8_8_;
    auVar42._0_8_ = NEON_sqxtn(auVar41._0_8_,auVar5,4);
    puVar16 = *(undefined4 **)(param_1[0xd3] + 0x388);
    *(undefined2 *)((long)puVar16 + 10) = 0;
    *puVar16 = 0;
    auVar6._8_4_ = uVar37;
    auVar6._0_8_ = uVar7;
    auVar6._12_4_ = uVar38;
    auVar43 = NEON_sqxtn2(auVar42,auVar6,4);
    *(undefined1 *)((long)puVar16 + 0xe) = 0;
    puVar16[4] = 0xffffffff;
    uVar7 = NEON_sqxtun(uVar7,auVar43,2);
    puVar16[1] = (int)uVar7;
  }
  local_280 = (long *)0xb8;
  lVar45 = (**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(lVar45,"hknpConstraintManager");
  }
  FUN_02f0b2d0(lVar45,param_1,param_2[7],(int)param_2[6],param_2[9],(int)param_2[8]);
  param_1[0x91] = lVar45;
  local_280 = (long *)0x18;
  plVar25 = (long *)(**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar25,"hknpConstraintSolver");
  }
  puVar1 = PTR_DAT_047e4790;
  plVar25[1] = 0xffffffff;
  plVar25[2] = 1;
  *plVar25 = (long)(puVar1 + 0x10);
  plVar19 = (long *)param_1[0xa5];
  if (((plVar19 != plVar25) && (param_1[0xa5] = (long)plVar25, plVar19 != (long *)0x0)) &&
     (plVar19[1] != 0)) {
    plVar25 = plVar19 + 2;
    do {
      lVar45 = *plVar25;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar4) {
        *plVar25 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))();
    }
  }
  local_280 = (long *)0x18;
  plVar25 = param_1 + 0xa4;
  plVar19 = (long *)(**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar19,"hknpConstraintSolver");
  }
  puVar1 = PTR_DAT_047e4798;
  plVar19[1] = 0xffffffff;
  plVar19[2] = 1;
  *plVar19 = (long)(puVar1 + 0x10);
  plVar20 = (long *)*plVar25;
  if ((plVar20 != plVar19) && (*plVar25 = (long)plVar19, plVar20 != (long *)0x0)) {
    if (plVar20[1] != 0) {
      plVar19 = plVar20 + 2;
      do {
        lVar45 = *plVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = lVar45 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar45 + -1 == 0) {
        (**(code **)(*plVar20 + 0x18))();
      }
    }
    plVar19 = (long *)*plVar25;
  }
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xcb] = (long)plVar19;
  param_1[0xcc] = param_1[0xa5];
  FUN_02f30f18(param_1 + 0xee,param_1,&LAB_02f30fd4,0);
  local_280 = (long *)param_1[0x94];
  local_278 = auStack_268;
  local_270 = 0;
  local_26c = 0x80000008;
  local_228 = 0;
  iVar15 = (**(code **)(*local_280 + 0x50))();
  if (7 < iVar15) {
    iVar15 = 8;
  }
  local_224 = iVar15;
  if ((int)(local_26c & 0x7fffffff) < iVar15) {
    FUN_031c2ad4(&local_278,PTR_PTR_047d1a50,(long)iVar15);
  }
  if (local_270 != iVar15) {
    local_270 = iVar15;
  }
  local_68 = 0xbb0;
  lVar45 = (**(code **)puVar10)(0,&local_68,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(lVar45,"hknpCollisionCacheManager");
  }
  FUN_02f6038c(lVar45,&local_280,*(undefined4 *)(param_1[0x96] + 0x20));
  lVar30 = 0;
  if (param_1[0xd3] != 0) {
    lVar30 = param_1[0xd3] + 0x110;
  }
  param_1[0xa0] = lVar45;
  *(long *)(lVar45 + 0x950) = lVar30;
  if (local_228 != 0) {
    (**(code **)(*local_280 + 0x28))(local_280,local_278);
    local_228 = 0;
  }
  *(undefined1 *)(param_1[0xa0] + 0xaa0) = *(undefined1 *)((long)param_2 + 0x94);
  local_270 = 0;
  if ((-1 < (int)local_26c) && (local_278 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_278,(ulong)local_26c << 3);
  }
  local_280 = (long *)0x1480;
  puVar24 = (undefined8 *)(**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(puVar24,"hknpModifierManager");
  }
  plVar25 = param_1 + 0x114;
  puVar31 = puVar24;
  do {
    *puVar31 = 0;
    *(undefined4 *)(puVar31 + 1) = 0;
    *(undefined4 *)(puVar31 + 3) = 0;
    *(undefined4 *)(puVar31 + 5) = 0;
    *(undefined4 *)(puVar31 + 7) = 0;
    *(undefined4 *)(puVar31 + 9) = 0;
    *(undefined4 *)(puVar31 + 0xb) = 0;
    *(undefined4 *)(puVar31 + 0xd) = 0;
    *(undefined4 *)(puVar31 + 0xf) = 0;
    *(undefined4 *)(puVar31 + 0x11) = 0;
    *(undefined4 *)(puVar31 + 0x13) = 0;
    *(undefined4 *)(puVar31 + 0x15) = 0;
    *(undefined4 *)(puVar31 + 0x17) = 0;
    *(undefined4 *)(puVar31 + 0x19) = 0;
    *(undefined4 *)(puVar31 + 0x1b) = 0;
    *(undefined4 *)(puVar31 + 0x1d) = 0;
    *(undefined4 *)(puVar31 + 0x1f) = 0;
    puVar31 = puVar31 + 0x21;
  } while (puVar31 != puVar24 + 0x273);
  puVar24[0x28a] = puVar24 + 0x28c;
  *(undefined4 *)(puVar24 + 0x28b) = 0;
  *(undefined4 *)((long)puVar24 + 0x145c) = 0x80000004;
  memset(puVar24 + 0x273,0,0xb0);
  *(undefined1 *)(puVar24 + 0x289) = 1;
  param_1[0x92] = (long)puVar24;
  local_280 = (long *)0x1f38;
  plVar19 = (long *)(**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar19,"hknpDefaultModifierSet");
  }
  puVar12 = PTR_DAT_047e47b8;
  puVar11 = PTR_DAT_047e47b0;
  puVar1 = PTR_DAT_047e47a8;
  cVar3 = *(char *)((long)param_2 + 0xfc);
  *plVar19 = (long)(PTR_DAT_047e47a0 + 0x10);
  plVar19[1] = 0xffffffff;
  plVar19[2] = 1;
  plVar19[3] = (long)(puVar1 + 0x10);
  plVar19[4] = (long)(puVar11 + 0x10);
  plVar19[5] = (long)(puVar12 + 0x10);
  puVar1 = PTR_DAT_047e47c0 + 0x10;
  plVar19[6] = (long)(PTR_DAT_047e47c8 + 0x10);
  plVar19[7] = (long)puVar1;
  puVar11 = PTR_DAT_047e47e0;
  puVar1 = PTR_DAT_047e47d8 + 0x10;
  plVar19[8] = (long)(PTR_DAT_047e47d0 + 0x10);
  plVar19[9] = (long)puVar1;
  puVar1 = PTR_DAT_047e47e8 + 0x10;
  plVar19[10] = (long)(puVar11 + 0x10);
  plVar19[0xb] = (long)puVar1;
  plVar19[0xc] = (long)(PTR_DAT_047e47f8 + 0x10);
  *(undefined2 *)(plVar19 + 0xd) = 0x101;
  *(undefined4 *)((long)plVar19 + 0x6c) = 0x3f000000;
  puVar11 = PTR_DAT_047e47f0;
  puVar1 = PTR_DAT_047e4808 + 0x10;
  plVar19[0xe] = (long)(PTR_DAT_047e4800 + 0x10);
  plVar19[0xf] = (long)puVar1;
  puVar1 = PTR_DAT_047e4810 + 0x10;
  plVar19[0x10] = (long)(puVar11 + 0x10);
  plVar19[0x11] = (long)puVar1;
  puVar1 = PTR_DAT_047e4820 + 0x10;
  plVar19[0x12] = (long)(PTR_DAT_047e4818 + 0x10);
  plVar19[0x13] = (long)puVar1;
  puVar1 = PTR_DAT_047e4828;
  *(undefined4 *)(plVar19 + 0x16) = 0;
  puVar11 = PTR_DAT_047e4830;
  *(undefined4 *)(plVar19 + 0x18) = 0;
  plVar19[0x14] = (long)(puVar1 + 0x10);
  plVar19[0x15] = (long)(puVar11 + 0x10);
  plVar19[0x17] = (long)(PTR_DAT_047e4838 + 0x10);
  FUN_02f71a98(plVar19 + 0x19);
  *(undefined4 *)(plVar19 + 0x3dd) = 1;
  puVar1 = PTR_DAT_047e4840;
  *(undefined4 *)(plVar19 + 0x3df) = 1;
  puVar11 = PTR_DAT_047e4848;
  *(undefined4 *)(plVar19 + 0x3e1) = 1;
  plVar19[0x3dc] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_047e4850 + 0x10;
  plVar19[0x3de] = (long)(puVar11 + 0x10);
  plVar19[0x3e0] = (long)puVar1;
  *(bool *)((long)plVar19 + 0x1f0c) = cVar3 != '\0';
  puVar1 = PTR_DAT_047e4858;
  *(undefined4 *)(plVar19 + 0x3e3) = 0;
  plVar19[0x3e2] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_047e4860;
  *(undefined4 *)(plVar19 + 0x3e5) = 0;
  plVar19[0x3e4] = (long)(puVar1 + 0x10);
  plVar19[0x3e6] = (long)(PTR_DAT_047e4868 + 0x10);
  plVar20 = (long *)*plVar25;
  if ((plVar20 != plVar19) && (*plVar25 = (long)plVar19, plVar20 != (long *)0x0)) {
    if (plVar20[1] != 0) {
      plVar19 = plVar20 + 2;
      do {
        lVar45 = *plVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = lVar45 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar45 + -1 == 0) {
        (**(code **)(*plVar20 + 0x18))();
      }
    }
    plVar19 = (long *)*plVar25;
  }
  FUN_02f71308(plVar19,param_1[0x92]);
  plVar19 = (long *)param_1[0x97];
  plVar25 = (long *)param_2[0x1b];
  if (plVar19 != plVar25) {
    if ((plVar25 != (long *)0x0) && (plVar25[1] != 0)) {
      plVar25 = plVar25 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar4) {
          *plVar25 = *plVar25 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar19 = (long *)param_1[0x97];
      plVar25 = (long *)param_2[0x1b];
    }
    param_1[0x97] = (long)plVar25;
    if ((plVar19 != (long *)0x0) && (plVar19[1] != 0)) {
      plVar25 = plVar19 + 2;
      do {
        lVar45 = *plVar25;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar4) {
          *plVar25 = lVar45 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar45 + -1 == 0) {
        (**(code **)(*plVar19 + 0x18))();
      }
    }
  }
  (**(code **)(*param_1 + 0x60))(param_1,param_2[0x1c]);
  if ((char)param_2[0xe] == '\x01') {
    local_280 = (long *)0x6b0;
    lVar45 = (**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(lVar45,"hknpMultithreadedSimulation");
    }
    FUN_02fa2b90(lVar45);
    param_1[0x95] = lVar45;
    *(uint *)(lVar45 + 0x1c) = (uint)(*(char *)((long)param_2 + 0xfd) != '\0');
  }
  else {
    local_280 = (long *)0x20;
    plVar25 = (long *)(**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar25,"hknpSingleThreadedSimulation");
    }
    plVar25[2] = 0;
    *(undefined4 *)(plVar25 + 3) = 0;
    *plVar25 = (long)(PTR_DAT_047e4870 + 0x10);
    param_1[0x95] = (long)plVar25;
  }
  local_280 = (long *)0x3e40;
  lVar45 = (**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(lVar45,"hknpCollisionQueryDispatcher");
  }
  FUN_02ea2338(lVar45,0);
  plVar25 = (long *)param_1[0xa2];
  param_1[0xa2] = lVar45;
  if ((plVar25 != (long *)0x0) && (plVar25[1] != 0)) {
    plVar19 = plVar25 + 2;
    do {
      lVar45 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = lVar45 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar45 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))();
    }
  }
  plVar25 = (long *)param_2[0x1b];
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x50))(plVar25,param_1);
  }
  local_280 = (long *)0x70;
  lVar45 = (**(code **)puVar10)(0,&local_280,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(lVar45,"hknpParticlesColliderManager");
  }
  FUN_0300d704(lVar45,param_1,(int)param_2[0x20],*(undefined4 *)((long)param_2 + 0x54));
  lVar30 = param_1[0x93];
  param_1[0x93] = lVar45;
  if (lVar30 != 0) {
    FUN_0300dea8(lVar30);
    (**(code **)(puVar10 + 8))(0,lVar30,0);
  }
  *(undefined1 *)((long)param_1 + 0x999) = 0;
  if ((int)param_2[0x27] == 2) {
    *(undefined1 *)((long)param_1 + 0x999) = 1;
    local_280 = (long *)0x18;
    plVar25 = (long *)(**(code **)puVar10)(0,&local_280,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar25,"QueryCheckingBroadPhase");
    }
    puVar10 = PTR_DAT_047e4878;
    plVar25[2] = (long)param_1;
    *plVar25 = (long)(puVar10 + 0x10);
    plVar25[1] = 0;
    plVar25[1] = param_1[0x98];
    plVar19 = (long *)param_1[0x134];
    param_1[0x98] = (long)plVar25;
    param_1[0x134] = (long)plVar25;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 8))();
    }
  }
  else if ((int)param_2[0x27] == 1) {
    *(undefined1 *)((long)param_1 + 0x999) = 0;
  }
  return;
}


