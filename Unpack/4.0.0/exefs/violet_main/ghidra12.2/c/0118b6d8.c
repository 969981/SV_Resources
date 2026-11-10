/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0118b6d8; name: FUN_0118b6d8
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0118b6d8(long param_1,long *param_2,long *param_3,uint param_4)

{
  uint *puVar1;
  ulong **ppuVar2;
  ulong **ppuVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong *puVar14;
  size_t sVar15;
  size_t sVar16;
  long lVar17;
  undefined8 uVar18;
  ulong *puVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  int *piVar23;
  undefined4 *puVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long *plVar29;
  ulong uVar30;
  long *plVar31;
  long lVar32;
  long *plVar33;
  ulong uVar34;
  long *plVar35;
  char *__s;
  char *pcVar36;
  long *plVar37;
  float fVar38;
  long *local_1a8;
  long local_1a0;
  long local_198;
  undefined8 local_158;
  ulong *local_150;
  long local_148;
  long local_140;
  long *local_138;
  long *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  long local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined2 local_fc;
  ulong *local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  float local_78;
  ulong *local_70 [2];
  
  plVar20 = *(long **)(param_1 + 8);
  plVar35 = (long *)(param_1 + 0x188);
  plVar11 = (long *)(**(code **)(**(long **)(param_1 + 0x188) + 0x10))
                              (*(long **)(param_1 + 0x188),0x20,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*(long *)*plVar35 + 0xe8))();
  }
  local_c8 = (long *)((ulong)local_c8 & 0xffffffffffffff00);
  lVar32 = *plVar35;
  local_d8 = plVar11;
  local_d0 = plVar35;
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  plVar35 = local_d8;
  if (lVar12 != 0) {
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0118d460;
    *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar32;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  }
  plVar11[2] = *param_2;
  lVar32 = *param_3;
  plVar11[3] = lVar32;
  if (lVar32 != 0) {
    piVar23 = (int *)(lVar32 + 0x28);
    do {
      iVar9 = *piVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar6) {
        *piVar23 = iVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == -1) {
LAB_0118c4e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (lVar12 != 0) {
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  local_c8 = (long *)CONCAT71(local_c8._1_7_,1);
  uVar21 = local_d8[2];
  *local_d8 = 0;
  local_d8[1] = uVar21;
  uVar34 = *(ulong *)(param_1 + 0x158);
  plVar11 = (long *)(param_1 + 0x150);
  if (uVar34 == 0) {
LAB_0118b878:
    fVar38 = (float)(*(long *)(param_1 + 0x1a8) + 1);
    if ((uVar34 == 0) || (*(float *)(param_1 + 0x1b0) * (float)uVar34 < fVar38)) {
      uVar21 = (ulong)(uVar34 < 3 || (uVar34 & uVar34 - 1) != 0) | uVar34 << 1;
      uVar27 = (ulong)(fVar38 / *(float *)(param_1 + 0x1b0));
      if (uVar27 <= uVar21) {
        uVar27 = uVar21;
      }
      if (uVar27 - 1 == 0) {
        uVar27 = 2;
      }
      else if ((uVar27 & uVar27 - 1) != 0) {
        uVar27 = std::__next_prime(uVar27);
        uVar34 = *(ulong *)(param_1 + 0x158);
      }
      if (uVar34 < uVar27) {
        uVar21 = uVar27;
LAB_0118b8e4:
        FUN_0118e1a8(plVar11,uVar21);
      }
      else if (uVar27 < uVar34) {
        uVar21 = (ulong)((float)*(ulong *)(param_1 + 0x1a8) / *(float *)(param_1 + 0x1b0));
        if ((uVar34 < 3) ||
           (uVar30 = uVar34 - (uVar34 >> 1 & 0x5555555555555555),
           uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333),
           1 < (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar21 = std::__next_prime(uVar21);
        }
        else if (1 < uVar21) {
          uVar21 = 1L << (-LZCOUNT(uVar21 - 1) & 0x3fU);
        }
        if (uVar21 <= uVar27) {
          uVar21 = uVar27;
        }
        if (uVar21 < uVar34) goto LAB_0118b8e4;
      }
      uVar34 = *(ulong *)(param_1 + 0x158);
      uVar21 = plVar35[1];
    }
    uVar27 = uVar34 - (uVar34 >> 1 & 0x5555555555555555);
    uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
    uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar27 < 2) {
      uVar21 = uVar34 - 1 & uVar21;
    }
    else if (uVar34 <= uVar21) {
      uVar30 = 0;
      if (uVar34 != 0) {
        uVar30 = uVar21 / uVar34;
      }
      uVar21 = uVar21 - uVar30 * uVar34;
    }
    plVar29 = *(long **)(*plVar11 + uVar21 * 8);
    if (plVar29 == (long *)0x0) {
      *plVar35 = *(long *)(param_1 + 0x180);
      *(long **)(param_1 + 0x180) = plVar35;
      *(long *)(*(long *)(param_1 + 0x150) + uVar21 * 8) = param_1 + 0x180;
      if (*plVar35 != 0) {
        uVar21 = *(ulong *)(*plVar35 + 8);
        if (uVar27 < 2) {
          uVar21 = uVar21 & uVar34 - 1;
        }
        else if (uVar34 <= uVar21) {
          uVar27 = 0;
          if (uVar34 != 0) {
            uVar27 = uVar21 / uVar34;
          }
          uVar21 = uVar21 - uVar27 * uVar34;
        }
        plVar29 = (long *)(*plVar11 + uVar21 * 8);
        goto LAB_0118b988;
      }
    }
    else {
      *plVar35 = *plVar29;
LAB_0118b988:
      *plVar29 = (long)plVar35;
    }
    *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 1;
  }
  else {
    uVar27 = uVar34 - 1;
    if ((uVar34 & uVar27) == 0) {
      plVar29 = *(long **)(*plVar11 + (uVar27 & uVar21) * 8);
      if (plVar29 == (long *)0x0) goto LAB_0118b878;
      do {
        plVar29 = (long *)*plVar29;
        if ((plVar29 == (long *)0x0) || ((plVar29[1] & uVar27) != (uVar27 & uVar21)))
        goto LAB_0118b878;
      } while (plVar29[2] != uVar21);
    }
    else {
      uVar27 = uVar21;
      if (uVar34 <= uVar21) {
        uVar27 = 0;
        if (uVar34 != 0) {
          uVar27 = uVar21 / uVar34;
        }
        uVar27 = uVar21 - uVar27 * uVar34;
      }
      plVar29 = *(long **)(*plVar11 + uVar27 * 8);
      if (plVar29 == (long *)0x0) goto LAB_0118b878;
      do {
        plVar29 = (long *)*plVar29;
        if (plVar29 == (long *)0x0) goto LAB_0118b878;
        uVar30 = plVar29[1];
        if (uVar34 <= uVar30) {
          uVar7 = 0;
          if (uVar34 != 0) {
            uVar7 = uVar30 / uVar34;
          }
          uVar30 = uVar30 - uVar7 * uVar34;
        }
        if (uVar30 != uVar27) goto LAB_0118b878;
      } while (plVar29[2] != uVar21);
    }
    local_d8 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      FUN_01190b54(&local_d0,plVar35);
    }
  }
  lVar32 = *param_3;
  local_d8 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c8 = *(long **)(lVar32 + 0x100);
  uStack_c0 = *(undefined8 *)(lVar32 + 0x108);
  local_b8 = *(undefined8 *)(lVar32 + 0x110);
  uStack_b0 = *(undefined8 *)(lVar32 + 0x118);
  local_a0 = *(long **)(lVar32 + 0x128);
  local_98 = *(undefined8 *)(lVar32 + 0x130);
  local_90 = *(undefined8 *)(lVar32 + 0x138);
  uStack_88 = *(undefined8 *)(lVar32 + 0x140);
  local_80 = 0;
  local_a8 = (long *)0x0;
  local_78 = *(float *)(lVar32 + 0x150);
  FUN_0118d558(&local_d8,*(undefined8 *)(lVar32 + 0xf8));
  plVar35 = *(long **)(lVar32 + 0x120);
  if (plVar35 != (long *)0x0) {
    do {
      plVar29 = local_d0;
      plVar37 = (long *)plVar35[2];
      if (local_d0 == (long *)0x0) {
LAB_0118ba30:
        plVar22 = (long *)(**(code **)(*local_a0 + 0x10))(local_a0,0x38,8);
        if (plVar22 == (long *)0x0) {
          (**(code **)(*local_a0 + 0xe8))();
        }
        plVar13 = local_a0;
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar32 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar32 != 0) {
          if (0xf < *(ulong *)(lVar32 + 0x80)) goto LAB_0118d460;
          *(long **)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = plVar13;
          *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
        }
        plVar22[2] = plVar35[2];
        plVar22[3] = plVar35[3];
        plVar22[4] = plVar35[4];
        plVar13 = (long *)plVar35[5];
        plVar22[5] = (long)plVar13;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))();
        }
        lVar12 = plVar35[6];
        plVar22[6] = lVar12;
        if (lVar12 != 0) {
          piVar23 = (int *)(lVar12 + 0x28);
          do {
            iVar9 = *piVar23;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar6) {
              *piVar23 = iVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 == -1) goto LAB_0118c4e0;
        }
        if (lVar32 != 0) {
          *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
        }
        *plVar22 = 0;
        plVar22[1] = (long)plVar37;
        if (plVar29 == (long *)0x0) {
LAB_0118bb24:
          uVar21 = (ulong)(plVar29 < (long *)0x3 || ((ulong)plVar29 & (long)plVar29 - 1U) != 0) |
                   (long)plVar29 << 1;
          uVar34 = (ulong)((float)(local_80 + 1) / local_78);
          if (uVar34 <= uVar21) {
            uVar34 = uVar21;
          }
          FUN_0118d558(&local_d8,uVar34);
          plVar29 = local_d0;
          if (((ulong)local_d0 & (long)local_d0 - 1U) == 0) {
            plVar11 = (long *)((long)local_d0 - 1U & (ulong)plVar37);
          }
          else if (plVar37 < local_d0) {
            plVar11 = plVar37;
          }
          else {
            uVar21 = 0;
            if (local_d0 != (long *)0x0) {
              uVar21 = (ulong)plVar37 / (ulong)local_d0;
            }
            plVar11 = (long *)((long)plVar37 - uVar21 * (long)local_d0);
          }
        }
        else if (local_78 * (float)plVar29 < (float)(local_80 + 1)) goto LAB_0118bb24;
        plVar37 = (long *)local_d8[(long)plVar11];
        if (plVar37 == (long *)0x0) {
          *plVar22 = (long)local_a8;
          local_d8[(long)plVar11] = (long)&local_a8;
          local_a8 = plVar22;
          if (*plVar22 != 0) {
            plVar37 = *(long **)(*plVar22 + 8);
            if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
              plVar37 = (long *)((ulong)plVar37 & (long)plVar29 - 1U);
            }
            else if (plVar29 <= plVar37) {
              uVar21 = 0;
              if (plVar29 != (long *)0x0) {
                uVar21 = (ulong)plVar37 / (ulong)plVar29;
              }
              plVar37 = (long *)((long)plVar37 - uVar21 * (long)plVar29);
            }
            plVar37 = local_d8 + (long)plVar37;
            goto LAB_0118bbc8;
          }
        }
        else {
          *plVar22 = *plVar37;
LAB_0118bbc8:
          *plVar37 = (long)plVar22;
        }
        local_80 = local_80 + 1;
      }
      else {
        uVar21 = (long)local_d0 - 1;
        if (((ulong)local_d0 & uVar21) == 0) {
          plVar11 = (long *)(uVar21 & (ulong)plVar37);
          plVar22 = (long *)local_d8[(long)plVar11];
          if (plVar22 == (long *)0x0) goto LAB_0118ba30;
          do {
            plVar22 = (long *)*plVar22;
            if ((plVar22 == (long *)0x0) ||
               ((long *)plVar22[1] != plVar37 && (long *)((ulong)plVar22[1] & uVar21) != plVar11))
            goto LAB_0118ba30;
          } while ((long *)plVar22[2] != plVar37);
        }
        else {
          plVar11 = plVar37;
          if (local_d0 <= plVar37) {
            uVar21 = 0;
            if (local_d0 != (long *)0x0) {
              uVar21 = (ulong)plVar37 / (ulong)local_d0;
            }
            plVar11 = (long *)((long)plVar37 - uVar21 * (long)local_d0);
          }
          plVar22 = (long *)local_d8[(long)plVar11];
          if (plVar22 == (long *)0x0) goto LAB_0118ba30;
          do {
            plVar22 = (long *)*plVar22;
            if (plVar22 == (long *)0x0) goto LAB_0118ba30;
            plVar13 = (long *)plVar22[1];
            if (plVar13 != plVar37) {
              if (local_d0 <= plVar13) {
                uVar21 = 0;
                if (local_d0 != (long *)0x0) {
                  uVar21 = (ulong)plVar13 / (ulong)local_d0;
                }
                plVar13 = (long *)((long)plVar13 - uVar21 * (long)local_d0);
              }
              if (plVar13 != plVar11) goto LAB_0118ba30;
            }
          } while ((long *)plVar22[2] != plVar37);
        }
      }
      plVar35 = (long *)*plVar35;
    } while (plVar35 != (long *)0x0);
  }
  plVar35 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x58,8);
  if (plVar35 == (long *)0x0) {
    local_1a0 = 0;
    local_198 = 0;
    local_1a8 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar32 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar32 + 0x80)) goto LAB_0118d460;
    *(long **)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = plVar20;
    *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
    *plVar35 = *param_2;
    plVar35[1] = param_2[1];
    plVar35[2] = param_2[2];
    plVar11 = (long *)param_2[3];
    plVar35[3] = (long)plVar11;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))();
    }
    plVar35[4] = 0;
    plVar35[5] = 0;
    *(undefined4 *)(plVar35 + 10) = 0;
    plVar35[6] = 0;
    plVar35[7] = (long)plVar20;
    plVar35[8] = 0x7ffffffffffffff;
    plVar35[9] = 0;
    *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
    local_1a0 = 0x58;
    local_198 = 8;
    local_1a8 = plVar20;
  }
  uVar21 = local_80;
  lVar32 = plVar35[4];
  if ((ulong)(plVar35[6] - lVar32 >> 5) < local_80) {
    lVar28 = plVar35[5];
    lVar12 = (**(code **)(*(long *)plVar35[7] + 0x10))((long *)plVar35[7],local_80 << 5,8);
    if (lVar12 == 0) {
      (**(code **)(*(long *)plVar35[7] + 0xe8))();
    }
    lVar32 = lVar12 + (lVar28 - lVar32 >> 5) * 0x20;
    plVar11 = (long *)plVar35[4];
    plVar29 = (long *)plVar35[5];
    if (plVar29 == plVar11) {
      lVar26 = lVar32;
      plVar29 = plVar11;
    }
    else {
      lVar28 = lVar32;
      do {
        lVar17 = plVar35[7];
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar25 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar25 != 0) {
          if (0xf < *(ulong *)(lVar25 + 0x80)) goto LAB_0118d460;
          *(long *)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = lVar17;
          *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
        }
        lVar17 = plVar29[-4];
        plVar29[-4] = 0;
        *(long *)(lVar28 + -0x20) = lVar17;
        lVar17 = plVar29[-3];
        lVar26 = plVar29[-1];
        *(long *)(lVar28 + -0x10) = plVar29[-2];
        *(long *)(lVar28 + -8) = lVar26;
        lVar26 = lVar28 + -0x20;
        plVar29 = plVar29 + -4;
        *(long *)(lVar28 + -0x18) = lVar17;
        if (lVar25 != 0) {
          *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
        }
        lVar28 = lVar26;
      } while (plVar11 != plVar29);
      plVar11 = (long *)plVar35[4];
      plVar29 = (long *)plVar35[5];
    }
    lVar28 = plVar35[6];
    plVar35[4] = lVar26;
    plVar35[5] = lVar32;
    plVar35[6] = lVar12 + uVar21 * 0x20;
    if (plVar29 != plVar11) {
      plVar37 = plVar29 + -4;
      lVar32 = *plVar37;
      *plVar37 = 0;
      if (lVar32 != 0) {
        FUN_010476cc(plVar29 + -3);
      }
      if (plVar37 != plVar11) {
        do {
          plVar29 = plVar37 + -4;
          lVar32 = *plVar29;
          *plVar29 = 0;
          if (lVar32 != 0) {
            FUN_010476cc(plVar37 + -3);
          }
          plVar37 = plVar29;
        } while (plVar11 != plVar29);
      }
    }
    if (plVar11 != (long *)0x0) {
      plVar29 = (long *)plVar35[7];
      uVar21 = (**(code **)(*plVar29 + 0xf8))(plVar29);
      if (((uVar21 & 1) == 0) || (lVar32 = FUN_00c4e600(), *(int *)(lVar32 + 0x12c8) < 1)) {
        (**(code **)(*plVar29 + 0x18))(plVar29,plVar11,lVar28 - (long)plVar11,8);
      }
      else {
        FUN_00c48fe8(plVar29,plVar11,lVar28 - (long)plVar11,8);
      }
    }
  }
  if (local_a8 != (long *)0x0) {
    plVar11 = (long *)(param_1 + 0x1f8);
    plVar29 = local_a8;
LAB_0118bdd4:
    uVar21 = plVar29[2];
    uVar27 = plVar29[3];
    uVar34 = plVar29[4];
    plVar37 = (long *)plVar29[5];
    if (plVar37 != (long *)0x0) {
      (**(code **)(*plVar37 + 0x18))(plVar37);
    }
    plVar22 = (long *)plVar29[6];
    if (plVar22 != (long *)0x0) {
      plVar13 = plVar22 + 5;
      do {
        lVar32 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = (int)lVar32 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar32 == -1) goto LAB_0118c4e0;
    }
    lVar32 = plVar22[10];
    puVar14 = (ulong *)(**(code **)(*plVar20 + 0x10))(plVar20,0x98,8);
    if (puVar14 == (ulong *)0x0) {
      local_e8 = 0;
      local_e0 = 0;
      local_f8 = (ulong *)0x0;
      local_f0 = (long *)0x0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0118d460;
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar20;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *puVar14 = uVar21;
      puVar14[1] = uVar27;
      puVar14[2] = uVar34;
      puVar14[3] = (ulong)plVar37;
      if (plVar37 != (long *)0x0) {
        (**(code **)(*plVar37 + 0x18))();
      }
      memset(puVar14 + 4,0,0x48);
      *(int *)(puVar14 + 0xd) = (int)lVar32;
      puVar14[0xe] = 0;
      puVar14[0xf] = 0;
      puVar14[0x12] = 0;
      puVar14[0x10] = 0;
      puVar14[0x11] = 0;
      local_e8 = 0x98;
      local_e0 = 8;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      local_f8 = puVar14;
      local_f0 = plVar20;
    }
    piVar23 = (int *)plVar22[0xb];
    if (piVar23 != (int *)0x0) {
      if ((*(ushort *)((long)piVar23 - (long)*piVar23) < 5) ||
         (uVar21 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[2], uVar21 == 0)) {
        puVar24 = (undefined4 *)0x0;
      }
      else {
        puVar1 = (uint *)((long)piVar23 + uVar21);
        puVar24 = (undefined4 *)((long)puVar1 + (ulong)*puVar1);
      }
      puVar1 = puVar24 + 1;
      if ((param_4 & 1) == 0) {
        FUN_0118dcb4(puVar14,plVar20,(long)puVar1 + (ulong)*puVar1);
      }
      else {
        FUN_011901d8(puVar14,plVar20,puVar1,*puVar24);
      }
    }
    uVar21 = *(ulong *)(param_1 + 0x200);
    if (uVar21 != 0) {
      uVar34 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar34 = (uVar34 & 0x3333333333333333) + (uVar34 >> 2 & 0x3333333333333333);
      uVar27 = *puVar14;
      uVar34 = (uVar34 + (uVar34 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar34 < 2) {
        uVar30 = uVar21 - 1 & uVar27;
      }
      else if (uVar27 < uVar21) {
        uVar30 = uVar27;
      }
      else {
        uVar30 = 0;
        if (uVar21 != 0) {
          uVar30 = uVar27 / uVar21;
        }
        uVar30 = uVar27 - uVar30 * uVar21;
      }
      plVar13 = *(long **)(*plVar11 + uVar30 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if (uVar34 < 2) {
          do {
            if (plVar13[1] == uVar27) {
              if (plVar13[2] == uVar27) goto LAB_0118bfe0;
            }
            else if ((plVar13[1] & uVar21 - 1) != uVar30) break;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar34 = plVar13[1];
            if (uVar34 == uVar27) {
              if (plVar13[2] == uVar27) goto LAB_0118bfe0;
            }
            else {
              if (uVar21 <= uVar34) {
                uVar7 = 0;
                if (uVar21 != 0) {
                  uVar7 = uVar34 / uVar21;
                }
                uVar34 = uVar34 - uVar7 * uVar21;
              }
              if (uVar34 != uVar30) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    puVar14[4] = 0;
    if (plVar22[0xc] == 0) {
      lVar32 = plVar22[10];
      iVar9 = *(int *)((long)plVar22 + 0x54);
      local_150 = (ulong *)0x0;
      pcVar36 = (char *)puVar14[1];
      if ((pcVar36 == (char *)0x0) || (*pcVar36 == '\0')) {
        puVar14 = (ulong *)FUN_00d44228();
        if (puVar14 != (ulong *)0x0) {
          (**(code **)(*puVar14 + 0x18))(puVar14);
        }
        if (local_150 != (ulong *)0x0) {
          uVar21 = *local_150;
          local_150 = puVar14;
          (**(code **)(uVar21 + 0x20))();
          puVar14 = local_150;
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar18 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar18;
        FUN_00cf9884(local_70,uVar18,pcVar36);
        puVar14 = local_150;
        local_150 = (ulong *)0x0;
        if (puVar14 != (ulong *)0x0) {
          (**(code **)(*puVar14 + 0x20))();
        }
        local_150 = local_70[0];
        puVar14 = local_150;
      }
      local_150 = puVar14;
      local_118 = 0;
      local_128 = 0x666666666666666;
      uStack_120 = 0;
      local_148 = 0;
      local_140 = 0;
      local_110 = (ulong)(uint)(iVar9 - (int)lVar32) << 0x20;
      local_108 = 0;
      local_100 = 0;
      local_fc = 1;
      local_138 = (long *)0x0;
      plStack_130 = plVar20;
      FUN_0118e4f4(plVar11,&local_150);
      FUN_011f3af8(&local_148);
      if (local_150 != (ulong *)0x0) {
        (**(code **)(*local_150 + 0x20))();
      }
      puVar14 = local_f8;
    }
    else {
      FUN_01191084(&local_150,plVar22[0xc],plVar20);
      FUN_0118e4f4(plVar11,&local_150);
      FUN_011f3af8(&local_148);
      if (local_150 != (ulong *)0x0) {
        (**(code **)(*local_150 + 0x20))();
      }
    }
    uVar21 = *(ulong *)(param_1 + 0x200);
    if (uVar21 == 0) {
LAB_0118c858:
      plVar31 = (long *)0x0;
    }
    else {
      uVar34 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar34 = (uVar34 & 0x3333333333333333) + (uVar34 >> 2 & 0x3333333333333333);
      uVar27 = *puVar14;
      uVar34 = (uVar34 + (uVar34 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar34 < 2) {
        uVar30 = uVar21 - 1 & uVar27;
      }
      else if (uVar27 < uVar21) {
        uVar30 = uVar27;
      }
      else {
        uVar30 = 0;
        if (uVar21 != 0) {
          uVar30 = uVar27 / uVar21;
        }
        uVar30 = uVar27 - uVar30 * uVar21;
      }
      plVar13 = *(long **)(*plVar11 + uVar30 * 8);
      if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0))
      goto LAB_0118c858;
      if (1 < uVar34) {
        do {
          uVar34 = plVar13[1];
          if (uVar34 == uVar27) {
            if (plVar13[2] == uVar27) goto LAB_0118d0c8;
          }
          else {
            if (uVar21 <= uVar34) {
              uVar7 = 0;
              if (uVar21 != 0) {
                uVar7 = uVar34 / uVar21;
              }
              uVar34 = uVar34 - uVar7 * uVar21;
            }
            if (uVar34 != uVar30) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
        goto LAB_0118c858;
      }
      do {
        if (plVar13[1] == uVar27) {
          if (plVar13[2] == uVar27) goto LAB_0118d0c8;
        }
        else if ((plVar13[1] & uVar21 - 1) != uVar30) {
          plVar31 = (long *)0x0;
          break;
        }
        plVar13 = (long *)*plVar13;
        plVar31 = (long *)0x0;
      } while (plVar13 != (long *)0x0);
    }
    goto LAB_0118d0cc;
  }
LAB_0118c198:
  plVar11 = *(long **)(param_1 + 0x1c0);
  if (plVar11 < *(long **)(param_1 + 0x1c8)) {
    uVar18 = *(undefined8 *)(param_1 + 0x1d0);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar32 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar32 == 0) {
      *plVar11 = (long)plVar35;
      plVar11[1] = (long)local_1a8;
      plVar11[2] = local_1a0;
      plVar11[3] = local_198;
    }
    else {
      if (0xf < *(ulong *)(lVar32 + 0x80)) goto LAB_0118d460;
      *(undefined8 *)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = uVar18;
      *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
      *plVar11 = (long)plVar35;
      plVar11[1] = (long)local_1a8;
      plVar11[2] = local_1a0;
      plVar11[3] = local_198;
      *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
    }
    *(long **)(param_1 + 0x1c0) = plVar11 + 4;
  }
  else {
    uVar34 = *(ulong *)(param_1 + 0x1d8);
    lVar32 = (long)plVar11 - *(long *)(param_1 + 0x1b8) >> 5;
    uVar21 = lVar32 + 1;
    if (0x7ffffffffffffffe < uVar34) {
      uVar34 = 0x7fffffffffffffff;
    }
    if (uVar34 < uVar21) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = (long)*(long **)(param_1 + 0x1c8) - *(long *)(param_1 + 0x1b8);
    uVar27 = lVar12 >> 4;
    if (uVar21 <= uVar27) {
      uVar21 = uVar27;
    }
    if (uVar34 >> 1 <= (ulong)(lVar12 >> 5)) {
      uVar21 = uVar34;
    }
    if (uVar21 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(**(long **)(param_1 + 0x1d0) + 0x10))
                         (*(long **)(param_1 + 0x1d0),uVar21 << 5,8);
      if (lVar12 == 0) {
        (**(code **)(**(long **)(param_1 + 0x1d0) + 0xe8))();
      }
    }
    plVar11 = (long *)(lVar12 + lVar32 * 0x20);
    uVar18 = *(undefined8 *)(param_1 + 0x1d0);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar32 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar32 == 0) {
      *plVar11 = (long)plVar35;
      plVar11[1] = (long)local_1a8;
      plVar11[2] = local_1a0;
      plVar11[3] = local_198;
    }
    else {
      if (0xf < *(ulong *)(lVar32 + 0x80)) {
LAB_0118d460:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = uVar18;
      *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
      *plVar11 = (long)plVar35;
      plVar11[1] = (long)local_1a8;
      plVar11[2] = local_1a0;
      plVar11[3] = local_198;
      *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
    }
    puVar8 = PTR_LAB_047d3900;
    lVar32 = *(long *)(param_1 + 0x1b8);
    lVar28 = *(long *)(param_1 + 0x1c0);
    if (lVar28 == lVar32) {
      plVar35 = plVar11;
      lVar28 = lVar32;
    }
    else {
      plVar29 = plVar11;
      do {
        uVar18 = *(undefined8 *)(param_1 + 0x1d0);
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar8,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar17 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar17 != 0) {
          if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_0118d460;
          *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar18;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
        }
        lVar25 = *(long *)(lVar28 + -0x20);
        *(undefined8 *)(lVar28 + -0x20) = 0;
        plVar29[-4] = lVar25;
        lVar25 = *(long *)(lVar28 + -0x18);
        lVar26 = *(long *)(lVar28 + -8);
        plVar29[-2] = *(long *)(lVar28 + -0x10);
        plVar29[-1] = lVar26;
        plVar35 = plVar29 + -4;
        lVar28 = lVar28 + -0x20;
        plVar29[-3] = lVar25;
        if (lVar17 != 0) {
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
        }
        plVar29 = plVar35;
      } while (lVar32 != lVar28);
      lVar32 = *(long *)(param_1 + 0x1b8);
      lVar28 = *(long *)(param_1 + 0x1c0);
    }
    lVar17 = *(long *)(param_1 + 0x1c8);
    *(long **)(param_1 + 0x1b8) = plVar35;
    *(long **)(param_1 + 0x1c0) = plVar11 + 4;
    *(ulong *)(param_1 + 0x1c8) = lVar12 + uVar21 * 0x20;
    if (((lVar28 != lVar32) && (FUN_0118da34(lVar28 + -0x20), lVar28 + -0x20 != lVar32)) &&
       (FUN_0118da34(lVar28 + -0x40), lVar28 + -0x40 != lVar32)) {
      do {
        FUN_0118da34(lVar28 + -0x60);
        lVar28 = lVar28 + -0x20;
      } while (lVar32 + 0x40 != lVar28);
    }
    if (lVar32 != 0) {
      plVar35 = *(long **)(param_1 + 0x1d0);
      lVar17 = lVar17 - lVar32;
      uVar21 = (**(code **)(*plVar35 + 0xf8))(plVar35);
      if (((uVar21 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar35 + 0x18))(plVar35,lVar32,lVar17,8);
      }
      else {
        FUN_00c48fe8(plVar35,lVar32,lVar17,8);
      }
    }
  }
  FUN_0118d660(local_70,param_2);
  puVar19 = local_70[0];
  puVar14 = (ulong *)PTR_DAT_047d8b70;
  if (local_70[0] != (ulong *)0x0) {
    puVar14 = local_70[0] + 6;
  }
  uVar21 = *puVar14;
  if (local_70[0] != (ulong *)0x0) {
    (**(code **)(*local_70[0] + 0x18))(local_70[0]);
  }
  uVar34 = *(ulong *)(param_1 + 0x200);
  if (uVar34 != 0) {
    uVar27 = uVar34 - (uVar34 >> 1 & 0x5555555555555555);
    uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
    uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar27 < 2) {
      uVar30 = uVar34 - 1 & uVar21;
    }
    else if (uVar21 < uVar34) {
      uVar30 = uVar21;
    }
    else {
      uVar30 = 0;
      if (uVar34 != 0) {
        uVar30 = uVar21 / uVar34;
      }
      uVar30 = uVar21 - uVar30 * uVar34;
    }
    plVar35 = *(long **)(*(long *)(param_1 + 0x1f8) + uVar30 * 8);
    if ((plVar35 != (long *)0x0) && (plVar35 = (long *)*plVar35, plVar35 != (long *)0x0)) {
      if (uVar27 < 2) {
        do {
          if (plVar35[1] == uVar21) {
            if (plVar35[2] == uVar21) goto LAB_0118c8e4;
          }
          else if ((plVar35[1] & uVar34 - 1) != uVar30) goto LAB_0118c47c;
          plVar35 = (long *)*plVar35;
          plVar11 = (long *)0x0;
        } while (plVar35 != (long *)0x0);
        goto LAB_0118c8e8;
      }
      do {
        uVar27 = plVar35[1];
        if (uVar27 == uVar21) {
          if (plVar35[2] == uVar21) goto LAB_0118c8e4;
        }
        else {
          if (uVar34 <= uVar27) {
            uVar7 = 0;
            if (uVar34 != 0) {
              uVar7 = uVar27 / uVar34;
            }
            uVar27 = uVar27 - uVar7 * uVar34;
          }
          if (uVar27 != uVar30) break;
        }
        plVar35 = (long *)*plVar35;
      } while (plVar35 != (long *)0x0);
    }
  }
LAB_0118c47c:
  plVar11 = (long *)0x0;
LAB_0118c8e8:
  if (puVar19 != (ulong *)0x0) {
    (**(code **)(*puVar19 + 0x20))(puVar19);
  }
  puVar14 = local_70[0];
  if (plVar11 == (long *)0x0) {
    puVar19 = (ulong *)PTR_PTR_047d4508;
    if (local_70[0] != (ulong *)0x0) {
      puVar19 = local_70[0] + 7;
    }
    pcVar36 = (char *)*puVar19;
    if (local_70[0] != (ulong *)0x0) {
      (**(code **)(*local_70[0] + 0x18))(local_70[0]);
    }
    local_150 = (ulong *)0x0;
    if ((pcVar36 == (char *)0x0) || (*pcVar36 == '\0')) {
      puVar19 = (ulong *)FUN_00d44228();
      if (puVar19 != (ulong *)0x0) {
        (**(code **)(*puVar19 + 0x18))(puVar19);
      }
      if (local_150 != (ulong *)0x0) {
        uVar21 = *local_150;
        local_150 = puVar19;
        (**(code **)(uVar21 + 0x20))();
        puVar19 = local_150;
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar18 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar18;
      FUN_00cf9884(&local_f8,uVar18,pcVar36);
      puVar19 = local_150;
      local_150 = (ulong *)0x0;
      if (puVar19 != (ulong *)0x0) {
        (**(code **)(*puVar19 + 0x20))();
      }
      local_150 = local_f8;
      puVar19 = local_150;
    }
    local_150 = puVar19;
    local_148 = 0;
    local_140 = 0;
    local_138 = (long *)0x0;
    local_118 = 0;
    local_100 = 0;
    local_128 = 0x666666666666666;
    uStack_120 = 0;
    local_110 = 0x100000000;
    local_108 = 0x100000001;
    local_fc = 0x101;
    plStack_130 = plVar20;
    FUN_0118e4f4((long *)(param_1 + 0x1f8),&local_150);
    FUN_011f3af8(&local_148);
    if (local_150 != (ulong *)0x0) {
      (**(code **)(*local_150 + 0x20))();
    }
    if (puVar14 != (ulong *)0x0) {
      (**(code **)(*puVar14 + 0x20))(puVar14);
    }
  }
  else {
    local_150 = (ulong *)CONCAT44(local_150._4_4_,1);
    local_158._0_4_ = *(int *)((long)plVar11 + 0x44);
    local_f8 = (ulong *)CONCAT44(local_f8._4_4_,(int)plVar11[8]);
    ppuVar2 = (ulong **)&local_158;
    if (0 < *(int *)((long)plVar11 + 0x44)) {
      ppuVar2 = &local_150;
    }
    ppuVar3 = &local_f8;
    if ((int)plVar11[8] < 2) {
      ppuVar3 = ppuVar2;
    }
    if (*(int *)((long)plVar11 + 0x4c) != *(int *)ppuVar3) {
      *(int *)((long)plVar11 + 0x4c) = *(int *)ppuVar3;
      *(undefined1 *)((long)plVar11 + 0x54) = 1;
    }
  }
  if (local_70[0] != (ulong *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  FUN_01134a5c(&local_d8,local_a8);
  plVar11 = local_c8;
  plVar35 = local_d8;
  local_d8 = (long *)0x0;
  if (plVar35 != (long *)0x0) {
    lVar32 = (long)local_d0 << 3;
    uVar21 = (**(code **)(*local_c8 + 0xf8))(local_c8);
    if (((uVar21 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar35,lVar32,8);
    }
    else {
      FUN_00c48fe8(plVar11,plVar35,lVar32,8);
    }
  }
  return;
LAB_0118bfe0:
  puVar14[4] = (ulong)(plVar13 + 6);
  goto LAB_0118bfe8;
LAB_0118d0c8:
  plVar31 = plVar13 + 6;
LAB_0118d0cc:
  puVar14[4] = (ulong)plVar31;
LAB_0118bfe8:
  pcVar36 = (char *)puVar14[1];
  sVar15 = strlen(pcVar36);
  if (sVar15 != 0) {
    uVar21 = sVar15 - 1;
    if (2 < uVar21) {
      uVar21 = 3;
    }
    if ((*pcVar36 == 'v') &&
       (((uVar21 == 0 ||
         ((pcVar36[1] == 'i' &&
          ((uVar21 == 1 || ((pcVar36[2] == 's' && ((uVar21 == 2 || (pcVar36[3] == '_')))))))))) &&
        (uVar21 == 3)))) {
      __s = (char *)param_2[1];
      sVar16 = strlen(__s);
      do {
        if ((sVar15 == 0) || (sVar16 == 0)) {
          if (sVar16 == 0) {
            FUN_0118eed0(&local_158,puVar14);
            plVar13 = (long *)CONCAT44(local_158._4_4_,(int)local_158);
            puVar19 = (ulong *)PTR_DAT_047d8b70;
            if (plVar13 != (long *)0x0) {
              puVar19 = (ulong *)(plVar13 + 6);
            }
            uVar21 = *puVar19;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x18))(plVar13);
            }
            uVar34 = *(ulong *)(param_1 + 0x200);
            if (uVar34 == 0) goto LAB_0118c66c;
            uVar27 = uVar34 - (uVar34 >> 1 & 0x5555555555555555);
            uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
            uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar27 < 2) {
              uVar30 = uVar34 - 1 & uVar21;
            }
            else if (uVar21 < uVar34) {
              uVar30 = uVar21;
            }
            else {
              uVar30 = 0;
              if (uVar34 != 0) {
                uVar30 = uVar21 / uVar34;
              }
              uVar30 = uVar21 - uVar30 * uVar34;
            }
            plVar31 = *(long **)(*plVar11 + uVar30 * 8);
            if ((plVar31 == (long *)0x0) || (plVar31 = (long *)*plVar31, plVar31 == (long *)0x0))
            goto LAB_0118c66c;
            if (1 < uVar27) goto LAB_0118c630;
            goto LAB_0118cdf0;
          }
          break;
        }
        lVar32 = sVar15 - 1;
        sVar15 = sVar15 - 1;
        lVar12 = sVar16 - 1;
        sVar16 = sVar16 - 1;
      } while (pcVar36[lVar32] == __s[lVar12]);
    }
  }
  goto LAB_0118c0bc;
LAB_0118c630:
  do {
    uVar27 = plVar31[1];
    if (uVar27 == uVar21) {
      if (plVar31[2] == uVar21) goto LAB_0118ce28;
    }
    else {
      if (uVar34 <= uVar27) {
        uVar7 = 0;
        if (uVar34 != 0) {
          uVar7 = uVar27 / uVar34;
        }
        uVar27 = uVar27 - uVar7 * uVar34;
      }
      if (uVar27 != uVar30) break;
    }
    plVar31 = (long *)*plVar31;
  } while (plVar31 != (long *)0x0);
LAB_0118c66c:
  plVar33 = (long *)0x0;
  goto LAB_0118ce2c;
  while( true ) {
    plVar31 = (long *)*plVar31;
    plVar33 = (long *)0x0;
    if (plVar31 == (long *)0x0) break;
LAB_0118cdf0:
    if (plVar31[1] == uVar21) {
      if (plVar31[2] == uVar21) goto LAB_0118ce28;
    }
    else if ((plVar31[1] & uVar34 - 1) != uVar30) goto LAB_0118c66c;
  }
LAB_0118ce2c:
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (plVar33 == (long *)0x0) {
    plVar31 = (long *)CONCAT44(local_158._4_4_,(int)local_158);
    plVar13 = (long *)PTR_PTR_047d4508;
    if (plVar31 != (long *)0x0) {
      plVar13 = plVar31 + 7;
    }
    pcVar36 = (char *)*plVar13;
    if (plVar31 != (long *)0x0) {
      (**(code **)(*plVar31 + 0x18))(plVar31);
    }
    local_150 = (ulong *)0x0;
    if ((pcVar36 == (char *)0x0) || (*pcVar36 == '\0')) {
      puVar14 = (ulong *)FUN_00d44228();
      if (puVar14 != (ulong *)0x0) {
        (**(code **)(*puVar14 + 0x18))(puVar14);
      }
      if (local_150 != (ulong *)0x0) {
        uVar21 = *local_150;
        local_150 = puVar14;
        (**(code **)(uVar21 + 0x20))();
        puVar14 = local_150;
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar18 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar18;
      FUN_00cf9884(local_70,uVar18,pcVar36);
      puVar14 = local_150;
      local_150 = (ulong *)0x0;
      if (puVar14 != (ulong *)0x0) {
        (**(code **)(*puVar14 + 0x20))();
      }
      local_150 = local_70[0];
      puVar14 = local_150;
    }
    local_150 = puVar14;
    local_148 = 0;
    local_140 = 0;
    local_128 = 0x666666666666666;
    uStack_120 = 0;
    local_110 = 0x1ffffffff;
    local_108 = 0xffffffffffffffff;
    local_118 = 0;
    local_100 = 0;
    local_fc = 0x101;
    local_138 = (long *)0x0;
    plStack_130 = plVar20;
    FUN_0118e4f4(plVar11,&local_150);
    FUN_011f3af8(&local_148);
    if (local_150 != (ulong *)0x0) {
      (**(code **)(*local_150 + 0x20))();
    }
    if (plVar31 != (long *)0x0) {
      (**(code **)(*plVar31 + 0x20))(plVar31);
    }
    puVar14 = local_f8;
  }
  plVar31 = (long *)CONCAT44(local_158._4_4_,(int)local_158);
  uVar21 = puVar14[4];
  plVar13 = (long *)PTR_DAT_047d8b70;
  if (plVar31 != (long *)0x0) {
    plVar13 = plVar31 + 6;
  }
  local_150 = (ulong *)*plVar13;
  plVar13 = (long *)PTR_PTR_047d4508;
  if (plVar31 != (long *)0x0) {
    plVar13 = plVar31 + 7;
  }
  local_148 = *plVar13;
  if (plVar31 == (long *)0x0) {
    local_140 = 0;
  }
  else {
    local_140 = plVar31[8];
    local_138 = (long *)0x0;
    (**(code **)(*plVar31 + 0x18))(plVar31);
  }
  local_138 = plVar31;
  FUN_0118ef48(uVar21,plVar20,&local_150);
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if ((long *)CONCAT44(local_158._4_4_,(int)local_158) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT44(local_158._4_4_,(int)local_158) + 0x20))();
  }
LAB_0118c0bc:
  *(int *)(puVar14[4] + 0x50) = *(int *)(puVar14[4] + 0x50) + 1;
  puVar4 = (undefined8 *)plVar35[5];
  if (puVar4 < (undefined8 *)plVar35[6]) {
    lVar32 = plVar35[7];
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 == 0) {
      puVar4[2] = local_e8;
      puVar4[3] = local_e0;
      *puVar4 = local_f8;
      puVar4[1] = local_f0;
    }
    else {
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0118d460;
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar32;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      puVar4[2] = local_e8;
      puVar4[3] = local_e0;
      *puVar4 = local_f8;
      puVar4[1] = local_f0;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    plVar35[5] = (long)(puVar4 + 4);
    local_f8 = (ulong *)0x0;
  }
  else {
    FUN_01190c48(plVar35 + 4,&local_f8);
    puVar14 = local_f8;
    local_f8 = (ulong *)0x0;
    if (puVar14 != (ulong *)0x0) {
      FUN_010476cc(&local_f0);
    }
  }
  if (plVar22 != (long *)0x0) {
    plVar13 = plVar22 + 5;
    do {
      lVar32 = *plVar13;
      iVar9 = (int)lVar32 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    else if ((int)lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (plVar37 != (long *)0x0) {
    (**(code **)(*plVar37 + 0x20))();
  }
  plVar29 = (long *)*plVar29;
  if (plVar29 == (long *)0x0) goto LAB_0118c198;
  goto LAB_0118bdd4;
LAB_0118ce28:
  plVar33 = plVar31 + 6;
  goto LAB_0118ce2c;
LAB_0118c8e4:
  plVar11 = plVar35 + 6;
  goto LAB_0118c8e8;
}


