/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011494dc; name: FUN_011494dc
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011494dc(long *param_1,byte *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  size_t __n;
  short sVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *****ppppplVar11;
  uint *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long ****pppplVar18;
  long *plVar19;
  long ***ppplVar20;
  code *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  undefined2 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  uint uVar30;
  ulong uVar31;
  long ****pppplVar32;
  ulong *puVar33;
  char *pcVar34;
  long ****pppplVar35;
  undefined2 *puVar36;
  uint *puVar37;
  undefined8 *puVar38;
  undefined2 *puVar39;
  undefined2 *puVar40;
  long *plVar41;
  byte *__s;
  uint *puVar42;
  undefined4 uVar43;
  long *****local_128;
  byte *local_120;
  size_t local_118;
  long *local_110;
  uint *local_108;
  uint *local_100;
  uint *local_f8;
  uint *local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint *local_d0;
  uint *local_c8;
  uint *local_c0;
  uint *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  long *****local_68;
  
  *param_1 = (long)&PTR_FUN_04606e50;
  param_1[1] = (long)param_2;
  plVar14 = param_1 + 2;
  *plVar14 = 0;
  param_1[7] = 0;
  param_1[5] = (long)param_2;
  param_1[6] = 0x2e8ba2e8ba2e8ba;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  plVar15 = param_1 + 9;
  *plVar15 = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (long)param_2;
  param_1[0xd] = 0x3ffffffffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  plVar41 = param_1 + 0x17;
  *plVar41 = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x13] = (long)param_2;
  param_1[0x14] = 0x3ffffffffffffff;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  lVar17 = tpidr_el0;
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar17 + 0x30), lVar8 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar8 = DAT_04859430;
    *(long *)(lVar17 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = 0x666666666666666;
  param_1[0x1b] = 0;
  param_1[0x19] = lVar8;
  param_1[0x1d] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar17 + 0x30), lVar8 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar8 = DAT_04859430;
    *(long *)(lVar17 + 0x30) = DAT_04859430;
  }
  param_1[0x1e] = lVar8;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  param_1[0x26] = param_1[1];
  param_1[0x27] = 0xfffffffffffffff;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = param_1[1];
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = -1;
  *(undefined2 *)(param_1 + 0x33) = 0xffff;
  *(undefined1 *)((long)param_1 + 0x19a) = 1;
  param_1[0x24] = (long)(param_1 + 0x25);
  param_1[0x25] = 0;
  param_1[0x1f] = 0x666666666666666;
  param_1[0x20] = 0;
  param_1[0x2e] = 0xfffffffffffffff;
  param_1[0x2f] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = (long)(param_1 + 0x2c);
  plVar16 = (long *)param_3[0xb];
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  lVar17 = plVar16[3];
  lVar8 = plVar16[4];
  lVar10 = plVar16[6];
  param_1[0x39] = plVar16[5];
  param_1[0x3a] = lVar10;
  param_1[0x37] = lVar17;
  param_1[0x38] = lVar8;
  param_1[0x34] = *plVar16;
  param_1[0x35] = plVar16[1];
  param_1[0x36] = plVar16[2];
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = 0;
  param_1[0x3b] = plVar16[7];
  plVar16[7] = 0;
  plVar16 = (long *)param_3[0xc];
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3c] = 0;
  lVar17 = plVar16[3];
  lVar10 = plVar16[4];
  lVar8 = plVar16[5];
  param_1[0x42] = plVar16[6];
  param_1[0x41] = lVar8;
  param_1[0x3f] = lVar17;
  param_1[0x40] = lVar10;
  param_1[0x3c] = *plVar16;
  param_1[0x3d] = plVar16[1];
  param_1[0x3e] = plVar16[2];
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = 0;
  param_1[0x43] = plVar16[7];
  plVar16[7] = 0;
  *(short *)(param_1 + 0x44) = (short)param_3[0xd];
  lVar17 = param_1[2];
  param_1[0x45] = 0;
  uVar31 = param_3[1];
  if ((ulong)((param_1[4] - lVar17 >> 3) * 0x2e8ba2e8ba2e8ba3) < uVar31) {
    lVar8 = param_1[3];
    local_b8 = (uint *)0x0;
    plStack_b0 = param_1 + 5;
    local_d0 = (uint *)(**(code **)(*(long *)param_1[5] + 0x10))((long *)param_1[5],uVar31 * 0x58,8)
    ;
    if (local_d0 == (uint *)0x0) {
      (**(code **)(*(long *)param_1[5] + 0xe8))();
    }
    local_c8 = local_d0 + (lVar8 - lVar17 >> 3) * 2;
    local_b8 = local_d0 + uVar31 * 0x16;
    local_c0 = local_c8;
    FUN_0114c94c(plVar14,&local_d0);
    FUN_0114c4b4(&local_d0);
    uVar31 = param_3[1];
  }
  if (uVar31 != 0) {
    uVar31 = 0;
    plVar16 = param_1 + 0x1d;
    do {
      lVar17 = *param_3;
      local_d0 = (uint *)0x0;
      local_c8 = (uint *)0x0;
      FUN_0114b668(&local_c0);
      uVar30 = *(uint *)(lVar17 + uVar31 * 0x28 + 0x18);
      uVar43 = 0x3f800000;
      if ((uVar30 & 1) != 0) {
        uVar43 = *(undefined4 *)(lVar17 + uVar31 * 0x28 + 0x1c);
      }
      uStack_90 = 0x3f800000;
      if ((uVar30 >> 1 & 1) != 0) {
        uStack_90 = *(undefined4 *)(lVar17 + uVar31 * 0x28 + 0x20);
      }
      local_8c = 0x3f800000;
      if ((uVar30 >> 2 & 1) != 0) {
        local_8c = *(undefined4 *)(lVar17 + uVar31 * 0x28 + 0x24);
      }
      local_88 = 0x3f8000003f800000;
      local_98 = CONCAT44(uVar43,uVar30);
      local_80 = 0x3f800000;
      local_f0 = (uint *)param_1[1];
      local_d8 = 0;
      local_f8 = (uint *)0x0;
      local_108 = (uint *)0x0;
      local_100 = (uint *)0x0;
      local_e8 = (long *)0x3fffffffffffffff;
      local_e0 = 0;
      puVar33 = (ulong *)(lVar17 + uVar31 * 0x28 + 8);
      FUN_0114b7a0(&local_108,*puVar33);
      if (*puVar33 != 0) {
        uVar30 = 1;
        do {
          puVar42 = local_f0;
          puVar12 = local_100;
          uVar3 = *(uint *)(*(long *)(lVar17 + uVar31 * 0x28) + (long)(int)(uVar30 - 1) * 4);
          local_128 = (long *****)CONCAT44(local_128._4_4_,uVar3);
          if (local_100 < local_f8) {
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar8 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar8 == 0) {
              *puVar12 = uVar3;
            }
            else {
              if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0114b440;
              *(uint **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = puVar42;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
              *puVar12 = uVar3;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            }
            local_100 = puVar12 + 1;
          }
          else {
            FUN_0114d068(&local_108,&local_128);
          }
          uVar26 = (ulong)uVar30;
          uVar30 = uVar30 + 1;
        } while (uVar26 < *puVar33);
      }
      puVar42 = local_b8;
      puVar12 = local_d0;
      if (local_d0 != (uint *)0x0) {
        local_c8 = local_d0;
        lVar8 = (long)local_c0 - (long)local_d0;
        uVar26 = (**(code **)(*(long *)local_b8 + 0xf8))(local_b8);
        if (((uVar26 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*(long *)puVar42 + 0x18))(puVar42,puVar12,lVar8,4);
        }
        else {
          FUN_00c48fe8(puVar42,puVar12,lVar8,4);
        }
      }
      local_c0 = local_f8;
      local_c8 = local_100;
      local_d0 = local_108;
      uStack_a0 = CONCAT44(uStack_d4,local_d8);
      local_b8 = local_f0;
      plStack_b0 = local_e8;
      local_a8 = local_e0;
      local_108 = (uint *)0x0;
      local_100 = (uint *)0x0;
      local_f8 = (uint *)0x0;
      pcVar34 = *(char **)(lVar17 + uVar31 * 0x28 + 0x10);
      if (pcVar34 != (char *)0x0) {
        lVar17 = param_1[2];
        lVar8 = param_1[3];
        local_68 = (long *****)0x0;
        if (*pcVar34 == '\0') {
          ppppplVar11 = (long *****)FUN_00d44228();
          if (ppppplVar11 != (long *****)0x0) {
            (*(code *)(*ppppplVar11)[3])(ppppplVar11);
          }
          if (local_68 != (long *****)0x0) {
            ppplVar20 = (long ***)*local_68;
            local_68 = ppppplVar11;
            (*(code *)ppplVar20[4])();
            ppppplVar11 = local_68;
          }
        }
        else {
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar9 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar9;
          FUN_00cf9884(&local_128,uVar9,pcVar34);
          ppppplVar11 = local_68;
          local_68 = (long *****)0x0;
          if (ppppplVar11 != (long *****)0x0) {
            (*(code *)(*ppppplVar11)[4])();
          }
          local_68 = local_128;
          ppppplVar11 = local_68;
        }
        local_68 = ppppplVar11;
        local_128 = (long *****)&local_68;
        lVar10 = FUN_0114bb60(param_1 + 0x24,&local_68,&local_128);
        *(long *)(lVar10 + 0x28) = (lVar8 - lVar17 >> 3) * 0x2e8ba2e8ba2e8ba3;
        if (local_68 != (long *****)0x0) {
          (*(code *)(*local_68)[4])();
        }
      }
      puVar12 = local_c8;
      plVar29 = (long *)param_3[10];
      if ((plVar29 != (long *)0x0) && (puVar42 = local_d0, local_d0 != local_c8)) {
LAB_01149a0c:
        uVar26 = plVar29[1];
        if (uVar26 != 0) {
          uVar27 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
          uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
          uVar30 = *puVar42;
          uVar23 = (ulong)(short)uVar30;
          uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar27 < 2) {
            uVar28 = uVar26 - 1 & uVar23;
          }
          else {
            uVar28 = uVar23;
            if (uVar26 <= uVar23) {
              uVar28 = 0;
              if (uVar26 != 0) {
                uVar28 = uVar23 / uVar26;
              }
              uVar28 = uVar23 - uVar28 * uVar26;
            }
          }
          plVar29 = *(long **)(*plVar29 + uVar28 * 8);
          if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
            if (uVar27 < 2) {
              do {
                if (plVar29[1] == uVar23) {
                  if ((uint)*(ushort *)(plVar29 + 2) == (uVar30 & 0xffff)) goto LAB_01149a9c;
                }
                else if ((plVar29[1] & uVar26 - 1) != uVar28) break;
                plVar29 = (long *)*plVar29;
              } while (plVar29 != (long *)0x0);
            }
            else {
              do {
                uVar27 = plVar29[1];
                if (uVar27 == uVar23) {
                  if ((uint)*(ushort *)(plVar29 + 2) == (uVar30 & 0xffff)) goto LAB_01149a9c;
                }
                else {
                  if (uVar26 <= uVar27) {
                    uVar6 = 0;
                    if (uVar26 != 0) {
                      uVar6 = uVar27 / uVar26;
                    }
                    uVar27 = uVar27 - uVar6 * uVar26;
                  }
                  if (uVar27 != uVar28) break;
                }
                plVar29 = (long *)*plVar29;
              } while (plVar29 != (long *)0x0);
            }
          }
        }
        goto LAB_01149d9c;
      }
LAB_01149edc:
      puVar38 = (undefined8 *)param_1[3];
      if (puVar38 < (undefined8 *)param_1[4]) {
        lVar17 = param_1[5];
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 != 0) {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0114b440;
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar17;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        }
        puVar38[5] = local_a8;
        puVar38[6] = uStack_a0;
        puVar38[3] = local_b8;
        puVar38[4] = plStack_b0;
        *puVar38 = local_d0;
        puVar38[1] = local_c8;
        puVar38[2] = local_c0;
        local_c8 = (uint *)0x0;
        local_c0 = (uint *)0x0;
        local_d0 = (uint *)0x0;
        *(undefined4 *)(puVar38 + 10) = local_80;
        puVar38[7] = local_98;
        puVar38[8] = CONCAT44(local_8c,uStack_90);
        puVar38[9] = local_88;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        param_1[3] = (long)(puVar38 + 0xb);
      }
      else {
        FUN_0114ce70(plVar14,&local_d0);
      }
      puVar42 = local_f0;
      puVar12 = local_108;
      if (local_108 != (uint *)0x0) {
        local_100 = local_108;
        lVar17 = (long)local_f8 - (long)local_108;
        uVar26 = (**(code **)(*(long *)local_f0 + 0xf8))(local_f0);
        if (((uVar26 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*(long *)puVar42 + 0x18))(puVar42,puVar12,lVar17,4);
        }
        else {
          FUN_00c48fe8(puVar42,puVar12,lVar17,4);
        }
      }
      puVar42 = local_b8;
      puVar12 = local_d0;
      if (local_d0 != (uint *)0x0) {
        local_c8 = local_d0;
        lVar17 = (long)local_c0 - (long)local_d0;
        uVar26 = (**(code **)(*(long *)local_b8 + 0xf8))(local_b8);
        if (((uVar26 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*(long *)puVar42 + 0x18))(puVar42,puVar12,lVar17,4);
        }
        else {
          FUN_00c48fe8(puVar42,puVar12,lVar17,4);
        }
      }
      uVar31 = (ulong)((int)uVar31 + 1);
    } while (uVar31 < (ulong)param_3[1]);
  }
  lVar17 = param_1[9];
  uVar31 = param_3[3];
  if ((ulong)(param_1[0xb] - lVar17 >> 6) < uVar31) {
    lVar8 = param_1[10];
    local_b8 = (uint *)0x0;
    plStack_b0 = param_1 + 0xc;
    puVar12 = (uint *)(**(code **)(*(long *)param_1[0xc] + 0x10))
                                ((long *)param_1[0xc],uVar31 << 6,8);
    if (puVar12 == (uint *)0x0) {
      (**(code **)(*(long *)param_1[0xc] + 0xe8))();
    }
    local_c8 = puVar12 + (lVar8 - lVar17 >> 6) * 0x10;
    local_b8 = puVar12 + uVar31 * 0x10;
    local_d0 = puVar12;
    local_c0 = local_c8;
    FUN_0114c7bc(plVar15,&local_d0);
    FUN_0114c638(&local_d0);
    uVar31 = param_3[3];
  }
  if (uVar31 != 0) {
    uVar31 = 0;
    do {
      lVar17 = param_3[2];
      local_d0 = (uint *)0x0;
      local_c8 = (uint *)0x0;
      FUN_0114b668(&local_c0);
      plVar14 = (long *)(lVar17 + uVar31 * 0x20);
      local_98 = CONCAT44(0x3f800000,(int)plVar14[3]);
      local_f0 = (uint *)param_1[1];
      local_108 = (uint *)0x0;
      local_100 = (uint *)0x0;
      local_d8 = 0;
      local_f8 = (uint *)0x0;
      local_e8 = (long *)0x3fffffffffffffff;
      local_e0 = 0;
      puVar33 = (ulong *)(plVar14 + 1);
      FUN_0114b7a0(&local_108,*puVar33);
      if (*puVar33 != 0) {
        uVar30 = 1;
        do {
          puVar42 = local_f0;
          puVar12 = local_100;
          uVar3 = *(uint *)(*plVar14 + (long)(int)(uVar30 - 1) * 4);
          local_128 = (long *****)CONCAT44(local_128._4_4_,uVar3);
          if (local_100 < local_f8) {
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar17 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar17 == 0) {
              *puVar12 = uVar3;
            }
            else {
              if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_0114b440;
              *(uint **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = puVar42;
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
              *puVar12 = uVar3;
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
            }
            local_100 = puVar12 + 1;
          }
          else {
            FUN_0114d068(&local_108,&local_128);
          }
          uVar26 = (ulong)uVar30;
          uVar30 = uVar30 + 1;
        } while (uVar26 < *puVar33);
      }
      puVar42 = local_b8;
      puVar12 = local_d0;
      if (local_d0 != (uint *)0x0) {
        local_c8 = local_d0;
        lVar17 = (long)local_c0 - (long)local_d0;
        uVar26 = (**(code **)(*(long *)local_b8 + 0xf8))(local_b8);
        if (((uVar26 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*(long *)puVar42 + 0x18))(puVar42,puVar12,lVar17,4);
        }
        else {
          FUN_00c48fe8(puVar42,puVar12,lVar17,4);
        }
      }
      local_c0 = local_f8;
      local_c8 = local_100;
      local_d0 = local_108;
      uStack_a0 = CONCAT44(uStack_d4,local_d8);
      local_b8 = local_f0;
      plStack_b0 = local_e8;
      local_a8 = local_e0;
      local_108 = (uint *)0x0;
      local_100 = (uint *)0x0;
      local_f8 = (uint *)0x0;
      pcVar34 = (char *)plVar14[2];
      if (pcVar34 != (char *)0x0) {
        lVar17 = param_1[9];
        lVar8 = param_1[10];
        local_68 = (long *****)0x0;
        if (*pcVar34 == '\0') {
          ppppplVar11 = (long *****)FUN_00d44228();
          if (ppppplVar11 != (long *****)0x0) {
            (*(code *)(*ppppplVar11)[3])(ppppplVar11);
          }
          if (local_68 != (long *****)0x0) {
            ppplVar20 = (long ***)*local_68;
            local_68 = ppppplVar11;
            (*(code *)ppplVar20[4])();
            ppppplVar11 = local_68;
          }
        }
        else {
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar9 = *(undefined8 *)PTR_DAT_047d4248;
          *(undefined8 *)PTR_DAT_047d4250 = uVar9;
          FUN_00cf9884(&local_128,uVar9,pcVar34);
          ppppplVar11 = local_68;
          local_68 = (long *****)0x0;
          if (ppppplVar11 != (long *****)0x0) {
            (*(code *)(*ppppplVar11)[4])();
          }
          local_68 = local_128;
          ppppplVar11 = local_68;
        }
        local_68 = ppppplVar11;
        local_128 = (long *****)&local_68;
        lVar10 = FUN_0114bb60(param_1 + 0x2b,&local_68,&local_128);
        *(long *)(lVar10 + 0x28) = lVar8 - lVar17 >> 6;
        if (local_68 != (long *****)0x0) {
          (*(code *)(*local_68)[4])();
        }
      }
      puVar38 = (undefined8 *)param_1[10];
      if (puVar38 < (undefined8 *)param_1[0xb]) {
        lVar17 = param_1[0xc];
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 != 0) {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0114b440;
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar17;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        }
        puVar38[5] = local_a8;
        puVar38[6] = uStack_a0;
        puVar38[3] = local_b8;
        puVar38[4] = plStack_b0;
        *puVar38 = local_d0;
        puVar38[1] = local_c8;
        puVar38[2] = local_c0;
        local_c8 = (uint *)0x0;
        local_c0 = (uint *)0x0;
        local_d0 = (uint *)0x0;
        puVar38[7] = local_98;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        param_1[10] = (long)(puVar38 + 8);
      }
      else {
        FUN_0114ccb8(plVar15,&local_d0);
      }
      puVar42 = local_f0;
      puVar12 = local_108;
      if (local_108 != (uint *)0x0) {
        local_100 = local_108;
        lVar17 = (long)local_f8 - (long)local_108;
        uVar26 = (**(code **)(*(long *)local_f0 + 0xf8))(local_f0);
        if (((uVar26 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*(long *)puVar42 + 0x18))(puVar42,puVar12,lVar17,4);
        }
        else {
          FUN_00c48fe8(puVar42,puVar12,lVar17,4);
        }
      }
      puVar42 = local_b8;
      puVar12 = local_d0;
      if (local_d0 != (uint *)0x0) {
        local_c8 = local_d0;
        lVar17 = (long)local_c0 - (long)local_d0;
        uVar26 = (**(code **)(*(long *)local_b8 + 0xf8))(local_b8);
        if (((uVar26 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*(long *)puVar42 + 0x18))(puVar42,puVar12,lVar17,4);
        }
        else {
          FUN_00c48fe8(puVar42,puVar12,lVar17,4);
        }
      }
      uVar31 = (ulong)((int)uVar31 + 1);
    } while (uVar31 < (ulong)param_3[3]);
  }
  if (param_3[5] != 0) {
    uVar31 = 0;
    do {
      local_f0 = (uint *)param_1[1];
      lVar17 = param_3[4];
      local_108 = (uint *)0x0;
      local_100 = (uint *)0x0;
      local_d8 = 0;
      local_f8 = (uint *)0x0;
      local_e8 = (long *)0x3fffffffffffffff;
      local_e0 = 0;
      puVar33 = (ulong *)(lVar17 + uVar31 * 0x18 + 8);
      FUN_0114b7a0(&local_108,*puVar33);
      if (*puVar33 != 0) {
        uVar30 = 1;
        do {
          puVar42 = local_f0;
          puVar12 = local_100;
          uVar3 = *(uint *)(*(long *)(lVar17 + uVar31 * 0x18) + (long)(int)(uVar30 - 1) * 4);
          local_d0 = (uint *)CONCAT44(local_d0._4_4_,uVar3);
          if (local_100 < local_f8) {
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar8 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar8 == 0) {
              *puVar12 = uVar3;
            }
            else {
              if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0114b440;
              *(uint **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = puVar42;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
              *puVar12 = uVar3;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            }
            local_100 = puVar12 + 1;
          }
          else {
            FUN_0114d068(&local_108,&local_d0);
          }
          uVar26 = (ulong)uVar30;
          uVar30 = uVar30 + 1;
        } while (uVar26 < *puVar33);
      }
      local_d0 = (uint *)0x0;
      local_c8 = (uint *)0x0;
      FUN_0114b668(&local_c0);
      __s = *(byte **)(lVar17 + uVar31 * 0x18 + 0x10);
      if (__s == (byte *)0x0) {
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        local_128 = *(long ******)PTR_DAT_047d3e30;
        local_120 = *(byte **)(PTR_DAT_047d3e30 + 8);
        local_118 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
        local_110 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        if (local_110 != (long *)0x0) {
          (**(code **)(*local_110 + 0x18))();
        }
      }
      else {
        local_118 = strlen((char *)__s);
        bVar4 = *__s;
        if (bVar4 == 0) {
          local_128 = (long *****)&DAT_cbf29ce484222645;
        }
        else {
          local_128 = (long *****)&DAT_cbf29ce484222645;
          pbVar22 = __s;
          do {
            pbVar22 = pbVar22 + 1;
            local_128 = (long *****)(((ulong)local_128 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar22;
          } while (bVar4 != 0);
        }
        local_110 = (long *)0x0;
        local_120 = __s;
      }
      uVar9 = (**(code **)(*param_1 + 0x68))(param_1,&local_128);
      local_98 = uVar9;
      if (local_110 != (long *)0x0) {
        (**(code **)(*local_110 + 0x20))();
      }
      puVar42 = local_b8;
      puVar12 = local_d0;
      if (local_d0 != (uint *)0x0) {
        local_c8 = local_d0;
        lVar17 = (long)local_c0 - (long)local_d0;
        uVar26 = (**(code **)(*(long *)local_b8 + 0xf8))(local_b8);
        if (((uVar26 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*(long *)puVar42 + 0x18))(puVar42,puVar12,lVar17,4);
        }
        else {
          FUN_00c48fe8(puVar42,puVar12,lVar17,4);
        }
      }
      puVar37 = local_f8;
      puVar42 = local_100;
      puVar12 = local_108;
      uStack_a0 = CONCAT44(uStack_d4,local_d8);
      local_f8 = (uint *)0x0;
      local_a8 = local_e0;
      local_b8 = local_f0;
      plStack_b0 = local_e8;
      local_c0 = puVar37;
      local_d0 = local_108;
      local_c8 = local_100;
      local_108 = (uint *)0x0;
      local_100 = (uint *)0x0;
      if ((ulong)param_1[0x11] < (ulong)param_1[0x12]) {
        FUN_0114cb98(param_1 + 0x10,&local_d0);
        puVar42 = local_b8;
        puVar12 = local_d0;
        if (local_d0 != (uint *)0x0) {
          local_c8 = local_d0;
          lVar17 = (long)local_c0 - (long)local_d0;
          uVar26 = (**(code **)(*(long *)local_b8 + 0xf8))(local_b8);
          if (((uVar26 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            pcVar21 = *(code **)(*(long *)puVar42 + 0x18);
            uVar9 = 4;
            goto LAB_0114ad3c;
          }
          uVar9 = 4;
          goto LAB_0114b188;
        }
      }
      else {
        uVar27 = param_1[0x14];
        lVar17 = param_1[0x11] - param_1[0x10] >> 6;
        uVar26 = lVar17 + 1;
        if (0x7ffffffffffffffe < uVar27) {
          uVar27 = 0x7fffffffffffffff;
        }
        if (uVar27 < uVar26) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar8 = param_1[0x12] - param_1[0x10];
        uVar23 = lVar8 >> 5;
        if (uVar26 <= uVar23) {
          uVar26 = uVar23;
        }
        if (uVar27 >> 1 <= (ulong)(lVar8 >> 6)) {
          uVar26 = uVar27;
        }
        if (uVar26 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = (**(code **)(*(long *)param_1[0x13] + 0x10))((long *)param_1[0x13],uVar26 << 6,8);
          if (lVar8 == 0) {
            (**(code **)(*(long *)param_1[0x13] + 0xe8))();
          }
        }
        lVar10 = param_1[0x13];
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 != 0) {
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_0114b440:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar10;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
          puVar37 = local_c0;
          puVar12 = local_d0;
          puVar42 = local_c8;
          uVar9 = local_98;
        }
        puVar38 = (undefined8 *)(lVar8 + lVar17 * 0x40);
        puVar38[2] = 0;
        puVar38[2] = puVar37;
        *puVar38 = puVar12;
        puVar38[1] = puVar42;
        puVar38[5] = local_a8;
        puVar38[6] = uStack_a0;
        puVar38[3] = local_b8;
        puVar38[4] = plStack_b0;
        local_d0 = (uint *)0x0;
        local_c8 = (uint *)0x0;
        local_c0 = (uint *)0x0;
        puVar38[7] = uVar9;
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        puVar42 = (uint *)param_1[0x10];
        puVar12 = (uint *)param_1[0x11];
        if (puVar12 == puVar42) {
          puVar25 = puVar38;
          puVar12 = puVar42;
        }
        else {
          lVar17 = 0;
          do {
            lVar10 = param_1[0x13];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar13 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar13 != 0) {
              if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_0114b440;
              *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar10;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
            }
            *(undefined8 *)((long)puVar38 + lVar17 + -0x40) = 0;
            *(undefined8 *)((long)puVar38 + lVar17 + -0x38) = 0;
            *(undefined8 *)((long)puVar38 + lVar17 + -0x30) = 0;
            uVar9 = *(undefined8 *)((long)puVar12 + lVar17 + -0x28);
            uVar1 = *(undefined8 *)((long)puVar12 + lVar17 + -0x20);
            uVar2 = *(undefined8 *)((long)puVar12 + lVar17 + -0x10);
            *(undefined8 *)((long)puVar38 + lVar17 + -0x18) =
                 *(undefined8 *)((long)puVar12 + lVar17 + -0x18);
            *(undefined8 *)((long)puVar38 + lVar17 + -0x10) = uVar2;
            *(undefined8 *)((long)puVar38 + lVar17 + -0x28) = uVar9;
            *(undefined8 *)((long)puVar38 + lVar17 + -0x20) = uVar1;
            *(undefined8 *)((long)puVar38 + lVar17 + -0x40) =
                 *(undefined8 *)((long)puVar12 + lVar17 + -0x40);
            *(undefined8 *)((long)puVar38 + lVar17 + -0x38) =
                 *(undefined8 *)((long)puVar12 + lVar17 + -0x38);
            *(undefined8 *)((long)puVar38 + lVar17 + -0x30) =
                 *(undefined8 *)((long)puVar12 + lVar17 + -0x30);
            *(undefined8 *)((long)puVar12 + lVar17 + -0x40) = 0;
            *(undefined8 *)((long)puVar12 + lVar17 + -0x38) = 0;
            *(undefined8 *)((long)puVar12 + lVar17 + -0x30) = 0;
            *(undefined8 *)((long)puVar38 + lVar17 + -8) =
                 *(undefined8 *)((long)puVar12 + lVar17 + -8);
            if (lVar13 != 0) {
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
            }
            lVar17 = lVar17 + -0x40;
          } while ((long)puVar42 - (long)puVar12 != lVar17);
          puVar12 = (uint *)param_1[0x10];
          puVar42 = (uint *)param_1[0x11];
          puVar25 = (undefined8 *)((long)puVar38 + lVar17);
        }
        lVar17 = param_1[0x12];
        param_1[0x10] = (long)puVar25;
        param_1[0x11] = (long)(puVar38 + 8);
        param_1[0x12] = lVar8 + uVar26 * 0x40;
        if (puVar42 != puVar12) {
          puVar37 = puVar42 + -0x10;
          lVar8 = *(long *)puVar37;
          if (lVar8 != 0) {
            lVar10 = *(long *)(puVar42 + -0xc);
            plVar14 = *(long **)(puVar42 + -10);
            *(long *)(puVar42 + -0xe) = lVar8;
            uVar26 = (**(code **)(*plVar14 + 0xf8))(plVar14);
            if (((uVar26 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
              (**(code **)(*plVar14 + 0x18))(plVar14,lVar8,lVar10 - lVar8,4);
            }
            else {
              FUN_00c48fe8(plVar14,lVar8,lVar10 - lVar8,4);
            }
          }
          if (puVar37 != puVar12) {
            do {
              puVar42 = puVar37 + -0x10;
              lVar8 = *(long *)puVar42;
              if (lVar8 != 0) {
                lVar10 = *(long *)(puVar37 + -0xc);
                plVar14 = *(long **)(puVar37 + -10);
                *(long *)(puVar37 + -0xe) = lVar8;
                uVar26 = (**(code **)(*plVar14 + 0xf8))(plVar14);
                if (((uVar26 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar14 + 0x18))(plVar14,lVar8,lVar10 - lVar8,4);
                }
                else {
                  FUN_00c48fe8(plVar14,lVar8,lVar10 - lVar8,4);
                }
              }
              puVar37 = puVar42;
            } while (puVar12 != puVar42);
          }
        }
        if (puVar12 != (uint *)0x0) {
          puVar42 = (uint *)param_1[0x13];
          lVar17 = lVar17 - (long)puVar12;
          uVar26 = (**(code **)(*(long *)puVar42 + 0xf8))(puVar42);
          if (((uVar26 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            pcVar21 = *(code **)(*(long *)puVar42 + 0x18);
            uVar9 = 8;
LAB_0114ad3c:
            (*pcVar21)(puVar42,puVar12,lVar17,uVar9);
          }
          else {
            uVar9 = 8;
LAB_0114b188:
            FUN_00c48fe8(puVar42,puVar12,lVar17,uVar9);
          }
        }
      }
      puVar42 = local_f0;
      puVar12 = local_108;
      if (local_108 != (uint *)0x0) {
        local_100 = local_108;
        lVar17 = (long)local_f8 - (long)local_108;
        uVar26 = (**(code **)(*(long *)local_f0 + 0xf8))(local_f0);
        if (((uVar26 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*(long *)puVar42 + 0x18))(puVar42,puVar12,lVar17,4);
        }
        else {
          FUN_00c48fe8(puVar42,puVar12,lVar17,4);
        }
      }
      uVar31 = (ulong)((int)uVar31 + 1);
    } while (uVar31 < (ulong)param_3[5]);
  }
  if ((*(char *)param_3[7] != '\0') &&
     (lVar17 = (**(code **)(*param_1 + 0x68))(param_1,param_3 + 6), lVar17 != -1)) {
    param_1[0x32] = lVar17;
  }
  return;
LAB_01149a9c:
  puVar38 = (undefined8 *)plVar29[3];
  if (puVar38 == (undefined8 *)0x0) goto LAB_01149d9c;
  ppppplVar11 = (long *****)(**(code **)(*(long *)param_2 + 0x10))(param_2,0x38,8);
  if (ppppplVar11 == (long *****)0x0) {
    local_118 = 0;
    local_110 = (long *)0x0;
    local_128 = (long *****)0x0;
    local_120 = (byte *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar17 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_0114b440;
    *(byte **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = param_2;
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
    ppppplVar11[5] = (long ****)0x0;
    ppppplVar11[6] = (long ****)0x0;
    ppppplVar11[3] = (long ****)0x0;
    ppppplVar11[4] = (long ****)0x0;
    *ppppplVar11 = (long ****)0x0;
    ppppplVar11[1] = (long ****)0x0;
    ppppplVar11[2] = (long ****)0x0;
    FUN_0114ba28();
    local_118 = 0x38;
    local_110 = (long *)&DAT_00000008;
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
    local_128 = ppppplVar11;
    local_120 = param_2;
  }
  puVar40 = (undefined2 *)*puVar38;
  puVar36 = (undefined2 *)puVar38[1];
  pppplVar32 = (long ****)((long)puVar36 - (long)puVar40 >> 1);
  pppplVar18 = ppppplVar11[2];
  pppplVar35 = *ppppplVar11;
  lVar17 = (long)pppplVar18 - (long)pppplVar35;
  if ((long ****)(lVar17 >> 1) < pppplVar32) {
    if (pppplVar35 != (long ****)0x0) {
      pppplVar18 = ppppplVar11[3];
      ppppplVar11[1] = pppplVar35;
      uVar26 = (*(code *)(*pppplVar18)[0x1f])();
      if (((uVar26 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (*(code *)(*pppplVar18)[3])(pppplVar18,pppplVar35,lVar17,2);
      }
      else {
        FUN_00c48fe8(pppplVar18,pppplVar35,lVar17,2);
      }
      pppplVar18 = (long ****)0x0;
      ppppplVar11[1] = (long ****)0x0;
      ppppplVar11[2] = (long ****)0x0;
      *ppppplVar11 = (long ****)0x0;
    }
    pppplVar35 = ppppplVar11[4];
    if ((long ****)0x7ffffffffffffffe < pppplVar35) {
      pppplVar35 = (long ****)0x7fffffffffffffff;
    }
    if (pppplVar35 < pppplVar32) {
LAB_0114b488:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (pppplVar32 <= pppplVar18) {
      pppplVar32 = pppplVar18;
    }
    if ((ulong)pppplVar35 >> 1 <= (ulong)((long)pppplVar18 >> 1)) {
      pppplVar32 = pppplVar35;
    }
    if (pppplVar35 < pppplVar32) goto LAB_0114b488;
    pppplVar18 = (long ****)(*(code *)(*ppppplVar11[3])[2])(ppppplVar11[3],(long)pppplVar32 << 1,2);
    if (pppplVar18 == (long ****)0x0) {
      (*(code *)(*ppppplVar11[3])[0x1d])();
    }
    ppppplVar11[2] = (long ****)((long)pppplVar18 + (long)pppplVar32 * 2);
    *ppppplVar11 = pppplVar18;
    ppppplVar11[1] = pppplVar18;
    for (; puVar40 != puVar36; puVar40 = puVar40 + 1) {
      pppplVar32 = ppppplVar11[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar17 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar17 == 0) {
        *(undefined2 *)pppplVar18 = *puVar40;
      }
      else {
        if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_0114b440;
        *(long *****)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = pppplVar32;
        *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
        *(undefined2 *)pppplVar18 = *puVar40;
        *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
      }
      pppplVar18 = (long ****)((long)pppplVar18 + 2);
    }
    ppppplVar11[1] = pppplVar18;
  }
  else {
    pppplVar18 = (long ****)((long)ppppplVar11[1] - (long)pppplVar35 >> 1);
    puVar39 = (undefined2 *)((long)puVar40 + ((long)ppppplVar11[1] - (long)pppplVar35));
    if (pppplVar32 <= pppplVar18) {
      puVar39 = puVar36;
    }
    __n = (long)puVar39 - (long)puVar40;
    if (__n != 0) {
      memmove(pppplVar35,puVar40,__n);
    }
    if (pppplVar18 < pppplVar32) {
      pppplVar32 = ppppplVar11[1];
      for (; puVar39 != puVar36; puVar39 = puVar39 + 1) {
        pppplVar18 = ppppplVar11[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar17 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar17 == 0) {
          *(undefined2 *)pppplVar32 = *puVar39;
        }
        else {
          if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_0114b440;
          *(long *****)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = pppplVar18;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
          *(undefined2 *)pppplVar32 = *puVar39;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
        }
        pppplVar32 = (long ****)((long)pppplVar32 + 2);
      }
      ppppplVar11[1] = pppplVar32;
    }
    else {
      ppppplVar11[1] = (long ****)((long)pppplVar35 + __n);
    }
  }
  uVar30 = *puVar42;
  sVar5 = (short)uVar30;
  puVar39 = (undefined2 *)(long)sVar5;
  puVar36 = (undefined2 *)param_1[0x18];
  if (puVar36 == (undefined2 *)0x0) {
LAB_01149c68:
    plVar29 = (long *)(**(code **)(*(long *)param_1[0x1e] + 0x10))((long *)param_1[0x1e],0x38,8);
    if (plVar29 == (long *)0x0) {
      (**(code **)(*(long *)param_1[0x1e] + 0xe8))();
    }
    lVar17 = param_1[0x1e];
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 == 0) {
      *(short *)(plVar29 + 2) = sVar5;
      plVar29[3] = (long)local_128;
      plVar29[5] = local_118;
      plVar29[6] = (long)local_110;
      plVar29[4] = (long)local_120;
    }
    else {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0114b440;
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar17;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *(short *)(plVar29 + 2) = sVar5;
      plVar29[3] = (long)local_128;
      plVar29[5] = local_118;
      plVar29[6] = (long)local_110;
      plVar29[4] = (long)local_120;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    local_128 = (long *****)0x0;
    *plVar29 = 0;
    plVar29[1] = (long)puVar39;
    if ((puVar36 == (undefined2 *)0x0) ||
       (*(float *)(param_1 + 0x23) * (float)puVar36 < (float)(param_1[0x22] + 1))) {
      uVar26 = (ulong)(puVar36 < (undefined2 *)0x3 || ((ulong)puVar36 & (long)puVar36 - 1U) != 0) |
               (long)puVar36 << 1;
      uVar27 = (ulong)((float)(param_1[0x22] + 1) / *(float *)(param_1 + 0x23));
      if (uVar27 <= uVar26) {
        uVar27 = uVar26;
      }
      if (uVar27 - 1 == 0) {
        uVar27 = 2;
      }
      else if ((uVar27 & uVar27 - 1) != 0) {
        uVar27 = std::__next_prime(uVar27);
      }
      uVar26 = param_1[0x18];
      if (uVar26 < uVar27) {
        uVar23 = uVar27;
LAB_01149e90:
        FUN_0114c16c(plVar41,uVar23);
      }
      else if (uVar27 < uVar26) {
        uVar23 = (ulong)((float)(ulong)param_1[0x22] / *(float *)(param_1 + 0x23));
        if ((uVar26 < 3) ||
           (uVar28 = uVar26 - (uVar26 >> 1 & 0x5555555555555555),
           uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333),
           1 < (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar23 = std::__next_prime(uVar23);
        }
        else if (1 < uVar23) {
          uVar23 = 1L << (-LZCOUNT(uVar23 - 1) & 0x3fU);
        }
        if (uVar23 <= uVar27) {
          uVar23 = uVar27;
        }
        if (uVar23 < uVar26) goto LAB_01149e90;
      }
      puVar36 = (undefined2 *)param_1[0x18];
      if (((ulong)puVar36 & (long)puVar36 - 1U) == 0) {
        puVar40 = (undefined2 *)((long)puVar36 - 1U & (ulong)puVar39);
      }
      else if (puVar39 < puVar36) {
        puVar40 = puVar39;
      }
      else {
        uVar26 = 0;
        if (puVar36 != (undefined2 *)0x0) {
          uVar26 = (ulong)puVar39 / (ulong)puVar36;
        }
        puVar40 = (undefined2 *)((long)puVar39 - uVar26 * (long)puVar36);
      }
    }
    plVar19 = *(long **)(*plVar41 + (long)puVar40 * 8);
    if (plVar19 == (long *)0x0) {
      *plVar29 = *plVar16;
      *plVar16 = (long)plVar29;
      *(long **)(*plVar41 + (long)puVar40 * 8) = plVar16;
      if (*plVar29 != 0) {
        puVar40 = *(undefined2 **)(*plVar29 + 8);
        if (((ulong)puVar36 & (long)puVar36 - 1U) == 0) {
          puVar40 = (undefined2 *)((ulong)puVar40 & (long)puVar36 - 1U);
        }
        else if (puVar36 <= puVar40) {
          uVar26 = 0;
          if (puVar36 != (undefined2 *)0x0) {
            uVar26 = (ulong)puVar40 / (ulong)puVar36;
          }
          puVar40 = (undefined2 *)((long)puVar40 - uVar26 * (long)puVar36);
        }
        plVar19 = (long *)(*plVar41 + (long)puVar40 * 8);
        goto LAB_01149d74;
      }
    }
    else {
      *plVar29 = *plVar19;
LAB_01149d74:
      *plVar19 = (long)plVar29;
    }
    param_1[0x22] = param_1[0x22] + 1;
  }
  else {
    uVar26 = (long)puVar36 - 1;
    if (((ulong)puVar36 & uVar26) == 0) {
      puVar40 = (undefined2 *)(uVar26 & (ulong)puVar39);
      plVar29 = *(long **)(*plVar41 + (long)puVar40 * 8);
      if (plVar29 == (long *)0x0) goto LAB_01149c68;
      do {
        plVar29 = (long *)*plVar29;
        if ((plVar29 == (long *)0x0) ||
           ((undefined2 *)plVar29[1] != puVar39 &&
            (undefined2 *)((ulong)plVar29[1] & uVar26) != puVar40)) goto LAB_01149c68;
      } while ((uint)*(ushort *)(plVar29 + 2) != (uVar30 & 0xffff));
    }
    else {
      puVar40 = puVar39;
      if (puVar36 <= puVar39) {
        uVar26 = 0;
        if (puVar36 != (undefined2 *)0x0) {
          uVar26 = (ulong)puVar39 / (ulong)puVar36;
        }
        puVar40 = (undefined2 *)((long)puVar39 - uVar26 * (long)puVar36);
      }
      plVar29 = *(long **)(*plVar41 + (long)puVar40 * 8);
      if (plVar29 == (long *)0x0) goto LAB_01149c68;
      do {
        plVar29 = (long *)*plVar29;
        if (plVar29 == (long *)0x0) goto LAB_01149c68;
        puVar24 = (undefined2 *)plVar29[1];
        if (puVar24 != puVar39) {
          if (puVar36 <= puVar24) {
            uVar26 = 0;
            if (puVar36 != (undefined2 *)0x0) {
              uVar26 = (ulong)puVar24 / (ulong)puVar36;
            }
            puVar24 = (undefined2 *)((long)puVar24 - uVar26 * (long)puVar36);
          }
          if (puVar24 != puVar40) goto LAB_01149c68;
        }
      } while ((uint)*(ushort *)(plVar29 + 2) != (uVar30 & 0xffff));
    }
  }
  ppppplVar11 = local_128;
  local_128 = (long *****)0x0;
  if (ppppplVar11 != (long *****)0x0) {
    FUN_0114bd48(&local_120);
  }
LAB_01149d9c:
  puVar42 = puVar42 + 1;
  if (puVar42 == puVar12) goto LAB_01149edc;
  plVar29 = (long *)param_3[10];
  goto LAB_01149a0c;
}


