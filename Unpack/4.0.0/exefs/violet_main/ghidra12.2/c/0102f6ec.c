/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0102f6ec; name: FUN_0102f6ec
 */


void FUN_0102f6ec(long param_1,long param_2)

{
  undefined *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ushort *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined4 uVar22;
  long *plVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  ulong *puVar27;
  long *plVar28;
  undefined8 uVar29;
  long *plVar30;
  long *plVar31;
  float fVar32;
  ulong local_70;
  undefined4 local_64;
  
  plVar23 = (long *)(param_1 + 0x50);
  uVar20 = *(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 5;
  lVar13 = *(long *)(param_1 + 0x58);
  uVar21 = lVar13 - *plVar23 >> 5;
  if (uVar21 < uVar20) {
    FUN_00d24494(plVar23,uVar20 - uVar21);
  }
  else if (uVar20 < uVar21) {
    lVar9 = *plVar23 + uVar20 * 0x20;
    while (lVar9 != lVar13) {
      plVar26 = (long *)(lVar13 + -8);
      lVar13 = lVar13 + -0x20;
      if ((long *)*plVar26 != (long *)0x0) {
        (**(code **)(*(long *)*plVar26 + 0x20))();
      }
    }
    *(long *)(param_1 + 0x58) = lVar9;
  }
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (*(undefined8 **)(param_2 + 0x28) != puVar3) {
    puVar25 = (undefined8 *)*plVar23;
    *puVar25 = *puVar3;
    puVar25[1] = puVar3[1];
    puVar25[2] = puVar3[2];
    plVar26 = (long *)puVar3[3];
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
    plVar31 = (long *)puVar25[3];
    puVar25[3] = plVar26;
    if (plVar31 != (long *)0x0) {
      (**(code **)(*plVar31 + 0x20))();
    }
    lVar13 = *(long *)(param_2 + 0x20);
    if (1 < (ulong)(*(long *)(param_2 + 0x28) - lVar13 >> 5)) {
      lVar9 = 0;
      uVar20 = 1;
      do {
        lVar13 = lVar13 + lVar9;
        lVar11 = *plVar23 + lVar9;
        *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar13 + 0x20);
        *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar13 + 0x28);
        *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar13 + 0x30);
        plVar26 = *(long **)(lVar13 + 0x38);
        if (plVar26 != (long *)0x0) {
          (**(code **)(*plVar26 + 0x18))(plVar26);
        }
        plVar31 = *(long **)(lVar11 + 0x38);
        *(long **)(lVar11 + 0x38) = plVar26;
        if (plVar31 != (long *)0x0) {
          (**(code **)(*plVar31 + 0x20))();
        }
        lVar13 = *(long *)(param_2 + 0x20);
        uVar20 = uVar20 + 1;
        lVar9 = lVar9 + 0x20;
      } while (uVar20 < (ulong)(*(long *)(param_2 + 0x28) - lVar13 >> 5));
    }
  }
  plVar26 = *(long **)(param_2 + 0x58);
  plVar31 = *(long **)(param_2 + 0x60);
  if (plVar26 != plVar31) {
    plVar10 = (long *)(param_1 + 0x88);
    plVar12 = (long *)(param_1 + 0xb8);
    do {
      lVar13 = plVar26[4];
      plVar28 = (long *)*plVar26;
      plVar24 = *(long **)(param_1 + 0x90);
      if (plVar24 == (long *)0x0) {
LAB_0102f828:
        plVar30 = (long *)(**(code **)(**(long **)(param_1 + 0xc0) + 0x10))
                                    (*(long **)(param_1 + 0xc0),0x38,8);
        if (plVar30 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xc0) + 0xe8))();
        }
        uVar29 = *(undefined8 *)(param_1 + 0xc0);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0103022c;
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar29;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        plVar30[2] = *plVar26;
        plVar30[3] = plVar26[1];
        plVar30[4] = plVar26[2];
        plVar14 = (long *)plVar26[3];
        plVar30[5] = (long)plVar14;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x18))();
        }
        *(undefined1 *)(plVar30 + 6) = 0;
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        *plVar30 = 0;
        plVar30[1] = (long)plVar28;
        fVar32 = (float)(*(long *)(param_1 + 0xe0) + 1);
        if ((plVar24 == (long *)0x0) || (*(float *)(param_1 + 0xe8) * (float)plVar24 < fVar32)) {
          uVar20 = (ulong)(plVar24 < (long *)0x3 || ((ulong)plVar24 & (long)plVar24 - 1U) != 0) |
                   (long)plVar24 << 1;
          uVar21 = (ulong)(fVar32 / *(float *)(param_1 + 0xe8));
          if (uVar21 <= uVar20) {
            uVar21 = uVar20;
          }
          if (uVar21 - 1 == 0) {
            uVar21 = 2;
          }
          else if ((uVar21 & uVar21 - 1) != 0) {
            uVar21 = std::__next_prime(uVar21);
          }
          uVar20 = *(ulong *)(param_1 + 0x90);
          if (uVar20 < uVar21) {
            uVar17 = uVar21;
LAB_0102f9dc:
            FUN_010302c4(plVar10,uVar17);
          }
          else if (uVar21 < uVar20) {
            uVar17 = (ulong)((float)*(ulong *)(param_1 + 0xe0) / *(float *)(param_1 + 0xe8));
            if ((uVar20 < 3) ||
               (uVar18 = uVar20 - (uVar20 >> 1 & 0x5555555555555555),
               uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333),
               1 < (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar17 = std::__next_prime(uVar17);
            }
            else if (1 < uVar17) {
              uVar17 = 1L << (-LZCOUNT(uVar17 - 1) & 0x3fU);
            }
            if (uVar17 <= uVar21) {
              uVar17 = uVar21;
            }
            if (uVar17 < uVar20) goto LAB_0102f9dc;
          }
          plVar24 = *(long **)(param_1 + 0x90);
          if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
            plVar23 = (long *)((long)plVar24 - 1U & (ulong)plVar28);
          }
          else if (plVar28 < plVar24) {
            plVar23 = plVar28;
          }
          else {
            uVar20 = 0;
            if (plVar24 != (long *)0x0) {
              uVar20 = (ulong)plVar28 / (ulong)plVar24;
            }
            plVar23 = (long *)((long)plVar28 - uVar20 * (long)plVar24);
          }
        }
        plVar28 = *(long **)(*plVar10 + (long)plVar23 * 8);
        if (plVar28 == (long *)0x0) {
          *plVar30 = *plVar12;
          *plVar12 = (long)plVar30;
          *(long **)(*plVar10 + (long)plVar23 * 8) = plVar12;
          if (*plVar30 != 0) {
            plVar28 = *(long **)(*plVar30 + 8);
            if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
              plVar28 = (long *)((ulong)plVar28 & (long)plVar24 - 1U);
            }
            else if (plVar24 <= plVar28) {
              uVar20 = 0;
              if (plVar24 != (long *)0x0) {
                uVar20 = (ulong)plVar28 / (ulong)plVar24;
              }
              plVar28 = (long *)((long)plVar28 - uVar20 * (long)plVar24);
            }
            plVar28 = (long *)(*plVar10 + (long)plVar28 * 8);
            goto LAB_0102f94c;
          }
        }
        else {
          *plVar30 = *plVar28;
LAB_0102f94c:
          *plVar28 = (long)plVar30;
        }
        *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 1;
      }
      else {
        uVar20 = (long)plVar24 - 1;
        if (((ulong)plVar24 & uVar20) == 0) {
          plVar23 = (long *)(uVar20 & (ulong)plVar28);
          plVar30 = *(long **)(*plVar10 + (long)plVar23 * 8);
          if (plVar30 == (long *)0x0) goto LAB_0102f828;
          do {
            plVar30 = (long *)*plVar30;
            if ((plVar30 == (long *)0x0) ||
               ((long *)plVar30[1] != plVar28 && (long *)((ulong)plVar30[1] & uVar20) != plVar23))
            goto LAB_0102f828;
          } while ((long *)plVar30[2] != plVar28);
        }
        else {
          plVar23 = plVar28;
          if (plVar24 <= plVar28) {
            uVar20 = 0;
            if (plVar24 != (long *)0x0) {
              uVar20 = (ulong)plVar28 / (ulong)plVar24;
            }
            plVar23 = (long *)((long)plVar28 - uVar20 * (long)plVar24);
          }
          plVar30 = *(long **)(*plVar10 + (long)plVar23 * 8);
          if (plVar30 == (long *)0x0) goto LAB_0102f828;
          do {
            plVar30 = (long *)*plVar30;
            if (plVar30 == (long *)0x0) goto LAB_0102f828;
            plVar14 = (long *)plVar30[1];
            if (plVar14 != plVar28) {
              if (plVar24 <= plVar14) {
                uVar20 = 0;
                if (plVar24 != (long *)0x0) {
                  uVar20 = (ulong)plVar14 / (ulong)plVar24;
                }
                plVar14 = (long *)((long)plVar14 - uVar20 * (long)plVar24);
              }
              if (plVar14 != plVar23) goto LAB_0102f828;
            }
          } while ((long *)plVar30[2] != plVar28);
        }
      }
      plVar26 = plVar26 + 5;
      *(char *)(plVar30 + 6) = (char)lVar13;
    } while (plVar26 != plVar31);
  }
  puVar27 = *(ulong **)(param_2 + 0x90);
  puVar4 = *(ulong **)(param_2 + 0x98);
  if (puVar27 != puVar4) {
    plVar23 = (long *)(param_1 + 0xf0);
    plVar26 = (long *)(param_1 + 0x120);
    puVar1 = PTR_DAT_047d66f8 + 0x10;
    do {
      plVar31 = *(long **)(param_1 + 8);
      piVar15 = (int *)puVar27[4];
      if (piVar15 == (int *)0x0) {
        uVar22 = 0;
        local_64 = 0;
LAB_0102fc8c:
        lVar13 = 0;
        local_70 = 0;
      }
      else {
        puVar19 = (ushort *)((long)piVar15 - (long)*piVar15);
        uVar5 = *puVar19;
        if (uVar5 < 9) {
          uVar22 = 0;
LAB_0102fc84:
          local_64 = 0;
          goto LAB_0102fc8c;
        }
        if ((ulong)puVar19[4] == 0) {
          uVar22 = 0;
        }
        else {
          uVar22 = *(undefined4 *)((long)piVar15 + (ulong)puVar19[4]);
        }
        if (uVar5 < 0xb) goto LAB_0102fc84;
        local_64 = 0;
        if ((ulong)puVar19[5] != 0) {
          local_64 = *(undefined4 *)((long)piVar15 + (ulong)puVar19[5]);
        }
        if (uVar5 < 0xd) goto LAB_0102fc8c;
        local_70 = 0;
        if ((ulong)puVar19[6] != 0) {
          puVar2 = (uint *)((long)piVar15 + (ulong)puVar19[6]);
          local_70 = (long)puVar2 + (ulong)*puVar2;
        }
        if ((uVar5 < 0x13) || ((ulong)puVar19[9] == 0)) {
          lVar13 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar15 + (ulong)puVar19[9]);
          lVar13 = (long)puVar2 + (ulong)*puVar2;
        }
      }
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar9 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_0103022c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar31;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      plVar10 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x68,8);
      if (plVar10 == (long *)0x0) {
        (**(code **)(*plVar31 + 0xe8))(plVar31);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                   ,0x40);
      }
      *plVar10 = (long)puVar1;
      plVar10[2] = 0;
      *(undefined4 *)(plVar10 + 3) = 0;
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar11 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = 0;
        if (*(long *)(lVar11 + 0x80) != 0) {
          lVar16 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
        }
      }
      plVar10[1] = lVar16;
      plVar24 = plVar10 + 5;
      *(int *)plVar24 = 0;
      *plVar10 = (long)&PTR_LAB_045d1e30;
      plVar10[4] = (long)&PTR_LAB_045d1e68;
      plVar10[6] = *puVar27;
      plVar10[7] = puVar27[1];
      plVar10[8] = puVar27[2];
      plVar12 = (long *)puVar27[3];
      plVar10[9] = (long)plVar12;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))();
      }
      *(undefined4 *)(plVar10 + 10) = uVar22;
      *(undefined4 *)((long)plVar10 + 0x54) = local_64;
      plVar10[0xb] = local_70;
      plVar10[0xc] = lVar13;
      *(undefined4 *)(plVar10 + 3) = 0x80068;
      plVar10[1] = (long)plVar31;
      plVar10[2] = (long)plVar10;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      do {
        lVar13 = *plVar24;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar7) {
          *(int *)plVar24 = (int)lVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((int)lVar13 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      uVar21 = *puVar27;
      uVar20 = *(ulong *)(param_1 + 0xf8);
      if (uVar20 == 0) {
LAB_0102fd0c:
        plVar31 = (long *)(**(code **)(**(long **)(param_1 + 0x128) + 0x10))
                                    (*(long **)(param_1 + 0x128),0x38,8);
        if (plVar31 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x128) + 0xe8))();
        }
        uVar29 = *(undefined8 *)(param_1 + 0x128);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 != 0) {
          if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_0103022c;
          *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar29;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        }
        plVar31[2] = *puVar27;
        plVar31[3] = puVar27[1];
        plVar31[4] = puVar27[2];
        plVar12 = (long *)puVar27[3];
        plVar31[5] = (long)plVar12;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))();
        }
        plVar31[6] = 0;
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        *plVar31 = 0;
        plVar31[1] = uVar21;
        fVar32 = (float)(*(long *)(param_1 + 0x148) + 1);
        if ((uVar20 == 0) || (*(float *)(param_1 + 0x150) * (float)uVar20 < fVar32)) {
          uVar20 = (ulong)(uVar20 < 3 || (uVar20 & uVar20 - 1) != 0) | uVar20 << 1;
          uVar17 = (ulong)(fVar32 / *(float *)(param_1 + 0x150));
          if (uVar17 <= uVar20) {
            uVar17 = uVar20;
          }
          FUN_0118d558(plVar23,uVar17);
          uVar20 = *(ulong *)(param_1 + 0xf8);
          if ((uVar20 & uVar20 - 1) == 0) {
            local_70 = uVar20 - 1 & uVar21;
          }
          else if (uVar21 < uVar20) {
            local_70 = uVar21;
          }
          else {
            uVar17 = 0;
            if (uVar20 != 0) {
              uVar17 = uVar21 / uVar20;
            }
            local_70 = uVar21 - uVar17 * uVar20;
          }
        }
        plVar12 = *(long **)(*plVar23 + local_70 * 8);
        if (plVar12 == (long *)0x0) {
          *plVar31 = *plVar26;
          *plVar26 = (long)plVar31;
          *(long **)(*plVar23 + local_70 * 8) = plVar26;
          if (*plVar31 != 0) {
            uVar21 = *(ulong *)(*plVar31 + 8);
            if ((uVar20 & uVar20 - 1) == 0) {
              uVar21 = uVar21 & uVar20 - 1;
            }
            else if (uVar20 <= uVar21) {
              uVar17 = 0;
              if (uVar20 != 0) {
                uVar17 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar17 * uVar20;
            }
            plVar12 = (long *)(*plVar23 + uVar21 * 8);
            goto LAB_0102fe90;
          }
        }
        else {
          *plVar31 = *plVar12;
LAB_0102fe90:
          *plVar12 = (long)plVar31;
        }
        *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + 1;
      }
      else {
        uVar17 = uVar20 - 1;
        if ((uVar20 & uVar17) == 0) {
          local_70 = uVar17 & uVar21;
          plVar31 = *(long **)(*plVar23 + local_70 * 8);
          if (plVar31 == (long *)0x0) goto LAB_0102fd0c;
          do {
            plVar31 = (long *)*plVar31;
            if ((plVar31 == (long *)0x0) ||
               (plVar31[1] != uVar21 && (plVar31[1] & uVar17) != local_70)) goto LAB_0102fd0c;
          } while (plVar31[2] != uVar21);
        }
        else {
          local_70 = uVar21;
          if (uVar20 <= uVar21) {
            uVar17 = 0;
            if (uVar20 != 0) {
              uVar17 = uVar21 / uVar20;
            }
            local_70 = uVar21 - uVar17 * uVar20;
          }
          plVar31 = *(long **)(*plVar23 + local_70 * 8);
          if (plVar31 == (long *)0x0) goto LAB_0102fd0c;
          do {
            plVar31 = (long *)*plVar31;
            if (plVar31 == (long *)0x0) goto LAB_0102fd0c;
            uVar17 = plVar31[1];
            if (uVar17 != uVar21) {
              if (uVar20 <= uVar17) {
                uVar18 = 0;
                if (uVar20 != 0) {
                  uVar18 = uVar17 / uVar20;
                }
                uVar17 = uVar17 - uVar18 * uVar20;
              }
              if (uVar17 != local_70) goto LAB_0102fd0c;
            }
          } while (plVar31[2] != uVar21);
        }
      }
      plVar12 = (long *)plVar31[6];
      plVar31[6] = 0;
      if (plVar12 != (long *)0x0) {
        plVar24 = plVar12 + 5;
        do {
          lVar13 = *plVar24;
          iVar8 = (int)lVar13 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar7) {
            *(int *)plVar24 = iVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      puVar27 = puVar27 + 5;
      plVar31[6] = (long)plVar10;
    } while (puVar27 != puVar4);
  }
  return;
}


