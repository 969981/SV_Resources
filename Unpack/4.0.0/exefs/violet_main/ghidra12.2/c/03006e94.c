/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03006e94; name: FUN_03006e94
 */


void FUN_03006e94(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 *puVar8;
  long *plVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined1 uVar15;
  uint uVar16;
  code *pcVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  long lVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  *param_1 = &PTR_LAB_04613018;
  param_1[1] = 0xffffffff;
  pcVar2 = (char *)((long)param_1 + 0x15dc);
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  memset(param_1 + 0xb,0,0x60);
  uVar27 = NEON_fmov(0x41200000,4);
  *(undefined4 *)(param_1 + 0x2a) = param_4;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x18] = uVar27;
  param_1[0x19] = uVar27;
  plVar18 = param_1 + 0x2c4;
  param_1[0x1a] = 0x3d4ccccd3d4ccccd;
  param_1[0x26] = 0;
  param_1[0x27] = param_2;
  param_1[0x1c] = 0x3f3333333a83126f;
  param_1[0x1d] = 0x3fc000003e99999a;
  param_1[0x20] = 0x42c8000000000001;
  param_1[0x21] = 0;
  param_1[0x22] = 0x8000000000000000;
  param_1[0x23] = 0;
  param_1[0x24] = 0x8000000000000000;
  param_1[0x25] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x8000000000000000;
  param_1[0x36] = param_1 + 0x38;
  param_1[0x1b] = 0x3e4ccccd3e4ccccd;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x8000000000000000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x8000000000000000;
  *(undefined4 *)((long)param_1 + 0x1bc) = 0x80000008;
  param_1[0x2b8] = 0;
  param_1[0x2b9] = 0x8000000000000000;
  *(undefined4 *)((long)param_1 + 0x15d4) = 0;
  *(undefined4 *)(param_1 + 699) = *(undefined4 *)(param_3 + 3);
  *pcVar2 = *(int *)(param_3 + 7) != 0;
  *(undefined1 *)((long)param_1 + 0x15dd) = *(undefined1 *)((long)param_3 + 0x9b);
  *(undefined1 *)((long)param_1 + 0x15de) = *(undefined1 *)((long)param_3 + 0x99);
  *(undefined1 *)((long)param_1 + 0x15df) = *(undefined1 *)((long)param_3 + 0x9c);
  plVar14 = param_1 + 0x2ce;
  *(undefined2 *)(param_1 + 700) = 0xffff;
  *(undefined4 *)((long)param_1 + 0x15e4) = 0;
  param_1[0x2bd] = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c6] = 0x8000000000000000;
  param_1[0x2c7] = 0;
  param_1[0x2c8] = 0x8000000000000000;
  param_1[0x2c9] = 0;
  param_1[0x2ca] = 0x8000000000000000;
  param_1[0x2cc] = 0;
  *(undefined1 *)(param_1 + 0x2cd) = 0;
  param_1[0x2d2] = 0;
  param_1[0x2d3] = 0x8000000000000000;
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d6] = 0x8000000000000000;
  param_1[0x2d8] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2d9] = 0x8000000000000000;
  puVar5 = PTR_DAT_047d1a08;
  plVar9 = param_1 + 0x2db;
  param_1[0x2db] = 0;
  local_70 = (undefined8 *)0x310;
  puVar8 = (undefined4 *)(**(code **)puVar5)(0,&local_70,0);
  pcVar17 = *(code **)(puVar5 + 0x10);
  if (pcVar17 != (code *)0x0) {
    (*pcVar17)(puVar8,"Block");
  }
  puVar8[0xd] = 0xffffff;
  puVar8[0x19] = 0xffffff;
  puVar8[0x25] = 0xffffff;
  puVar8[0x31] = 0xffffff;
  puVar8[0x3d] = 0xffffff;
  puVar8[0x49] = 0xffffff;
  puVar8[0x55] = 0xffffff;
  puVar8[0x61] = 0xffffff;
  puVar8[0x6d] = 0xffffff;
  puVar8[0x79] = 0xffffff;
  puVar8[0x85] = 0xffffff;
  puVar8[0x91] = 0xffffff;
  puVar8[0x9d] = 0xffffff;
  puVar8[0xa9] = 0xffffff;
  puVar8[0xb5] = 0xffffff;
  puVar8[0xc1] = 0xffffff;
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined8 *)(puVar8 + 2) = 0;
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,puVar8,0);
      break;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar7) {
      *plVar9 = (long)puVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  param_1[0x2da] = param_1[0x2db];
  param_1[0x2dc] = 0;
  param_1[0x2dd] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x2ba) = *(undefined4 *)(param_3 + 0x15);
  param_1[0x1e] =
       CONCAT44(*(undefined4 *)((long)param_3 + 0xa4),*(undefined4 *)((long)param_3 + 0xa4));
  param_1[0x2c0] = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c3] = 0;
  if ((*(char *)((long)param_1 + 0x15de) == '\0') && (*(char *)((long)param_3 + 0x9a) == '\0')) {
    bVar7 = *(char *)((long)param_1 + 0x15df) != '\0';
  }
  else {
    bVar7 = true;
  }
  uVar27 = param_3[1];
  param_1[0xd] = *param_3;
  param_1[0xe] = uVar27;
  uVar27 = param_3[3];
  param_1[0xf] = param_3[2];
  param_1[0x10] = uVar27;
  if (*pcVar2 != '\0') {
    uVar27 = param_3[5];
    param_1[0x13] = param_3[4];
    param_1[0x14] = uVar27;
    uVar27 = param_3[7];
    param_1[0x11] = param_3[6];
    param_1[0x12] = uVar27;
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)((long)param_3 + 0x44);
  uVar27 = param_3[0xc];
  param_1[8] = param_3[0xb];
  param_1[9] = uVar27;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_3 + 8);
  uVar27 = param_3[10];
  param_1[0xb] = param_3[9];
  param_1[0xc] = uVar27;
  *(undefined1 *)(param_1 + 0x2be) = *(undefined1 *)(param_3 + 0x13);
  *(undefined2 *)(param_1 + 700) = *(undefined2 *)(param_3 + 0x11);
  uVar27 = *(undefined8 *)((long)param_3 + 0x8c);
  *(undefined4 *)((long)param_1 + 0x15ec) = *(undefined4 *)((long)param_3 + 0x94);
  *(undefined8 *)((long)param_1 + 0x15e4) = uVar27;
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)((long)param_3 + 0x9d);
  *(bool *)((long)param_1 + 0xf9) =
       *(char *)((long)param_3 + 0x9a) != '\0' && *(char *)((long)param_3 + 0x9e) != '\0';
  *(undefined1 *)((long)param_1 + 0xfa) = *(undefined1 *)((long)param_3 + 0x9f);
  *(bool *)((long)param_1 + 0xfb) =
       *(char *)((long)param_3 + 0x9a) != '\0' && *(char *)(param_3 + 0x14) != '\0';
  *(undefined1 *)((long)param_1 + 0xfc) = *(undefined1 *)((long)param_3 + 0xa1);
  puVar5 = PTR_DAT_047d1a08;
  if (bVar7) {
    local_70 = (undefined8 *)0x1ae0;
    plVar9 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_70,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(plVar9,"hknpPartitionTreeBuildContext");
    }
    memset(plVar9,0,0x1ae0);
    plVar9[2] = 0;
    puVar6 = PTR_DAT_047d1a40;
    *(undefined4 *)((long)plVar9 + 0x1d) = 0;
    *plVar9 = (long)(puVar6 + 0x10);
    plVar9[1] = 0;
    plVar9[5] = 0;
    plVar9[6] = -0x8000000000000000;
    plVar9[7] = 0;
    plVar9[8] = -0x8000000000000000;
    *(undefined4 *)(plVar9 + 3) = 1;
    *(undefined1 *)((long)plVar9 + 0x1c) = 1;
    *(undefined4 *)((long)plVar9 + 0x194c) = 0x80000010;
    plVar9[0x30e] = (long)(plVar9 + 0x310);
    plVar9[0x328] = (long)(plVar9 + 0x32a);
    plVar9[0x333] = (long)(plVar9 + 0x335);
    *(undefined4 *)((long)plVar9 + 0x19a4) = 0x80000020;
    plVar9[9] = 0;
    *(undefined4 *)(plVar9 + 0x30b) = 0;
    *(undefined4 *)(plVar9 + 0x30f) = 0;
    *(undefined4 *)((long)plVar9 + 0x187c) = 0x80000010;
    *(undefined4 *)(plVar9 + 0x329) = 0;
    plVar9[0x332] = 0;
    *(undefined4 *)(plVar9 + 0x334) = 0;
    *(undefined1 *)(plVar9 + 0x355) = 0;
    plVar9[0x356] = 0;
    lVar24 = *plVar18;
    *plVar18 = (long)plVar9;
    if (lVar24 != 0) {
      FUN_030096bc(lVar24);
      (**(code **)(puVar5 + 8))(0,lVar24,0);
      plVar9 = (long *)*plVar18;
    }
    *(undefined1 *)((long)plVar9 + 0x1c) = 0;
    *(undefined1 *)(param_1[0x2c4] + 0x1d) = 1;
    *(undefined8 *)(param_1[0x2c4] + 0x1990) = 0;
    *(undefined8 *)(param_1[0x2c4] + 0x1ab8) = 0;
    iVar21 = *(int *)(param_1 + 699);
    if ((int)(*(uint *)((long)param_1 + 0x1654) & 0x7fffffff) < iVar21) {
      FUN_02e9b320(param_1 + 0x2c9,PTR_PTR_047d1a50,(long)iVar21);
    }
    if (*(int *)(param_1 + 0x2ca) != iVar21) {
      *(int *)(param_1 + 0x2ca) = iVar21;
    }
    *(undefined1 *)(param_1 + 0x2cb) = 0;
    local_70 = (undefined8 *)0x18;
    plVar9 = (long *)(**(code **)puVar5)(0,&local_70,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(plVar9,"hkcdSimdTree");
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    local_70 = (undefined8 *)0x100;
    pvVar10 = (void *)(**(code **)puVar5)(0,&local_70,0);
    pvVar11 = (void *)0x0;
    if (*plVar9 != 0) {
      pvVar11 = (void *)(*plVar9 + (long)plVar9);
    }
    memcpy(pvVar10,pvVar11,(long)(int)plVar9[1] << 7);
    if (*(int *)((long)plVar9 + 0xc) < 0) {
      lVar24 = 0;
      if (*plVar9 != 0) {
        lVar24 = *plVar9 + (long)plVar9;
      }
      (**(code **)(puVar5 + 8))(0,lVar24,0);
    }
    *(undefined4 *)(plVar9 + 1) = 2;
    *(undefined4 *)((long)plVar9 + 0xc) = 0x80000002;
    lVar24 = 0;
    if (pvVar10 != (void *)0x0) {
      lVar24 = (long)pvVar10 - (long)plVar9;
    }
    *plVar9 = lVar24;
    puVar26 = (undefined8 *)(lVar24 + (long)plVar9);
    puVar26[1] = 0x7f7fffee7f7fffee;
    *puVar26 = 0x7f7fffee7f7fffee;
    puVar26[3] = 0xff7fffeeff7fffee;
    puVar26[2] = 0xff7fffeeff7fffee;
    *(undefined2 *)(puVar26 + 0xe) = 0;
    puVar26[5] = 0x7f7fffee7f7fffee;
    puVar26[4] = 0x7f7fffee7f7fffee;
    puVar26[7] = 0xff7fffeeff7fffee;
    puVar26[6] = 0xff7fffeeff7fffee;
    puVar26[9] = 0x7f7fffee7f7fffee;
    puVar26[8] = 0x7f7fffee7f7fffee;
    puVar26[0xb] = 0xff7fffeeff7fffee;
    puVar26[10] = 0xff7fffeeff7fffee;
    puVar26[0xc] = 0;
    puVar26[0xd] = 0;
    lVar24 = *plVar9;
    *(undefined2 *)((long)plVar9 + lVar24 + 0xf0) = 0;
    *(undefined8 *)((long)plVar9 + lVar24 + 0xe0) = 0;
    *(undefined8 *)((long)plVar9 + lVar24 + 0xe8) = 0;
    *(undefined8 *)((long)plVar9 + lVar24 + 0x88) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar9 + lVar24 + 0x80) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar9 + lVar24 + 0x98) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar9 + lVar24 + 0x90) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar9 + lVar24 + 0xa8) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar9 + lVar24 + 0xa0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar9 + lVar24 + 0xb8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar9 + lVar24 + 0xb0) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar9 + lVar24 + 200) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar9 + lVar24 + 0xc0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar9 + lVar24 + 0xd8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar9 + lVar24 + 0xd0) = 0xff7fffeeff7fffee;
    *(undefined1 *)(plVar9 + 2) = 1;
    plVar25 = (long *)param_1[0x2cc];
    param_1[0x2cc] = plVar9;
    if (plVar25 != (long *)0x0) {
      if (*(int *)((long)plVar25 + 0xc) < 0) {
        lVar24 = 0;
        if (*plVar25 != 0) {
          lVar24 = *plVar25 + (long)plVar25;
        }
        (**(code **)(puVar5 + 8))(0,lVar24,0);
      }
      (**(code **)(puVar5 + 8))(0,plVar25,0);
      plVar9 = (long *)param_1[0x2cc];
    }
    uVar3 = *(uint *)((long)plVar9 + 0xc) & 0x7fffffff;
    iVar21 = *(int *)(param_1 + 699) + 0x40;
    if ((int)uVar3 <= (int)*(uint *)(plVar9 + 1)) {
      uVar3 = *(uint *)(plVar9 + 1);
    }
    if ((int)uVar3 < iVar21) {
      uVar3 = *(int *)(param_1 + 699) + 0x3f;
      uVar3 = uVar3 | (int)uVar3 >> 0x10;
      uVar3 = uVar3 | (int)uVar3 >> 8;
      uVar3 = uVar3 | (int)uVar3 >> 4;
      uVar3 = uVar3 | (int)uVar3 >> 2;
      uVar3 = (uVar3 | (int)uVar3 >> 1) + 1;
      if ((int)uVar3 < iVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow");
      }
      local_70 = (undefined8 *)(-(ulong)(uVar3 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar3 << 7);
      pvVar10 = (void *)(**(code **)puVar5)(0,&local_70,0);
      pvVar11 = (void *)0x0;
      if (*plVar9 != 0) {
        pvVar11 = (void *)(*plVar9 + (long)plVar9);
      }
      memcpy(pvVar10,pvVar11,(long)(int)plVar9[1] << 7);
      if (*(int *)((long)plVar9 + 0xc) < 0) {
        lVar24 = 0;
        if (*plVar9 != 0) {
          lVar24 = *plVar9 + (long)plVar9;
        }
        (**(code **)(puVar5 + 8))(0,lVar24,0);
      }
      lVar24 = 0;
      if (pvVar10 != (void *)0x0) {
        lVar24 = (long)pvVar10 - (long)plVar9;
      }
      *plVar9 = lVar24;
      *(uint *)((long)plVar9 + 0xc) = uVar3 | 0x80000000;
      iVar21 = *(int *)(param_1 + 699) + 0x40;
    }
    if ((int)(*(uint *)(*plVar18 + 0x44) & 0x7fffffff) < iVar21) {
      FUN_0300996c(*plVar18 + 0x38,PTR_PTR_047d1a50,(long)iVar21);
    }
  }
  if (*(char *)((long)param_3 + 0x9a) != '\0') {
    local_70 = (undefined8 *)&DAT_00000050;
    pvVar11 = (void *)(**(code **)puVar5)(0,&local_70,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(pvVar11,"hknpParticleParticleCollider");
    }
    memset(pvVar11,0,0x50);
    *(undefined4 *)((long)pvVar11 + 0xc) = 0x80000000;
    *(undefined8 *)((long)pvVar11 + 0x10) = 0;
    *(undefined8 *)((long)pvVar11 + 0x18) = 0x8000000000000000;
    *(undefined1 *)((long)pvVar11 + 0x44) = 0;
    *(undefined8 *)((long)pvVar11 + 0x20) = 0;
    *(undefined8 *)((long)pvVar11 + 0x28) = 0x8000000000000000;
    *(undefined8 *)((long)pvVar11 + 0x30) = 0;
    *(undefined8 *)((long)pvVar11 + 0x38) = 0x8000000000000000;
    *(undefined4 *)((long)pvVar11 + 0x40) = 0x3f800000;
    lVar24 = *plVar14;
    *plVar14 = (long)pvVar11;
    if (lVar24 != 0) {
      FUN_03009800(lVar24);
      (**(code **)(puVar5 + 8))(0,lVar24,0);
      pvVar11 = (void *)*plVar14;
    }
    *(undefined8 **)((long)pvVar11 + 0x48) = param_1;
    iVar21 = *(int *)(param_1 + 699);
    if ((int)(*(uint *)((long)pvVar11 + 0x3c) & 0x7fffffff) < iVar21) {
      FUN_0300a228((long)pvVar11 + 0x30,PTR_PTR_047d1a50,(long)iVar21);
    }
    if (*(int *)((long)pvVar11 + 0x38) != iVar21) {
      *(int *)((long)pvVar11 + 0x38) = iVar21;
    }
    iVar21 = *(int *)(*(long *)((long)pvVar11 + 0x48) + 0x15d8);
    if ((int)(*(uint *)((long)pvVar11 + 0x2c) & 0x7fffffff) < iVar21) {
      FUN_0300a380((long)pvVar11 + 0x20,PTR_PTR_047d1a50,(long)iVar21);
    }
    if (*(int *)((long)pvVar11 + 0x28) != iVar21) {
      *(int *)((long)pvVar11 + 0x28) = iVar21;
    }
    if (*(char *)((long)param_3 + 0x9b) == '\0') {
      *(undefined1 *)(*plVar18 + 0x1aa8) = 1;
    }
  }
  puVar6 = PTR_PTR_047d1a50;
  plVar18 = (long *)param_3[0xe];
  if (plVar18 == (long *)0x0) {
    local_80 = (undefined8 *)0x0;
    local_78 = 0x8000000000000000;
    uVar27 = param_3[0xd];
    FUN_02f084d8(&local_80,PTR_PTR_047d1a50,1);
    local_80[(int)(uint)local_78] = uVar27;
    local_70 = (undefined8 *)0x30;
    local_78 = CONCAT44(local_78._4_4_,1);
    uVar27 = (**(code **)puVar5)(0,&local_70,0);
    if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
      (**(code **)(puVar5 + 0x10))(uVar27,"hknpParticleShapeLibrary");
    }
    uVar19 = local_78;
    puVar26 = local_80;
    uVar3 = (uint)local_78;
    local_70 = (undefined8 *)0x0;
    local_68 = 0x8000000000000000;
    if ((int)(uint)local_78 < 1) {
      local_70 = (undefined8 *)0x0;
      local_68._0_4_ = 0;
      local_68._4_4_ = 0x80000000;
    }
    else {
      local_70 = (undefined8 *)
                 (**(code **)(*(long *)puVar6 + 0x18))(puVar6,(local_78 & 0xffffffff) << 3);
      uVar16 = uVar3 & 3;
      local_68._0_4_ = uVar3;
      local_68._4_4_ = uVar3;
      puVar13 = local_70;
      if (2 < uVar3 - 1) {
        iVar21 = -(uVar3 & 0xfffffffc);
        puVar12 = local_70;
        do {
          *puVar12 = *puVar26;
          puVar12[1] = puVar26[1];
          puVar12[2] = puVar26[2];
          puVar1 = puVar26 + 3;
          puVar13 = puVar12 + 4;
          puVar26 = puVar26 + 4;
          iVar21 = iVar21 + 4;
          puVar12[3] = *puVar1;
          puVar12 = puVar13;
        } while (iVar21 != 0);
      }
      if ((uVar19 & 3) != 0) {
        do {
          uVar16 = uVar16 - 1;
          *puVar13 = *puVar26;
          puVar13 = puVar13 + 1;
          puVar26 = puVar26 + 1;
        } while (uVar16 != 0);
      }
    }
    FUN_0300b700(uVar27,&local_70);
    uVar3 = local_68._4_4_;
    uVar19 = (ulong)local_68._4_4_;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    if ((-1 < (int)uVar3) && (local_70 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_70,uVar19 << 3);
    }
    plVar18 = (long *)param_1[3];
    param_1[3] = uVar27;
    if ((plVar18 != (long *)0x0) && (plVar18[1] != 0)) {
      plVar14 = plVar18 + 2;
      do {
        lVar24 = *plVar14;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *plVar14 = lVar24 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar24 + -1 == 0) {
        (**(code **)(*plVar18 + 0x18))();
      }
    }
    uVar19 = local_78;
    uVar20 = (ulong)local_78._4_4_;
    local_78 = (ulong)local_78._4_4_ << 0x20;
    if ((-1 < (long)uVar19) && (local_80 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_80,uVar20 << 3);
    }
  }
  else {
    plVar14 = (long *)param_1[3];
    if (plVar14 != plVar18) {
      if (plVar18[1] != 0) {
        plVar18 = plVar18 + 2;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar7) {
            *plVar18 = *plVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar14 = (long *)param_1[3];
        plVar18 = (long *)param_3[0xe];
      }
      param_1[3] = plVar18;
      if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
        plVar18 = plVar14 + 2;
        do {
          lVar24 = *plVar18;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar7) {
            *plVar18 = lVar24 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar24 + -1 == 0) {
          (**(code **)(*plVar14 + 0x18))();
        }
      }
    }
  }
  uVar3 = *(uint *)(param_1[3] + 0x20);
  if ((int)uVar3 < 1) {
    uVar22 = 0xffffffff;
  }
  else {
    uVar19 = 0;
    uVar22 = 0xffffffff;
    do {
      if (*(long *)(*(long *)(*(long *)(param_1[3] + 0x18) + uVar19 * 8) + 0xa0) == param_3[0xd]) {
        uVar22 = (undefined4)uVar19;
        break;
      }
      uVar19 = uVar19 + 1;
    } while (uVar3 != uVar19);
  }
  *(undefined4 *)(param_1 + 4) = uVar22;
  uVar27 = param_3[0x10];
  param_1[5] = param_3[0xf];
  param_1[6] = uVar27;
  cVar4 = *(char *)((long)param_3 + 0xac);
  *(char *)(param_1 + 0x2d1) = cVar4;
  uVar15 = 0;
  if (cVar4 != '\0') {
    iVar21 = *(int *)(param_1 + 699);
    if ((int)(*(uint *)((long)param_1 + 0x169c) & 0x7fffffff) < iVar21) {
      FUN_02fcf404(param_1 + 0x2d2,PTR_PTR_047d1a50,(long)iVar21);
    }
    uVar3 = *(uint *)(param_1 + 0x2d3);
    if ((int)uVar3 < iVar21) {
      *(int *)(param_1 + 0x2d3) = iVar21;
      memset((void *)(param_1[0x2d2] + (long)(int)uVar3),0,(ulong)(iVar21 + ~uVar3) + 1);
    }
    else if (iVar21 < (int)uVar3) {
      *(int *)(param_1 + 0x2d3) = iVar21;
    }
    if (param_1[0x2ce] != 0) {
      iVar21 = *(int *)(param_1 + 699);
      if ((int)(*(uint *)((long)param_1 + 0x16cc) & 0x7fffffff) < iVar21) {
        FUN_02e9b320(param_1 + 0x2d8,PTR_PTR_047d1a50,(long)iVar21);
      }
      if ((*(int *)(param_1 + 0x2d9) < iVar21) || (iVar21 < *(int *)(param_1 + 0x2d9))) {
        *(int *)(param_1 + 0x2d9) = iVar21;
      }
    }
    iVar21 = *(int *)(param_1 + 699);
    if ((int)(*(uint *)((long)param_1 + 0x16b4) & 0x7fffffff) < iVar21) {
      FUN_02e9b320(param_1 + 0x2d5,PTR_PTR_047d1a50,(long)iVar21);
    }
    if (*(int *)(param_1 + 0x2d6) != iVar21) {
      *(int *)(param_1 + 0x2d6) = iVar21;
    }
    uVar15 = 1;
  }
  *(undefined1 *)(param_1 + 0x2d4) = uVar15;
  iVar21 = *(int *)(param_1 + 699);
  if ((int)(*(uint *)((long)param_1 + 0x114) & 0x7fffffff) < iVar21) {
    FUN_03009afc(param_1 + 0x21,(long)iVar21);
  }
  if (*(int *)(param_1 + 0x22) != iVar21) {
    *(int *)(param_1 + 0x22) = iVar21;
  }
  param_1[0x2d0] = param_5;
  local_70 = (undefined8 *)0x78;
  uVar27 = (**(code **)puVar5)(0,&local_70,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(uVar27,"hknpParticlesBodyCollider");
  }
  FUN_0300a508(uVar27,param_1,param_1 + 0x21);
  lVar24 = param_1[0x2cf];
  param_1[0x2cf] = uVar27;
  if (lVar24 != 0) {
    FUN_0300a7dc(lVar24);
    (**(code **)(puVar5 + 8))(0,lVar24,0);
  }
  iVar21 = *(int *)(param_1 + 699);
  cVar4 = *pcVar2;
  if ((int)(*(uint *)((long)param_1 + 0x15cc) & 0x7fffffff) < iVar21) {
    FUN_03009c10(param_1 + 0x2b8,(long)iVar21);
  }
  uVar3 = *(uint *)(param_1 + 0x2b9);
  if ((int)uVar3 < iVar21) {
    puVar8 = (undefined4 *)(param_1[0x2b8] + (long)(int)uVar3 * 0x14);
    uVar22 = 0x3a7f7f7f;
    if (cVar4 != '\0') {
      uVar22 = 0x7f7f7f;
    }
    uVar16 = iVar21 - uVar3 & 3;
    *(int *)(param_1 + 0x2b9) = iVar21;
    if (2 < iVar21 + ~uVar3) {
      iVar21 = -(iVar21 - uVar3 & 0xfffffffc);
      puVar23 = puVar8;
      do {
        puVar8 = puVar23 + 0x14;
        *puVar23 = uVar22;
        iVar21 = iVar21 + 4;
        *(undefined8 *)(puVar23 + 3) = 0;
        *(undefined8 *)(puVar23 + 1) = 0;
        puVar23[5] = uVar22;
        puVar23[10] = uVar22;
        puVar23[0xf] = uVar22;
        *(undefined8 *)(puVar23 + 8) = 0;
        *(undefined8 *)(puVar23 + 6) = 0;
        *(undefined8 *)(puVar23 + 0x12) = 0;
        *(undefined8 *)(puVar23 + 0x10) = 0;
        *(undefined8 *)(puVar23 + 0xd) = 0;
        *(undefined8 *)(puVar23 + 0xb) = 0;
        puVar23 = puVar8;
      } while (iVar21 != 0);
    }
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      puVar8[4] = 0;
      *(undefined8 *)(puVar8 + 2) = 0;
      *puVar8 = uVar22;
      puVar8[1] = 0;
      puVar8 = puVar8 + 5;
    }
  }
  else if (iVar21 < (int)uVar3) {
    *(int *)(param_1 + 0x2b9) = iVar21;
  }
  if (*pcVar2 != '\0') {
    iVar21 = *(int *)(param_1 + 699);
    if ((int)(*(uint *)((long)param_1 + 0x124) & 0x7fffffff) < iVar21) {
      FUN_03009da0(param_1 + 0x23,(long)iVar21);
    }
    if ((*(int *)(param_1 + 0x24) < iVar21) || (iVar21 < *(int *)(param_1 + 0x24))) {
      *(int *)(param_1 + 0x24) = iVar21;
    }
  }
  param_1[0x17] = param_3[0x16];
  return;
}


