/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f24e3c; name: FUN_02f24e3c
 */


void FUN_02f24e3c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  long lVar29;
  short sVar30;
  int iVar31;
  uint *puVar32;
  long lVar33;
  ulong in_stack_fffffffffffffec0;
  long local_138;
  long local_100;
  uint *local_e0;
  undefined8 local_d8;
  uint local_d0;
  uint local_cc;
  uint *local_c0;
  uint *local_b8;
  int local_b0;
  uint *local_a8;
  uint *local_a0;
  uint local_98;
  uint local_94;
  uint *local_88;
  uint *local_80;
  int local_78;
  ushort local_70 [8];
  
  *(undefined1 *)(param_1 + 0x7b) = 1;
  if (*(char *)(param_1 + 0x78) != '\0') {
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  plVar11 = *(long **)(param_1 + 0x48);
  puVar1 = (undefined8 *)(param_1 + 0x50);
  lVar14 = *plVar11;
  iVar31 = *(int *)((long)plVar11 + 0x1c);
  iVar2 = iVar31 + *(int *)(lVar14 + 8) + *(int *)(param_1 + 0x5c);
  if (iVar2 != 0) {
    puVar20 = (uint *)*puVar1;
    if (puVar20 == (uint *)plVar11[2]) {
      uVar25 = *(ushort *)(param_1 + 0x5a);
LAB_02f24efc:
      sVar30 = (short)iVar31;
    }
    else {
      uVar25 = *(ushort *)(param_1 + 0x5a);
      puVar21 = puVar20;
      puVar32 = (uint *)plVar11[2];
      if ((uint)uVar25 == (*puVar20 & 0xffff)) {
        puVar21 = *(uint **)(puVar20 + 2);
        *(undefined4 *)(param_1 + 0x58) = 0;
        uVar25 = 0;
        puVar32 = (uint *)plVar11[2];
      }
      puVar20 = puVar32;
      if (puVar21 == puVar20) {
        iVar31 = *(int *)((long)plVar11 + 0x1c);
        goto LAB_02f24efc;
      }
      sVar30 = (short)*puVar21;
      puVar20 = puVar21;
    }
    *(ushort *)(param_1 + 0x5a) = sVar30 - uVar25;
    *puVar1 = puVar20;
  }
  *(int *)(param_1 + 0x5c) = iVar2;
  FUN_031c34c8();
  uVar5 = local_94;
  if (*(int *)(param_1 + 0x5c) == 0) {
LAB_02f24fd8:
    local_94 = uVar5;
    local_88 = (uint *)0x0;
  }
  else {
    puVar20 = *(uint **)(param_1 + 0x50);
    local_88 = (uint *)((long)puVar20 + (ulong)*(ushort *)(param_1 + 0x58) + 0x20);
    uVar25 = *(ushort *)(param_1 + 0x5a);
    local_94 = (uint)uVar25;
    uVar26 = *(int *)(param_1 + 0x5c) - (uint)uVar25;
    local_a8 = puVar20;
    local_98 = uVar26;
    uVar5 = (uint)uVar25;
    if (uVar25 == 0) goto LAB_02f24fd8;
    do {
      local_a0 = local_88 + 4;
      uVar5 = local_94 - 1;
      bVar10 = (int)local_94 < 1;
      local_94 = uVar5;
      if (uVar5 == 0 || bVar10) {
        if (uVar26 == 0) {
          puVar20 = (uint *)0x0;
          local_a8 = (uint *)0x0;
          local_a0 = (uint *)0x0;
        }
        else {
          puVar20 = *(uint **)(puVar20 + 2);
          local_a8 = puVar20;
          if (puVar20 != (uint *)0x0) {
            local_94 = *puVar20 & 0xffff;
            if ((int)uVar26 <= (int)(*puVar20 & 0xffff)) {
              local_94 = uVar26;
            }
            if (0 < (int)local_94) {
              uVar26 = uVar26 - local_94;
              local_a0 = puVar20 + 8;
              local_98 = uVar26;
              goto LAB_02f24fc0;
            }
          }
          local_a0 = (uint *)0x0;
          local_94 = uVar5;
        }
      }
LAB_02f24fc0:
      if (local_88[2] != 0) {
        local_78 = local_88[2] - 1;
        local_80 = local_a0;
        goto LAB_02f24fe8;
      }
      local_88 = local_a0;
    } while (local_a0 != (uint *)0x0);
  }
  local_78 = 0;
  local_80 = (uint *)0x0;
  local_a0 = local_88;
LAB_02f24fe8:
  plVar22 = (long *)(param_1 + 0x60);
  plVar11 = *(long **)(param_1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x30);
  uVar5 = *(uint *)(*plVar3 + 0x54) | *(uint *)(*plVar11 + 0x54) |
          *(uint *)(*(long *)(param_2 + 0x20) + (ulong)*(ushort *)(*plVar11 + 0x8a) * 0x50 + 0x14) |
          *(uint *)(*(long *)(param_2 + 0x20) + (ulong)*(ushort *)(*plVar3 + 0x8a) * 0x50 + 0x14);
  if ((*(byte *)(*plVar22 + 0xd) & 3) == 0) goto LAB_02f25130;
  lVar33 = *(long *)(param_1 + 0x20);
  iVar2 = *(int *)(lVar33 + 0x738);
  lVar15 = param_3;
  if (iVar2 != 0) {
    lVar15 = nn::os::GetSystemTick();
  }
  uVar28 = *(undefined8 *)(param_1 + 0x58);
  local_e0 = (uint *)*puVar1;
  local_d8._4_4_ = (uint)((ulong)uVar28 >> 0x20);
  if (*(ushort *)(param_1 + 0x5a) < 2) {
    local_d8._4_4_ = local_d8._4_4_ - 1;
    local_e0 = *(uint **)(local_e0 + 2);
    uVar26 = local_d8._4_4_;
    if ((*local_e0 & 0xffff) <= (local_d8._4_4_ & 0xffff)) {
      uVar26 = *local_e0;
    }
    local_d8 = (uint *)((ulong)CONCAT42(local_d8._4_4_,(short)uVar26) << 0x10);
  }
  else {
    local_d8._2_2_ = (short)((ulong)uVar28 >> 0x10);
    local_d8._0_2_ = (short)uVar28;
    local_d8._0_4_ = CONCAT22(local_d8._2_2_ + -1,(short)local_d8);
    local_d8 = (uint *)CONCAT44(local_d8._4_4_ + -1,(int)local_d8);
    local_d8 = (uint *)CONCAT62(local_d8._2_6_,(short)local_d8 + 0x10);
  }
  local_70[0] = *(ushort *)(*plVar22 + 0xc);
  if ((local_70[0] >> 8 & 1) == 0) {
    if ((local_70[0] >> 9 & 1) != 0) {
      lVar18 = 0x13a8;
      goto LAB_02f250fc;
    }
    plVar12 = (long *)0x0;
  }
  else {
    lVar18 = 0x13a0;
LAB_02f250fc:
    plVar12 = *(long **)(*(long *)(param_2 + 0x40) + lVar18);
  }
  (**(code **)(*plVar12 + 0x10))(plVar12,param_2,param_3,local_70,plVar11,plVar3,&local_e0);
  if (iVar2 != 0) {
    lVar18 = nn::os::GetSystemTick();
    *(long *)(lVar33 + 0x508) = (lVar18 - lVar15) + *(long *)(lVar33 + 0x508);
    *(int *)(lVar33 + 0x510) = *(int *)(lVar33 + 0x510) + 1;
  }
LAB_02f25130:
  if ((*(uint *)(*(long *)(param_2 + 0x40) + 0x318) & (*(uint *)(param_1 + 0x70) | uVar5)) != 0) {
    lVar15 = *(long *)(param_1 + 0x20);
    iVar2 = *(int *)(lVar15 + 0x738);
    if (iVar2 != 0) {
      local_100 = nn::os::GetSystemTick();
    }
    uVar26 = local_cc;
    if (*(int *)(param_1 + 0x5c) != 0) {
      puVar20 = *(uint **)(param_1 + 0x50);
      local_c0 = (uint *)((long)puVar20 + (ulong)*(ushort *)(param_1 + 0x58) + 0x20);
      uVar25 = *(ushort *)(param_1 + 0x5a);
      local_cc = (uint)uVar25;
      uVar27 = *(int *)(param_1 + 0x5c) - (uint)uVar25;
      local_e0 = puVar20;
      local_d0 = uVar27;
      uVar26 = (uint)uVar25;
      if (uVar25 != 0) {
LAB_02f25198:
        local_d8 = local_c0 + 4;
        uVar26 = local_cc - 1;
        bVar10 = (int)local_cc < 1;
        local_cc = uVar26;
        if (uVar26 == 0 || bVar10) {
          if (uVar27 == 0) {
            puVar20 = (uint *)0x0;
            local_e0 = (uint *)0x0;
            local_d8 = (uint *)0x0;
          }
          else {
            puVar20 = *(uint **)(puVar20 + 2);
            local_e0 = puVar20;
            if (puVar20 != (uint *)0x0) {
              local_cc = *puVar20 & 0xffff;
              if ((int)uVar27 <= (int)(*puVar20 & 0xffff)) {
                local_cc = uVar27;
              }
              if (0 < (int)local_cc) {
                uVar27 = uVar27 - local_cc;
                local_d8 = puVar20 + 8;
                local_d0 = uVar27;
                goto LAB_02f25204;
              }
            }
            local_d8 = (uint *)0x0;
            local_cc = uVar26;
          }
        }
LAB_02f25204:
        if (local_c0[2] == 0) goto code_r0x02f2520c;
        local_b0 = local_c0[2] - 1;
        local_b8 = local_d8;
        do {
          puVar20 = local_b8;
          if ((*(char *)((long)local_c0 + 0xe) == '\0') &&
             ((*(byte *)((long)local_b8 + 0x96) >> 4 & 1) == 0)) {
            uVar26 = local_b8[0x28];
            lVar33 = *(long *)(*plVar11 + 0x78);
            *(uint *)(plVar11 + 3) = uVar26;
            if (*(char *)(lVar33 + 0x18) == '\x15') {
              plVar12 = (long *)(lVar33 + ((ulong)(uVar26 >> 0x1a) & 0x38) + 0x48);
              lVar18 = *plVar12;
              lVar33 = 0;
              if (lVar18 != 0) {
                lVar33 = lVar18 + (long)plVar12;
              }
            }
            plVar11[4] = lVar33;
            uVar26 = local_b8[0x29];
            lVar33 = *(long *)(*plVar3 + 0x78);
            *(uint *)(plVar3 + 3) = uVar26;
            if (*(char *)(lVar33 + 0x18) == '\x15') {
              plVar12 = (long *)(lVar33 + ((ulong)(uVar26 >> 0x1a) & 0x38) + 0x48);
              lVar18 = *plVar12;
              lVar33 = 0;
              if (lVar18 != 0) {
                lVar33 = lVar18 + (long)plVar12;
              }
            }
            plVar3[4] = lVar33;
            plVar11[2] = *(long *)(local_b8 + 0x2a);
            plVar3[2] = *(long *)(local_b8 + 0x2c);
            lVar33 = *(long *)(param_2 + 0x40);
            uVar26 = local_b8[0x2f] | uVar5;
            if ((*(uint *)(lVar33 + 0x318) & uVar26) != 0) {
              if (*(int *)(lVar33 + 0x1458) == 0) {
                lVar18 = 0;
                puVar17 = (undefined8 *)(lVar33 + 0x328);
                do {
                  if ((*(uint *)(puVar17 + -1) & uVar26) != 0) {
                    (**(code **)(*(long *)*puVar17 + 0x28))
                              ((long *)*puVar17,param_2,param_3,plVar11,plVar3,puVar20);
                  }
                  lVar18 = lVar18 + 1;
                  puVar17 = puVar17 + 2;
                } while (lVar18 < *(int *)(lVar33 + 0x31c));
              }
              else {
                lVar18 = (long)*(int *)(lVar33 + 0x1458) << 3;
                puVar17 = *(undefined8 **)(lVar33 + 0x1450);
                do {
                  (**(code **)(*(long *)*puVar17 + 0xb8))
                            ((long *)*puVar17,param_2,param_3,plVar11,plVar3,puVar20);
                  lVar18 = lVar18 + -8;
                  puVar17 = puVar17 + 1;
                } while (lVar18 != 0);
                puVar17 = (undefined8 *)(lVar33 + 0x328);
                lVar18 = 0;
                do {
                  if ((*(uint *)(puVar17 + -1) & uVar26) != 0) {
                    (**(code **)(*(long *)*puVar17 + 0x28))
                              ((long *)*puVar17,param_2,param_3,plVar11,plVar3,puVar20);
                  }
                  lVar18 = lVar18 + 1;
                  puVar17 = puVar17 + 2;
                } while (lVar18 < *(int *)(lVar33 + 0x31c));
                if (*(int *)(lVar33 + 0x1458) != 0) {
                  lVar18 = (long)*(int *)(lVar33 + 0x1458) << 3;
                  puVar17 = *(undefined8 **)(lVar33 + 0x1450);
                  do {
                    (**(code **)(*(long *)*puVar17 + 0xc0))
                              ((long *)*puVar17,param_2,param_3,plVar11,plVar3,puVar20);
                    lVar18 = lVar18 + -8;
                    puVar17 = puVar17 + 1;
                  } while (lVar18 != 0);
                }
              }
            }
          }
          FUN_02f25c60(&local_e0);
        } while (local_c0 != (uint *)0x0);
        goto LAB_02f2522c;
      }
    }
    local_cc = uVar26;
    local_c0 = (uint *)0x0;
LAB_02f25224:
    local_b0 = 0;
    local_b8 = (uint *)0x0;
    local_d8 = local_c0;
LAB_02f2522c:
    if (iVar2 != 0) {
      lVar33 = nn::os::GetSystemTick();
      *(long *)(lVar15 + 0x520) = (lVar33 - local_100) + *(long *)(lVar15 + 0x520);
      *(int *)(lVar15 + 0x528) = *(int *)(lVar15 + 0x528) + 1;
    }
  }
  lVar15 = *(long *)(param_1 + 0x20);
  iVar2 = *(int *)(lVar15 + 0x738);
  if (iVar2 != 0) {
    local_138 = nn::os::GetSystemTick();
  }
  uVar28 = *(undefined8 *)(param_3 + 8);
  plVar12 = *(long **)(*(long *)(param_2 + 8) + 0x658);
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*plVar12 + 0x48))(plVar12,*(long *)(param_1 + 0x18),plVar11[1],plVar3[1]);
  }
  puVar8 = PTR_PTR_047d1a50;
  local_e0 = (uint *)0x0;
  local_d8 = (uint *)0x8000000000000000;
  if (local_88 == (uint *)0x0) {
    local_d8 = (uint *)0x8000000000000000;
  }
  else {
    do {
      puVar21 = local_80;
      puVar20 = local_88;
      if (*(char *)((long)local_88 + 0xe) == '\0') {
        lVar33 = *(long *)(local_80 + 0x26);
        puVar32 = *(uint **)(lVar33 + 0x20);
        if (puVar32 != (uint *)0x0) {
          plVar13 = *(long **)(param_1 + 0x10);
          puVar16 = (uint *)plVar13[3];
          if (puVar16 == puVar32) {
            iVar31 = (int)plVar13[4] + 1;
          }
          else {
            if ((puVar16 != (uint *)0x0) && (lVar18 = *plVar13, lVar18 != 0)) {
              uVar5 = *(uint *)(plVar13 + 4);
              if (uVar5 == (*puVar16 & 0xffff)) {
                puVar17 = (undefined8 *)plVar13[2];
                *(undefined8 *)(*(long *)(lVar18 + 0x10) + (long)(int)puVar16[1] * 8) = 0;
                *(undefined1 *)(lVar18 + 0xc) = 1;
                iVar31 = *(int *)(puVar17 + 0xb);
                lVar18 = puVar17[1];
                *(uint **)(lVar18 + (long)iVar31 * 8) = puVar16;
                *(int *)(puVar17 + 0xb) = iVar31 + 1;
                if (*(int *)((long)puVar17 + 0x5c) <= iVar31 + 1) {
                  (**(code **)(*(long *)*puVar17 + 0x28))
                            ((long *)*puVar17,lVar18 + (long)(iVar31 + -5) * 8,6);
                  *(int *)(puVar17 + 0xb) = iVar31 + -5;
                }
              }
              else {
                do {
                  cVar4 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(puVar16,0x10);
                  if (bVar10) {
                    *puVar16 = *puVar16 - uVar5;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
            }
            iVar31 = 1;
            plVar13[3] = (long)puVar32;
          }
          *(int *)(plVar13 + 4) = iVar31;
        }
        if (((*(byte *)((long)puVar21 + 0x96) ^ 0xff) & 0x50) == 0) {
          lVar33 = (long)(int)local_d8 + 1;
          puVar7 = puVar8;
          if ((int)(local_d8._4_4_ & 0x7fffffff) <= (int)local_d8) goto LAB_02f253c4;
          goto LAB_02f253d4;
        }
        if (((*(byte *)(lVar33 + 0x2c) >> 6 & 1) == 0) && (*(long *)(param_1 + 0x18) != 0)) {
          plVar3[2] = *(long *)(puVar21 + 0x2c);
          uVar5 = puVar21[0x29];
          lVar18 = *(long *)(*plVar3 + 0x78);
          *(uint *)(plVar3 + 3) = uVar5;
          if (*(char *)(lVar18 + 0x18) == '\x15') {
            plVar13 = (long *)(lVar18 + ((ulong)(uVar5 >> 0x1a) & 0x38) + 0x48);
            lVar23 = *plVar13;
            lVar18 = 0;
            if (lVar23 != 0) {
              lVar18 = lVar23 + (long)plVar13;
            }
          }
          plVar3[4] = lVar18;
          in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
          (**(code **)(*plVar12 + 0x50))
                    (plVar12,*(undefined8 *)(param_1 + 0x18),param_2,uVar28,lVar33,puVar21,plVar11,
                     plVar3,in_stack_fffffffffffffec0);
        }
        else {
          *(undefined8 *)(lVar33 + 0x20) = 0;
          *(undefined2 *)(lVar33 + 0x28) = 0;
        }
      }
      else {
        lVar33 = (long)(int)local_d8 + 1;
        puVar7 = PTR_PTR_047d1a50;
        if ((int)(local_d8._4_4_ & 0x7fffffff) <= (int)local_d8) {
LAB_02f253c4:
          FUN_02f25e2c(&local_e0,puVar7 + 0x20,lVar33);
        }
LAB_02f253d4:
        lVar18 = (long)(int)local_d8;
        local_d8 = (uint *)CONCAT44(local_d8._4_4_,(int)lVar33);
        *(uint **)(local_e0 + lVar18 * 4) = puVar20;
        *(uint **)(local_e0 + lVar18 * 4 + 2) = puVar21;
      }
      FUN_02f25c60(&local_a8);
    } while (local_88 != (uint *)0x0);
    if (0 < (int)local_d8) {
      plVar13 = *(long **)(*(long *)(param_2 + 0x40) + 0x13b0);
      (**(code **)(*plVar13 + 0x18))
                (plVar13,param_2,param_3,local_70,local_e0,
                 local_e0 + ((ulong)local_d8 & 0xffffffff) * 4,0);
      if (0 < (int)local_d8) {
        lVar33 = 0;
        iVar31 = -1;
        do {
          puVar20 = local_e0 + lVar33 * 4;
          if (*(char *)(*(long *)puVar20 + 0xe) == '\0') {
            lVar18 = *(long *)(puVar20 + 2);
            if ((lVar33 == 0) || (*(int *)(lVar18 + 0xa0) != (int)plVar11[3])) {
              plVar11[2] = *(long *)(lVar18 + 0xa8);
              uVar5 = *(uint *)(lVar18 + 0xa0);
              lVar23 = *(long *)(*plVar11 + 0x78);
              *(uint *)(plVar11 + 3) = uVar5;
              if (*(char *)(lVar23 + 0x18) == '\x15') {
                plVar13 = (long *)(lVar23 + ((ulong)(uVar5 >> 0x1a) & 0x38) + 0x48);
                lVar24 = *plVar13;
                lVar23 = 0;
                if (lVar24 != 0) {
                  lVar23 = lVar24 + (long)plVar13;
                }
              }
              plVar11[4] = lVar23;
            }
            plVar3[2] = *(long *)(lVar18 + 0xb0);
            lVar24 = *plVar3;
            uVar5 = *(uint *)(lVar18 + 0xa4);
            lVar23 = *(long *)(lVar24 + 0x78);
            *(uint *)(plVar3 + 3) = uVar5;
            if (*(char *)(lVar23 + 0x18) == '\x15') {
              plVar13 = (long *)(lVar23 + ((ulong)(uVar5 >> 0x1a) & 0x38) + 0x48);
              lVar29 = *plVar13;
              lVar23 = 0;
              if (lVar29 != 0) {
                lVar23 = lVar29 + (long)plVar13;
              }
            }
            plVar3[4] = lVar23;
            if ((*(byte *)(lVar18 + 0x96) >> 4 & 1) == 0) {
              lVar23 = *(long *)(param_2 + 0x40);
              uVar5 = *(uint *)(lVar24 + 0x54) | *(uint *)(*plVar11 + 0x54) |
                      *(uint *)(*(long *)(param_2 + 0x20) +
                                (ulong)*(ushort *)(*plVar11 + 0x8a) * 0x50 + 0x14) |
                      *(uint *)(*(long *)(param_2 + 0x20) + (ulong)*(ushort *)(lVar24 + 0x8a) * 0x50
                               + 0x14);
              if ((*(uint *)(lVar23 + 0x318) & uVar5) != 0) {
                if (*(int *)(lVar23 + 0x1458) == 0) {
                  lVar24 = 0;
                  puVar17 = (undefined8 *)(lVar23 + 0x328);
                  do {
                    if ((*(uint *)(puVar17 + -1) & uVar5) != 0) {
                      (**(code **)(*(long *)*puVar17 + 0x28))
                                ((long *)*puVar17,param_2,param_3,plVar11,plVar3,lVar18);
                    }
                    lVar24 = lVar24 + 1;
                    puVar17 = puVar17 + 2;
                  } while (lVar24 < *(int *)(lVar23 + 0x31c));
                }
                else {
                  lVar24 = (long)*(int *)(lVar23 + 0x1458) << 3;
                  puVar17 = *(undefined8 **)(lVar23 + 0x1450);
                  do {
                    (**(code **)(*(long *)*puVar17 + 0xb8))
                              ((long *)*puVar17,param_2,param_3,plVar11,plVar3,lVar18);
                    lVar24 = lVar24 + -8;
                    puVar17 = puVar17 + 1;
                  } while (lVar24 != 0);
                  lVar24 = 0;
                  puVar17 = (undefined8 *)(lVar23 + 0x328);
                  do {
                    if ((*(uint *)(puVar17 + -1) & uVar5) != 0) {
                      (**(code **)(*(long *)*puVar17 + 0x28))
                                ((long *)*puVar17,param_2,param_3,plVar11,plVar3,lVar18);
                    }
                    lVar24 = lVar24 + 1;
                    puVar17 = puVar17 + 2;
                  } while (lVar24 < *(int *)(lVar23 + 0x31c));
                  if (*(int *)(lVar23 + 0x1458) != 0) {
                    lVar24 = (long)*(int *)(lVar23 + 0x1458) << 3;
                    puVar17 = *(undefined8 **)(lVar23 + 0x1450);
                    do {
                      (**(code **)(*(long *)*puVar17 + 0xc0))
                                ((long *)*puVar17,param_2,param_3,plVar11,plVar3,lVar18);
                      lVar24 = lVar24 + -8;
                      puVar17 = puVar17 + 1;
                    } while (lVar24 != 0);
                  }
                }
              }
            }
            lVar23 = *(long *)(lVar18 + 0x98);
            if (((*(byte *)(lVar23 + 0x2c) >> 6 & 1) == 0) && (*(long *)(param_1 + 0x18) != 0)) {
              if (lVar33 == 0) {
                bVar10 = true;
              }
              else {
                bVar10 = (int)plVar11[3] != iVar31;
              }
              (**(code **)(*plVar12 + 0x50))
                        (plVar12,*(long *)(param_1 + 0x18),param_2,uVar28,lVar23,lVar18,plVar11,
                         plVar3,bVar10);
            }
            else {
              *(undefined8 *)(lVar23 + 0x20) = 0;
              *(undefined2 *)(lVar23 + 0x28) = 0;
            }
          }
          else {
            puVar17 = *(undefined8 **)(puVar20 + 2);
            puVar20 = (uint *)*puVar17;
            plVar11[2] = *(long *)(param_2 + 0x20) + (ulong)*(ushort *)(puVar17 + 1) * 0x50;
            plVar3[2] = *(long *)(param_2 + 0x20) + (ulong)*(ushort *)((long)puVar17 + 10) * 0x50;
            lVar18 = *(long *)(*plVar11 + 0x78);
            if (*(char *)(lVar18 + 0x19) == '\x02') {
              *(undefined4 *)(plVar11 + 3) = 0xffffffff;
              if (*(char *)(lVar18 + 0x18) == '\x15') {
                plVar13 = (long *)(lVar18 + 0x80);
                lVar23 = *plVar13;
LAB_02f25724:
                lVar18 = 0;
                if (lVar23 != 0) {
                  lVar18 = lVar23 + (long)plVar13;
                }
              }
LAB_02f25730:
              plVar11[4] = lVar18;
            }
            else {
              uVar5 = puVar20[1];
              if (*(char *)(lVar18 + 0x18) != '\x15') {
LAB_02f25704:
                *(uint *)(plVar11 + 3) = uVar5;
                if (*(char *)(lVar18 + 0x18) == '\x15') {
                  plVar13 = (long *)(lVar18 + ((ulong)(uVar5 >> 0x1a) & 0x38) + 0x48);
                  lVar23 = *plVar13;
                  goto LAB_02f25724;
                }
                goto LAB_02f25730;
              }
              bVar6 = *(byte *)((long)puVar20 + 0xe) >> 5;
              plVar13 = (long *)(lVar18 + (ulong)bVar6 * 8 + 0x48);
              lVar23 = *plVar13;
              lVar18 = 0;
              if (lVar23 != 0) {
                lVar18 = lVar23 + (long)plVar13;
              }
              plVar11[4] = lVar18;
              *(uint *)(plVar11 + 3) = (uint)bVar6 << 0x1d | 0x1fffffff;
              if (*(char *)(lVar18 + 0x19) != '\x02') {
                lVar18 = *(long *)(*plVar11 + 0x78);
                goto LAB_02f25704;
              }
            }
            lVar18 = *(long *)(*plVar3 + 0x78);
            if (*(char *)(lVar18 + 0x19) == '\x02') {
              *(undefined4 *)(plVar3 + 3) = 0xffffffff;
              if (*(char *)(lVar18 + 0x18) == '\x15') {
                plVar13 = (long *)(lVar18 + 0x80);
                lVar23 = *plVar13;
LAB_02f257d0:
                lVar18 = 0;
                if (lVar23 != 0) {
                  lVar18 = lVar23 + (long)plVar13;
                }
              }
LAB_02f257dc:
              plVar3[4] = lVar18;
            }
            else {
              uVar5 = *puVar20;
              if (*(char *)(lVar18 + 0x18) != '\x15') {
LAB_02f257b0:
                *(uint *)(plVar3 + 3) = uVar5;
                if (*(char *)(lVar18 + 0x18) == '\x15') {
                  plVar13 = (long *)(lVar18 + ((ulong)(uVar5 >> 0x1a) & 0x38) + 0x48);
                  lVar23 = *plVar13;
                  goto LAB_02f257d0;
                }
                goto LAB_02f257dc;
              }
              bVar6 = *(byte *)((long)puVar20 + 0xe) >> 5;
              plVar13 = (long *)(lVar18 + (ulong)bVar6 * 8 + 0x48);
              lVar23 = *plVar13;
              lVar18 = 0;
              if (lVar23 != 0) {
                lVar18 = lVar23 + (long)plVar13;
              }
              plVar3[4] = lVar18;
              *(uint *)(plVar3 + 3) = (uint)bVar6 << 0x1d | 0x1fffffff;
              if (*(char *)(lVar18 + 0x19) != '\x02') {
                lVar18 = *(long *)(*plVar3 + 0x78);
                goto LAB_02f257b0;
              }
            }
            if (lVar33 == 0) {
              bVar10 = true;
            }
            else {
              bVar10 = (int)plVar11[3] != iVar31;
            }
            (**(code **)(*plVar12 + 0x68))
                      (plVar12,param_2,*(undefined8 *)(param_3 + 8),puVar20,plVar11,plVar3,bVar10,
                       *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
          }
          lVar33 = lVar33 + 1;
          iVar31 = (int)plVar11[3];
        } while (lVar33 < (int)local_d8);
      }
    }
    uVar9 = (ulong)local_d8;
    uVar19 = (ulong)local_d8._4_4_;
    local_d8 = (uint *)((ulong)local_d8._4_4_ << 0x20);
    if ((-1 < (long)uVar9) && (local_e0 != (uint *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_e0,uVar19 << 4);
    }
  }
  if (iVar2 != 0) {
    lVar33 = nn::os::GetSystemTick();
    *(long *)(lVar15 + 0x4f0) = (lVar33 - local_138) + *(long *)(lVar15 + 0x4f0);
    *(int *)(lVar15 + 0x4f8) = *(int *)(lVar15 + 0x4f8) + 1;
  }
  FUN_031c35ac(*(undefined8 *)(param_1 + 0x48),lVar14,puVar1);
  plVar11 = *(long **)(param_1 + 0x48);
  lVar14 = plVar11[3];
  iVar2 = *(int *)((long)plVar11 + 0x1c);
  iVar31 = *(int *)(*plVar11 + 8);
  *(long *)(param_1 + 0x50) = plVar11[2];
  *(short *)(param_1 + 0x58) = (short)lVar14;
  *(short *)(param_1 + 0x5a) = (short)iVar2;
  *(int *)(param_1 + 0x5c) = -(iVar2 + iVar31);
  *plVar22 = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
code_r0x02f2520c:
  local_c0 = local_d8;
  if (local_d8 == (uint *)0x0) goto LAB_02f25224;
  goto LAB_02f25198;
}


