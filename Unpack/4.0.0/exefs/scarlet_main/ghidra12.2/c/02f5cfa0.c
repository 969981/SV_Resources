/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f5cfa0; name: FUN_02f5cfa0
 */


void FUN_02f5cfa0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  uint *puVar23;
  long *plVar24;
  undefined8 uVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  bool bVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long *plVar32;
  int iVar33;
  uint uVar34;
  uint *puVar35;
  long local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  long local_120;
  long *local_118;
  undefined8 *local_110;
  uint *local_108;
  uint local_100;
  uint local_fc;
  long *local_f0;
  undefined8 *local_e8;
  uint *local_e0;
  uint local_d8;
  uint local_d4;
  long *local_c8;
  undefined8 local_c0;
  long local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  long local_90;
  long *local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  
  lVar28 = tpidr_el0;
  lVar12 = *(long *)(lVar28 + 0x1000b8);
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar28 + 0x1000b8) = lVar12;
  }
  plVar24 = *(long **)(lVar12 + 0x3e0);
  if (plVar24 != (long *)0x0) {
    lVar12 = *plVar24;
    if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
      (**(code **)(lVar12 + 0x18))("DefragmentInactiveCaches",0x18,*(undefined8 *)(lVar12 + 0x28));
    }
    puVar31 = (undefined8 *)plVar24[2];
    uVar13 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar24[3]) && (plVar24[2] = uVar13, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = "TtDefragmentInactiveCaches";
      uVar9 = nn::os::GetSystemTick();
      puVar31[1] = uVar9;
    }
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
      puVar31 = (undefined8 *)plVar24[2];
      uVar13 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar24[3]) && (plVar24[2] = uVar13, puVar31 != (undefined8 *)0x0)) {
        *puVar31 = &DAT_03c4e575;
        puVar31[1] = *(undefined8 *)(plVar24[6] + 8);
      }
    }
    lVar12 = *(long *)(lVar28 + 0x1000b8);
  }
  iVar11 = *(int *)((long)param_1 + 0x5b4);
  local_a0 = (long *)0x0;
  local_98 = 0x8000000000000000;
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar28 + 0x1000b8) = lVar12;
  }
  local_90 = *(long *)(*(long *)(lVar12 + 0x3d0) + 0x10);
  if (*(long *)(local_90 + 8) == 0) {
    local_80 = 1000;
    local_f0 = (long *)0x3e8;
    if (local_90 == 0) goto LAB_02f5d164;
    local_c8 = (long *)0x400;
    if (*(ulong *)(local_90 + 0x28) < 0x400) {
LAB_02f5d100:
      local_88 = (long *)FUN_031cf3b4(local_90,&local_c8);
    }
    else {
      local_88 = *(long **)(local_90 + 0x38);
      if (*(long **)(local_90 + 0x40) < local_88 + 0x80) goto LAB_02f5d100;
      *(long **)(local_90 + 0x38) = local_88 + 0x80;
    }
  }
  else {
    local_90 = 0;
LAB_02f5d164:
    local_80 = 1000;
    local_f0 = (long *)0x3e8;
    local_88 = (long *)(**(code **)PTR_DAT_047d1a08)(1,&local_f0,0x40);
  }
  local_98 = CONCAT44(0x8000007d,(int)local_98);
  iVar33 = *(int *)((long)param_1 + 0x5b4);
  local_c8 = (long *)0x0;
  local_c0 = 0x8000000000000000;
  lVar12 = *(long *)(lVar28 + 0x1000b8);
  local_a0 = local_88;
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar28 + 0x1000b8) = lVar12;
  }
  local_b8 = *(long *)(*(long *)(lVar12 + 0x3d0) + 0x10);
  if (*(long *)(local_b8 + 8) != 0) {
    local_b8 = 0;
  }
  local_118 = (long *)((long)iVar33 * 8);
  local_a8 = local_118;
  if (local_b8 == 0) {
    local_b0 = (long *)(**(code **)PTR_DAT_047d1a08)(1,&local_118,0x40);
  }
  else {
    local_f0 = (long *)((long)local_118 + 0x3fU & 0xffffffffffffffc0);
    if (local_f0 <= *(long **)(local_b8 + 0x28)) {
      local_b0 = *(long **)(local_b8 + 0x38);
      if ((ulong)((long)local_f0 + (long)local_b0) <= *(ulong *)(local_b8 + 0x40)) {
        *(long *)(local_b8 + 0x38) = (long)local_f0 + (long)local_b0;
        goto LAB_02f5d238;
      }
    }
    local_b0 = (long *)FUN_031cf3b4(local_b8,&local_f0);
  }
LAB_02f5d238:
  plVar1 = param_1 + 2;
  plVar27 = param_1 + 0x42;
  local_c0 = CONCAT44(iVar33,(int)local_c0) | 0x8000000000000000;
  local_e8 = *(undefined8 **)(param_2 + 0x4e0);
  puVar23 = *(uint **)(param_1[4] + (long)(int)param_1[5] * 8 + -8);
  local_d8 = *puVar23 >> 0x10;
  local_d4 = *puVar23 & 0xffff;
  *(uint *)(param_1 + 3) = (int)param_1[3] - (*puVar23 & 0xffff);
  local_118 = (long *)0x0;
  local_f0 = plVar1;
  local_e0 = puVar23;
  local_c8 = local_b0;
  FUN_031c3378(plVar27,*(undefined8 *)(param_2 + 0x4e0));
  local_110 = *(undefined8 **)(param_2 + 0x4e0);
  local_108 = *(uint **)(param_1[0x44] + (long)(int)param_1[0x45] * 8 + -8);
  local_100 = *local_108 >> 0x10;
  local_fc = *local_108 & 0xffff;
  *(uint *)(param_1 + 0x43) = (int)param_1[0x43] - (*local_108 & 0xffff);
  local_140 = 0;
  local_138 = 0x8000000000000000;
  lVar12 = *(long *)(lVar28 + 0x1000b8);
  local_118 = plVar27;
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar28 + 0x1000b8) = lVar12;
  }
  local_130 = *(long *)(*(long *)(lVar12 + 0x3d0) + 0x10);
  if (*(long *)(local_130 + 8) == 0) {
    local_120 = 0x1e0;
    local_78 = 0x1e0;
    if (local_130 == 0) goto LAB_02f5d3d0;
    local_70[0] = 0x200;
    if (*(ulong *)(local_130 + 0x28) < 0x200) {
LAB_02f5d358:
      local_128 = FUN_031cf3b4(local_130,local_70);
    }
    else {
      local_128 = *(long *)(local_130 + 0x38);
      if (*(ulong *)(local_130 + 0x40) < local_128 + 0x200U) goto LAB_02f5d358;
      *(ulong *)(local_130 + 0x38) = local_128 + 0x200U;
    }
  }
  else {
    local_130 = 0;
LAB_02f5d3d0:
    local_78 = 0x1e0;
    local_120 = 0x1e0;
    local_128 = (**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
  }
  local_138 = CONCAT44(0x8000001e,(int)local_138);
  if (*(char *)((long)param_1 + 0x361) == '\0') {
    puVar14 = *(uint **)param_1[4];
    puVar35 = puVar14 + 8;
    param_1[0x6d] = (long)puVar14;
    param_1[0x6e] = (long)puVar35;
    uVar22 = *puVar14;
    *(uint *)((long)param_1 + 0x37c) = uVar22 & 0xffff;
    *(undefined4 *)(param_1 + 0x6f) = 0x7fffffff;
    if ((uVar22 & 0xffff) == 0) {
      puVar35 = (uint *)0x0;
      param_1[0x6e] = 0;
    }
    *(undefined1 *)((long)param_1 + 0x361) = 1;
  }
  else {
    puVar35 = (uint *)param_1[0x6e];
  }
  puVar8 = PTR_PTR_047d1a50;
  plVar2 = param_1 + 0x6d;
  local_140 = local_128;
  if (puVar35 != (uint *)0x0) {
    puVar15 = (uint *)param_1[0x6d];
    uVar22 = 0;
    iVar33 = 0;
    puVar14 = puVar15;
    while( true ) {
      while( true ) {
        if (puVar15 != puVar14) {
          if (((int)param_1[0xb6] < (int)uVar22) || (uVar22 == (*puVar14 & 0xffff))) {
            if (0 < (int)local_98) {
              lVar12 = 0;
              do {
                puVar31 = (undefined8 *)local_a0[lVar12];
                bVar6 = *(byte *)((long)puVar31 + 0x19);
                uVar22 = (uint)bVar6 * 0x10 + 0x10;
                if ((int)(uVar22 + local_d8) < 0xfa1) {
                  puVar30 = (undefined8 *)((long)local_e0 + (long)(int)local_d8 + 0x20);
                }
                else {
                  puVar30 = (undefined8 *)FUN_031c36f4(&local_f0);
                }
                uVar34 = uVar22 >> 4;
                puVar16 = puVar30;
                if ((bVar6 & 1) == 0) {
                  uVar34 = uVar34 - 1;
                  uVar3 = *(undefined4 *)(puVar31 + 1);
                  uVar4 = *(undefined4 *)((long)puVar31 + 0xc);
                  *puVar30 = *puVar31;
                  puVar31 = puVar31 + 2;
                  *(undefined4 *)(puVar30 + 1) = uVar3;
                  *(undefined4 *)((long)puVar30 + 0xc) = uVar4;
                  puVar16 = puVar30 + 2;
                }
                if (bVar6 != 0) {
                  iVar18 = uVar34 + 2;
                  do {
                    iVar18 = iVar18 + -2;
                    uVar3 = *(undefined4 *)(puVar31 + 1);
                    uVar4 = *(undefined4 *)((long)puVar31 + 0xc);
                    *puVar16 = *puVar31;
                    *(undefined4 *)(puVar16 + 1) = uVar3;
                    *(undefined4 *)((long)puVar16 + 0xc) = uVar4;
                    uVar3 = *(undefined4 *)(puVar31 + 3);
                    uVar4 = *(undefined4 *)((long)puVar31 + 0x1c);
                    puVar16[2] = puVar31[2];
                    *(undefined4 *)(puVar16 + 3) = uVar3;
                    *(undefined4 *)((long)puVar16 + 0x1c) = uVar4;
                    puVar31 = puVar31 + 4;
                    puVar16 = puVar16 + 4;
                  } while (2 < iVar18);
                }
                local_d8 = local_d8 + uVar22;
                local_d4 = local_d4 + 1;
                iVar18 = ((int *)local_a0[lVar12])[1];
                lVar26 = *(long *)(param_1[0x73] + (long)*(int *)local_a0[lVar12] * 8);
                lVar20 = (long)*(int *)(lVar26 + 0x18) + -1;
                iVar19 = (int)lVar20;
                *(int *)(lVar26 + 0x18) = iVar19;
                if (iVar19 != iVar18) {
                  *(undefined8 *)(*(long *)(lVar26 + 0x10) + (long)iVar18 * 8) =
                       *(undefined8 *)(*(long *)(lVar26 + 0x10) + lVar20 * 8);
                  if (iVar18 < *(int *)(lVar26 + 0x18)) {
                    *(int *)(*(long *)(*(long *)(lVar26 + 0x10) + (long)iVar18 * 8) + 4) = iVar18;
                  }
                }
                *(undefined4 *)puVar30 = *(undefined4 *)(lVar26 + 0x20);
                *(undefined4 *)((long)puVar30 + 4) = *(undefined4 *)(lVar26 + 0x18);
                iVar18 = *(int *)(lVar26 + 0x18);
                lVar20 = (long)iVar18;
                if ((int)(*(uint *)(lVar26 + 0x1c) & 0x7fffffff) <= iVar18) {
                  FUN_02f5ed94(lVar26 + 0x10,puVar8,lVar20 + 1);
                  iVar18 = *(int *)(lVar26 + 0x18);
                }
                *(undefined8 **)(*(long *)(lVar26 + 0x10) + (long)iVar18 * 8) = puVar30;
                *(int *)(lVar26 + 0x18) = (int)(lVar20 + 1);
                if (((ulong)*(byte *)(puVar30 + 3) != 9) &&
                   (plVar32 = *(long **)(*(long *)(param_2 + 0x40) +
                                         (ulong)*(byte *)(puVar30 + 3) * 8 + 0x13b8),
                   (int)plVar32[1] != 0)) {
                  lVar20 = (long)(int)local_138;
                  if ((int)(local_138._4_4_ & 0x7fffffff) <= (int)local_138) {
                    FUN_02f5fa8c(&local_140,puVar8,lVar20 + 1);
                  }
                  puVar31 = (undefined8 *)(local_140 + (long)(int)local_138 * 0x10);
                  uVar9 = puVar30[7];
                  *puVar31 = puVar30[6];
                  puVar31[1] = uVar9;
                  local_138 = CONCAT44(local_138._4_4_,(int)(lVar20 + 1));
                  (**(code **)(*plVar32 + 0x38))(plVar32,puVar30 + 2,&local_118,0);
                }
                *(undefined1 *)(local_a0[lVar12] + 0x18) = 0;
                lVar12 = lVar12 + 1;
              } while (lVar12 < (int)local_98);
            }
            lVar12 = (long)(int)local_c0;
            if ((int)(local_c0._4_4_ & 0x7fffffff) <= (int)local_c0) {
              FUN_02f5fbfc(&local_c8,lVar12 + 1);
            }
            local_c8[(int)local_c0] = (long)puVar14;
            local_c0 = CONCAT44(local_c0._4_4_,(int)(lVar12 + 1));
            puVar15 = (uint *)*plVar2;
          }
          iVar33 = iVar33 + 1;
          local_98 = local_98 & 0xffffffff00000000;
          if (iVar33 == iVar11) {
            bVar29 = false;
            goto LAB_02f5d7d4;
          }
          bVar29 = false;
          if (puVar15 == puVar23) goto LAB_02f5d7d4;
          uVar22 = 0;
          puVar14 = puVar15;
        }
        if ((char)puVar35[6] == '\0') {
          uVar22 = uVar22 + 1;
        }
        else {
          lVar12 = (long)(int)local_98;
          if ((int)(local_98._4_4_ & 0x7fffffff) <= (int)local_98) {
            FUN_02f5ed94(&local_a0,puVar8,lVar12 + 1);
          }
          local_a0[(int)local_98] = (long)puVar35;
          local_98 = CONCAT44(local_98._4_4_,(int)(lVar12 + 1));
        }
        puVar35 = (uint *)(param_1[0x6e] + (ulong)*(byte *)((long)puVar35 + 0x19) * 0x10 + 0x10);
        iVar18 = *(int *)((long)param_1 + 0x37c);
        param_1[0x6e] = (long)puVar35;
        iVar19 = iVar18 + -1;
        *(int *)((long)param_1 + 0x37c) = iVar19;
        if (iVar19 == 0 || iVar18 < 1) break;
        if (puVar35 == (uint *)0x0) goto LAB_02f5d7d0;
        puVar15 = (uint *)*plVar2;
      }
      uVar34 = *(uint *)(param_1 + 0x6f);
      if (uVar34 == 0) {
        bVar29 = true;
        *plVar2 = 0;
        param_1[0x6e] = 0;
        goto LAB_02f5d7d4;
      }
      puVar15 = *(uint **)(*plVar2 + 8);
      *plVar2 = (long)puVar15;
      if (puVar15 == (uint *)0x0) break;
      uVar10 = *puVar15 & 0xffff;
      if ((int)uVar34 <= (int)(*puVar15 & 0xffff)) {
        uVar10 = uVar34;
      }
      if ((int)uVar10 < 1) break;
      puVar35 = puVar15 + 8;
      *(uint *)((long)param_1 + 0x37c) = uVar10;
      *(uint *)(param_1 + 0x6f) = uVar34 - uVar10;
      param_1[0x6e] = (long)puVar35;
    }
    param_1[0x6e] = 0;
  }
LAB_02f5d7d0:
  bVar29 = true;
LAB_02f5d7d4:
  puVar31 = local_110;
  if (local_fc == 0) {
    plVar32 = local_118 + 3;
    iVar11 = (int)*plVar32;
    if (iVar11 < 2) goto LAB_02f5d850;
    iVar33 = *(int *)(local_110 + 0xb);
    lVar20 = *(long *)(local_118[2] + (long)(iVar11 + -2) * 8);
    lVar12 = local_110[1];
    *(undefined8 *)(lVar12 + (long)iVar33 * 8) =
         *(undefined8 *)(local_118[2] + (long)(iVar11 + -1) * 8);
    *(int *)(local_110 + 0xb) = iVar33 + 1;
    if (*(int *)((long)local_110 + 0x5c) <= iVar33 + 1) {
      (**(code **)(*(long *)*local_110 + 0x28))
                ((long *)*local_110,lVar12 + (long)(iVar33 + -5) * 8,6);
      *(int *)(puVar31 + 0xb) = iVar33 + -5;
    }
    *(undefined8 *)(lVar20 + 8) = 0;
    uVar22 = 0xffffffff;
  }
  else {
LAB_02f5d850:
    plVar32 = local_118 + 1;
    local_108[2] = 0;
    local_108[3] = 0;
    *local_108 = *local_108 & 0xffff0000 | local_fc & 0xffff;
    *local_108 = *local_108 & 0xffff | local_100 << 0x10;
    uVar22 = local_fc;
  }
  puVar31 = local_e8;
  *(uint *)plVar32 = (int)*plVar32 + uVar22;
  local_118 = (long *)0x0;
  local_108 = (uint *)0x0;
  if (local_d4 == 0) {
    plVar32 = local_f0 + 3;
    iVar11 = (int)*plVar32;
    if (iVar11 < 2) goto LAB_02f5d908;
    iVar33 = *(int *)(local_e8 + 0xb);
    lVar20 = *(long *)(local_f0[2] + (long)(iVar11 + -2) * 8);
    lVar12 = local_e8[1];
    *(undefined8 *)(lVar12 + (long)iVar33 * 8) =
         *(undefined8 *)(local_f0[2] + (long)(iVar11 + -1) * 8);
    *(int *)(local_e8 + 0xb) = iVar33 + 1;
    if (*(int *)((long)local_e8 + 0x5c) <= iVar33 + 1) {
      (**(code **)(*(long *)*local_e8 + 0x28))((long *)*local_e8,lVar12 + (long)(iVar33 + -5) * 8,6)
      ;
      *(int *)(puVar31 + 0xb) = iVar33 + -5;
    }
    *(undefined8 *)(lVar20 + 8) = 0;
    uVar22 = 0xffffffff;
  }
  else {
LAB_02f5d908:
    plVar32 = local_f0 + 1;
    local_e0[2] = 0;
    local_e0[3] = 0;
    *local_e0 = *local_e0 & 0xffff0000 | local_d4 & 0xffff;
    *local_e0 = *local_e0 & 0xffff | local_d8 << 0x10;
    uVar22 = local_d4;
  }
  *(uint *)plVar32 = (int)*plVar32 + uVar22;
  iVar11 = (int)local_c0;
  uVar13 = local_c0 & 0xffffffff;
  local_f0 = (long *)0x0;
  local_e0 = (uint *)0x0;
  if (0 < (int)local_c0) {
    plVar32 = local_c8;
    do {
      lVar20 = *plVar32;
      puVar31 = *(undefined8 **)(param_2 + 0x4e0);
      *(undefined8 *)(param_1[4] + (long)*(int *)(lVar20 + 4) * 8) = 0;
      *(undefined1 *)((long)param_1 + 0x1c) = 1;
      iVar33 = *(int *)(puVar31 + 0xb);
      lVar12 = puVar31[1];
      *(long *)(lVar12 + (long)iVar33 * 8) = lVar20;
      *(int *)(puVar31 + 0xb) = iVar33 + 1;
      if (*(int *)((long)puVar31 + 0x5c) <= iVar33 + 1) {
        (**(code **)(*(long *)*puVar31 + 0x28))((long *)*puVar31,lVar12 + (long)(iVar33 + -5) * 8,6)
        ;
        *(int *)(puVar31 + 0xb) = iVar33 + -5;
      }
      uVar13 = uVar13 - 1;
      plVar32 = plVar32 + 1;
    } while (uVar13 != 0);
  }
  if (iVar11 != 0) {
    FUN_031c3378(plVar1,*(undefined8 *)(param_2 + 0x4e0));
  }
  if ((bVar29) || ((uint *)*plVar2 == puVar23)) {
    *(undefined1 *)((long)param_1 + 0x361) = 0;
  }
  if (0 < (int)local_138) {
    lVar12 = 0;
    plVar2 = param_1 + 0x43;
    do {
      puVar30 = *(undefined8 **)(param_2 + 0x4e0);
      puVar31 = (undefined8 *)(local_140 + lVar12 * 0x10);
      uVar22 = *(uint *)((long)puVar31 + 0xc);
      if (uVar22 == 0) {
        uVar22 = 0;
      }
      else {
        puVar23 = (uint *)*puVar31;
        uVar34 = (uint)*(ushort *)((long)puVar31 + 10);
        do {
          if (uVar34 == (*puVar23 & 0xffff)) {
            puVar35 = *(uint **)(puVar23 + 2);
            *(undefined8 *)(param_1[0x44] + (long)(int)puVar23[1] * 8) = 0;
            *(undefined1 *)((long)param_1 + 0x21c) = 1;
            iVar11 = *(int *)(puVar30 + 0xb);
            lVar20 = puVar30[1];
            *(uint **)(lVar20 + (long)iVar11 * 8) = puVar23;
            *(int *)(puVar30 + 0xb) = iVar11 + 1;
            if (*(int *)((long)puVar30 + 0x5c) <= iVar11 + 1) {
              (**(code **)(*(long *)*puVar30 + 0x28))
                        ((long *)*puVar30,lVar20 + (long)(iVar11 + -5) * 8,6);
              *(int *)(puVar30 + 0xb) = iVar11 + -5;
            }
            uVar22 = uVar22 - uVar34;
            if (puVar35 == (uint *)0x0) {
              uVar10 = 0;
            }
            else {
              uVar10 = *puVar35 & 0xffff;
            }
            uVar34 = uVar22;
            if ((int)uVar10 <= (int)uVar22) {
              uVar34 = uVar10;
            }
            puVar23 = puVar35;
          }
          else {
            do {
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(puVar23,0x10);
              if (bVar29) {
                *puVar23 = *puVar23 - uVar34;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            uVar22 = uVar22 - uVar34;
            if (uVar22 == 0) break;
            puVar23 = *(uint **)(puVar23 + 2);
            uVar34 = uVar22;
            if ((int)(*puVar23 & 0xffff) <= (int)uVar22) {
              uVar34 = *puVar23 & 0xffff;
            }
          }
        } while (uVar22 != 0);
        uVar22 = *(uint *)((long)puVar31 + 0xc);
      }
      do {
        cVar7 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar29) {
          *(uint *)plVar2 = (int)*plVar2 - uVar22;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      *(undefined1 *)((long)param_1 + 0x21c) = 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)local_138);
  }
  FUN_031c3378(plVar27,*(undefined8 *)(param_2 + 0x4e0));
  if (local_128 == local_140) {
    local_138 = local_138 & 0xffffffff00000000;
  }
  if (local_130 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar13 = local_120 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_130 + 0x28) < uVar13) ||
       (*(long *)(local_130 + 0x38) != uVar13 + local_128)) {
      if (local_128 != 0) {
        if (*(ulong *)(local_130 + 0x28) < uVar13 + 0x40) {
          *(int *)(*(long *)(local_130 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_130 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_130 + 0x10) + 0x18))
                    (*(long **)(local_130 + 0x10),local_128 - *(int *)(local_128 + -4),uVar13 + 0x44
                    );
        }
        else {
          if (*(long *)(local_130 + 0x38) == uVar13 + local_128) {
            *(long *)(local_130 + 0x38) = local_128;
            goto LAB_02f5dc04;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_130 + 0x38) = local_128;
      if (*(long *)(local_130 + 0x48) == local_128) {
LAB_02f5dc04:
        FUN_031cf578();
      }
    }
  }
  uVar13 = local_138;
  puVar8 = PTR_PTR_047d1a50;
  uVar17 = (ulong)local_138._4_4_;
  local_138 = (ulong)local_138._4_4_ << 0x20;
  if ((-1 < (long)uVar13) && (local_140 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_140,uVar17 << 4);
  }
  puVar31 = local_110;
  if (local_118 != (long *)0x0) {
    if (local_fc == 0) {
      plVar27 = local_118 + 3;
      iVar11 = (int)*plVar27;
      if (iVar11 < 2) goto LAB_02f5dcb8;
      iVar33 = *(int *)(local_110 + 0xb);
      lVar20 = *(long *)(local_118[2] + (long)(iVar11 + -2) * 8);
      lVar12 = local_110[1];
      *(undefined8 *)(lVar12 + (long)iVar33 * 8) =
           *(undefined8 *)(local_118[2] + (long)(iVar11 + -1) * 8);
      *(int *)(local_110 + 0xb) = iVar33 + 1;
      if (*(int *)((long)local_110 + 0x5c) <= iVar33 + 1) {
        (**(code **)(*(long *)*local_110 + 0x28))
                  ((long *)*local_110,lVar12 + (long)(iVar33 + -5) * 8,6);
        *(int *)(puVar31 + 0xb) = iVar33 + -5;
      }
      *(undefined8 *)(lVar20 + 8) = 0;
      uVar22 = 0xffffffff;
    }
    else {
LAB_02f5dcb8:
      plVar27 = local_118 + 1;
      local_108[2] = 0;
      local_108[3] = 0;
      *local_108 = *local_108 & 0xffff0000 | local_fc & 0xffff;
      *local_108 = *local_108 & 0xffff | local_100 << 0x10;
      uVar22 = local_fc;
    }
    *(uint *)plVar27 = (int)*plVar27 + uVar22;
    local_118 = (long *)0x0;
    local_108 = (uint *)0x0;
  }
  puVar31 = local_e8;
  if (local_f0 != (long *)0x0) {
    if (local_d4 == 0) {
      plVar27 = local_f0 + 3;
      iVar11 = (int)*plVar27;
      if (iVar11 < 2) goto LAB_02f5dd74;
      iVar33 = *(int *)(local_e8 + 0xb);
      lVar20 = *(long *)(local_f0[2] + (long)(iVar11 + -2) * 8);
      lVar12 = local_e8[1];
      *(undefined8 *)(lVar12 + (long)iVar33 * 8) =
           *(undefined8 *)(local_f0[2] + (long)(iVar11 + -1) * 8);
      *(int *)(local_e8 + 0xb) = iVar33 + 1;
      if (*(int *)((long)local_e8 + 0x5c) <= iVar33 + 1) {
        (**(code **)(*(long *)*local_e8 + 0x28))
                  ((long *)*local_e8,lVar12 + (long)(iVar33 + -5) * 8,6);
        *(int *)(puVar31 + 0xb) = iVar33 + -5;
      }
      *(undefined8 *)(lVar20 + 8) = 0;
      uVar22 = 0xffffffff;
    }
    else {
LAB_02f5dd74:
      plVar27 = local_f0 + 1;
      local_e0[2] = 0;
      local_e0[3] = 0;
      *local_e0 = *local_e0 & 0xffff0000 | local_d4 & 0xffff;
      *local_e0 = *local_e0 & 0xffff | local_d8 << 0x10;
      uVar22 = local_d4;
    }
    *(uint *)plVar27 = (int)*plVar27 + uVar22;
    local_f0 = (long *)0x0;
    local_e0 = (uint *)0x0;
  }
  plVar27 = local_c8;
  if (local_b0 == local_c8) {
    local_c0 = local_c0 & 0xffffffff00000000;
  }
  if (local_b8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar13 = (long)local_a8 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_b8 + 0x28) < uVar13) ||
       (*(long *)(local_b8 + 0x38) != uVar13 + (long)local_b0)) {
      if (local_b0 != (long *)0x0) {
        if (*(ulong *)(local_b8 + 0x28) < uVar13 + 0x40) {
          *(int *)(*(long *)(local_b8 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_b8 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_b8 + 0x10) + 0x18))
                    (*(long **)(local_b8 + 0x10),
                     (long)local_b0 - (long)*(int *)((long)local_b0 + -4),uVar13 + 0x44);
        }
        else {
          if (*(long *)(local_b8 + 0x38) == uVar13 + (long)local_b0) {
            *(long **)(local_b8 + 0x38) = local_b0;
            goto LAB_02f5de78;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long **)(local_b8 + 0x38) = local_b0;
      if (*(long **)(local_b8 + 0x48) == local_b0) {
LAB_02f5de78:
        FUN_031cf578();
      }
    }
  }
  uVar17 = local_c0;
  uVar13 = local_c0 >> 0x20;
  local_c0 = uVar13 << 0x20;
  if ((plVar27 != (long *)0x0) && (-1 < (long)uVar17)) {
    (**(code **)(*(long *)puVar8 + 0x20))(puVar8,plVar27,uVar13 << 3);
  }
  plVar27 = local_a0;
  if (local_88 == local_a0) {
    local_98 = local_98 & 0xffffffff00000000;
  }
  if (local_90 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_02f5df70;
  }
  uVar13 = local_80 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_90 + 0x28) < uVar13) ||
     (*(long *)(local_90 + 0x38) != uVar13 + (long)local_88)) {
    if (local_88 == (long *)0x0) goto LAB_02f5df70;
    if (*(ulong *)(local_90 + 0x28) < uVar13 + 0x40) {
      *(int *)(*(long *)(local_90 + 0x30) + 0x20) = *(int *)(*(long *)(local_90 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_90 + 0x10) + 0x18))
                (*(long **)(local_90 + 0x10),(long)local_88 - (long)*(int *)((long)local_88 + -4),
                 uVar13 + 0x44);
      goto LAB_02f5df70;
    }
    if (*(long *)(local_90 + 0x38) != uVar13 + (long)local_88) {
      FUN_031cf778();
      goto LAB_02f5df70;
    }
    *(long **)(local_90 + 0x38) = local_88;
  }
  else {
    *(long **)(local_90 + 0x38) = local_88;
    if (*(long **)(local_90 + 0x48) != local_88) goto LAB_02f5df70;
  }
  FUN_031cf578();
LAB_02f5df70:
  uVar17 = local_98;
  uVar13 = local_98 >> 0x20;
  local_98 = uVar13 << 0x20;
  if ((plVar27 != (long *)0x0) && (-1 < (long)uVar17)) {
    (**(code **)(*(long *)puVar8 + 0x20))(puVar8,plVar27,uVar13 << 3);
  }
  if (plVar24 != (long *)0x0) {
    lVar12 = *plVar24;
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
      puVar31 = (undefined8 *)plVar24[2];
      uVar13 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar24[3]) && (plVar24[2] = uVar13, puVar31 != (undefined8 *)0x0)) {
        *puVar31 = &DAT_03c4e575;
        puVar31[1] = *(undefined8 *)(plVar24[6] + 8);
      }
    }
    puVar31 = (undefined8 *)plVar24[2];
    uVar13 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar24[3]) && (plVar24[2] = uVar13, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = &DAT_03c2d363;
      uVar9 = nn::os::GetSystemTick();
      puVar31[1] = uVar9;
    }
    if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
      (**(code **)(lVar12 + 0x20))(*(undefined8 *)(lVar12 + 0x28));
    }
  }
  lVar12 = *(long *)(lVar28 + 0x1000b8);
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar28 + 0x1000b8) = lVar12;
  }
  plVar24 = *(long **)(lVar12 + 0x3e0);
  if (plVar24 != (long *)0x0) {
    lVar28 = *plVar24;
    if (*(code **)(lVar28 + 0x18) != (code *)0x0) {
      (**(code **)(lVar28 + 0x18))("InactiveBodyMaintenence",0x17,*(undefined8 *)(lVar28 + 0x28));
    }
    puVar31 = (undefined8 *)plVar24[2];
    uVar13 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar24[3]) && (plVar24[2] = uVar13, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = "TtInactiveBodyMaintenence";
      uVar9 = nn::os::GetSystemTick();
      puVar31[1] = uVar9;
    }
    if (((*(byte *)(lVar28 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
      puVar31 = (undefined8 *)plVar24[2];
      uVar13 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar24[3]) && (plVar24[2] = uVar13, puVar31 != (undefined8 *)0x0)) {
        *puVar31 = &DAT_03c4e575;
        puVar31[1] = *(undefined8 *)(plVar24[6] + 8);
      }
    }
  }
  lVar26 = *param_1;
  lVar12 = *(long *)(lVar26 + 0x80);
  lVar28 = param_1[0x62];
  lVar20 = param_1[99];
  uVar22 = *(uint *)(lVar20 + 4);
  local_a0 = plVar24;
  if ((lVar28 != lVar20) || (uVar22 != 0)) {
    uVar34 = 0;
    do {
      uVar10 = *(uint *)(lVar28 + ((long)((ulong)uVar34 << 0x20) >> 0x1e) + 0x10);
      uVar13 = (ulong)uVar10 & 0xffffff;
      if (((uint)uVar13 != 0xffffff) && ((uint)uVar13 < *(uint *)(lVar26 + 0x40))) {
        lVar21 = *(long *)(lVar26 + 0x38);
        uVar5 = *(uint *)(lVar21 + uVar13 * 0xc0 + 0x54);
        if (((uVar5 & 3) != 0) &&
           ((*(uint *)(lVar21 + uVar13 * 0xc0 + 0x50) == uVar10 &&
            ((*(byte *)(lVar21 + uVar13 * 0xc0 + 0x88) & 1) != 0)))) {
          if ((uVar5 >> 3 & 1) == 0) {
            lVar21 = lVar21 + uVar13 * 0xc0;
            puVar31 = (undefined8 *)(lVar12 + uVar13 * 0x18);
            uVar9 = *(undefined8 *)(lVar21 + 0x60);
            uVar25 = *(undefined8 *)(lVar21 + 0x70);
            puVar31[1] = *(undefined8 *)(lVar21 + 0x68);
            puVar31[2] = uVar25;
            *puVar31 = uVar9;
            *(undefined2 *)(lVar21 + 0x58) = 0x28;
          }
          iVar11 = (int)param_1[0x65];
          lVar21 = (long)iVar11;
          if ((int)(*(uint *)((long)param_1 + 0x32c) & 0x7fffffff) <= iVar11) {
            FUN_02f23d90(param_1 + 100,PTR_PTR_047d1a50,lVar21 + 1);
            iVar11 = (int)param_1[0x65];
          }
          *(uint *)(param_1[100] + (long)iVar11 * 4) = uVar10;
          *(int *)(param_1 + 0x65) = (int)(lVar21 + 1);
        }
      }
      uVar10 = uVar34 + 1;
      if ((0xfe < (int)uVar34) || (*(int *)(lVar28 + 4) <= (int)uVar10)) {
        if (*(long *)(lVar28 + 8) != 0) {
          uVar10 = 0;
          lVar28 = *(long *)(lVar28 + 8);
        }
      }
      uVar34 = uVar10;
    } while ((lVar28 != lVar20) || (uVar22 != uVar10));
    lVar20 = param_1[0x62];
  }
  lVar28 = *(long *)(lVar20 + 8);
  *(undefined8 *)(lVar20 + 8) = 0;
  lVar12 = param_1[0x62];
  uVar34 = *(uint *)(lVar12 + 4);
  uVar22 = uVar34;
  if (0xff < (int)uVar34) {
    uVar22 = 0x100;
  }
  if (0 < (int)uVar34) {
    uVar34 = uVar22;
    if ((int)uVar22 < 2) {
      uVar34 = 1;
    }
    if ((int)uVar22 < 2) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      do {
        *(undefined4 *)(lVar12 + uVar13 * 4 + 0x10) = 0xffffff;
        lVar12 = uVar13 * 4;
        uVar13 = uVar13 + 2;
        *(undefined4 *)(param_1[0x62] + lVar12 + 0x14) = 0xffffff;
        lVar12 = param_1[0x62];
      } while (((ulong)uVar34 & 0x7ffffffe) != uVar13);
    }
    if ((uVar34 & 1) != 0) {
      *(undefined4 *)(lVar12 + uVar13 * 4 + 0x10) = 0xffffff;
      lVar12 = param_1[0x62];
    }
  }
  *(undefined4 *)(lVar12 + 4) = 0;
  param_1[99] = param_1[0x62];
  puVar8 = PTR_DAT_047d1a08;
  while (lVar28 != 0) {
    lVar12 = *(long *)(lVar28 + 8);
    (**(code **)(puVar8 + 8))(0,lVar28,0);
    lVar28 = lVar12;
  }
  if (plVar24 != (long *)0x0) {
    lVar28 = *plVar24;
    if (((*(byte *)(lVar28 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
      puVar31 = (undefined8 *)plVar24[2];
      uVar13 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar24[3]) && (plVar24[2] = uVar13, puVar31 != (undefined8 *)0x0)) {
        *puVar31 = &DAT_03c4e575;
        puVar31[1] = *(undefined8 *)(plVar24[6] + 8);
      }
    }
    puVar31 = (undefined8 *)plVar24[2];
    uVar13 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= (ulong)plVar24[3]) && (plVar24[2] = uVar13, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = &DAT_03c2d363;
      uVar9 = nn::os::GetSystemTick();
      puVar31[1] = uVar9;
    }
    if (*(code **)(lVar28 + 0x20) != (code *)0x0) {
      (**(code **)(lVar28 + 0x20))(*(undefined8 *)(lVar28 + 0x28));
    }
  }
  FUN_031c3378(plVar1,*(undefined8 *)(param_2 + 0x4e0));
  return;
}


