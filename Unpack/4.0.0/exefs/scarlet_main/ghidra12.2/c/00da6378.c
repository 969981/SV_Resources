/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00da6378; name: FUN_00da6378
 */


void FUN_00da6378(long *param_1,undefined1 param_2 [16],undefined4 param_3,long param_4,
                 undefined8 *param_5,uint param_6,uint param_7,undefined4 param_8)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  float fVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *__src;
  size_t sVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  ulong *puVar18;
  ulong *puVar19;
  uint local_344;
  long *local_340 [6];
  undefined8 local_310;
  ulong uStack_308;
  undefined8 local_300;
  undefined **ppuStack_2f8;
  undefined2 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  long *local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined *local_2b0 [3];
  undefined1 local_298;
  undefined4 local_290;
  ulong local_288;
  ulong local_280;
  undefined *apuStack_278 [65];
  
  uVar15 = (ulong)param_7;
  if ((int)param_7 < 1) {
    __src = (undefined8 *)0x0;
    uVar10 = 0;
    local_344 = 0x80000000;
    if (param_7 != 0) {
      puVar11 = (undefined8 *)(-(ulong)(param_7 >> 0x1f) & 0xffffffc000000000 | uVar15 << 6);
      goto LAB_00da63f4;
    }
  }
  else {
    __src = (undefined8 *)
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar15 << 6);
    puVar11 = __src + uVar15 * 8;
    uVar10 = uVar15;
    local_344 = param_7;
LAB_00da63f4:
    uVar13 = (long)puVar11 + (-0x40 - (long)__src);
    uVar7 = ((uint)(uVar13 >> 6) & 0x3ffffff) + 1;
    puVar12 = __src;
    if ((uVar7 & 3) != 0) {
      lVar14 = -((ulong)uVar7 & 3);
      do {
        puVar12[7] = 0;
        bVar6 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        *(undefined4 *)(puVar12 + 6) = 0;
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12 = puVar12 + 8;
      } while (bVar6);
    }
    if (0xbf < uVar13) {
      do {
        *puVar12 = 0;
        puVar12[1] = 0;
        *(undefined4 *)(puVar12 + 6) = 0;
        puVar12[0xd] = 0;
        *(undefined4 *)(puVar12 + 0xe) = 0;
        *(undefined4 *)(puVar12 + 0x16) = 0;
        puVar12[0xf] = 0;
        puVar12[0x1f] = 0;
        *(undefined4 *)(puVar12 + 0x1e) = 0;
        puVar12[0x17] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[7] = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        puVar12[10] = 0;
        puVar12[0xb] = 0;
        puVar12[0xc] = 0;
        puVar12[0x14] = 0;
        puVar12[0x15] = 0;
        puVar12[0x12] = 0;
        puVar12[0x13] = 0;
        puVar12[0x10] = 0;
        puVar12[0x11] = 0;
        puVar12[0x1c] = 0;
        puVar12[0x1d] = 0;
        puVar12[0x1a] = 0;
        puVar12[0x1b] = 0;
        puVar12[0x18] = 0;
        puVar12[0x19] = 0;
        puVar12 = puVar12 + 0x20;
      } while (puVar11 != puVar12);
    }
  }
  local_290 = 0;
  local_2b0[1] = (undefined *)0xffffffff;
  local_2b0[2] = (undefined *)0x1;
  memset(&local_288,0xff,0x200);
  local_2b0[0] = PTR_DAT_047d9310 + 0x10;
  local_298 = 2;
  local_300 = *param_5;
  ppuStack_2f8 = (undefined **)(param_5[1] & 0xffffffff);
  fVar4 = *(float *)(param_5 + 2);
  if (*(float *)(param_5 + 2) <= 0.001) {
    fVar4 = 0.001;
  }
  FUN_00e81a84(local_340,fVar4,&local_300);
  local_2f0 = 0xffff;
  local_2ec = 0;
  local_2e8 = 0;
  lVar14 = 0x30;
  local_2e0 = 0xfb0001;
  local_2c8 = local_340[0];
  local_2b8 = 0;
  local_300 = 0;
  ppuStack_2f8 = (undefined **)0x0;
  local_2c0 = param_3;
  memcpy(local_340,PTR_DAT_047d19b0 + 0x200,0x30);
  uStack_308 = param_2._8_8_ & 0xffffffff;
  local_310 = param_2._0_8_;
  nn::os::LockMutex((MutexType *)(param_4 + 0x120));
  local_300 = (**(code **)(**(long **)(param_4 + 8) + 0x68))();
  do {
    *(ulong *)((long)local_2b0 + lVar14) = *(ulong *)((long)local_2b0 + lVar14) & 1;
    lVar14 = lVar14 + 8;
  } while (lVar14 != 0x228);
  if ((param_6 & 1) != 0) {
    local_288 = local_288 | 2;
  }
  local_280 = local_280 | param_6;
  if ((param_6 >> 1 & 1) != 0) {
    local_280 = local_280 | 2;
  }
  lVar14 = 7;
  do {
    if ((param_6 >> (lVar14 - 5U & 0x3f) & 1) != 0) {
      local_2b0[lVar14] = (undefined *)((ulong)local_2b0[lVar14] | 2);
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 != 0x45);
  ppuStack_2f8 = local_2b0;
  local_300 = (**(code **)(**(long **)(param_4 + 8) + 0x68))();
  local_2ec = 1;
  uVar7 = FUN_00da69f8(param_4,&local_300,local_340,__src,uVar15,param_8);
  nn::os::UnlockMutex((MutexType *)(param_4 + 0x120));
  if ((local_340[0] != (long *)0x0) && (local_340[0][1] != 0)) {
    plVar1 = local_340[0] + 2;
    do {
      lVar14 = *plVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*local_340[0] + 0x18))(local_340[0]);
    }
  }
  if (uVar7 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    goto LAB_00da6688;
  }
  if (uVar7 <= param_7) {
    param_7 = uVar7;
  }
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((int)param_7 < 1) {
    if (param_7 != 0) {
      lVar14 = 0;
      goto LAB_00da67c0;
    }
  }
  else {
    FUN_02218a98(param_1,param_7);
    lVar14 = (long)(int)param_1[1];
LAB_00da67c0:
    uVar13 = (ulong)param_7;
    uVar15 = lVar14 + 1;
    iVar16 = (int)lVar14;
    if ((long)((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= lVar14) {
      FUN_02218a98(param_1,uVar15);
      iVar16 = (int)param_1[1];
    }
    pvVar9 = (void *)(*param_1 + (long)iVar16 * 0x40);
    memcpy(pvVar9,__src,0x34);
    puVar18 = (ulong *)((long)pvVar9 + 0x38);
    *puVar18 = 0;
    pcVar2 = (char *)(__src[7] & 0xfffffffffffffffe);
    if (pcVar2 != (char *)0x0) {
      sVar8 = strlen(pcVar2);
      sVar8 = (size_t)((int)sVar8 + 1);
      pvVar9 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar8);
      memcpy(pvVar9,pcVar2,sVar8);
      *puVar18 = (ulong)pvVar9 | 1;
    }
    *(int *)(param_1 + 1) = (int)uVar15;
    if (uVar13 != 1) {
      if ((long)((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (long)uVar15) {
        FUN_02218a98(param_1,lVar14 + 2);
        uVar15 = (ulong)*(uint *)(param_1 + 1);
      }
      pvVar9 = (void *)(*param_1 + (long)(int)uVar15 * 0x40);
      memcpy(pvVar9,__src + 8,0x34);
      puVar18 = (ulong *)((long)pvVar9 + 0x38);
      *puVar18 = 0;
      pcVar2 = (char *)(__src[0xf] & 0xfffffffffffffffe);
      if (pcVar2 != (char *)0x0) {
        sVar8 = strlen(pcVar2);
        sVar8 = (size_t)((int)sVar8 + 1);
        pvVar9 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar8);
        memcpy(pvVar9,pcVar2,sVar8);
        *puVar18 = (ulong)pvVar9 | 1;
      }
      *(int *)(param_1 + 1) = (int)(lVar14 + 2);
      if (uVar13 != 2) {
        lVar17 = 0;
        puVar18 = __src + 0x17;
        do {
          uVar15 = lVar14 + lVar17 + 2;
          if ((long)((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (long)uVar15) {
            FUN_02218a98(param_1,lVar14 + lVar17 + 3);
            uVar15 = (ulong)*(uint *)(param_1 + 1);
          }
          pvVar9 = (void *)(*param_1 + (long)(int)uVar15 * 0x40);
          memcpy(pvVar9,puVar18 + -7,0x34);
          puVar19 = (ulong *)((long)pvVar9 + 0x38);
          *puVar19 = 0;
          pcVar2 = (char *)(*puVar18 & 0xfffffffffffffffe);
          if (pcVar2 != (char *)0x0) {
            sVar8 = strlen(pcVar2);
            sVar8 = (size_t)((int)sVar8 + 1);
            pvVar9 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar8)
            ;
            memcpy(pvVar9,pcVar2,sVar8);
            *puVar19 = (ulong)pvVar9 | 1;
          }
          iVar16 = (int)lVar17;
          lVar17 = lVar17 + 1;
          puVar18 = puVar18 + 8;
          *(int *)(param_1 + 1) = (int)lVar14 + iVar16 + 3;
        } while (uVar13 - 2 != lVar17);
      }
    }
  }
  *(uint *)(param_1 + 2) = uVar7;
LAB_00da6688:
  puVar5 = PTR_DAT_047d1a08;
  if ((int)uVar10 != 0) {
    uVar15 = -(uVar10 >> 0x1f) & 0xffffffc000000000 | uVar10 << 6;
    do {
      uVar10 = *(ulong *)((long)__src + (uVar15 - 8));
      if ((uVar10 & 1) != 0) {
        (**(code **)(puVar5 + 8))(0,uVar10 - 1,0);
      }
      uVar15 = uVar15 - 0x40;
    } while (uVar15 != 0);
  }
  if ((__src == (undefined8 *)0x0) || ((int)local_344 < 0)) {
    return;
  }
  (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,__src,(ulong)local_344 << 6);
  return;
}


