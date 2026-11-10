/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0211c394; name: FUN_0211c394
 */


void FUN_0211c394(undefined8 *param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  bool bVar13;
  byte bVar14;
  undefined8 *puVar15;
  char *pcVar16;
  long *plVar17;
  long *plVar18;
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
  uint *puVar30;
  ulong uVar31;
  char *pcVar32;
  int iVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  byte bVar36;
  long *plVar37;
  long *plVar38;
  undefined1 uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  float fVar54;
  char cStack_248;
  char cStack_247;
  char cStack_246;
  char cStack_245;
  char cStack_244;
  char cStack_243;
  char cStack_242;
  char cStack_241;
  ulong local_240;
  ulong local_230;
  ulong uStack_1f0;
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
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  puVar28 = (ushort *)((long)piVar26 - (long)*piVar26);
  if (*puVar28 < 0xb) {
    iVar25 = 0;
    iVar33 = 0;
    if (8 < *puVar28) goto LAB_0211c3f0;
  }
  else {
    if ((ulong)puVar28[5] == 0) {
      iVar25 = 0;
    }
    else {
      iVar25 = *(int *)((long)piVar26 + (ulong)puVar28[5]);
    }
LAB_0211c3f0:
    if ((ulong)puVar28[4] == 0) {
      iVar33 = 0;
    }
    else {
      iVar33 = *(int *)((long)piVar26 + (ulong)puVar28[4]);
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
    puVar15 = local_108;
    if (local_108 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_108 + 3);
      do {
        sVar4 = *psVar1;
        cVar7 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 1) {
        piVar26 = (int *)((long)local_108 + 0x1c);
        do {
          iVar24 = *piVar26;
          cVar7 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar20) {
            *piVar26 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar24 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar24 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar24 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar27 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar27;
          local_118 = (undefined8 *)*puVar15;
          FUN_00c44438(lVar27 + 0x8040,&local_118);
        }
      }
      else if (sVar4 == 0) goto LAB_0211cf50;
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar24 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar24 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  pcVar32 = *(char **)PTR_DAT_047d3e30;
  uVar35 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  plVar38 = *(long **)(PTR_DAT_047d3e30 + 0x10);
  plVar37 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar37 != (long *)0x0) {
    (**(code **)(*plVar37 + 0x18))(plVar37);
  }
  FUN_01340a44(&local_108,param_1,0x100000001);
  plVar18 = local_e8;
  plVar17 = local_f0;
  uVar34 = local_f8;
  pcVar16 = local_100;
  if ((char)local_108 != '\0') {
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x18))(local_e8);
    }
    if (plVar37 != (long *)0x0) {
      (**(code **)(*plVar37 + 0x20))(plVar37);
    }
    pcVar32 = pcVar16;
    uVar35 = uVar34;
    plVar37 = plVar18;
    plVar38 = plVar17;
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
    bVar14 = 0;
    bVar20 = false;
    uVar53 = 0;
    uVar44 = 0;
    uStack_1f0 = 0;
  }
  else {
    uVar45 = 0;
    uVar39 = 0;
    uVar46 = 0;
    uVar47 = 0;
    if (((ulong)puVar28[0xb] != 0) &&
       (puVar30 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]),
       puVar30 = (uint *)((long)puVar30 + (ulong)*puVar30), 2 < *puVar30)) {
      puVar30 = puVar30 + 3;
      piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar30 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
      uVar40 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar31 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar31 != 0)) {
        uVar40 = *(undefined4 *)((long)piVar3 + uVar31);
      }
      uVar45 = (undefined1)uVar40;
      uVar39 = (undefined1)((uint)uVar40 >> 8);
      uVar46 = (undefined1)((uint)uVar40 >> 0x10);
      uVar47 = (undefined1)((uint)uVar40 >> 0x18);
    }
    uVar51 = 0;
    uVar50 = 0;
    uVar49 = 0;
    uVar48 = 0;
    if (((ulong)puVar28[0xb] != 0) &&
       (puVar30 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]),
       puVar30 = (uint *)((long)puVar30 + (ulong)*puVar30), 3 < *puVar30)) {
      puVar30 = puVar30 + 4;
      piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar30 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
      uVar40 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar31 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar31 != 0)) {
        uVar40 = *(undefined4 *)((long)piVar3 + uVar31);
      }
      uVar48 = (undefined1)uVar40;
      uVar49 = (undefined1)((uint)uVar40 >> 8);
      uVar50 = (undefined1)((uint)uVar40 >> 0x10);
      uVar51 = (undefined1)((uint)uVar40 >> 0x18);
    }
    uVar53 = 0;
    if (((ulong)puVar28[0xb] != 0) &&
       (puVar30 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]),
       puVar30 = (uint *)((long)puVar30 + (ulong)*puVar30), 4 < *puVar30)) {
      puVar30 = puVar30 + 5;
      piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar30 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
      fVar41 = 0.0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar31 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar31 != 0)) {
        fVar41 = *(float *)((long)piVar3 + uVar31);
      }
      uVar53 = SUB41((fVar41 * 3.1415927) / 180.0,0);
    }
    uVar44 = 0;
    if (((ulong)puVar28[0xb] != 0) &&
       (puVar30 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]),
       puVar30 = (uint *)((long)puVar30 + (ulong)*puVar30), 5 < *puVar30)) {
      puVar30 = puVar30 + 6;
      piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar30 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
      uVar44 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar31 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar31 != 0)) {
        uVar44 = (undefined1)*(undefined4 *)((long)piVar3 + uVar31);
      }
    }
    uStack_1f0 = CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(uVar47,
                                                  CONCAT12(uVar46,CONCAT11(uVar39,uVar45)))))));
    if (((ulong)puVar28[0xb] == 0) ||
       (puVar30 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]),
       puVar30 = (uint *)((long)puVar30 + (ulong)*puVar30), *puVar30 < 8)) {
      bVar14 = 0;
      bVar20 = false;
    }
    else {
      puVar30 = puVar30 + 8;
      piVar26 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar30 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar30 + (ulong)*puVar30);
      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
         (uVar31 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar31 == 0)) {
        bVar20 = false;
      }
      else {
        bVar20 = *(char *)((long)piVar26 + uVar31) != '\0';
      }
      bVar14 = 1;
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
    puVar15 = local_128;
    if (local_128 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_128 + 3);
      do {
        sVar4 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 1) {
        piVar26 = (int *)((long)local_128 + 0x1c);
        do {
          iVar24 = *piVar26;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar8) {
            *piVar26 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar24 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar24 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar24 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar27 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar27;
          local_78 = *puVar15;
          FUN_00c44438(lVar27 + 0x8040,&local_78);
        }
      }
      else if (sVar4 == 0) goto LAB_0211cf50;
    }
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    if (((char)local_108 != '\0') && (local_e8 != (long *)0x0)) {
      (**(code **)(*local_e8 + 0x20))();
    }
  }
  piVar26 = (int *)*param_1;
  puVar28 = (ushort *)((long)piVar26 - (long)*piVar26);
  if (*puVar28 < 0x17) {
    uVar45 = 0;
    local_230 = 0;
LAB_0211cff0:
    bVar11 = 0;
    bVar36 = 0;
    bVar22 = false;
    bVar21 = false;
    uVar52 = 0;
    uVar51 = 0;
    uVar50 = 0;
    uVar49 = 0;
    uVar48 = 0;
    uVar47 = 0;
    uVar46 = 0;
    uVar39 = 0;
    uVar40 = 0;
    bVar9 = true;
    bVar13 = false;
    bVar8 = true;
    bVar10 = true;
    local_240 = local_230;
  }
  else {
    uVar45 = 0;
    if (((ulong)puVar28[0xb] != 0) &&
       (puVar30 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]),
       puVar30 = (uint *)((long)puVar30 + (ulong)*puVar30), 9 < *puVar30)) {
      puVar30 = puVar30 + 10;
      piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar30 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
      uVar45 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar31 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar31 != 0)) {
        uVar45 = (undefined1)*(undefined4 *)((long)piVar3 + uVar31);
      }
    }
    if (((ulong)puVar28[0xb] == 0) ||
       (puVar30 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]),
       puVar30 = (uint *)((long)puVar30 + (ulong)*puVar30), *puVar30 < 0xc)) {
      local_230 = 0;
    }
    else {
      puVar30 = puVar30 + 0xc;
      piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar30 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
      uVar39 = 0;
      uVar46 = 0;
      uVar47 = 0;
      uVar48 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar31 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar31 != 0)) {
        uVar40 = *(undefined4 *)((long)piVar3 + uVar31);
        uVar39 = (undefined1)uVar40;
        uVar46 = (undefined1)((uint)uVar40 >> 8);
        uVar47 = (undefined1)((uint)uVar40 >> 0x10);
        uVar48 = (undefined1)((uint)uVar40 >> 0x18);
      }
      local_230 = (ulong)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar39)));
    }
    if ((ulong)puVar28[0xb] == 0) goto LAB_0211cff0;
    puVar30 = (uint *)((long)piVar26 + (ulong)puVar28[0xb]);
    if (*(uint *)((long)puVar30 + (ulong)*puVar30) < 0xd) {
      bVar13 = false;
      uVar6 = 0;
    }
    else {
      puVar29 = (uint *)((long)puVar30 + (ulong)*puVar30) + 0xd;
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      puVar29 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
         (uVar31 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar31 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)((long)piVar26 + uVar31);
      }
      bVar13 = true;
    }
    uVar39 = 0;
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0;
    if (*(uint *)((long)puVar30 + (ulong)*puVar30) < 0xe) {
      bVar8 = true;
LAB_0211ce74:
      uVar49 = 0;
      uVar50 = 0;
      uVar51 = 0;
      uVar52 = 0;
    }
    else {
      puVar29 = (uint *)((long)puVar30 + (ulong)*puVar30) + 0xe;
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      puVar29 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
         (uVar31 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar31 == 0)) {
        bVar8 = false;
        goto LAB_0211ce74;
      }
      uVar40 = *(undefined4 *)((long)piVar26 + uVar31);
      uVar49 = (undefined1)uVar40;
      uVar50 = (undefined1)((uint)uVar40 >> 8);
      uVar51 = (undefined1)((uint)uVar40 >> 0x10);
      uVar52 = (undefined1)((uint)uVar40 >> 0x18);
      bVar8 = false;
    }
    if (*(uint *)((long)puVar30 + (ulong)*puVar30) < 0xf) {
      bVar9 = true;
    }
    else {
      puVar29 = (uint *)((long)puVar30 + (ulong)*puVar30) + 0xf;
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      puVar29 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      if ((4 < *(ushort *)((long)piVar26 - (long)*piVar26)) &&
         (uVar31 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar31 != 0)) {
        uVar40 = *(undefined4 *)((long)piVar26 + uVar31);
        uVar39 = (undefined1)uVar40;
        uVar46 = (undefined1)((uint)uVar40 >> 8);
        uVar47 = (undefined1)((uint)uVar40 >> 0x10);
        uVar48 = (undefined1)((uint)uVar40 >> 0x18);
      }
      bVar9 = false;
    }
    if (*(uint *)((long)puVar30 + (ulong)*puVar30) < 0x10) {
      uVar40 = 0;
      bVar10 = true;
    }
    else {
      puVar29 = (uint *)((long)puVar30 + (ulong)*puVar30) + 0x10;
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      puVar29 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
         (uVar31 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar31 == 0)) {
        bVar10 = false;
        uVar40 = 0;
      }
      else {
        uVar40 = *(undefined4 *)((long)piVar26 + uVar31);
        bVar10 = false;
      }
    }
    if (*(uint *)((long)puVar30 + (ulong)*puVar30) < 0x11) {
      bVar11 = 0;
      bVar21 = false;
    }
    else {
      puVar29 = (uint *)((long)puVar30 + (ulong)*puVar30) + 0x11;
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      puVar29 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar29 + (ulong)*puVar29);
      if (*(ushort *)((long)piVar26 - (long)*piVar26) < 5) {
        bVar21 = false;
      }
      else {
        uVar31 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2];
        bVar21 = false;
        if (uVar31 != 0) {
          bVar21 = *(char *)((long)piVar26 + uVar31) != '\0';
        }
      }
      bVar11 = 1;
    }
    local_240 = CONCAT44(uVar6,(int)local_230);
    if (*(uint *)((long)puVar30 + (ulong)*puVar30) < 0x12) {
      bVar36 = 0;
      bVar22 = false;
    }
    else {
      puVar30 = (uint *)((long)puVar30 + (ulong)*puVar30) + 0x12;
      piVar26 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar30 = (uint *)((long)piVar26 + (ulong)*(ushort *)((long)piVar26 + (8 - (long)*piVar26)));
      piVar26 = (int *)((long)puVar30 + (ulong)*puVar30);
      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
         (uVar31 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar31 == 0)) {
        bVar22 = false;
      }
      else {
        bVar22 = *(char *)((long)piVar26 + uVar31) != '\0';
      }
      bVar36 = 1;
    }
  }
  fVar41 = 0.0;
  if (!bVar8) {
    fVar41 = (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)));
  }
  fVar54 = 0.0;
  if (!bVar9) {
    fVar54 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar39)));
  }
  local_108 = (undefined8 *)0x309fc46d91599d0c;
  local_100 = "IsAdjustScale";
  uVar6 = 0;
  if (!bVar10) {
    uVar6 = uVar40;
  }
  local_f8 = 0xd;
  local_f0 = (long *)0x0;
  uVar23 = FUN_0141f968(param_1,&local_108);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  if (((uVar23 & 0xff) != 0) && (0xff < uVar23)) {
    fVar42 = (float)FUN_01548c60(param_1,&local_98);
    fVar41 = fVar41 * fVar42;
    fVar54 = fVar54 * fVar42;
  }
  auVar43._0_8_ = CONCAT17(0xff,CONCAT16(0xff,CONCAT15(0xff,CONCAT14(0xff,(uint)(byte)-!bVar13))));
  auVar43[8] = -(cStack_248 == '\0');
  auVar43[9] = -(cStack_247 == '\0');
  auVar43[10] = -(cStack_246 == '\0');
  auVar43[0xb] = -(cStack_245 == '\0');
  auVar43[0xc] = -(cStack_244 == '\0');
  auVar43[0xd] = -(cStack_243 == '\0');
  auVar43[0xe] = -(cStack_242 == '\0');
  auVar43[0xf] = -(cStack_241 == '\0');
  if ((*PTR_DAT_047d3be0 & 1) == 0) {
    uVar34 = auVar43._8_8_;
    iVar24 = __cxa_guard_acquire(PTR_DAT_047d3be0);
    auVar43._8_8_ = uVar34;
    if (iVar24 != 0) {
      FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3be0);
    }
  }
  uVar34 = *(undefined8 *)PTR_DAT_047d3be8;
  uVar39 = auVar43[0];
  local_168 = local_b8;
  uStack_160 = uStack_b0;
  *(undefined8 *)PTR_DAT_047dcd80 = uVar34;
  local_158 = local_a8;
  local_150 = local_a0;
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))();
  }
  local_178 = (undefined8 *)0x0;
  uStack_170 = 0;
  FUN_00d0a71c(&local_178,&local_98);
  local_198 = pcVar32;
  uStack_190 = uVar35;
  local_188 = plVar38;
  local_180 = plVar37;
  if (plVar37 != (long *)0x0) {
    (**(code **)(*plVar37 + 0x18))(plVar37);
  }
  local_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  FUN_00d0a71c(&local_1a8,&local_118);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uStack_1f0;
  FUN_0210e2fc(auVar12,uVar44,uVar53,uVar45,
               local_230 ^
               (local_230 ^ local_240) &
               ~CONCAT17(uVar39,CONCAT16(uVar39,CONCAT15(uVar39,CONCAT14(uVar39,CONCAT13(uVar39,
                                                  CONCAT12(uVar39,CONCAT11(uVar39,uVar39))))))),
               fVar41,fVar54,uVar34,uVar5,param_1,&local_168,&local_178,&local_198,bVar14 & bVar20,
               &local_1a8,uVar6,iVar25 - iVar33,bVar21 & bVar11,bVar36 & bVar22);
  puVar15 = local_1a8;
  if (local_1a8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_1a8 + 3);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar26 = (int *)((long)local_1a8 + 0x1c);
      do {
        iVar25 = *piVar26;
        cVar7 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar20) {
          *piVar26 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar25 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar25 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar25 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar27 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar27;
        local_108 = (undefined8 *)*puVar15;
        FUN_00c44438(lVar27 + 0x8040,&local_108);
      }
    }
    else if (sVar4 == 0) goto LAB_0211cf50;
  }
  if (local_180 != (long *)0x0) {
    (**(code **)(*local_180 + 0x20))();
  }
  puVar15 = local_178;
  if (local_178 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_178 + 3);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar26 = (int *)((long)local_178 + 0x1c);
      do {
        iVar25 = *piVar26;
        cVar7 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar20) {
          *piVar26 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar25 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar25 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar25 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar27 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar27;
        local_108 = (undefined8 *)*puVar15;
        FUN_00c44438(lVar27 + 0x8040,&local_108);
      }
    }
    else if (sVar4 == 0) goto LAB_0211cf50;
  }
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  puVar15 = local_118;
  if (local_118 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_118 + 3);
    do {
      sVar4 = *psVar1;
      cVar7 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar26 = (int *)((long)local_118 + 0x1c);
      do {
        iVar25 = *piVar26;
        cVar7 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar20) {
          *piVar26 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar25 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar25 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar25 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar27 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar27;
        local_108 = (undefined8 *)*puVar15;
        FUN_00c44438(lVar27 + 0x8040,&local_108);
      }
    }
    else if (sVar4 == 0) goto LAB_0211cf50;
  }
  if (plVar37 != (long *)0x0) {
    (**(code **)(*plVar37 + 0x20))(plVar37);
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
      cVar7 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar20) {
        *(short *)puVar2 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar26 = (int *)((long)local_98 + 0x1c);
      do {
        iVar25 = *piVar26;
        cVar7 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar26,0x10);
        if (bVar20) {
          *piVar26 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
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
LAB_0211cf50:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


