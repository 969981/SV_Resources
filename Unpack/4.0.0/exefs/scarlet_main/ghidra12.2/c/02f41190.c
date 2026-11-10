/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f41190; name: FUN_02f41190
 */


void FUN_02f41190(long param_1,float *param_2,long param_3)

{
  uint *puVar1;
  void *pvVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  long lVar9;
  undefined *puVar10;
  bool bVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  undefined8 *puVar24;
  ushort *puVar25;
  long *plVar26;
  undefined8 *puVar27;
  int iVar28;
  long lVar29;
  void *pvVar30;
  uint *puVar31;
  void *pvVar32;
  long *plVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int iVar40;
  float fVar41;
  float fVar42;
  long *local_78;
  undefined8 local_70;
  float local_68;
  
  lVar9 = tpidr_el0;
  lVar18 = *(long *)(lVar9 + 0x1000b8);
  if (lVar18 == 0) {
    lVar18 = FUN_00e5d3b4();
    *(long *)(lVar9 + 0x1000b8) = lVar18;
  }
  plVar33 = *(long **)(lVar18 + 0x3e0);
  if (plVar33 != (long *)0x0) {
    lVar18 = *plVar33;
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))("BuildCollideTasks",0x11,*(undefined8 *)(lVar18 + 0x28));
    }
    puVar24 = (undefined8 *)plVar33[2];
    uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)plVar33[3]) && (plVar33[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = "TtBuildCollideTasks";
      uVar12 = nn::os::GetSystemTick();
      puVar24[1] = uVar12;
    }
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar33[6] != 0)) {
      puVar24 = (undefined8 *)plVar33[2];
      uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)plVar33[3]) && (plVar33[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar33[6] + 8);
      }
    }
  }
  if (*(long *)(param_1 + 0x800) == 0) {
    plVar13 = (long *)0x0;
    iVar28 = -1;
    bVar11 = false;
  }
  else {
    lVar29 = (long)DAT_0486b380;
    lVar18 = *(long *)(lVar9 + 0x1000b8);
    if (lVar18 == 0) {
      lVar18 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar18;
      iVar23 = DAT_0486b380;
      iVar28 = (int)*(undefined8 *)(lVar18 + lVar29 * 8 + 1000);
      if (lVar18 == 0) {
        lVar18 = FUN_00e5d3b4();
        *(long *)(lVar9 + 0x1000b8) = lVar18;
      }
    }
    else {
      iVar28 = (int)*(undefined8 *)(lVar18 + lVar29 * 8 + 1000);
      iVar23 = DAT_0486b380;
    }
    *(long *)(lVar18 + (long)iVar23 * 8 + 1000) = (long)(iVar28 + 1);
    plVar13 = *(long **)(param_1 + 0x800);
    bVar11 = iVar28 == 0;
  }
  bVar11 = (bool)(bVar11 & plVar13 != (long *)0x0);
  if ((*(char *)(param_1 + 0x999) != '\0') || (bVar11)) {
    local_78 = (long *)0x2a02000020;
    local_70 = *(undefined8 *)param_2;
    local_68 = param_2[2];
    if (bVar11) {
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_78);
    }
  }
  FUN_02f42348(param_1 + 0x7e8,param_1);
  lVar18 = *(long *)(lVar9 + 0x1000b8);
  if (lVar18 == 0) {
    lVar18 = FUN_00e5d3b4();
    *(long *)(lVar9 + 0x1000b8) = lVar18;
  }
  plVar13 = *(long **)(lVar18 + 0x3e0);
  *(undefined4 *)(param_1 + 0x818) = 2;
  if (plVar13 != (long *)0x0) {
    lVar18 = *plVar13;
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))("PreCollide",10,*(undefined8 *)(lVar18 + 0x28));
      if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
        (**(code **)(lVar18 + 0x18))("AddBodies",9,*(undefined8 *)(lVar18 + 0x28));
      }
    }
    puVar24 = (undefined8 *)plVar13[2];
    uVar19 = (long)puVar24 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)plVar13[3]) && (plVar13[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = "LtPreCollide";
      puVar24[2] = "StAddBodies";
      uVar12 = nn::os::GetSystemTick();
      puVar24[1] = uVar12;
    }
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar13[6] != 0)) {
      puVar24 = (undefined8 *)plVar13[2];
      uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)plVar13[3]) && (plVar13[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar13[6] + 8);
      }
    }
  }
  FUN_02f340e4(param_1);
  if (*(ulong *)(param_1 + 0x7c8) < 4) {
    lVar18 = *(long *)(param_1 + 0x8c0);
    if (*(int *)(lVar18 + 0x40) == 0) goto LAB_02f4172c;
    if (plVar13 == (long *)0x0) goto LAB_02f41720;
LAB_02f415bc:
    lVar18 = *plVar13;
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))
                ("UpdateCachesOfMutatedShapes",0x1b,*(undefined8 *)(lVar18 + 0x28));
    }
    puVar24 = (undefined8 *)plVar13[2];
    uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)plVar13[3]) && (plVar13[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = "TtUpdateCachesOfMutatedShapes";
      uVar12 = nn::os::GetSystemTick();
      puVar24[1] = uVar12;
    }
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar13[6] != 0)) {
      puVar24 = (undefined8 *)plVar13[2];
      uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)plVar13[3]) && (plVar13[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar13[6] + 8);
      }
    }
    local_78 = plVar13;
    FUN_02f49448(*(undefined8 *)(param_1 + 0x8c0),param_1);
    lVar18 = *plVar13;
    if (((*(byte *)(lVar18 + 0x38) & 1) == 0) || (plVar13[6] == 0)) {
LAB_02f416a8:
      puVar27 = (undefined8 *)plVar13[2];
      puVar20 = (undefined8 *)plVar13[3];
    }
    else {
      puVar24 = (undefined8 *)plVar13[2];
      puVar20 = (undefined8 *)plVar13[3];
      puVar27 = (undefined8 *)((long)puVar24 + 0x17U & 0xfffffffffffffff8);
      if (puVar20 < puVar27) goto LAB_02f416a8;
      plVar13[2] = (long)puVar27;
      if (puVar24 != (undefined8 *)0x0) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar13[6] + 8);
        goto LAB_02f416a8;
      }
    }
    puVar24 = (undefined8 *)((long)puVar27 + 0x17U & 0xfffffffffffffff8);
    if ((puVar24 <= puVar20) && (plVar13[2] = (long)puVar24, puVar27 != (undefined8 *)0x0)) {
      *puVar27 = &DAT_03c2d363;
      uVar12 = nn::os::GetSystemTick();
      puVar27[1] = uVar12;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
    }
  }
  else if (plVar13 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x818) = 1;
    FUN_02f40ff8(param_1 + 0x7c8,param_1,param_2);
    *(undefined4 *)(param_1 + 0x818) = 2;
    FUN_02f340e4(param_1);
    lVar18 = *(long *)(param_1 + 0x8c0);
    if (*(int *)(lVar18 + 0x40) != 0) {
LAB_02f41720:
      local_78 = (long *)0x0;
      FUN_02f49448(lVar18,param_1);
    }
  }
  else {
    lVar18 = *plVar13;
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar13[6] != 0)) {
      puVar24 = (undefined8 *)plVar13[2];
      uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)plVar13[3]) && (plVar13[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar13[6] + 8);
      }
    }
    puVar24 = (undefined8 *)plVar13[2];
    uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)plVar13[3]) && (plVar13[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = "StPreCollideSignal";
      uVar12 = nn::os::GetSystemTick();
      puVar24[1] = uVar12;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
    }
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))("PreCollideSignal",0x10,*(undefined8 *)(lVar18 + 0x28));
    }
    *(undefined4 *)(param_1 + 0x818) = 1;
    FUN_02f40ff8(param_1 + 0x7c8,param_1,param_2);
    *(undefined4 *)(param_1 + 0x818) = 2;
    FUN_02f340e4(param_1);
    lVar18 = *plVar13;
    if (((*(byte *)(lVar18 + 0x38) & 1) == 0) || (plVar13[6] == 0)) {
LAB_02f41540:
      puVar27 = (undefined8 *)plVar13[2];
      puVar20 = (undefined8 *)plVar13[3];
    }
    else {
      puVar24 = (undefined8 *)plVar13[2];
      puVar20 = (undefined8 *)plVar13[3];
      puVar27 = (undefined8 *)((long)puVar24 + 0x17U & 0xfffffffffffffff8);
      if (puVar20 < puVar27) goto LAB_02f41540;
      plVar13[2] = (long)puVar27;
      if (puVar24 != (undefined8 *)0x0) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar13[6] + 8);
        goto LAB_02f41540;
      }
    }
    puVar24 = (undefined8 *)((long)puVar27 + 0x17U & 0xfffffffffffffff8);
    if ((puVar24 <= puVar20) && (plVar13[2] = (long)puVar24, puVar27 != (undefined8 *)0x0)) {
      *puVar27 = "StMaintenance";
      uVar12 = nn::os::GetSystemTick();
      puVar27[1] = uVar12;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
    }
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))("Maintenance",0xb,*(undefined8 *)(lVar18 + 0x28));
    }
    if (*(int *)(*(long *)(param_1 + 0x8c0) + 0x40) != 0) goto LAB_02f415bc;
  }
LAB_02f4172c:
  uVar15 = (-2 << (ulong)(*(int *)(param_1 + 0x8d8) - 1U & 0x1f) | 1U) ^ 0xfffffffe;
  lVar18 = (long)*(int *)(param_1 + 0x8d0);
  do {
    if (lVar18 < 1) {
      uVar15 = (-2 << (ulong)(*(int *)(param_1 + 0x8f0) - 1U & 0x1f) | 1U) ^ 0xfffffffe;
      lVar18 = (long)*(int *)(param_1 + 0x8e8);
      goto LAB_02f41794;
    }
    uVar16 = *(uint *)(*(long *)(param_1 + 0x8c8) + lVar18 * 4 + -4) & uVar15;
    uVar15 = 0xffffffff;
    lVar18 = lVar18 + -1;
  } while (uVar16 == 0);
  goto LAB_02f417b8;
  while (uVar16 = *(uint *)(*(long *)(param_1 + 0x8e0) + lVar18 * 4 + -4) & uVar15,
        uVar15 = 0xffffffff, lVar18 = lVar18 + -1, uVar16 == 0) {
LAB_02f41794:
    if (lVar18 < 1) goto LAB_02f41b74;
  }
LAB_02f417b8:
  if (plVar13 != (long *)0x0) {
    lVar18 = *plVar13;
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))
                ("RebuildCachesOfDirtyMaterialsOrQualities",0x28,*(undefined8 *)(lVar18 + 0x28));
    }
    puVar24 = (undefined8 *)plVar13[2];
    uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)plVar13[3]) && (plVar13[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = "TtRebuildCachesOfDirtyMaterialsOrQualities";
      uVar12 = nn::os::GetSystemTick();
      puVar24[1] = uVar12;
    }
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar13[6] != 0)) {
      puVar24 = (undefined8 *)plVar13[2];
      uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)plVar13[3]) && (plVar13[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar13[6] + 8);
      }
    }
  }
  lVar18 = *(long *)(param_1 + 0x38);
  uVar15 = *(uint *)(param_1 + 0x5c);
  local_78 = plVar13;
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar16 = uVar15 + 1;
    if ((*(byte *)(lVar18 + 0x54) & 0xf) != 0) {
      uVar19 = 0;
LAB_02f41888:
      do {
        if (((*(byte *)(lVar18 + (uVar19 & 0xffffffff) * 0xc0 + 0x88) & 1) != 0) &&
           ((uVar21 = uVar19 & 0xffffffff, uVar6 = *(ushort *)(lVar18 + uVar21 * 0xc0 + 0x8a),
            (*(uint *)(*(long *)(param_1 + 0x8c8) + ((ulong)(uVar6 >> 3) & 0x1ffc)) >>
             (ulong)(uVar6 & 0x1f) & 1) != 0 ||
            (bVar5 = *(byte *)(lVar18 + uVar21 * 0xc0 + 0x89),
            (*(uint *)(*(long *)(param_1 + 0x8e0) + ((ulong)(bVar5 >> 3) & 0x1c)) >>
             (ulong)(bVar5 & 0x1f) & 1) != 0)))) {
          FUN_02f36720(param_1,*(undefined4 *)(lVar18 + uVar21 * 0xc0 + 0x50),0);
        }
        do {
          uVar15 = (int)uVar19 + 1;
          uVar19 = (ulong)uVar15;
          if (uVar16 <= uVar15) goto LAB_02f41944;
        } while ((*(byte *)(lVar18 + (ulong)uVar15 * 0xc0 + 0x54) & 0xf) == 0);
      } while( true );
    }
    uVar19 = 0;
    if (uVar16 < 2) {
      uVar15 = 0;
    }
    do {
      if (uVar15 == uVar19) goto LAB_02f41944;
      uVar19 = uVar19 + 1;
    } while ((*(byte *)(lVar18 + (uVar19 & 0xffffffff) * 0xc0 + 0x54) & 0xf) == 0);
    if ((int)uVar19 != -1) goto LAB_02f41888;
  }
LAB_02f41944:
  pvVar30 = *(void **)(param_1 + 0x8c8);
  uVar19 = (ulong)*(int *)(param_1 + 0x8d0);
  if (((ulong)pvVar30 & 0xf) == 0) {
    pvVar32 = pvVar30;
    uVar21 = uVar19;
  }
  else {
    uVar21 = 4 - (((ulong)pvVar30 & 0xf) >> 2);
    uVar3 = uVar19;
    if (uVar21 <= uVar19) {
      uVar3 = uVar21;
    }
    pvVar32 = (void *)((long)pvVar30 + uVar3 * 4);
    uVar21 = uVar19 - uVar3;
    if (pvVar30 < pvVar32) {
      memset(pvVar30,0,uVar3 << 2);
    }
    else {
      pvVar32 = pvVar30;
    }
  }
  if ((3 < uVar21) && (0 < (long)(uVar21 & 0xfffffffffffffffc))) {
    pvVar2 = (void *)((long)pvVar32 + (uVar21 & 0xfffffffffffffffc) * 4);
    if (pvVar2 <= (void *)((long)pvVar32 + 0x10U)) {
      pvVar2 = (void *)((long)pvVar32 + 0x10U);
    }
    memset(pvVar32,0,(long)pvVar2 + ~(ulong)pvVar32 + 0x10 & 0xfffffffffffffff0);
    pvVar32 = (void *)((long)pvVar32 + ((long)pvVar2 + ~(ulong)pvVar32 & 0xfffffffffffffff0) + 0x10)
    ;
  }
  if (pvVar32 < (void *)((long)pvVar30 + uVar19 * 4)) {
    memset(pvVar32,0,(long)pvVar30 + ~(ulong)pvVar32 + uVar19 * 4 + 4 & 0xfffffffffffffffc);
  }
  pvVar30 = *(void **)(param_1 + 0x8e0);
  uVar19 = (ulong)*(int *)(param_1 + 0x8e8);
  if (((ulong)pvVar30 & 0xf) == 0) {
    pvVar32 = pvVar30;
    uVar21 = uVar19;
  }
  else {
    uVar21 = 4 - (((ulong)pvVar30 & 0xf) >> 2);
    uVar3 = uVar19;
    if (uVar21 <= uVar19) {
      uVar3 = uVar21;
    }
    pvVar32 = (void *)((long)pvVar30 + uVar3 * 4);
    uVar21 = uVar19 - uVar3;
    if (pvVar30 < pvVar32) {
      memset(pvVar30,0,uVar3 << 2);
    }
    else {
      pvVar32 = pvVar30;
    }
  }
  if ((3 < uVar21) && (0 < (long)(uVar21 & 0xfffffffffffffffc))) {
    pvVar2 = (void *)((long)pvVar32 + (uVar21 & 0xfffffffffffffffc) * 4);
    if (pvVar2 <= (void *)((long)pvVar32 + 0x10U)) {
      pvVar2 = (void *)((long)pvVar32 + 0x10U);
    }
    memset(pvVar32,0,(long)pvVar2 + ~(ulong)pvVar32 + 0x10 & 0xfffffffffffffff0);
    pvVar32 = (void *)((long)pvVar32 + ((long)pvVar2 + ~(ulong)pvVar32 & 0xfffffffffffffff0) + 0x10)
    ;
  }
  if (pvVar32 < (void *)((long)pvVar30 + uVar19 * 4)) {
    memset(pvVar32,0,(long)pvVar30 + ~(ulong)pvVar32 + uVar19 * 4 + 4 & 0xfffffffffffffffc);
  }
  if (local_78 != (long *)0x0) {
    lVar18 = *local_78;
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (local_78[6] != 0)) {
      puVar24 = (undefined8 *)local_78[2];
      uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)local_78[3]) && (local_78[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(local_78[6] + 8);
      }
    }
    puVar24 = (undefined8 *)local_78[2];
    uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)local_78[3]) && (local_78[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = &DAT_03c2d363;
      uVar12 = nn::os::GetSystemTick();
      puVar24[1] = uVar12;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
    }
  }
LAB_02f41b74:
  lVar18 = *(long *)(param_1 + 0x908);
  uVar6 = *(ushort *)(lVar18 + 0x68);
  if (uVar6 != 0xffff) {
    lVar29 = *(long *)(lVar18 + 0x48);
    uVar19 = (ulong)(uint)uVar6;
    do {
      if (*(short *)(lVar29 + uVar19 * 0x10 + 2) == 0xe) {
        puVar25 = (ushort *)(lVar29 + uVar19 * 0x10);
        goto LAB_02f41c3c;
      }
      uVar7 = *(ushort *)(lVar29 + uVar19 * 0x10);
      uVar19 = (ulong)uVar7;
    } while (uVar7 != 0xffff);
  }
  uVar19 = (ulong)*(ushort *)(lVar18 + 0x40);
  if (uVar19 == 0xffff) {
    uVar19 = (ulong)*(int *)(lVar18 + 0x50);
    if ((int)(*(uint *)(lVar18 + 0x54) & 0x7fffffff) <= *(int *)(lVar18 + 0x50)) {
      FUN_02f4fbec(lVar18 + 0x48,PTR_PTR_047d1a50,uVar19 + 1);
    }
    puVar25 = (ushort *)(*(long *)(lVar18 + 0x48) + uVar19 * 0x10);
    puVar25[4] = 0;
    puVar25[5] = 0;
    puVar25[6] = 0;
    puVar25[7] = 0;
    uVar6 = *(ushort *)(lVar18 + 0x68);
    *(int *)(lVar18 + 0x50) = (int)(uVar19 + 1);
  }
  else {
    puVar25 = (ushort *)(*(long *)(lVar18 + 0x48) + uVar19 * 0x10);
    *(ushort *)(lVar18 + 0x40) = *puVar25;
  }
  *puVar25 = uVar6;
  *(short *)(lVar18 + 0x68) = (short)uVar19;
  puVar25[1] = 0xe;
  *(undefined1 *)(puVar25 + 2) = 0;
LAB_02f41c3c:
  uVar19 = *(ulong *)(puVar25 + 4) & 0xfffffffffffffffc;
  if (uVar19 == 0) {
LAB_02f41c64:
    FUN_02f410a4(puVar25 + 4,param_1,FUN_02f41160,0);
  }
  else {
    iVar23 = 0;
    do {
      if ((*(ulong *)(uVar19 + 8) & 3) == 0) {
        iVar23 = iVar23 + 1;
      }
      uVar19 = *(ulong *)(uVar19 + 8) & 0xfffffffffffffffc;
    } while (uVar19 != 0);
    if (iVar23 == 0) goto LAB_02f41c64;
  }
  lVar18 = *(long *)(param_1 + 0x648);
  if (lVar18 == 0) {
    fVar34 = *param_2;
    fVar35 = param_2[1];
    iVar23 = *(int *)(param_1 + 0x5a0);
  }
  else {
    fVar35 = *(float *)(lVar18 + 0x30);
    fVar36 = param_2[1];
    fVar38 = *(float *)(lVar18 + 0x1c);
    fVar34 = fVar35;
    if (*param_2 <= fVar35) {
      fVar34 = *param_2;
    }
    fVar42 = *(float *)(lVar18 + 0x20);
    iVar40 = *(int *)(lVar18 + 0x24);
    fVar37 = *(float *)(lVar18 + 0x18) / fVar34;
    iVar4 = *(int *)(lVar18 + 0x28);
    iVar23 = *(int *)(lVar18 + 0x2c);
    *(ulong *)(param_1 + 0x538) = CONCAT44(fVar42,fVar42);
    iVar22 = (int)((float)iVar40 / fVar37 + 0.999);
    if (iVar4 <= iVar22) {
      iVar4 = iVar22;
    }
    if (iVar4 <= iVar23) {
      iVar23 = iVar4;
    }
    if (fVar36 <= fVar35) {
      fVar35 = fVar36;
    }
    fVar36 = (fVar37 * (float)iVar23) / (float)iVar40;
    fVar38 = fVar38 / (fVar36 * fVar36);
    if (1.0 < fVar38) {
      fVar38 = 1.0;
    }
    *(float *)(param_1 + 0x530) = fVar38;
    fVar37 = fVar38 * 0.5;
    fVar41 = fVar42 / fVar38;
    fVar38 = fVar38 / fVar42;
    *(float *)(param_1 + 0x534) = fVar37;
    *(float *)(param_1 + 0x614) = fVar38;
    *(float *)(param_1 + 0x618) = fVar42 / fVar37;
    fVar36 = (float)*(undefined8 *)(param_1 + 0x570);
    fVar39 = fVar38 * fVar36;
    *(ulong *)(param_1 + 0x600) = CONCAT44(fVar39,fVar39);
    fVar36 = -(fVar37 / fVar42) * fVar36;
    *(float *)(param_1 + 0x610) = fVar41;
    *(float *)(param_1 + 0x61c) = fVar37 / fVar42;
    *(ulong *)(param_1 + 0x5e8) = (ulong)(uint)fVar38;
    *(ulong *)(param_1 + 0x5e0) = CONCAT44(fVar38,fVar38);
    *(ulong *)(param_1 + 0x5f8) = (ulong)(uint)fVar41;
    *(ulong *)(param_1 + 0x5f0) = CONCAT44(fVar41,fVar41);
    *(ulong *)(param_1 + 0x608) = CONCAT44(fVar36,fVar36);
  }
  FUN_02f48364(fVar34,fVar35,param_1 + 0x530,param_1 + 0x880,iVar23,*(undefined4 *)(param_1 + 0x5a8)
              );
  if (plVar13 != (long *)0x0) {
    lVar18 = *plVar13;
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar13[6] != 0)) {
      puVar24 = (undefined8 *)plVar13[2];
      uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)plVar13[3]) && (plVar13[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar13[6] + 8);
      }
    }
    puVar24 = (undefined8 *)plVar13[2];
    uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)plVar13[3]) && (plVar13[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = "StCreateSimulationContext";
      uVar12 = nn::os::GetSystemTick();
      puVar24[1] = uVar12;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
    }
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))("CreateSimulationContext",0x17,*(undefined8 *)(lVar18 + 0x28));
    }
  }
  puVar10 = PTR_DAT_047d1a08;
  if (*(long *)(param_1 + 0x920) == 0) {
    local_78 = (long *)0x640;
    plVar14 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_78,0);
    if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
      (**(code **)(puVar10 + 0x10))(plVar14,"hknpSimulationContext");
    }
    *plVar14 = (long)(plVar14 + 2);
    lVar18 = 0;
    *(undefined4 *)(plVar14 + 1) = 0;
    *(undefined4 *)((long)plVar14 + 0xc) = 0x80000020;
    plVar26 = plVar14 + 0x24;
    do {
      iVar23 = (int)lVar18;
      *(int *)((long)plVar26 + -0xc) = iVar23 + 1;
      *(int *)(plVar26 + -1) = iVar23 + 2;
      lVar18 = lVar18 + 4;
      *(int *)((long)plVar26 + -4) = iVar23 + 3;
      *(int *)plVar26 = (int)lVar18;
      plVar26 = plVar26 + 2;
    } while (lVar18 != 0x100);
    *(undefined4 *)(plVar14 + 0xa2) = 0x1ff;
    *(undefined4 *)(plVar14 + 0x22) = 0;
    plVar14[0xa5] = -0x8000000000000000;
    plVar14[0xa7] = -0x8000000000000000;
    plVar14[0xa4] = 0;
    plVar14[0xa6] = 0;
    plVar14[0xa8] = 0;
    plVar14[0xaa] = (long)(plVar14 + 0xae);
    *(undefined4 *)(plVar14 + 0xab) = 0;
    *(undefined4 *)((long)plVar14 + 0x55c) = 0x80000018;
    *(long **)(param_1 + 0x920) = plVar14;
    FUN_02f21d28(plVar14,param_1,param_2[2]);
  }
  else {
    FUN_02f220f8(*(long *)(param_1 + 0x920),param_1,param_2[2]);
  }
  *(undefined4 *)(param_1 + 0x818) = 4;
  if (plVar13 != (long *)0x0) {
    lVar18 = *plVar13;
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar13[6] != 0)) {
      puVar24 = (undefined8 *)plVar13[2];
      uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)plVar13[3]) && (plVar13[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar13[6] + 8);
      }
    }
    puVar24 = (undefined8 *)plVar13[2];
    uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)plVar13[3]) && (plVar13[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = &DAT_03c3697b;
      uVar12 = nn::os::GetSystemTick();
      puVar24[1] = uVar12;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
      if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
        (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
      }
    }
  }
  *(undefined2 *)(param_3 + 0x4c8) = 0xffff;
  FUN_02f42348(param_1 + 0x7f0,param_1);
  plVar13 = *(long **)(param_1 + 0x920);
  puVar1 = (uint *)(plVar13 + 0x22);
  uVar15 = *(uint *)(plVar13 + 0x22);
  uVar19 = (ulong)uVar15 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar16 = *puVar1;
  if (uVar16 == uVar15) {
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = uVar15 + 0x200 & 0xfffffe00 | puVar1[uVar19 + 1];
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 != '\0') goto LAB_02f42020;
    puVar31 = puVar1 + uVar19 + 1;
  }
  else {
    ClearExclusiveLocal();
LAB_02f42020:
    do {
      uVar19 = (ulong)(uVar16 & 0x1ff);
      DataMemoryBarrier(2,3);
      uVar15 = *puVar1;
      if (uVar15 == uVar16) {
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar11) {
          *puVar1 = uVar16 + 0x200 & 0xfffffe00 | *(uint *)((long)plVar13 + uVar19 * 4 + 0x114);
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_02f4205c;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02f4205c:
        bVar11 = false;
      }
      uVar16 = uVar15;
    } while (!bVar11);
    puVar31 = (uint *)((long)plVar13 + uVar19 * 4 + 0x114);
  }
  *puVar31 = 0x1ff;
  DataMemoryBarrier(2,3);
  puVar31 = *(uint **)(*plVar13 + uVar19 * 8);
  lVar18 = *(long *)(puVar31 + 2);
  uVar21 = *(ulong *)(lVar18 + 0x7e8);
  while (plVar14 = (long *)(uVar21 & 0xfffffffffffffffc), plVar14 != (long *)0x0) {
    uVar21 = plVar14[1];
    if ((uVar21 & 3) == 0) {
      (**(code **)(*plVar14 + 0x20))(plVar14,lVar18,uVar19);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x4a8) + 0x10))(*(long **)(param_1 + 0x4a8),puVar31,param_3);
  if (plVar33 != (long *)0x0) {
    lVar18 = *plVar33;
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar33[6] != 0)) {
      puVar24 = (undefined8 *)plVar33[2];
      uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)plVar33[3]) && (plVar33[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
        *puVar24 = &DAT_03c4e575;
        puVar24[1] = *(undefined8 *)(plVar33[6] + 8);
      }
    }
    puVar24 = (undefined8 *)plVar33[2];
    uVar19 = (long)puVar24 + 0x17U & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)plVar33[3]) && (plVar33[2] = uVar19, puVar24 != (undefined8 *)0x0)) {
      *puVar24 = "EtBuildCollideTasks";
      uVar12 = nn::os::GetSystemTick();
      puVar24[1] = uVar12;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
    }
  }
  uVar15 = *puVar31;
  lVar18 = *(long *)(*(long *)(*plVar13 + (long)(int)uVar15 * 8) + 8);
  uVar19 = *(ulong *)(lVar18 + 0x7f0);
  while (plVar33 = (long *)(uVar19 & 0xfffffffffffffffc), plVar33 != (long *)0x0) {
    uVar19 = plVar33[1];
    if ((uVar19 & 3) == 0) {
      (**(code **)(*plVar33 + 0x20))(plVar33,lVar18,uVar15);
    }
  }
  uVar16 = *(uint *)(plVar13 + 0x22);
  lVar18 = (long)(int)uVar15 * 4;
  DataMemoryBarrier(2,3);
  *(uint *)((long)plVar13 + lVar18 + 0x114) = uVar16 & 0x1ff;
  uVar17 = *puVar1;
  if (uVar17 == uVar16) {
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = uVar16 & 0xfffffe00 | uVar15;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_02f42248;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    DataMemoryBarrier(2,3);
    *(uint *)((long)plVar13 + lVar18 + 0x114) = uVar17 & 0x1ff;
    uVar16 = *puVar1;
    if (uVar16 == uVar17) {
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = uVar17 & 0xfffffe00 | uVar15;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 != '\0') goto LAB_02f4223c;
      bVar11 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02f4223c:
      bVar11 = false;
    }
    uVar17 = uVar16;
  } while (!bVar11);
LAB_02f42248:
  if (iVar28 != -1) {
    lVar29 = (long)DAT_0486b380;
    lVar18 = *(long *)(lVar9 + 0x1000b8);
    if (lVar18 == 0) {
      lVar18 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar18;
    }
    *(long *)(lVar18 + lVar29 * 8 + 1000) = (long)iVar28;
  }
  return;
}


