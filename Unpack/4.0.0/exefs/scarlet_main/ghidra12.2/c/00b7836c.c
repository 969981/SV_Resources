/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b7836c; name: FUN_00b7836c
 */


void FUN_00b7836c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  size_t sVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  byte *pbVar23;
  long *plVar24;
  void *pvVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong uVar29;
  
  lVar8 = *(long *)(param_1 + 0x160);
  uVar26 = (ulong)*(int *)(lVar8 + -0xc);
  lVar15 = *(long *)(param_1 + 0x170);
  lVar16 = *(long *)(param_1 + 0x178);
  lVar3 = tpidr_el0;
  if (uVar26 < (ulong)(lVar16 - lVar15 >> 3)) {
LAB_00b783bc:
    pbVar23 = *(byte **)(lVar15 + uVar26 * 8);
    bVar7 = *pbVar23;
    if (bVar7 == 0) {
      uVar28 = 0;
    }
    else {
      uVar28 = 0;
      pbVar13 = pbVar23;
      do {
        pbVar13 = pbVar13 + 1;
        uVar28 = uVar28 * 5 + (ulong)bVar7;
        bVar7 = *pbVar13;
      } while (bVar7 != 0);
    }
    uVar19 = *(ulong *)(param_1 + 0xf8);
    if (uVar19 != 0) {
      uVar9 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar14 = uVar19 - 1 & uVar28;
      }
      else {
        uVar14 = uVar28;
        if (uVar19 <= uVar28) {
          uVar14 = 0;
          if (uVar19 != 0) {
            uVar14 = uVar28 / uVar19;
          }
          uVar14 = uVar28 - uVar14 * uVar19;
        }
      }
      lVar18 = *(long *)(param_1 + 0xf0);
      puVar10 = *(undefined8 **)(lVar18 + uVar14 * 8);
      if ((puVar10 != (undefined8 *)0x0) && (plVar21 = (long *)*puVar10, plVar21 != (long *)0x0)) {
        uVar29 = uVar19 - 1;
        if (uVar9 < 2) {
          do {
            if (plVar21[1] == uVar28) {
              iVar4 = strcmp((char *)plVar21[2],(char *)pbVar23);
              if (iVar4 == 0) goto LAB_00b78500;
            }
            else if ((plVar21[1] & uVar29) != uVar14) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar21[1];
            if (uVar11 == uVar28) {
              iVar4 = strcmp((char *)plVar21[2],(char *)pbVar23);
              if (iVar4 == 0) goto LAB_00b78500;
            }
            else {
              if (uVar19 <= uVar11) {
                uVar2 = 0;
                if (uVar19 != 0) {
                  uVar2 = uVar11 / uVar19;
                }
                uVar11 = uVar11 - uVar2 * uVar19;
              }
              if (uVar11 != uVar14) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_00b784ec;
  }
LAB_00b786e8:
  uVar26 = (ulong)*(int *)(lVar8 + -8);
  lVar15 = *(long *)(param_1 + 0x188);
  if (uVar26 < (ulong)(*(long *)(param_1 + 400) - lVar15 >> 3)) {
LAB_00b78708:
    pbVar23 = *(byte **)(lVar15 + uVar26 * 8);
    bVar7 = *pbVar23;
    if (bVar7 == 0) {
      uVar28 = 0;
    }
    else {
      uVar28 = 0;
      pbVar13 = pbVar23;
      do {
        pbVar13 = pbVar13 + 1;
        uVar28 = uVar28 * 5 + (ulong)bVar7;
        bVar7 = *pbVar13;
      } while (bVar7 != 0);
    }
    uVar19 = *(ulong *)(param_1 + 0x120);
    if (uVar19 != 0) {
      uVar9 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar14 = uVar19 - 1 & uVar28;
      }
      else {
        uVar14 = uVar28;
        if (uVar19 <= uVar28) {
          uVar14 = 0;
          if (uVar19 != 0) {
            uVar14 = uVar28 / uVar19;
          }
          uVar14 = uVar28 - uVar14 * uVar19;
        }
      }
      lVar15 = *(long *)(param_1 + 0x118);
      puVar10 = *(undefined8 **)(lVar15 + uVar14 * 8);
      if ((puVar10 != (undefined8 *)0x0) && (plVar21 = (long *)*puVar10, plVar21 != (long *)0x0)) {
        uVar29 = uVar19 - 1;
        if (uVar9 < 2) {
          do {
            if (plVar21[1] == uVar28) {
              iVar4 = strcmp((char *)plVar21[2],(char *)pbVar23);
              if (iVar4 == 0) goto LAB_00b78830;
            }
            else if ((plVar21[1] & uVar29) != uVar14) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar21[1];
            if (uVar11 == uVar28) {
              iVar4 = strcmp((char *)plVar21[2],(char *)pbVar23);
              if (iVar4 == 0) goto LAB_00b78830;
            }
            else {
              if (uVar19 <= uVar11) {
                uVar2 = 0;
                if (uVar19 != 0) {
                  uVar2 = uVar11 / uVar19;
                }
                uVar11 = uVar11 - uVar2 * uVar19;
              }
              if (uVar11 != uVar14) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_00b78980;
  }
LAB_00b78a24:
  uVar26 = (ulong)*(int *)(lVar8 + -4);
  lVar15 = *(long *)(param_1 + 0x1a0);
  if (uVar26 < (ulong)(*(long *)(param_1 + 0x1a8) - lVar15 >> 4)) {
    plVar21 = (long *)(param_1 + 0x148);
    do {
      plVar24 = (long *)*plVar21;
      if (plVar24 != (long *)0x0) {
        puVar1 = (ulong *)(lVar15 + uVar26 * 0x10);
        uVar28 = *puVar1;
        iVar4 = (int)puVar1[1];
        plVar17 = plVar24;
        plVar22 = plVar21;
        do {
          if (((ulong)plVar17[4] < uVar28) ||
             (((ulong)plVar17[4] <= uVar28 && ((int)plVar17[5] < iVar4)))) {
            plVar17 = plVar17 + 1;
          }
          else {
            plVar22 = plVar17;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
        if (((plVar22 != plVar21) && ((ulong)plVar22[4] <= uVar28)) &&
           (((ulong)plVar22[4] < uVar28 || ((int)plVar22[5] <= iVar4)))) {
          plVar17 = (long *)plVar22[1];
          if ((long *)plVar22[1] == (long *)0x0) {
            plVar17 = plVar22 + 2;
            plVar12 = (long *)*plVar17;
            if ((long *)*plVar12 != plVar22) {
              do {
                lVar15 = *plVar17;
                plVar17 = (long *)(lVar15 + 0x10);
                plVar12 = (long *)*plVar17;
              } while (*plVar12 != lVar15);
            }
          }
          else {
            do {
              plVar12 = plVar17;
              plVar17 = (long *)*plVar12;
            } while ((long *)*plVar12 != (long *)0x0);
          }
          if (*(long **)(param_1 + 0x140) == plVar22) {
            *(long **)(param_1 + 0x140) = plVar12;
          }
          *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + -1;
          FUN_01336080(plVar24,plVar22);
          if (plVar22 != (long *)0x0) {
            plVar24 = *(long **)(lVar3 + 0x30);
            if (plVar24 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar24 = DAT_04859430;
              *(long **)(lVar3 + 0x30) = DAT_04859430;
            }
            uVar28 = (**(code **)(*plVar24 + 0xf8))(plVar24);
            if (((uVar28 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
              (**(code **)(*plVar24 + 0x18))(plVar24,plVar22,0,8);
            }
            else {
              FUN_00c48fe8(plVar24,plVar22,0,8);
            }
          }
        }
      }
      lVar15 = *(long *)(param_1 + 0x1a0);
      uVar26 = uVar26 + 1;
    } while (uVar26 < (ulong)(*(long *)(param_1 + 0x1a8) - lVar15 >> 4));
  }
  uVar26 = (ulong)*(int *)(lVar8 + -0xc);
  uVar28 = *(long *)(param_1 + 0x178) - *(long *)(param_1 + 0x170) >> 3;
  if (uVar28 < uVar26) {
    FUN_00bad710(param_1 + 0x170,uVar26 - uVar28);
  }
  else if (uVar28 != uVar26) {
    *(ulong *)(param_1 + 0x178) = *(long *)(param_1 + 0x170) + uVar26 * 8;
  }
  uVar26 = (ulong)*(int *)(lVar8 + -8);
  uVar28 = *(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 3;
  if (uVar28 < uVar26) {
    FUN_00bad710(param_1 + 0x188,uVar26 - uVar28);
  }
  else if (uVar28 != uVar26) {
    *(ulong *)(param_1 + 400) = *(long *)(param_1 + 0x188) + uVar26 * 8;
  }
  uVar26 = (ulong)*(int *)(lVar8 + -4);
  lVar15 = *(long *)(param_1 + 0x1a0);
  puVar10 = *(undefined8 **)(param_1 + 0x1a8);
  uVar28 = (long)puVar10 - lVar15 >> 4;
  if (uVar28 < uVar26) {
    uVar19 = uVar26 - uVar28;
    if (uVar19 <= (ulong)(*(long *)(param_1 + 0x1b0) - (long)puVar10 >> 4)) {
      puVar27 = puVar10;
      if (uVar19 != 0) {
        puVar27 = puVar10 + uVar19 * 2;
        do {
          *puVar10 = 0;
          *(undefined4 *)(puVar10 + 1) = 0;
          puVar10 = puVar10 + 2;
        } while (puVar10 != puVar27);
      }
      goto LAB_00b78d48;
    }
    if (*(int *)(lVar8 + -4) < 0) goto LAB_00b79a8c;
    lVar15 = *(long *)(param_1 + 0x1b0) - lVar15;
    uVar9 = lVar15 >> 3;
    uVar19 = uVar26;
    if (uVar26 <= uVar9) {
      uVar19 = uVar9;
    }
    if (0x7fffffffffffffe < (ulong)(lVar15 >> 4)) {
      uVar19 = 0xfffffffffffffff;
    }
    if (uVar19 == 0) {
      lVar15 = 0;
LAB_00b78d54:
      puVar27 = (undefined8 *)(lVar15 + uVar28 * 0x10);
      puVar20 = (undefined8 *)(lVar15 + uVar26 * 0x10);
      puVar10 = puVar27;
      do {
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = 0;
        puVar10 = puVar10 + 2;
      } while (puVar20 != puVar10);
      pvVar5 = *(void **)(param_1 + 0x1a0);
      sVar6 = *(long *)(param_1 + 0x1a8) - (long)pvVar5;
      pvVar25 = (void *)((long)puVar27 - sVar6);
      if (0 < (long)sVar6) {
        memcpy(pvVar25,pvVar5,sVar6);
      }
      *(void **)(param_1 + 0x1a0) = pvVar25;
      *(undefined8 **)(param_1 + 0x1a8) = puVar20;
      *(ulong *)(param_1 + 0x1b0) = lVar15 + uVar19 * 0x10;
      if (pvVar5 != (void *)0x0) {
        plVar21 = *(long **)(lVar3 + 0x30);
        if (plVar21 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar21 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar26 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar26 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,pvVar5,0,8);
        }
        else {
          FUN_00c48fe8(plVar21,pvVar5,0,8);
        }
      }
      goto LAB_00b78dec;
    }
    if (uVar19 >> 0x3c == 0) {
      plVar21 = *(long **)(lVar3 + 0x30);
      if (plVar21 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar21 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      lVar15 = (**(code **)(*plVar21 + 0x10))(plVar21,uVar19 << 4,8);
      goto LAB_00b78d54;
    }
LAB_00b79a88:
    FUN_01f6e360();
LAB_00b79a8c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if (uVar28 != uVar26) {
    puVar27 = (undefined8 *)(lVar15 + uVar26 * 0x10);
LAB_00b78d48:
    *(undefined8 **)(param_1 + 0x1a8) = puVar27;
  }
LAB_00b78dec:
  puVar27 = *(undefined8 **)(param_1 + 0x98);
  puVar10 = (undefined8 *)(*(long *)(param_1 + 0x90) + (long)*(int *)(lVar8 + -0x1c) * 8);
  while (puVar10 != puVar27) {
    puVar20 = puVar10 + 1;
    pbVar23 = (byte *)*puVar10;
    puVar10 = puVar20;
    if (pbVar23 != (byte *)0x0) {
      if (((*pbVar23 & 1) != 0) && (lVar15 = *(long *)(pbVar23 + 0x10), lVar15 != 0)) {
        plVar21 = *(long **)(lVar3 + 0x30);
        if (plVar21 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar21 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar26 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar26 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,lVar15,0,8);
        }
        else {
          FUN_00c48fe8(plVar21,lVar15,0,8);
        }
      }
      plVar21 = *(long **)(lVar3 + 0x30);
      if (plVar21 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar21 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar26 = (**(code **)(*plVar21 + 0xf8))(plVar21);
      if (((uVar26 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
        (**(code **)(*plVar21 + 0x18))(plVar21,pbVar23,0,8);
      }
      else {
        FUN_00c48fe8(plVar21,pbVar23,0,8);
      }
    }
  }
  plVar24 = *(long **)(param_1 + 0xb0);
  plVar21 = (long *)(*(long *)(param_1 + 0xa8) + (long)*(int *)(lVar8 + -0x18) * 8);
  while (plVar21 != plVar24) {
    plVar22 = plVar21 + 1;
    plVar17 = (long *)*plVar21;
    plVar21 = plVar22;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
  }
  plVar24 = *(long **)(param_1 + 200);
  plVar21 = (long *)(*(long *)(param_1 + 0xc0) + (long)*(int *)(lVar8 + -0x14) * 8);
  while (plVar21 != plVar24) {
    plVar17 = plVar21 + 1;
    lVar15 = *plVar21;
    plVar21 = plVar17;
    if (lVar15 != 0) {
      FUN_00b77714(lVar15);
      plVar17 = *(long **)(lVar3 + 0x30);
      if (plVar17 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar17 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar26 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar26 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,lVar15,0,8);
      }
      else {
        FUN_00c48fe8(plVar17,lVar15,0,8);
      }
    }
  }
  lVar15 = *(long *)(param_1 + 0xd8);
  lVar16 = *(long *)(param_1 + 0xe0);
  for (uVar26 = (ulong)*(int *)(lVar8 + -0x10); uVar26 < (ulong)(lVar16 - lVar15 >> 3);
      uVar26 = uVar26 + 1) {
    lVar15 = *(long *)(lVar15 + uVar26 * 8);
    if (lVar15 != 0) {
      plVar21 = *(long **)(lVar3 + 0x30);
      if (plVar21 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar21 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar28 = (**(code **)(*plVar21 + 0xf8))(plVar21);
      if (((uVar28 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar15,0,8);
      }
      else {
        FUN_00c48fe8(plVar21,lVar15,0,8);
      }
    }
    lVar15 = *(long *)(param_1 + 0xd8);
    lVar16 = *(long *)(param_1 + 0xe0);
  }
  pvVar5 = *(void **)(param_1 + 0x90);
  pvVar25 = *(void **)(param_1 + 0x98);
  sVar6 = (long)pvVar25 - (long)pvVar5;
  uVar26 = (ulong)*(int *)(lVar8 + -0x1c);
  uVar28 = (long)sVar6 >> 3;
  if (uVar28 < uVar26) {
    uVar19 = uVar26 - uVar28;
    if ((ulong)(*(long *)(param_1 + 0xa0) - (long)pvVar25 >> 3) < uVar19) {
      if (*(int *)(lVar8 + -0x1c) < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar15 = *(long *)(param_1 + 0xa0) - (long)pvVar5;
      uVar14 = lVar15 >> 2;
      uVar9 = uVar26;
      if (uVar26 <= uVar14) {
        uVar9 = uVar14;
      }
      if (0xffffffffffffffe < (ulong)(lVar15 >> 3)) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 == 0) {
        pvVar25 = (void *)0x0;
      }
      else {
        if (uVar9 >> 0x3d != 0) goto LAB_00b79a88;
        plVar21 = *(long **)(lVar3 + 0x30);
        if (plVar21 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar21 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        pvVar25 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar9 << 3,8);
      }
      memset((void *)((long)pvVar25 + uVar28 * 8),0,uVar19 * 8);
      if (0 < (long)sVar6) {
        memcpy(pvVar25,pvVar5,sVar6);
      }
      *(void **)(param_1 + 0xa0) = (void *)((long)pvVar25 + uVar9 * 8);
      *(void **)(param_1 + 0x90) = pvVar25;
      *(void **)(param_1 + 0x98) = (void *)((long)pvVar25 + uVar26 * 8);
      if (pvVar5 != (void *)0x0) {
        plVar21 = *(long **)(lVar3 + 0x30);
        if (plVar21 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar21 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar26 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar26 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,pvVar5,0,8);
        }
        else {
          FUN_00c48fe8(plVar21,pvVar5,0,8);
        }
      }
    }
    else {
      pvVar5 = pvVar25;
      if (uVar19 != 0) {
        pvVar5 = (void *)((long)pvVar25 + uVar19 * 8);
        memset(pvVar25,0,uVar19 * 8);
      }
      *(void **)(param_1 + 0x98) = pvVar5;
    }
  }
  else if (uVar28 != uVar26) {
    *(void **)(param_1 + 0x98) = (void *)((long)pvVar5 + uVar26 * 8);
  }
  pvVar5 = *(void **)(param_1 + 0xa8);
  pvVar25 = *(void **)(param_1 + 0xb0);
  sVar6 = (long)pvVar25 - (long)pvVar5;
  uVar26 = (ulong)*(int *)(lVar8 + -0x18);
  uVar28 = (long)sVar6 >> 3;
  if (uVar28 < uVar26) {
    uVar19 = uVar26 - uVar28;
    if ((ulong)(*(long *)(param_1 + 0xb8) - (long)pvVar25 >> 3) < uVar19) {
      if (*(int *)(lVar8 + -0x18) < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar15 = *(long *)(param_1 + 0xb8) - (long)pvVar5;
      uVar14 = lVar15 >> 2;
      uVar9 = uVar26;
      if (uVar26 <= uVar14) {
        uVar9 = uVar14;
      }
      if (0xffffffffffffffe < (ulong)(lVar15 >> 3)) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 == 0) {
        pvVar25 = (void *)0x0;
      }
      else {
        if (uVar9 >> 0x3d != 0) goto LAB_00b79a88;
        plVar21 = *(long **)(lVar3 + 0x30);
        if (plVar21 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar21 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        pvVar25 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar9 << 3,8);
      }
      memset((void *)((long)pvVar25 + uVar28 * 8),0,uVar19 * 8);
      if (0 < (long)sVar6) {
        memcpy(pvVar25,pvVar5,sVar6);
      }
      *(void **)(param_1 + 0xa8) = pvVar25;
      *(void **)(param_1 + 0xb0) = (void *)((long)pvVar25 + uVar26 * 8);
      *(void **)(param_1 + 0xb8) = (void *)((long)pvVar25 + uVar9 * 8);
      if (pvVar5 != (void *)0x0) {
        plVar21 = *(long **)(lVar3 + 0x30);
        if (plVar21 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar21 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar26 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar26 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,pvVar5,0,8);
        }
        else {
          FUN_00c48fe8(plVar21,pvVar5,0,8);
        }
      }
    }
    else {
      pvVar5 = pvVar25;
      if (uVar19 != 0) {
        pvVar5 = (void *)((long)pvVar25 + uVar19 * 8);
        memset(pvVar25,0,uVar19 * 8);
      }
      *(void **)(param_1 + 0xb0) = pvVar5;
    }
  }
  else if (uVar28 != uVar26) {
    *(void **)(param_1 + 0xb0) = (void *)((long)pvVar5 + uVar26 * 8);
  }
  pvVar5 = *(void **)(param_1 + 0xc0);
  pvVar25 = *(void **)(param_1 + 200);
  sVar6 = (long)pvVar25 - (long)pvVar5;
  uVar26 = (ulong)*(int *)(lVar8 + -0x14);
  uVar28 = (long)sVar6 >> 3;
  if (uVar28 < uVar26) {
    uVar19 = uVar26 - uVar28;
    if ((ulong)(*(long *)(param_1 + 0xd0) - (long)pvVar25 >> 3) < uVar19) {
      if (*(int *)(lVar8 + -0x14) < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar15 = *(long *)(param_1 + 0xd0) - (long)pvVar5;
      uVar14 = lVar15 >> 2;
      uVar9 = uVar26;
      if (uVar26 <= uVar14) {
        uVar9 = uVar14;
      }
      if (0xffffffffffffffe < (ulong)(lVar15 >> 3)) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 == 0) {
        pvVar25 = (void *)0x0;
      }
      else {
        if (uVar9 >> 0x3d != 0) goto LAB_00b79a88;
        plVar21 = *(long **)(lVar3 + 0x30);
        if (plVar21 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar21 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        pvVar25 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar9 << 3,8);
      }
      memset((void *)((long)pvVar25 + uVar28 * 8),0,uVar19 * 8);
      if (0 < (long)sVar6) {
        memcpy(pvVar25,pvVar5,sVar6);
      }
      *(void **)(param_1 + 0xc0) = pvVar25;
      *(void **)(param_1 + 200) = (void *)((long)pvVar25 + uVar26 * 8);
      *(void **)(param_1 + 0xd0) = (void *)((long)pvVar25 + uVar9 * 8);
      if (pvVar5 != (void *)0x0) {
        plVar21 = *(long **)(lVar3 + 0x30);
        if (plVar21 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar21 = DAT_04859430;
          *(long **)(lVar3 + 0x30) = DAT_04859430;
        }
        uVar26 = (**(code **)(*plVar21 + 0xf8))(plVar21);
        if (((uVar26 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,pvVar5,0,8);
        }
        else {
          FUN_00c48fe8(plVar21,pvVar5,0,8);
        }
      }
    }
    else {
      pvVar5 = pvVar25;
      if (uVar19 != 0) {
        pvVar5 = (void *)((long)pvVar25 + uVar19 * 8);
        memset(pvVar25,0,uVar19 * 8);
      }
      *(void **)(param_1 + 200) = pvVar5;
    }
  }
  else if (uVar28 != uVar26) {
    *(void **)(param_1 + 200) = (void *)((long)pvVar5 + uVar26 * 8);
  }
  pvVar5 = *(void **)(param_1 + 0xd8);
  pvVar25 = *(void **)(param_1 + 0xe0);
  sVar6 = (long)pvVar25 - (long)pvVar5;
  uVar26 = (ulong)*(int *)(lVar8 + -0x10);
  uVar28 = (long)sVar6 >> 3;
  if (uVar26 <= uVar28) {
    if (uVar28 != uVar26) {
      *(void **)(param_1 + 0xe0) = (void *)((long)pvVar5 + uVar26 * 8);
    }
    goto LAB_00b7978c;
  }
  uVar19 = uVar26 - uVar28;
  if (uVar19 <= (ulong)(*(long *)(param_1 + 0xe8) - (long)pvVar25 >> 3)) {
    pvVar5 = pvVar25;
    if (uVar19 != 0) {
      pvVar5 = (void *)((long)pvVar25 + uVar19 * 8);
      memset(pvVar25,0,uVar19 * 8);
    }
    *(void **)(param_1 + 0xe0) = pvVar5;
    goto LAB_00b7978c;
  }
  if (*(int *)(lVar8 + -0x10) < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar15 = *(long *)(param_1 + 0xe8) - (long)pvVar5;
  uVar14 = lVar15 >> 2;
  uVar9 = uVar26;
  if (uVar26 <= uVar14) {
    uVar9 = uVar14;
  }
  if (0xffffffffffffffe < (ulong)(lVar15 >> 3)) {
    uVar9 = 0x1fffffffffffffff;
  }
  if (uVar9 == 0) {
    pvVar25 = (void *)0x0;
  }
  else {
    if (uVar9 >> 0x3d != 0) goto LAB_00b79a88;
    plVar21 = *(long **)(lVar3 + 0x30);
    if (plVar21 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar21 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    pvVar25 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar9 << 3,8);
  }
  memset((void *)((long)pvVar25 + uVar28 * 8),0,uVar19 * 8);
  if (0 < (long)sVar6) {
    memcpy(pvVar25,pvVar5,sVar6);
  }
  *(void **)(param_1 + 0xd8) = pvVar25;
  *(void **)(param_1 + 0xe0) = (void *)((long)pvVar25 + uVar26 * 8);
  *(void **)(param_1 + 0xe8) = (void *)((long)pvVar25 + uVar9 * 8);
  if (pvVar5 != (void *)0x0) {
    plVar21 = *(long **)(lVar3 + 0x30);
    if (plVar21 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar21 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    uVar26 = (**(code **)(*plVar21 + 0xf8))(plVar21);
    if (((uVar26 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar21 + 0x18))(plVar21,pvVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar21,pvVar5,0,8);
    }
  }
LAB_00b7978c:
  *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + -0x1c;
  return;
LAB_00b78500:
  if (uVar9 < 2) {
    uVar28 = uVar29 & uVar28;
  }
  else if (uVar19 <= uVar28) {
    uVar14 = 0;
    if (uVar19 != 0) {
      uVar14 = uVar28 / uVar19;
    }
    uVar28 = uVar28 - uVar14 * uVar19;
  }
  plVar24 = *(long **)(lVar18 + uVar28 * 8);
  do {
    plVar17 = plVar24;
    plVar24 = (long *)*plVar17;
  } while ((long *)*plVar17 != plVar21);
  if (plVar17 != (long *)(param_1 + 0x100)) {
    uVar14 = plVar17[1];
    if (uVar9 < 2) {
      uVar14 = uVar14 & uVar29;
    }
    else if (uVar19 <= uVar14) {
      uVar11 = 0;
      if (uVar19 != 0) {
        uVar11 = uVar14 / uVar19;
      }
      uVar14 = uVar14 - uVar11 * uVar19;
    }
    if (uVar14 == uVar28) goto LAB_00b785a8;
  }
  if (*plVar21 != 0) {
    uVar14 = *(ulong *)(*plVar21 + 8);
    if (uVar9 < 2) {
      uVar14 = uVar14 & uVar29;
    }
    else if (uVar19 <= uVar14) {
      uVar11 = 0;
      if (uVar19 != 0) {
        uVar11 = uVar14 / uVar19;
      }
      uVar14 = uVar14 - uVar11 * uVar19;
    }
    if (uVar14 == uVar28) goto LAB_00b785a8;
  }
  *(undefined8 *)(lVar18 + uVar28 * 8) = 0;
LAB_00b785a8:
  lVar15 = *plVar21;
  if (lVar15 != 0) {
    uVar14 = *(ulong *)(lVar15 + 8);
    if (uVar9 < 2) {
      uVar14 = uVar14 & uVar29;
    }
    else if (uVar19 <= uVar14) {
      uVar9 = 0;
      if (uVar19 != 0) {
        uVar9 = uVar14 / uVar19;
      }
      uVar14 = uVar14 - uVar9 * uVar19;
    }
    if (uVar14 != uVar28) {
      *(long **)(*(long *)(param_1 + 0xf0) + uVar14 * 8) = plVar17;
      lVar15 = *plVar21;
    }
  }
  *plVar17 = lVar15;
  *plVar21 = 0;
  *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + -1;
  plVar24 = *(long **)(lVar3 + 0x30);
  if (plVar24 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar24 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  uVar28 = (**(code **)(*plVar24 + 0xf8))(plVar24);
  if (((uVar28 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
    (**(code **)(*plVar24 + 0x18))(plVar24,plVar21,0,8);
  }
  else {
    FUN_00c48fe8(plVar24,plVar21,0,8);
  }
  lVar15 = *(long *)(param_1 + 0x170);
  lVar16 = *(long *)(param_1 + 0x178);
LAB_00b784ec:
  uVar26 = uVar26 + 1;
  if ((ulong)(lVar16 - lVar15 >> 3) <= uVar26) goto LAB_00b786e8;
  goto LAB_00b783bc;
LAB_00b78830:
  if (uVar9 < 2) {
    uVar28 = uVar28 & uVar29;
  }
  else if (uVar19 <= uVar28) {
    uVar14 = 0;
    if (uVar19 != 0) {
      uVar14 = uVar28 / uVar19;
    }
    uVar28 = uVar28 - uVar14 * uVar19;
  }
  plVar24 = *(long **)(lVar15 + uVar28 * 8);
  do {
    plVar17 = plVar24;
    plVar24 = (long *)*plVar17;
  } while ((long *)*plVar17 != plVar21);
  if (plVar17 != (long *)(param_1 + 0x128)) {
    uVar14 = plVar17[1];
    if (uVar9 < 2) {
      uVar14 = uVar14 & uVar29;
    }
    else if (uVar19 <= uVar14) {
      uVar11 = 0;
      if (uVar19 != 0) {
        uVar11 = uVar14 / uVar19;
      }
      uVar14 = uVar14 - uVar11 * uVar19;
    }
    if (uVar14 == uVar28) goto LAB_00b788d4;
  }
  if (*plVar21 != 0) {
    uVar14 = *(ulong *)(*plVar21 + 8);
    if (uVar9 < 2) {
      uVar14 = uVar14 & uVar29;
    }
    else if (uVar19 <= uVar14) {
      uVar11 = 0;
      if (uVar19 != 0) {
        uVar11 = uVar14 / uVar19;
      }
      uVar14 = uVar14 - uVar11 * uVar19;
    }
    if (uVar14 == uVar28) goto LAB_00b788d4;
  }
  *(undefined8 *)(lVar15 + uVar28 * 8) = 0;
LAB_00b788d4:
  lVar15 = *plVar21;
  if (lVar15 != 0) {
    uVar14 = *(ulong *)(lVar15 + 8);
    if (uVar9 < 2) {
      uVar14 = uVar14 & uVar29;
    }
    else if (uVar19 <= uVar14) {
      uVar9 = 0;
      if (uVar19 != 0) {
        uVar9 = uVar14 / uVar19;
      }
      uVar14 = uVar14 - uVar9 * uVar19;
    }
    if (uVar14 != uVar28) {
      *(long **)(*(long *)(param_1 + 0x118) + uVar14 * 8) = plVar17;
      lVar15 = *plVar21;
    }
  }
  *plVar17 = lVar15;
  *plVar21 = 0;
  *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + -1;
  plVar24 = *(long **)(lVar3 + 0x30);
  if (plVar24 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar24 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  uVar28 = (**(code **)(*plVar24 + 0xf8))(plVar24);
  if (((uVar28 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
    (**(code **)(*plVar24 + 0x18))(plVar24,plVar21,0,8);
  }
  else {
    FUN_00c48fe8(plVar24,plVar21,0,8);
  }
LAB_00b78980:
  lVar15 = *(long *)(param_1 + 0x188);
  uVar26 = uVar26 + 1;
  if ((ulong)(*(long *)(param_1 + 400) - lVar15 >> 3) <= uVar26) goto LAB_00b78a24;
  goto LAB_00b78708;
}


