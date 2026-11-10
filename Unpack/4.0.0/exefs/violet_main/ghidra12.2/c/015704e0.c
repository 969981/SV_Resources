/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015704e0; name: FUN_015704e0
 */


undefined4 FUN_015704e0(long param_1,long param_2,undefined8 *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 *puVar15;
  ulong *puVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  uint uVar28;
  undefined4 *puVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  long local_e0;
  ulong uStack_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  ulong local_a8;
  undefined1 local_a0 [16];
  ulong local_90;
  long local_88;
  ulong local_80;
  long *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  local_78 = (long *)0x0;
  uStack_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0x3f800000;
  local_90 = 0;
  if (*(long *)(param_2 + 8) != 0) {
    do {
      uVar12 = local_90;
      puVar1 = (ushort *)(*(long *)(param_2 + 0x10) + local_90 * 2);
      if (*(int *)((long)param_3 + 0xc) == 9) {
        bVar5 = *(byte *)(param_3 + 1);
        puVar16 = (ulong *)*param_3;
        if (bVar5 < 4) {
          if (bVar5 < 2) {
            uVar24 = (ulong)(byte)*puVar16;
          }
          else {
            uVar24 = (ulong)(ushort)*puVar16;
          }
        }
        else if (bVar5 < 8) {
          uVar24 = (ulong)(uint)*puVar16;
        }
        else {
          uVar24 = *puVar16;
        }
        bVar5 = *(byte *)((long)param_3 + 9);
        local_b8 = (undefined4 *)((long)puVar16 - uVar24);
        lVar22 = -(ulong)bVar5;
        local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,bVar5);
        if ((ulong)bVar5 < 4) {
          if (bVar5 < 2) {
            local_a8 = (ulong)*(byte *)((long)local_b8 + lVar22);
          }
          else {
            local_a8 = (ulong)*(ushort *)((long)local_b8 + lVar22);
          }
        }
        else if (bVar5 < 8) {
          local_a8 = (ulong)*(uint *)((long)local_b8 + lVar22);
        }
        else {
          local_a8 = *(ulong *)((long)local_b8 + lVar22);
        }
      }
      else {
        local_a8 = 0;
        local_b8 = &DAT_03d68b13;
        local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,1);
      }
      auVar31 = FUN_015712b8(&local_b8,*(undefined8 *)(*(long *)(param_2 + 0x28) + local_90 * 8));
      puVar16 = auVar31._0_8_;
      uVar6 = *puVar1;
      uVar24 = auVar31._8_8_ >> 8;
      iVar10 = auVar31._12_4_;
      uVar28 = auVar31._8_4_;
      bVar5 = auVar31[9];
      local_a0 = auVar31;
      if ((uVar6 & 0xf) == 0xd) {
        piVar11 = (int *)(**(code **)(*(long *)(param_2 + 0x18) +
                                     (long)((int)((uint)uVar6 << 0x10) >> 0x15) * 8))();
        if (*piVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("currentType->st == flatbuffers::ST_TABLE","CreateTable",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/framework2/fbs/converter.cpp"
                     ,0x4e);
        }
        if (((byte)*puVar1 >> 4 & 1) == 0) {
          uVar9 = FUN_015704e0(param_1,piVar11,local_a0);
          goto LAB_01570604;
        }
        if (iVar10 - 9U < 2) {
          uVar7 = uVar28 & 0xff;
          if (uVar7 < 4) {
            if (uVar7 < 2) {
              uVar12 = (ulong)(byte)*puVar16;
            }
            else {
              uVar12 = (ulong)(ushort)*puVar16;
            }
          }
          else if (uVar7 < 8) {
            uVar12 = (ulong)(uint)*puVar16;
          }
          else {
            uVar12 = *puVar16;
          }
          uVar24 = auVar31._8_8_ >> 8 & 0xff;
          lVar22 = -(ulong)bVar5;
          lVar14 = (long)puVar16 - uVar12;
          uVar28 = uVar28 >> 8 & 0xff;
          if ((uint)uVar24 < 4) {
            if (uVar28 < 2) {
              uVar30 = (ulong)*(byte *)(lVar14 + lVar22);
            }
            else {
              uVar30 = (ulong)*(ushort *)(lVar14 + lVar22);
            }
          }
          else if (uVar28 < 8) {
            uVar30 = (ulong)*(uint *)(lVar14 + lVar22);
          }
          else {
            uVar30 = *(ulong *)(lVar14 + lVar22);
          }
          local_b0 = (undefined4 *)0x0;
          local_a8 = 0;
          local_b8 = (undefined4 *)0x0;
          if (uVar30 != 0) {
            FUN_01575e54(&local_b8,uVar30);
            puVar29 = local_b0;
            memset(local_b0,0,uVar30 << 2);
            local_b0 = puVar29 + uVar30;
            pbVar17 = (byte *)(lVar14 + uVar30 * uVar24);
            bVar5 = *pbVar17;
            local_d0._8_8_ =
                 (ulong)(bVar5 >> 2) << 0x20 |
                 uVar24 | ((ulong)(uint)(1 << ((ulong)bVar5 & 3)) & 0xff) << 8;
            local_d0._0_8_ = lVar14;
            uVar9 = FUN_015704e0(param_1,piVar11,local_d0);
            *local_b8 = uVar9;
            if (uVar30 != 1) {
              lVar22 = (long)puVar16 + (uVar24 - uVar12);
              uVar12 = 1;
              do {
                bVar5 = pbVar17[uVar12];
                local_d0._8_8_ =
                     (ulong)(bVar5 >> 2) << 0x20 |
                     uVar24 | ((ulong)(uint)(1 << ((ulong)bVar5 & 3)) & 0xff) << 8;
                local_d0._0_8_ = lVar22;
                uVar9 = FUN_015704e0(param_1,piVar11,local_d0);
                local_b8[uVar12] = uVar9;
                uVar12 = uVar12 + 1;
                lVar22 = lVar22 + uVar24;
              } while (uVar30 != uVar12);
            }
          }
        }
        else {
          local_b8 = (undefined4 *)0x0;
          local_b0 = (undefined4 *)0x0;
          local_a8 = 0;
        }
        puVar29 = local_b8;
        uVar30 = (long)local_b0 - (long)local_b8;
        uVar12 = (long)uVar30 >> 2;
        FUN_0157190c(param_1,uVar12,4);
        uVar24 = uVar30;
        while (uVar24 != 0) {
          uVar12 = uVar12 - 1;
          iVar10 = puVar29[uVar12];
          if (*(ulong *)(param_1 + 0x48) < 4) {
            *(undefined8 *)(param_1 + 0x48) = 4;
          }
          lVar22 = *(long *)(param_1 + 0x30);
          uVar28 = -((*(int *)(param_1 + 0x20) - (int)lVar22) + *(int *)(param_1 + 0x28));
          uVar24 = (ulong)uVar28 & 3;
          if ((ulong)(lVar22 - *(long *)(param_1 + 0x38)) < uVar24) {
            FUN_0157184c(param_1,uVar24);
            puVar15 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar24);
            *(undefined1 **)(param_1 + 0x30) = puVar15;
LAB_01571280:
            *puVar15 = 0;
            if ((uVar24 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar24 != 2))
            {
              uVar19 = 2;
              do {
                *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar19) = 0;
                uVar19 = uVar19 + 1;
              } while (uVar24 != uVar19);
            }
          }
          else {
            puVar15 = (undefined1 *)(lVar22 - uVar24);
            *(undefined1 **)(param_1 + 0x30) = puVar15;
            if ((uVar28 & 3) != 0) goto LAB_01571280;
          }
          FUN_015713f8(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                *(int *)(param_1 + 0x28)) - iVar10) + 4);
          uVar24 = uVar12;
        }
        *(undefined1 *)(param_1 + 0x46) = 0;
        uVar9 = FUN_015713f8(param_1,uVar30 >> 2);
        puVar29 = (undefined4 *)FUN_01571500(&local_88,&local_90);
        *puVar29 = uVar9;
LAB_01570678:
        puVar29 = local_b8;
        if (local_b8 != (undefined4 *)0x0) {
          local_b0 = local_b8;
          lVar22 = tpidr_el0;
          plVar26 = *(long **)(lVar22 + 0x30);
          if (plVar26 == (long *)0x0) {
            if ((DAT_04859438 & 1) == 0) {
              iVar10 = __cxa_guard_acquire(&DAT_04859438);
              if (iVar10 != 0) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
            }
            plVar26 = DAT_04859430;
            *(long **)(lVar22 + 0x30) = DAT_04859430;
          }
          uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
          if ((uVar12 & 1) != 0) {
            lVar22 = FUN_00c4e600();
            if (0 < *(int *)(lVar22 + 0x12c8)) {
              FUN_00c48fe8(plVar26,puVar29,0,8);
              goto LAB_015705a8;
            }
          }
          (**(code **)(*plVar26 + 0x18))(plVar26,puVar29,0,8);
        }
      }
      else {
        if ((uVar6 & 0xf) != 0xc) {
          if ((uVar6 >> 4 & 1) != 0) {
            if (iVar10 - 9U < 2) {
              uVar7 = uVar28 & 0xff;
              if (uVar7 < 4) {
                if (uVar7 < 2) {
                  uVar30 = (ulong)(byte)*puVar16;
                }
                else {
                  uVar30 = (ulong)(ushort)*puVar16;
                }
              }
              else if (uVar7 < 8) {
                uVar30 = (ulong)(uint)*puVar16;
              }
              else {
                uVar30 = *puVar16;
              }
              lVar14 = (long)puVar16 - uVar30;
              lVar22 = -(ulong)bVar5;
              uVar28 = uVar28 >> 8 & 0xff;
              if ((auVar31._9_4_ & 0xff) < 4) {
                if (uVar28 < 2) {
                  uVar30 = (ulong)*(byte *)(lVar14 + lVar22);
                }
                else {
                  uVar30 = (ulong)*(ushort *)(lVar14 + lVar22);
                }
              }
              else if (uVar28 < 8) {
                uVar30 = (ulong)*(uint *)(lVar14 + lVar22);
              }
              else {
                uVar30 = *(ulong *)(lVar14 + lVar22);
              }
            }
            else {
              uVar30 = 0;
              uVar24 = 1;
              lVar14 = 0x3d68b14;
            }
            uVar13 = FUN_01572ddc(puVar1);
            FUN_0157190c(param_1,uVar30,uVar13);
            if (uVar30 != 0) {
              uVar20 = uVar24 & 0xff;
              puVar29 = (undefined4 *)(lVar14 + (uVar30 - 1) * uVar20);
              pbVar17 = (byte *)(lVar14 + uVar30 * (uVar20 + 1));
              uVar19 = uVar30 - 1;
              do {
                pbVar17 = pbVar17 + -1;
                if (uVar19 < uVar30) {
                  uVar18 = (ulong)(*pbVar17 >> 2) << 0x20;
                  uVar21 = ((ulong)(uint)(1 << ((ulong)*pbVar17 & 3)) & 0xff) << 8;
                  local_b8 = puVar29;
                  uVar23 = uVar20;
                }
                else {
                  uVar18 = 0;
                  local_b8 = (undefined4 *)0x0;
                  uVar21 = 0x100;
                  uVar23 = 1;
                }
                local_b0 = (undefined4 *)(uVar21 | uVar18 | uVar23);
                FUN_015731d8(0xffff,param_1,param_2,uVar12,&local_b8);
                puVar29 = (undefined4 *)((long)puVar29 - (uVar24 & 0xff));
                bVar8 = uVar19 != 0;
                uVar19 = uVar19 - 1;
              } while (bVar8);
            }
            *(undefined1 *)(param_1 + 0x46) = 0;
            uVar9 = FUN_015713f8(param_1,uVar30 & 0xffffffff);
            puVar29 = (undefined4 *)FUN_01571500(&local_88,&local_90);
            *puVar29 = uVar9;
          }
          goto LAB_015705a8;
        }
        if ((uVar6 >> 4 & 1) != 0) {
          if (iVar10 - 9U < 2) {
            uVar7 = uVar28 & 0xff;
            if (uVar7 < 4) {
              if (uVar7 < 2) {
                uVar12 = (ulong)(byte)*puVar16;
              }
              else {
                uVar12 = (ulong)(ushort)*puVar16;
              }
            }
            else if (uVar7 < 8) {
              uVar12 = (ulong)(uint)*puVar16;
            }
            else {
              uVar12 = *puVar16;
            }
            lVar22 = (long)puVar16 - uVar12;
            lVar14 = -(ulong)bVar5;
            uVar28 = uVar28 >> 8 & 0xff;
            if ((auVar31._9_4_ & 0xff) < 4) {
              if (uVar28 < 2) {
                uVar12 = (ulong)*(byte *)(lVar22 + lVar14);
              }
              else {
                uVar12 = (ulong)*(ushort *)(lVar22 + lVar14);
              }
            }
            else if (uVar28 < 8) {
              uVar12 = (ulong)*(uint *)(lVar22 + lVar14);
            }
            else {
              uVar12 = *(ulong *)(lVar22 + lVar14);
            }
          }
          else {
            uVar12 = 0;
            uVar24 = 1;
            lVar22 = 0x3d68b14;
          }
          FUN_01573840(&local_b8,uVar12);
          if (uVar12 != 0) {
            uVar24 = uVar24 & 0xff;
            lVar14 = lVar22 + uVar12 * uVar24;
            uVar30 = 0;
            do {
              bVar5 = *(byte *)(lVar14 + uVar30);
              uStack_d8 = (ulong)(bVar5 >> 2) << 0x20 |
                          uVar24 | ((ulong)(uint)(1 << ((ulong)bVar5 & 3)) & 0xff) << 8;
              local_e0 = lVar22;
              FUN_01571ef8(local_d0,&local_e0);
              uVar9 = FUN_01571da0(param_1,local_d0._0_8_,local_c0);
              local_b8[uVar30] = uVar9;
              uVar30 = uVar30 + 1;
              lVar22 = lVar22 + uVar24;
            } while (uVar12 != uVar30);
          }
          uVar9 = FUN_01575f30(param_1,local_b8,(long)local_b0 - (long)local_b8 >> 2);
          puVar29 = (undefined4 *)FUN_01571500(&local_88,&local_90);
          *puVar29 = uVar9;
          goto LAB_01570678;
        }
        FUN_01571ef8(&local_b8,local_a0);
        uVar9 = FUN_01571da0(param_1,local_b8,local_a8);
LAB_01570604:
        puVar29 = (undefined4 *)FUN_01571500(&local_88,&local_90);
        *puVar29 = uVar9;
      }
LAB_015705a8:
      local_90 = local_90 + 1;
    } while (local_90 < *(ulong *)(param_2 + 8));
  }
  iVar10 = *(int *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  local_a0._0_8_ = 0;
  if (*(long *)(param_2 + 8) != 0) {
    uVar28 = 4;
LAB_01570708:
    uVar13 = local_a0._0_8_;
    if (*(int *)((long)param_3 + 0xc) == 9) {
      bVar5 = *(byte *)(param_3 + 1);
      puVar16 = (ulong *)*param_3;
      if (bVar5 < 4) {
        if (bVar5 < 2) {
          uVar12 = (ulong)(byte)*puVar16;
        }
        else {
          uVar12 = (ulong)(ushort)*puVar16;
        }
      }
      else if (bVar5 < 8) {
        uVar12 = (ulong)(uint)*puVar16;
      }
      else {
        uVar12 = *puVar16;
      }
      bVar5 = *(byte *)((long)param_3 + 9);
      local_b8 = (undefined4 *)((long)puVar16 - uVar12);
      lVar22 = -(ulong)bVar5;
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,bVar5);
      if ((ulong)bVar5 < 4) {
        if (bVar5 < 2) {
          local_a8 = (ulong)*(byte *)((long)local_b8 + lVar22);
        }
        else {
          local_a8 = (ulong)*(ushort *)((long)local_b8 + lVar22);
        }
      }
      else if (bVar5 < 8) {
        local_a8 = (ulong)*(uint *)((long)local_b8 + lVar22);
      }
      else {
        local_a8 = *(ulong *)((long)local_b8 + lVar22);
      }
    }
    else {
      local_a8 = 0;
      local_b8 = &DAT_03d68b13;
      local_b0 = (undefined4 *)CONCAT71(local_b0._1_7_,1);
    }
    auVar31 = FUN_015712b8(&local_b8,*(undefined8 *)(*(long *)(param_2 + 0x28) + local_a0._0_8_ * 8)
                          );
    local_d0 = auVar31;
    if (local_80 != 0) {
      uVar12 = local_80 - (local_80 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar24 = local_80 - 1 & uVar13;
      }
      else {
        uVar24 = uVar13;
        if (local_80 <= (ulong)uVar13) {
          uVar24 = 0;
          if (local_80 != 0) {
            uVar24 = (ulong)uVar13 / local_80;
          }
          uVar24 = uVar13 - uVar24 * local_80;
        }
      }
      plVar26 = *(long **)(local_88 + uVar24 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar26[1] == uVar13) {
              if (plVar26[2] == uVar13) goto LAB_01570854;
            }
            else if ((plVar26[1] & local_80 - 1) != uVar24) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar26[1];
            if (uVar12 == uVar13) {
              if (plVar26[2] == uVar13) goto LAB_01570854;
            }
            else {
              if (local_80 <= uVar12) {
                uVar30 = 0;
                if (local_80 != 0) {
                  uVar30 = uVar12 / local_80;
                }
                uVar12 = uVar12 - uVar30 * local_80;
              }
              if (uVar12 != uVar24) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    if (auVar31._8_8_ >> 0x20 != 0) {
      FUN_015731d8(uVar28,param_1,param_2,uVar13,local_d0);
    }
    goto LAB_01570748;
  }
LAB_01570964:
  uVar9 = FUN_01571a80(param_1,(iVar10 - iVar2) + iVar3);
  if (local_78 != (long *)0x0) {
    lVar22 = tpidr_el0;
    plVar26 = local_78;
    do {
      plVar27 = (long *)*plVar26;
      plVar25 = *(long **)(lVar22 + 0x30);
      if (plVar25 == (long *)0x0) {
        if ((DAT_04859438 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(&DAT_04859438);
          if (iVar10 != 0) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar22 + 0x30) = DAT_04859430;
      }
      uVar12 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if ((uVar12 & 1) == 0) {
LAB_015709b0:
        (**(code **)(*plVar25 + 0x18))(plVar25,plVar26,0,8);
      }
      else {
        lVar14 = FUN_00c4e600();
        if (*(int *)(lVar14 + 0x12c8) < 1) goto LAB_015709b0;
        FUN_00c48fe8(plVar25,plVar26,0,8);
      }
      plVar26 = plVar27;
    } while (plVar27 != (long *)0x0);
  }
  lVar22 = local_88;
  local_88 = 0;
  if (lVar22 != 0) {
    lVar14 = tpidr_el0;
    plVar26 = *(long **)(lVar14 + 0x30);
    if (plVar26 == (long *)0x0) {
      if ((DAT_04859438 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_04859438);
        if (iVar10 != 0) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
      }
      plVar26 = DAT_04859430;
      *(long **)(lVar14 + 0x30) = DAT_04859430;
    }
    uVar12 = (**(code **)(*plVar26 + 0xf8))(plVar26);
    if ((uVar12 & 1) != 0) {
      lVar14 = FUN_00c4e600();
      if (0 < *(int *)(lVar14 + 0x12c8)) {
        FUN_00c48fe8(plVar26,lVar22,0,8);
        return uVar9;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,lVar22,0,8);
  }
  return uVar9;
LAB_01570854:
  piVar11 = (int *)FUN_01571500(&local_88,local_a0);
  iVar4 = *piVar11;
  if (iVar4 == 0) goto LAB_01570748;
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  lVar22 = *(long *)(param_1 + 0x30);
  uVar7 = -((*(int *)(param_1 + 0x20) - (int)lVar22) + *(int *)(param_1 + 0x28));
  uVar12 = (ulong)uVar7 & 3;
  if ((ulong)(lVar22 - *(long *)(param_1 + 0x38)) < uVar12) {
    FUN_0157184c(param_1,uVar12);
    puVar15 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar12);
    *(undefined1 **)(param_1 + 0x30) = puVar15;
LAB_0157092c:
    *puVar15 = 0;
    if ((uVar12 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar12 != 2)) {
      uVar24 = 2;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar24) = 0;
        uVar24 = uVar24 + 1;
      } while (uVar12 != uVar24);
    }
  }
  else {
    puVar15 = (undefined1 *)(lVar22 - uVar12);
    *(undefined1 **)(param_1 + 0x30) = puVar15;
    if ((uVar7 & 3) != 0) goto LAB_0157092c;
  }
  iVar4 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          iVar4) + 4;
  if ((iVar4 != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar12 = FUN_015713f8(param_1,iVar4);
    puVar16 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar16) < 8) {
      FUN_0157184c(param_1,8);
      puVar16 = *(ulong **)(param_1 + 0x38);
    }
    *puVar16 = uVar12 & 0xffffffff | (ulong)(uVar28 & 0xffff) << 0x20;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    uVar7 = uVar28;
    if ((uVar28 & 0xffff) <= (uint)*(ushort *)(param_1 + 0x44)) {
      uVar7 = (uint)*(ushort *)(param_1 + 0x44);
    }
    *(short *)(param_1 + 0x44) = (short)uVar7;
  }
LAB_01570748:
  local_a0._0_8_ = local_a0._0_8_ + 1;
  uVar28 = uVar28 + 2;
  if (*(ulong *)(param_2 + 8) <= (ulong)local_a0._0_8_) goto LAB_01570964;
  goto LAB_01570708;
}


