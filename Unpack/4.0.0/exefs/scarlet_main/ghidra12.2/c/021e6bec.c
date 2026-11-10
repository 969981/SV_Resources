/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e6bec; name: FUN_021e6bec
 */


void FUN_021e6bec(long *param_1,long param_2,ulong *param_3,ulong *param_4)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  bool bVar16;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  long *plStack_100;
  undefined1 auStack_f8 [24];
  long *local_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  ulong local_a0;
  ulong local_98;
  ulong uStack_90;
  long *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  
  local_a0 = *param_3;
  uVar8 = *(ulong *)(*(long *)(param_2 + 0x40) + 0x48);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & local_a0;
    }
    else {
      uVar10 = local_a0;
      if (uVar8 <= local_a0) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = local_a0 / uVar8;
        }
        uVar10 = local_a0 - uVar10 * uVar8;
      }
    }
    puVar12 = *(undefined8 **)(*(long *)(*(long *)(param_2 + 0x40) + 0x40) + uVar10 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      plVar15 = (long *)*puVar12;
      if (plVar15 != (long *)0x0) {
        if (uVar9 < 2) {
          do {
            if (plVar15[1] == local_a0) {
              if (plVar15[2] == local_a0) goto LAB_021e6d1c;
            }
            else if ((plVar15[1] & uVar8 - 1) != uVar10) goto LAB_021e71a4;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar15[1];
            if (uVar9 == local_a0) {
              if (plVar15[2] == local_a0) goto LAB_021e6d1c;
            }
            else {
              if (uVar8 <= uVar9) {
                uVar11 = 0;
                if (uVar8 != 0) {
                  uVar11 = uVar9 / uVar8;
                }
                uVar9 = uVar9 - uVar11 * uVar8;
              }
              if (uVar9 != uVar10) goto LAB_021e71a4;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
      bVar16 = false;
      goto LAB_021e6dd0;
    }
  }
LAB_021e71a4:
  bVar16 = false;
  plVar15 = (long *)0x0;
  goto LAB_021e6dd0;
LAB_021e7158:
  plVar15 = plVar14;
  goto LAB_021e715c;
LAB_021e6d1c:
  uVar8 = *(ulong *)(plVar15[6] + 0x188);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar10 = *param_4;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar11 = uVar8 - 1 & uVar10;
    }
    else if (uVar10 < uVar8) {
      uVar11 = uVar10;
    }
    else {
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = uVar10 / uVar8;
      }
      uVar11 = uVar10 - uVar11 * uVar8;
    }
    plVar14 = *(long **)(*(long *)(plVar15[6] + 0x180) + uVar11 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar14[1] == uVar10) {
            if (plVar14[2] == uVar10) goto LAB_021e6f14;
          }
          else if ((plVar14[1] & uVar8 - 1) != uVar11) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar14[1];
          if (uVar9 == uVar10) {
            if (plVar14[2] == uVar10) {
LAB_021e6f14:
              plVar14 = *(long **)(plVar14[6] + 0x40);
              plVar15 = (long *)PTR_DAT_047d8b70;
              if (plVar14 != (long *)0x0) {
                plVar15 = plVar14 + 6;
              }
              plVar3 = (long *)PTR_PTR_047d4508;
              if (plVar14 != (long *)0x0) {
                plVar3 = plVar14 + 7;
              }
              lVar6 = *plVar3;
              if (plVar14 == (long *)0x0) {
                lVar13 = 0;
              }
              else {
                lVar13 = plVar14[8];
              }
              *param_1 = *plVar15;
              param_1[1] = lVar6;
              param_1[2] = lVar13;
              param_1[3] = 0;
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 0x18))(plVar14);
              }
              param_1[3] = (long)plVar14;
              return;
            }
          }
          else {
            if (uVar8 <= uVar9) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar5 * uVar8;
            }
            if (uVar9 != uVar11) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  bVar16 = true;
LAB_021e6dd0:
  local_98 = param_3[1];
  uStack_90 = param_3[2];
  plVar14 = (long *)param_3[3];
  local_88 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  local_b8 = 0x1bb0ca0aaf04a7c0;
  pcStack_b0 = "CustomFlag";
  local_a8 = 10;
  local_d8 = *param_4;
  uStack_d0 = param_4[1];
  local_c8 = param_4[2];
  plVar3 = (long *)param_4[3];
  plStack_c0 = plVar3;
  if (plVar3 == (long *)0x0) {
    FUN_00f8693c(&local_80,&local_a0,&local_b8,&local_d8);
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    FUN_00f8693c(&local_80,&local_a0,&local_b8,&local_d8);
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (!bVar16) {
    local_118 = *param_3;
    uStack_110 = param_3[1];
    local_108 = param_3[2];
    plVar15 = (long *)param_3[3];
    plStack_100 = plVar15;
    if (plVar15 == (long *)0x0) {
      FUN_00f86c70(auStack_f8,&local_118);
    }
    else {
      (**(code **)(*plVar15 + 0x18))(plVar15);
      FUN_00f86c70(auStack_f8,&local_118);
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    lVar6 = FUN_00f87990(*(undefined8 *)(param_2 + 8),auStack_f8);
    if (lVar6 != 0) {
      lVar13 = *(long *)(lVar6 + 0x30);
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_021e72d4;
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar7;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_021e72f4;
    }
    plVar15 = (long *)FUN_00f880a4(*(long *)(param_2 + 0x40) + 0x40,param_3);
    plVar14 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar14 != (long *)0x0) {
      lVar13 = plVar14[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_021e7248;
    }
    *plVar15 = lVar6;
    uVar8 = *(ulong *)(*(long *)(param_2 + 0x40) + 0x48);
    if (uVar8 == 0) {
LAB_021e71cc:
      plVar15 = (long *)0x0;
    }
    else {
      uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar10 = *param_3;
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar11 = uVar8 - 1 & uVar10;
      }
      else if (uVar10 < uVar8) {
        uVar11 = uVar10;
      }
      else {
        uVar11 = 0;
        if (uVar8 != 0) {
          uVar11 = uVar10 / uVar8;
        }
        uVar11 = uVar10 - uVar11 * uVar8;
      }
      plVar14 = *(long **)(*(long *)(*(long *)(param_2 + 0x40) + 0x40) + uVar11 * 8);
      if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
      goto LAB_021e71cc;
      if (uVar9 < 2) {
        do {
          if (plVar14[1] == uVar10) {
            if (plVar14[2] == uVar10) goto LAB_021e7158;
          }
          else if ((plVar14[1] & uVar8 - 1) != uVar11) goto LAB_021e71cc;
          plVar14 = (long *)*plVar14;
          plVar15 = (long *)0x0;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar14[1];
          if (uVar9 == uVar10) {
            if (plVar14[2] == uVar10) goto LAB_021e7158;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar5 * uVar8;
            }
            if (uVar9 != uVar11) goto LAB_021e71cc;
          }
          plVar14 = (long *)*plVar14;
          plVar15 = (long *)0x0;
        } while (plVar14 != (long *)0x0);
      }
    }
LAB_021e715c:
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
  }
  lVar6 = FUN_00f871c8(*(undefined8 *)(param_2 + 8),&local_80);
  if (lVar6 != 0) {
    lVar13 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar13 + 0x10) == 0) {
LAB_021e72d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar7;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_021e72f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar15 = (long *)FUN_00f86dfc(plVar15[6] + 0x180,param_4);
  plVar14 = (long *)*plVar15;
  *plVar15 = 0;
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_021e7248:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *plVar15 = lVar6;
  *param_1 = local_80;
  param_1[1] = lStack_78;
  param_1[2] = local_70;
  param_1[3] = lStack_68;
  return;
}


