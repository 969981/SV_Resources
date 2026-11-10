/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197da80; name: FUN_0197da80
 */


void FUN_0197da80(undefined8 *param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  short sVar4;
  char *pcVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  bool bVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  ushort uVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  long lVar25;
  ushort *puVar26;
  uint *puVar27;
  undefined4 uVar28;
  ulong uVar29;
  uint *puVar30;
  byte bVar31;
  long *plVar32;
  char *pcVar33;
  int iVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  byte bVar37;
  long *plVar38;
  undefined1 uVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 uVar42;
  undefined1 uVar43;
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
  undefined1 uVar54;
  byte bVar55;
  float fVar56;
  float fVar57;
  char cStack_208;
  char cStack_207;
  char cStack_206;
  char cStack_205;
  char cStack_204;
  char cStack_203;
  char cStack_202;
  char cStack_201;
  ulong local_200;
  ulong local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined1 uStack_1c0;
  ulong uStack_190;
  char *local_158;
  undefined8 uStack_150;
  long *local_148;
  long *local_140;
  undefined8 *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long *local_110;
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
  
  piVar24 = (int *)*param_1;
  uVar7 = *(undefined4 *)(param_1 + 0x38);
  puVar26 = (ushort *)((long)piVar24 - (long)*piVar24);
  if (*puVar26 < 0xb) {
    iVar23 = 0;
    iVar34 = 0;
    if (8 < *puVar26) goto LAB_0197dadc;
  }
  else {
    if ((ulong)puVar26[5] == 0) {
      iVar23 = 0;
    }
    else {
      iVar23 = *(int *)((long)piVar24 + (ulong)puVar26[5]);
    }
LAB_0197dadc:
    if ((ulong)puVar26[4] == 0) {
      iVar34 = 0;
    }
    else {
      iVar34 = *(int *)((long)piVar24 + (ulong)puVar26[4]);
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
    puVar16 = local_108;
    if (local_108 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_108 + 3);
      do {
        sVar4 = *psVar1;
        cVar9 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar4 == 1) {
        piVar24 = (int *)((long)local_108 + 0x1c);
        do {
          iVar22 = *piVar24;
          cVar9 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar24,0x10);
          if (bVar18) {
            *piVar24 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar22 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar22 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar22 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar25 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar25;
          local_78 = *puVar16;
          FUN_00c44438(lVar25 + 0x8040,&local_78);
        }
      }
      else if (sVar4 == 0) goto LAB_0197e548;
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar22 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar22 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  pcVar5 = *(char **)PTR_DAT_047d3e30;
  uVar36 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  plVar38 = *(long **)(PTR_DAT_047d3e30 + 0x10);
  plVar6 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_01340a44(&local_108,param_1,0x100000001);
  plVar32 = local_e8;
  pcVar33 = local_100;
  if ((char)local_108 == '\0') {
    plVar32 = plVar6;
    pcVar33 = pcVar5;
  }
  else {
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x18))(local_e8);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    uVar36 = local_f8;
    plVar38 = local_f0;
    if (((char)local_108 != '\0') && (local_e8 != (long *)0x0)) {
      (**(code **)(*local_e8 + 0x20))();
    }
  }
  piVar24 = (int *)*param_1;
  uVar43 = 0;
  puVar26 = (ushort *)((long)piVar24 - (long)*piVar24);
  if (*puVar26 < 0x17) {
    bVar31 = 0;
    bVar18 = false;
    local_1d0 = 0;
    uStack_1c0 = 0;
    uVar46 = 0;
    uStack_190 = 0;
    local_1f0 = 0;
    local_1e0 = 0;
LAB_0197e5e4:
    bVar13 = 0;
    bVar37 = 0;
    bVar20 = false;
    bVar19 = false;
    uVar52 = 0;
    uVar48 = 0;
    uVar45 = 0;
    uVar42 = 0;
    uVar51 = 0;
    uVar47 = 0;
    uVar44 = 0;
    uVar39 = 0;
    uVar28 = 0;
    bVar11 = true;
    bVar15 = false;
    bVar10 = true;
    bVar12 = true;
    local_200 = local_1f0;
  }
  else {
    uVar39 = 0;
    uVar44 = 0;
    uVar47 = 0;
    uVar51 = 0;
    if (((ulong)puVar26[0xb] != 0) &&
       (puVar27 = (uint *)((long)piVar24 + (ulong)puVar26[0xb]),
       puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27), 2 < *puVar27)) {
      puVar27 = puVar27 + 3;
      piVar3 = (int *)((long)puVar27 + (ulong)*puVar27);
      puVar27 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar27 + (ulong)*puVar27);
      uVar39 = 0;
      uVar44 = 0;
      uVar47 = 0;
      uVar51 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar29 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar29 != 0)) {
        uVar28 = *(undefined4 *)((long)piVar3 + uVar29);
        uVar39 = (undefined1)uVar28;
        uVar44 = (undefined1)((uint)uVar28 >> 8);
        uVar47 = (undefined1)((uint)uVar28 >> 0x10);
        uVar51 = (undefined1)((uint)uVar28 >> 0x18);
      }
    }
    uVar52 = 0;
    uVar48 = 0;
    uVar45 = 0;
    uVar42 = 0;
    if (((ulong)puVar26[0xb] != 0) &&
       (puVar27 = (uint *)((long)piVar24 + (ulong)puVar26[0xb]),
       puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27), 3 < *puVar27)) {
      puVar27 = puVar27 + 4;
      piVar3 = (int *)((long)puVar27 + (ulong)*puVar27);
      puVar27 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar27 + (ulong)*puVar27);
      uVar42 = 0;
      uVar45 = 0;
      uVar48 = 0;
      uVar52 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar29 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar29 != 0)) {
        uVar28 = *(undefined4 *)((long)piVar3 + uVar29);
        uVar42 = (undefined1)uVar28;
        uVar45 = (undefined1)((uint)uVar28 >> 8);
        uVar48 = (undefined1)((uint)uVar28 >> 0x10);
        uVar52 = (undefined1)((uint)uVar28 >> 0x18);
      }
    }
    uVar43 = 0;
    if (((ulong)puVar26[0xb] != 0) &&
       (puVar27 = (uint *)((long)piVar24 + (ulong)puVar26[0xb]),
       puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27), 4 < *puVar27)) {
      puVar27 = puVar27 + 5;
      piVar3 = (int *)((long)puVar27 + (ulong)*puVar27);
      puVar27 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar27 + (ulong)*puVar27);
      uVar43 = 0;
      uVar46 = 0;
      uVar49 = 0;
      uVar53 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar29 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar29 != 0)) {
        uVar28 = *(undefined4 *)((long)piVar3 + uVar29);
        uVar43 = (undefined1)uVar28;
        uVar46 = (undefined1)((uint)uVar28 >> 8);
        uVar49 = (undefined1)((uint)uVar28 >> 0x10);
        uVar53 = (undefined1)((uint)uVar28 >> 0x18);
      }
      uVar43 = SUB41(((float)CONCAT13(uVar53,CONCAT12(uVar49,CONCAT11(uVar46,uVar43))) * 3.1415927)
                     / 180.0,0);
    }
    uVar46 = 0;
    if (((ulong)puVar26[0xb] != 0) &&
       (puVar27 = (uint *)((long)piVar24 + (ulong)puVar26[0xb]),
       puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27), 5 < *puVar27)) {
      puVar27 = puVar27 + 6;
      piVar3 = (int *)((long)puVar27 + (ulong)*puVar27);
      puVar27 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar27 + (ulong)*puVar27);
      uVar46 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar29 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar29 != 0)) {
        uVar46 = (undefined1)*(undefined4 *)((long)piVar3 + uVar29);
      }
    }
    if ((ulong)puVar26[0xb] == 0) {
      uStack_1c0 = 0;
      bVar31 = 0;
      local_1d0 = 0;
    }
    else {
      puVar27 = (uint *)((long)piVar24 + (ulong)puVar26[0xb]);
      if (*(uint *)((long)puVar27 + (ulong)*puVar27) < 8) {
        bVar31 = 0;
        bVar18 = false;
      }
      else {
        puVar30 = (uint *)((long)puVar27 + (ulong)*puVar27) + 8;
        piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
        puVar30 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
        piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar29 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar29 == 0)) {
          bVar18 = false;
        }
        else {
          bVar18 = *(char *)((long)piVar3 + uVar29) != '\0';
        }
        bVar31 = 1;
      }
      bVar31 = bVar31 & bVar18;
      local_1d0 = 0;
      uStack_1c0 = 0;
      if (8 < *(uint *)((long)puVar27 + (ulong)*puVar27)) {
        puVar30 = (uint *)((long)puVar27 + (ulong)*puVar27) + 9;
        piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
        puVar30 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
        piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
        uStack_1c0 = (undefined1)
                     *(undefined8 *)
                      ((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (4 - (long)*piVar3)));
      }
      if (9 < *(uint *)((long)puVar27 + (ulong)*puVar27)) {
        puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27) + 10;
        piVar3 = (int *)((long)puVar27 + (ulong)*puVar27);
        puVar27 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
        piVar3 = (int *)((long)puVar27 + (ulong)*puVar27);
        uVar49 = 0;
        uVar53 = 0;
        uVar50 = 0;
        uVar54 = 0;
        if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
           (uVar29 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar29 != 0)) {
          uVar28 = *(undefined4 *)((long)piVar3 + uVar29);
          uVar49 = (undefined1)uVar28;
          uVar53 = (undefined1)((uint)uVar28 >> 8);
          uVar50 = (undefined1)((uint)uVar28 >> 0x10);
          uVar54 = (undefined1)((uint)uVar28 >> 0x18);
        }
        local_1d0 = (ulong)CONCAT13(uVar54,CONCAT12(uVar50,CONCAT11(uVar53,uVar49)));
      }
    }
    if ((ulong)puVar26[0xb] == 0) {
      bVar18 = false;
      local_1e0 = local_1d0;
LAB_0197e928:
      local_1f0 = 0;
    }
    else {
      puVar27 = (uint *)((long)piVar24 + (ulong)puVar26[0xb]);
      if (*(uint *)((long)puVar27 + (ulong)*puVar27) < 0xb) {
        bVar18 = false;
        uVar28 = 0;
      }
      else {
        puVar30 = (uint *)((long)puVar27 + (ulong)*puVar27) + 0xb;
        piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
        puVar30 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
        piVar3 = (int *)((long)puVar30 + (ulong)*puVar30);
        if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
          uVar28 = 0;
        }
        else {
          uVar29 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
          uVar28 = 0;
          if (uVar29 != 0) {
            uVar28 = *(undefined4 *)((long)piVar3 + uVar29);
          }
        }
        bVar18 = true;
      }
      local_1e0 = CONCAT44(uVar28,(int)local_1d0);
      if (*(uint *)((long)puVar27 + (ulong)*puVar27) < 0xc) goto LAB_0197e928;
      puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27) + 0xc;
      piVar3 = (int *)((long)puVar27 + (ulong)*puVar27);
      puVar27 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (8 - (long)*piVar3)));
      piVar3 = (int *)((long)puVar27 + (ulong)*puVar27);
      uVar49 = 0;
      uVar53 = 0;
      uVar50 = 0;
      uVar54 = 0;
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar29 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar29 != 0)) {
        uVar28 = *(undefined4 *)((long)piVar3 + uVar29);
        uVar49 = (undefined1)uVar28;
        uVar53 = (undefined1)((uint)uVar28 >> 8);
        uVar50 = (undefined1)((uint)uVar28 >> 0x10);
        uVar54 = (undefined1)((uint)uVar28 >> 0x18);
      }
      local_1f0 = (ulong)CONCAT13(uVar54,CONCAT12(uVar50,CONCAT11(uVar53,uVar49)));
    }
    uStack_190 = CONCAT17(uVar52,CONCAT16(uVar48,CONCAT15(uVar45,CONCAT14(uVar42,CONCAT13(uVar51,
                                                  CONCAT12(uVar47,CONCAT11(uVar44,uVar39)))))));
    if ((ulong)puVar26[0xb] == 0) goto LAB_0197e5e4;
    puVar27 = (uint *)((long)piVar24 + (ulong)puVar26[0xb]);
    if (*(uint *)((long)puVar27 + (ulong)*puVar27) < 0xd) {
      bVar15 = false;
      uVar8 = 0;
    }
    else {
      puVar30 = (uint *)((long)puVar27 + (ulong)*puVar27) + 0xd;
      piVar24 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar30 = (uint *)((long)piVar24 + (ulong)*(ushort *)((long)piVar24 + (8 - (long)*piVar24)));
      piVar24 = (int *)((long)puVar30 + (ulong)*puVar30);
      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
         (uVar29 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar29 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)((long)piVar24 + uVar29);
      }
      bVar15 = true;
    }
    uVar39 = 0;
    uVar44 = 0;
    uVar47 = 0;
    uVar51 = 0;
    if (*(uint *)((long)puVar27 + (ulong)*puVar27) < 0xe) {
      bVar10 = true;
LAB_0197e4d8:
      uVar42 = 0;
      uVar45 = 0;
      uVar48 = 0;
      uVar52 = 0;
    }
    else {
      puVar30 = (uint *)((long)puVar27 + (ulong)*puVar27) + 0xe;
      piVar24 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar30 = (uint *)((long)piVar24 + (ulong)*(ushort *)((long)piVar24 + (8 - (long)*piVar24)));
      piVar24 = (int *)((long)puVar30 + (ulong)*puVar30);
      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
         (uVar29 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar29 == 0)) {
        bVar10 = false;
        goto LAB_0197e4d8;
      }
      uVar28 = *(undefined4 *)((long)piVar24 + uVar29);
      uVar42 = (undefined1)uVar28;
      uVar45 = (undefined1)((uint)uVar28 >> 8);
      uVar48 = (undefined1)((uint)uVar28 >> 0x10);
      uVar52 = (undefined1)((uint)uVar28 >> 0x18);
      bVar10 = false;
    }
    if (*(uint *)((long)puVar27 + (ulong)*puVar27) < 0xf) {
      bVar11 = true;
    }
    else {
      puVar30 = (uint *)((long)puVar27 + (ulong)*puVar27) + 0xf;
      piVar24 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar30 = (uint *)((long)piVar24 + (ulong)*(ushort *)((long)piVar24 + (8 - (long)*piVar24)));
      piVar24 = (int *)((long)puVar30 + (ulong)*puVar30);
      if ((4 < *(ushort *)((long)piVar24 - (long)*piVar24)) &&
         (uVar29 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar29 != 0)) {
        uVar28 = *(undefined4 *)((long)piVar24 + uVar29);
        uVar39 = (undefined1)uVar28;
        uVar44 = (undefined1)((uint)uVar28 >> 8);
        uVar47 = (undefined1)((uint)uVar28 >> 0x10);
        uVar51 = (undefined1)((uint)uVar28 >> 0x18);
      }
      bVar11 = false;
    }
    if (*(uint *)((long)puVar27 + (ulong)*puVar27) < 0x10) {
      uVar28 = 0;
      bVar12 = true;
    }
    else {
      puVar30 = (uint *)((long)puVar27 + (ulong)*puVar27) + 0x10;
      piVar24 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar30 = (uint *)((long)piVar24 + (ulong)*(ushort *)((long)piVar24 + (8 - (long)*piVar24)));
      piVar24 = (int *)((long)puVar30 + (ulong)*puVar30);
      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
         (uVar29 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar29 == 0)) {
        bVar12 = false;
        uVar28 = 0;
      }
      else {
        uVar28 = *(undefined4 *)((long)piVar24 + uVar29);
        bVar12 = false;
      }
    }
    if (*(uint *)((long)puVar27 + (ulong)*puVar27) < 0x11) {
      bVar13 = 0;
      bVar19 = false;
    }
    else {
      puVar30 = (uint *)((long)puVar27 + (ulong)*puVar27) + 0x11;
      piVar24 = (int *)((long)puVar30 + (ulong)*puVar30);
      puVar30 = (uint *)((long)piVar24 + (ulong)*(ushort *)((long)piVar24 + (8 - (long)*piVar24)));
      piVar24 = (int *)((long)puVar30 + (ulong)*puVar30);
      if (*(ushort *)((long)piVar24 - (long)*piVar24) < 5) {
        bVar19 = false;
      }
      else {
        uVar29 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2];
        bVar19 = false;
        if (uVar29 != 0) {
          bVar19 = *(char *)((long)piVar24 + uVar29) != '\0';
        }
      }
      bVar13 = 1;
    }
    local_200 = CONCAT44(uVar8,(int)local_1f0);
    if (*(uint *)((long)puVar27 + (ulong)*puVar27) < 0x12) {
      bVar37 = 0;
      bVar20 = false;
    }
    else {
      puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27) + 0x12;
      piVar24 = (int *)((long)puVar27 + (ulong)*puVar27);
      puVar27 = (uint *)((long)piVar24 + (ulong)*(ushort *)((long)piVar24 + (8 - (long)*piVar24)));
      piVar24 = (int *)((long)puVar27 + (ulong)*puVar27);
      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
         (uVar29 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar29 == 0)) {
        bVar20 = false;
      }
      else {
        bVar20 = *(char *)((long)piVar24 + uVar29) != '\0';
      }
      bVar37 = 1;
    }
  }
  fVar56 = 0.0;
  if (!bVar10) {
    fVar56 = (float)CONCAT13(uVar52,CONCAT12(uVar48,CONCAT11(uVar45,uVar42)));
  }
  fVar57 = 0.0;
  if (!bVar11) {
    fVar57 = (float)CONCAT13(uVar51,CONCAT12(uVar47,CONCAT11(uVar44,uVar39)));
  }
  local_108 = (undefined8 *)0x309fc46d91599d0c;
  local_100 = "IsAdjustScale";
  uVar8 = 0;
  if (!bVar12) {
    uVar8 = uVar28;
  }
  local_f8 = 0xd;
  local_f0 = (long *)0x0;
  uVar21 = FUN_0141f968(param_1,&local_108);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  if (((uVar21 & 0xff) != 0) && (0xff < uVar21)) {
    fVar40 = (float)FUN_01548c60(param_1,&local_98);
    fVar56 = fVar56 * fVar40;
    fVar57 = fVar57 * fVar40;
  }
  bVar55 = -!bVar18;
  auVar41._0_8_ = CONCAT17(0xff,CONCAT16(0xff,CONCAT15(0xff,CONCAT14(0xff,(uint)(byte)-!bVar15))));
  auVar41[8] = -(cStack_208 == '\0');
  auVar41[9] = -(cStack_207 == '\0');
  auVar41[10] = -(cStack_206 == '\0');
  auVar41[0xb] = -(cStack_205 == '\0');
  auVar41[0xc] = -(cStack_204 == '\0');
  auVar41[0xd] = -(cStack_203 == '\0');
  auVar41[0xe] = -(cStack_202 == '\0');
  auVar41[0xf] = -(cStack_201 == '\0');
  if ((*PTR_DAT_047d3be0 & 1) == 0) {
    uVar35 = auVar41._8_8_;
    iVar22 = __cxa_guard_acquire(PTR_DAT_047d3be0);
    auVar41._8_8_ = uVar35;
    if (iVar22 != 0) {
      FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3be0);
    }
  }
  uVar39 = auVar41[0];
  uVar35 = *(undefined8 *)PTR_DAT_047d3be8;
  *(undefined8 *)PTR_DAT_047dcd80 = uVar35;
  local_128 = local_b8;
  uStack_120 = uStack_b0;
  local_118 = local_a8;
  local_110 = local_a0;
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))();
  }
  local_1d0._0_1_ = (byte)local_1d0 ^ ((byte)local_1d0 ^ (byte)local_1e0) & ~bVar55;
  local_1d0._1_1_ = local_1d0._1_1_ ^ (local_1d0._1_1_ ^ local_1e0._1_1_) & ~bVar55;
  local_1d0._2_1_ = local_1d0._2_1_ ^ (local_1d0._2_1_ ^ local_1e0._2_1_) & ~bVar55;
  local_1d0._3_1_ = local_1d0._3_1_ ^ (local_1d0._3_1_ ^ local_1e0._3_1_) & ~bVar55;
  local_138 = (undefined8 *)0x0;
  uStack_130 = 0;
  local_1d0 = CONCAT17(local_1e0._7_1_ & ~bVar55,
                       CONCAT16(local_1e0._6_1_ & ~bVar55,
                                CONCAT15(local_1e0._5_1_ & ~bVar55,
                                         CONCAT14(local_1e0._4_1_ & ~bVar55,
                                                  CONCAT13(local_1d0._3_1_,(undefined3)local_1d0))))
                      );
  FUN_00d0a71c(&local_138,&local_98);
  local_158 = pcVar33;
  uStack_150 = uVar36;
  local_148 = plVar38;
  local_140 = plVar32;
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x18))(plVar32);
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uStack_190;
  FUN_0197e9bc(auVar14,uVar46,uVar43,uStack_1c0,local_1d0,
               local_1f0 ^
               (local_1f0 ^ local_200) &
               ~CONCAT17(uVar39,CONCAT16(uVar39,CONCAT15(uVar39,CONCAT14(uVar39,CONCAT13(uVar39,
                                                  CONCAT12(uVar39,CONCAT11(uVar39,uVar39))))))),
               fVar56,fVar57,uVar35,uVar7,param_1,&local_128,&local_138,&local_158,bVar31,uVar8,
               iVar23 - iVar34,bVar19 & bVar13,bVar37 & bVar20);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  puVar16 = local_138;
  if (local_138 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_138 + 3);
    do {
      sVar4 = *psVar1;
      cVar9 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar4 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar4 == 1) {
      piVar24 = (int *)((long)local_138 + 0x1c);
      do {
        iVar23 = *piVar24;
        cVar9 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar18) {
          *piVar24 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar23 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar23 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar23 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar25 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar25;
        local_108 = (undefined8 *)*puVar16;
        FUN_00c44438(lVar25 + 0x8040,&local_108);
      }
    }
    else if (sVar4 == 0) goto LAB_0197e548;
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  if (plVar32 != (long *)0x0) {
    (**(code **)(*plVar32 + 0x20))(plVar32);
  }
  if ((char)local_c0 != '\0') {
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    local_c0 = local_c0 & 0xffffffffffffff00;
  }
  puVar17 = local_98;
  if (local_98 != (ulong *)0x0) {
    puVar2 = local_98 + 3;
    do {
      sVar4 = (short)*puVar2;
      cVar9 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar18) {
        *(short *)puVar2 = sVar4 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar4 == 1) {
      piVar24 = (int *)((long)local_98 + 0x1c);
      do {
        iVar23 = *piVar24;
        cVar9 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar18) {
          *piVar24 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar23 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar23 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar23 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar25 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar25;
        local_c0 = *puVar17;
        FUN_00c44438(lVar25 + 0x8040,&local_c0);
      }
    }
    else if (sVar4 == 0) {
LAB_0197e548:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


