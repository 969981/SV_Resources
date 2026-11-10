/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012d4c14; name: FUN_012d4c14
 */


void FUN_012d4c14(long *param_1,long *param_2)

{
  undefined1 (*pauVar1) [12];
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char *__s;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined1 uVar17;
  int iVar18;
  size_t sVar19;
  void *pvVar20;
  long *plVar21;
  long *plVar22;
  MutexType *pMVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar38;
  undefined1 auVar37 [16];
  long lVar39;
  long lVar40;
  undefined8 local_70;
  float fStack_68;
  float fStack_64;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_047e5130 + 0x10);
  param_1[1] = 0xffffffff;
  memset(param_1 + 3,0,0x100);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = -0x8000000000000000;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = -0x8000000000000000;
  param_1[0x2b] = (long)&DAT_03d7702c;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_030b9058(param_1 + 0x4e,0);
  param_1[0x6f] = 0xffffffff;
  param_1[0x70] = 1;
  param_1[0x6e] = (long)(PTR_DAT_047e5100 + 0x10);
  *(undefined4 *)(param_1 + 0x79) = 100000;
  param_1[0x74] = 0;
  param_1[0x75] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 0x76) = 0xffffffff;
  param_1[0x77] = 0;
  param_1[0x78] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined8 *)((long)param_1 + 0x404) = 0x7f7fffee3f800000;
  *(undefined8 *)((long)param_1 + 0x40c) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 1;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  memset(param_1 + 0x87,0,0x81);
  *(undefined4 *)((long)param_1 + 0x4bc) = 0x3b449ba6;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  __s = (char *)(param_2[0x4e] & 0xfffffffffffffffe);
  if (__s != (char *)0x0) {
    sVar19 = strlen(__s);
    sVar19 = (size_t)((int)sVar19 + 1);
    pvVar20 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar19);
    memcpy(pvVar20,__s,sVar19);
    param_1[0xa1] = (ulong)pvVar20 | 1;
  }
  lVar24 = *param_2;
  param_1[0x25] = param_2[1];
  param_1[0x24] = lVar24;
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)((long)param_2 + 0x11);
  memcpy(param_1 + 0x36,(void *)((long)param_2 + 0x14),0x80);
  *(int *)((long)param_1 + 0x25c) = (int)param_2[0x13];
  *(undefined4 *)((long)param_1 + 0x264) = *(undefined4 *)((long)param_2 + 0x9c);
  lVar24 = param_2[0x1a];
  param_1[0x53] = param_2[0x1b];
  param_1[0x52] = lVar24;
  if (param_2 + 0x16 != param_1 + 0x4e) {
    iVar18 = (int)param_2[0x1d];
    pvVar20 = (void *)param_2[0x1c];
    if ((int)(*(uint *)((long)param_1 + 0x2ac) & 0x7fffffff) < iVar18) {
      FUN_02f0842c(param_1 + 0x54,PTR_PTR_047d1a50,(long)iVar18);
    }
    memcpy((void *)param_1[0x54],pvVar20,(long)iVar18 << 4);
    *(int *)(param_1 + 0x55) = iVar18;
    *(int *)(param_1 + 0x56) = (int)param_2[0x1e];
    iVar18 = (int)param_2[0x20];
    pvVar20 = (void *)param_2[0x1f];
    if ((int)(*(uint *)((long)param_1 + 0x2c4) & 0x7fffffff) < iVar18) {
      FUN_0309d1cc(param_1 + 0x57,PTR_PTR_047d1a50,(long)iVar18);
    }
    memcpy((void *)param_1[0x57],pvVar20,(long)iVar18 << 2);
    *(int *)(param_1 + 0x58) = iVar18;
  }
  lVar24 = param_2[0x21];
  lVar26 = param_2[0x22];
  param_1[0x5b] = param_2[0x23];
  param_1[0x5a] = lVar26;
  param_1[0x59] = lVar24;
  lVar24 = param_2[0x24];
  param_1[0x5d] = param_2[0x25];
  param_1[0x5c] = lVar24;
  memcpy(param_1 + 0x5e,param_2 + 0x26,0x58);
  lVar24 = param_2[0x34];
  lVar26 = param_2[0x35];
  lVar39 = param_2[0x33];
  param_1[0x6a] = param_2[0x32];
  param_1[0x6b] = lVar39;
  param_1[0x6c] = lVar24;
  param_1[0x6d] = lVar26;
  lVar24 = param_2[0x3a];
  param_1[0x73] = param_2[0x3b];
  param_1[0x72] = lVar24;
  if (param_2 + 0x36 != param_1 + 0x6e) {
    iVar18 = (int)param_2[0x3d];
    pvVar20 = (void *)param_2[0x3c];
    if ((int)(*(uint *)((long)param_1 + 0x3ac) & 0x7fffffff) < iVar18) {
      FUN_02f0842c(param_1 + 0x74,PTR_PTR_047d1a50,(long)iVar18);
    }
    memcpy((void *)param_1[0x74],pvVar20,(long)iVar18 << 4);
    *(int *)(param_1 + 0x75) = iVar18;
    *(int *)(param_1 + 0x76) = (int)param_2[0x3e];
    iVar18 = (int)param_2[0x40];
    pvVar20 = (void *)param_2[0x3f];
    if ((int)(*(uint *)((long)param_1 + 0x3c4) & 0x7fffffff) < iVar18) {
      FUN_030cb698(param_1 + 0x77,PTR_PTR_047d1a50,(long)iVar18);
    }
    memcpy((void *)param_1[0x77],pvVar20,(long)iVar18 << 2);
    *(int *)(param_1 + 0x78) = iVar18;
  }
  lVar24 = param_2[0x41];
  lVar26 = param_2[0x43];
  param_1[0x7a] = param_2[0x42];
  param_1[0x7b] = lVar26;
  param_1[0x79] = lVar24;
  lVar24 = param_2[0x44];
  param_1[0x7d] = param_2[0x45];
  param_1[0x7c] = lVar24;
  memcpy(param_1 + 0x7e,param_2 + 0x46,0x24);
  lVar24 = param_2[0x4d];
  param_1[0x84] = param_2[0x4c];
  param_1[0x85] = lVar24;
  puVar16 = PTR_DAT_047d1a08;
  local_70 = 0x330;
  pvVar20 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_70,0);
  if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
    (**(code **)(puVar16 + 0x10))(pvVar20,"hkaiNavMeshClearanceCacheManager");
  }
  memset(pvVar20,0,0x330);
  FUN_0307f4a0(pvVar20);
  plVar21 = (long *)param_1[0x28];
  param_1[0x28] = (long)pvVar20;
  if ((plVar21 != (long *)0x0) && (plVar21[1] != 0)) {
    plVar22 = plVar21 + 2;
    do {
      lVar24 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *plVar22 = lVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar24 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))();
    }
  }
  local_70 = 0xf0;
  lVar24 = (**(code **)puVar16)(0,&local_70,0);
  if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
    (**(code **)(puVar16 + 0x10))(lVar24,"hkaiStreamingCollection");
  }
  FUN_03078b9c(lVar24,param_1[0x28]);
  plVar21 = (long *)param_1[0x26];
  param_1[0x26] = lVar24;
  if ((plVar21 != (long *)0x0) && (plVar21[1] != 0)) {
    plVar22 = plVar21 + 2;
    do {
      lVar24 = *plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *plVar22 = lVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar24 + -1 == 0) {
      (**(code **)(*plVar21 + 0x18))();
    }
  }
  local_70 = 0x18;
  plVar21 = (long *)(**(code **)puVar16)(0,&local_70,0);
  if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
    (**(code **)(puVar16 + 0x10))(plVar21,"hkaiDefaultDynamicCuttingController");
  }
  puVar2 = PTR_DAT_047e5138;
  plVar21[1] = 0xffffffff;
  plVar21[2] = 1;
  *plVar21 = (long)(puVar2 + 0x10);
  plVar22 = (long *)param_1[0x49];
  param_1[0x49] = (long)plVar21;
  if ((plVar22 != (long *)0x0) && (plVar22[1] != 0)) {
    plVar21 = plVar22 + 2;
    do {
      lVar24 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar24 + -1 == 0) {
      (**(code **)(*plVar22 + 0x18))();
    }
  }
  local_70 = 0x100;
  lVar24 = (**(code **)puVar16)(0,&local_70,0);
  if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
    (**(code **)(puVar16 + 0x10))(lVar24,"hkaiNavMeshCutter");
  }
  FUN_030d5494(lVar24);
  plVar21 = (long *)param_1[0x27];
  param_1[0x27] = lVar24;
  if (plVar21 != (long *)0x0) {
    if (plVar21[1] != 0) {
      plVar22 = plVar21 + 2;
      do {
        lVar24 = *plVar22;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar6) {
          *plVar22 = lVar24 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar24 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))();
      }
    }
    lVar24 = param_1[0x27];
  }
  FUN_030d5ae8(lVar24,param_1 + 0x24,param_1[0x26]);
  lVar39 = 0;
  lVar40 = 0;
  *(char *)(param_1[0x27] + 0x98) = (char)param_2[2];
  *(char *)(param_1[0x27] + 0xa0) = (char)param_1[0x2d];
  *(int *)(param_1[0x27] + 0xa4) = (int)param_2[0x14];
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x24);
  lVar26 = param_1[0x25];
  fVar28 = (float)lVar26;
  fVar30 = (float)((ulong)lVar26 >> 0x20);
  lVar24 = *(long *)*pauVar1;
  fVar33 = (float)lVar24;
  fVar34 = (float)((ulong)lVar24 >> 0x20);
  fVar27 = ABS(fVar33);
  fVar29 = ABS(fVar34);
  fVar31 = ABS(fVar28);
  uVar35 = NEON_fmaxp(CONCAT44(fVar29,fVar27),CONCAT44(fVar29,fVar27),4);
  uVar35 = NEON_fmax(CONCAT44(fVar31,fVar31),uVar35,4);
  auVar37._12_4_ = fVar30;
  auVar37._0_12_ = *pauVar1;
  auVar7._12_4_ = fVar30;
  auVar7._0_12_ = *pauVar1;
  auVar37 = NEON_ext(auVar37,auVar7,8,1);
  uVar36 = NEON_ext(lVar24,auVar37._0_8_,4,1);
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  local_70 = 0;
  uVar25 = ((char)PTR_DAT_047d1a18
                  [(-(uint)((float)((ulong)uVar35 >> 0x20) <= fVar29) & 2) +
                   (uint)((float)uVar35 <= fVar27) | -(uint)((float)uVar35 <= fVar31) & 4] + 2) % 3;
  if (2 < uVar25) {
    uVar25 = 3;
  }
  *(undefined4 *)((long)&local_70 + (ulong)uVar25 * 4) = 0x3f800000;
  auVar9._8_4_ = fStack_68;
  auVar9._0_8_ = local_70;
  auVar8._8_4_ = fStack_68;
  auVar8._0_8_ = local_70;
  fVar29 = (float)((ulong)local_70 >> 0x20);
  auVar8._12_4_ = fStack_64;
  auVar9._12_4_ = fStack_64;
  auVar37 = NEON_ext(auVar8,auVar9,8,1);
  uVar35 = NEON_ext(local_70,auVar37._0_8_,4,1);
  fVar38 = (float)((ulong)uVar36 >> 0x20);
  fVar27 = (float)uVar36 * (float)local_70 - fVar33 * (float)uVar35;
  fVar31 = fVar38 * fVar29 - fVar34 * (float)((ulong)uVar35 >> 0x20);
  fVar32 = fVar33 * fStack_68 - fVar28 * (float)local_70;
  fVar29 = fVar34 * fStack_64 - fVar30 * fVar29;
  auVar10._4_4_ = fVar31;
  auVar10._0_4_ = fVar27;
  auVar10._8_4_ = fVar32;
  auVar10._12_4_ = fVar29;
  auVar11._4_4_ = fVar31;
  auVar11._0_4_ = fVar27;
  auVar11._8_4_ = fVar32;
  auVar11._12_4_ = fVar29;
  auVar37 = NEON_ext(auVar10,auVar11,4,1);
  uVar35 = NEON_ext(auVar37._0_8_,CONCAT44(fVar31,fVar27),4,1);
  param_1[0x31] = lVar26;
  param_1[0x30] = lVar24;
  param_1[0x33] = (ulong)(uint)fVar27;
  param_1[0x32] = auVar37._0_8_;
  fVar29 = fVar33 * (float)uVar35 - (float)uVar36 * auVar37._0_4_;
  fVar31 = fVar34 * (float)((ulong)uVar35 >> 0x20) - fVar38 * auVar37._4_4_;
  fVar33 = fVar28 * auVar37._0_4_ - fVar33 * fVar27;
  fVar34 = fVar30 * auVar37._4_4_ - fVar34 * 0.0;
  auVar12._4_4_ = fVar31;
  auVar12._0_4_ = fVar29;
  auVar12._8_4_ = fVar33;
  auVar12._12_4_ = fVar34;
  auVar13._4_4_ = fVar31;
  auVar13._0_4_ = fVar29;
  auVar13._8_4_ = fVar33;
  auVar13._12_4_ = fVar34;
  auVar37 = NEON_ext(auVar12,auVar13,4,1);
  fVar33 = auVar37._0_4_;
  fVar34 = auVar37._4_4_;
  fVar28 = fVar33 * fVar33 + fVar34 * fVar34 + fVar29 * fVar29;
  param_1[0x35] = (ulong)(uint)fVar29;
  param_1[0x34] = auVar37._0_8_;
  if (fVar28 != 0.0) {
    fVar28 = SQRT(fVar28);
    fVar30 = SQRT(fVar33 * fVar33 + fVar34 * fVar34 + fVar29 * fVar29);
    lVar39 = CONCAT44(fVar34 / fVar30,fVar33 / fVar28);
    lVar40 = CONCAT44(0.0 / fVar30,fVar29 / fVar28);
  }
  param_1[0x35] = lVar40;
  param_1[0x34] = lVar39;
  local_70 = 0x1a0;
  lVar24 = (**(code **)puVar16)(0,&local_70,0);
  if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
    (**(code **)(puVar16 + 0x10))(lVar24,"hkaiOverlapManager");
  }
  FUN_030f6f74(lVar24,param_1 + 0x30);
  plVar21 = (long *)param_1[0x2e];
  param_1[0x2e] = lVar24;
  if (plVar21 != (long *)0x0) {
    if (plVar21[1] != 0) {
      plVar22 = plVar21 + 2;
      do {
        lVar24 = *plVar22;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar6) {
          *plVar22 = lVar24 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar24 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))();
      }
    }
    lVar24 = param_1[0x2e];
  }
  memcpy((void *)(lVar24 + 200),param_1 + 0x36,0x80);
  if (0 < *(int *)(lVar24 + 0xa8)) {
    lVar40 = 0;
    lVar26 = 0;
    lVar39 = 0;
    do {
      lVar3 = *(long *)(lVar24 + 0xa0) + lVar26;
      lVar26 = lVar26 + 0x60;
      uVar36 = *(undefined8 *)(lVar3 + 0x18);
      uVar35 = *(undefined8 *)(lVar3 + 0x10);
      uVar15 = *(undefined8 *)(lVar3 + 0x28);
      uVar14 = *(undefined8 *)(lVar3 + 0x20);
      fVar33 = *(float *)(lVar3 + 0x40);
      fVar34 = *(float *)(lVar3 + 0x44);
      fVar28 = *(float *)(lVar3 + 0x48);
      fVar30 = *(float *)(lVar3 + 0x4c);
      lVar4 = *(long *)(lVar24 + 0x20) + lVar40;
      *(undefined1 *)(lVar4 + 0x40) = 1;
      lVar39 = lVar39 + 1;
      *(ulong *)(lVar4 + 0x28) =
           CONCAT44((float)((ulong)uVar36 >> 0x20) + fVar30,(float)uVar36 + fVar28);
      *(ulong *)(lVar4 + 0x20) =
           CONCAT44((float)((ulong)uVar35 >> 0x20) + fVar34,(float)uVar35 + fVar33);
      *(ulong *)(lVar4 + 0x38) =
           CONCAT44((float)((ulong)uVar15 >> 0x20) + fVar30,(float)uVar15 + fVar28);
      *(ulong *)(lVar4 + 0x30) =
           CONCAT44((float)((ulong)uVar14 >> 0x20) + fVar34,(float)uVar14 + fVar33);
      *(undefined1 *)(lVar3 + 0x52) = 1;
      lVar40 = lVar40 + 0x50;
    } while (lVar39 < *(int *)(lVar24 + 0xa8));
  }
  *(undefined1 *)(lVar24 + 0xc4) = 1;
  *(undefined4 *)(param_1[0x2e] + 0x188) = *(undefined4 *)((long)param_2 + 0x94);
  local_70 = 0x30;
  plVar21 = (long *)(**(code **)puVar16)(0,&local_70,0);
  if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
    (**(code **)(puVar16 + 0x10))(plVar21,"hkaiPathRequestManager");
  }
  puVar2 = PTR_DAT_047e5128;
  plVar21[2] = 1;
  plVar21[3] = 0;
  *plVar21 = (long)(puVar2 + 0x10);
  plVar21[1] = 0xffffffff;
  plVar21[4] = -0x8000000000000000;
  local_70 = 0x20;
  pMVar23 = (MutexType *)(**(code **)puVar16)(0,&local_70,0);
  if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
    (**(code **)(puVar16 + 0x10))(pMVar23,"hkCriticalSection");
  }
  nn::os::InitializeMutex(pMVar23,true,0);
  plVar21[5] = (long)pMVar23;
  plVar22 = (long *)param_1[0x4a];
  param_1[0x4a] = (long)plVar21;
  if (plVar22 != (long *)0x0) {
    if (plVar22[1] != 0) {
      plVar21 = plVar22 + 2;
      do {
        lVar24 = *plVar21;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar6) {
          *plVar21 = lVar24 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar24 + -1 == 0) {
        (**(code **)(*plVar22 + 0x18))();
      }
    }
    plVar21 = (long *)param_1[0x4a];
  }
  uVar17 = FUN_030d0e00(plVar21);
  *(undefined1 *)(param_1 + 0x4b) = uVar17;
  local_70 = 0x30;
  plVar21 = (long *)(**(code **)puVar16)(0,&local_70,0);
  if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
    (**(code **)(puVar16 + 0x10))(plVar21,"hkaiNavigatorManager");
  }
  puVar2 = PTR_DAT_047e5140;
  plVar21[2] = 1;
  plVar21[3] = (long)param_1;
  *plVar21 = (long)(puVar2 + 0x10);
  plVar21[1] = 0xffffffff;
  plVar21[4] = 0;
  plVar21[5] = -0x8000000000000000;
  plVar22 = (long *)param_1[0x87];
  param_1[0x87] = (long)plVar21;
  if ((plVar22 != (long *)0x0) && (plVar22[1] != 0)) {
    plVar21 = plVar22 + 2;
    do {
      lVar24 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar24 + -1 == 0) {
      (**(code **)(*plVar22 + 0x18))();
    }
  }
  local_70 = 0x38;
  plVar21 = (long *)(**(code **)puVar16)(0,&local_70,0);
  if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
    (**(code **)(puVar16 + 0x10))(plVar21,"hkaiVolumeNavigatorManager");
  }
  puVar2 = PTR_DAT_047e5148 + 0x10;
  plVar21[6] = 0;
  *plVar21 = (long)puVar2;
  plVar21[1] = 0xffffffff;
  plVar21[2] = 1;
  plVar21[3] = (long)param_1;
  plVar21[4] = 0;
  plVar21[5] = -0x8000000000000000;
  plVar22 = (long *)param_1[0x8f];
  param_1[0x8f] = (long)plVar21;
  if ((plVar22 != (long *)0x0) && (plVar22[1] != 0)) {
    plVar21 = plVar22 + 2;
    do {
      lVar24 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar24 + -1 == 0) {
      (**(code **)(*plVar22 + 0x18))();
    }
  }
  local_70 = 0x60;
  plVar21 = (long *)(**(code **)puVar16)(0,&local_70,0);
  if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
    (**(code **)(puVar16 + 0x10))(plVar21,"hkDynamicBlockStreamAllocator");
  }
  plVar21[2] = 1;
  *plVar21 = (long)(PTR_DAT_047e5150 + 0x10);
  plVar21[1] = 0xffffffff;
  nn::os::InitializeMutex((MutexType *)(plVar21 + 3),true,0);
  plVar21[7] = 0;
  plVar21[8] = -0x8000000000000000;
  plVar21[0xb] = 0;
  plVar21[9] = 0;
  plVar21[10] = -0x8000000000000000;
  plVar22 = (long *)param_1[0x99];
  param_1[0x99] = (long)plVar21;
  if ((plVar22 != (long *)0x0) && (plVar22[1] != 0)) {
    plVar21 = plVar22 + 2;
    do {
      lVar24 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar24 + -1 == 0) {
      (**(code **)(*plVar22 + 0x18))();
    }
  }
  local_70 = 0x60;
  plVar21 = (long *)(**(code **)puVar16)(0,&local_70,0);
  if (*(code **)(puVar16 + 0x10) != (code *)0x0) {
    (**(code **)(puVar16 + 0x10))(plVar21,"hkThreadLocalBlockStreamAllocator");
  }
  plVar22 = (long *)param_1[0x99];
  *plVar21 = (long)plVar22;
  plVar21[1] = (long)(plVar21 + 3);
  plVar21[2] = -0x7ffffff800000000;
  *(undefined4 *)(plVar21 + 0xb) = 0;
  iVar18 = (**(code **)(*plVar22 + 0x50))();
  if (7 < iVar18) {
    iVar18 = 8;
  }
  *(int *)((long)plVar21 + 0x5c) = iVar18;
  if ((int)(*(uint *)((long)plVar21 + 0x14) & 0x7fffffff) < iVar18) {
    FUN_031c2ad4(plVar21 + 1,PTR_PTR_047d1a50,(long)iVar18);
  }
  if ((int)plVar21[2] != iVar18) {
    *(int *)(plVar21 + 2) = iVar18;
  }
  param_1[0x9a] = (long)plVar21;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  return;
}


