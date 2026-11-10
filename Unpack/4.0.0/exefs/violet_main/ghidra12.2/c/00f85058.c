/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f85058; name: FUN_00f85058
 */


void FUN_00f85058(long *param_1,long param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  short *psVar1;
  short sVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  char *pcVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  long *plVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  ulong local_188;
  ulong local_180;
  ulong uStack_178;
  long *local_170;
  undefined8 local_168;
  char *pcStack_160;
  undefined8 local_158;
  ulong local_150;
  ulong uStack_148;
  ulong local_140;
  long *plStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  long *plStack_118;
  long local_110;
  char *local_108;
  long local_100;
  long lStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  ulong uStack_98;
  ulong local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  
  plVar22 = (long *)*param_3;
  plVar14 = *(long **)(*(long *)(param_2 + 0x40) + 0x48);
  if (plVar14 != (long *)0x0) {
    uVar12 = (long)plVar14 - ((ulong)plVar14 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      plVar13 = (long *)((long)plVar14 - 1U & (ulong)plVar22);
    }
    else {
      plVar13 = plVar22;
      if (plVar14 <= plVar22) {
        uVar15 = 0;
        if (plVar14 != (long *)0x0) {
          uVar15 = (ulong)plVar22 / (ulong)plVar14;
        }
        plVar13 = (long *)((long)plVar22 - uVar15 * (long)plVar14);
      }
    }
    plVar16 = *(long **)(*(long *)(*(long *)(param_2 + 0x40) + 0x40) + (long)plVar13 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((long *)plVar16[1] == plVar22) {
            if ((long *)plVar16[2] == plVar22) goto LAB_00f85198;
          }
          else if ((long *)((ulong)plVar16[1] & (long)plVar14 - 1U) != plVar13) goto LAB_00f85138;
          plVar16 = (long *)*plVar16;
          bVar7 = false;
          plVar20 = (long *)0x0;
          bVar19 = false;
        } while (plVar16 != (long *)0x0);
        goto LAB_00f853ec;
      }
      do {
        plVar20 = (long *)plVar16[1];
        if (plVar20 == plVar22) {
          if ((long *)plVar16[2] == plVar22) goto LAB_00f85198;
        }
        else {
          if (plVar14 <= plVar20) {
            uVar12 = 0;
            if (plVar14 != (long *)0x0) {
              uVar12 = (ulong)plVar20 / (ulong)plVar14;
            }
            plVar20 = (long *)((long)plVar20 - uVar12 * (long)plVar14);
          }
          if (plVar20 != plVar13) break;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
LAB_00f85138:
  bVar7 = false;
  bVar19 = false;
  plVar20 = (long *)0x0;
  goto LAB_00f853ec;
LAB_00f85198:
  uVar12 = *(ulong *)(plVar16[6] + 0xb8);
  plVar20 = plVar16;
  if (uVar12 != 0) {
    uVar15 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar17 = *param_4;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar18 = uVar12 - 1 & uVar17;
    }
    else if (uVar17 < uVar12) {
      uVar18 = uVar17;
    }
    else {
      uVar18 = 0;
      if (uVar12 != 0) {
        uVar18 = uVar17 / uVar12;
      }
      uVar18 = uVar17 - uVar18 * uVar12;
    }
    plVar14 = *(long **)(*(long *)(plVar16[6] + 0xb0) + uVar18 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar14[1] == uVar17) {
            if (plVar14[2] == uVar17) goto LAB_00f8529c;
          }
          else if ((plVar14[1] & uVar12 - 1) != uVar18) goto LAB_00f85968;
          plVar14 = (long *)*plVar14;
          bVar7 = true;
        } while (plVar14 != (long *)0x0);
        bVar19 = false;
      }
      else {
        do {
          uVar15 = plVar14[1];
          if (uVar15 == uVar17) {
            if (plVar14[2] == uVar17) goto LAB_00f8529c;
          }
          else {
            if (uVar12 <= uVar15) {
              uVar4 = 0;
              if (uVar12 != 0) {
                uVar4 = uVar15 / uVar12;
              }
              uVar15 = uVar15 - uVar4 * uVar12;
            }
            if (uVar15 != uVar18) goto LAB_00f85968;
          }
          plVar14 = (long *)*plVar14;
          bVar7 = true;
        } while (plVar14 != (long *)0x0);
        bVar19 = false;
      }
      goto LAB_00f853ec;
    }
  }
LAB_00f85968:
  bVar19 = false;
  bVar7 = true;
  goto LAB_00f853ec;
LAB_00f85b84:
  plVar20 = plVar14;
  goto LAB_00f85b88;
LAB_00f8560c:
  plVar22 = plVar14;
  goto LAB_00f85610;
LAB_00f858fc:
  plVar22 = plVar14;
  goto LAB_00f85900;
LAB_00f8529c:
  uVar12 = *(ulong *)(plVar14[6] + 0x50);
  if (uVar12 != 0) {
    uVar15 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar17 = *param_5;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar18 = uVar12 - 1 & uVar17;
    }
    else if (uVar17 < uVar12) {
      uVar18 = uVar17;
    }
    else {
      uVar18 = 0;
      if (uVar12 != 0) {
        uVar18 = uVar17 / uVar12;
      }
      uVar18 = uVar17 - uVar18 * uVar12;
    }
    plVar14 = *(long **)(*(long *)(plVar14[6] + 0x48) + uVar18 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar14[1] == uVar17) {
            if (plVar14[2] == uVar17) goto LAB_00f85350;
          }
          else if ((plVar14[1] & uVar12 - 1) != uVar18) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar14[1];
          if (uVar15 == uVar17) {
            if (plVar14[2] == uVar17) {
LAB_00f85350:
              plVar22 = (long *)plVar14[6];
              plVar14 = (long *)PTR_DAT_047d8b70;
              if (plVar22 != (long *)0x0) {
                plVar14 = plVar22 + 6;
              }
              plVar13 = (long *)PTR_PTR_047d4508;
              if (plVar22 != (long *)0x0) {
                plVar13 = plVar22 + 7;
              }
              lVar11 = *plVar13;
              if (plVar22 == (long *)0x0) {
                lVar23 = 0;
              }
              else {
                lVar23 = plVar22[8];
              }
              *param_1 = *plVar14;
              param_1[1] = lVar11;
              param_1[2] = lVar23;
              param_1[3] = 0;
              if (plVar22 != (long *)0x0) {
                (**(code **)(*plVar22 + 0x18))(plVar22);
              }
              param_1[3] = (long)plVar22;
              return;
            }
          }
          else {
            if (uVar12 <= uVar15) {
              uVar4 = 0;
              if (uVar12 != 0) {
                uVar4 = uVar15 / uVar12;
              }
              uVar15 = uVar15 - uVar4 * uVar12;
            }
            if (uVar15 != uVar18) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  bVar7 = true;
  bVar19 = true;
LAB_00f853ec:
  plVar14 = (long *)param_3[3];
  uVar12 = param_3[1];
  uVar15 = param_3[2];
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  uVar17 = *param_4;
  uVar4 = param_4[1];
  uVar18 = param_4[2];
  plVar13 = (long *)param_4[3];
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  uVar3 = *param_5;
  uVar5 = param_5[1];
  uVar24 = param_5[2];
  local_80 = 0x45e24506a4634ddf;
  pcStack_78 = "Event";
  local_70 = 5;
  local_a0 = plVar22;
  uStack_98 = uVar12;
  local_90 = uVar15;
  local_88 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  uStack_b8 = 0x7ef45b5852ab1156;
  local_b0 = "State";
  uStack_a8 = 5;
  local_f0 = uVar3;
  uStack_e8 = uVar5;
  local_e0 = uVar24;
  local_d8 = uVar17;
  uStack_d0 = uVar4;
  local_c8 = uVar18;
  local_c0 = plVar13;
  if (plVar13 == (long *)0x0) {
    FUN_00f85d94(&local_110,&local_80,&local_a0,&uStack_b8,&local_d8,&local_f0);
  }
  else {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    FUN_00f85d94(&local_110,&local_80,&local_a0,&uStack_b8,&local_d8,&local_f0);
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (!bVar7) {
    local_130 = *param_3;
    uStack_128 = param_3[1];
    local_120 = param_3[2];
    plVar14 = (long *)param_3[3];
    plStack_118 = plVar14;
    if (plVar14 == (long *)0x0) {
      FUN_00f86c70(&local_a0,&local_130);
    }
    else {
      (**(code **)(*plVar14 + 0x18))(plVar14);
      FUN_00f86c70(&local_a0,&local_130);
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    lVar11 = FUN_00f87990(*(undefined8 *)(param_2 + 8),&local_a0);
    if (lVar11 != 0) {
      lVar23 = *(long *)(lVar11 + 0x30);
      if (*(long *)(lVar23 + 0x10) == 0) goto LAB_00f85d4c;
      psVar1 = (short *)(lVar23 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar2 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
        *(undefined8 *)(lVar23 + 8) = uVar10;
        *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_00f85d6c;
    }
    plVar14 = (long *)FUN_00f880a4(*(long *)(param_2 + 0x40) + 0x40,param_3);
    plVar22 = (long *)*plVar14;
    *plVar14 = 0;
    if (plVar22 != (long *)0x0) {
      lVar23 = plVar22[6];
      psVar1 = (short *)(lVar23 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar23 + 0x10) = 0;
        (**(code **)(*plVar22 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_00f85c94;
    }
    *plVar14 = lVar11;
    uVar12 = *(ulong *)(*(long *)(param_2 + 0x40) + 0x48);
    if (uVar12 == 0) {
LAB_00f85c10:
      plVar20 = (long *)0x0;
    }
    else {
      uVar15 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar17 = *param_3;
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar18 = uVar12 - 1 & uVar17;
      }
      else if (uVar17 < uVar12) {
        uVar18 = uVar17;
      }
      else {
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = uVar17 / uVar12;
        }
        uVar18 = uVar17 - uVar18 * uVar12;
      }
      puVar21 = *(undefined8 **)(*(long *)(*(long *)(param_2 + 0x40) + 0x40) + uVar18 * 8);
      if ((puVar21 == (undefined8 *)0x0) || (plVar14 = (long *)*puVar21, plVar14 == (long *)0x0))
      goto LAB_00f85c10;
      if (uVar15 < 2) {
        do {
          if (plVar14[1] == uVar17) {
            if (plVar14[2] == uVar17) goto LAB_00f85b84;
          }
          else if ((plVar14[1] & uVar12 - 1) != uVar18) goto LAB_00f85c10;
          plVar14 = (long *)*plVar14;
          plVar20 = (long *)0x0;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar14[1];
          if (uVar15 == uVar17) {
            if (plVar14[2] == uVar17) goto LAB_00f85b84;
          }
          else {
            if (uVar12 <= uVar15) {
              uVar4 = 0;
              if (uVar12 != 0) {
                uVar4 = uVar15 / uVar12;
              }
              uVar15 = uVar15 - uVar4 * uVar12;
            }
            if (uVar15 != uVar18) goto LAB_00f85c10;
          }
          plVar14 = (long *)*plVar14;
          plVar20 = (long *)0x0;
        } while (plVar14 != (long *)0x0);
      }
    }
LAB_00f85b88:
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
  }
  uVar12 = *param_4;
  uVar15 = *(ulong *)(plVar20[6] + 0xb8);
  if (uVar15 == 0) {
LAB_00f858ac:
    plVar22 = (long *)0x0;
  }
  else {
    uVar17 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar15 - 1 & uVar12;
    }
    else {
      uVar18 = uVar12;
      if (uVar15 <= uVar12) {
        uVar18 = 0;
        if (uVar15 != 0) {
          uVar18 = uVar12 / uVar15;
        }
        uVar18 = uVar12 - uVar18 * uVar15;
      }
    }
    plVar14 = *(long **)(*(long *)(plVar20[6] + 0xb0) + uVar18 * 8);
    if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
    goto LAB_00f858ac;
    if (uVar17 < 2) {
      do {
        if (plVar14[1] == uVar12) {
          if (plVar14[2] == uVar12) goto LAB_00f8560c;
        }
        else if ((plVar14[1] & uVar15 - 1) != uVar18) goto LAB_00f858ac;
        plVar14 = (long *)*plVar14;
        plVar22 = (long *)0x0;
      } while (plVar14 != (long *)0x0);
    }
    else {
      do {
        uVar17 = plVar14[1];
        if (uVar17 == uVar12) {
          if (plVar14[2] == uVar12) goto LAB_00f8560c;
        }
        else {
          if (uVar15 <= uVar17) {
            uVar4 = 0;
            if (uVar15 != 0) {
              uVar4 = uVar17 / uVar15;
            }
            uVar17 = uVar17 - uVar4 * uVar15;
          }
          if (uVar17 != uVar18) goto LAB_00f858ac;
        }
        plVar14 = (long *)*plVar14;
        plVar22 = (long *)0x0;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_00f85610:
  if (bVar19) goto LAB_00f85618;
  local_150 = *param_3;
  uStack_148 = param_3[1];
  local_140 = param_3[2];
  plVar14 = (long *)param_3[3];
  plStack_138 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
    uVar12 = *param_4;
  }
  local_168 = 0x7ef45b5852ab1156;
  pcStack_160 = "State";
  local_158 = 5;
  local_180 = param_4[1];
  uStack_178 = param_4[2];
  plVar22 = (long *)param_4[3];
  local_188 = uVar12;
  local_170 = plVar22;
  if (plVar22 == (long *)0x0) {
    FUN_00f8693c(&local_a0,&local_150,&local_168,&local_188);
  }
  else {
    (**(code **)(*plVar22 + 0x18))(plVar22);
    FUN_00f8693c(&local_a0,&local_150,&local_168,&local_188);
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  lVar11 = FUN_00f871c8(*(undefined8 *)(param_2 + 8),&local_a0);
  if (lVar11 != 0) {
    lVar23 = *(long *)(lVar11 + 0x30);
    if (*(long *)(lVar23 + 0x10) == 0) {
LAB_00f85d4c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
      *(undefined8 *)(lVar23 + 8) = uVar10;
      *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_00f85d6c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar14 = (long *)FUN_00f86dfc(plVar20[6] + 0xb0,param_4);
  plVar22 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar22 != (long *)0x0) {
    lVar23 = plVar22[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*plVar22 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_00f85c94:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *plVar14 = lVar11;
  uVar12 = *(ulong *)(plVar20[6] + 0xb8);
  if (uVar12 == 0) {
LAB_00f85970:
    plVar22 = (long *)0x0;
  }
  else {
    uVar15 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar17 = *param_4;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar18 = uVar12 - 1 & uVar17;
    }
    else if (uVar17 < uVar12) {
      uVar18 = uVar17;
    }
    else {
      uVar18 = 0;
      if (uVar12 != 0) {
        uVar18 = uVar17 / uVar12;
      }
      uVar18 = uVar17 - uVar18 * uVar12;
    }
    puVar21 = *(undefined8 **)(*(long *)(plVar20[6] + 0xb0) + uVar18 * 8);
    if ((puVar21 == (undefined8 *)0x0) || (plVar14 = (long *)*puVar21, plVar14 == (long *)0x0))
    goto LAB_00f85970;
    if (uVar15 < 2) {
      do {
        if (plVar14[1] == uVar17) {
          if (plVar14[2] == uVar17) goto LAB_00f858fc;
        }
        else if ((plVar14[1] & uVar12 - 1) != uVar18) goto LAB_00f85970;
        plVar14 = (long *)*plVar14;
        plVar22 = (long *)0x0;
      } while (plVar14 != (long *)0x0);
    }
    else {
      do {
        uVar15 = plVar14[1];
        if (uVar15 == uVar17) {
          if (plVar14[2] == uVar17) goto LAB_00f858fc;
        }
        else {
          if (uVar12 <= uVar15) {
            uVar4 = 0;
            if (uVar12 != 0) {
              uVar4 = uVar15 / uVar12;
            }
            uVar15 = uVar15 - uVar4 * uVar12;
          }
          if (uVar15 != uVar18) goto LAB_00f85970;
        }
        plVar14 = (long *)*plVar14;
        plVar22 = (long *)0x0;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_00f85900:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
LAB_00f85618:
  pcVar8 = local_108;
  if (*local_108 == '\0') {
    plVar14 = (long *)FUN_00d44228();
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar10 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar10;
    FUN_00cf9884(&local_a0,uVar10,pcVar8);
    plVar14 = local_a0;
  }
  local_a0 = (long *)*param_5;
  uStack_98 = param_5[1];
  local_90 = param_5[2];
  local_88 = (long *)0x0;
  plVar22 = (long *)FUN_00f86300(plVar22[6] + 0x48,&local_a0);
  plVar13 = (long *)*plVar22;
  *plVar22 = 0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  *plVar22 = (long)plVar14;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  *param_1 = local_110;
  param_1[1] = (long)local_108;
  param_1[2] = local_100;
  param_1[3] = lStack_f8;
  return;
}


