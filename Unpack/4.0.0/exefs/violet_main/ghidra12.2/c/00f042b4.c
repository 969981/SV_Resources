/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f042b4; name: FUN_00f042b4
 */


void FUN_00f042b4(long param_1,undefined8 *param_2)

{
  short *psVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  char cVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  undefined8 *puVar28;
  long *plVar29;
  long *plVar30;
  ulong uVar31;
  int iVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *unaff_x25;
  long *plVar37;
  long *plVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  long *local_150;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long *local_f0;
  undefined1 auStack_e8 [16];
  long alStack_d8 [2];
  char local_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined **local_a8;
  long local_a0 [2];
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar18 = *param_2;
  fVar41 = *(float *)(param_1 + 0x298);
  iVar16 = (int)(-(float)param_2[1] / fVar41);
  iVar32 = (int)(*(float *)(param_1 + 0x29c) / fVar41);
  if (((*PTR_DAT_047d8a30 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8a30), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047dcb50,PTR_DAT_047d8a38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a30);
  }
  plVar27 = (long *)PTR_DAT_047d8b70;
  local_78 = 0;
  uStack_70 = 0;
  iVar17 = (int)((float)uVar18 / fVar41);
  local_88 = 0;
  uStack_80 = 0;
  local_a0[1] = 0;
  local_90 = (long *)0x0;
  local_a8 = &PTR_FUN_0457f800;
  local_a0[0] = 0;
  uVar18 = *(undefined8 *)PTR_DAT_047d8a38;
  uVar3 = iVar16 - iVar32 & (iVar16 - iVar32 >> 0x1f ^ 0xffffffffU);
  *(undefined8 *)PTR_DAT_047d8a40 = uVar18;
  iVar12 = 0;
  plVar35 = (long *)PTR_PTR_047d4508;
  if ((int)uVar3 < iVar32 + iVar16) {
    plVar38 = (long *)(param_1 + 0x1c8);
    uVar4 = iVar17 - iVar32 & (iVar17 - iVar32 >> 0x1f ^ 0xffffffffU);
    uVar19 = 0;
    plVar34 = (long *)(ulong)uVar3;
    do {
      plVar33 = *(long **)(param_1 + 0x1d0);
      if (plVar33 == (long *)0x0) {
LAB_00f049b8:
        plVar36 = (long *)(**(code **)(**(long **)(param_1 + 0x200) + 0x10))
                                    (*(long **)(param_1 + 0x200),0x80,8);
        if (plVar36 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x200) + 0xe8))();
        }
        uVar15 = *(undefined8 *)(param_1 + 0x200);
        if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar21 = nn::os::GetTlsValue(DAT_04865a30);
        plVar35 = (long *)PTR_PTR_047d4508;
        if (lVar21 != 0) {
          if (0xf < *(ulong *)(lVar21 + 0x80)) {
LAB_00f05f20:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar15;
          *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
        }
        *(int *)(plVar36 + 2) = (int)plVar34;
        lVar26 = *(long *)(param_1 + 0x40);
        plVar36[6] = 0xaaaaaaaaaaaaaaa;
        plVar36[7] = 0;
        *(undefined4 *)(plVar36 + 8) = 0;
        *(undefined4 *)(plVar36 + 0xd) = 0;
        plVar36[0xe] = 0;
        plVar36[5] = lVar26;
        plVar36[9] = 0;
        plVar36[10] = lVar26;
        *(undefined4 *)(plVar36 + 0xf) = 0x3f800000;
        plVar36[3] = 0;
        plVar36[4] = 0;
        plVar36[0xb] = 0xaaaaaaaaaaaaaaa;
        plVar36[0xc] = 0;
        if (lVar21 != 0) {
          *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
        }
        *plVar36 = 0;
        plVar36[1] = (long)plVar34;
        fVar41 = (float)(*(long *)(param_1 + 0x220) + 1);
        if (plVar33 == (long *)0x0) {
LAB_00f057d8:
          uVar20 = (ulong)(plVar33 < (long *)0x3 || ((ulong)plVar33 & (long)plVar33 - 1U) != 0) |
                   (long)plVar33 << 1;
          uVar22 = (ulong)(fVar41 / *(float *)(param_1 + 0x228));
          if (uVar22 <= uVar20) {
            uVar22 = uVar20;
          }
          if (uVar22 - 1 == 0) {
            uVar22 = 2;
          }
          else if ((uVar22 & uVar22 - 1) != 0) {
            uVar22 = std::__next_prime(uVar22);
          }
          uVar20 = *(ulong *)(param_1 + 0x1d0);
          if (uVar20 < uVar22) {
            uVar31 = uVar22;
LAB_00f05838:
            FUN_00f07730(plVar38,uVar31);
          }
          else if (uVar22 < uVar20) {
            uVar31 = (ulong)((float)*(ulong *)(param_1 + 0x220) / *(float *)(param_1 + 0x228));
            if ((uVar20 < 3) ||
               (uVar23 = uVar20 - (uVar20 >> 1 & 0x5555555555555555),
               uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333),
               1 < (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar31 = std::__next_prime(uVar31);
            }
            else if (1 < uVar31) {
              uVar31 = 1L << (-LZCOUNT(uVar31 - 1) & 0x3fU);
            }
            if (uVar31 <= uVar22) {
              uVar31 = uVar22;
            }
            if (uVar31 < uVar20) goto LAB_00f05838;
          }
          plVar33 = *(long **)(param_1 + 0x1d0);
          plVar35 = (long *)PTR_PTR_047d4508;
          if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
            unaff_x25 = (long *)((long)plVar33 + 0x7fffffffU & (ulong)plVar34);
          }
          else if (plVar34 < plVar33) {
            unaff_x25 = plVar34;
          }
          else {
            uVar20 = 0;
            if (plVar33 != (long *)0x0) {
              uVar20 = (ulong)plVar34 / (ulong)plVar33;
            }
            unaff_x25 = (long *)((long)plVar34 - uVar20 * (long)plVar33);
          }
        }
        else if (*(float *)(param_1 + 0x228) * (float)plVar33 < fVar41) goto LAB_00f057d8;
        plVar25 = *(long **)(*plVar38 + (long)unaff_x25 * 8);
        if (plVar25 == (long *)0x0) {
          *plVar36 = *(long *)(param_1 + 0x1f8);
          *(long **)(param_1 + 0x1f8) = plVar36;
          *(long *)(*(long *)(param_1 + 0x1c8) + (long)unaff_x25 * 8) = param_1 + 0x1f8;
          if (*plVar36 != 0) {
            plVar25 = *(long **)(*plVar36 + 8);
            if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
              plVar25 = (long *)((ulong)plVar25 & (long)plVar33 - 1U);
            }
            else if (plVar33 <= plVar25) {
              uVar20 = 0;
              if (plVar33 != (long *)0x0) {
                uVar20 = (ulong)plVar25 / (ulong)plVar33;
              }
              plVar25 = (long *)((long)plVar25 - uVar20 * (long)plVar33);
            }
            plVar25 = (long *)(*plVar38 + (long)plVar25 * 8);
            goto LAB_00f04b24;
          }
        }
        else {
          *plVar36 = *plVar25;
LAB_00f04b24:
          *plVar25 = (long)plVar36;
        }
        *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x220) + 1;
      }
      else {
        uVar20 = (long)plVar33 - ((ulong)plVar33 >> 1 & 0x5555555555555555);
        uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
        uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar20 < 2) {
          plVar25 = (long *)((long)plVar33 + 0x7fffffffU & (ulong)plVar34);
        }
        else {
          plVar25 = plVar34;
          if (plVar33 <= plVar34) {
            uVar22 = 0;
            if (plVar33 != (long *)0x0) {
              uVar22 = (ulong)plVar34 / (ulong)plVar33;
            }
            plVar25 = (long *)((long)plVar34 - uVar22 * (long)plVar33);
          }
        }
        lVar21 = *plVar38;
        puVar28 = *(undefined8 **)(lVar21 + (long)plVar25 * 8);
        if ((puVar28 != (undefined8 *)0x0) && (plVar36 = (long *)*puVar28, plVar36 != (long *)0x0))
        {
          if (uVar20 < 2) {
            do {
              if ((long *)plVar36[1] == plVar34) {
                if (plVar34 == (long *)(ulong)*(uint *)(plVar36 + 2)) goto LAB_00f04424;
              }
              else if ((long *)((ulong)plVar36[1] & (long)plVar33 - 1U) != plVar25) break;
              plVar36 = (long *)*plVar36;
            } while (plVar36 != (long *)0x0);
          }
          else {
            do {
              plVar29 = (long *)plVar36[1];
              if (plVar29 == plVar34) {
                if (plVar34 == (long *)(ulong)*(uint *)(plVar36 + 2)) goto LAB_00f04424;
              }
              else {
                if (plVar33 <= plVar29) {
                  uVar22 = 0;
                  if (plVar33 != (long *)0x0) {
                    uVar22 = (ulong)plVar29 / (ulong)plVar33;
                  }
                  plVar29 = (long *)((long)plVar29 - uVar22 * (long)plVar33);
                }
                if (plVar29 != plVar25) break;
              }
              plVar36 = (long *)*plVar36;
            } while (plVar36 != (long *)0x0);
          }
        }
        if (uVar20 < 2) {
          unaff_x25 = (long *)((long)plVar33 - 1U & (ulong)plVar34);
          plVar36 = *(long **)(lVar21 + (long)unaff_x25 * 8);
          if (plVar36 == (long *)0x0) goto LAB_00f049b8;
          do {
            plVar36 = (long *)*plVar36;
            if ((plVar36 == (long *)0x0) ||
               ((long *)plVar36[1] != plVar34 &&
                (long *)((ulong)plVar36[1] & (long)plVar33 - 1U) != unaff_x25)) goto LAB_00f049b8;
          } while (plVar34 != (long *)(ulong)*(uint *)(plVar36 + 2));
        }
        else {
          unaff_x25 = plVar34;
          if (plVar33 <= plVar34) {
            uVar20 = 0;
            if (plVar33 != (long *)0x0) {
              uVar20 = (ulong)plVar34 / (ulong)plVar33;
            }
            unaff_x25 = (long *)((long)plVar34 - uVar20 * (long)plVar33);
          }
          plVar36 = *(long **)(lVar21 + (long)unaff_x25 * 8);
          if (plVar36 == (long *)0x0) goto LAB_00f049b8;
          do {
            plVar36 = (long *)*plVar36;
            if (plVar36 == (long *)0x0) goto LAB_00f049b8;
            plVar25 = (long *)plVar36[1];
            if (plVar25 != plVar34) {
              if (plVar33 <= plVar25) {
                uVar20 = 0;
                if (plVar33 != (long *)0x0) {
                  uVar20 = (ulong)plVar25 / (ulong)plVar33;
                }
                plVar25 = (long *)((long)plVar25 - uVar20 * (long)plVar33);
              }
              if (plVar25 != unaff_x25) goto LAB_00f049b8;
            }
          } while (plVar34 != (long *)(ulong)*(uint *)(plVar36 + 2));
        }
      }
LAB_00f04424:
      if ((int)uVar4 < iVar32 + iVar17) {
        unaff_x25 = plVar36 + 3;
        plVar33 = (long *)(ulong)uVar4;
LAB_00f04434:
        plVar25 = (long *)plVar36[4];
        iVar14 = (int)plVar33;
        if (plVar25 == (long *)0x0) {
LAB_00f04d88:
          plVar37 = (long *)(**(code **)(*(long *)plVar36[10] + 0x10))((long *)plVar36[10],0x28,8);
          if (plVar37 == (long *)0x0) {
            (**(code **)(*(long *)plVar36[10] + 0xe8))();
          }
          lVar21 = plVar36[10];
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar26 = nn::os::GetTlsValue(DAT_04865a30);
          plVar27 = (long *)PTR_DAT_047d8b70;
          plVar35 = (long *)PTR_PTR_047d4508;
          if (lVar26 == 0) {
            *(int *)(plVar37 + 2) = iVar14;
            *(undefined2 *)(plVar37 + 3) = 0;
            *(undefined2 *)((long)plVar37 + 0x1e) = local_108._4_2_;
            *(undefined4 *)((long)plVar37 + 0x1a) = (undefined4)local_108;
            plVar37[4] = 0;
            plVar27 = (long *)PTR_DAT_047d8b70;
            plVar35 = (long *)PTR_PTR_047d4508;
          }
          else {
            if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_00f05f20;
            *(long *)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = lVar21;
            *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
            *(int *)(plVar37 + 2) = iVar14;
            *(undefined2 *)(plVar37 + 3) = 0;
            *(undefined2 *)((long)plVar37 + 0x1e) = local_108._4_2_;
            *(undefined4 *)((long)plVar37 + 0x1a) = (undefined4)local_108;
            plVar37[4] = 0;
            *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
          }
          *plVar37 = 0;
          plVar37[1] = (long)plVar33;
          if (plVar25 == (long *)0x0) {
LAB_00f04f24:
            uVar20 = (ulong)(plVar25 < (long *)0x3 || ((ulong)plVar25 & (long)plVar25 - 1U) != 0) |
                     (long)plVar25 << 1;
            uVar22 = (ulong)((float)(plVar36[0xe] + 1) / *(float *)(plVar36 + 0xf));
            if (uVar22 <= uVar20) {
              uVar22 = uVar20;
            }
            if (uVar22 - 1 == 0) {
              uVar22 = 2;
            }
            else if ((uVar22 & uVar22 - 1) != 0) {
              uVar22 = std::__next_prime(uVar22);
            }
            uVar20 = plVar36[4];
            if (uVar20 < uVar22) {
              uVar31 = uVar22;
LAB_00f04f94:
              FUN_00f07030(unaff_x25,uVar31);
            }
            else if (uVar22 < uVar20) {
              uVar31 = (ulong)((float)(ulong)plVar36[0xe] / *(float *)(plVar36 + 0xf));
              if ((uVar20 < 3) ||
                 (uVar23 = uVar20 - (uVar20 >> 1 & 0x5555555555555555),
                 uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333),
                 1 < (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                uVar31 = std::__next_prime(uVar31);
              }
              else if (1 < uVar31) {
                uVar31 = 1L << (-LZCOUNT(uVar31 - 1) & 0x3fU);
              }
              if (uVar31 <= uVar22) {
                uVar31 = uVar22;
              }
              if (uVar31 < uVar20) goto LAB_00f04f94;
            }
            plVar25 = (long *)plVar36[4];
            plVar35 = (long *)PTR_PTR_047d4508;
            plVar27 = (long *)PTR_DAT_047d8b70;
            if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
              plVar29 = (long *)((long)plVar25 + 0x7fffffffU & (ulong)plVar33);
            }
            else if (plVar33 < plVar25) {
              plVar29 = plVar33;
            }
            else {
              uVar20 = 0;
              if (plVar25 != (long *)0x0) {
                uVar20 = (ulong)plVar33 / (ulong)plVar25;
              }
              plVar29 = (long *)((long)plVar33 - uVar20 * (long)plVar25);
            }
          }
          else {
            plVar29 = local_150;
            if (*(float *)(plVar36 + 0xf) * (float)plVar25 < (float)(plVar36[0xe] + 1))
            goto LAB_00f04f24;
          }
          plVar30 = *(long **)(*unaff_x25 + (long)plVar29 * 8);
          if (plVar30 == (long *)0x0) {
            plVar30 = plVar36 + 9;
            *plVar37 = *plVar30;
            *plVar30 = (long)plVar37;
            *(long **)(plVar36[3] + (long)plVar29 * 8) = plVar30;
            if (*plVar37 != 0) {
              plVar29 = *(long **)(*plVar37 + 8);
              if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
                plVar29 = (long *)((ulong)plVar29 & (long)plVar25 - 1U);
              }
              else if (plVar25 <= plVar29) {
                uVar20 = 0;
                if (plVar25 != (long *)0x0) {
                  uVar20 = (ulong)plVar29 / (ulong)plVar25;
                }
                plVar29 = (long *)((long)plVar29 - uVar20 * (long)plVar25);
              }
              plVar30 = (long *)(*unaff_x25 + (long)plVar29 * 8);
              goto LAB_00f04eb8;
            }
          }
          else {
            *plVar37 = *plVar30;
LAB_00f04eb8:
            *plVar30 = (long)plVar37;
          }
          plVar36[0xe] = plVar36[0xe] + 1;
        }
        else {
          uVar20 = (long)plVar25 - ((ulong)plVar25 >> 1 & 0x5555555555555555);
          uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
          uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar20 < 2) {
            plVar29 = (long *)((long)plVar25 + 0x7fffffffU & (ulong)plVar33);
          }
          else {
            plVar29 = plVar33;
            if (plVar25 <= plVar33) {
              uVar22 = 0;
              if (plVar25 != (long *)0x0) {
                uVar22 = (ulong)plVar33 / (ulong)plVar25;
              }
              plVar29 = (long *)((long)plVar33 - uVar22 * (long)plVar25);
            }
          }
          lVar21 = *unaff_x25;
          puVar28 = *(undefined8 **)(lVar21 + (long)plVar29 * 8);
          if ((puVar28 != (undefined8 *)0x0) && (plVar37 = (long *)*puVar28, plVar37 != (long *)0x0)
             ) {
            if (uVar20 < 2) {
              do {
                if ((long *)plVar37[1] == plVar33) {
                  if (plVar33 == (long *)(ulong)*(uint *)(plVar37 + 2)) goto LAB_00f044b8;
                }
                else if ((long *)((ulong)plVar37[1] & (long)plVar25 - 1U) != plVar29) break;
                plVar37 = (long *)*plVar37;
              } while (plVar37 != (long *)0x0);
            }
            else {
              do {
                plVar30 = (long *)plVar37[1];
                if (plVar30 == plVar33) {
                  if (plVar33 == (long *)(ulong)*(uint *)(plVar37 + 2)) goto LAB_00f044b8;
                }
                else {
                  if (plVar25 <= plVar30) {
                    uVar22 = 0;
                    if (plVar25 != (long *)0x0) {
                      uVar22 = (ulong)plVar30 / (ulong)plVar25;
                    }
                    plVar30 = (long *)((long)plVar30 - uVar22 * (long)plVar25);
                  }
                  if (plVar30 != plVar29) break;
                }
                plVar37 = (long *)*plVar37;
              } while (plVar37 != (long *)0x0);
            }
          }
          plVar35 = (long *)PTR_PTR_047d4508;
          plVar27 = (long *)PTR_DAT_047d8b70;
          if (uVar20 < 2) {
            local_150 = (long *)((long)plVar25 - 1U & (ulong)plVar33);
            plVar37 = *(long **)(lVar21 + (long)local_150 * 8);
            if (plVar37 == (long *)0x0) goto LAB_00f04d88;
            do {
              plVar37 = (long *)*plVar37;
              if ((plVar37 == (long *)0x0) ||
                 ((long *)plVar37[1] != plVar33 &&
                  (long *)((ulong)plVar37[1] & (long)plVar25 - 1U) != local_150)) goto LAB_00f04d88;
            } while (plVar33 != (long *)(ulong)*(uint *)(plVar37 + 2));
          }
          else {
            local_150 = plVar33;
            if (plVar25 <= plVar33) {
              uVar20 = 0;
              if (plVar25 != (long *)0x0) {
                uVar20 = (ulong)plVar33 / (ulong)plVar25;
              }
              local_150 = (long *)((long)plVar33 - uVar20 * (long)plVar25);
            }
            plVar37 = *(long **)(lVar21 + (long)local_150 * 8);
            if (plVar37 == (long *)0x0) goto LAB_00f04d88;
            do {
              plVar37 = (long *)*plVar37;
              if (plVar37 == (long *)0x0) goto LAB_00f04d88;
              plVar29 = (long *)plVar37[1];
              if (plVar29 != plVar33) {
                if (plVar25 <= plVar29) {
                  uVar20 = 0;
                  if (plVar25 != (long *)0x0) {
                    uVar20 = (ulong)plVar29 / (ulong)plVar25;
                  }
                  plVar29 = (long *)((long)plVar29 - uVar20 * (long)plVar25);
                }
                if (plVar29 != local_150) goto LAB_00f04d88;
              }
            } while (plVar33 != (long *)(ulong)*(uint *)(plVar37 + 2));
          }
        }
LAB_00f044b8:
        if ((short)plVar37[3] != 0) goto LAB_00f044c0;
        fVar41 = *(float *)(param_1 + 0x298) * (float)iVar14;
        fVar39 = *(float *)(param_1 + 0x298) * (float)-(int)plVar34;
        local_c0 = (ulong)(uint)fVar41;
        uStack_b8 = (ulong)(uint)fVar39;
        if (local_a0[0] == 0) {
          FUN_00cef230(&local_108,uVar18);
          if (local_c8 != '\0') {
            FUN_00cf08b0(&local_a8);
            FUN_00cf0234(local_a0,&local_100);
            plVar35 = local_f0;
            if (local_f0 != (long *)0x0) {
              lVar21 = local_f0[6];
              if (*(long *)(lVar21 + 0x10) == 0) goto LAB_00f05f28;
              psVar1 = (short *)(lVar21 + 0x1a);
              do {
                sVar5 = *psVar1;
                cVar6 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar9) {
                  *psVar1 = sVar5 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 0) {
                uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
                *(undefined8 *)(lVar21 + 8) = uVar15;
                *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
              }
              else if (sVar5 == -1) goto LAB_00f05a7c;
            }
            plVar27 = local_90;
            local_90 = plVar35;
            if (plVar27 != (long *)0x0) {
              lVar21 = plVar27[6];
              psVar1 = (short *)(lVar21 + 0x1a);
              do {
                sVar5 = *psVar1;
                cVar6 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar9) {
                  *psVar1 = sVar5 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 1) {
                *(undefined8 *)(lVar21 + 0x10) = 0;
                (**(code **)(*plVar27 + 0x50))();
              }
              else if (sVar5 == 0) goto LAB_00f05be0;
            }
            local_150 = alStack_d8;
            FUN_00cef9d0(&local_88,auStack_e8);
            FUN_00ceffd4(&local_78,local_150);
            lVar21 = *(long *)(*(long *)(local_a0[0] + 0x210) + 0x138);
            if (*(long *)(*(long *)(local_a0[0] + 0x210) + 0x140) != lVar21) {
              uVar20 = 0;
LAB_00f05068:
              puVar2 = (ulong *)(lVar21 + uVar20 * 0x20);
              uVar22 = *puVar2;
              plVar35 = (long *)puVar2[3];
              if (plVar35 != (long *)0x0) {
                (**(code **)(*plVar35 + 0x18))();
                local_150 = plVar35;
              }
              uVar31 = *(ulong *)(param_1 + 0x238);
              if (uVar31 == 0) {
LAB_00f05928:
                lVar21 = 0;
              }
              else {
                uVar23 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
                uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
                uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar23 < 2) {
                  uVar24 = uVar31 - 1 & uVar22;
                }
                else if (uVar22 < uVar31) {
                  uVar24 = uVar22;
                }
                else {
                  uVar24 = 0;
                  if (uVar31 != 0) {
                    uVar24 = uVar22 / uVar31;
                  }
                  uVar24 = uVar22 - uVar24 * uVar31;
                }
                plVar27 = *(long **)(*(long *)(param_1 + 0x230) + uVar24 * 8);
                if ((plVar27 == (long *)0x0) || (plVar27 = (long *)*plVar27, plVar27 == (long *)0x0)
                   ) goto LAB_00f05928;
                if (1 < uVar23) {
                  do {
                    uVar23 = plVar27[1];
                    if (uVar23 == uVar22) {
                      if (plVar27[2] == uVar22) goto LAB_00f05114;
                    }
                    else {
                      if (uVar31 <= uVar23) {
                        uVar7 = 0;
                        if (uVar31 != 0) {
                          uVar7 = uVar23 / uVar31;
                        }
                        uVar23 = uVar23 - uVar7 * uVar31;
                      }
                      if (uVar23 != uVar24) break;
                    }
                    plVar27 = (long *)*plVar27;
                  } while (plVar27 != (long *)0x0);
                  goto LAB_00f05928;
                }
                do {
                  if (plVar27[1] == uVar22) {
                    if (plVar27[2] == uVar22) goto LAB_00f05114;
                  }
                  else if ((plVar27[1] & uVar31 - 1) != uVar24) goto LAB_00f05928;
                  plVar27 = (long *)*plVar27;
                  lVar21 = 0;
                } while (plVar27 != (long *)0x0);
              }
              goto LAB_00f0511c;
            }
LAB_00f05644:
            if (local_c8 != '\0') {
              FUN_00cef86c(&local_108);
            }
            plVar35 = (long *)PTR_PTR_047d4508;
            plVar27 = (long *)PTR_DAT_047d8b70;
            if (local_a0[0] != 0) {
              fVar39 = (float)uStack_b8;
              fVar41 = (float)local_c0;
              goto LAB_00f0467c;
            }
            goto LAB_00f0484c;
          }
          goto LAB_00f04628;
        }
        lVar21 = *(long *)(local_a0[0] + 0x210);
        fVar40 = (float)*(undefined8 *)(lVar21 + 0x40);
        fVar43 = fVar40 + (float)*(undefined8 *)(lVar21 + 0x60);
        fVar42 = (float)*(undefined8 *)(lVar21 + 0x48);
        fVar44 = fVar42 + (float)*(undefined8 *)(lVar21 + 0x68);
        bVar9 = false;
        bVar11 = false;
        bVar10 = false;
        if (fVar40 <= fVar41) {
          bVar9 = false;
          bVar11 = false;
          bVar10 = true;
          if (!NAN(fVar41) && !NAN(fVar43)) {
            bVar9 = fVar41 < fVar43;
            bVar11 = fVar41 == fVar43;
            bVar10 = false;
          }
        }
        bVar8 = true;
        if ((bVar11 || bVar9 != bVar10) && (bVar8 = false, !NAN(fVar39) && !NAN(fVar42))) {
          bVar8 = fVar39 < fVar42;
        }
        bVar9 = false;
        bVar11 = false;
        bVar10 = false;
        if (!bVar8) {
          bVar9 = false;
          bVar11 = false;
          bVar10 = true;
          if (!NAN(fVar39) && !NAN(fVar44)) {
            bVar9 = fVar39 < fVar44;
            bVar11 = fVar39 == fVar44;
            bVar10 = false;
          }
        }
        if (!(bVar11 || bVar9 != bVar10)) goto LAB_00f04628;
LAB_00f0467c:
        *(undefined2 *)(plVar37 + 3) = 1;
        lVar21 = *(long *)(local_a0[0] + 0x210);
        if ((ulong)(*(long *)(lVar21 + 0x140) - *(long *)(lVar21 + 0x138) >> 5) < 0x21) {
          iVar14 = 0;
          if (*(int *)(lVar21 + 0x170) != 0) {
            fVar40 = (float)*(int *)(lVar21 + 0x130);
            fVar41 = (fVar40 / (float)*(undefined8 *)(lVar21 + 0x60)) *
                     (fVar41 - (float)*(undefined8 *)(lVar21 + 0x40));
            if (0.0 <= fVar41) {
              fVar39 = ((float)*(int *)(lVar21 + 0x134) / (float)*(undefined8 *)(lVar21 + 0x68)) *
                       (fVar39 - (float)*(undefined8 *)(lVar21 + 0x48));
              bVar9 = false;
              bVar11 = false;
              if (fVar39 < (float)*(int *)(lVar21 + 0x134)) {
                bVar9 = false;
                bVar11 = true;
                if (!NAN(fVar41) && !NAN(fVar40)) {
                  bVar9 = fVar41 < fVar40;
                  bVar11 = false;
                }
              }
              iVar14 = 0;
              if ((bVar9 != bVar11) && (0.0 <= fVar39)) {
                uVar3 = (int)fVar41 + *(int *)(lVar21 + 0x130) * (int)fVar39;
                if ((int)uVar3 < 0) {
                  iVar14 = 0;
                }
                else {
                  iVar14 = *(int *)(*(long *)(lVar21 + 0x178) + (ulong)uVar3 * 4);
                }
              }
            }
            else {
              iVar14 = 0;
            }
          }
          uVar20 = (ulong)iVar14;
        }
        else {
          uVar20 = FUN_00cf2664();
          plVar35 = (long *)PTR_PTR_047d4508;
        }
        uVar20 = uVar20 & uVar19;
        if (uVar20 != 0) {
          lVar21 = *(long *)(*(long *)(local_a0[0] + 0x210) + 0x138);
          lVar26 = *(long *)(*(long *)(local_a0[0] + 0x210) + 0x140) - lVar21;
          if (lVar26 != 0) {
            uVar23 = lVar26 >> 5;
            lVar26 = 0;
            uVar22 = 0;
            uVar31 = uVar23;
            if (uVar23 < 2) {
              uVar31 = 1;
            }
            do {
              if ((uVar20 & 1) != 0) {
                if (uVar23 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_out_of_range();
                }
                puVar2 = (ulong *)(lVar21 + lVar26);
                uVar20 = *puVar2;
                local_150 = (long *)puVar2[3];
                if (local_150 != (long *)0x0) {
                  (**(code **)(*local_150 + 0x18))();
                  plVar35 = (long *)PTR_PTR_047d4508;
                }
                uVar22 = *(ulong *)(param_1 + 0x238);
                if (uVar22 == 0) goto LAB_00f04848;
                uVar31 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
                uVar31 = (uVar31 & 0x3333333333333333) + (uVar31 >> 2 & 0x3333333333333333);
                uVar31 = (uVar31 + (uVar31 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar31 < 2) {
                  uVar23 = uVar22 - 1 & uVar20;
                }
                else {
                  uVar23 = uVar20;
                  if (uVar22 <= uVar20) {
                    uVar23 = 0;
                    if (uVar22 != 0) {
                      uVar23 = uVar20 / uVar22;
                    }
                    uVar23 = uVar20 - uVar23 * uVar22;
                  }
                }
                plVar25 = *(long **)(*(long *)(param_1 + 0x230) + uVar23 * 8);
                if (plVar25 == (long *)0x0) goto LAB_00f04848;
                plVar25 = (long *)*plVar25;
                if (plVar25 == (long *)0x0) goto LAB_00f04848;
                if (1 < uVar31) goto LAB_00f04800;
                goto LAB_00f058a4;
              }
              uVar22 = uVar22 + 1;
              uVar20 = uVar20 >> 1;
              lVar26 = lVar26 + 0x20;
            } while (uVar31 != uVar22);
          }
        }
        goto LAB_00f0484c;
      }
LAB_00f044f8:
      plVar34 = (long *)((long)plVar34 + 1);
    } while (plVar34 != (long *)(ulong)(uint)(iVar32 + iVar16));
  }
  if (*(long **)(param_1 + 0x1f8) != (long *)0x0) {
    iVar32 = (int)(*(float *)(param_1 + 0x2a0) / *(float *)(param_1 + 0x298));
    plVar38 = *(long **)(param_1 + 0x1f8);
    do {
      plVar34 = (long *)plVar38[9];
      uVar3 = *(uint *)(plVar38 + 2);
      if ((int)uVar3 < iVar16 - iVar32 || iVar32 + iVar16 < (int)uVar3) {
        if (plVar34 != (long *)0x0) {
LAB_00f05294:
          if ((short)plVar34[3] == 2) {
            uVar19 = *(ulong *)(param_1 + 0x238);
            if (uVar19 != 0) {
              uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
              uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
              lVar21 = plVar34[2];
              uVar22 = plVar34[4];
              uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar20 < 2) {
                uVar31 = uVar19 - 1 & uVar22;
              }
              else if (uVar22 < uVar19) {
                uVar31 = uVar22;
              }
              else {
                uVar31 = 0;
                if (uVar19 != 0) {
                  uVar31 = uVar22 / uVar19;
                }
                uVar31 = uVar22 - uVar31 * uVar19;
              }
              plVar33 = *(long **)(*(long *)(param_1 + 0x230) + uVar31 * 8);
              if (plVar33 != (long *)0x0) {
                plVar33 = (long *)*plVar33;
                if (plVar33 != (long *)0x0) {
                  if (uVar20 < 2) {
                    do {
                      if (plVar33[1] == uVar22) {
                        if (plVar33[2] == uVar22) goto LAB_00f05328;
                      }
                      else if ((plVar33[1] & uVar19 - 1) != uVar31) break;
                      plVar33 = (long *)*plVar33;
                    } while (plVar33 != (long *)0x0);
                  }
                  else {
                    do {
                      uVar20 = plVar33[1];
                      if (uVar20 == uVar22) {
                        if (plVar33[2] == uVar22) goto LAB_00f05328;
                      }
                      else {
                        if (uVar19 <= uVar20) {
                          uVar23 = 0;
                          if (uVar19 != 0) {
                            uVar23 = uVar20 / uVar19;
                          }
                          uVar20 = uVar20 - uVar23 * uVar19;
                        }
                        if (uVar20 != uVar31) break;
                      }
                      plVar33 = (long *)*plVar33;
                    } while (plVar33 != (long *)0x0);
                  }
                }
              }
            }
          }
          goto LAB_00f053ac;
        }
LAB_00f053f0:
        uVar22 = *(ulong *)(param_1 + 0x1d0);
        plVar34 = (long *)*plVar38;
        uVar20 = plVar38[1];
        uVar19 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
        uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
        uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar19 < 2) {
          uVar20 = uVar22 - 1 & uVar20;
        }
        else if (uVar22 <= uVar20) {
          uVar31 = 0;
          if (uVar22 != 0) {
            uVar31 = uVar20 / uVar22;
          }
          uVar20 = uVar20 - uVar31 * uVar22;
        }
        plVar33 = *(long **)(*(long *)(param_1 + 0x1c8) + uVar20 * 8);
        for (plVar25 = (long *)*plVar33; plVar25 != plVar38; plVar25 = (long *)*plVar25) {
          plVar33 = plVar25;
        }
        if (plVar33 == (long *)(param_1 + 0x1f8)) {
LAB_00f05480:
          if (*plVar38 != 0) {
            uVar31 = *(ulong *)(*plVar38 + 8);
            if (uVar19 < 2) {
              uVar31 = uVar31 & uVar22 - 1;
            }
            else if (uVar22 <= uVar31) {
              uVar23 = 0;
              if (uVar22 != 0) {
                uVar23 = uVar31 / uVar22;
              }
              uVar31 = uVar31 - uVar23 * uVar22;
            }
            if (uVar31 == uVar20) goto LAB_00f054b0;
          }
          *(undefined8 *)(*(long *)(param_1 + 0x1c8) + uVar20 * 8) = 0;
        }
        else {
          uVar31 = plVar33[1];
          if (uVar19 < 2) {
            uVar31 = uVar31 & uVar22 - 1;
          }
          else if (uVar22 <= uVar31) {
            uVar23 = 0;
            if (uVar22 != 0) {
              uVar23 = uVar31 / uVar22;
            }
            uVar31 = uVar31 - uVar23 * uVar22;
          }
          if (uVar31 != uVar20) goto LAB_00f05480;
        }
LAB_00f054b0:
        if (*plVar38 != 0) {
          uVar31 = *(ulong *)(*plVar38 + 8);
          if (uVar19 < 2) {
            uVar31 = uVar31 & uVar22 - 1;
          }
          else if (uVar22 <= uVar31) {
            uVar19 = 0;
            if (uVar22 != 0) {
              uVar19 = uVar31 / uVar22;
            }
            uVar31 = uVar31 - uVar19 * uVar22;
          }
          if (uVar31 != uVar20) {
            *(long **)(*(long *)(param_1 + 0x1c8) + uVar31 * 8) = plVar33;
          }
        }
        *plVar33 = *plVar38;
        *plVar38 = 0;
        *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x220) + -1;
        if (plVar38 != (long *)0x0) {
          FUN_00f07378(plVar38 + 3);
          plVar33 = *(long **)(param_1 + 0x200);
          uVar19 = (**(code **)(*plVar33 + 0xf8))(plVar33);
          if (((uVar19 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
            (**(code **)(*plVar33 + 0x18))(plVar33,plVar38,0x80,8);
          }
          else {
            FUN_00c48fe8(plVar33,plVar38,0x80,8);
          }
        }
        if (*(int *)(param_1 + 0x2a4) <= iVar12) break;
        iVar12 = iVar12 + 1;
      }
      else {
        if (plVar34 != (long *)0x0) {
LAB_00f04608:
          iVar14 = (int)plVar34[2];
          if (iVar14 < iVar17 - iVar32 || iVar32 + iVar17 < iVar14) {
            if ((short)plVar34[3] == 2) {
              uVar19 = *(ulong *)(param_1 + 0x238);
              if (uVar19 != 0) {
                uVar20 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
                uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
                uVar22 = plVar34[4];
                uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar20 < 2) {
                  uVar31 = uVar19 - 1 & uVar22;
                }
                else if (uVar22 < uVar19) {
                  uVar31 = uVar22;
                }
                else {
                  uVar31 = 0;
                  if (uVar19 != 0) {
                    uVar31 = uVar22 / uVar19;
                  }
                  uVar31 = uVar22 - uVar31 * uVar19;
                }
                plVar33 = *(long **)(*(long *)(param_1 + 0x230) + uVar31 * 8);
                if (plVar33 != (long *)0x0) {
                  plVar33 = (long *)*plVar33;
                  if (plVar33 != (long *)0x0) {
                    if (uVar20 < 2) {
                      do {
                        if (plVar33[1] == uVar22) {
                          if (plVar33[2] == uVar22) goto LAB_00f04bc8;
                        }
                        else if ((plVar33[1] & uVar19 - 1) != uVar31) break;
                        plVar33 = (long *)*plVar33;
                      } while (plVar33 != (long *)0x0);
                    }
                    else {
                      do {
                        uVar20 = plVar33[1];
                        if (uVar20 == uVar22) {
                          if (plVar33[2] == uVar22) goto LAB_00f04bc8;
                        }
                        else {
                          if (uVar19 <= uVar20) {
                            uVar23 = 0;
                            if (uVar19 != 0) {
                              uVar23 = uVar20 / uVar19;
                            }
                            uVar20 = uVar20 - uVar23 * uVar19;
                          }
                          if (uVar20 != uVar31) break;
                        }
                        plVar33 = (long *)*plVar33;
                      } while (plVar33 != (long *)0x0);
                    }
                  }
                }
              }
            }
            goto LAB_00f04c58;
          }
          plVar33 = (long *)*plVar34;
          goto LAB_00f0461c;
        }
LAB_00f04620:
        plVar34 = (long *)*plVar38;
      }
      plVar38 = plVar34;
    } while (plVar34 != (long *)0x0);
  }
LAB_00f04628:
  FUN_00cef86c(&local_a8);
  return;
LAB_00f05114:
  lVar21 = 1L << (uVar20 & 0x3f);
LAB_00f0511c:
  uVar19 = lVar21 + uVar19;
  if (plVar35 != (long *)0x0) {
    (**(code **)(*plVar35 + 0x20))();
  }
  uVar20 = uVar20 + 1;
  lVar21 = *(long *)(*(long *)(local_a0[0] + 0x210) + 0x138);
  if ((ulong)(*(long *)(*(long *)(local_a0[0] + 0x210) + 0x140) - lVar21 >> 5) <= uVar20)
  goto LAB_00f05644;
  goto LAB_00f05068;
LAB_00f04800:
  do {
    uVar31 = plVar25[1];
    if (uVar31 == uVar20) {
      if (plVar25[2] == uVar20) goto LAB_00f04818;
    }
    else {
      if (uVar22 <= uVar31) {
        uVar24 = 0;
        if (uVar22 != 0) {
          uVar24 = uVar31 / uVar22;
        }
        uVar31 = uVar31 - uVar24 * uVar22;
      }
      if (uVar31 != uVar23) break;
    }
    plVar25 = (long *)*plVar25;
  } while (plVar25 != (long *)0x0);
  goto LAB_00f04848;
  while (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0) {
LAB_00f058a4:
    if (plVar25[1] == uVar20) {
      if (plVar25[2] == uVar20) goto LAB_00f04818;
    }
    else if ((plVar25[1] & uVar22 - 1) != uVar23) break;
  }
  goto LAB_00f04848;
LAB_00f04818:
  plVar29 = *(long **)(local_a0[0] + 0x210);
  if (plVar29 != (long *)0x0) {
    lVar21 = plVar29[6];
    if (*(long *)(lVar21 + 0x10) == 0) {
LAB_00f05f28:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar21 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
      plVar27 = (long *)PTR_DAT_047d8b70;
      plVar35 = (long *)PTR_PTR_047d4508;
      *(undefined8 *)(lVar21 + 8) = uVar15;
      *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
LAB_00f05a7c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  uVar3 = (int)(((float)local_c0 - (float)plVar29[8]) / (float)plVar29[10]) +
          (int)plVar29[0xe] * (int)(((float)uStack_b8 - (float)plVar29[9]) / (float)plVar29[0xb]);
  if (-1 < (int)uVar3) {
    if ((int)uVar3 < *(int *)((long)plVar29 + 0x74) * (int)plVar29[0xe]) {
      local_c0 = CONCAT44((float)((ulong)plVar29[8] >> 0x20) +
                          *(float *)(plVar29[0xf] + (ulong)uVar3 * 4) *
                          (float)((ulong)plVar29[10] >> 0x20),(float)local_c0);
      plVar25 = (long *)plVar25[3];
      if (plVar25 != (long *)0x0) {
        plVar35 = plVar25 + 7;
        plVar27 = plVar25 + 6;
      }
      local_108 = *plVar27;
      local_100 = *plVar35;
      if (plVar25 == (long *)0x0) {
        local_f8 = 0;
      }
      else {
        local_f8 = plVar25[8];
        local_f0 = (long *)0x0;
        (**(code **)(*plVar25 + 0x18))(plVar25);
      }
      local_f0 = plVar25;
      FUN_00f060a8(param_1,&local_108,(ulong)plVar33 | (long)plVar34 << 0x20,&local_c0);
      if (plVar25 != (long *)0x0) {
        (**(code **)(*plVar25 + 0x20))(plVar25);
      }
      plVar37[4] = uVar20;
      *(undefined2 *)(plVar37 + 3) = 2;
      plVar27 = (long *)PTR_DAT_047d8b70;
      plVar35 = (long *)PTR_PTR_047d4508;
    }
  }
  lVar21 = plVar29[6];
  psVar1 = (short *)(lVar21 + 0x1a);
  do {
    sVar5 = *psVar1;
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar9) {
      *psVar1 = sVar5 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar5 == 1) {
    *(undefined8 *)(lVar21 + 0x10) = 0;
    (**(code **)(*plVar29 + 0x50))(plVar29);
    plVar35 = (long *)PTR_PTR_047d4508;
  }
  else if (sVar5 == 0) {
LAB_00f05be0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00f04848:
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
    plVar35 = (long *)PTR_PTR_047d4508;
  }
LAB_00f0484c:
  if (*(int *)(param_1 + 0x2a4) <= iVar12) goto LAB_00f04628;
  iVar12 = iVar12 + 1;
LAB_00f044c0:
  plVar33 = (long *)((long)plVar33 + 1);
  if (plVar33 == (long *)(ulong)(uint)(iVar32 + iVar17)) goto LAB_00f044f8;
  goto LAB_00f04434;
LAB_00f05328:
  plVar25 = (long *)plVar33[3];
  plVar33 = plVar35;
  if (plVar25 != (long *)0x0) {
    plVar33 = plVar25 + 7;
    plVar27 = plVar25 + 6;
  }
  local_108 = *plVar27;
  local_100 = *plVar33;
  if (plVar25 == (long *)0x0) {
    local_f8 = 0;
  }
  else {
    local_f8 = plVar25[8];
    local_f0 = (long *)0x0;
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  local_f0 = plVar25;
  FUN_00f0630c(param_1,&local_108,((ulong)uVar3 << 0x20) + (long)(int)lVar21);
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  plVar27 = (long *)PTR_DAT_047d8b70;
LAB_00f053ac:
  plVar34 = (long *)*plVar34;
  if (plVar34 == (long *)0x0) goto LAB_00f053f0;
  goto LAB_00f05294;
LAB_00f04bc8:
  plVar33 = (long *)plVar33[3];
  if (plVar33 != (long *)0x0) {
    plVar35 = plVar33 + 7;
    plVar27 = plVar33 + 6;
  }
  local_108 = *plVar27;
  local_100 = *plVar35;
  if (plVar33 == (long *)0x0) {
    local_f8 = 0;
  }
  else {
    local_f8 = plVar33[8];
    local_f0 = (long *)0x0;
    (**(code **)(*plVar33 + 0x18))(plVar33);
  }
  local_f0 = plVar33;
  FUN_00f0630c(param_1,&local_108,(long)iVar14 + ((ulong)uVar3 << 0x20));
  if (plVar33 != (long *)0x0) {
    (**(code **)(*plVar33 + 0x20))(plVar33);
  }
  plVar27 = (long *)PTR_DAT_047d8b70;
  plVar35 = (long *)PTR_PTR_047d4508;
LAB_00f04c58:
  uVar22 = plVar38[4];
  plVar33 = (long *)*plVar34;
  uVar20 = plVar34[1];
  uVar19 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
  uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
  uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar19 < 2) {
    uVar20 = uVar22 - 1 & uVar20;
  }
  else if (uVar22 <= uVar20) {
    uVar31 = 0;
    if (uVar22 != 0) {
      uVar31 = uVar20 / uVar22;
    }
    uVar20 = uVar20 - uVar31 * uVar22;
  }
  plVar25 = *(long **)(plVar38[3] + uVar20 * 8);
  for (plVar36 = (long *)*plVar25; plVar36 != plVar34; plVar36 = (long *)*plVar36) {
    plVar25 = plVar36;
  }
  if (plVar25 != plVar38 + 9) {
    uVar31 = plVar25[1];
    if (uVar19 < 2) {
      uVar31 = uVar31 & uVar22 - 1;
    }
    else if (uVar22 <= uVar31) {
      uVar23 = 0;
      if (uVar22 != 0) {
        uVar23 = uVar31 / uVar22;
      }
      uVar31 = uVar31 - uVar23 * uVar22;
    }
    if (uVar31 == uVar20) goto LAB_00f04cf0;
  }
  if (*plVar34 != 0) {
    uVar31 = *(ulong *)(*plVar34 + 8);
    if (uVar19 < 2) {
      uVar31 = uVar31 & uVar22 - 1;
    }
    else if (uVar22 <= uVar31) {
      uVar23 = 0;
      if (uVar22 != 0) {
        uVar23 = uVar31 / uVar22;
      }
      uVar31 = uVar31 - uVar23 * uVar22;
    }
    if (uVar31 == uVar20) goto LAB_00f04cf0;
  }
  *(undefined8 *)(plVar38[3] + uVar20 * 8) = 0;
LAB_00f04cf0:
  if (*plVar34 != 0) {
    uVar31 = *(ulong *)(*plVar34 + 8);
    if (uVar19 < 2) {
      uVar31 = uVar31 & uVar22 - 1;
    }
    else if (uVar22 <= uVar31) {
      uVar19 = 0;
      if (uVar22 != 0) {
        uVar19 = uVar31 / uVar22;
      }
      uVar31 = uVar31 - uVar19 * uVar22;
    }
    if (uVar31 != uVar20) {
      *(long **)(plVar38[3] + uVar31 * 8) = plVar25;
    }
  }
  *plVar25 = *plVar34;
  *plVar34 = 0;
  plVar38[0xe] = plVar38[0xe] + -1;
  if (plVar34 != (long *)0x0) {
    plVar35 = (long *)plVar38[10];
    uVar19 = (**(code **)(*plVar35 + 0xf8))(plVar35);
    if (((uVar19 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
      (**(code **)(*plVar35 + 0x18))(plVar35,plVar34,0x28,8);
    }
    else {
      FUN_00c48fe8(plVar35,plVar34,0x28,8);
    }
    plVar27 = (long *)PTR_DAT_047d8b70;
    plVar35 = (long *)PTR_PTR_047d4508;
  }
  if (*(int *)(param_1 + 0x2a4) <= iVar12) goto LAB_00f04628;
  iVar12 = iVar12 + 1;
LAB_00f0461c:
  plVar34 = plVar33;
  if (plVar33 == (long *)0x0) goto LAB_00f04620;
  goto LAB_00f04608;
}


