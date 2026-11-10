/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ee2cf4; name: FUN_00ee2cf4
 */


void FUN_00ee2cf4(undefined8 *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long **pplVar11;
  short sVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  bool bVar18;
  long *plVar19;
  long *local_120;
  undefined8 uStack_118;
  long *local_110;
  long *local_108;
  undefined8 local_100;
  long *local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined4 local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  long *local_80;
  long *plStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  pplVar11 = &local_120;
  if ((param_4 == (long *)0x0) ||
     ((uVar13 = (**(code **)(*param_4 + 0xb8))(param_4), (uVar13 & 1) != 0 &&
      (uVar13 = (**(code **)(**(long **)(param_2 + 0x3a0) + 0xb8))(), (uVar13 & 1) != 0)))) {
    param_4 = *(long **)(param_2 + 0x3a0);
  }
  local_68 = (long *)0x0;
  plVar1 = (long *)(param_2 + 0x2f0);
  lVar15 = *plVar1;
  local_60 = param_4;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar15) {
    lVar9 = nn::os::GetCurrentThread();
LAB_00ee2d44:
    if (*plVar1 == 0) goto code_r0x00ee2d4c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar1 == 0) {
            cVar6 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar18) {
              *plVar1 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00ee2d54;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar18) {
        *plVar1 = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00ee2d54:
    bVar18 = false;
    goto LAB_00ee2d58;
  }
  bVar18 = true;
LAB_00ee2d58:
  uVar13 = *(ulong *)(param_2 + 0x290);
  uVar16 = param_3[1];
  if ((uVar13 & uVar13 - 1) == 0) {
    uVar16 = uVar13 - 1 & uVar16;
  }
  else if (uVar13 <= uVar16) {
    uVar7 = 0;
    if (uVar13 != 0) {
      uVar7 = uVar16 / uVar13;
    }
    uVar16 = uVar16 - uVar7 * uVar13;
  }
  FUN_00d00258(&local_80,param_2,uVar16,param_3,local_60);
  if (local_80 == (long *)0x0) {
    FUN_00ee3ac0(&local_f8,*(undefined8 *)(param_2 + 0x3a0),param_3,&local_60);
    FUN_00ee3a28(&local_68,&local_f8);
    if (local_f8 != (long *)0x0) {
      lVar9 = local_f8[6];
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar12 = *psVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_f8 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00ee3124;
    }
    puVar14 = *(undefined8 **)(*(long *)(param_2 + 0x288) + uVar16 * 8);
    local_a0 = *(undefined8 *)(param_2 + 0x290);
    local_98 = 0;
    if (puVar14 != (undefined8 *)0x0) {
      local_98 = *puVar14;
    }
    local_b0 = 0;
    uStack_a8 = uVar16;
    uStack_90 = uVar16;
    local_88 = local_a0;
    FUN_00ee3b90(&local_f8,&local_98,&local_b0,param_3);
    plVar1 = local_68;
    local_80 = local_f8;
    plStack_78 = local_f0;
    local_70 = local_e8;
    if (local_f8 == (long *)0x0) {
      plVar19 = local_68 + 5;
      (**(code **)(*local_68 + 0x18))(&local_f8,local_68);
      local_120 = (long *)0x0;
      uStack_118 = 0;
      plVar17 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        plVar17 = plVar19;
      }
      if ((long *)local_f8[2] == plVar17) {
        FUN_00d1f904(&local_120,&local_f8);
      }
      if (local_f8 != (long *)0x0) {
        plVar1 = local_f8 + 3;
        do {
          sVar12 = (short)*plVar1;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(short *)plVar1 = sVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar12 == 1) {
          piVar3 = (int *)((long)local_f8 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_110 = (long *)*local_f8;
            FUN_00c44438(lVar9 + 0x8040,&local_110);
          }
        }
        else if (sVar12 == 0) goto LAB_00ee31d8;
      }
      local_100 = 0;
      local_110 = local_60;
      local_108 = (long *)0x0;
      FUN_00dc7a68(&local_108,&local_120);
      local_f8 = (long *)*param_3;
      if (local_f8 != (long *)0x0) {
        (**(code **)(*local_f8 + 0x18))();
      }
      local_f0 = (long *)param_3[1];
      local_e8 = param_3[2];
      local_e0 = param_3[3];
      local_d8 = (long *)param_3[4];
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x18))();
      }
      local_d0 = *(undefined4 *)(param_3 + 5);
      local_c8 = local_110;
      local_c0 = (long *)0x0;
      local_b8 = 0;
      FUN_00dc7a68(&local_c0,&local_108);
      FUN_00ed01b8(param_2 + 0x288,&local_f8);
      plVar1 = local_c0;
      if (local_c0 != (long *)0x0) {
        plVar17 = local_c0 + 3;
        do {
          sVar12 = (short)*plVar17;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(short *)plVar17 = sVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar12 == 1) {
          piVar3 = (int *)((long)local_c0 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_58 = (long *)*plVar1;
            FUN_00c44438(lVar9 + 0x8040,&local_58);
          }
        }
        else if (sVar12 == 0) goto LAB_00ee31d8;
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (local_f8 != (long *)0x0) {
        (**(code **)(*local_f8 + 0x20))();
      }
      plVar1 = local_108;
      if (local_108 != (long *)0x0) {
        plVar17 = local_108 + 3;
        do {
          sVar12 = (short)*plVar17;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(short *)plVar17 = sVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar12 == 1) {
          piVar3 = (int *)((long)local_108 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_58 = (long *)*plVar1;
            FUN_00c44438(lVar9 + 0x8040,&local_58);
          }
        }
        else if (sVar12 == 0) goto LAB_00ee31d8;
      }
      plVar1 = local_120;
      if (local_120 != (long *)0x0) {
        plVar17 = local_120 + 3;
        do {
          sVar12 = (short)*plVar17;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(short *)plVar17 = sVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar12 == 1) {
          piVar3 = (int *)((long)local_120 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            pplVar11 = &local_58;
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_58 = (long *)*plVar1;
LAB_00ee3584:
            FUN_00c44438(lVar9 + 0x8040,pplVar11);
          }
        }
        else {
LAB_00ee31d4:
          if (sVar12 == 0) {
LAB_00ee31d8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
    }
    else {
      plVar19 = local_68 + 5;
      (**(code **)(*local_68 + 0x18))(&local_f8,local_68);
      local_110 = (long *)0x0;
      local_108 = (long *)0x0;
      plVar17 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        plVar17 = plVar19;
      }
      if ((long *)local_f8[2] == plVar17) {
        FUN_00d1f904(&local_110,&local_f8);
      }
      if (local_f8 != (long *)0x0) {
        plVar1 = local_f8 + 3;
        do {
          sVar12 = (short)*plVar1;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(short *)plVar1 = sVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar12 == 1) {
          piVar3 = (int *)((long)local_f8 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_120 = (long *)*local_f8;
            FUN_00c44438(lVar9 + 0x8040,&local_120);
          }
        }
        else if (sVar12 == 0) goto LAB_00ee31d8;
      }
      local_e8 = 0;
      local_f8 = local_60;
      local_f0 = (long *)0x0;
      FUN_00dc7a68(&local_f0,&local_110);
      local_80[8] = (long)local_f8;
      FUN_00dc7a68(local_80 + 9,&local_f0);
      plVar1 = local_f0;
      if (local_f0 != (long *)0x0) {
        plVar17 = local_f0 + 3;
        do {
          sVar12 = (short)*plVar17;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(short *)plVar17 = sVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar12 == 1) {
          piVar3 = (int *)((long)local_f0 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_120 = (long *)*plVar1;
            FUN_00c44438(lVar9 + 0x8040,&local_120);
          }
        }
        else if (sVar12 == 0) goto LAB_00ee31d8;
      }
      plVar1 = local_110;
      if (local_110 != (long *)0x0) {
        plVar17 = local_110 + 3;
        do {
          sVar12 = (short)*plVar17;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(short *)plVar17 = sVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar12 != 1) goto LAB_00ee31d4;
        piVar3 = (int *)((long)local_110 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_120 = (long *)*plVar1;
          goto LAB_00ee3584;
        }
      }
    }
  }
  else {
    lVar9 = local_80[9];
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar9 + 0x1a);
      sVar12 = *(short *)(lVar9 + 0x1a);
LAB_00ee3714:
      sVar4 = *psVar2;
      if (sVar4 == sVar12) {
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_00ee3738;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00ee3738:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x00ee3740;
      puVar14 = *(undefined8 **)(lVar9 + 0x10);
      if (puVar14 != (undefined8 *)0x0) {
        plVar17 = puVar14 + -5;
        (**(code **)*puVar14)(puVar14);
        uVar13 = FUN_00edf638();
        plVar1 = plVar17;
        if ((uVar13 & 1) == 0) {
          plVar1 = (long *)0x0;
        }
        FUN_01db74ec(&local_68,plVar1);
        plVar1 = local_68;
        lVar9 = puVar14[1];
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar12 = *psVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar12 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar17 + 0x50))(plVar17);
        }
        else if (sVar12 == 0) goto LAB_00ee3124;
        if (plVar1 == (long *)0x0) goto LAB_00ee2fcc;
        goto LAB_00ee2f04;
      }
    }
LAB_00ee2fcc:
    FUN_00ee3ac0(&local_f8,*(undefined8 *)(param_2 + 0x3a0),param_3,&local_60);
    FUN_00ee3a28(&local_68,&local_f8);
    if (local_f8 != (long *)0x0) {
      lVar9 = local_f8[6];
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar12 = *psVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_f8 + 0x50))();
      }
      else if (sVar12 == 0) goto LAB_00ee3124;
    }
    plVar17 = local_68;
    plVar19 = local_68 + 5;
    (**(code **)(*local_68 + 0x18))(&local_f8,local_68);
    local_110 = (long *)0x0;
    local_108 = (long *)0x0;
    plVar1 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      plVar1 = plVar19;
    }
    if ((long *)local_f8[2] == plVar1) {
      FUN_00d1f904(&local_110,&local_f8);
    }
    plVar1 = local_f8;
    if (local_f8 != (long *)0x0) {
      plVar17 = local_f8 + 3;
      do {
        sVar12 = (short)*plVar17;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(short *)plVar17 = sVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar12 == 1) {
        piVar3 = (int *)((long)local_f8 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_120 = (long *)*plVar1;
          FUN_00c44438(lVar9 + 0x8040,&local_120);
        }
      }
      else if (sVar12 == 0) goto LAB_00ee31d8;
    }
    FUN_00dc7a68(local_80 + 9,&local_110);
    plVar1 = local_110;
    if (local_110 != (long *)0x0) {
      plVar17 = local_110 + 3;
      do {
        sVar12 = (short)*plVar17;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(short *)plVar17 = sVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar12 != 1) goto LAB_00ee31d4;
      piVar3 = (int *)((long)local_110 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        pplVar11 = &local_f8;
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_f8 = (long *)*plVar1;
        goto LAB_00ee3584;
      }
    }
  }
LAB_00ee2f04:
  if (!bVar18) {
    *(undefined8 *)(param_2 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(param_2 + 0x308),local_68,0);
  *param_1 = local_68;
  if (local_68 != (long *)0x0) {
    lVar9 = local_68[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar12 = *psVar2;
      cVar6 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar18) {
        *psVar2 = sVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar10;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar12 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    if (local_68 != (long *)0x0) {
      lVar9 = local_68[6];
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar12 = *psVar2;
        cVar6 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar18) {
          *psVar2 = sVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar12 == 0) {
LAB_00ee3124:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x00ee2d4c:
  cVar6 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar18) {
    *plVar1 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00ee2d54;
  goto LAB_00ee2d44;
code_r0x00ee3740:
  sVar12 = sVar4;
  if (sVar4 == 0) goto LAB_00ee2fcc;
  goto LAB_00ee3714;
}


