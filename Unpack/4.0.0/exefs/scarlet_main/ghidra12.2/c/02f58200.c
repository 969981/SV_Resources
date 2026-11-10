/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f58200; name: FUN_02f58200
 */


void FUN_02f58200(long *param_1,long param_2,long *param_3,long param_4,long param_5,
                 undefined8 param_6,long param_7,long *param_8)

{
  bool bVar1;
  ushort *puVar2;
  undefined *puVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  long lVar27;
  long **pplVar28;
  long lVar29;
  int *piVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  byte *pbVar34;
  uint uVar35;
  uint uVar36;
  byte *pbVar37;
  uint *puVar38;
  uint uVar39;
  uint *puVar40;
  ulong uVar41;
  uint *puVar42;
  long *plVar43;
  long lVar44;
  ushort *puVar45;
  uint *puVar46;
  long *plVar47;
  long lVar48;
  int *piVar49;
  int *piVar50;
  uint uVar51;
  undefined8 *puVar52;
  long lVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  long local_11c8;
  undefined8 *local_11c0;
  uint *local_11b8;
  uint local_11b0;
  uint local_11ac;
  undefined1 auStack_11a0 [24];
  long *local_1188;
  uint *local_1180;
  uint local_1178;
  undefined8 *local_1170;
  long local_1168;
  long lStack_1160;
  long *local_1158;
  undefined8 *local_1150;
  uint *local_1148;
  uint local_1140;
  uint local_113c;
  long *local_1130;
  undefined8 *local_1128;
  uint *local_1120;
  uint local_1118;
  uint local_1114;
  long local_1108;
  undefined8 local_1100;
  uint *local_10f8;
  undefined8 local_10f0;
  undefined4 local_10e8 [2];
  uint *local_10e0;
  undefined8 local_10d8;
  long local_10d0;
  uint *local_10c8;
  uint *local_10c0;
  uint *local_10b8;
  undefined8 local_10b0;
  uint auStack_10a8 [256];
  uint *local_ca8;
  undefined8 local_ca0;
  uint local_c98 [256];
  uint *local_898;
  uint *local_890;
  int local_888;
  undefined8 local_884;
  uint *local_878;
  int local_870;
  uint local_86c;
  uint local_868 [256];
  uint *local_468 [64];
  uint *local_268;
  undefined8 local_260;
  
  lVar44 = tpidr_el0;
  lVar16 = *(long *)(lVar44 + 0x1000b8);
  if (lVar16 == 0) {
    lVar16 = FUN_00e5d3b4();
    *(long *)(lVar44 + 0x1000b8) = lVar16;
  }
  plVar43 = *(long **)(lVar16 + 0x3e0);
  if (plVar43 != (long *)0x0) {
    lVar16 = *plVar43;
    if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
      (**(code **)(lVar16 + 0x18))("Deactivation",0xc,*(undefined8 *)(lVar16 + 0x28));
      if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
        (**(code **)(lVar16 + 0x18))("IslandMaintenence",0x11,*(undefined8 *)(lVar16 + 0x28));
      }
    }
    puVar52 = (undefined8 *)plVar43[2];
    uVar17 = (long)puVar52 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)plVar43[3]) && (plVar43[2] = uVar17, puVar52 != (undefined8 *)0x0)) {
      *puVar52 = "LtDeactivation";
      puVar52[2] = "StIslandMaintenence";
      uVar10 = nn::os::GetSystemTick();
      puVar52[1] = uVar10;
    }
    if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar43[6] != 0)) {
      puVar52 = (undefined8 *)plVar43[2];
      uVar17 = (long)puVar52 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= (ulong)plVar43[3]) && (plVar43[2] = uVar17, puVar52 != (undefined8 *)0x0)) {
        *puVar52 = &DAT_03c4e575;
        puVar52[1] = *(undefined8 *)(plVar43[6] + 8);
      }
    }
  }
  lVar16 = *param_1;
  iVar54 = *(int *)(lVar16 + 0x5bc);
  local_10f8 = (uint *)0x0;
  local_10f0 = 0x8000000000000000;
  local_1108 = 0;
  local_1100 = -0x8000000000000000;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  if (*(int *)(param_4 + 8) != 0) {
    puVar46 = (uint *)**(undefined8 **)(param_4 + 0x10);
    local_10b8 = (uint *)0x0;
    local_10b0 = -0x8000000000000000;
    if ((*puVar46 & 0xffff) == 0) {
      local_10b0 = -0x8000000000000000;
    }
    else {
      puVar38 = puVar46 + 8;
      uVar51 = *puVar46 & 0xffff;
      uVar9 = 0x7fffffff;
      do {
        puVar3 = PTR_DAT_047d1a08;
        puVar23 = puVar38 + 1;
        uVar21 = *puVar23;
        uVar17 = (ulong)uVar21 & 0xffffff;
        if ((int)uVar17 != 0xffffff) {
          uVar14 = *puVar38;
          uVar18 = (ulong)uVar14 & 0xffffff;
          if ((int)uVar18 != 0xffffff) {
            lVar27 = *(long *)(lVar16 + 0x38);
            uVar35 = *(uint *)(lVar27 + uVar17 * 0xc0 + 0x54);
            uVar31 = *(uint *)(lVar27 + uVar18 * 0xc0 + 0x54);
            if ((((uVar35 & 1) == 0) || ((uVar31 & 9) != 0)) &&
               ((uVar35 & 9) != 0 || (uVar31 & 1) == 0)) {
              if (((uVar35 & uVar31) >> 1 & 1) != 0) {
                lVar48 = lVar27 + uVar17 * 0xc0;
                piVar49 = (int *)(lVar48 + 0x80);
                puVar40 = (uint *)(param_1[0x71] + (long)*piVar49 * 0x20 + 0x10);
                uVar39 = *puVar40;
                piVar50 = (int *)(lVar27 + uVar18 * 0xc0 + 0x80);
                uVar36 = *(uint *)(param_1[0x71] + (long)*piVar50 * 0x20 + 0x10);
                if ((((*(byte *)(lVar48 + 0x88) & 1) == 0) ||
                    ((*(byte *)(lVar27 + uVar18 * 0xc0 + 0x88) & 1) == 0)) ||
                   (*(char *)(*(long *)(param_2 + 0x20) +
                              (ulong)*(ushort *)(lVar27 + uVar17 * 0xc0 + 0x8a) * 0x50 + 0x18) !=
                    '\0')) {
                  bVar8 = false;
                }
                else {
                  bVar8 = *(char *)(*(long *)(param_2 + 0x20) +
                                    (ulong)*(ushort *)(lVar27 + uVar18 * 0xc0 + 0x8a) * 0x50 + 0x18)
                          == '\0';
                }
                lVar48 = (long)(int)uVar39;
                lVar53 = (long)(int)uVar36;
                if ((uVar35 >> 3 & 1) == 0) {
                  if ((uVar31 >> 3 & 1) != 0) goto joined_r0x02f58608;
                  if ((uVar36 & uVar39) == 0xffffffff) {
                    if ((int)param_1[0x69] == 0) {
                      local_878 = (uint *)&DAT_00000070;
                      puVar52 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_878,0);
                      if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
                        (**(code **)(puVar3 + 0x10))(puVar52,"hknpDeactivatedIsland");
                      }
                      lVar27 = param_1[0x74];
                      *puVar52 = 0;
                      puVar52[1] = 0x8000000000000000;
                      puVar52[2] = 0;
                      puVar52[3] = 0x8000000000000000;
                      *(undefined2 *)((long)puVar52 + 0x24) = 0;
                      *(undefined4 *)(puVar52 + 10) = 0;
                      *(int *)(puVar52 + 4) = (int)lVar27;
                      puVar52[0xb] = 0;
                      puVar52[0xc] = 0x8000000000000000;
                      *(undefined4 *)(puVar52 + 0xd) = 0;
                      puVar52[5] = 0xffffffffffffffff;
                      puVar52[6] = puVar52 + 8;
                      puVar52[7] = 0x8000000100000000;
                      iVar15 = (int)param_1[0x74];
                      lVar27 = (long)iVar15;
                      iVar55 = iVar15;
                      if ((int)(*(uint *)((long)param_1 + 0x3a4) & 0x7fffffff) <= iVar15) {
                        FUN_02f5e87c(param_1 + 0x73,lVar27 + 1);
                        iVar55 = (int)param_1[0x74];
                      }
                      *(undefined8 **)(param_1[0x73] + (long)iVar55 * 8) = puVar52;
                      *(int *)(param_1 + 0x74) = (int)(lVar27 + 1);
                    }
                    else {
                      iVar55 = (int)param_1[0x69] + -1;
                      iVar15 = *(int *)(param_1[0x68] + (long)iVar55 * 4);
                      *(int *)(param_1 + 0x69) = iVar55;
                      puVar3 = PTR_DAT_047d1a08;
                      local_878 = (uint *)&DAT_00000070;
                      lVar27 = (long)iVar15;
                      puVar52 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_878,0);
                      if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
                        (**(code **)(puVar3 + 0x10))(puVar52,"hknpDeactivatedIsland");
                      }
                      *(int *)(puVar52 + 4) = iVar15;
                      *puVar52 = 0;
                      puVar52[1] = 0x8000000000000000;
                      *(undefined2 *)((long)puVar52 + 0x24) = 0;
                      *(undefined4 *)(puVar52 + 10) = 0;
                      *(undefined4 *)(puVar52 + 0xd) = 0;
                      puVar52[2] = 0;
                      puVar52[3] = 0x8000000000000000;
                      puVar52[5] = 0xffffffffffffffff;
                      puVar52[6] = puVar52 + 8;
                      puVar52[7] = 0x8000000100000000;
                      puVar52[0xb] = 0;
                      puVar52[0xc] = 0x8000000000000000;
                      *(undefined8 **)(param_1[0x73] + lVar27 * 8) = puVar52;
                    }
                    plVar43 = *(long **)(param_1[0x73] + lVar27 * 8);
                    *(int *)(param_1[0x71] + (long)*piVar49 * 0x20 + 0x10) = iVar15;
                    *(int *)(param_1[0x71] + (long)*piVar50 * 0x20 + 0x10) = iVar15;
                    lVar48 = *param_1;
                    uVar21 = puVar38[1];
                    lVar27 = *(long *)(lVar48 + 0x38);
                    uVar14 = uVar21;
                    do {
                      uVar17 = (ulong)(uVar14 & 0xffffff);
                      if ((*(byte *)(lVar27 + uVar17 * 0xc0 + 0x88) & 1) != 0) {
                        iVar15 = (int)plVar43[1];
                        lVar53 = (long)iVar15;
                        if ((int)(*(uint *)((long)plVar43 + 0xc) & 0x7fffffff) <= iVar15) {
                          FUN_02f23d90(plVar43,PTR_PTR_047d1a50,lVar53 + 1);
                          iVar15 = (int)plVar43[1];
                        }
                        lVar27 = lVar27 + uVar17 * 0xc0;
                        *(undefined4 *)(*plVar43 + (long)iVar15 * 4) =
                             *(undefined4 *)(lVar27 + 0x50);
                        *(int *)(plVar43 + 1) = (int)(lVar53 + 1);
                        uVar14 = *(uint *)(lVar27 + 0x50);
                        if (uVar14 < *(uint *)((long)plVar43 + 0x2c)) {
                          *(uint *)((long)plVar43 + 0x2c) = uVar14;
                          *(undefined4 *)(plVar43 + 5) = *(undefined4 *)(lVar48 + 0x5bc);
                        }
                      }
                      lVar27 = *(long *)(lVar48 + 0x38);
                      uVar14 = *(uint *)(lVar27 + uVar17 * 0xc0 + 0x84);
                    } while (uVar14 != uVar21);
                    lVar48 = *param_1;
                    uVar21 = *puVar38;
                    lVar27 = *(long *)(lVar48 + 0x38);
                    uVar14 = uVar21;
                    do {
                      uVar17 = (ulong)(uVar14 & 0xffffff);
                      if ((*(byte *)(lVar27 + uVar17 * 0xc0 + 0x88) & 1) != 0) {
                        iVar15 = (int)plVar43[1];
                        lVar53 = (long)iVar15;
                        if ((int)(*(uint *)((long)plVar43 + 0xc) & 0x7fffffff) <= iVar15) {
                          FUN_02f23d90(plVar43,PTR_PTR_047d1a50,lVar53 + 1);
                          iVar15 = (int)plVar43[1];
                        }
                        lVar27 = lVar27 + uVar17 * 0xc0;
                        *(undefined4 *)(*plVar43 + (long)iVar15 * 4) =
                             *(undefined4 *)(lVar27 + 0x50);
                        *(int *)(plVar43 + 1) = (int)(lVar53 + 1);
                        uVar14 = *(uint *)(lVar27 + 0x50);
                        if (uVar14 < *(uint *)((long)plVar43 + 0x2c)) {
                          *(uint *)((long)plVar43 + 0x2c) = uVar14;
                          *(undefined4 *)(plVar43 + 5) = *(undefined4 *)(lVar48 + 0x5bc);
                        }
                      }
                      lVar27 = *(long *)(lVar48 + 0x38);
                      uVar14 = *(uint *)(lVar27 + uVar17 * 0xc0 + 0x84);
                    } while (uVar14 != uVar21);
                    if ((int)plVar43[0xd] == iVar54) {
                      iVar15 = (int)plVar43[0xc];
                    }
                    else {
                      iVar15 = 0;
                      *(undefined4 *)(plVar43 + 0xc) = 0;
                      *(int *)(plVar43 + 0xd) = iVar54;
                    }
                    iVar55 = iVar15 + 1;
                    if ((int)(*(uint *)((long)plVar43 + 100) & 0x7fffffff) <= iVar15) {
                      FUN_02f5f23c(plVar43 + 0xb,PTR_PTR_047d1a50,(long)iVar55);
LAB_02f5905c:
                      iVar15 = (int)plVar43[0xc];
                    }
LAB_02f59060:
                    *(undefined8 *)(plVar43[0xb] + (long)iVar15 * 8) = *(undefined8 *)puVar38;
                    *(int *)(plVar43 + 0xc) = iVar55;
                  }
                  else if ((uVar39 == 0xffffffff) || (uVar36 == 0xffffffff)) {
                    if (uVar39 == 0xffffffff) {
                      *puVar40 = uVar36;
                      lVar29 = *param_1;
                      uVar21 = puVar38[1];
                      lVar27 = *(long *)(lVar29 + 0x38);
                      plVar43 = *(long **)(param_1[0x73] + lVar53 * 8);
                      uVar14 = uVar21;
                      do {
                        uVar17 = (ulong)(uVar14 & 0xffffff);
                        if ((*(byte *)(lVar27 + uVar17 * 0xc0 + 0x88) & 1) != 0) {
                          iVar15 = (int)plVar43[1];
                          lVar53 = (long)iVar15;
                          if ((int)(*(uint *)((long)plVar43 + 0xc) & 0x7fffffff) <= iVar15) {
                            FUN_02f23d90(plVar43,PTR_PTR_047d1a50,lVar53 + 1);
                            iVar15 = (int)plVar43[1];
                          }
                          lVar27 = lVar27 + uVar17 * 0xc0;
                          *(undefined4 *)(*plVar43 + (long)iVar15 * 4) =
                               *(undefined4 *)(lVar27 + 0x50);
                          *(int *)(plVar43 + 1) = (int)(lVar53 + 1);
                          uVar14 = *(uint *)(lVar27 + 0x50);
                          if (uVar14 < *(uint *)((long)plVar43 + 0x2c)) {
                            *(uint *)((long)plVar43 + 0x2c) = uVar14;
                            *(undefined4 *)(plVar43 + 5) = *(undefined4 *)(lVar29 + 0x5bc);
                          }
                        }
                        lVar27 = *(long *)(lVar29 + 0x38);
                        uVar14 = *(uint *)(lVar27 + uVar17 * 0xc0 + 0x84);
                      } while (uVar14 != uVar21);
                      if ((int)plVar43[0xd] == iVar54) {
                        iVar15 = (int)plVar43[0xc];
                      }
                      else {
                        iVar15 = 0;
                        *(undefined4 *)(plVar43 + 0xc) = 0;
                        *(int *)(plVar43 + 0xd) = iVar54;
                      }
                      iVar55 = iVar15 + 1;
                      if ((int)(*(uint *)((long)plVar43 + 100) & 0x7fffffff) <= iVar15) {
                        FUN_02f5f23c(plVar43 + 0xb,PTR_PTR_047d1a50,(long)iVar55);
                        iVar15 = (int)plVar43[0xc];
                      }
                      *(undefined8 *)(plVar43[0xb] + (long)iVar15 * 8) = *(undefined8 *)puVar38;
                      *(int *)(plVar43 + 0xc) = iVar55;
                    }
                    if (uVar36 == 0xffffffff) {
                      *(uint *)(param_1[0x71] + (long)*piVar50 * 0x20 + 0x10) = uVar39;
                      lVar53 = *param_1;
                      uVar21 = *puVar38;
                      plVar43 = *(long **)(param_1[0x73] + lVar48 * 8);
                      lVar27 = *(long *)(lVar53 + 0x38);
                      uVar14 = uVar21;
                      do {
                        uVar17 = (ulong)(uVar14 & 0xffffff);
                        if ((*(byte *)(lVar27 + uVar17 * 0xc0 + 0x88) & 1) != 0) {
                          iVar15 = (int)plVar43[1];
                          lVar48 = (long)iVar15;
                          if ((int)(*(uint *)((long)plVar43 + 0xc) & 0x7fffffff) <= iVar15) {
                            FUN_02f23d90(plVar43,PTR_PTR_047d1a50,lVar48 + 1);
                            iVar15 = (int)plVar43[1];
                          }
                          lVar27 = lVar27 + uVar17 * 0xc0;
                          *(undefined4 *)(*plVar43 + (long)iVar15 * 4) =
                               *(undefined4 *)(lVar27 + 0x50);
                          *(int *)(plVar43 + 1) = (int)(lVar48 + 1);
                          uVar14 = *(uint *)(lVar27 + 0x50);
                          if (uVar14 < *(uint *)((long)plVar43 + 0x2c)) {
                            *(uint *)((long)plVar43 + 0x2c) = uVar14;
                            *(undefined4 *)(plVar43 + 5) = *(undefined4 *)(lVar53 + 0x5bc);
                          }
                        }
                        lVar27 = *(long *)(lVar53 + 0x38);
                        uVar14 = *(uint *)(lVar27 + uVar17 * 0xc0 + 0x84);
                      } while (uVar14 != uVar21);
                      if ((int)plVar43[0xd] == iVar54) {
                        iVar15 = (int)plVar43[0xc];
                      }
                      else {
                        iVar15 = 0;
                        *(undefined4 *)(plVar43 + 0xc) = 0;
                        *(int *)(plVar43 + 0xd) = iVar54;
                      }
                      iVar55 = iVar15 + 1;
                      if ((int)(*(uint *)((long)plVar43 + 100) & 0x7fffffff) <= iVar15) {
                        FUN_02f5f23c(plVar43 + 0xb,PTR_PTR_047d1a50,(long)iVar55);
                        goto LAB_02f5905c;
                      }
                      goto LAB_02f59060;
                    }
                  }
                  else if (uVar39 != uVar36) {
                    lVar27 = (long)(int)local_1100;
                    if ((int)(local_1100._4_4_ & 0x7fffffff) <= (int)local_1100) {
                      FUN_02f5f23c(&local_1108,PTR_PTR_047d1a50 + 0x20,lVar27 + 1);
                    }
                    *(undefined8 *)(local_1108 + (long)(int)local_1100 * 8) = *(undefined8 *)puVar38
                    ;
                    local_1100 = CONCAT44(local_1100._4_4_,(int)(lVar27 + 1));
                    lVar27 = param_1[0x73];
                    lVar48 = *(long *)(lVar27 + lVar48 * 8);
                    if (*(int *)(lVar48 + 0x68) != iVar54) {
                      *(undefined4 *)(lVar48 + 0x60) = 0;
                      *(int *)(lVar48 + 0x68) = iVar54;
                      lVar27 = param_1[0x73];
                    }
                    lVar27 = *(long *)(lVar27 + lVar53 * 8);
                    if (*(int *)(lVar27 + 0x68) != iVar54) {
                      *(undefined4 *)(lVar27 + 0x60) = 0;
                      *(int *)(lVar27 + 0x68) = iVar54;
                      lVar27 = *(long *)(param_1[0x73] + lVar53 * 8);
                    }
                    iVar15 = *(int *)(lVar27 + 0x60);
                    lVar48 = (long)iVar15;
                    if ((int)(*(uint *)(lVar27 + 100) & 0x7fffffff) <= iVar15) {
                      FUN_02f5f23c(lVar27 + 0x58,PTR_PTR_047d1a50,lVar48 + 1);
                      iVar15 = *(int *)(lVar27 + 0x60);
                    }
                    *(undefined8 *)(*(long *)(lVar27 + 0x58) + (long)iVar15 * 8) =
                         *(undefined8 *)puVar38;
                    *(int *)(lVar27 + 0x60) = (int)(lVar48 + 1);
                  }
                }
                else if ((uVar31 >> 3 & 1) == 0) {
joined_r0x02f58608:
                  if (bVar8) {
                    cVar6 = *(char *)(lVar27 + uVar17 * 0xc0 + 0x96);
                    cVar7 = *(char *)(lVar27 + uVar18 * 0xc0 + 0x96);
                    if ((((uVar35 >> 3 & 1) == 0) || (cVar7 <= cVar6)) &&
                       (((uVar31 >> 3 & 1) == 0 || (cVar6 <= cVar7)))) {
                      if (((uVar35 >> 3 & 1) == 0) || (uVar36 == 0xffffffff)) {
                        if (uVar39 == 0xffffffff) {
                          iVar15 = (int)((long)(int)local_10b0 + 1);
                          if ((uVar35 >> 3 & 1) == 0) {
                            if ((int)(local_10b0._4_4_ & 0x7fffffff) <= (int)local_10b0) {
                              FUN_02f23d90(&local_10b8,PTR_PTR_047d1a50 + 0x20,
                                           (long)(int)local_10b0 + 1);
                              uVar21 = *puVar23;
                            }
                            local_10b8[(int)local_10b0] = uVar21;
                          }
                          else {
                            if ((int)(local_10b0._4_4_ & 0x7fffffff) <= (int)local_10b0) {
                              FUN_02f23d90(&local_10b8,PTR_PTR_047d1a50 + 0x20,(long)iVar15);
                              uVar14 = *puVar38;
                            }
                            local_10b8[(int)local_10b0] = uVar14;
                          }
                          local_10b0 = CONCAT44(local_10b0._4_4_,iVar15);
                        }
                        else {
                          lVar27 = *(long *)(param_1[0x73] + lVar48 * 8);
                          *(undefined1 *)(lVar27 + 0x24) = 1;
                          if (*(int *)(lVar27 + 0x68) == iVar54) {
                            iVar15 = *(int *)(lVar27 + 0x60);
                          }
                          else {
                            iVar15 = 0;
                            *(undefined4 *)(lVar27 + 0x60) = 0;
                            *(int *)(lVar27 + 0x68) = iVar54;
                          }
                          iVar55 = iVar15 + 1;
                          if ((int)(*(uint *)(lVar27 + 100) & 0x7fffffff) <= iVar15) {
                            FUN_02f5f23c(lVar27 + 0x58,PTR_PTR_047d1a50,(long)iVar55);
                            iVar15 = *(int *)(lVar27 + 0x60);
                          }
                          *(undefined8 *)(*(long *)(lVar27 + 0x58) + (long)iVar15 * 8) =
                               *(undefined8 *)puVar38;
                          *(int *)(lVar27 + 0x60) = iVar55;
                          if (*(char *)(lVar27 + 0x25) == '\0') {
                            lVar48 = (long)(int)local_10f0 + 1;
                            if ((int)(local_10f0._4_4_ & 0x7fffffff) <= (int)local_10f0) {
                              FUN_0133bb88(&local_10f8,PTR_PTR_047d1a50 + 0x20,lVar48);
                            }
                            local_10f8[(int)local_10f0] = uVar39;
                            goto LAB_02f58ff8;
                          }
                        }
                      }
                      else {
                        lVar27 = *(long *)(param_1[0x73] + lVar53 * 8);
                        *(undefined1 *)(lVar27 + 0x24) = 1;
                        if (*(int *)(lVar27 + 0x68) == iVar54) {
                          iVar15 = *(int *)(lVar27 + 0x60);
                        }
                        else {
                          iVar15 = 0;
                          *(undefined4 *)(lVar27 + 0x60) = 0;
                          *(int *)(lVar27 + 0x68) = iVar54;
                        }
                        iVar55 = iVar15 + 1;
                        if ((int)(*(uint *)(lVar27 + 100) & 0x7fffffff) <= iVar15) {
                          FUN_02f5f23c(lVar27 + 0x58,PTR_PTR_047d1a50,(long)iVar55);
                          iVar15 = *(int *)(lVar27 + 0x60);
                        }
                        *(undefined8 *)(*(long *)(lVar27 + 0x58) + (long)iVar15 * 8) =
                             *(undefined8 *)puVar38;
                        *(int *)(lVar27 + 0x60) = iVar55;
                        if (*(char *)(lVar27 + 0x25) == '\0') {
                          lVar48 = (long)(int)local_10f0 + 1;
                          if ((int)(local_10f0._4_4_ & 0x7fffffff) <= (int)local_10f0) {
                            FUN_0133bb88(&local_10f8,PTR_PTR_047d1a50 + 0x20,lVar48);
                          }
                          local_10f8[(int)local_10f0] = uVar36;
LAB_02f58ff8:
                          local_10f0 = CONCAT44(local_10f0._4_4_,(int)lVar48);
                          *(undefined1 *)(lVar27 + 0x25) = 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (((((*(byte *)(lVar27 + uVar17 * 0xc0 + 0x88) & 1) != 0) &&
                      ((*(byte *)(lVar27 + uVar18 * 0xc0 + 0x88) & 1) != 0)) &&
                     (*(char *)(*(long *)(param_2 + 0x20) +
                                (ulong)*(ushort *)(lVar27 + uVar17 * 0xc0 + 0x8a) * 0x50 + 0x18) ==
                      '\0')) &&
                    (*(char *)(*(long *)(param_2 + 0x20) +
                               (ulong)*(ushort *)(lVar27 + uVar18 * 0xc0 + 0x8a) * 0x50 + 0x18) ==
                     '\0')) {
              if ((uVar35 & 1) != 0) {
                puVar23 = puVar38;
              }
              uVar21 = *puVar23;
              if ((uVar35 & 1) == 0) {
                uVar14 = *(uint *)(param_1[0x71] +
                                   (long)*(int *)(lVar27 + uVar17 * 0xc0 + 0x80) * 0x20 + 0x10);
LAB_02f58768:
                if ((uVar31 & 1) != 0) {
                  uVar5 = *(ushort *)(lVar27 + uVar18 * 0xc0 + 0x58);
                  if ((uVar14 == 0xffffffff) && ((uVar5 >> 0xb & 1) != 0)) goto LAB_02f58958;
                  if ((uVar5 >> 0xb & 1) != 0) goto LAB_02f588c0;
                }
              }
              else {
                uVar14 = *(uint *)(param_1[0x71] +
                                   (long)*(int *)(lVar27 + uVar18 * 0xc0 + 0x80) * 0x20 + 0x10);
                if ((*(byte *)(lVar27 + uVar17 * 0xc0 + 0x59) >> 3 & 1) == 0) goto LAB_02f58768;
                if (uVar14 == 0xffffffff) {
LAB_02f58958:
                  lVar27 = (long)(int)local_10b0;
                  if ((int)(local_10b0._4_4_ & 0x7fffffff) <= (int)local_10b0) {
                    FUN_02f23d90(&local_10b8,PTR_PTR_047d1a50 + 0x20,lVar27 + 1);
                  }
                  local_10b8[(int)local_10b0] = uVar21;
                  local_10b0 = CONCAT44(local_10b0._4_4_,(int)(lVar27 + 1));
                }
                else {
LAB_02f588c0:
                  lVar27 = *(long *)(param_1[0x73] + (long)(int)uVar14 * 8);
                  *(undefined1 *)(lVar27 + 0x24) = 1;
                  if (*(char *)(lVar27 + 0x25) == '\0') {
                    lVar48 = (long)(int)local_10f0;
                    if ((int)(local_10f0._4_4_ & 0x7fffffff) <= (int)local_10f0) {
                      FUN_0133bb88(&local_10f8,PTR_PTR_047d1a50 + 0x20,lVar48 + 1);
                    }
                    local_10f8[(int)local_10f0] = uVar14;
                    local_10f0 = CONCAT44(local_10f0._4_4_,(int)(lVar48 + 1));
                    *(undefined1 *)(lVar27 + 0x25) = 1;
                    if (*(int *)(lVar27 + 0x68) == iVar54) {
                      iVar15 = *(int *)(lVar27 + 0x60);
                    }
                    else {
                      iVar15 = 0;
                      *(undefined4 *)(lVar27 + 0x60) = 0;
                      *(int *)(lVar27 + 0x68) = iVar54;
                    }
                    iVar55 = iVar15 + 1;
                    if ((int)(*(uint *)(lVar27 + 100) & 0x7fffffff) <= iVar15) {
                      FUN_02f5f23c(lVar27 + 0x58,PTR_PTR_047d1a50,(long)iVar55);
                      iVar15 = *(int *)(lVar27 + 0x60);
                    }
                    *(undefined8 *)(*(long *)(lVar27 + 0x58) + (long)iVar15 * 8) =
                         *(undefined8 *)puVar38;
                    *(int *)(lVar27 + 0x60) = iVar55;
                  }
                }
              }
            }
          }
        }
        if ((int)uVar51 < 2) {
          if ((uVar9 == 0) || (puVar46 = *(uint **)(puVar46 + 2), puVar46 == (uint *)0x0)) break;
          uVar51 = *puVar46 & 0xffff;
          if ((int)uVar9 <= (int)(*puVar46 & 0xffff)) {
            uVar51 = uVar9;
          }
          if ((int)uVar51 < 1) break;
          uVar9 = uVar9 - uVar51;
          puVar38 = puVar46 + 8;
          Hint_Prefetch(*(long *)(puVar46 + 2),0,0,0);
          Hint_Prefetch(*(long *)(puVar46 + 2) + 0x40,0,0,0);
          Hint_Prefetch(puVar46 + 0x20,0,0,0);
          Hint_Prefetch(puVar46 + 0x30,0,0,0);
        }
        else {
          uVar51 = uVar51 - 1;
          puVar38 = puVar38 + 2;
        }
      } while (puVar38 != (uint *)0x0);
      if ((int)local_10b0 - 1U != 0 && 0 < (int)local_10b0) {
        puVar46 = local_10b8 + ((int)local_10b0 - 1U);
        uVar51 = 0;
        local_878 = local_10b8;
        local_ca8 = puVar46;
        puVar38 = local_10b8;
LAB_02f591cc:
        lVar27 = (long)(int)uVar51;
LAB_02f591d0:
        do {
          puVar23 = puVar46;
          do {
            puVar46 = puVar23;
            uVar51 = puVar38[(long)puVar46 - (long)puVar38 >> 3];
            puVar40 = puVar38;
            puVar23 = puVar46;
            do {
              do {
                puVar22 = puVar40;
                puVar40 = puVar22 + 1;
              } while ((*puVar22 & 0xffffff) < (uVar51 & 0xffffff));
              puVar42 = puVar23 + 1;
              do {
                puVar23 = puVar42;
                puVar42 = puVar23 + -1;
                uVar9 = *puVar42;
              } while ((uVar51 & 0xffffff) < (uVar9 & 0xffffff));
              if (puVar42 < puVar22) {
                puVar40 = puVar22;
                puVar23 = puVar42;
              }
              else {
                puVar23 = puVar23 + -2;
                if (puVar22 != puVar42) {
                  *puVar42 = *puVar22;
                  *puVar22 = uVar9;
                }
              }
            } while (puVar40 <= puVar23);
            if (puVar23 <= puVar38) {
              puVar38 = puVar40;
              if (puVar40 < puVar46) goto LAB_02f591d0;
              uVar51 = (int)lVar27 - 1;
              if ((int)lVar27 < 1) goto joined_r0x02f592ac;
              puVar38 = *(uint **)(local_868 + (ulong)uVar51 * 2 + -4);
              puVar46 = *(uint **)(auStack_10a8 + (ulong)uVar51 * 2 + 0x100);
              goto LAB_02f591cc;
            }
          } while (puVar46 <= puVar40);
          puVar22 = puVar23;
          puVar42 = puVar38;
          if ((long)puVar46 - (long)puVar40 <= (long)puVar23 - (long)puVar38) {
            puVar22 = puVar46;
            puVar42 = puVar40;
            puVar46 = puVar23;
            puVar40 = puVar38;
          }
          *(uint **)(local_868 + lVar27 * 2 + -4) = puVar40;
          *(uint **)(auStack_10a8 + lVar27 * 2 + 0x100) = puVar46;
          lVar27 = lVar27 + 1;
          puVar46 = puVar22;
          puVar38 = puVar42;
        } while( true );
      }
joined_r0x02f592ac:
      if ((int)local_10b0 != 0) {
        lVar27 = (long)(int)local_10b0 << 2;
        puVar3 = PTR_PTR_047d1a50 + 0x20;
        puVar46 = local_10b8;
        do {
          uVar51 = *puVar46;
          uVar17 = FUN_02f35f08(*param_1,(ulong)uVar51,0);
          if ((uVar17 & 1) == 0) {
            puVar38 = (uint *)(param_1[0x71] +
                               (long)*(int *)(*(long *)(*param_1 + 0x38) +
                                              ((ulong)uVar51 & 0xffffff) * 0xc0 + 0x80) * 0x20 +
                              0x10);
            uVar51 = *puVar38;
            if ((uVar51 != 0xffffffff) &&
               (lVar48 = *(long *)(param_1[0x73] + (long)(int)uVar51 * 8),
               *(char *)(lVar48 + 0x25) == '\0')) {
              lVar53 = (long)(int)local_10f0;
              if ((int)(local_10f0._4_4_ & 0x7fffffff) <= (int)local_10f0) {
                FUN_0133bb88(&local_10f8,puVar3,lVar53 + 1);
                uVar51 = *puVar38;
              }
              local_10f8[(int)local_10f0] = uVar51;
              local_10f0 = CONCAT44(local_10f0._4_4_,(int)(lVar53 + 1));
              *(undefined1 *)(lVar48 + 0x25) = 1;
            }
          }
          puVar46 = puVar46 + 1;
          lVar27 = lVar27 + -4;
        } while (lVar27 != 0);
      }
      lVar27 = local_10b0;
      uVar17 = (ulong)local_10b0._4_4_;
      local_10b0 = (ulong)local_10b0._4_4_ << 0x20;
      if ((-1 < lVar27) && (local_10b8 != (uint *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                  (PTR_PTR_047d1a50 + 0x20,local_10b8,uVar17 << 2);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x6c) = 0;
  lVar27 = *(long *)(lVar44 + 0x1000b8);
  if (lVar27 == 0) {
    lVar27 = FUN_00e5d3b4();
    *(long *)(lVar44 + 0x1000b8) = lVar27;
  }
  plVar43 = *(long **)(lVar27 + 0x3e0);
  if (plVar43 != (long *)0x0) {
    lVar27 = *plVar43;
    if (((*(byte *)(lVar27 + 0x38) & 1) != 0) && (plVar43[6] != 0)) {
      puVar52 = (undefined8 *)plVar43[2];
      uVar17 = (long)puVar52 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= (ulong)plVar43[3]) && (plVar43[2] = uVar17, puVar52 != (undefined8 *)0x0)) {
        *puVar52 = &DAT_03c4e575;
        puVar52[1] = *(undefined8 *)(plVar43[6] + 8);
      }
    }
    puVar52 = (undefined8 *)plVar43[2];
    uVar17 = (long)puVar52 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)plVar43[3]) && (plVar43[2] = uVar17, puVar52 != (undefined8 *)0x0)) {
      *puVar52 = "StActivateAndMerge";
      uVar10 = nn::os::GetSystemTick();
      puVar52[1] = uVar10;
    }
    if (*(code **)(lVar27 + 0x20) != (code *)0x0) {
      (**(code **)(lVar27 + 0x20))(*(undefined8 *)(lVar27 + 0x28));
    }
    if (*(code **)(lVar27 + 0x18) != (code *)0x0) {
      (**(code **)(lVar27 + 0x18))("ActivateAndMerge",0x10,*(undefined8 *)(lVar27 + 0x28));
    }
  }
  if (0 < (int)local_1100) {
    lVar27 = 0;
    puVar3 = PTR_PTR_047d1a50 + 0x20;
    do {
      uVar17 = *(ulong *)(local_1108 + lVar27 * 8);
      uVar9 = *(uint *)(param_1[0x71] +
                        (long)*(int *)(*(long *)(lVar16 + 0x38) + (uVar17 & 0xffffff) * 0xc0 + 0x80)
                        * 0x20 + 0x10);
      uVar51 = *(uint *)(param_1[0x71] +
                         (long)*(int *)(*(long *)(lVar16 + 0x38) +
                                        (uVar17 >> 0x20 & 0xffffff) * 0xc0 + 0x80) * 0x20 + 0x10);
      if ((uVar9 == 0xffffffff || uVar51 == 0xffffffff) || uVar51 == uVar9) {
        if ((uVar51 == 0xffffffff) != (uVar9 == 0xffffffff)) {
          uVar51 = uVar51 ^ uVar9 ^ 0xffffffff;
          lVar48 = *(long *)(param_1[0x73] + (long)(int)uVar51 * 8);
          if (*(int *)(lVar48 + 0x68) == iVar54) {
            iVar15 = *(int *)(lVar48 + 0x60);
          }
          else {
            iVar15 = 0;
            *(undefined4 *)(lVar48 + 0x60) = 0;
            *(int *)(lVar48 + 0x68) = iVar54;
          }
          iVar55 = iVar15 + 1;
          if ((int)(*(uint *)(lVar48 + 100) & 0x7fffffff) <= iVar15) {
            FUN_02f5f23c(lVar48 + 0x58,PTR_PTR_047d1a50,(long)iVar55);
            iVar15 = *(int *)(lVar48 + 0x60);
          }
          *(ulong *)(*(long *)(lVar48 + 0x58) + (long)iVar15 * 8) = uVar17;
          *(int *)(lVar48 + 0x60) = iVar55;
          *(undefined1 *)(lVar48 + 0x24) = 1;
          if (*(char *)(lVar48 + 0x25) == '\0') {
            lVar53 = (long)(int)local_10f0;
            if ((int)(local_10f0._4_4_ & 0x7fffffff) <= (int)local_10f0) {
              FUN_0133bb88(&local_10f8,puVar3,lVar53 + 1);
            }
            local_10f8[(int)local_10f0] = uVar51;
            local_10f0 = CONCAT44(local_10f0._4_4_,(int)(lVar53 + 1));
            *(undefined1 *)(lVar48 + 0x25) = 1;
          }
        }
      }
      else {
        FUN_02f563c4();
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 < (int)local_1100);
  }
  iVar15 = (int)param_1[0x67];
  lVar16 = (long)(int)local_10f0;
  puVar46 = (uint *)param_1[0x66];
  iVar54 = (int)local_10f0 + iVar15;
  if ((int)(local_10f0._4_4_ & 0x7fffffff) < iVar54) {
    FUN_02e9b320(&local_10f8,PTR_PTR_047d1a50 + 0x20,(long)iVar54);
  }
  if (iVar15 != 0) {
    uVar17 = (long)iVar15 * 4 - 4;
    uVar51 = ((uint)(uVar17 >> 2) & 0x3fffffff) + 1;
    puVar38 = local_10f8 + lVar16;
    if ((uVar51 & 3) == 0) {
      puVar23 = puVar46;
    }
    else {
      lVar16 = -((ulong)uVar51 & 3);
      puVar40 = puVar38;
      puVar22 = puVar46;
      do {
        puVar23 = puVar22 + 1;
        bVar8 = lVar16 != -1;
        lVar16 = lVar16 + 1;
        puVar38 = puVar40 + 1;
        *puVar40 = *puVar22;
        puVar40 = puVar38;
        puVar22 = puVar23;
      } while (bVar8);
    }
    if (0xb < uVar17) {
      do {
        *puVar38 = *puVar23;
        puVar38[1] = puVar23[1];
        puVar38[2] = puVar23[2];
        puVar40 = puVar23 + 3;
        puVar23 = puVar23 + 4;
        puVar38[3] = *puVar40;
        puVar38 = puVar38 + 4;
      } while (puVar23 != puVar46 + iVar15);
    }
  }
  local_10f0 = CONCAT44(local_10f0._4_4_,iVar54);
  *(undefined4 *)(param_1 + 0x67) = 0;
  if (iVar54 == 0) goto LAB_02f5c8e8;
  lVar16 = *(long *)(lVar44 + 0x1000b8);
  if (lVar16 == 0) {
    lVar16 = FUN_00e5d3b4();
    *(long *)(lVar44 + 0x1000b8) = lVar16;
  }
  plVar43 = *(long **)(lVar16 + 0x3e0);
  if (plVar43 != (long *)0x0) {
    lVar16 = *plVar43;
    if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar43[6] != 0)) {
      puVar52 = (undefined8 *)plVar43[2];
      uVar17 = (long)puVar52 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= (ulong)plVar43[3]) && (plVar43[2] = uVar17, puVar52 != (undefined8 *)0x0)) {
        *puVar52 = &DAT_03c4e575;
        puVar52[1] = *(undefined8 *)(plVar43[6] + 8);
      }
    }
    puVar52 = (undefined8 *)plVar43[2];
    uVar17 = (long)puVar52 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)plVar43[3]) && (plVar43[2] = uVar17, puVar52 != (undefined8 *)0x0)) {
      *puVar52 = "StSortActivate";
      uVar10 = nn::os::GetSystemTick();
      puVar52[1] = uVar10;
    }
    if (*(code **)(lVar16 + 0x20) != (code *)0x0) {
      (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x28));
    }
    if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
      (**(code **)(lVar16 + 0x18))("SortActivate",0xc,*(undefined8 *)(lVar16 + 0x28));
    }
  }
  uVar18 = local_10f0 & 0xffffffff;
  uVar17 = uVar18;
  if (0 < (int)local_10f0) {
    do {
      uVar19 = uVar17 - 1;
      if (*(long *)(param_1[0x73] + (long)(int)local_10f8[uVar19] * 8) == 0) {
        iVar54 = (int)local_10f0 + -1;
        bVar8 = (int)uVar18 != (int)local_10f0;
        local_10f0 = CONCAT44(local_10f0._4_4_,iVar54);
        if (bVar8) {
          local_10f8[uVar19] = local_10f8[iVar54];
        }
      }
      uVar18 = (ulong)((int)uVar18 - 1);
      bVar8 = 1 < (long)uVar17;
      uVar17 = uVar19;
    } while (bVar8);
    if (1 < (int)local_10f0) {
      puVar46 = local_10f8 + ((int)local_10f0 - 1);
      lVar16 = param_1[0x73];
      uVar51 = 0;
      local_878 = local_10f8;
      local_ca8 = puVar46;
      puVar38 = local_10f8;
LAB_02f5c3b0:
      lVar27 = (long)(int)uVar51;
LAB_02f5c3b4:
      do {
        puVar23 = puVar46;
        do {
          puVar46 = puVar23;
          uVar51 = puVar38[(long)puVar46 - (long)puVar38 >> 3];
          puVar40 = puVar38;
          puVar23 = puVar46;
          do {
            uVar17 = *(ulong *)(*(long *)(lVar16 + (long)(int)uVar51 * 8) + 0x28);
            do {
              puVar22 = puVar40;
              puVar40 = puVar22 + 1;
            } while (*(ulong *)(*(long *)(lVar16 + (long)(int)*puVar22 * 8) + 0x28) < uVar17);
            puVar42 = puVar23 + 1;
            do {
              puVar23 = puVar42;
              puVar42 = puVar23 + -1;
              uVar9 = *puVar42;
            } while (uVar17 < *(ulong *)(*(long *)(lVar16 + (long)(int)uVar9 * 8) + 0x28));
            if (puVar42 < puVar22) {
              puVar40 = puVar22;
              puVar23 = puVar42;
            }
            else {
              puVar23 = puVar23 + -2;
              if (puVar22 != puVar42) {
                *puVar42 = *puVar22;
                *puVar22 = uVar9;
              }
            }
          } while (puVar40 <= puVar23);
          if (puVar23 <= puVar38) {
            puVar38 = puVar40;
            if (puVar40 < puVar46) goto LAB_02f5c3b4;
            uVar51 = (int)lVar27 - 1;
            if ((int)lVar27 < 1) goto LAB_02f597c0;
            puVar38 = *(uint **)(local_868 + (ulong)uVar51 * 2 + -4);
            puVar46 = *(uint **)(auStack_10a8 + (ulong)uVar51 * 2 + 0x100);
            goto LAB_02f5c3b0;
          }
        } while (puVar46 <= puVar40);
        puVar22 = puVar23;
        puVar42 = puVar38;
        if ((long)puVar46 - (long)puVar40 <= (long)puVar23 - (long)puVar38) {
          puVar22 = puVar46;
          puVar42 = puVar40;
          puVar46 = puVar23;
          puVar40 = puVar38;
        }
        *(uint **)(local_868 + lVar27 * 2 + -4) = puVar40;
        *(uint **)(auStack_10a8 + lVar27 * 2 + 0x100) = puVar46;
        lVar27 = lVar27 + 1;
        puVar38 = puVar42;
        puVar46 = puVar22;
      } while( true );
    }
  }
LAB_02f597c0:
  lVar16 = *(long *)(lVar44 + 0x1000b8);
  if (lVar16 == 0) {
    lVar16 = FUN_00e5d3b4();
    *(long *)(lVar44 + 0x1000b8) = lVar16;
  }
  plVar43 = *(long **)(lVar16 + 0x3e0);
  if (plVar43 != (long *)0x0) {
    lVar16 = *plVar43;
    if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar43[6] != 0)) {
      puVar52 = (undefined8 *)plVar43[2];
      uVar17 = (long)puVar52 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= (ulong)plVar43[3]) && (plVar43[2] = uVar17, puVar52 != (undefined8 *)0x0)) {
        *puVar52 = &DAT_03c4e575;
        puVar52[1] = *(undefined8 *)(plVar43[6] + 8);
      }
    }
    puVar52 = (undefined8 *)plVar43[2];
    uVar17 = (long)puVar52 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)plVar43[3]) && (plVar43[2] = uVar17, puVar52 != (undefined8 *)0x0)) {
      *puVar52 = "StIslandActivation";
      uVar10 = nn::os::GetSystemTick();
      puVar52[1] = uVar10;
    }
    if (*(code **)(lVar16 + 0x20) != (code *)0x0) {
      (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x28));
    }
    if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
      (**(code **)(lVar16 + 0x18))("IslandActivation",0x10,*(undefined8 *)(lVar16 + 0x28));
    }
  }
  local_1130 = (long *)0x0;
  local_1158 = (long *)0x0;
  if (param_5 == 0) {
    local_1128 = *(undefined8 **)(param_2 + 0x4e0);
    local_1120 = *(uint **)(param_3[2] + (long)(int)param_3[3] * 8 + -8);
    local_1118 = *local_1120;
    local_1114 = *local_1120 & 0xffff;
    local_1158 = param_3 + 0x20;
    *(uint *)(param_3 + 1) = (int)param_3[1] - (*local_1120 & 0xffff);
    local_1150 = *(undefined8 **)(param_2 + 0x4e0);
    puVar46 = *(uint **)(param_3[0x22] + (long)(int)param_3[0x23] * 8 + -8);
    local_1140 = *puVar46 >> 0x10;
    uVar51 = *puVar46 & 0xffff;
    plVar43 = param_3 + 0x21;
    pplVar28 = &local_1158;
    local_113c = uVar51;
    local_1130 = param_3;
  }
  else {
    FUN_031c2be4(param_1 + 0x22,*(undefined8 *)(param_2 + 0x4e0));
    pplVar28 = &local_1130;
    local_1128 = *(undefined8 **)(param_2 + 0x4e0);
    puVar46 = *(uint **)(param_1[0x24] + (long)(int)param_1[0x25] * 8 + -8);
    local_1118 = *puVar46;
    uVar51 = *puVar46 & 0xffff;
    plVar43 = param_1 + 0x23;
    local_1130 = param_1 + 0x22;
    local_1114 = uVar51;
  }
  local_1118 = local_1118 >> 0x10;
  *(uint *)plVar43 = (int)*plVar43 - uVar51;
  pplVar28[2] = (long *)puVar46;
  lStack_1160 = *(long *)(param_2 + 8) + 0x530;
  lVar16 = *(long *)(*(long *)(param_2 + 8) + 0x500);
  local_1188 = param_1 + 0x42;
  local_1168 = 0;
  if (*(char *)(lVar16 + 0xaa0) != '\0') {
    local_1168 = lVar16 + 0xab0;
  }
  local_11c0 = *(undefined8 **)(param_2 + 0x4e0);
  local_1178 = 0;
  local_1180 = (uint *)0x0;
  local_11b8 = *(uint **)(*(long *)(param_4 + 0x10) + (long)*(int *)(param_4 + 0x18) * 8 + -8);
  local_11b0 = *local_11b8 >> 0x10;
  local_11ac = *local_11b8 & 0xffff;
  *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) - (*local_11b8 & 0xffff);
  local_11c8 = param_4;
  local_1170 = local_11c0;
  if (0 < (int)local_10f0) {
    lVar16 = 0;
    do {
      uVar51 = local_10f8[lVar16];
      plVar43 = *(long **)(param_1[0x73] + (long)(int)uVar51 * 8);
      if ((plVar43 != (long *)0x0) && (*(char *)((long)plVar43 + 0x25) != '\0')) {
        if (*(char *)((long)plVar43 + 0x24) == '\0') {
          iVar54 = (int)plVar43[3];
          if (0 < iVar54) {
            iVar15 = 0;
            do {
              lVar27 = plVar43[2];
              lVar48 = (long)iVar15;
              lVar53 = *(long *)(lVar27 + (long)iVar15 * 8);
              bVar4 = *(byte *)(lVar53 + 0x18);
              if ((ulong)bVar4 == 0) {
                iVar54 = iVar54 + -1;
                *(int *)(plVar43 + 3) = iVar54;
                if (iVar54 != iVar15) {
                  *(undefined8 *)(lVar27 + lVar48 * 8) = *(undefined8 *)(lVar27 + (long)iVar54 * 8);
LAB_02f5a8b4:
                  if (iVar15 < (int)plVar43[3]) {
                    *(int *)(*(long *)(plVar43[2] + lVar48 * 8) + 4) = iVar15;
                  }
                }
LAB_02f5a8cc:
                iVar15 = iVar15 + -1;
              }
              else {
                lVar27 = lVar53 + 0x10;
                uVar9 = *(uint *)(lVar53 + 0x14);
                uVar51 = *(uint *)(lVar53 + 0x10);
                lVar32 = *(long *)(*param_1 + 0x38) + ((ulong)uVar9 & 0xffffff) * 0xc0;
                lVar29 = *(long *)(*param_1 + 0x38) + ((ulong)uVar51 & 0xffffff) * 0xc0;
                uVar5 = *(ushort *)(lVar29 + 0x58) | *(ushort *)(lVar32 + 0x58);
                iVar57 = -(uint)((float)*(undefined8 *)(lVar32 + 0x70) <=
                                (float)*(undefined8 *)(lVar29 + 0x60));
                iVar58 = -(uint)((float)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20) <=
                                (float)((ulong)*(undefined8 *)(lVar29 + 0x60) >> 0x20));
                iVar59 = -(uint)((float)((ulong)*(undefined8 *)(lVar32 + 0x68) >> 0x20) <=
                                (float)*(undefined8 *)(lVar29 + 0x68));
                iVar54 = -(uint)((float)*(undefined8 *)(lVar29 + 0x70) <=
                                (float)*(undefined8 *)(lVar32 + 0x60));
                iVar55 = -(uint)((float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20) <=
                                (float)((ulong)*(undefined8 *)(lVar32 + 0x60) >> 0x20));
                iVar56 = -(uint)((float)((ulong)*(undefined8 *)(lVar29 + 0x68) >> 0x20) <=
                                (float)*(undefined8 *)(lVar32 + 0x68));
                if (CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar58 >> 0x18) &
                             (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar57 >> 0x18) &
                             (byte)((uint)iVar56 >> 0x18) & (byte)((uint)iVar59 >> 0x18),
                             CONCAT12((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar58 >> 0x10) &
                                      (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar57 >> 0x10) &
                                      (byte)((uint)iVar56 >> 0x10) & (byte)((uint)iVar59 >> 0x10),
                                      CONCAT11((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar58 >> 8)
                                               & (byte)((uint)iVar54 >> 8) &
                                                 (byte)((uint)iVar57 >> 8) &
                                               (byte)((uint)iVar56 >> 8) & (byte)((uint)iVar59 >> 8)
                                               ,(byte)iVar55 & (byte)iVar58 &
                                                (byte)iVar54 & (byte)iVar57 &
                                                (byte)iVar56 & (byte)iVar59))) == 0 ||
                    (uVar5 & 1) != 0) {
                  local_878 = (uint *)CONCAT44(local_878._4_4_,0xffffffff);
                  local_ca8 = (uint *)CONCAT44(local_ca8._4_4_,0xffffffff);
                  plVar12 = *(long **)(*(long *)(param_2 + 0x40) + (ulong)bVar4 * 8 + 0x13b8);
                  (**(code **)(*plVar12 + 0x18))
                            (plVar12,param_2,&local_1168,lVar27,auStack_11a0,(uint *)(lVar53 + 0x14)
                             ,lVar27,&local_878,&local_ca8);
LAB_02f5a874:
                  *(undefined1 *)(lVar53 + 0x18) = 0;
                  lVar27 = (long)(int)plVar43[3] + -1;
                  iVar54 = (int)lVar27;
                  *(int *)(plVar43 + 3) = iVar54;
                  if (iVar54 != iVar15) {
                    *(undefined8 *)(plVar43[2] + lVar48 * 8) =
                         *(undefined8 *)(plVar43[2] + lVar27 * 8);
                    goto LAB_02f5a8b4;
                  }
                  goto LAB_02f5a8cc;
                }
                if (((uVar5 >> 0xb & 1) != 0) && (*(short *)(lVar53 + 0x1a) < 0)) {
                  if (bVar4 == 9) {
                    if ((int)local_11b0 < 0xf99) {
                      puVar46 = (uint *)((long)local_11b8 + (long)(int)local_11b0 + 0x20);
                    }
                    else {
                      puVar46 = (uint *)FUN_031c36f4(&local_11c8);
                    }
                    *puVar46 = uVar51;
                    puVar46[1] = uVar9;
                    local_11b0 = local_11b0 + 8;
                    local_11ac = local_11ac + 1;
                  }
                  else {
                    FUN_02f57fd0(lVar27,&local_1130,&local_1158,param_5,param_6,auStack_11a0,
                                 *(long *)(param_2 + 0x40) + 0x13b8,
                                 *(long *)(param_2 + 0x40) + 0x1448);
                  }
                  goto LAB_02f5a874;
                }
              }
              iVar54 = (int)plVar43[3];
              iVar15 = iVar15 + 1;
            } while (iVar15 < iVar54);
          }
          *(undefined1 *)((long)plVar43 + 0x25) = 0;
        }
        else {
          lVar27 = (long)(int)uVar51;
          if (((param_8 != (long *)0x0) && ((int)plVar43[10] == *(int *)(*param_1 + 0x5bc))) &&
             (0 < (int)plVar43[7])) {
            lVar48 = 0;
            lVar27 = 0;
            iVar54 = (int)param_8[1];
            do {
              iVar15 = (int)((long *)(plVar43[6] + lVar48))[1];
              iVar55 = (int)((ulong)(*(long *)(plVar43[6] + lVar48) - param_7) >> 2) * -0x55555555;
              iVar56 = (int)lVar27;
              if (iVar54 + lVar27 < (long)((ulong)*(uint *)((long)param_8 + 0xc) & 0x7fffffff)) {
                iVar57 = iVar54 + iVar56;
              }
              else {
                FUN_02f5f72c(param_8,PTR_PTR_047d1a50,iVar54 + lVar27 + 1);
                iVar57 = (int)param_8[1];
              }
              piVar49 = (int *)(*param_8 + (long)iVar57 * 0xc);
              *piVar49 = iVar55;
              piVar49[1] = iVar15 + iVar55;
              piVar49[2] = iVar15;
              lVar27 = lVar27 + 1;
              *(int *)(param_8 + 1) = iVar54 + iVar56 + 1;
              lVar48 = lVar48 + 0x10;
            } while (lVar27 < (int)plVar43[7]);
            uVar51 = local_10f8[lVar16];
            lVar27 = (long)(int)uVar51;
            plVar43 = *(long **)(param_1[0x73] + (long)(int)uVar51 * 8);
          }
          if ((int)plVar43[3] == 0) {
            uVar9 = *(uint *)(plVar43 + 1);
            while (0 < (int)uVar9) {
              uVar35 = uVar9 - 1;
              uVar17 = (ulong)uVar35;
              lVar53 = *param_1;
              uVar14 = *(uint *)(*plVar43 + uVar17 * 4);
              lVar48 = lVar53;
              uVar21 = uVar14;
              do {
                lVar48 = *(long *)(lVar48 + 0x38) + (ulong)(uVar21 & 0xffffff) * 0xc0;
                *(ushort *)(lVar48 + 0x58) = *(ushort *)(lVar48 + 0x58) | 0x800;
                uVar21 = *(uint *)(*(long *)(lVar53 + 0x38) + (ulong)(uVar21 & 0xffffff) * 0xc0 +
                                  0x84);
                lVar48 = *param_1;
              } while (uVar21 != uVar14);
              uVar18 = (ulong)*(uint *)(*plVar43 + uVar17 * 4);
              lVar53 = (long)*(int *)(*(long *)(lVar48 + 0x38) + (uVar18 & 0xffffff) * 0xc0 + 0x80);
              uVar18 = FUN_02f35f08(lVar48,uVar18,0);
              if ((uVar18 & 1) == 0) {
                *(undefined4 *)(param_1[0x71] + lVar53 * 0x20 + 0x10) = 0xffffffff;
                uVar21 = *(uint *)(plVar43 + 1);
                iVar54 = uVar21 - 1;
                *(int *)(plVar43 + 1) = iVar54;
                if (uVar21 != uVar9) {
                  *(undefined4 *)(*plVar43 + uVar17 * 4) =
                       *(undefined4 *)(*plVar43 + (long)iVar54 * 4);
                }
              }
              bVar8 = (int)uVar9 <= (int)*(uint *)(plVar43 + 1);
              uVar9 = *(uint *)(plVar43 + 1);
              if (bVar8) {
                uVar9 = uVar35;
              }
              *(undefined1 *)(param_1[0x71] + lVar53 * 0x20 + 0xb) = 0xfe;
            }
            iVar54 = (int)param_1[0x69];
            lVar48 = (long)iVar54;
            if ((int)(*(uint *)((long)param_1 + 0x34c) & 0x7fffffff) <= iVar54) {
              FUN_0133bb88(param_1 + 0x68,PTR_PTR_047d1a50,lVar48 + 1);
              iVar54 = (int)param_1[0x69];
            }
            *(uint *)(param_1[0x68] + (long)iVar54 * 4) = uVar51;
            lVar53 = param_1[0x73];
            *(int *)(param_1 + 0x69) = (int)(lVar48 + 1);
            lVar48 = *(long *)(lVar53 + lVar27 * 8);
            if (lVar48 != 0) {
              FUN_02f568d8(lVar48);
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar48,0);
              lVar53 = param_1[0x73];
            }
            *(undefined8 *)(lVar53 + lVar27 * 8) = 0;
            if (0 < (int)param_1[0x6b]) {
              lVar27 = 0;
              do {
                puVar45 = (ushort *)(param_1[0x6a] + lVar27 * 0x20);
                puVar38 = *(uint **)(*(long *)(param_2 + 0x540) +
                                     (long)*(int *)(param_2 + 0x548) * 8 + -8);
                uVar5 = *puVar45;
                puVar52 = *(undefined8 **)(param_2 + 0x4e0);
                uVar51 = *puVar38;
                iVar54 = 4000 - (uint)uVar5;
                puVar46 = puVar38;
                if (iVar54 <= (int)(uVar51 >> 0x10)) {
                  do {
                    uVar51 = *(int *)(puVar52 + 0xb) - 1;
                    if (*(int *)(puVar52 + 0xb) < 1) {
                      lVar48 = puVar52[1];
                      (**(code **)(*(long *)*puVar52 + 0x20))((long *)*puVar52,lVar48,6);
                      *(undefined4 *)(puVar52 + 0xb) = 5;
                      puVar20 = (undefined8 *)(lVar48 + 0x28);
                    }
                    else {
                      *(uint *)(puVar52 + 0xb) = uVar51;
                      puVar20 = (undefined8 *)(puVar52[1] + (ulong)uVar51 * 8);
                    }
                    puVar38 = (uint *)*puVar20;
                    puVar38[4] = 0;
                    puVar38[5] = 0;
                    puVar38[6] = 0;
                    puVar38[7] = 0;
                    puVar38[0] = 0;
                    puVar38[1] = 0;
                    puVar38[2] = 0;
                    puVar38[3] = 0;
                    puVar38[1] = *(uint *)(param_2 + 0x548);
                    iVar15 = *(int *)(param_2 + 0x548);
                    lVar48 = (long)iVar15;
                    if ((int)(*(uint *)(param_2 + 0x54c) & 0x7fffffff) <= iVar15) {
                      FUN_031c25b4(param_2 + 0x540,PTR_PTR_047d1a50,lVar48 + 1);
                      iVar15 = *(int *)(param_2 + 0x548);
                    }
                    *(uint **)(*(long *)(param_2 + 0x540) + (long)iVar15 * 8) = puVar38;
                    *(int *)(param_2 + 0x548) = (int)(lVar48 + 1);
                    *(uint **)(puVar46 + 2) = puVar38;
                    uVar51 = *puVar38;
                    puVar46 = puVar38;
                  } while (iVar54 <= (int)(uVar51 >> 0x10));
                }
                do {
                  cVar6 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar38,0x10);
                  if (bVar8) {
                    *puVar38 = *puVar38 + ((uint)uVar5 << 0x10 | 1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                uVar9 = (uint)(uVar5 >> 2);
                *(int *)(param_2 + 0x538) = *(int *)(param_2 + 0x538) + 1;
                if (uVar9 != 0) {
                  puVar26 = (undefined4 *)((long)puVar38 + (ulong)(uVar51 >> 0x10) + 0x20);
                  uVar51 = uVar5 >> 2 & 7;
                  if (6 < uVar9 - 1) {
                    iVar54 = -(uVar9 & 0x3ff8);
                    puVar25 = puVar26;
                    do {
                      *puVar25 = *(undefined4 *)puVar45;
                      puVar25[1] = *(undefined4 *)(puVar45 + 2);
                      puVar25[2] = *(undefined4 *)(puVar45 + 4);
                      puVar25[3] = *(undefined4 *)(puVar45 + 6);
                      puVar25[4] = *(undefined4 *)(puVar45 + 8);
                      puVar25[5] = *(undefined4 *)(puVar45 + 10);
                      puVar25[6] = *(undefined4 *)(puVar45 + 0xc);
                      puVar2 = puVar45 + 0xe;
                      puVar45 = puVar45 + 0x10;
                      puVar26 = puVar25 + 8;
                      iVar54 = iVar54 + 8;
                      puVar25[7] = *(undefined4 *)puVar2;
                      puVar25 = puVar26;
                    } while (iVar54 != 0);
                  }
                  if ((uVar5 >> 2 & 7) != 0) {
                    do {
                      uVar51 = uVar51 - 1;
                      *puVar26 = *(undefined4 *)puVar45;
                      puVar26 = puVar26 + 1;
                      puVar45 = puVar45 + 2;
                    } while (uVar51 != 0);
                  }
                }
                lVar27 = lVar27 + 1;
              } while (lVar27 < (int)param_1[0x6b]);
            }
            *(undefined4 *)(param_1 + 0x6b) = 0;
          }
          else {
            iVar15 = (int)plVar43[1];
            iVar54 = iVar15 + 1;
            local_870 = 0;
            local_86c = 0x80000100;
            local_878 = local_868;
            if (0xff < iVar15) {
              FUN_02e9b320(&local_878,PTR_PTR_047d1a50 + 0x20,iVar54);
            }
            if (local_870 <= iVar15 || iVar54 < local_870) {
              local_870 = iVar54;
            }
            local_890 = local_878 + local_870;
            local_898 = local_878;
            if ((0 < local_870) && (*local_878 = 0xffffffff, 1 < local_870)) {
              lVar48 = 1;
              do {
                local_878[lVar48] = 0xffffffff;
                lVar48 = lVar48 + 1;
              } while (lVar48 < local_870);
            }
            local_884 = 0xffffffff00000000;
            lVar48 = *param_1;
            local_ca8 = (uint *)0x0;
            local_ca0 = 0x8000000000000000;
            local_888 = local_870;
            if (0 < (int)plVar43[3]) {
              lVar53 = 0;
              do {
                lVar29 = *(long *)(plVar43[2] + lVar53 * 8);
                if (*(char *)(lVar29 + 0x18) != '\0') {
                  uVar9 = *(uint *)(lVar29 + 0x10);
                  uVar17 = (ulong)uVar9;
                  uVar21 = *(uint *)(lVar29 + 0x14);
                  uVar18 = (ulong)uVar21;
                  uVar19 = uVar18 & 0xffffff;
                  uVar14 = (uint)uVar19;
                  if (((uVar14 == 0xffffff) || (uVar35 = *(uint *)(lVar48 + 0x40), uVar35 <= uVar14)
                      ) || ((lVar32 = *(long *)(lVar48 + 0x38),
                            (*(byte *)(lVar32 + uVar19 * 0xc0 + 0x54) & 3) == 0 ||
                            (((*(uint *)(lVar32 + uVar19 * 0xc0 + 0x50) != uVar21 ||
                              ((*(byte *)(lVar32 + (uVar18 & 0xffffff) * 0xc0 + 0x88) & 1) == 0)) ||
                             ((*(byte *)(lVar32 + (uVar18 & 0xffffff) * 0xc0 + 0x58) & 0x11) != 0)))
                            ))) {
                    uVar33 = uVar17 & 0xffffff;
                    if ((uint)uVar33 == 0xffffff) {
                      uVar33 = 0xffffff;
LAB_02f59df8:
                      uVar31 = (uint)uVar33;
                      if (uVar14 == 0xffffff) goto LAB_02f5a348;
                      uVar35 = *(uint *)(lVar48 + 0x40);
                      goto LAB_02f59e04;
                    }
                    uVar35 = *(uint *)(lVar48 + 0x40);
                    if ((((uint)uVar33 < uVar35) &&
                        ((*(byte *)(*(long *)(lVar48 + 0x38) + uVar33 * 0xc0 + 0x54) & 3) != 0)) &&
                       (*(uint *)(*(long *)(lVar48 + 0x38) + uVar33 * 0xc0 + 0x50) == uVar9)) {
                      if ((uVar14 <= *(uint *)(lVar48 + 0x5c)) &&
                         ((*(byte *)(*(long *)(lVar48 + 0x38) + uVar19 * 0xc0 + 0x59) >> 3 & 1) == 0
                         )) {
                        uVar35 = *(uint *)(lVar48 + 0x40);
                        goto LAB_02f59dac;
                      }
                      if (((*(byte *)(*(long *)(lVar48 + 0x38) + uVar33 * 0xc0 + 0x54) & 9) != 0) ||
                         ((*(byte *)(lVar29 + 0x1f) >> 3 & 1) == 0)) goto LAB_02f59f84;
                      if (0 < (int)*(uint *)(plVar43 + 1)) {
                        uVar18 = 0;
                        do {
                          if (*(uint *)(*plVar43 + uVar18 * 4) == uVar9) goto LAB_02f59d5c;
                          uVar18 = uVar18 + 1;
                        } while (*(uint *)(plVar43 + 1) != uVar18);
                      }
                      uVar18 = 0xffffffff;
LAB_02f59d5c:
                      uVar33 = 0;
                      do {
                        uVar11 = uVar33;
                        uVar33 = (ulong)local_898[uVar11];
                      } while (-1 < (int)local_898[uVar11]);
                      uVar35 = (int)uVar18 + 1;
                      puVar46 = local_898;
                      uVar31 = *local_898;
                      if ((int)*local_898 < 0) {
                        uVar36 = 0;
                      }
                      else {
                        do {
                          uVar36 = uVar31;
                          *puVar46 = (uint)uVar11;
                          puVar46 = local_898 + uVar36;
                          uVar31 = *puVar46;
                        } while (-1 < (int)*puVar46);
                      }
                      uVar31 = uVar35;
                      do {
                        uVar39 = uVar31;
                        uVar31 = local_898[(int)uVar39];
                      } while (-1 < (int)local_898[(int)uVar39]);
                      uVar18 = (ulong)(int)uVar35;
                      while( true ) {
                        uVar31 = local_898[uVar18];
                        if ((int)uVar31 < 0) break;
                        local_898[uVar18] = uVar39;
                        uVar18 = (ulong)uVar31;
                        uVar35 = uVar31;
                      }
                      goto LAB_02f59f44;
                    }
LAB_02f59dac:
                    if ((((uVar35 <= (uint)uVar33) ||
                         (lVar32 = *(long *)(lVar48 + 0x38),
                         (*(byte *)(lVar32 + uVar33 * 0xc0 + 0x54) & 3) == 0)) ||
                        (*(uint *)(lVar32 + uVar33 * 0xc0 + 0x50) != uVar9)) ||
                       (((*(byte *)(lVar32 + (uVar17 & 0xffffff) * 0xc0 + 0x88) & 1) == 0 ||
                        ((*(byte *)(lVar32 + (uVar17 & 0xffffff) * 0xc0 + 0x58) & 0x11) != 0))))
                    goto LAB_02f59df8;
LAB_02f59f84:
                    if (uVar14 == 0xffffff) goto LAB_02f5a348;
                  }
                  else {
                    uVar33 = (ulong)(uVar9 & 0xffffff);
                    if ((uVar9 & 0xffffff) != 0xffffff) goto LAB_02f59dac;
                    uVar31 = 0xffffff;
LAB_02f59e04:
                    if ((((uVar14 < uVar35) &&
                         ((*(byte *)(*(long *)(lVar48 + 0x38) + uVar19 * 0xc0 + 0x54) & 3) != 0)) &&
                        ((*(uint *)(*(long *)(lVar48 + 0x38) + uVar19 * 0xc0 + 0x50) == uVar21 &&
                         (((*(uint *)(lVar48 + 0x5c) < uVar31 ||
                           ((*(byte *)(*(long *)(lVar48 + 0x38) + (ulong)uVar31 * 0xc0 + 0x59) >> 3
                            & 1) != 0)) &&
                          ((*(byte *)(*(long *)(lVar48 + 0x38) + (uVar18 & 0xffffff) * 0xc0 + 0x54)
                           & 9) == 0)))))) && ((*(byte *)(lVar29 + 0x1f) >> 3 & 1) != 0)) {
                      if (0 < (int)*(uint *)(plVar43 + 1)) {
                        uVar18 = 0;
                        do {
                          if (*(uint *)(*plVar43 + uVar18 * 4) == uVar21) goto LAB_02f59e9c;
                          uVar18 = uVar18 + 1;
                        } while (*(uint *)(plVar43 + 1) != uVar18);
                      }
                      uVar18 = 0xffffffff;
LAB_02f59e9c:
                      uVar33 = 0;
                      do {
                        uVar11 = uVar33;
                        uVar33 = (ulong)local_898[uVar11];
                      } while (-1 < (int)local_898[uVar11]);
                      uVar35 = (int)uVar18 + 1;
                      puVar46 = local_898;
                      uVar31 = *local_898;
                      if ((int)*local_898 < 0) {
                        uVar36 = 0;
                      }
                      else {
                        do {
                          uVar36 = uVar31;
                          *puVar46 = (uint)uVar11;
                          puVar46 = local_898 + uVar36;
                          uVar31 = *puVar46;
                        } while (-1 < (int)*puVar46);
                      }
                      uVar31 = uVar35;
                      do {
                        uVar39 = uVar31;
                        uVar31 = local_898[(int)uVar39];
                      } while (-1 < (int)local_898[(int)uVar39]);
                      uVar18 = (ulong)(int)uVar35;
                      while( true ) {
                        uVar31 = local_898[uVar18];
                        if ((int)uVar31 < 0) break;
                        local_898[uVar18] = uVar39;
                        uVar18 = (ulong)uVar31;
                        uVar35 = uVar31;
                      }
LAB_02f59f44:
                      if (uVar36 != uVar35) {
                        if ((int)uVar36 < (int)uVar35) {
                          local_898[(int)uVar36] = local_898[(int)uVar35] + local_898[(int)uVar36];
                          local_898[(int)uVar35] = uVar36;
                        }
                        else {
                          local_898[(int)uVar35] = local_898[(int)uVar35] + local_898[(int)uVar36];
                          local_898[(int)uVar36] = uVar35;
                        }
                      }
                      goto LAB_02f59f84;
                    }
                  }
                  if (uVar14 < *(uint *)(lVar48 + 0x40)) {
                    lVar29 = *(long *)(lVar48 + 0x38);
                    puVar46 = (uint *)(lVar29 + uVar19 * 0xc0 + 0x54);
                    uVar14 = *puVar46;
                    if (((uVar14 & 3) != 0) && (*(uint *)(lVar29 + uVar19 * 0xc0 + 0x50) == uVar21))
                    {
                      uVar17 = uVar17 & 0xffffff;
                      if (((uint)uVar17 != 0xffffff) && ((uint)uVar17 < *(uint *)(lVar48 + 0x40))) {
                        puVar38 = (uint *)(lVar29 + uVar17 * 0xc0 + 0x54);
                        uVar35 = *puVar38;
                        if (((uVar35 & 3) != 0) &&
                           (*(uint *)(lVar29 + uVar17 * 0xc0 + 0x50) == uVar9)) {
                          uVar31 = *(uint *)(plVar43 + 1);
                          if ((int)uVar31 < 1) {
                            uVar18 = 0;
                          }
                          else {
                            uVar18 = 0;
                            do {
                              if (*(uint *)(*plVar43 + uVar18 * 4) == uVar21) goto LAB_02f5a020;
                              uVar18 = uVar18 + 1;
                            } while (uVar31 != uVar18);
                            uVar18 = 0xffffffff;
LAB_02f5a020:
                            uVar33 = 0;
                            uVar18 = (ulong)((int)uVar18 + 1);
                            do {
                              if (*(uint *)(*plVar43 + uVar33 * 4) == uVar9) goto LAB_02f5a04c;
                              uVar33 = uVar33 + 1;
                            } while (uVar31 != uVar33);
                          }
                          uVar33 = 0xffffffff;
LAB_02f5a04c:
                          cVar6 = *(char *)(lVar29 + uVar19 * 0xc0 + 0x96);
                          cVar7 = *(char *)(lVar29 + uVar17 * 0xc0 + 0x96);
                          uVar33 = (long)(int)uVar33 + 1;
                          if ((uVar14 >> 3 & 1) != 0) {
                            uVar11 = 0;
                            do {
                              uVar41 = uVar11;
                              uVar11 = (ulong)local_898[uVar41];
                            } while (-1 < (int)local_898[uVar41]);
                            puVar23 = local_898;
                            uVar9 = *local_898;
                            if ((int)*local_898 < 0) {
                              uVar21 = 0;
                            }
                            else {
                              do {
                                uVar21 = uVar9;
                                *puVar23 = (uint)uVar41;
                                puVar23 = local_898 + uVar21;
                                uVar9 = *puVar23;
                              } while (-1 < (int)*puVar23);
                            }
                            uVar11 = uVar18;
                            do {
                              uVar9 = (uint)uVar11;
                              uVar11 = (ulong)local_898[(int)uVar9];
                            } while (-1 < (int)local_898[(int)uVar9]);
                            puVar23 = local_898 + (int)uVar18;
                            uVar14 = *puVar23;
                            uVar11 = uVar18;
                            while (-1 < (int)uVar14) {
                              *puVar23 = uVar9;
                              puVar23 = local_898 + uVar14;
                              uVar11 = (ulong)uVar14;
                              uVar14 = *puVar23;
                            }
                            uVar9 = (uint)uVar11;
                            if (uVar21 != uVar9) {
                              lVar32 = (long)(int)uVar21;
                              lVar13 = (long)(int)uVar9;
                              if ((int)uVar21 < (int)uVar9) {
                                local_898[lVar32] = local_898[(int)uVar9] + local_898[(int)uVar21];
                                uVar9 = uVar21;
                                lVar32 = lVar13;
                              }
                              else {
                                local_898[lVar13] = local_898[(int)uVar9] + local_898[(int)uVar21];
                              }
                              local_898[lVar32] = uVar9;
                            }
                            uVar35 = *puVar38;
                          }
                          if ((uVar35 >> 3 & 1) != 0) {
                            uVar11 = 0;
                            do {
                              uVar41 = uVar11;
                              uVar11 = (ulong)local_898[uVar41];
                            } while (-1 < (int)local_898[uVar41]);
                            puVar23 = local_898;
                            uVar9 = *local_898;
                            if ((int)*local_898 < 0) {
                              uVar21 = 0;
                            }
                            else {
                              do {
                                uVar21 = uVar9;
                                *puVar23 = (uint)uVar41;
                                puVar23 = local_898 + uVar21;
                                uVar9 = *puVar23;
                              } while (-1 < (int)*puVar23);
                            }
                            uVar11 = uVar33 & 0xffffffff;
                            do {
                              uVar9 = (uint)uVar11;
                              uVar11 = (ulong)local_898[(int)uVar9];
                            } while (-1 < (int)local_898[(int)uVar9]);
                            puVar23 = local_898 + (int)(uint)uVar33;
                            uVar35 = *puVar23;
                            uVar14 = (uint)uVar33;
                            while (uVar31 = uVar35, -1 < (int)uVar31) {
                              *puVar23 = uVar9;
                              puVar23 = local_898 + uVar31;
                              uVar14 = uVar31;
                              uVar35 = *puVar23;
                            }
                            if (uVar21 != uVar14) {
                              if ((int)uVar21 < (int)uVar14) {
                                local_898[(int)uVar21] =
                                     local_898[(int)uVar14] + local_898[(int)uVar21];
                                local_898[(int)uVar14] = uVar21;
                              }
                              else {
                                local_898[(int)uVar14] =
                                     local_898[(int)uVar14] + local_898[(int)uVar21];
                                local_898[(int)uVar21] = uVar14;
                              }
                            }
                          }
                          if (((((*(byte *)puVar46 >> 1 & 1) != 0) &&
                               ((*(byte *)puVar38 >> 1 & 1) != 0)) &&
                              ((*(byte *)(lVar29 + uVar19 * 0xc0 + 0x88) & 1) != 0)) &&
                             ((((*(byte *)(lVar29 + uVar17 * 0xc0 + 0x88) & 1) != 0 &&
                               (*(char *)(*(long *)(param_2 + 0x20) +
                                          (ulong)*(ushort *)(lVar29 + uVar19 * 0xc0 + 0x8a) * 0x50 +
                                         0x18) == '\0')) &&
                              (*(char *)(*(long *)(param_2 + 0x20) +
                                         (ulong)*(ushort *)(lVar29 + uVar17 * 0xc0 + 0x8a) * 0x50 +
                                        0x18) == '\0')))) {
                            if (cVar6 == cVar7) {
                              uVar17 = uVar18;
                              do {
                                uVar9 = (uint)uVar17;
                                uVar17 = (ulong)local_898[(int)uVar9];
                              } while (-1 < (int)local_898[(int)uVar9]);
                              uVar17 = (ulong)(int)uVar18;
                              while( true ) {
                                uVar21 = local_898[uVar17];
                                if ((int)uVar21 < 0) break;
                                local_898[uVar17] = uVar9;
                                uVar17 = (ulong)uVar21;
                                uVar18 = (ulong)uVar21;
                              }
                              uVar17 = uVar33 & 0xffffffff;
                              do {
                                uVar9 = (uint)uVar17;
                                uVar17 = (ulong)local_898[(int)uVar9];
                              } while (-1 < (int)local_898[(int)uVar9]);
                              while( true ) {
                                uVar21 = local_898[uVar33];
                                if ((int)uVar21 < 0) break;
                                local_898[uVar33] = uVar9;
                                uVar33 = (ulong)uVar21;
                              }
                              uVar9 = (uint)uVar33;
                              uVar21 = (uint)uVar18;
                              if (uVar21 != uVar9) {
                                if ((int)uVar21 < (int)uVar9) {
                                  local_898[(int)uVar21] =
                                       local_898[(int)uVar9] + local_898[(int)uVar21];
                                  local_898[(int)uVar9] = uVar21;
                                }
                                else {
                                  local_898[(int)uVar9] =
                                       local_898[(int)uVar9] + local_898[(int)uVar21];
                                  local_898[(int)uVar21] = uVar9;
                                }
                              }
                            }
                            else {
                              if (cVar7 < cVar6) {
                                uVar18 = uVar18 | uVar33 << 0x20;
                              }
                              else {
                                uVar18 = uVar33 & 0xffffffff | uVar18 << 0x20;
                              }
                              lVar29 = (long)(int)local_ca0;
                              if ((int)(local_ca0._4_4_ & 0x7fffffff) <= (int)local_ca0) {
                                FUN_02f5eea4(&local_ca8,lVar29 + 1);
                              }
                              *(ulong *)(local_ca8 + (long)(int)local_ca0 * 2) = uVar18;
                              local_ca0 = CONCAT44(local_ca0._4_4_,(int)(lVar29 + 1));
                            }
                          }
                        }
                      }
                    }
                  }
                }
LAB_02f5a348:
                lVar53 = lVar53 + 1;
              } while (lVar53 < (int)plVar43[3]);
            }
            if (*(int *)(lVar48 + 0x5bc) == (int)plVar43[10]) {
              iVar54 = (int)plVar43[7];
              if (0 < iVar54) {
                lVar29 = *(long *)(lVar48 + 0x488);
                lVar53 = 0;
                do {
                  plVar12 = (long *)(plVar43[6] + lVar53 * 0x10);
                  plVar47 = plVar12 + 1;
                  if (0 < (int)*plVar47) {
                    lVar32 = 0;
                    do {
                      uVar9 = *(uint *)(*plVar12 + lVar32 * 0xc + 4);
                      lVar13 = (long)(int)uVar9;
                      if (((uVar9 != 0x7fffffff) && (uVar9 < *(uint *)(lVar29 + 0x10))) &&
                         ((lVar24 = *(long *)(lVar29 + 8),
                          (*(byte *)(lVar24 + lVar13 * 0x68 + 0x42) >> 2 & 1) != 0 &&
                          (((~*(uint *)(lVar24 + lVar13 * 0x68 + 8) & 0xffffff) != 0 ||
                           ((~*(uint *)(lVar24 + lVar13 * 0x68 + 0x18) & 0xffffff) != 0)))))) {
                        uVar17 = *(ulong *)(lVar24 + lVar13 * 0x68 + 8);
                        uVar9 = (uint)uVar17;
                        if ((~uVar9 & 0xffffff) != 0) {
                          uVar18 = *(ulong *)(lVar24 + lVar13 * 0x68 + 0x18);
                          uVar21 = (uint)uVar18;
                          if ((~uVar21 & 0xffffff) != 0) {
                            uVar14 = *(uint *)(plVar43 + 1);
                            uVar18 = uVar18 & 0xffffff;
                            lVar13 = *(long *)(lVar48 + 0x38);
                            if ((int)uVar14 < 1) {
                              uVar19 = 0;
                            }
                            else {
                              uVar19 = 0;
                              do {
                                if (*(uint *)(*plVar43 + uVar19 * 4) == uVar9) goto LAB_02f5a480;
                                uVar19 = uVar19 + 1;
                              } while (uVar14 != uVar19);
                              uVar19 = 0xffffffff;
LAB_02f5a480:
                              uVar33 = 0;
                              uVar19 = (ulong)((int)uVar19 + 1);
                              do {
                                if (*(uint *)(*plVar43 + uVar33 * 4) == uVar21) goto LAB_02f5a4b0;
                                uVar33 = uVar33 + 1;
                              } while (uVar14 != uVar33);
                            }
                            uVar33 = 0xffffffff;
LAB_02f5a4b0:
                            lVar24 = lVar13 + (uVar17 & 0xffffff) * 0xc0;
                            uVar17 = (long)(int)uVar33 + 1;
                            pbVar34 = (byte *)(lVar24 + 0x54);
                            cVar6 = *(char *)(lVar24 + 0x96);
                            cVar7 = *(char *)(lVar13 + uVar18 * 0xc0 + 0x96);
                            if ((*pbVar34 >> 3 & 1) != 0) {
                              uVar33 = 0;
                              do {
                                uVar11 = uVar33;
                                uVar33 = (ulong)local_898[uVar11];
                              } while (-1 < (int)local_898[uVar11]);
                              puVar46 = local_898;
                              uVar9 = *local_898;
                              if ((int)*local_898 < 0) {
                                uVar21 = 0;
                              }
                              else {
                                do {
                                  uVar21 = uVar9;
                                  *puVar46 = (uint)uVar11;
                                  puVar46 = local_898 + uVar21;
                                  uVar9 = *puVar46;
                                } while (-1 < (int)*puVar46);
                              }
                              uVar33 = uVar19;
                              do {
                                uVar9 = (uint)uVar33;
                                uVar33 = (ulong)local_898[(int)uVar9];
                              } while (-1 < (int)local_898[(int)uVar9]);
                              puVar46 = local_898 + (int)uVar19;
                              uVar14 = *puVar46;
                              uVar33 = uVar19;
                              while (-1 < (int)uVar14) {
                                *puVar46 = uVar9;
                                puVar46 = local_898 + uVar14;
                                uVar33 = (ulong)uVar14;
                                uVar14 = *puVar46;
                              }
                              uVar9 = (uint)uVar33;
                              if (uVar21 != uVar9) {
                                if ((int)uVar21 < (int)uVar9) {
                                  local_898[(int)uVar21] =
                                       local_898[(int)uVar9] + local_898[(int)uVar21];
                                  local_898[(int)uVar9] = uVar21;
                                }
                                else {
                                  local_898[(int)uVar9] =
                                       local_898[(int)uVar9] + local_898[(int)uVar21];
                                  local_898[(int)uVar21] = uVar9;
                                }
                              }
                            }
                            pbVar37 = (byte *)(lVar13 + uVar18 * 0xc0 + 0x54);
                            if ((*pbVar37 >> 3 & 1) != 0) {
                              uVar18 = 0;
                              do {
                                uVar33 = uVar18;
                                uVar18 = (ulong)local_898[uVar33];
                              } while (-1 < (int)local_898[uVar33]);
                              puVar46 = local_898;
                              uVar9 = *local_898;
                              if ((int)*local_898 < 0) {
                                uVar21 = 0;
                              }
                              else {
                                do {
                                  uVar21 = uVar9;
                                  *puVar46 = (uint)uVar33;
                                  puVar46 = local_898 + uVar21;
                                  uVar9 = *puVar46;
                                } while (-1 < (int)*puVar46);
                              }
                              uVar18 = uVar17 & 0xffffffff;
                              do {
                                uVar9 = (uint)uVar18;
                                uVar18 = (ulong)local_898[(int)uVar9];
                              } while (-1 < (int)local_898[(int)uVar9]);
                              puVar46 = local_898 + (int)(uint)uVar17;
                              uVar35 = *puVar46;
                              uVar14 = (uint)uVar17;
                              while (uVar31 = uVar35, -1 < (int)uVar31) {
                                *puVar46 = uVar9;
                                puVar46 = local_898 + uVar31;
                                uVar14 = uVar31;
                                uVar35 = *puVar46;
                              }
                              if (uVar21 != uVar14) {
                                if ((int)uVar21 < (int)uVar14) {
                                  local_898[(int)uVar21] =
                                       local_898[(int)uVar14] + local_898[(int)uVar21];
                                  local_898[(int)uVar14] = uVar21;
                                }
                                else {
                                  local_898[(int)uVar14] =
                                       local_898[(int)uVar14] + local_898[(int)uVar21];
                                  local_898[(int)uVar21] = uVar14;
                                }
                              }
                            }
                            if (((*pbVar34 & 1) == 0) && ((*pbVar37 & 1) == 0)) {
                              if (cVar6 == cVar7) {
                                uVar18 = uVar19;
                                do {
                                  uVar9 = (uint)uVar18;
                                  uVar18 = (ulong)local_898[(int)uVar9];
                                } while (-1 < (int)local_898[(int)uVar9]);
                                uVar18 = (ulong)(int)uVar19;
                                while( true ) {
                                  uVar21 = local_898[uVar18];
                                  if ((int)uVar21 < 0) break;
                                  local_898[uVar18] = uVar9;
                                  uVar18 = (ulong)uVar21;
                                  uVar19 = (ulong)uVar21;
                                }
                                uVar18 = uVar17 & 0xffffffff;
                                do {
                                  uVar9 = (uint)uVar18;
                                  uVar18 = (ulong)local_898[(int)uVar9];
                                } while (-1 < (int)local_898[(int)uVar9]);
                                while( true ) {
                                  uVar21 = local_898[uVar17];
                                  if ((int)uVar21 < 0) break;
                                  local_898[uVar17] = uVar9;
                                  uVar17 = (ulong)uVar21;
                                }
                                uVar9 = (uint)uVar19;
                                uVar21 = (uint)uVar17;
                                if (uVar9 != uVar21) {
                                  if ((int)uVar9 < (int)uVar21) {
                                    local_898[(int)uVar9] =
                                         local_898[(int)uVar21] + local_898[(int)uVar9];
                                    local_898[(int)uVar21] = uVar9;
                                  }
                                  else {
                                    local_898[(int)uVar21] =
                                         local_898[(int)uVar21] + local_898[(int)uVar9];
                                    local_898[(int)uVar9] = uVar21;
                                  }
                                }
                              }
                              else {
                                if (cVar7 < cVar6) {
                                  uVar19 = uVar19 | uVar17 << 0x20;
                                }
                                else {
                                  uVar19 = uVar17 & 0xffffffff | uVar19 << 0x20;
                                }
                                lVar13 = (long)(int)local_ca0;
                                if ((int)(local_ca0._4_4_ & 0x7fffffff) <= (int)local_ca0) {
                                  FUN_02f5eea4(&local_ca8,lVar13 + 1);
                                }
                                *(ulong *)(local_ca8 + (long)(int)local_ca0 * 2) = uVar19;
                                local_ca0 = CONCAT44(local_ca0._4_4_,(int)(lVar13 + 1));
                              }
                            }
                          }
                        }
                      }
                      lVar32 = lVar32 + 1;
                    } while (lVar32 < (int)*plVar47);
                    iVar54 = (int)plVar43[7];
                  }
                  lVar53 = lVar53 + 1;
                } while (lVar53 < iVar54);
              }
            }
            else {
              *(undefined4 *)(plVar43 + 7) = 0;
            }
            if (0 < (int)plVar43[0xc]) {
              lVar53 = 0;
              do {
                puVar46 = (uint *)(plVar43[0xb] + lVar53 * 8);
                uVar9 = puVar46[1];
                lVar29 = *(long *)(lVar48 + 0x38);
                uVar17 = (ulong)uVar9 & 0xffffff;
                uVar21 = *(uint *)(lVar29 + uVar17 * 0xc0 + 0x54);
                if ((uVar21 & 3) != 0) {
                  uVar14 = *puVar46;
                  uVar18 = (ulong)uVar14 & 0xffffff;
                  puVar46 = (uint *)(lVar29 + uVar18 * 0xc0 + 0x54);
                  uVar35 = *puVar46;
                  if ((((uVar35 & 3) != 0) && (*(uint *)(lVar29 + uVar17 * 0xc0 + 0x50) == uVar9))
                     && (*(uint *)(lVar29 + uVar18 * 0xc0 + 0x50) == uVar14)) {
                    uVar31 = *(uint *)(plVar43 + 1);
                    if ((int)uVar31 < 1) {
                      uVar19 = 0;
                    }
                    else {
                      uVar19 = 0;
                      do {
                        if (*(uint *)(*plVar43 + uVar19 * 4) == uVar9) goto LAB_02f5ad2c;
                        uVar19 = uVar19 + 1;
                      } while (uVar31 != uVar19);
                      uVar19 = 0xffffffff;
LAB_02f5ad2c:
                      uVar33 = 0;
                      uVar19 = (ulong)((int)uVar19 + 1);
                      do {
                        if (*(uint *)(*plVar43 + uVar33 * 4) == uVar14) goto LAB_02f5ad58;
                        uVar33 = uVar33 + 1;
                      } while (uVar31 != uVar33);
                    }
                    uVar33 = 0xffffffff;
LAB_02f5ad58:
                    cVar6 = *(char *)(lVar29 + uVar17 * 0xc0 + 0x96);
                    cVar7 = *(char *)(lVar29 + uVar18 * 0xc0 + 0x96);
                    uVar33 = (long)(int)uVar33 + 1;
                    if ((uVar21 >> 3 & 1) != 0) {
                      uVar11 = 0;
                      do {
                        uVar41 = uVar11;
                        uVar11 = (ulong)local_898[uVar41];
                      } while (-1 < (int)local_898[uVar41]);
                      puVar38 = local_898;
                      uVar9 = *local_898;
                      if ((int)*local_898 < 0) {
                        uVar21 = 0;
                      }
                      else {
                        do {
                          uVar21 = uVar9;
                          *puVar38 = (uint)uVar41;
                          puVar38 = local_898 + uVar21;
                          uVar9 = *puVar38;
                        } while (-1 < (int)*puVar38);
                      }
                      uVar11 = uVar19;
                      do {
                        uVar9 = (uint)uVar11;
                        uVar11 = (ulong)local_898[(int)uVar9];
                      } while (-1 < (int)local_898[(int)uVar9]);
                      puVar38 = local_898 + (int)uVar19;
                      uVar14 = *puVar38;
                      uVar11 = uVar19;
                      while (-1 < (int)uVar14) {
                        *puVar38 = uVar9;
                        puVar38 = local_898 + uVar14;
                        uVar11 = (ulong)uVar14;
                        uVar14 = *puVar38;
                      }
                      uVar9 = (uint)uVar11;
                      if (uVar21 != uVar9) {
                        lVar32 = (long)(int)uVar21;
                        lVar13 = (long)(int)uVar9;
                        if ((int)uVar21 < (int)uVar9) {
                          local_898[lVar32] = local_898[(int)uVar9] + local_898[(int)uVar21];
                          uVar9 = uVar21;
                          lVar32 = lVar13;
                        }
                        else {
                          local_898[lVar13] = local_898[(int)uVar9] + local_898[(int)uVar21];
                        }
                        local_898[lVar32] = uVar9;
                      }
                      uVar35 = *puVar46;
                    }
                    if ((uVar35 >> 3 & 1) != 0) {
                      uVar11 = 0;
                      do {
                        uVar41 = uVar11;
                        uVar11 = (ulong)local_898[uVar41];
                      } while (-1 < (int)local_898[uVar41]);
                      puVar46 = local_898;
                      uVar9 = *local_898;
                      if ((int)*local_898 < 0) {
                        uVar21 = 0;
                      }
                      else {
                        do {
                          uVar21 = uVar9;
                          *puVar46 = (uint)uVar41;
                          puVar46 = local_898 + uVar21;
                          uVar9 = *puVar46;
                        } while (-1 < (int)*puVar46);
                      }
                      uVar11 = uVar33 & 0xffffffff;
                      do {
                        uVar9 = (uint)uVar11;
                        uVar11 = (ulong)local_898[(int)uVar9];
                      } while (-1 < (int)local_898[(int)uVar9]);
                      puVar46 = local_898 + (int)(uint)uVar33;
                      uVar35 = *puVar46;
                      uVar14 = (uint)uVar33;
                      while (uVar31 = uVar35, -1 < (int)uVar31) {
                        *puVar46 = uVar9;
                        puVar46 = local_898 + uVar31;
                        uVar14 = uVar31;
                        uVar35 = *puVar46;
                      }
                      if (uVar21 != uVar14) {
                        if ((int)uVar21 < (int)uVar14) {
                          local_898[(int)uVar21] = local_898[(int)uVar14] + local_898[(int)uVar21];
                          local_898[(int)uVar14] = uVar21;
                        }
                        else {
                          local_898[(int)uVar14] = local_898[(int)uVar14] + local_898[(int)uVar21];
                          local_898[(int)uVar21] = uVar14;
                        }
                      }
                    }
                    if ((((*(byte *)(lVar29 + uVar17 * 0xc0 + 0x88) & 1) != 0) &&
                        ((*(byte *)(lVar29 + uVar18 * 0xc0 + 0x88) & 1) != 0)) &&
                       ((*(char *)(*(long *)(param_2 + 0x20) +
                                   (ulong)*(ushort *)(lVar29 + uVar17 * 0xc0 + 0x8a) * 0x50 + 0x18)
                         == '\0' &&
                        (*(char *)(*(long *)(param_2 + 0x20) +
                                   (ulong)*(ushort *)(lVar29 + uVar18 * 0xc0 + 0x8a) * 0x50 + 0x18)
                         == '\0')))) {
                      if (cVar6 == cVar7) {
                        uVar17 = uVar19;
                        do {
                          uVar9 = (uint)uVar17;
                          uVar17 = (ulong)local_898[(int)uVar9];
                        } while (-1 < (int)local_898[(int)uVar9]);
                        uVar17 = (ulong)(int)uVar19;
                        while( true ) {
                          uVar21 = local_898[uVar17];
                          if ((int)uVar21 < 0) break;
                          local_898[uVar17] = uVar9;
                          uVar17 = (ulong)uVar21;
                          uVar19 = (ulong)uVar21;
                        }
                        uVar17 = uVar33 & 0xffffffff;
                        do {
                          uVar9 = (uint)uVar17;
                          uVar17 = (ulong)local_898[(int)uVar9];
                        } while (-1 < (int)local_898[(int)uVar9]);
                        while( true ) {
                          uVar21 = local_898[uVar33];
                          if ((int)uVar21 < 0) break;
                          local_898[uVar33] = uVar9;
                          uVar33 = (ulong)uVar21;
                        }
                        uVar9 = (uint)uVar19;
                        uVar21 = (uint)uVar33;
                        if (uVar9 != uVar21) {
                          if ((int)uVar9 < (int)uVar21) {
                            local_898[(int)uVar9] = local_898[(int)uVar21] + local_898[(int)uVar9];
                            local_898[(int)uVar21] = uVar9;
                          }
                          else {
                            local_898[(int)uVar21] = local_898[(int)uVar21] + local_898[(int)uVar9];
                            local_898[(int)uVar9] = uVar21;
                          }
                        }
                      }
                      else {
                        if (cVar7 < cVar6) {
                          uVar19 = uVar19 | uVar33 << 0x20;
                        }
                        else {
                          uVar19 = uVar33 & 0xffffffff | uVar19 << 0x20;
                        }
                        lVar29 = (long)(int)local_ca0;
                        if ((int)(local_ca0._4_4_ & 0x7fffffff) <= (int)local_ca0) {
                          FUN_02f5eea4(&local_ca8,lVar29 + 1);
                        }
                        *(ulong *)(local_ca8 + (long)(int)local_ca0 * 2) = uVar19;
                        local_ca0 = CONCAT44(local_ca0._4_4_,(int)(lVar29 + 1));
                      }
                    }
                  }
                }
                lVar53 = lVar53 + 1;
              } while (lVar53 < (int)plVar43[0xc]);
            }
            uVar17 = (ulong)*(uint *)(plVar43 + 1);
            if (0 < (int)*(uint *)(plVar43 + 1)) {
              lVar53 = 0;
              do {
                uVar9 = *(uint *)(*plVar43 + lVar53 * 4);
                if (0 < (int)uVar17) {
                  uVar18 = 0;
                  do {
                    if (*(uint *)(*plVar43 + uVar18 * 4) == uVar9) goto LAB_02f5b09c;
                    uVar18 = uVar18 + 1;
                  } while ((uVar17 & 0xffffffff) != uVar18);
                }
                uVar18 = 0xffffffff;
LAB_02f5b09c:
                uVar21 = (int)uVar18 + 1;
                uVar14 = uVar9;
                iVar54 = 0;
                do {
                  if (iVar54 != 0) {
                    if (0 < (int)*(uint *)(plVar43 + 1)) {
                      uVar17 = 0;
                      do {
                        if (*(int *)(*plVar43 + uVar17 * 4) ==
                            *(int *)(*(long *)(lVar48 + 0x38) + (ulong)(uVar14 & 0xffffff) * 0xc0 +
                                    0x50)) goto LAB_02f5b0f8;
                        uVar17 = uVar17 + 1;
                      } while (*(uint *)(plVar43 + 1) != uVar17);
                    }
                    uVar17 = 0xffffffff;
LAB_02f5b0f8:
                    uVar35 = uVar21;
                    do {
                      uVar31 = uVar35;
                      uVar35 = local_898[(int)uVar31];
                    } while (-1 < (int)local_898[(int)uVar31]);
                    puVar46 = local_898 + (int)uVar21;
                    uVar35 = (int)uVar17 + 1;
                    uVar36 = uVar21;
                    uVar39 = *puVar46;
                    while (-1 < (int)uVar39) {
                      *puVar46 = uVar31;
                      puVar46 = local_898 + uVar39;
                      uVar36 = uVar39;
                      uVar39 = *puVar46;
                    }
                    uVar31 = uVar35;
                    do {
                      uVar39 = uVar31;
                      uVar31 = local_898[(int)uVar39];
                    } while (-1 < (int)local_898[(int)uVar39]);
                    uVar17 = (ulong)(int)uVar35;
                    while( true ) {
                      uVar31 = local_898[uVar17];
                      if ((int)uVar31 < 0) break;
                      local_898[uVar17] = uVar39;
                      uVar17 = (ulong)uVar31;
                      uVar35 = uVar31;
                    }
                    if (uVar36 != uVar35) {
                      if ((int)uVar36 < (int)uVar35) {
                        local_898[(int)uVar36] = local_898[(int)uVar35] + local_898[(int)uVar36];
                        local_898[(int)uVar35] = uVar36;
                      }
                      else {
                        local_898[(int)uVar35] = local_898[(int)uVar35] + local_898[(int)uVar36];
                        local_898[(int)uVar36] = uVar35;
                      }
                    }
                  }
                  uVar14 = *(uint *)(*(long *)(lVar48 + 0x38) + (ulong)(uVar14 & 0xffffff) * 0xc0 +
                                    0x84);
                  iVar54 = iVar54 + 1;
                } while (uVar14 != uVar9);
                uVar17 = (ulong)(int)plVar43[1];
                lVar53 = lVar53 + 1;
              } while (lVar53 < (long)uVar17);
            }
            do {
              uVar17 = local_ca0 & 0xffffffff;
              if ((int)local_ca0 < 1) break;
              bVar8 = false;
              uVar18 = uVar17;
              do {
                uVar11 = uVar18 - 1;
                uVar9 = local_ca8[uVar11 * 2];
                uVar21 = (local_ca8 + uVar11 * 2)[1];
                uVar19 = (ulong)(int)uVar9;
                uVar33 = (ulong)(int)uVar21;
                uVar14 = uVar9;
                do {
                  uVar35 = uVar14;
                  uVar14 = local_898[(int)uVar35];
                } while (-1 < (int)local_898[(int)uVar35]);
                while( true ) {
                  uVar14 = local_898[uVar19];
                  if ((int)uVar14 < 0) break;
                  local_898[uVar19] = uVar35;
                  uVar19 = (ulong)uVar14;
                  uVar9 = uVar14;
                }
                if (uVar9 == 0) {
                  uVar9 = uVar21;
                  do {
                    uVar14 = uVar9;
                    uVar9 = local_898[(int)uVar14];
                  } while (-1 < (int)local_898[(int)uVar14]);
                  while( true ) {
                    uVar9 = local_898[uVar33];
                    if ((int)uVar9 < 0) break;
                    local_898[uVar33] = uVar14;
                    uVar33 = (ulong)uVar9;
                    uVar21 = uVar9;
                  }
                  uVar19 = 0;
                  do {
                    uVar33 = uVar19;
                    uVar19 = (ulong)local_898[uVar33];
                  } while (-1 < (int)local_898[uVar33]);
                  uVar9 = *local_898;
                  puVar46 = local_898;
                  if ((int)uVar9 < 0) {
                    uVar14 = 0;
                  }
                  else {
                    do {
                      uVar14 = uVar9;
                      *puVar46 = (uint)uVar33;
                      puVar46 = local_898 + uVar14;
                      uVar9 = *puVar46;
                    } while (-1 < (int)uVar9);
                  }
                  if (uVar21 != uVar14) {
                    uVar19 = (ulong)(int)uVar21;
                    uVar33 = (ulong)uVar14;
                    if ((int)uVar21 < (int)uVar14) {
                      local_898[uVar19] = local_898[(int)uVar21] + uVar9;
                      uVar14 = uVar21;
                      uVar19 = uVar33;
                    }
                    else {
                      local_898[uVar33] = local_898[(int)uVar21] + uVar9;
                    }
                    local_898[uVar19] = uVar14;
                  }
                  iVar54 = (int)local_ca0 + -1;
                  bVar8 = (int)local_ca0 != (int)uVar17;
                  local_ca0 = CONCAT44(local_ca0._4_4_,iVar54);
                  if (bVar8) {
                    *(undefined8 *)(local_ca8 + uVar11 * 2) =
                         *(undefined8 *)(local_ca8 + (long)iVar54 * 2);
                  }
                  bVar8 = true;
                }
                uVar17 = (ulong)((int)uVar17 - 1);
                bVar1 = 1 < (long)uVar18;
                uVar18 = uVar11;
              } while (bVar1);
            } while (bVar8);
            uVar17 = local_ca0;
            uVar18 = (ulong)local_ca0._4_4_;
            local_ca0 = (ulong)local_ca0._4_4_ << 0x20;
            if ((-1 < (long)uVar17) && (local_ca8 != (uint *)0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                        (PTR_PTR_047d1a50 + 0x20,local_ca8,uVar18 << 3);
            }
            local_ca0 = -0x7fffff0000000000;
            if ((int)local_884 == 0) {
              if (local_888 == 0) {
                iVar54 = 0;
              }
              else {
                lVar53 = (long)local_888 * 4 + -4;
                puVar46 = local_898;
                iVar54 = local_888;
                puVar38 = local_468[0];
                puVar23 = local_268;
                lVar48 = local_260;
                if (((uint)lVar53 >> 2 & 1) == 0) {
                  if (-1 < (int)*local_898) {
                    uVar9 = local_898[*local_898];
                    iVar54 = local_888 + -1;
                    if ((int)uVar9 < 0) {
                    }
                    else {
                      do {
                        *local_898 = uVar9;
                        uVar9 = local_898[uVar9];
                      } while (-1 < (int)uVar9);
                    }
                  }
                  puVar46 = local_898 + 1;
                  puVar38 = local_468[0];
                  puVar23 = local_268;
                  lVar48 = local_260;
                }
                local_468[0] = puVar38;
                local_268 = puVar23;
                local_260 = lVar48;
                if (lVar53 != 0) {
                  do {
                    if (-1 < (int)*puVar46) {
                      iVar54 = iVar54 + -1;
                      for (uVar9 = local_898[*puVar46]; -1 < (int)uVar9; uVar9 = local_898[uVar9]) {
                        *puVar46 = uVar9;
                      }
                    }
                    if (-1 < (int)puVar46[1]) {
                      iVar54 = iVar54 + -1;
                      for (uVar9 = local_898[puVar46[1]]; -1 < (int)uVar9; uVar9 = local_898[uVar9])
                      {
                        puVar46[1] = uVar9;
                      }
                    }
                    puVar46 = puVar46 + 2;
                  } while (puVar46 != local_898 + local_888);
                }
              }
              local_884 = CONCAT44(iVar54,1);
            }
            else {
              iVar54 = local_884._4_4_;
            }
            uVar9 = 0x100;
            local_ca8 = local_c98;
            if (0x100 < iVar54) {
              FUN_0133bb88(&local_ca8,PTR_PTR_047d1a50 + 0x20,(long)iVar54);
              uVar9 = local_ca0._4_4_ & 0x7fffffff;
            }
            if ((int)uVar9 < iVar54) {
              FUN_02e9b320(&local_ca8,PTR_PTR_047d1a50 + 0x20,(long)iVar54);
            }
            iVar15 = local_888;
            puVar46 = local_ca8;
            iVar55 = (int)local_ca0;
            if ((int)local_ca0 != iVar54) {
              local_ca0 = CONCAT44(local_ca0._4_4_,iVar54);
              iVar55 = iVar54;
            }
            if (0 < local_888) {
              lVar48 = 0;
              uVar9 = 0;
              do {
                uVar21 = local_898[lVar48];
                if ((int)uVar21 < 0) {
                  local_ca8[(int)uVar9] = -uVar21;
                  local_898[lVar48] = uVar9;
                  uVar9 = uVar9 + 1;
                }
                else {
                  local_898[lVar48] = local_898[uVar21];
                }
                lVar48 = lVar48 + 1;
              } while (lVar48 < local_888);
              iVar55 = (int)local_ca0;
            }
            puVar38 = local_ca8 + iVar55;
            local_10b0._0_4_ = 0;
            local_10b0 = -0x7fffff0000000000;
            local_10b8 = auStack_10a8;
            if (0x100 < local_888) {
              FUN_02e9b320(&local_10b8,PTR_PTR_047d1a50 + 0x20,local_888);
            }
            iVar54 = (int)local_10b0;
            if ((int)local_10b0 != iVar15) {
              local_10b0 = CONCAT44(local_10b0._4_4_,iVar15);
              iVar54 = iVar15;
            }
            FUN_031c1d04(&local_898,puVar46,puVar38,local_10b8,local_10b8 + iVar54);
            *(undefined1 *)(param_1 + 0x6c) = 1;
            uVar9 = *local_ca8;
            local_10e0 = (uint *)0x0;
            local_10d8 = 0x8000000000000000;
            lVar48 = *(long *)(lVar44 + 0x1000b8);
            if (lVar48 == 0) {
              lVar48 = FUN_00e5d3b4();
              *(long *)(lVar44 + 0x1000b8) = lVar48;
            }
            local_10d0 = *(long *)(*(long *)(lVar48 + 0x3d0) + 0x10);
            if (*(long *)(local_10d0 + 8) != 0) {
              local_10d0 = 0;
            }
            local_10c0 = (uint *)((long)(int)uVar9 * 4);
            local_468[0] = local_10c0;
            if (local_10d0 == 0) {
              puVar46 = (uint *)(**(code **)PTR_DAT_047d1a08)(1,local_468,0x40);
            }
            else {
              local_268 = (uint *)((long)local_10c0 + 0x3fU & 0xffffffffffffffc0);
              if (local_268 <= *(uint **)(local_10d0 + 0x28)) {
                puVar46 = *(uint **)(local_10d0 + 0x38);
                if ((ulong)((long)local_268 + (long)puVar46) <= *(ulong *)(local_10d0 + 0x40)) {
                  *(long *)(local_10d0 + 0x38) = (long)local_268 + (long)puVar46;
                  goto LAB_02f5b628;
                }
              }
              puVar46 = (uint *)FUN_031cf3b4(local_10d0,&local_268);
            }
LAB_02f5b628:
            local_10d8 = CONCAT44(uVar9,(uint)local_10d8) | 0x8000000000000000;
            uVar9 = *local_ca8;
            local_10e0 = puVar46;
            local_10c8 = puVar46;
            if (1 < (int)uVar9) {
              lVar48 = 1;
              do {
                uVar21 = *(uint *)(*plVar43 + (long)(int)local_10b8[lVar48] * 4 + -4);
                if (*(char *)(param_1[0x71] +
                              (long)*(int *)(*(long *)(*param_1 + 0x38) +
                                             ((ulong)uVar21 & 0xffffff) * 0xc0 + 0x80) * 0x20 + 0xe)
                    != '\x02') {
                  lVar53 = (long)(int)(uint)local_10d8;
                  if ((int)(local_10d8._4_4_ & 0x7fffffff) <= (int)(uint)local_10d8) {
                    FUN_02f23d90(&local_10e0,PTR_PTR_047d1a50,lVar53 + 1);
                  }
                  local_10e0[(int)(uint)local_10d8] = uVar21;
                  local_10d8 = CONCAT44(local_10d8._4_4_,(int)(lVar53 + 1));
                  uVar9 = *local_ca8;
                }
                lVar48 = lVar48 + 1;
              } while (lVar48 < (int)uVar9);
            }
            if (1 < (int)(uint)local_10d8) {
              puVar46 = local_10e0 + ((uint)local_10d8 - 1);
              uVar9 = 0;
              local_268 = local_10e0;
              local_468[0] = puVar46;
              puVar38 = local_10e0;
LAB_02f5b708:
              lVar48 = (long)(int)uVar9;
LAB_02f5b70c:
              do {
                puVar23 = puVar46;
                do {
                  puVar46 = puVar23;
                  uVar9 = puVar38[(long)puVar46 - (long)puVar38 >> 3];
                  puVar40 = puVar38;
                  puVar23 = puVar46;
                  do {
                    do {
                      puVar22 = puVar40;
                      puVar40 = puVar22 + 1;
                    } while ((*puVar22 & 0xffffff) < (uVar9 & 0xffffff));
                    puVar42 = puVar23 + 1;
                    do {
                      puVar23 = puVar42;
                      puVar42 = puVar23 + -1;
                      uVar21 = *puVar42;
                    } while ((uVar9 & 0xffffff) < (uVar21 & 0xffffff));
                    if (puVar42 < puVar22) {
                      puVar40 = puVar22;
                      puVar23 = puVar42;
                    }
                    else {
                      puVar23 = puVar23 + -2;
                      if (puVar22 != puVar42) {
                        *puVar42 = *puVar22;
                        *puVar22 = uVar21;
                      }
                    }
                  } while (puVar40 <= puVar23);
                  if (puVar23 <= puVar38) {
                    puVar38 = puVar40;
                    if (puVar40 < puVar46) goto LAB_02f5b70c;
                    uVar9 = (int)lVar48 - 1;
                    if ((int)lVar48 < 1) goto LAB_02f5b7e8;
                    puVar38 = local_468[(ulong)uVar9 + 0x40];
                    puVar46 = local_468[uVar9];
                    goto LAB_02f5b708;
                  }
                } while (puVar46 <= puVar40);
                puVar22 = puVar23;
                puVar42 = puVar38;
                if ((long)puVar46 - (long)puVar40 <= (long)puVar23 - (long)puVar38) {
                  puVar22 = puVar46;
                  puVar42 = puVar40;
                  puVar46 = puVar23;
                  puVar40 = puVar38;
                }
                local_468[lVar48 + 0x40] = puVar40;
                local_468[lVar48] = puVar46;
                lVar48 = lVar48 + 1;
                puVar46 = puVar22;
                puVar38 = puVar42;
              } while( true );
            }
LAB_02f5b7e8:
            if ((uint)local_10d8 == 0) {
              if ((int)plVar43[1] == 0) goto LAB_02f5b8f0;
            }
            else {
              lVar48 = (long)(int)(uint)local_10d8 << 2;
              puVar46 = local_10e0;
              do {
                lVar53 = *param_1;
                uVar17 = *(ulong *)(*(long *)(lVar53 + 0x38) + ((ulong)*puVar46 & 0xffffff) * 0xc0 +
                                   0xb0);
                if ((long)uVar17 < 0) {
                  uVar17 = uVar17 & 0xffffffff;
                }
                else {
                  uVar18 = FUN_00dbb6c8(lVar53 + 0x960,uVar17,&local_268);
                  uVar17 = (ulong)local_268 & 0xffffffff;
                  if ((uVar18 & 1) == 0) {
                    uVar17 = 0xffffff;
                  }
                }
                FUN_02f35f08(lVar53,uVar17,0);
                puVar46 = puVar46 + 1;
                lVar48 = lVar48 + -4;
              } while (lVar48 != 0);
              uVar9 = *(uint *)(plVar43 + 1);
              if ((uint)local_10d8 == uVar9) {
LAB_02f5b8f0:
                *(undefined4 *)(plVar43 + 1) = 0;
LAB_02f5b8f8:
                if (0 < (int)(uint)local_10d8) {
                  lVar48 = 0;
                  do {
                    puVar46 = local_10e0 + lVar48;
                    lVar48 = lVar48 + 1;
                    *(undefined4 *)
                     (param_1[0x71] +
                      (long)*(int *)(*(long *)(*param_1 + 0x38) +
                                     ((ulong)*puVar46 & 0xffffff) * 0xc0 + 0x80) * 0x20 + 0x10) =
                         0xffffffff;
                  } while (lVar48 < (int)(uint)local_10d8);
                }
              }
              else if (0 < (int)(uint)local_10d8) {
                lVar48 = 0;
                do {
                  if (0 < (int)uVar9) {
                    uVar17 = 0;
                    do {
                      if (*(uint *)(*plVar43 + uVar17 * 4) == local_10e0[lVar48]) goto LAB_02f5b8ac;
                      uVar17 = uVar17 + 1;
                    } while (uVar9 != uVar17);
                  }
                  uVar17 = 0xffffffff;
LAB_02f5b8ac:
                  iVar54 = (int)((long)(int)uVar9 + -1);
                  *(int *)(plVar43 + 1) = iVar54;
                  if (iVar54 != (int)uVar17) {
                    *(undefined4 *)(*plVar43 + (long)(int)uVar17 * 4) =
                         *(undefined4 *)(*plVar43 + ((long)(int)uVar9 + -1) * 4);
                  }
                  lVar48 = lVar48 + 1;
                  if ((int)(uint)local_10d8 <= lVar48) goto LAB_02f5b8f8;
                  uVar9 = *(uint *)(plVar43 + 1);
                } while( true );
              }
            }
            *(undefined1 *)(param_1 + 0x6c) = 0;
            local_268 = (uint *)0x0;
            local_260 = -0x8000000000000000;
            iVar54 = (int)plVar43[3];
            if (iVar54 < 1) {
              iVar54 = 0;
            }
            else {
              if (0xf < iVar54) {
                iVar54 = 0x10;
              }
              FUN_02f5ed94(&local_268,PTR_PTR_047d1a50 + 0x20,iVar54);
              iVar54 = (int)plVar43[3];
              if (0 < iVar54) {
                iVar15 = 0;
                do {
                  lVar48 = plVar43[2];
                  lVar53 = (long)iVar15;
                  lVar29 = *(long *)(lVar48 + (long)iVar15 * 8);
                  if (*(char *)(lVar29 + 0x18) == '\0') {
                    iVar54 = iVar54 + -1;
                    *(int *)(plVar43 + 3) = iVar54;
                    if (iVar54 != iVar15) {
                      *(undefined8 *)(lVar48 + lVar53 * 8) =
                           *(undefined8 *)(lVar48 + (long)iVar54 * 8);
LAB_02f5bb74:
                      if (iVar15 < (int)plVar43[3]) {
                        *(int *)(*(long *)(plVar43[2] + lVar53 * 8) + 4) = iVar15;
                      }
                    }
LAB_02f5bb8c:
                    iVar15 = iVar15 + -1;
                  }
                  else {
                    uVar9 = *(uint *)(lVar29 + 0x10);
                    uVar21 = *(uint *)(lVar29 + 0x14);
                    uVar18 = (ulong)uVar21 & 0xffffff;
                    lVar48 = *(long *)(*param_1 + 0x38);
                    lVar32 = lVar48 + uVar18 * 0xc0;
                    uVar17 = (ulong)uVar9 & 0xffffff;
                    lVar13 = lVar48 + uVar17 * 0xc0;
                    iVar57 = -(uint)((float)*(undefined8 *)(lVar32 + 0x70) <=
                                    (float)*(undefined8 *)(lVar13 + 0x60));
                    iVar58 = -(uint)((float)((ulong)*(undefined8 *)(lVar32 + 0x70) >> 0x20) <=
                                    (float)((ulong)*(undefined8 *)(lVar13 + 0x60) >> 0x20));
                    iVar59 = -(uint)((float)((ulong)*(undefined8 *)(lVar32 + 0x68) >> 0x20) <=
                                    (float)*(undefined8 *)(lVar13 + 0x68));
                    iVar54 = -(uint)((float)*(undefined8 *)(lVar13 + 0x70) <=
                                    (float)*(undefined8 *)(lVar32 + 0x60));
                    iVar55 = -(uint)((float)((ulong)*(undefined8 *)(lVar13 + 0x70) >> 0x20) <=
                                    (float)((ulong)*(undefined8 *)(lVar32 + 0x60) >> 0x20));
                    iVar56 = -(uint)((float)((ulong)*(undefined8 *)(lVar13 + 0x68) >> 0x20) <=
                                    (float)*(undefined8 *)(lVar32 + 0x68));
                    if (CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar58 >> 0x18) &
                                 (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar57 >> 0x18) &
                                 (byte)((uint)iVar56 >> 0x18) & (byte)((uint)iVar59 >> 0x18),
                                 CONCAT12((byte)((uint)iVar55 >> 0x10) &
                                          (byte)((uint)iVar58 >> 0x10) &
                                          (byte)((uint)iVar54 >> 0x10) &
                                          (byte)((uint)iVar57 >> 0x10) &
                                          (byte)((uint)iVar56 >> 0x10) &
                                          (byte)((uint)iVar59 >> 0x10),
                                          CONCAT11((byte)((uint)iVar55 >> 8) &
                                                   (byte)((uint)iVar58 >> 8) &
                                                   (byte)((uint)iVar54 >> 8) &
                                                   (byte)((uint)iVar57 >> 8) &
                                                   (byte)((uint)iVar56 >> 8) &
                                                   (byte)((uint)iVar59 >> 8),
                                                   (byte)iVar55 & (byte)iVar58 &
                                                   (byte)iVar54 & (byte)iVar57 &
                                                   (byte)iVar56 & (byte)iVar59))) != 0 &&
                        ((*(ushort *)(lVar13 + 0x58) | *(ushort *)(lVar32 + 0x58)) & 1) == 0) {
                      lVar32 = lVar48 + uVar18 * 0xc0;
                      uVar14 = *(uint *)(lVar32 + 0x54);
                      if (((uVar14 >> 3 & 1) == 0) &&
                         (uVar35 = *(uint *)(lVar48 + uVar17 * 0xc0 + 0x54), (uVar35 >> 3 & 1) == 0)
                         ) {
                        if ((((uVar14 & 9) != 0) ||
                            (*(uint *)(param_1[0x71] + (long)*(int *)(lVar32 + 0x80) * 0x20 + 0x10)
                             == uVar51)) &&
                           (((uVar35 & 9) != 0 ||
                            (*(uint *)(param_1[0x71] +
                                       (long)*(int *)(lVar48 + uVar17 * 0xc0 + 0x80) * 0x20 + 0x10)
                             == uVar51)))) goto LAB_02f5bb90;
                      }
                      if (*(char *)(lVar29 + 0x18) == '\t') {
                        if ((int)local_11b0 < 0xf99) {
                          puVar46 = (uint *)((long)local_11b8 + (long)(int)local_11b0 + 0x20);
                        }
                        else {
                          puVar46 = (uint *)FUN_031c36f4(&local_11c8);
                        }
                        *puVar46 = uVar9;
                        puVar46[1] = uVar21;
                        local_11b0 = local_11b0 + 8;
                        local_11ac = local_11ac + 1;
                      }
                      else {
                        FUN_02f57fd0(lVar29 + 0x10,&local_1130,&local_1158,param_5,param_6,
                                     auStack_11a0,*(long *)(param_2 + 0x40) + 0x13b8,
                                     *(long *)(param_2 + 0x40) + 0x1448);
                      }
                      *(undefined1 *)(lVar29 + 0x18) = 0;
                      lVar48 = (long)(int)plVar43[3] + -1;
                      iVar54 = (int)lVar48;
                      *(int *)(plVar43 + 3) = iVar54;
                      if (iVar54 != iVar15) {
                        *(undefined8 *)(plVar43[2] + lVar53 * 8) =
                             *(undefined8 *)(plVar43[2] + lVar48 * 8);
                        goto LAB_02f5bb74;
                      }
                      goto LAB_02f5bb8c;
                    }
                    lVar48 = (long)(int)local_260;
                    if ((int)(local_260._4_4_ & 0x7fffffff) <= (int)local_260) {
                      FUN_02f5ed94(&local_268,PTR_PTR_047d1a50 + 0x20,lVar48 + 1);
                    }
                    *(long *)(local_268 + (long)(int)local_260 * 2) = lVar29;
                    local_260 = CONCAT44(local_260._4_4_,(int)(lVar48 + 1));
                  }
LAB_02f5bb90:
                  iVar54 = (int)plVar43[3];
                  iVar15 = iVar15 + 1;
                } while (iVar15 < iVar54);
              }
              iVar54 = (int)local_260;
            }
            puVar46 = local_268;
            FUN_02f56290(local_268,iVar54);
            if (iVar54 != 0) {
              lVar48 = (long)iVar54 << 3;
              do {
                lVar53 = *(long *)puVar46;
                iVar54 = *(int *)(lVar53 + 4);
                local_468[0] = (uint *)CONCAT44(local_468[0]._4_4_,0xffffffff);
                local_10e8[0] = 0xffffffff;
                plVar12 = *(long **)(*(long *)(param_2 + 0x40) + (ulong)*(byte *)(lVar53 + 0x18) * 8
                                    + 0x13b8);
                (**(code **)(*plVar12 + 0x18))
                          (plVar12,param_2,&local_1168,lVar53 + 0x10,auStack_11a0,lVar53 + 0x14,
                           lVar53 + 0x10,local_468,local_10e8);
                *(undefined1 *)(lVar53 + 0x18) = 0;
                lVar53 = (long)(int)plVar43[3] + -1;
                iVar15 = (int)lVar53;
                *(int *)(plVar43 + 3) = iVar15;
                if (iVar15 != iVar54) {
                  *(undefined8 *)(plVar43[2] + (long)iVar54 * 8) =
                       *(undefined8 *)(plVar43[2] + lVar53 * 8);
                  if (iVar54 < (int)plVar43[3]) {
                    *(int *)(*(long *)(plVar43[2] + (long)iVar54 * 8) + 4) = iVar54;
                  }
                }
                puVar46 = puVar46 + 2;
                lVar48 = lVar48 + -8;
              } while (lVar48 != 0);
            }
            if ((int)plVar43[1] == 0) {
              iVar54 = (int)param_1[0x69];
              lVar48 = (long)iVar54;
              if ((int)(*(uint *)((long)param_1 + 0x34c) & 0x7fffffff) <= iVar54) {
                FUN_0133bb88(param_1 + 0x68,PTR_PTR_047d1a50,lVar48 + 1);
                iVar54 = (int)param_1[0x69];
              }
              *(uint *)(param_1[0x68] + (long)iVar54 * 4) = uVar51;
              lVar53 = param_1[0x73];
              *(int *)(param_1 + 0x69) = (int)(lVar48 + 1);
              lVar48 = *(long *)(lVar53 + lVar27 * 8);
              if (lVar48 != 0) {
                FUN_02f568d8(lVar48);
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar48,0);
                lVar53 = param_1[0x73];
              }
              *(undefined8 *)(lVar53 + lVar27 * 8) = 0;
            }
            if (0 < (int)param_1[0x6b]) {
              lVar27 = 0;
              do {
                puVar45 = (ushort *)(param_1[0x6a] + lVar27 * 0x20);
                puVar38 = *(uint **)(*(long *)(param_2 + 0x540) +
                                     (long)*(int *)(param_2 + 0x548) * 8 + -8);
                uVar5 = *puVar45;
                puVar52 = *(undefined8 **)(param_2 + 0x4e0);
                uVar51 = *puVar38;
                iVar54 = 4000 - (uint)uVar5;
                puVar46 = puVar38;
                if (iVar54 <= (int)(uVar51 >> 0x10)) {
                  do {
                    uVar51 = *(int *)(puVar52 + 0xb) - 1;
                    if (*(int *)(puVar52 + 0xb) < 1) {
                      lVar48 = puVar52[1];
                      (**(code **)(*(long *)*puVar52 + 0x20))((long *)*puVar52,lVar48,6);
                      *(undefined4 *)(puVar52 + 0xb) = 5;
                      puVar20 = (undefined8 *)(lVar48 + 0x28);
                    }
                    else {
                      *(uint *)(puVar52 + 0xb) = uVar51;
                      puVar20 = (undefined8 *)(puVar52[1] + (ulong)uVar51 * 8);
                    }
                    puVar38 = (uint *)*puVar20;
                    puVar38[4] = 0;
                    puVar38[5] = 0;
                    puVar38[6] = 0;
                    puVar38[7] = 0;
                    puVar38[0] = 0;
                    puVar38[1] = 0;
                    puVar38[2] = 0;
                    puVar38[3] = 0;
                    puVar38[1] = *(uint *)(param_2 + 0x548);
                    iVar15 = *(int *)(param_2 + 0x548);
                    lVar48 = (long)iVar15;
                    if ((int)(*(uint *)(param_2 + 0x54c) & 0x7fffffff) <= iVar15) {
                      FUN_031c25b4(param_2 + 0x540,PTR_PTR_047d1a50,lVar48 + 1);
                      iVar15 = *(int *)(param_2 + 0x548);
                    }
                    *(uint **)(*(long *)(param_2 + 0x540) + (long)iVar15 * 8) = puVar38;
                    *(int *)(param_2 + 0x548) = (int)(lVar48 + 1);
                    *(uint **)(puVar46 + 2) = puVar38;
                    uVar51 = *puVar38;
                    puVar46 = puVar38;
                  } while (iVar54 <= (int)(uVar51 >> 0x10));
                }
                do {
                  cVar6 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar38,0x10);
                  if (bVar8) {
                    *puVar38 = *puVar38 + ((uint)uVar5 << 0x10 | 1);
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                uVar9 = (uint)(uVar5 >> 2);
                *(int *)(param_2 + 0x538) = *(int *)(param_2 + 0x538) + 1;
                if (uVar9 != 0) {
                  puVar26 = (undefined4 *)((long)puVar38 + (ulong)(uVar51 >> 0x10) + 0x20);
                  uVar51 = uVar5 >> 2 & 7;
                  if (6 < uVar9 - 1) {
                    iVar54 = -(uVar9 & 0x3ff8);
                    puVar25 = puVar26;
                    do {
                      *puVar25 = *(undefined4 *)puVar45;
                      puVar25[1] = *(undefined4 *)(puVar45 + 2);
                      puVar25[2] = *(undefined4 *)(puVar45 + 4);
                      puVar25[3] = *(undefined4 *)(puVar45 + 6);
                      puVar25[4] = *(undefined4 *)(puVar45 + 8);
                      puVar25[5] = *(undefined4 *)(puVar45 + 10);
                      puVar25[6] = *(undefined4 *)(puVar45 + 0xc);
                      puVar2 = puVar45 + 0xe;
                      puVar45 = puVar45 + 0x10;
                      puVar26 = puVar25 + 8;
                      iVar54 = iVar54 + 8;
                      puVar25[7] = *(undefined4 *)puVar2;
                      puVar25 = puVar26;
                    } while (iVar54 != 0);
                  }
                  if ((uVar5 >> 2 & 7) != 0) {
                    do {
                      uVar51 = uVar51 - 1;
                      *puVar26 = *(undefined4 *)puVar45;
                      puVar26 = puVar26 + 1;
                      puVar45 = puVar45 + 2;
                    } while (uVar51 != 0);
                  }
                }
                lVar27 = lVar27 + 1;
              } while (lVar27 < (int)param_1[0x6b]);
            }
            lVar27 = local_260;
            *(undefined4 *)(param_1 + 0x6b) = 0;
            uVar17 = (ulong)local_260._4_4_;
            local_260 = (ulong)local_260._4_4_ << 0x20;
            if ((-1 < lVar27) && (local_268 != (uint *)0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                        (PTR_PTR_047d1a50 + 0x20,local_268,uVar17 << 3);
            }
            if (local_10c8 == local_10e0) {
              local_10d8 = local_10d8 & 0xffffffff00000000;
            }
            if (local_10d0 == 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(1);
            }
            else {
              uVar17 = (long)local_10c0 + 0x3fU & 0xffffffffffffffc0;
              if ((*(ulong *)(local_10d0 + 0x28) < uVar17) ||
                 (*(long *)(local_10d0 + 0x38) != uVar17 + (long)local_10c8)) {
                if (local_10c8 != (uint *)0x0) {
                  if (*(ulong *)(local_10d0 + 0x28) < uVar17 + 0x40) {
                    *(int *)(*(long *)(local_10d0 + 0x30) + 0x20) =
                         *(int *)(*(long *)(local_10d0 + 0x30) + 0x20) + -1;
                    (**(code **)(**(long **)(local_10d0 + 0x10) + 0x18))
                              (*(long **)(local_10d0 + 0x10),
                               (long)local_10c8 - (long)(int)local_10c8[-1],uVar17 + 0x44);
                  }
                  else {
                    if (*(long *)(local_10d0 + 0x38) == uVar17 + (long)local_10c8) {
                      *(uint **)(local_10d0 + 0x38) = local_10c8;
                      goto LAB_02f5bfd0;
                    }
                    FUN_031cf778();
                  }
                }
              }
              else {
                *(uint **)(local_10d0 + 0x38) = local_10c8;
                if (*(uint **)(local_10d0 + 0x48) == local_10c8) {
LAB_02f5bfd0:
                  FUN_031cf578();
                }
              }
            }
            uVar17 = local_10d8;
            uVar18 = (ulong)local_10d8._4_4_;
            local_10d8 = (ulong)local_10d8._4_4_ << 0x20;
            if ((-1 < (long)uVar17) && (local_10e0 != (uint *)0x0)) {
              (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                        (PTR_PTR_047d1a50,local_10e0,uVar18 << 2);
            }
            lVar27 = local_10b0;
            uVar17 = (ulong)local_10b0._4_4_;
            local_10b0 = (ulong)local_10b0._4_4_ << 0x20;
            if ((-1 < lVar27) && (local_10b8 != (uint *)0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                        (PTR_PTR_047d1a50 + 0x20,local_10b8,uVar17 << 2);
            }
            lVar27 = local_ca0;
            uVar17 = (ulong)local_ca0._4_4_;
            local_ca0 = (ulong)local_ca0._4_4_ << 0x20;
            if ((-1 < lVar27) && (local_ca8 != (uint *)0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                        (PTR_PTR_047d1a50 + 0x20,local_ca8,uVar17 << 2);
            }
            local_870 = 0;
            if ((-1 < (int)local_86c) && (local_878 != (uint *)0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                        (PTR_PTR_047d1a50 + 0x20,local_878,(ulong)local_86c << 2);
            }
          }
          lVar27 = *(long *)(param_1[0x73] + (long)(int)local_10f8[lVar16] * 8);
          if (lVar27 != 0) {
            *(undefined2 *)(lVar27 + 0x24) = 0;
          }
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)local_10f0);
  }
  puVar52 = local_11c0;
  if (local_11ac == 0) {
    piVar49 = (int *)(local_11c8 + 0x18);
    iVar54 = *piVar49;
    if (iVar54 < 2) goto LAB_02f5c174;
    iVar15 = *(int *)(local_11c0 + 0xb);
    lVar27 = *(long *)(*(long *)(local_11c8 + 0x10) + (long)(iVar54 + -2) * 8);
    lVar16 = local_11c0[1];
    *(undefined8 *)(lVar16 + (long)iVar15 * 8) =
         *(undefined8 *)(*(long *)(local_11c8 + 0x10) + (long)(iVar54 + -1) * 8);
    *(int *)(local_11c0 + 0xb) = iVar15 + 1;
    if (*(int *)((long)local_11c0 + 0x5c) <= iVar15 + 1) {
      (**(code **)(*(long *)*local_11c0 + 0x28))
                ((long *)*local_11c0,lVar16 + (long)(iVar15 + -5) * 8,6);
      *(int *)(puVar52 + 0xb) = iVar15 + -5;
    }
    *(undefined8 *)(lVar27 + 8) = 0;
    uVar51 = 0xffffffff;
  }
  else {
LAB_02f5c174:
    piVar49 = (int *)(local_11c8 + 8);
    local_11b8[2] = 0;
    local_11b8[3] = 0;
    *local_11b8 = *local_11b8 & 0xffff0000 | local_11ac & 0xffff;
    *local_11b8 = *local_11b8 & 0xffff | local_11b0 << 0x10;
    uVar51 = local_11ac;
  }
  puVar52 = local_1170;
  *piVar49 = *piVar49 + uVar51;
  local_11c8 = 0;
  local_11b8 = (uint *)0x0;
  if (local_1178 != 0) {
    if (local_1178 == (*local_1180 & 0xffff)) {
      *(undefined8 *)(local_1188[2] + (long)(int)local_1180[1] * 8) = 0;
      *(undefined1 *)((long)local_1188 + 0xc) = 1;
      iVar54 = *(int *)(local_1170 + 0xb);
      lVar16 = local_1170[1];
      *(uint **)(lVar16 + (long)iVar54 * 8) = local_1180;
      *(int *)(local_1170 + 0xb) = iVar54 + 1;
      if (*(int *)((long)local_1170 + 0x5c) <= iVar54 + 1) {
        (**(code **)(*(long *)*local_1170 + 0x28))
                  ((long *)*local_1170,lVar16 + (long)(iVar54 + -5) * 8,6);
        *(int *)(puVar52 + 0xb) = iVar54 + -5;
      }
    }
    else {
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(local_1180,0x10);
        if (bVar8) {
          *local_1180 = *local_1180 - local_1178;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_1178 = 0;
    *(undefined1 *)((long)local_1188 + 0xc) = 1;
  }
  puVar52 = local_1128;
  local_1188 = (long *)0x0;
  local_1170 = (undefined8 *)0x0;
  if (local_1114 == 0) {
    plVar43 = local_1130 + 3;
    iVar54 = (int)*plVar43;
    if (iVar54 < 2) goto LAB_02f5c2cc;
    iVar15 = *(int *)(local_1128 + 0xb);
    lVar27 = *(long *)(local_1130[2] + (long)(iVar54 + -2) * 8);
    lVar16 = local_1128[1];
    *(undefined8 *)(lVar16 + (long)iVar15 * 8) =
         *(undefined8 *)(local_1130[2] + (long)(iVar54 + -1) * 8);
    *(int *)(local_1128 + 0xb) = iVar15 + 1;
    if (*(int *)((long)local_1128 + 0x5c) <= iVar15 + 1) {
      (**(code **)(*(long *)*local_1128 + 0x28))
                ((long *)*local_1128,lVar16 + (long)(iVar15 + -5) * 8,6);
      *(int *)(puVar52 + 0xb) = iVar15 + -5;
    }
    *(undefined8 *)(lVar27 + 8) = 0;
    uVar51 = 0xffffffff;
  }
  else {
LAB_02f5c2cc:
    plVar43 = local_1130 + 1;
    local_1120[2] = 0;
    local_1120[3] = 0;
    *local_1120 = *local_1120 & 0xffff0000 | local_1114 & 0xffff;
    *local_1120 = *local_1120 & 0xffff | local_1118 << 0x10;
    uVar51 = local_1114;
  }
  puVar52 = local_1150;
  *(uint *)plVar43 = (int)*plVar43 + uVar51;
  local_1130 = (long *)0x0;
  local_1120 = (uint *)0x0;
  if (param_5 == 0) {
    if (local_113c == 0) {
      plVar43 = local_1158 + 3;
      iVar54 = (int)*plVar43;
      if (iVar54 < 2) goto LAB_02f5c494;
      iVar15 = *(int *)(local_1150 + 0xb);
      lVar27 = *(long *)(local_1158[2] + (long)(iVar54 + -2) * 8);
      lVar16 = local_1150[1];
      *(undefined8 *)(lVar16 + (long)iVar15 * 8) =
           *(undefined8 *)(local_1158[2] + (long)(iVar54 + -1) * 8);
      *(int *)(local_1150 + 0xb) = iVar15 + 1;
      if (*(int *)((long)local_1150 + 0x5c) <= iVar15 + 1) {
        (**(code **)(*(long *)*local_1150 + 0x28))
                  ((long *)*local_1150,lVar16 + (long)(iVar15 + -5) * 8,6);
        *(int *)(puVar52 + 0xb) = iVar15 + -5;
      }
      *(undefined8 *)(lVar27 + 8) = 0;
      uVar51 = 0xffffffff;
    }
    else {
LAB_02f5c494:
      plVar43 = local_1158 + 1;
      local_1148[2] = 0;
      local_1148[3] = 0;
      *local_1148 = *local_1148 & 0xffff0000 | local_113c & 0xffff;
      *local_1148 = *local_1148 & 0xffff | local_1140 << 0x10;
      uVar51 = local_113c;
    }
    *(uint *)plVar43 = (int)*plVar43 + uVar51;
    local_1158 = (long *)0x0;
    local_1148 = (uint *)0x0;
  }
  if ((param_8 != (long *)0x0) && (uVar51 = *(uint *)(param_8 + 1), uVar51 != 0)) {
    if (1 < (int)uVar51) {
      FUN_02f5f860(*param_8,0,uVar51 - 1);
      uVar51 = *(uint *)(param_8 + 1);
    }
    if (uVar51 == 0) {
      iVar54 = 0;
    }
    else {
      if ((int)uVar51 < 2) {
        iVar15 = 0;
      }
      else {
        piVar50 = (int *)*param_8;
        lVar16 = 0;
        lVar27 = (ulong)uVar51 - 1;
        piVar49 = piVar50;
        do {
          piVar30 = piVar49 + 3;
          if (piVar50[(long)(int)lVar16 * 3] != *piVar30) {
            lVar16 = (long)(int)lVar16 + 1;
            uVar10 = *(undefined8 *)piVar30;
            (piVar50 + lVar16 * 3)[2] = piVar49[5];
            *(undefined8 *)(piVar50 + lVar16 * 3) = uVar10;
          }
          iVar15 = (int)lVar16;
          lVar27 = lVar27 + -1;
          piVar49 = piVar30;
        } while (lVar27 != 0);
      }
      iVar54 = iVar15 + 1;
      if ((int)(*(uint *)((long)param_8 + 0xc) & 0x7fffffff) <= iVar15) {
        FUN_02f5f960(param_8,PTR_PTR_047d1a50,(long)iVar54);
      }
    }
    if (((int)param_8[1] < iVar54) || (iVar54 < (int)param_8[1])) {
      *(int *)(param_8 + 1) = iVar54;
    }
  }
  puVar52 = local_11c0;
  if (local_11c8 != 0) {
    if (local_11ac == 0) {
      piVar49 = (int *)(local_11c8 + 0x18);
      iVar54 = *piVar49;
      if (iVar54 < 2) goto LAB_02f5c624;
      iVar15 = *(int *)(local_11c0 + 0xb);
      lVar27 = *(long *)(*(long *)(local_11c8 + 0x10) + (long)(iVar54 + -2) * 8);
      lVar16 = local_11c0[1];
      *(undefined8 *)(lVar16 + (long)iVar15 * 8) =
           *(undefined8 *)(*(long *)(local_11c8 + 0x10) + (long)(iVar54 + -1) * 8);
      *(int *)(local_11c0 + 0xb) = iVar15 + 1;
      if (*(int *)((long)local_11c0 + 0x5c) <= iVar15 + 1) {
        (**(code **)(*(long *)*local_11c0 + 0x28))
                  ((long *)*local_11c0,lVar16 + (long)(iVar15 + -5) * 8,6);
        *(int *)(puVar52 + 0xb) = iVar15 + -5;
      }
      *(undefined8 *)(lVar27 + 8) = 0;
      uVar51 = 0xffffffff;
    }
    else {
LAB_02f5c624:
      piVar49 = (int *)(local_11c8 + 8);
      local_11b8[2] = 0;
      local_11b8[3] = 0;
      *local_11b8 = *local_11b8 & 0xffff0000 | local_11ac & 0xffff;
      *local_11b8 = *local_11b8 & 0xffff | local_11b0 << 0x10;
      uVar51 = local_11ac;
    }
    *piVar49 = *piVar49 + uVar51;
    local_11c8 = 0;
    local_11b8 = (uint *)0x0;
  }
  puVar52 = local_1150;
  if (local_1158 != (long *)0x0) {
    if (local_113c == 0) {
      plVar43 = local_1158 + 3;
      iVar54 = (int)*plVar43;
      if (iVar54 < 2) goto LAB_02f5c6e0;
      iVar15 = *(int *)(local_1150 + 0xb);
      lVar27 = *(long *)(local_1158[2] + (long)(iVar54 + -2) * 8);
      lVar16 = local_1150[1];
      *(undefined8 *)(lVar16 + (long)iVar15 * 8) =
           *(undefined8 *)(local_1158[2] + (long)(iVar54 + -1) * 8);
      *(int *)(local_1150 + 0xb) = iVar15 + 1;
      if (*(int *)((long)local_1150 + 0x5c) <= iVar15 + 1) {
        (**(code **)(*(long *)*local_1150 + 0x28))
                  ((long *)*local_1150,lVar16 + (long)(iVar15 + -5) * 8,6);
        *(int *)(puVar52 + 0xb) = iVar15 + -5;
      }
      *(undefined8 *)(lVar27 + 8) = 0;
      uVar51 = 0xffffffff;
    }
    else {
LAB_02f5c6e0:
      plVar43 = local_1158 + 1;
      local_1148[2] = 0;
      local_1148[3] = 0;
      *local_1148 = *local_1148 & 0xffff0000 | local_113c & 0xffff;
      *local_1148 = *local_1148 & 0xffff | local_1140 << 0x10;
      uVar51 = local_113c;
    }
    *(uint *)plVar43 = (int)*plVar43 + uVar51;
    local_1158 = (long *)0x0;
    local_1148 = (uint *)0x0;
  }
  puVar52 = local_1128;
  if (local_1130 != (long *)0x0) {
    if (local_1114 == 0) {
      plVar43 = local_1130 + 3;
      iVar54 = (int)*plVar43;
      if (iVar54 < 2) goto LAB_02f5c79c;
      iVar15 = *(int *)(local_1128 + 0xb);
      lVar27 = *(long *)(local_1130[2] + (long)(iVar54 + -2) * 8);
      lVar16 = local_1128[1];
      *(undefined8 *)(lVar16 + (long)iVar15 * 8) =
           *(undefined8 *)(local_1130[2] + (long)(iVar54 + -1) * 8);
      *(int *)(local_1128 + 0xb) = iVar15 + 1;
      if (*(int *)((long)local_1128 + 0x5c) <= iVar15 + 1) {
        (**(code **)(*(long *)*local_1128 + 0x28))
                  ((long *)*local_1128,lVar16 + (long)(iVar15 + -5) * 8,6);
        *(int *)(puVar52 + 0xb) = iVar15 + -5;
      }
      *(undefined8 *)(lVar27 + 8) = 0;
      uVar51 = 0xffffffff;
    }
    else {
LAB_02f5c79c:
      plVar43 = local_1130 + 1;
      local_1120[2] = 0;
      local_1120[3] = 0;
      *local_1120 = *local_1120 & 0xffff0000 | local_1114 & 0xffff;
      *local_1120 = *local_1120 & 0xffff | local_1118 << 0x10;
      uVar51 = local_1114;
    }
    *(uint *)plVar43 = (int)*plVar43 + uVar51;
    local_1130 = (long *)0x0;
    local_1120 = (uint *)0x0;
  }
  puVar3 = PTR_PTR_047d1a50;
  if (0 < (int)local_10f0) {
    lVar16 = 0;
    iVar54 = (int)local_10f0;
    do {
      uVar51 = local_10f8[lVar16];
      plVar43 = *(long **)(param_1[0x73] + (long)(int)uVar51 * 8);
      if ((plVar43 != (long *)0x0) && ((int)plVar43[3] == 0)) {
        if (0 < (int)plVar43[1]) {
          lVar27 = 0;
          do {
            lVar48 = lVar27 * 4;
            lVar27 = lVar27 + 1;
            *(undefined4 *)
             (param_1[0x71] +
              (long)*(int *)(*(long *)(*param_1 + 0x38) +
                             ((ulong)*(uint *)(*plVar43 + lVar48) & 0xffffff) * 0xc0 + 0x80) * 0x20
             + 0x10) = 0xffffffff;
          } while (lVar27 < (int)plVar43[1]);
        }
        iVar54 = (int)param_1[0x69];
        lVar27 = (long)iVar54;
        if ((int)(*(uint *)((long)param_1 + 0x34c) & 0x7fffffff) <= iVar54) {
          FUN_0133bb88(param_1 + 0x68,puVar3,lVar27 + 1);
          iVar54 = (int)param_1[0x69];
        }
        *(uint *)(param_1[0x68] + (long)iVar54 * 4) = uVar51;
        lVar48 = param_1[0x73];
        *(int *)(param_1 + 0x69) = (int)(lVar27 + 1);
        lVar27 = *(long *)(lVar48 + (long)(int)uVar51 * 8);
        if (lVar27 != 0) {
          FUN_02f568d8(lVar27);
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar27,0);
          lVar48 = param_1[0x73];
        }
        *(undefined8 *)(lVar48 + (long)(int)uVar51 * 8) = 0;
        iVar54 = (int)local_10f0;
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar54);
  }
LAB_02f5c8e8:
  lVar16 = *(long *)(lVar44 + 0x1000b8);
  if (lVar16 == 0) {
    lVar16 = FUN_00e5d3b4();
    *(long *)(lVar44 + 0x1000b8) = lVar16;
  }
  plVar43 = *(long **)(lVar16 + 0x3e0);
  if (plVar43 != (long *)0x0) {
    lVar16 = *plVar43;
    if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar43[6] != 0)) {
      puVar52 = (undefined8 *)plVar43[2];
      uVar17 = (long)puVar52 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= (ulong)plVar43[3]) && (plVar43[2] = uVar17, puVar52 != (undefined8 *)0x0)) {
        *puVar52 = &DAT_03c4e575;
        puVar52[1] = *(undefined8 *)(plVar43[6] + 8);
      }
    }
    puVar52 = (undefined8 *)plVar43[2];
    uVar17 = (long)puVar52 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)plVar43[3]) && (plVar43[2] = uVar17, puVar52 != (undefined8 *)0x0)) {
      *puVar52 = "StFireEvents";
      uVar10 = nn::os::GetSystemTick();
      puVar52[1] = uVar10;
    }
    if (*(code **)(lVar16 + 0x20) != (code *)0x0) {
      (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x28));
    }
    if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
      (**(code **)(lVar16 + 0x18))("FireEvents",10,*(undefined8 *)(lVar16 + 0x28));
    }
  }
  if (0 < (int)param_1[0x6b]) {
    lVar16 = 0;
    do {
      puVar45 = (ushort *)(param_1[0x6a] + lVar16 * 0x20);
      puVar38 = *(uint **)(*(long *)(param_2 + 0x540) + (long)*(int *)(param_2 + 0x548) * 8 + -8);
      uVar5 = *puVar45;
      puVar52 = *(undefined8 **)(param_2 + 0x4e0);
      uVar51 = *puVar38;
      iVar54 = 4000 - (uint)uVar5;
      puVar46 = puVar38;
      if (iVar54 <= (int)(uVar51 >> 0x10)) {
        do {
          uVar51 = *(int *)(puVar52 + 0xb) - 1;
          if (*(int *)(puVar52 + 0xb) < 1) {
            lVar27 = puVar52[1];
            (**(code **)(*(long *)*puVar52 + 0x20))((long *)*puVar52,lVar27,6);
            *(undefined4 *)(puVar52 + 0xb) = 5;
            puVar20 = (undefined8 *)(lVar27 + 0x28);
          }
          else {
            *(uint *)(puVar52 + 0xb) = uVar51;
            puVar20 = (undefined8 *)(puVar52[1] + (ulong)uVar51 * 8);
          }
          puVar38 = (uint *)*puVar20;
          puVar38[4] = 0;
          puVar38[5] = 0;
          puVar38[6] = 0;
          puVar38[7] = 0;
          puVar38[0] = 0;
          puVar38[1] = 0;
          puVar38[2] = 0;
          puVar38[3] = 0;
          puVar38[1] = *(uint *)(param_2 + 0x548);
          iVar15 = *(int *)(param_2 + 0x548);
          lVar27 = (long)iVar15;
          if ((int)(*(uint *)(param_2 + 0x54c) & 0x7fffffff) <= iVar15) {
            FUN_031c25b4(param_2 + 0x540,PTR_PTR_047d1a50,lVar27 + 1);
            iVar15 = *(int *)(param_2 + 0x548);
          }
          *(uint **)(*(long *)(param_2 + 0x540) + (long)iVar15 * 8) = puVar38;
          *(int *)(param_2 + 0x548) = (int)(lVar27 + 1);
          *(uint **)(puVar46 + 2) = puVar38;
          uVar51 = *puVar38;
          puVar46 = puVar38;
        } while (iVar54 <= (int)(uVar51 >> 0x10));
      }
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar38,0x10);
        if (bVar8) {
          *puVar38 = *puVar38 + ((uint)uVar5 << 0x10 | 1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      uVar9 = (uint)(uVar5 >> 2);
      *(int *)(param_2 + 0x538) = *(int *)(param_2 + 0x538) + 1;
      if (uVar9 != 0) {
        puVar26 = (undefined4 *)((long)puVar38 + (ulong)(uVar51 >> 0x10) + 0x20);
        uVar51 = uVar5 >> 2 & 7;
        if (6 < uVar9 - 1) {
          iVar54 = -(uVar9 & 0x3ff8);
          puVar25 = puVar26;
          do {
            *puVar25 = *(undefined4 *)puVar45;
            puVar25[1] = *(undefined4 *)(puVar45 + 2);
            puVar25[2] = *(undefined4 *)(puVar45 + 4);
            puVar25[3] = *(undefined4 *)(puVar45 + 6);
            puVar25[4] = *(undefined4 *)(puVar45 + 8);
            puVar25[5] = *(undefined4 *)(puVar45 + 10);
            puVar25[6] = *(undefined4 *)(puVar45 + 0xc);
            puVar2 = puVar45 + 0xe;
            puVar45 = puVar45 + 0x10;
            puVar26 = puVar25 + 8;
            iVar54 = iVar54 + 8;
            puVar25[7] = *(undefined4 *)puVar2;
            puVar25 = puVar26;
          } while (iVar54 != 0);
        }
        if ((uVar5 >> 2 & 7) != 0) {
          do {
            uVar51 = uVar51 - 1;
            *puVar26 = *(undefined4 *)puVar45;
            puVar26 = puVar26 + 1;
            puVar45 = puVar45 + 2;
          } while (uVar51 != 0);
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)param_1[0x6b]);
  }
  *(undefined4 *)(param_1 + 0x6b) = 0;
  lVar16 = *(long *)(lVar44 + 0x1000b8);
  if (lVar16 == 0) {
    lVar16 = FUN_00e5d3b4();
    *(long *)(lVar44 + 0x1000b8) = lVar16;
  }
  plVar43 = *(long **)(lVar16 + 0x3e0);
  if (plVar43 != (long *)0x0) {
    lVar44 = *plVar43;
    if (((*(byte *)(lVar44 + 0x38) & 1) != 0) && (plVar43[6] != 0)) {
      puVar52 = (undefined8 *)plVar43[2];
      uVar17 = (long)puVar52 + 0x17U & 0xfffffffffffffff8;
      if ((uVar17 <= (ulong)plVar43[3]) && (plVar43[2] = uVar17, puVar52 != (undefined8 *)0x0)) {
        *puVar52 = &DAT_03c4e575;
        puVar52[1] = *(undefined8 *)(plVar43[6] + 8);
      }
    }
    puVar52 = (undefined8 *)plVar43[2];
    uVar17 = (long)puVar52 + 0x17U & 0xfffffffffffffff8;
    if ((uVar17 <= (ulong)plVar43[3]) && (plVar43[2] = uVar17, puVar52 != (undefined8 *)0x0)) {
      *puVar52 = &DAT_03c3697b;
      uVar10 = nn::os::GetSystemTick();
      puVar52[1] = uVar10;
    }
    if (*(code **)(lVar44 + 0x20) != (code *)0x0) {
      (**(code **)(lVar44 + 0x20))(*(undefined8 *)(lVar44 + 0x28));
      if (*(code **)(lVar44 + 0x20) != (code *)0x0) {
        (**(code **)(lVar44 + 0x20))(*(undefined8 *)(lVar44 + 0x28));
      }
    }
  }
  lVar44 = local_1100;
  uVar17 = (ulong)local_1100._4_4_;
  local_1100 = (ulong)local_1100._4_4_ << 0x20;
  if ((-1 < lVar44) && (local_1108 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_1108,uVar17 << 3);
  }
  uVar17 = local_10f0;
  uVar18 = (ulong)local_10f0._4_4_;
  local_10f0 = (ulong)local_10f0._4_4_ << 0x20;
  if ((-1 < (long)uVar17) && (local_10f8 != (uint *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_10f8,uVar18 << 2);
  }
  return;
}


