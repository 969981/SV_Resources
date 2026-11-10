/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ebc2c0; name: FUN_00ebc2c0
 */


void FUN_00ebc2c0(long *param_1,long param_2,long param_3,undefined8 *param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  void *__dest;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  int *piVar20;
  uint *puVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  long *plVar25;
  ulong uVar26;
  int *piVar27;
  long lVar28;
  uint uVar29;
  undefined1 local_118 [16];
  ulong local_108;
  long *local_100;
  long local_f0;
  long lStack_e8;
  int *local_e0;
  int *local_d8;
  int *local_d0;
  long *local_c8;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long *plStack_90;
  long local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if (param_5 == 0) {
    param_5 = *(long *)(param_2 + 8);
  }
  lVar9 = FUN_00f3d7a0(local_118,param_5,param_3);
  *param_1 = lVar9;
  if (lVar9 != 0) {
    piVar20 = (int *)(lVar9 + 0x28);
    do {
      iVar8 = *piVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar5) {
        *piVar20 = iVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == -1) goto LAB_00ebd0d4;
  }
  plVar10 = (long *)(*(long *)(param_2 + 0x30) + 0x30);
  (**(code **)(*plVar10 + 0x10))(plVar10,param_1);
  lVar9 = *param_1;
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  *(undefined8 *)(lVar9 + 0x1a0) = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(lVar9 + 0x1a8) = uVar2;
  lVar9 = *param_1;
  *(uint *)(lVar9 + 0x158) = *(uint *)(lVar9 + 0x158) | 3;
  FUN_00ebd180(lVar9 + 0x108,*(undefined8 *)(param_3 + 0x78));
  FUN_00ebd340(lVar9 + 0x108,*(long *)(param_2 + 0x38) + 0x30,*param_4,0);
  if ((int)((ulong)(*(long *)(param_3 + 0x128) - *(long *)(param_3 + 0x120)) >> 4) * -0x55555555 !=
      0) {
    lVar23 = *(long *)(lVar9 + 0x108);
    lVar9 = *(long *)(lVar9 + 0x110);
    plVar10 = (long *)*param_1;
    if (plVar10 != (long *)0x0) {
      plVar12 = plVar10 + 5;
      do {
        lVar17 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = (int)lVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar17 == -1) goto LAB_00ebd0d4;
    }
    lVar17 = *(long *)(param_2 + 0x38);
    FUN_00ec7bc0(plVar10);
    *(uint *)(plVar10 + 0x2b) = *(uint *)(plVar10 + 0x2b) | 0x20;
    piVar20 = *(int **)(param_3 + 0x120);
    piVar24 = *(int **)(param_3 + 0x128);
    if (piVar20 != piVar24) {
      iVar8 = (int)((ulong)(lVar9 - lVar23) >> 3) * 0x38e38e39;
      lVar9 = 0;
      do {
        iVar6 = *piVar20;
        lVar23 = *(long *)(piVar20 + 2);
        lVar28 = *(long *)(piVar20 + 4);
        lVar15 = *(long *)(piVar20 + 6);
        plVar12 = *(long **)(piVar20 + 8);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        plVar14 = *(long **)(plVar10[0x3a] + lVar9 * 8);
        if (plVar14 != (long *)0x0) {
          plVar18 = plVar14 + 5;
          do {
            lVar16 = *plVar18;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar5) {
              *(int *)plVar18 = (int)lVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((int)lVar16 == -1) goto LAB_00ebd0d4;
        }
        FUN_00ebd180(plVar14 + 6,*(long *)(param_3 + 0x78) + (long)iVar6 * 0x70);
        FUN_00ebd340(plVar14 + 6,lVar17 + 0x30,*param_4,iVar8);
        plVar14[0xe] = lVar23;
        plVar14[0xf] = lVar28;
        plVar14[0x10] = lVar15;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        plVar18 = (long *)plVar14[0x11];
        plVar14[0x11] = (long)plVar12;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x20))();
        }
        plVar18 = plVar14 + 5;
        iVar8 = iVar8 + (int)((ulong)(plVar14[7] - plVar14[6]) >> 3) * 0x38e38e39;
        lVar9 = lVar9 + 1;
        do {
          lVar23 = *plVar18;
          iVar6 = (int)lVar23 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
        else if ((int)lVar23 == 0) goto LAB_00ebc978;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
        piVar20 = piVar20 + 0xc;
      } while (piVar20 != piVar24);
    }
    plVar12 = plVar10 + 5;
    do {
      lVar9 = *plVar12;
      iVar8 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_00ebc978;
  }
  iVar8 = (int)((ulong)(*(long *)(param_3 + 0x160) - *(long *)(param_3 + 0x158)) >> 4) * 0x38e38e39;
  if (iVar8 != 0) {
    plVar10 = (long *)*param_1;
    if (plVar10 != (long *)0x0) {
      plVar12 = plVar10 + 5;
      do {
        lVar9 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = (int)lVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar9 == -1) goto LAB_00ebd0d4;
      iVar8 = (int)((ulong)(*(long *)(param_3 + 0x160) - *(long *)(param_3 + 0x158)) >> 4) *
              0x38e38e39;
    }
    lVar9 = *(long *)(param_2 + 0x38);
    FUN_00edc38c(plVar10,iVar8);
    *(uint *)(plVar10 + 0x2b) = *(uint *)(plVar10 + 0x2b) | 0x20;
    plVar12 = *(long **)(param_3 + 0x158);
    plVar14 = *(long **)(param_3 + 0x160);
    if (plVar12 != plVar14) {
      lVar9 = lVar9 + 0x30;
      lVar23 = 0;
      do {
        local_118._0_8_ = 0;
        local_118._8_8_ = 0;
        local_108 = 0;
        local_100 = (long *)plVar12[3];
        uVar26 = plVar12[4];
        local_f0 = plVar12[5];
        lStack_e8 = plVar12[6];
        lVar17 = plVar12[1] - *plVar12;
        if (lVar17 != 0) {
          if (0x7ffffffffffffffe < uVar26) {
            uVar26 = 0x7fffffffffffffff;
          }
          if (uVar26 < (ulong)((lVar17 >> 4) * 0x6db6db6db6db6db7)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar15 = (**(code **)(*local_100 + 0x10))(local_100,lVar17,8);
          if (lVar15 == 0) {
            (**(code **)(*local_100 + 0xe8))();
          }
          local_108 = lVar15 + (lVar17 >> 4) * 0x10;
          lVar28 = plVar12[1];
          local_118._0_8_ = lVar15;
          local_118._8_8_ = lVar15;
          plVar18 = local_100;
          for (lVar17 = *plVar12; lVar17 != lVar28; lVar17 = lVar17 + 0x70) {
            local_100 = plVar18;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar16 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar16 == 0) {
              FUN_00ebe67c(lVar15,lVar17);
              FUN_00ebe4d0(lVar15 + 0x38,lVar17 + 0x38);
            }
            else {
              if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_00ebd160;
              *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar18;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
              FUN_00ebe67c(lVar15,lVar17);
              FUN_00ebe4d0(lVar15 + 0x38,lVar17 + 0x38);
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
            }
            lVar15 = lVar15 + 0x70;
            plVar18 = local_100;
          }
          local_118._8_8_ = lVar15;
        }
        local_d8 = (int *)0x0;
        local_d0 = (int *)0x0;
        local_e0 = (int *)0x0;
        local_c8 = (long *)plVar12[10];
        uVar26 = plVar12[0xb];
        local_b8 = plVar12[0xc];
        lStack_b0 = plVar12[0xd];
        lVar17 = plVar12[8] - plVar12[7];
        if (lVar17 != 0) {
          if (0x7ffffffffffffffe < uVar26) {
            uVar26 = 0x7fffffffffffffff;
          }
          if (uVar26 < (ulong)((lVar17 >> 4) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          piVar20 = (int *)(**(code **)(*local_c8 + 0x10))(local_c8,lVar17,8);
          if (piVar20 == (int *)0x0) {
            (**(code **)(*local_c8 + 0xe8))();
          }
          local_d0 = piVar20 + (lVar17 >> 4) * 4;
          piVar27 = (int *)plVar12[8];
          local_e0 = piVar20;
          local_d8 = piVar20;
          for (piVar24 = (int *)plVar12[7]; plVar18 = local_c8, piVar24 != piVar27;
              piVar24 = piVar24 + 0xc) {
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar17 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar17 != 0) {
              if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_00ebd160:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar18;
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
            }
            *piVar20 = *piVar24;
            *(undefined8 *)(piVar20 + 2) = *(undefined8 *)(piVar24 + 2);
            *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar24 + 4);
            *(undefined8 *)(piVar20 + 6) = *(undefined8 *)(piVar24 + 6);
            plVar18 = *(long **)(piVar24 + 8);
            *(long **)(piVar20 + 8) = plVar18;
            if (plVar18 != (long *)0x0) {
              (**(code **)(*plVar18 + 0x18))();
            }
            *(char *)(piVar20 + 10) = (char)piVar24[10];
            if (lVar17 != 0) {
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
            }
            piVar20 = piVar20 + 0xc;
          }
          local_d8 = piVar20;
        }
        local_a8 = plVar12[0xe];
        local_a0 = plVar12[0xf];
        local_98 = plVar12[0x10];
        plStack_90 = (long *)plVar12[0x11];
        if (plStack_90 != (long *)0x0) {
          (**(code **)(*plStack_90 + 0x18))();
        }
        plVar18 = plStack_90;
        plVar25 = *(long **)(plVar10[0x41] + lVar23 * 8);
        if (plVar25 != (long *)0x0) {
          plVar19 = plVar25 + 5;
          do {
            lVar17 = *plVar19;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *(int *)plVar19 = (int)lVar17 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((int)lVar17 == -1) goto LAB_00ebd0d4;
        }
        plVar25[0x15] = local_a8;
        plVar25[0x16] = local_a0;
        plVar25[0x17] = local_98;
        if (plStack_90 != (long *)0x0) {
          (**(code **)(*plStack_90 + 0x18))(plStack_90);
        }
        plVar19 = (long *)plVar25[0x18];
        plVar25[0x18] = (long)plVar18;
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x20))();
        }
        FUN_00ec7d54(plVar25,(int)((ulong)((long)local_d8 - (long)local_e0) >> 4) * -0x55555555);
        piVar20 = (int *)*param_4;
        puVar21 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (8 - (long)*piVar20)))
        ;
        puVar21 = (uint *)((long)puVar21 + lVar23 * 4 + (ulong)*puVar21 + 4);
        piVar20 = (int *)((long)puVar21 + (ulong)*puVar21);
        if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
           (uVar26 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar26 == 0)) {
          lVar17 = 0;
        }
        else {
          puVar21 = (uint *)((long)piVar20 + uVar26);
          lVar17 = (long)puVar21 + (ulong)*puVar21;
        }
        if ((ulong)(((long)local_d8 - (long)local_e0 >> 4) * -0x5555555555555555) <
            (ulong)(((long)(local_118._8_8_ - local_118._0_8_) >> 4) * 0x6db6db6db6db6db7)) {
          FUN_00ebe340(plVar25 + 6);
          FUN_00ebe1b0(plVar25 + 6,lVar9,lVar17 + 4 + (ulong)*(uint *)(lVar17 + 4));
        }
        piVar20 = local_d8;
        if (local_e0 != local_d8) {
          uVar29 = 1;
          piVar24 = local_e0;
          do {
            uVar2 = *(undefined8 *)(piVar24 + 2);
            uVar3 = *(undefined8 *)(piVar24 + 4);
            iVar8 = *piVar24;
            uVar1 = *(undefined8 *)(piVar24 + 6);
            plVar18 = *(long **)(piVar24 + 8);
            if (plVar18 != (long *)0x0) {
              (**(code **)(*plVar18 + 0x18))(plVar18);
            }
            *(char *)(plVar25 + 0x19) = (char)piVar24[10];
            lVar28 = plVar25[0xe];
            lVar15 = *(long *)(lVar28 + (ulong)(uVar29 - 1) * 8) + 0x30;
            FUN_00ebe340(lVar15,local_118._0_8_ + (long)iVar8 * 0x70);
            puVar21 = (uint *)(lVar17 + 4 + (ulong)uVar29 * 4);
            FUN_00ebe1b0(lVar15,lVar9,(long)puVar21 + (ulong)*puVar21);
            lVar15 = *(long *)(lVar28 + (ulong)(uVar29 - 1) * 8);
            *(undefined8 *)(lVar15 + 0x80) = uVar1;
            *(undefined8 *)(lVar15 + 0x70) = uVar2;
            *(undefined8 *)(lVar15 + 0x78) = uVar3;
            if (plVar18 != (long *)0x0) {
              (**(code **)(*plVar18 + 0x18))(plVar18);
            }
            plVar19 = *(long **)(lVar15 + 0x88);
            *(long **)(lVar15 + 0x88) = plVar18;
            if (plVar19 != (long *)0x0) {
              (**(code **)(*plVar19 + 0x20))();
            }
            if (plVar18 != (long *)0x0) {
              (**(code **)(*plVar18 + 0x20))(plVar18);
            }
            piVar24 = piVar24 + 0xc;
            uVar29 = uVar29 + 1;
          } while (piVar24 != piVar20);
        }
        lVar23 = lVar23 + 1;
        plVar18 = plVar25 + 5;
        do {
          lVar17 = *plVar18;
          iVar8 = (int)lVar17 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar25 + 0x10))();
        }
        else if ((int)lVar17 == 0) goto LAB_00ebc978;
        FUN_00ed55e0(local_118);
        plVar12 = plVar12 + 0x12;
      } while (plVar12 != plVar14);
    }
    if (plVar10 != (long *)0x0) {
      plVar12 = plVar10 + 5;
      do {
        lVar9 = *plVar12;
        iVar8 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_00ebc978;
    }
  }
  piVar20 = (int *)*param_4;
  puVar21 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (4 - (long)*piVar20)));
  puVar21 = (uint *)((long)puVar21 + (ulong)*puVar21 + 4);
  piVar20 = (int *)((long)puVar21 + (ulong)*puVar21);
  puVar21 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (4 - (long)*piVar20)));
  uVar26 = (ulong)*(uint *)((long)puVar21 + (ulong)*puVar21);
  local_88 = *(long *)(*(long *)(param_2 + 0x38) + 0x30);
  local_70 = 0;
  uStack_78 = 4;
  local_80 = uVar26;
  plVar10 = (long *)FUN_00cf3764(local_118,*(undefined8 *)(local_88 + 8),&local_88);
  if (plVar10 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = plVar10 + 5;
    do {
      lVar9 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar9 == -1) goto LAB_00ebd0d4;
    plVar12 = plVar10;
  }
  lVar9 = *(long *)(plVar12[0xe] + 0x30);
  local_118._0_8_ = *(undefined8 *)(lVar9 + 8);
  local_118._8_8_ = *(undefined8 *)(lVar9 + 0x6098);
  local_108 = lVar9 + 0x10;
  local_118 = FUN_00d56874(*(undefined8 *)(lVar9 + 0x6140),local_118,&local_80,0,0);
  plVar14 = plVar12 + 6;
  local_108 = local_108 & 0xffffffffffffff00;
  FUN_00d56380(plVar14,local_118);
  uVar7 = FUN_00d56320(plVar14);
  *(undefined4 *)(plVar12 + 0xf) = uVar7;
  pcVar11 = (char *)FUN_00ccbbb0(*(undefined8 *)(plVar12[0xe] + 0x110),plVar14);
  __dest = (void *)0x0;
  if ((*pcVar11 != '\0') && (*(long *)(pcVar11 + 8) != 0)) {
    if (*(long *)(*(long *)(pcVar11 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    __dest = (void *)(**(code **)PTR_DAT_047d8da8)();
  }
  if (*(ushort *)((long)piVar20 - (long)*piVar20) < 5) {
    lVar9 = 0;
  }
  else {
    uVar22 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2];
    lVar9 = 0;
    if (uVar22 != 0) {
      puVar21 = (uint *)((long)piVar20 + uVar22);
      lVar9 = (long)puVar21 + (ulong)*puVar21;
    }
  }
  memcpy(__dest,(void *)(lVar9 + 4),uVar26);
  FUN_00ccbbb0(*(undefined8 *)(plVar12[0xe] + 0x110),plVar14);
  lVar9 = *param_1;
  plVar12 = *(long **)(lVar9 + 0x148);
  if (plVar12 != plVar10) {
    iVar8 = *(int *)(param_3 + 0x70);
    *(uint *)(lVar9 + 0x158) = *(uint *)(lVar9 + 0x158) | 4;
    if (plVar10 != (long *)0x0) {
      plVar12 = plVar10 + 5;
      do {
        lVar23 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = (int)lVar23 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar23 == -1) {
LAB_00ebd0d4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar12 = *(long **)(lVar9 + 0x148);
    }
    *(long **)(lVar9 + 0x148) = plVar10;
    if (plVar12 != (long *)0x0) {
      plVar14 = plVar12 + 5;
      do {
        lVar23 = *plVar14;
        iVar6 = (int)lVar23 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar23 == 0) goto LAB_00ebc978;
    }
    uVar7 = 0x20;
    if (iVar8 != 2) {
      uVar7 = 0x10;
    }
    *(undefined4 *)(lVar9 + 0x150) = uVar7;
  }
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10 + 5;
    do {
      lVar9 = *plVar12;
      iVar8 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar9 == 0) {
LAB_00ebc978:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar9 = *param_1;
  *(undefined8 *)(lVar9 + 0x180) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(lVar9 + 0x188) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(lVar9 + 400) = *(undefined8 *)(param_3 + 0x30);
  plVar10 = *(long **)(param_3 + 0x38);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar12 = *(long **)(lVar9 + 0x198);
  *(long **)(lVar9 + 0x198) = plVar10;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  if (*(undefined4 **)(param_3 + 0xf0) != *(undefined4 **)(param_3 + 0xe8)) {
    *(undefined4 *)(*param_1 + 0x244) = **(undefined4 **)(param_3 + 0xe8);
  }
  piVar20 = *(int **)(param_3 + 0xb0);
  piVar24 = *(int **)(param_3 + 0xb8);
  lVar9 = *param_1;
  do {
    if (piVar20 == piVar24) {
      FUN_00ebd644(lVar9,*(undefined4 *)(param_3 + 0x198));
      plVar10 = (long *)(*(long *)(param_2 + 0x30) + 0x30);
      (**(code **)(*plVar10 + 0x20))(plVar10,param_1);
      return;
    }
    puVar13 = (undefined8 *)FUN_00ebd9ec(lVar9);
    plVar10 = (long *)*puVar13;
    if (plVar10 != (long *)0x0) {
      plVar12 = plVar10 + 5;
      do {
        lVar9 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = (int)lVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar9 == -1) goto LAB_00ebd0d4;
    }
    plVar10[0x1d] = *(long *)(piVar20 + 4);
    plVar10[0x1e] = *(long *)(piVar20 + 6);
    plVar10[0x1f] = *(long *)(piVar20 + 8);
    plVar12 = *(long **)(piVar20 + 10);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    plVar14 = (long *)plVar10[0x20];
    plVar10[0x20] = (long)plVar12;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    if ((int)plVar10[0x2a] != *piVar20) {
      *(int *)(plVar10 + 0x2a) = *piVar20;
      *(undefined1 *)((long)plVar10 + 0x19a) = 1;
    }
    if ((int)plVar10[0x2b] != piVar20[1]) {
      *(int *)(plVar10 + 0x2b) = piVar20[1];
      *(undefined1 *)((long)plVar10 + 0x19a) = 1;
    }
    if (*(int *)((long)plVar10 + 0x154) != piVar20[2]) {
      *(int *)((long)plVar10 + 0x154) = piVar20[2];
      *(undefined1 *)((long)plVar10 + 0x19a) = 1;
    }
    plVar12 = plVar10 + 5;
    do {
      lVar9 = *plVar12;
      iVar8 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar9 == 0) goto LAB_00ebc978;
    lVar9 = *param_1;
    piVar20 = piVar20 + 0xe;
  } while( true );
}


