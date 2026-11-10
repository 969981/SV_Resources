/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ba9500; name: FUN_00ba9500
 */


bool FUN_00ba9500(int param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  void *pvVar4;
  undefined1 uVar5;
  size_t __n;
  undefined2 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  void *pvVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar25;
  undefined8 *puVar24;
  byte *pbVar27;
  byte *pbVar26;
  ulong uVar28;
  int local_124;
  byte local_110;
  undefined5 uStack_10f;
  undefined2 uStack_10a;
  undefined6 uStack_108;
  undefined2 uStack_102;
  void *local_100;
  undefined7 uStack_f8;
  undefined1 local_f1;
  undefined7 uStack_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  long *local_d0;
  long *local_c8;
  long local_c0 [2];
  ulong local_b0;
  size_t local_a8;
  void *local_a0;
  ulong local_98 [7];
  
  pbVar2 = (byte *)*param_3;
  lVar14 = tpidr_el0;
  if ((byte *)param_3[1] != pbVar2) {
    pbVar27 = (byte *)param_3[1];
    do {
      pbVar26 = pbVar27 + -0x18;
      if (((*pbVar26 & 1) != 0) && (lVar15 = *(long *)(pbVar27 + -8), lVar15 != 0)) {
        plVar10 = *(long **)(lVar14 + 0x30);
        if (plVar10 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar10 = DAT_04859430;
          *(long **)(lVar14 + 0x30) = DAT_04859430;
        }
        uVar28 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar28 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar15,0,8);
        }
        else {
          FUN_00c48fe8(plVar10,lVar15,0,8);
        }
      }
      pbVar27 = pbVar26;
    } while (pbVar2 != pbVar26);
  }
  param_3[1] = (long)pbVar2;
  plVar10 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[3] = 0;
  (**(code **)(*plVar10 + 0x80))(plVar10,param_2,local_98 + 3);
  if (local_98[4] != local_98[3]) {
    pvVar21 = (void *)((ulong)&local_b0 | 1);
    puVar23 = (undefined8 *)((ulong)&local_b0 | 2);
    uVar28 = 0;
    puVar1 = PTR_DAT_047dad38 + 0x10;
    do {
      if (*(int *)(*(long *)(local_98[3] + uVar28 * 8) + 0x40) == 3) {
        local_124 = (**(code **)(*plVar10 + 0x30))(plVar10,param_2);
        if (0 < local_124) {
          bVar7 = true;
          goto LAB_00ba9730;
        }
      }
      else {
        bVar7 = false;
        local_124 = 1;
LAB_00ba9730:
        iVar9 = 0;
        do {
          local_98[1] = 0;
          local_98[2] = 0;
          local_98[0] = 0;
          lVar15 = *(long *)(local_98[3] + uVar28 * 8);
          if ((*(uint *)(lVar15 + 0x3c) & 0xfffffffe) == 10) {
            local_a8 = 0;
            local_a0 = (void *)0x0;
            local_b0 = 0;
            local_c0[0] = 0;
            local_c0[1] = 0;
            local_e0 = (undefined8 *)((ulong)local_e0 & 0xffffffffffff0000);
            local_e8 = (undefined8 *)0x0;
            local_d8 = (undefined8 *)0x0;
            plVar16 = *(long **)(lVar14 + 0x30);
            local_c8 = local_c0;
            if (plVar16 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar16 = DAT_04859430;
              *(long **)(lVar14 + 0x30) = DAT_04859430;
            }
            local_d0 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,8,8);
            *local_d0 = (long)puVar1;
            local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,param_1 + 1);
            iVar8 = iVar9;
            if (!bVar7) {
              iVar8 = -1;
            }
            FUN_00c36bb4(&local_e8,param_2,*(undefined8 *)(local_98[3] + uVar28 * 8),iVar8,&local_b0
                        );
            std::string::append((char *)local_98);
            pvVar4 = pvVar21;
            if ((local_b0 & 1) != 0) {
              pvVar4 = local_a0;
            }
            std::string::append((char *)local_98,(ulong)pvVar4);
            std::string::append((ulong)local_98,(char)(param_1 << 1));
            std::string::append((char *)local_98);
            plVar16 = local_c8;
            while (plVar16 != local_c0) {
              if ((long *)plVar16[5] != (long *)0x0) {
                (**(code **)(*(long *)plVar16[5] + 8))();
              }
              plVar17 = (long *)plVar16[1];
              if ((long *)plVar16[1] == (long *)0x0) {
                plVar17 = plVar16 + 2;
                if (*(long **)*plVar17 == plVar16) {
                  plVar16 = (long *)*plVar17;
                }
                else {
                  do {
                    lVar15 = *plVar17;
                    plVar17 = (long *)(lVar15 + 0x10);
                    plVar16 = (long *)*plVar17;
                  } while (*plVar16 != lVar15);
                }
              }
              else {
                do {
                  plVar16 = plVar17;
                  plVar17 = (long *)*plVar16;
                } while ((long *)*plVar16 != (long *)0x0);
              }
            }
            FUN_02a008d0(&local_c8,local_c0[0]);
            local_c0[0] = 0;
            local_c0[1] = 0;
            local_c8 = local_c0;
            if (local_d0 != (long *)0x0) {
              (**(code **)(*local_d0 + 8))();
            }
            pvVar4 = local_a0;
            if (((local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
              plVar16 = *(long **)(lVar14 + 0x30);
              if (plVar16 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar16 = DAT_04859430;
                *(long **)(lVar14 + 0x30) = DAT_04859430;
              }
              uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
              if (((uVar11 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar16 + 0x18))(plVar16,pvVar4,0,8);
              }
              else {
                FUN_00c48fe8(plVar16,pvVar4,0,8);
              }
            }
          }
          else {
            iVar8 = iVar9;
            if (!bVar7) {
              iVar8 = -1;
            }
            FUN_00c381b4(param_2,lVar15,iVar8,local_98);
          }
          local_a8 = 0;
          local_a0 = (void *)0x0;
          local_b0 = 0;
          puVar18 = *(undefined8 **)(local_98[3] + uVar28 * 8);
          if (*(char *)((long)puVar18 + 0x44) == '\0') {
            std::string::operator=((string *)&local_b0,(string *)*puVar18);
          }
          else {
            std::operator+("(.",(string *)puVar18[1]);
            puVar18 = (undefined8 *)std::string::append((char *)&local_e8);
            pvVar12 = local_a0;
            uVar19 = *(undefined8 *)((long)puVar18 + 2);
            pvVar4 = (void *)puVar18[2];
            uVar6 = *(undefined2 *)puVar18;
            uStack_108 = (undefined6)((ulong)puVar18[1] >> 0x10);
            local_110 = (byte)uVar19;
            uStack_10f = (undefined5)((ulong)uVar19 >> 8);
            uStack_10a = (undefined2)((ulong)uVar19 >> 0x30);
            *puVar18 = 0;
            puVar18[1] = 0;
            puVar18[2] = 0;
            if (((local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
              plVar16 = *(long **)(lVar14 + 0x30);
              if (plVar16 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar16 = DAT_04859430;
                *(long **)(lVar14 + 0x30) = DAT_04859430;
              }
              uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
              if (((uVar11 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar16 + 0x18))(plVar16,pvVar12,0,8);
              }
              else {
                FUN_00c48fe8(plVar16,pvVar12,0,8);
              }
            }
            puVar18 = local_d8;
            local_b0 = CONCAT62(local_b0._2_6_,uVar6);
            *(ulong *)((long)puVar23 + 6) = CONCAT62(uStack_108,uStack_10a);
            *puVar23 = CONCAT26(uStack_10a,CONCAT51(uStack_10f,local_110));
            local_a0 = pvVar4;
            if ((((ulong)local_e8 & 1) != 0) && (local_d8 != (undefined8 *)0x0)) {
              plVar16 = *(long **)(lVar14 + 0x30);
              if (plVar16 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar16 = DAT_04859430;
                *(long **)(lVar14 + 0x30) = DAT_04859430;
              }
              uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
              if (((uVar11 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar16 + 0x18))(plVar16,puVar18,0,8);
              }
              else {
                FUN_00c48fe8(plVar16,puVar18,0,8);
              }
            }
          }
          uStack_108 = 0;
          uStack_102 = 0;
          local_100 = (void *)0x0;
          pvVar4 = pvVar21;
          __n = local_b0 >> 1 & 0x7f;
          if ((local_b0 & 1) != 0) {
            pvVar4 = local_a0;
            __n = local_a8;
          }
          local_110 = 0;
          uStack_10f = 0;
          uStack_10a = 0;
          if (0xffffffffffffffef < __n + 3) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (__n + 3 < 0x17) {
            local_110 = (byte)((int)__n << 1);
            pvVar12 = (void *)((ulong)&local_110 | 1);
            if (__n != 0) goto LAB_00ba9ae0;
          }
          else {
            uVar11 = __n + 0x13 & 0xfffffffffffffff0;
            plVar16 = *(long **)(lVar14 + 0x30);
            if (plVar16 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar16 = DAT_04859430;
              *(long **)(lVar14 + 0x30) = DAT_04859430;
            }
            pvVar12 = (void *)(**(code **)(*plVar16 + 0x10))(plVar16,uVar11,8);
            local_110 = (byte)uVar11 | 1;
            uStack_10f = (undefined5)(uVar11 >> 8);
            uStack_10a = (undefined2)(uVar11 >> 0x30);
            uStack_108 = (undefined6)__n;
            uStack_102 = (undefined2)(__n >> 0x30);
            local_100 = pvVar12;
LAB_00ba9ae0:
            memcpy(pvVar12,pvVar4,__n);
          }
          *(undefined1 *)((long)pvVar12 + __n) = 0;
          std::string::append((char *)&local_110,0x3bfb23b);
          uVar11 = (ulong)local_98 | 1;
          if ((local_98[0] & 1) != 0) {
            uVar11 = local_98[2];
          }
          puVar18 = (undefined8 *)std::string::append((char *)&local_110,uVar11);
          uVar20 = *(undefined8 *)((long)puVar18 + 1);
          uVar19 = puVar18[2];
          uVar5 = *(undefined1 *)puVar18;
          uStack_f0 = (undefined7)((ulong)puVar18[1] >> 8);
          uStack_f8 = (undefined7)uVar20;
          local_f1 = (undefined1)((ulong)uVar20 >> 0x38);
          *puVar18 = 0;
          puVar18[1] = 0;
          puVar18[2] = 0;
          puVar3 = (undefined1 *)param_3[1];
          if (puVar3 < (undefined1 *)param_3[2]) {
            *puVar3 = uVar5;
            *(ulong *)(puVar3 + 8) = CONCAT71(uStack_f0,local_f1);
            *(undefined8 *)(puVar3 + 0x10) = uVar19;
            *(undefined8 *)(puVar3 + 1) = uVar20;
            uStack_f0 = 0;
            uStack_f8 = 0;
            local_f1 = 0;
            param_3[1] = (long)(puVar3 + 0x18);
          }
          else {
            lVar15 = ((long)puVar3 - *param_3 >> 3) * -0x5555555555555555;
            uVar11 = lVar15 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar22 = param_3[2] - *param_3 >> 3;
            uVar13 = lVar22 * 0x5555555555555556;
            if (uVar11 <= uVar13) {
              uVar11 = uVar13;
            }
            if (0x555555555555554 < (ulong)(lVar22 * -0x5555555555555555)) {
              uVar11 = 0xaaaaaaaaaaaaaaa;
            }
            FUN_01f6e248(&local_e8,uVar11,lVar15,param_3 + 2);
            *(undefined1 *)local_d8 = uVar5;
            local_d8[1] = CONCAT71(uStack_f0,local_f1);
            local_d8[2] = uVar19;
            *(ulong *)((long)local_d8 + 1) = CONCAT17(local_f1,uStack_f8);
            puVar18 = local_d8 + 3;
            uStack_f0 = 0;
            uStack_f8 = 0;
            local_f1 = 0;
            local_d8 = (undefined8 *)*param_3;
            if ((undefined8 *)param_3[1] == local_d8) {
              local_e8 = local_d8;
            }
            else {
              puVar24 = (undefined8 *)param_3[1];
              do {
                puVar25 = puVar24 + -3;
                uVar19 = puVar24[-2];
                uVar20 = puVar24[-1];
                local_e0[-3] = *puVar25;
                local_e0[-2] = uVar19;
                local_e0[-1] = uVar20;
                *puVar25 = 0;
                puVar24[-2] = 0;
                puVar24[-1] = 0;
                local_e0 = local_e0 + -3;
                puVar24 = puVar25;
              } while (local_d8 != puVar25);
              local_d8 = (undefined8 *)param_3[1];
              local_e8 = (undefined8 *)*param_3;
            }
            *param_3 = (long)local_e0;
            param_3[1] = (long)puVar18;
            plVar16 = (long *)param_3[2];
            param_3[2] = (long)local_d0;
            local_e0 = local_e8;
            local_d0 = plVar16;
            FUN_01f6e36c(&local_e8);
          }
          pvVar4 = local_100;
          if (((local_110 & 1) != 0) && (local_100 != (void *)0x0)) {
            plVar16 = *(long **)(lVar14 + 0x30);
            if (plVar16 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar16 = DAT_04859430;
              *(long **)(lVar14 + 0x30) = DAT_04859430;
            }
            uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
            if (((uVar11 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
              (**(code **)(*plVar16 + 0x18))(plVar16,pvVar4,0,8);
            }
            else {
              FUN_00c48fe8(plVar16,pvVar4,0,8);
            }
          }
          pvVar4 = local_a0;
          if (((local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
            plVar16 = *(long **)(lVar14 + 0x30);
            if (plVar16 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar16 = DAT_04859430;
              *(long **)(lVar14 + 0x30) = DAT_04859430;
            }
            uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
            if (((uVar11 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
              (**(code **)(*plVar16 + 0x18))(plVar16,pvVar4,0,8);
            }
            else {
              FUN_00c48fe8(plVar16,pvVar4,0,8);
            }
          }
          uVar11 = local_98[2];
          if (((local_98[0] & 1) != 0) && (local_98[2] != 0)) {
            plVar16 = *(long **)(lVar14 + 0x30);
            if (plVar16 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar16 = DAT_04859430;
              *(long **)(lVar14 + 0x30) = DAT_04859430;
            }
            uVar13 = (**(code **)(*plVar16 + 0xf8))(plVar16);
            if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
              (**(code **)(*plVar16 + 0x18))(plVar16,uVar11,0,8);
            }
            else {
              FUN_00c48fe8(plVar16,uVar11,0,8);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != local_124);
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < (ulong)((long)(local_98[4] - local_98[3]) >> 3));
  }
  uVar28 = local_98[3];
  lVar15 = *param_3;
  lVar22 = param_3[1];
  if (local_98[3] != 0) {
    plVar10 = *(long **)(lVar14 + 0x30);
    local_98[4] = local_98[3];
    if (plVar10 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar10 = DAT_04859430;
      *(long **)(lVar14 + 0x30) = DAT_04859430;
    }
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,uVar28,0,8);
    }
    else {
      FUN_00c48fe8(plVar10,uVar28,0,8);
    }
  }
  return lVar15 != lVar22;
}


