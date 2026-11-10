/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e68f0; name: FUN_011e68f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011e68f0(undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16],long param_6,ulong *param_7,
                 uint param_8,int param_9)

{
  ulong *puVar1;
  char *pcVar2;
  long *plVar3;
  char *pcVar4;
  int iVar5;
  ulong uVar6;
  void *__src;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  uint *puVar14;
  long *plVar15;
  ushort *puVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined4 uVar23;
  ulong uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  char *local_e0;
  long *local_98;
  ulong local_90;
  ulong uStack_88;
  long local_80;
  long *local_78;
  
  uVar20 = param_7[1];
  uVar21 = *(undefined8 *)(param_6 + 0x30);
  FUN_011e79d8(&local_98,param_6,uVar20,param_9);
  plVar15 = local_98;
  puVar1 = (ulong *)PTR_DAT_047d8b70;
  if (local_98 != (long *)0x0) {
    puVar1 = (ulong *)(local_98 + 6);
  }
  local_90 = *puVar1;
  puVar1 = (ulong *)PTR_PTR_047d4508;
  if (local_98 != (long *)0x0) {
    puVar1 = (ulong *)(local_98 + 7);
  }
  uStack_88 = *puVar1;
  if (local_98 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = local_98[8];
  }
  local_78 = (long *)0x0;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))(local_98);
  }
  local_78 = plVar15;
  uVar6 = FUN_00d4e220(uVar21,&local_90,0);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if ((uVar6 & 0xff) == 0) {
    return;
  }
  *param_7 = uVar6;
  if (-1 < param_9) {
    param_7[0xb] = param_2._8_8_;
    param_7[10] = param_2._0_8_;
    param_7[0xd] = param_3._8_8_;
    param_7[0xc] = param_3._0_8_;
    param_7[0xf] = param_4._8_8_;
    param_7[0xe] = param_4._0_8_;
    param_7[0x11] = param_5._8_8_;
    param_7[0x10] = param_5._0_8_;
    if ((char)param_7[8] == '\0') {
      *(undefined1 *)(param_7 + 8) = 1;
    }
  }
  if ((param_8 & 1) == 0) {
    if (*(char *)(uVar20 + 0x70) != '\0') {
      *(undefined1 *)(param_7 + 0x12) = 1;
      __src = (void *)FUN_00d4a9b4(*(undefined8 *)(param_6 + 0x30),param_7);
      memcpy(param_7 + 2,__src,0x30);
    }
LAB_011e6a04:
    local_e0 = (char *)0x0;
  }
  else {
    plVar15 = *(long **)(param_6 + 0x60);
    if (plVar15 == (long *)0x0) {
LAB_011e7438:
      if (*(char *)(uVar20 + 0x70) == '\0') goto LAB_011e6a04;
      *(undefined1 *)(param_7 + 0x12) = 1;
    }
    else {
      pcVar2 = (char *)*plVar15;
      if (pcVar2 == (char *)plVar15[1]) goto LAB_011e7438;
      iVar5 = (int)(uVar6 >> 0x20);
      if (*pcVar2 == '\0') {
        local_e0 = (char *)0x0;
        pcVar4 = local_e0;
      }
      else {
        pcVar4 = pcVar2;
        if (*(int *)(pcVar2 + 4) != iVar5) {
          pcVar4 = (char *)0x0;
        }
      }
      while( true ) {
        local_e0 = pcVar4;
        pcVar2 = pcVar2 + 0x110;
        if (pcVar2 == (char *)plVar15[1]) break;
        pcVar4 = local_e0;
        if ((*pcVar2 != '\0') && (pcVar4 = pcVar2, *(int *)(pcVar2 + 4) != iVar5)) {
          pcVar4 = local_e0;
        }
      }
      if (*(char *)(uVar20 + 0x70) == '\0') goto LAB_011e6a08;
      *(undefined1 *)(param_7 + 0x12) = 1;
      if (local_e0 != (char *)0x0) {
        memcpy(param_7 + 2,(void *)(*(long *)(local_e0 + 8) + 0x40),0x30);
        goto LAB_011e6a08;
      }
    }
    uVar19 = _UNK_03cabe58;
    uVar18 = _DAT_03cabe50;
    uVar24 = _UNK_03caa988;
    uVar6 = _DAT_03caa980;
    local_e0 = (char *)0x0;
    param_7[6] = 0;
    param_7[7] = 0;
    param_7[3] = uVar24;
    param_7[2] = uVar6;
    param_7[5] = uVar19;
    param_7[4] = uVar18;
  }
LAB_011e6a08:
  plVar15 = *(long **)(uVar20 + 0x80);
  plVar3 = *(long **)(uVar20 + 0x88);
  if (plVar15 != plVar3) {
    plVar7 = plVar3;
    plVar22 = plVar15;
    do {
      local_90 = local_90 & 0xffffffff00000000;
      lVar10 = *plVar22;
      plVar17 = plVar15;
      if ((plVar15 != plVar7) && (*plVar15 != lVar10)) {
        do {
          plVar17 = plVar17 + 4;
          if (plVar7 == plVar17) {
            plVar17 = plVar7;
            goto LAB_011e6a78;
          }
        } while (*plVar17 != lVar10);
      }
LAB_011e6a78:
      uVar9 = (uint)((ulong)((long)plVar17 - (long)plVar15) >> 5);
      if (plVar7 == plVar17) {
        uVar9 = 0xffffffff;
      }
      if ((param_8 & 1) == 0) {
        uVar6 = FUN_00d4a2a4(*(undefined8 *)(param_6 + 0x30),param_7,plVar22,&local_90);
        if ((uVar6 & 1) == 0) {
          uVar23 = 0;
          if (-1 < (int)uVar9) {
            piVar13 = *(int **)(uVar20 + 0x78);
            uVar23 = 0;
            puVar14 = (uint *)((long)piVar13 +
                              (ulong)*(ushort *)((long)piVar13 + (10 - (long)*piVar13)));
            puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
            if (uVar9 < *puVar14) {
              puVar14 = puVar14 + (ulong)uVar9 + 1;
              piVar13 = (int *)((long)puVar14 + (ulong)*puVar14);
              puVar16 = (ushort *)((long)piVar13 - (long)*piVar13);
              if (*puVar16 < 9) {
                uVar23 = 0;
                if (6 < *puVar16) goto LAB_011e791c;
              }
              else if ((ulong)puVar16[4] == 0) {
LAB_011e791c:
                uVar23 = 0;
                if ((ulong)puVar16[3] != 0) {
                  uVar23 = *(undefined4 *)((long)piVar13 + (ulong)puVar16[3]);
                }
              }
              else {
                puVar14 = (uint *)((long)piVar13 + (ulong)puVar16[4]);
                uVar23 = FUN_00c72bf0(param_1,0,(long)puVar14 + (ulong)*puVar14);
              }
            }
          }
          local_90 = CONCAT44(local_90._4_4_,uVar23);
        }
      }
      else if ((local_e0 != (char *)0x0) && ((param_8 & 1) != 0)) {
        lVar11 = *(long *)(local_e0 + 8);
        plVar15 = *(long **)(lVar11 + 0x80);
        plVar7 = *(long **)(lVar11 + 0x88);
        plVar17 = plVar15;
        if ((plVar15 != plVar7) && (*plVar15 != lVar10)) {
          do {
            plVar17 = plVar17 + 4;
            if (plVar7 == plVar17) {
              plVar17 = plVar7;
              goto LAB_011e7598;
            }
          } while (*plVar17 != lVar10);
        }
LAB_011e7598:
        uVar23 = 0;
        uVar9 = (uint)((ulong)((long)plVar17 - (long)plVar15) >> 5);
        if (plVar7 == plVar17) {
          uVar9 = 0xffffffff;
        }
        if (-1 < (int)uVar9) {
          piVar13 = *(int **)(lVar11 + 0x78);
          uVar23 = 0;
          puVar14 = (uint *)((long)piVar13 +
                            (ulong)*(ushort *)((long)piVar13 + (10 - (long)*piVar13)));
          puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
          if (uVar9 < *puVar14) {
            puVar14 = puVar14 + (ulong)uVar9 + 1;
            piVar13 = (int *)((long)puVar14 + (ulong)*puVar14);
            puVar16 = (ushort *)((long)piVar13 - (long)*piVar13);
            if (*puVar16 < 9) {
              uVar23 = 0;
              if (6 < *puVar16) goto LAB_011e7998;
            }
            else if ((ulong)puVar16[4] == 0) {
LAB_011e7998:
              uVar23 = 0;
              if ((ulong)puVar16[3] != 0) {
                uVar23 = *(undefined4 *)((long)piVar13 + (ulong)puVar16[3]);
              }
            }
            else {
              puVar14 = (uint *)((long)piVar13 + (ulong)puVar16[4]);
              uVar23 = FUN_00c72bf0(param_1,0,(long)puVar14 + (ulong)*puVar14);
            }
          }
        }
        local_90 = CONCAT44(local_90._4_4_,uVar23);
      }
      plVar15 = (long *)param_7[0x14];
      if (plVar15 < (long *)param_7[0x15]) {
        uVar6 = param_7[0x16];
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 != 0) {
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_011e78dc;
          *(ulong *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar6;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        }
        *plVar15 = *plVar22;
        plVar15[1] = plVar22[1];
        plVar15[2] = plVar22[2];
        plVar7 = (long *)plVar22[3];
        plVar15[3] = (long)plVar7;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))();
        }
        *(undefined4 *)(plVar15 + 4) = (undefined4)local_90;
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        param_7[0x14] = (ulong)(plVar15 + 5);
      }
      else {
        uVar6 = param_7[0x17];
        lVar10 = (long)((long)plVar15 - param_7[0x13]) >> 3;
        if (0x7ffffffffffffffe < uVar6) {
          uVar6 = 0x7fffffffffffffff;
        }
        uVar24 = lVar10 * -0x3333333333333333 + 1;
        if (uVar6 < uVar24) goto LAB_011e78e0;
        lVar11 = (long)((long)param_7[0x15] - param_7[0x13]) >> 3;
        uVar18 = lVar11 * -0x6666666666666666;
        if (uVar24 <= uVar18) {
          uVar24 = uVar18;
        }
        if (uVar6 >> 1 <= (ulong)(lVar11 * -0x3333333333333333)) {
          uVar24 = uVar6;
        }
        if (uVar24 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = (**(code **)(*(long *)param_7[0x16] + 0x10))
                             ((long *)param_7[0x16],uVar24 * 0x28,8);
          if (lVar11 == 0) {
            (**(code **)(*(long *)param_7[0x16] + 0xe8))();
          }
        }
        uVar6 = param_7[0x16];
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 != 0) {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_011e78dc;
          *(ulong *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar6;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        }
        plVar7 = (long *)(lVar11 + lVar10 * 8);
        *plVar7 = *plVar22;
        lVar12 = lVar11 + lVar10 * 8;
        *(long *)(lVar12 + 8) = plVar22[1];
        *(long *)(lVar12 + 0x10) = plVar22[2];
        plVar15 = (long *)plVar22[3];
        *(long **)(lVar12 + 0x18) = plVar15;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x18))();
        }
        *(undefined4 *)(lVar11 + lVar10 * 8 + 0x20) = (undefined4)local_90;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        uVar6 = param_7[0x13];
        uVar18 = param_7[0x14];
        if (uVar18 == uVar6) {
          plVar15 = plVar7;
          uVar18 = uVar6;
        }
        else {
          lVar10 = 0;
          do {
            uVar19 = param_7[0x16];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar8 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar8 != 0) {
              if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_011e78dc;
              *(ulong *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar19;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            }
            lVar12 = uVar18 + lVar10;
            *(undefined8 *)((long)plVar7 + lVar10 + -0x28) = *(undefined8 *)(lVar12 + -0x28);
            *(undefined8 *)((long)plVar7 + lVar10 + -0x20) = *(undefined8 *)(lVar12 + -0x20);
            *(undefined8 *)((long)plVar7 + lVar10 + -0x18) = *(undefined8 *)(lVar12 + -0x18);
            uVar21 = *(undefined8 *)(lVar12 + -0x10);
            *(undefined8 *)(lVar12 + -0x10) = 0;
            *(undefined8 *)((long)plVar7 + lVar10 + -0x10) = uVar21;
            *(undefined4 *)((long)plVar7 + lVar10 + -8) = *(undefined4 *)(lVar12 + -8);
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            }
            lVar10 = lVar10 + -0x28;
          } while (uVar6 - uVar18 != lVar10);
          uVar6 = param_7[0x14];
          plVar15 = (long *)((long)plVar7 + lVar10);
          uVar18 = param_7[0x13];
        }
        uVar19 = param_7[0x15];
        param_7[0x13] = (ulong)plVar15;
        param_7[0x14] = (ulong)(plVar7 + 5);
        param_7[0x15] = lVar11 + uVar24 * 0x28;
        if (uVar6 != uVar18) {
          if (*(long **)(uVar6 - 0x10) != (long *)0x0) {
            (**(code **)(**(long **)(uVar6 - 0x10) + 0x20))();
          }
          if (uVar6 - 0x28 != uVar18) {
            if (*(long **)(uVar6 - 0x38) != (long *)0x0) {
              (**(code **)(**(long **)(uVar6 - 0x38) + 0x20))();
            }
            if (uVar6 - 0x50 != uVar18) {
              if (*(long **)(uVar6 - 0x60) != (long *)0x0) {
                (**(code **)(**(long **)(uVar6 - 0x60) + 0x20))();
              }
              if (uVar6 - 0x78 != uVar18) {
                do {
                  if (*(long **)(uVar6 - 0x88) != (long *)0x0) {
                    (**(code **)(**(long **)(uVar6 - 0x88) + 0x20))();
                  }
                  uVar6 = uVar6 - 0x28;
                } while (uVar18 + 0x78 != uVar6);
              }
            }
          }
        }
        if (uVar18 != 0) {
          plVar15 = (long *)param_7[0x16];
          uVar6 = (**(code **)(*plVar15 + 0xf8))(plVar15);
          if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar15 + 0x18))(plVar15,uVar18,uVar19 - uVar18,8);
          }
          else {
            FUN_00c48fe8(plVar15,uVar18,uVar19 - uVar18,8);
          }
        }
      }
      plVar22 = plVar22 + 4;
      if (plVar22 == plVar3) break;
      plVar15 = *(long **)(uVar20 + 0x80);
      plVar7 = *(long **)(uVar20 + 0x88);
    } while( true );
  }
  plVar15 = *(long **)(uVar20 + 0xb8);
  plVar3 = *(long **)(uVar20 + 0xc0);
  if (plVar15 == plVar3) {
    return;
  }
  plVar22 = plVar15;
  do {
    local_90 = 0;
    uStack_88 = 0;
    plVar17 = *(long **)(uVar20 + 0xc0);
    lVar10 = *plVar22;
    plVar7 = plVar15;
    if ((plVar15 != plVar17) && (*plVar15 != lVar10)) {
      do {
        plVar7 = plVar7 + 4;
        if (plVar17 == plVar7) {
          plVar7 = plVar17;
          goto LAB_011e6e78;
        }
      } while (*plVar7 != lVar10);
    }
LAB_011e6e78:
    uVar9 = (uint)((ulong)((long)plVar7 - (long)plVar15) >> 5);
    if (plVar17 == plVar7) {
      uVar9 = 0xffffffff;
    }
    if ((param_8 & 1) == 0) {
      uVar6 = FUN_00c73100(*(undefined8 *)(param_6 + 0x30),param_7,plVar22,&local_90);
      if ((uVar6 & 1) == 0) {
        uVar6 = 0;
        uVar24 = 0;
        if (-1 < (int)uVar9) {
          piVar13 = *(int **)(uVar20 + 0x78);
          uVar6 = 0;
          uVar24 = 0;
          puVar14 = (uint *)((long)piVar13 +
                            (ulong)*(ushort *)((long)piVar13 + (0xc - (long)*piVar13)));
          puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
          if (uVar9 < *puVar14) {
            puVar14 = puVar14 + (ulong)uVar9 + 1;
            piVar13 = (int *)((long)puVar14 + (ulong)*puVar14);
            puVar16 = (ushort *)((long)piVar13 - (long)*piVar13);
            if ((*puVar16 < 9) || ((ulong)puVar16[4] == 0)) {
              uVar6 = *(ulong *)((long)piVar13 + (ulong)puVar16[3]);
              uVar24 = ((ulong *)((long)piVar13 + (ulong)puVar16[3]))[1];
            }
            else {
              puVar14 = (uint *)((long)piVar13 + (ulong)puVar16[4]);
              uVar25 = 0;
              uVar26 = 0;
              uVar27 = 0;
              uVar23 = FUN_00c72aa0(param_1,(long)puVar14 + (ulong)*puVar14);
              uVar6 = CONCAT44(uVar25,uVar23);
              uVar24 = CONCAT44(uVar27,uVar26);
            }
          }
        }
        local_90 = uVar6;
        uStack_88 = uVar24;
      }
    }
    else if ((local_e0 != (char *)0x0) && ((param_8 & 1) != 0)) {
      lVar11 = *(long *)(local_e0 + 8);
      plVar15 = *(long **)(lVar11 + 0xb8);
      plVar7 = *(long **)(lVar11 + 0xc0);
      plVar17 = plVar15;
      if ((plVar15 != plVar7) && (*plVar15 != lVar10)) {
        do {
          plVar17 = plVar17 + 4;
          if (plVar7 == plVar17) {
            plVar17 = plVar7;
            goto LAB_011e75f4;
          }
        } while (*plVar17 != lVar10);
      }
LAB_011e75f4:
      uVar9 = (uint)((ulong)((long)plVar17 - (long)plVar15) >> 5);
      if (plVar7 == plVar17) {
        uVar9 = 0xffffffff;
      }
      if ((int)uVar9 < 0) {
        local_90 = 0;
        uStack_88 = 0;
      }
      else {
        piVar13 = *(int **)(lVar11 + 0x78);
        uVar6 = 0;
        uVar24 = 0;
        puVar14 = (uint *)((long)piVar13 +
                          (ulong)*(ushort *)((long)piVar13 + (0xc - (long)*piVar13)));
        puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
        if (uVar9 < *puVar14) {
          puVar14 = puVar14 + (ulong)uVar9 + 1;
          piVar13 = (int *)((long)puVar14 + (ulong)*puVar14);
          puVar16 = (ushort *)((long)piVar13 - (long)*piVar13);
          if ((*puVar16 < 9) || ((ulong)puVar16[4] == 0)) {
            uVar6 = *(ulong *)((long)piVar13 + (ulong)puVar16[3]);
            uVar24 = ((ulong *)((long)piVar13 + (ulong)puVar16[3]))[1];
          }
          else {
            puVar14 = (uint *)((long)piVar13 + (ulong)puVar16[4]);
            uVar25 = 0;
            uVar26 = 0;
            uVar27 = 0;
            uVar23 = FUN_00c72aa0(param_1,(long)puVar14 + (ulong)*puVar14);
            uVar6 = CONCAT44(uVar25,uVar23);
            uVar24 = CONCAT44(uVar27,uVar26);
          }
        }
        local_90 = uVar6;
        uStack_88 = uVar24;
      }
    }
    plVar15 = (long *)param_7[0x1b];
    if (plVar15 < (long *)param_7[0x1c]) {
      uVar6 = param_7[0x1d];
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 != 0) {
        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_011e78dc;
        *(ulong *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar6;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      }
      *plVar15 = *plVar22;
      plVar15[1] = plVar22[1];
      plVar15[2] = plVar22[2];
      plVar7 = (long *)plVar22[3];
      plVar15[3] = (long)plVar7;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))();
      }
      plVar15[4] = local_90;
      plVar15[5] = uStack_88;
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      param_7[0x1b] = (ulong)(plVar15 + 6);
    }
    else {
      uVar6 = param_7[0x1e];
      lVar10 = (long)((long)plVar15 - param_7[0x1a]) >> 4;
      if (0x7ffffffffffffffe < uVar6) {
        uVar6 = 0x7fffffffffffffff;
      }
      uVar24 = lVar10 * -0x5555555555555555 + 1;
      if (uVar6 < uVar24) {
LAB_011e78e0:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar11 = (long)((long)param_7[0x1c] - param_7[0x1a]) >> 4;
      uVar18 = lVar11 * 0x5555555555555556;
      if (uVar24 <= uVar18) {
        uVar24 = uVar18;
      }
      if (uVar6 >> 1 <= (ulong)(lVar11 * -0x5555555555555555)) {
        uVar24 = uVar6;
      }
      if (uVar24 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = (**(code **)(*(long *)param_7[0x1d] + 0x10))
                           ((long *)param_7[0x1d],uVar24 * 0x30,0x10);
        if (lVar11 == 0) {
          (**(code **)(*(long *)param_7[0x1d] + 0xe8))();
        }
      }
      uVar6 = param_7[0x1d];
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 != 0) {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_011e78dc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(ulong *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar6;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      }
      plVar7 = (long *)(lVar11 + lVar10 * 0x10);
      *plVar7 = *plVar22;
      lVar12 = lVar11 + lVar10 * 0x10;
      *(long *)(lVar12 + 8) = plVar22[1];
      *(long *)(lVar12 + 0x10) = plVar22[2];
      plVar15 = (long *)plVar22[3];
      *(long **)(lVar12 + 0x18) = plVar15;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x18))();
      }
      lVar10 = lVar11 + lVar10 * 0x10;
      *(ulong *)(lVar10 + 0x28) = uStack_88;
      *(ulong *)(lVar10 + 0x20) = local_90;
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      uVar6 = param_7[0x1a];
      uVar18 = param_7[0x1b];
      if (uVar18 == uVar6) {
        plVar15 = plVar7;
        uVar18 = uVar6;
      }
      else {
        lVar10 = 0;
        do {
          uVar19 = param_7[0x1d];
          if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar8 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar8 != 0) {
            if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_011e78dc;
            *(ulong *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar19;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          }
          lVar12 = uVar18 + lVar10;
          *(undefined8 *)((long)plVar7 + lVar10 + -0x30) = *(undefined8 *)(lVar12 + -0x30);
          *(undefined8 *)((long)plVar7 + lVar10 + -0x28) = *(undefined8 *)(lVar12 + -0x28);
          *(undefined8 *)((long)plVar7 + lVar10 + -0x20) = *(undefined8 *)(lVar12 + -0x20);
          uVar21 = *(undefined8 *)(lVar12 + -0x18);
          *(undefined8 *)(lVar12 + -0x18) = 0;
          *(undefined8 *)((long)plVar7 + lVar10 + -0x18) = uVar21;
          *(undefined8 *)((long)plVar7 + lVar10 + -8) = *(undefined8 *)(lVar12 + -8);
          *(undefined8 *)((long)plVar7 + lVar10 + -0x10) = *(undefined8 *)(lVar12 + -0x10);
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          }
          lVar10 = lVar10 + -0x30;
        } while (uVar6 - uVar18 != lVar10);
        uVar18 = param_7[0x1a];
        uVar6 = param_7[0x1b];
        plVar15 = (long *)((long)plVar7 + lVar10);
      }
      uVar19 = param_7[0x1c];
      param_7[0x1a] = (ulong)plVar15;
      param_7[0x1b] = (ulong)(plVar7 + 6);
      param_7[0x1c] = lVar11 + uVar24 * 0x30;
      if (uVar6 != uVar18) {
        if (*(long **)(uVar6 - 0x18) != (long *)0x0) {
          (**(code **)(**(long **)(uVar6 - 0x18) + 0x20))();
        }
        if (uVar6 - 0x30 != uVar18) {
          if (*(long **)(uVar6 - 0x48) != (long *)0x0) {
            (**(code **)(**(long **)(uVar6 - 0x48) + 0x20))();
          }
          if (uVar6 - 0x60 != uVar18) {
            do {
              if (*(long **)(uVar6 - 0x78) != (long *)0x0) {
                (**(code **)(**(long **)(uVar6 - 0x78) + 0x20))();
              }
              uVar6 = uVar6 - 0x30;
            } while (uVar18 + 0x60 != uVar6);
          }
        }
      }
      if (uVar18 != 0) {
        plVar15 = (long *)param_7[0x1d];
        uVar6 = (**(code **)(*plVar15 + 0xf8))(plVar15);
        if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar15 + 0x18))(plVar15,uVar18,uVar19 - uVar18,0x10);
        }
        else {
          FUN_00c48fe8(plVar15,uVar18,uVar19 - uVar18,0x10);
        }
      }
    }
    plVar22 = plVar22 + 4;
    if (plVar22 == plVar3) {
      return;
    }
    plVar15 = *(long **)(uVar20 + 0xb8);
  } while( true );
}


