/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01963a38; name: FUN_01963a38
 */


void FUN_01963a38(undefined8 *param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  short sVar4;
  char *pcVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  bool bVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  ulong *puVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  ushort uVar23;
  int iVar24;
  int iVar25;
  int *piVar26;
  long lVar27;
  ushort *puVar28;
  uint *puVar29;
  ulong uVar30;
  uint *puVar31;
  long *plVar32;
  undefined8 uVar33;
  long *plVar34;
  undefined8 uVar35;
  char *pcVar36;
  byte bVar37;
  byte bVar38;
  int iVar39;
  char *pcVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  char cVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  float fVar56;
  ulong local_2b0;
  ulong local_280;
  undefined8 local_270;
  undefined4 uStack_260;
  undefined8 local_250;
  undefined4 uStack_23c;
  ulong uStack_210;
  long *local_200;
  undefined8 local_1f0;
  long *local_1d0;
  char *local_1c8;
  undefined8 uStack_1c0;
  long *local_1b8;
  long *local_1b0;
  undefined8 *local_1a8;
  undefined8 uStack_1a0;
  char *local_198;
  undefined8 uStack_190;
  long *local_188;
  long *local_180;
  undefined8 *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long *local_150;
  char *local_148;
  undefined8 uStack_140;
  long *local_138;
  long *local_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 *local_108;
  char *local_100;
  undefined8 local_f8;
  long *local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  ulong *local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  
  piVar26 = (int *)*param_1;
  uVar7 = *(undefined4 *)(param_1 + 0x38);
  puVar28 = (ushort *)((long)piVar26 - (long)*piVar26);
  if (*puVar28 < 0xb) {
    iVar25 = 0;
    iVar39 = 0;
    if (8 < *puVar28) goto LAB_01963a94;
  }
  else {
    if ((ulong)puVar28[5] == 0) {
      iVar25 = 0;
    }
    else {
      iVar25 = *(int *)((long)piVar26 + (ulong)puVar28[5]);
    }
LAB_01963a94:
    if ((ulong)puVar28[4] == 0) {
      iVar39 = 0;
    }
    else {
      iVar39 = *(int *)((long)piVar26 + (ulong)puVar28[4]);
    }
  }
  local_98 = (ulong *)0x0;
  uStack_90 = 0;
  FUN_01340a44(&local_c0,param_1,1);
  if ((char)local_c0 != '\0') {
    local_e0 = local_b8;
    uStack_d8 = uStack_b0;
    local_d0 = local_a8;
    local_c8 = local_a0;
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x18))();
    }
    if ((code *)param_1[2] == (code *)0x0) {
      local_108 = (undefined8 *)0x0;
      local_100 = (char *)0x0;
    }
    else {
      (*(code *)param_1[2])(&local_108,param_1 + 6,&local_e0);
    }
    FUN_00d0a34c(&local_98,&local_108);
    puVar18 = local_108;
    if (local_108 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_108 + 3);
      do {
        sVar4 = *psVar1;
        cVar47 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar4 + -1;
          cVar47 = ExclusiveMonitorsStatus();
        }
      } while (cVar47 != '\0');
      if (sVar4 == 1) {
        piVar26 = (int *)((long)local_108 + 0x1c);
        do {
          iVar24 = *piVar26;
          cVar47 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar20) {
            *piVar26 = -1;
            cVar47 = ExclusiveMonitorsStatus();
          }
        } while (cVar47 != '\0');
        if (iVar24 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar24 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar24 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar27 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar27;
          local_118 = (undefined8 *)*puVar18;
          FUN_00c44438(lVar27 + 0x8040,&local_118);
        }
      }
      else if (sVar4 == 0) goto LAB_019646e8;
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  puVar16 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar24 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar24 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar17 = PTR_DAT_047d3e30;
  pcVar40 = *(char **)PTR_DAT_047d3e30;
  uVar33 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  local_200 = *(long **)(PTR_DAT_047d3e30 + 0x10);
  plVar34 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 0x18))(plVar34);
  }
  FUN_01340a44(&local_108,param_1,0x100000001);
  plVar6 = local_e8;
  uVar35 = local_f8;
  pcVar5 = local_100;
  if ((char)local_108 != '\0') {
    local_200 = local_f0;
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x18))(local_e8);
    }
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0x20))(plVar34);
    }
    uVar33 = uVar35;
    plVar34 = plVar6;
    pcVar40 = pcVar5;
    if ((char)local_108 != '\0') {
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x20))();
      }
      local_108 = (undefined8 *)((ulong)local_108 & 0xffffffffffffff00);
    }
  }
  piVar26 = (int *)*param_1;
  puVar28 = (ushort *)((long)piVar26 - (long)*piVar26);
  if (*puVar28 < 0x17) {
    bVar37 = 0;
    bVar20 = false;
    uVar55 = 0;
    uVar44 = 0;
    uStack_210 = 0;
  }
  else {
    uVar45 = 0;
    uVar48 = 0;
    uVar50 = 0;
    uVar52 = 0;
    if (((ulong)puVar28[0xb] != 0) &&
       (puVar29 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]),
       puVar29 = (uint *)((long)puVar29 + (ulong)*puVar29), 2 < *puVar29)) {
      puVar29 = puVar29 + 3;
      piVar3 = (int *)((long)puVar29 + (ulong)*puVar29);
      puVar29 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar29 + (ulong)*puVar29);
      uVar41 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar30 != 0)) {
        uVar41 = *(undefined4 *)((long)piVar3 + uVar30);
      }
      uVar45 = (undefined1)uVar41;
      uVar48 = (undefined1)((uint)uVar41 >> 8);
      uVar50 = (undefined1)((uint)uVar41 >> 0x10);
      uVar52 = (undefined1)((uint)uVar41 >> 0x18);
    }
    uVar53 = 0;
    uVar51 = 0;
    uVar49 = 0;
    uVar46 = 0;
    if (((ulong)puVar28[0xb] != 0) &&
       (puVar29 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]),
       puVar29 = (uint *)((long)puVar29 + (ulong)*puVar29), 3 < *puVar29)) {
      puVar29 = puVar29 + 4;
      piVar3 = (int *)((long)puVar29 + (ulong)*puVar29);
      puVar29 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar29 + (ulong)*puVar29);
      uVar41 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar30 != 0)) {
        uVar41 = *(undefined4 *)((long)piVar3 + uVar30);
      }
      uVar46 = (undefined1)uVar41;
      uVar49 = (undefined1)((uint)uVar41 >> 8);
      uVar51 = (undefined1)((uint)uVar41 >> 0x10);
      uVar53 = (undefined1)((uint)uVar41 >> 0x18);
    }
    uVar55 = 0;
    if (((ulong)puVar28[0xb] != 0) &&
       (puVar29 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]),
       puVar29 = (uint *)((long)puVar29 + (ulong)*puVar29), 4 < *puVar29)) {
      puVar29 = puVar29 + 5;
      piVar3 = (int *)((long)puVar29 + (ulong)*puVar29);
      puVar29 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar29 + (ulong)*puVar29);
      fVar42 = 0.0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar30 != 0)) {
        fVar42 = *(float *)((long)piVar3 + uVar30);
      }
      uVar55 = SUB41((fVar42 * 3.1415927) / 180.0,0);
    }
    uVar44 = 0;
    if (((ulong)puVar28[0xb] != 0) &&
       (puVar29 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]),
       puVar29 = (uint *)((long)puVar29 + (ulong)*puVar29), 5 < *puVar29)) {
      puVar29 = puVar29 + 6;
      piVar3 = (int *)((long)puVar29 + (ulong)*puVar29);
      puVar29 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar29 + (ulong)*puVar29);
      uVar44 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar30 != 0)) {
        uVar44 = (undefined1)*(undefined4 *)((long)piVar3 + uVar30);
      }
    }
    uStack_210 = CONCAT17(uVar53,CONCAT16(uVar51,CONCAT15(uVar49,CONCAT14(uVar46,CONCAT13(uVar52,
                                                  CONCAT12(uVar50,CONCAT11(uVar48,uVar45)))))));
    if (((ulong)puVar28[0xb] == 0) ||
       (puVar29 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]),
       puVar29 = (uint *)((long)puVar29 + (ulong)*puVar29), *puVar29 < 8)) {
      bVar37 = 0;
      bVar20 = false;
    }
    else {
      puVar29 = puVar29 + 8;
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      puVar29 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
         (uVar30 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar30 == 0)) {
        bVar20 = false;
      }
      else {
        bVar20 = *(char *)((long)piVar26 + uVar30) != '\0';
      }
      bVar37 = 1;
    }
  }
  local_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  FUN_01340a44(&local_108,param_1,0x800000001);
  if ((char)local_108 != '\0') {
    local_148 = local_100;
    uStack_140 = local_f8;
    local_138 = local_f0;
    local_130 = local_e8;
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x18))();
    }
    if ((code *)param_1[2] == (code *)0x0) {
      local_128 = (undefined8 *)0x0;
      uStack_120 = 0;
    }
    else {
      (*(code *)param_1[2])(&local_128,param_1 + 6,&local_148);
    }
    FUN_00d0a34c(&local_118,&local_128);
    puVar18 = local_128;
    if (local_128 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_128 + 3);
      do {
        sVar4 = *psVar1;
        cVar47 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar4 + -1;
          cVar47 = ExclusiveMonitorsStatus();
        }
      } while (cVar47 != '\0');
      if (sVar4 == 1) {
        piVar26 = (int *)((long)local_128 + 0x1c);
        do {
          iVar24 = *piVar26;
          cVar47 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar9) {
            *piVar26 = -1;
            cVar47 = ExclusiveMonitorsStatus();
          }
        } while (cVar47 != '\0');
        if (iVar24 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar24 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar24 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar27 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar27;
          local_78 = *puVar18;
          FUN_00c44438(lVar27 + 0x8040,&local_78);
        }
      }
      else if (sVar4 == 0) goto LAB_019646e8;
    }
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    if ((char)local_108 != '\0') {
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x20))();
      }
      local_108 = (undefined8 *)((ulong)local_108 & 0xffffffffffffff00);
    }
  }
  if (((*puVar16 & 1) == 0) && (iVar24 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar24 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  pcVar5 = *(char **)puVar17;
  local_250 = *(undefined8 *)(puVar17 + 8);
  local_1d0 = *(long **)(puVar17 + 0x10);
  plVar6 = *(long **)(puVar17 + 0x18);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_01340a44(&local_108,param_1,0x900000001);
  plVar32 = local_e8;
  pcVar36 = local_100;
  if ((char)local_108 == '\0') {
    plVar32 = plVar6;
    pcVar36 = pcVar5;
  }
  else {
    local_250 = local_f8;
    local_1d0 = local_f0;
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x18))(local_e8);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    if (((char)local_108 != '\0') && (local_e8 != (long *)0x0)) {
      (**(code **)(*local_e8 + 0x20))();
    }
  }
  piVar26 = (int *)*param_1;
  puVar28 = (ushort *)((long)piVar26 - (long)*piVar26);
  if (*puVar28 < 0x17) {
    bVar9 = false;
    local_270 = 0;
    uStack_260 = 0;
    local_280 = 0;
LAB_019647a4:
    bVar13 = 0;
    bVar38 = 0;
    bVar22 = false;
    bVar21 = false;
    uVar53 = 0;
    uVar51 = 0;
    uVar49 = 0;
    uVar46 = 0;
    uVar52 = 0;
    uVar50 = 0;
    uVar48 = 0;
    uVar45 = 0;
    uVar41 = 0;
    bVar11 = true;
    bVar15 = false;
    bVar10 = true;
    bVar12 = true;
    local_2b0 = local_280;
  }
  else {
    uVar45 = 0;
    uVar48 = 0;
    uVar50 = 0;
    uVar52 = 0;
    if (((ulong)puVar28[0xb] != 0) &&
       (puVar29 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]),
       puVar29 = (uint *)((long)puVar29 + (ulong)*puVar29), 10 < *puVar29)) {
      puVar29 = puVar29 + 0xb;
      piVar3 = (int *)((long)puVar29 + (ulong)*puVar29);
      puVar29 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar29 + (ulong)*puVar29);
      uVar45 = 0;
      uVar48 = 0;
      uVar50 = 0;
      uVar52 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar30 != 0)) {
        uVar41 = *(undefined4 *)((long)piVar3 + uVar30);
        uVar45 = (undefined1)uVar41;
        uVar48 = (undefined1)((uint)uVar41 >> 8);
        uVar50 = (undefined1)((uint)uVar41 >> 0x10);
        uVar52 = (undefined1)((uint)uVar41 >> 0x18);
      }
    }
    if ((ulong)puVar28[0xb] == 0) {
      bVar9 = false;
      local_270 = (ulong)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar45)));
LAB_01964d70:
      local_280 = 0;
    }
    else {
      puVar29 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]);
      if (*(uint *)((long)puVar29 + (ulong)*puVar29) < 0xc) {
        bVar9 = false;
        uVar41 = 0;
      }
      else {
        puVar31 = (uint *)((long)puVar29 + (ulong)*puVar29) + 0xc;
        piVar3 = (int *)((long)puVar31 + (ulong)*puVar31);
        puVar31 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
        piVar3 = (int *)((long)puVar31 + (ulong)*puVar31);
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar30 == 0)) {
          uVar41 = 0;
        }
        else {
          uVar41 = *(undefined4 *)((long)piVar3 + uVar30);
        }
        bVar9 = true;
      }
      local_270 = CONCAT44(uVar41,CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar45))));
      if (*(uint *)((long)puVar29 + (ulong)*puVar29) < 0xd) goto LAB_01964d70;
      puVar29 = (uint *)((long)puVar29 + (ulong)*puVar29) + 0xd;
      piVar3 = (int *)((long)puVar29 + (ulong)*puVar29);
      puVar29 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar29 + (ulong)*puVar29);
      uVar46 = 0;
      uVar49 = 0;
      uVar51 = 0;
      uVar53 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar30 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar30 != 0)) {
        uVar41 = *(undefined4 *)((long)piVar3 + uVar30);
        uVar46 = (undefined1)uVar41;
        uVar49 = (undefined1)((uint)uVar41 >> 8);
        uVar51 = (undefined1)((uint)uVar41 >> 0x10);
        uVar53 = (undefined1)((uint)uVar41 >> 0x18);
      }
      local_280 = (ulong)CONCAT13(uVar53,CONCAT12(uVar51,CONCAT11(uVar49,uVar46)));
    }
    uStack_260 = CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar45)));
    if ((ulong)puVar28[0xb] == 0) goto LAB_019647a4;
    puVar29 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]);
    if (*(uint *)((long)puVar29 + (ulong)*puVar29) < 0xe) {
      bVar15 = false;
      uVar8 = 0;
    }
    else {
      puVar31 = (uint *)((long)puVar29 + (ulong)*puVar29) + 0xe;
      piVar26 = (int *)((long)puVar31 + (ulong)*puVar31);
      puVar31 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar31 + (ulong)*puVar31);
      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
         (uVar30 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar30 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)((long)piVar26 + uVar30);
      }
      bVar15 = true;
    }
    uVar45 = 0;
    uVar48 = 0;
    uVar50 = 0;
    uVar52 = 0;
    if (*(uint *)((long)puVar29 + (ulong)*puVar29) < 0xf) {
      bVar10 = true;
LAB_0196460c:
      uVar46 = 0;
      uVar49 = 0;
      uVar51 = 0;
      uVar53 = 0;
    }
    else {
      puVar31 = (uint *)((long)puVar29 + (ulong)*puVar29) + 0xf;
      piVar26 = (int *)((long)puVar31 + (ulong)*puVar31);
      puVar31 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar31 + (ulong)*puVar31);
      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
         (uVar30 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar30 == 0)) {
        bVar10 = false;
        goto LAB_0196460c;
      }
      uVar41 = *(undefined4 *)((long)piVar26 + uVar30);
      uVar46 = (undefined1)uVar41;
      uVar49 = (undefined1)((uint)uVar41 >> 8);
      uVar51 = (undefined1)((uint)uVar41 >> 0x10);
      uVar53 = (undefined1)((uint)uVar41 >> 0x18);
      bVar10 = false;
    }
    if (*(uint *)((long)puVar29 + (ulong)*puVar29) < 0x10) {
      bVar11 = true;
    }
    else {
      puVar31 = (uint *)((long)puVar29 + (ulong)*puVar29) + 0x10;
      piVar26 = (int *)((long)puVar31 + (ulong)*puVar31);
      puVar31 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar31 + (ulong)*puVar31);
      if ((4 < *(ushort *)((long)piVar26 - (long)*piVar26)) &&
         (uVar30 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar30 != 0)) {
        uVar41 = *(undefined4 *)((long)piVar26 + uVar30);
        uVar45 = (undefined1)uVar41;
        uVar48 = (undefined1)((uint)uVar41 >> 8);
        uVar50 = (undefined1)((uint)uVar41 >> 0x10);
        uVar52 = (undefined1)((uint)uVar41 >> 0x18);
      }
      bVar11 = false;
    }
    if (*(uint *)((long)puVar29 + (ulong)*puVar29) < 0x11) {
      uVar41 = 0;
      bVar12 = true;
    }
    else {
      puVar31 = (uint *)((long)puVar29 + (ulong)*puVar29) + 0x11;
      piVar26 = (int *)((long)puVar31 + (ulong)*puVar31);
      puVar31 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar31 + (ulong)*puVar31);
      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
         (uVar30 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar30 == 0)) {
        bVar12 = false;
        uVar41 = 0;
      }
      else {
        uVar41 = *(undefined4 *)((long)piVar26 + uVar30);
        bVar12 = false;
      }
    }
    if (*(uint *)((long)puVar29 + (ulong)*puVar29) < 0x12) {
      bVar13 = 0;
      bVar21 = false;
    }
    else {
      puVar31 = (uint *)((long)puVar29 + (ulong)*puVar29) + 0x12;
      piVar26 = (int *)((long)puVar31 + (ulong)*puVar31);
      puVar31 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar31 + (ulong)*puVar31);
      if (*(ushort *)((long)piVar26 - (long)*piVar26) < 5) {
        bVar21 = false;
      }
      else {
        uVar30 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2];
        bVar21 = false;
        if (uVar30 != 0) {
          bVar21 = *(char *)((long)piVar26 + uVar30) != '\0';
        }
      }
      bVar13 = 1;
    }
    local_2b0 = CONCAT44(uVar8,(int)local_280);
    if (*(uint *)((long)puVar29 + (ulong)*puVar29) < 0x13) {
      bVar38 = 0;
      bVar22 = false;
    }
    else {
      puVar29 = (uint *)((long)puVar29 + (ulong)*puVar29) + 0x13;
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      puVar29 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
         (uVar30 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar30 == 0)) {
        bVar22 = false;
      }
      else {
        bVar22 = *(char *)((long)piVar26 + uVar30) != '\0';
      }
      bVar38 = 1;
    }
  }
  fVar42 = 0.0;
  if (!bVar10) {
    fVar42 = (float)CONCAT13(uVar53,CONCAT12(uVar51,CONCAT11(uVar49,uVar46)));
  }
  fVar56 = 0.0;
  if (!bVar11) {
    fVar56 = (float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar45)));
  }
  local_108 = (undefined8 *)0x309fc46d91599d0c;
  local_100 = "IsAdjustScale";
  uVar8 = 0;
  if (!bVar12) {
    uVar8 = uVar41;
  }
  local_f8 = 0xd;
  local_f0 = (long *)0x0;
  uVar23 = FUN_0141f968(param_1,&local_108);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  if (((uVar23 & 0xff) != 0) && (0xff < uVar23)) {
    fVar43 = (float)FUN_01548c60(param_1,&local_98);
    fVar42 = fVar42 * fVar43;
    fVar56 = fVar56 * fVar43;
  }
  if (((*PTR_DAT_047d3be0 & 1) == 0) &&
     (iVar24 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar24 != 0)) {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  bVar54 = -!bVar9;
  cVar47 = -!bVar15;
  uVar35 = *(undefined8 *)PTR_DAT_047d3be8;
  *(undefined8 *)PTR_DAT_047dcd80 = uVar35;
  local_168 = local_b8;
  uStack_160 = uStack_b0;
  local_158 = local_a8;
  local_150 = local_a0;
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))();
  }
  local_178 = (undefined8 *)0x0;
  uStack_170 = 0;
  uVar41 = CONCAT13(cVar47,CONCAT12(cVar47,CONCAT11(cVar47,cVar47)));
  uStack_23c = (undefined4)
               (CONCAT17(cVar47,CONCAT16(cVar47,CONCAT15(cVar47,CONCAT14(cVar47,uVar41)))) >> 0x20);
  FUN_00d0a71c(&local_178,&local_98);
  local_188 = local_200;
  local_198 = pcVar40;
  uStack_190 = uVar33;
  local_180 = plVar34;
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 0x18))(plVar34);
  }
  local_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  local_1f0 = CONCAT17(local_270._7_1_ & ~bVar54,
                       CONCAT16(local_270._6_1_ & ~bVar54,
                                CONCAT15(local_270._5_1_ & ~bVar54,
                                         CONCAT14(local_270._4_1_ & ~bVar54,
                                                  CONCAT13(uStack_260._3_1_ ^
                                                           (uStack_260._3_1_ ^ local_270._3_1_) &
                                                           ~bVar54,CONCAT12(uStack_260._2_1_ ^
                                                                            (uStack_260._2_1_ ^
                                                                            local_270._2_1_) &
                                                                            ~bVar54,CONCAT11(
                                                  uStack_260._1_1_ ^
                                                  (uStack_260._1_1_ ^ local_270._1_1_) & ~bVar54,
                                                  (byte)uStack_260 ^
                                                  ((byte)uStack_260 ^ (byte)local_270) & ~bVar54))))
                                        )));
  FUN_00d0a71c(&local_1a8,&local_118);
  uStack_1c0 = local_250;
  local_1b8 = local_1d0;
  local_1c8 = pcVar36;
  local_1b0 = plVar32;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x18))(plVar32);
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uStack_210;
  FUN_01964e04(auVar14,uVar44,uVar55,local_1f0,
               local_280 ^ (local_280 ^ local_2b0) & ~CONCAT44(uStack_23c,uVar41),fVar42,fVar56,
               uVar35,uVar7,param_1,&local_168,&local_178,&local_198,bVar37 & bVar20,&local_1a8,
               &local_1c8,uVar8,iVar25 - iVar39,bVar21 & bVar13,bVar38 & bVar22);
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x20))();
  }
  puVar18 = local_1a8;
  if (local_1a8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_1a8 + 3);
    do {
      sVar4 = *psVar1;
      cVar47 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar4 + -1;
        cVar47 = ExclusiveMonitorsStatus();
      }
    } while (cVar47 != '\0');
    if (sVar4 == 1) {
      piVar26 = (int *)((long)local_1a8 + 0x1c);
      do {
        iVar25 = *piVar26;
        cVar47 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar20) {
          *piVar26 = -1;
          cVar47 = ExclusiveMonitorsStatus();
        }
      } while (cVar47 != '\0');
      if (iVar25 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar25 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar25 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar27 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar27;
        local_108 = (undefined8 *)*puVar18;
        FUN_00c44438(lVar27 + 0x8040,&local_108);
      }
    }
    else if (sVar4 == 0) goto LAB_019646e8;
  }
  if (local_180 != (long *)0x0) {
    (**(code **)(*local_180 + 0x20))();
  }
  puVar18 = local_178;
  if (local_178 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_178 + 3);
    do {
      sVar4 = *psVar1;
      cVar47 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar4 + -1;
        cVar47 = ExclusiveMonitorsStatus();
      }
    } while (cVar47 != '\0');
    if (sVar4 == 1) {
      piVar26 = (int *)((long)local_178 + 0x1c);
      do {
        iVar25 = *piVar26;
        cVar47 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar20) {
          *piVar26 = -1;
          cVar47 = ExclusiveMonitorsStatus();
        }
      } while (cVar47 != '\0');
      if (iVar25 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar25 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar25 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar27 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar27;
        local_108 = (undefined8 *)*puVar18;
        FUN_00c44438(lVar27 + 0x8040,&local_108);
      }
    }
    else if (sVar4 == 0) goto LAB_019646e8;
  }
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))(plVar32);
  }
  puVar18 = local_118;
  if (local_118 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_118 + 3);
    do {
      sVar4 = *psVar1;
      cVar47 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar4 + -1;
        cVar47 = ExclusiveMonitorsStatus();
      }
    } while (cVar47 != '\0');
    if (sVar4 == 1) {
      piVar26 = (int *)((long)local_118 + 0x1c);
      do {
        iVar25 = *piVar26;
        cVar47 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar20) {
          *piVar26 = -1;
          cVar47 = ExclusiveMonitorsStatus();
        }
      } while (cVar47 != '\0');
      if (iVar25 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar25 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar25 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar27 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar27;
        local_108 = (undefined8 *)*puVar18;
        FUN_00c44438(lVar27 + 0x8040,&local_108);
      }
    }
    else if (sVar4 == 0) goto LAB_019646e8;
  }
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 0x20))(plVar34);
  }
  if ((char)local_c0 != '\0') {
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    local_c0 = local_c0 & 0xffffffffffffff00;
  }
  puVar19 = local_98;
  if (local_98 != (ulong *)0x0) {
    puVar2 = local_98 + 3;
    do {
      sVar4 = (short)*puVar2;
      cVar47 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar20) {
        *(short *)puVar2 = sVar4 + -1;
        cVar47 = ExclusiveMonitorsStatus();
      }
    } while (cVar47 != '\0');
    if (sVar4 == 1) {
      piVar26 = (int *)((long)local_98 + 0x1c);
      do {
        iVar25 = *piVar26;
        cVar47 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar20) {
          *piVar26 = -1;
          cVar47 = ExclusiveMonitorsStatus();
        }
      } while (cVar47 != '\0');
      if (iVar25 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar25 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar25 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar27 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar27;
        local_c0 = *puVar19;
        FUN_00c44438(lVar27 + 0x8040,&local_c0);
      }
    }
    else if (sVar4 == 0) {
LAB_019646e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


