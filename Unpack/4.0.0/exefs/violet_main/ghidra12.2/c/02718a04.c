/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02718a04; name: FUN_02718a04
 */


void FUN_02718a04(long param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 ***pppuVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 **ppuVar15;
  ulong uVar16;
  undefined8 **ppuVar17;
  undefined8 **local_1c0 [5];
  undefined8 *local_198 [2];
  undefined8 **local_188;
  undefined8 *local_180;
  undefined8 local_178;
  undefined8 local_170;
  long *local_168;
  undefined4 local_160;
  undefined8 **local_158;
  undefined8 *local_150;
  undefined8 *puStack_148;
  undefined8 local_140;
  ulong uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  ulong uStack_120;
  undefined8 local_118;
  undefined8 **local_110;
  undefined8 *puStack_108;
  undefined8 local_100;
  long local_f8;
  undefined8 **ppuStack_f0;
  ulong *local_e8;
  long lStack_e0;
  undefined8 ****local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 *local_90;
  undefined8 ***local_88;
  undefined8 **local_80;
  undefined8 uStack_78;
  undefined8 *local_70 [2];
  
  local_98 = 0;
  local_90 = (undefined8 *)0x0;
  local_88 = (undefined8 ***)0x0;
  plVar9 = (long *)(param_1 + 0x2f0);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02718a58;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
        while (*plVar9 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02718a58;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02718a58:
  uVar11 = *(ulong *)(param_1 + 0x290);
  uVar16 = *(ulong *)(param_2 + 8);
  if ((uVar11 & uVar11 - 1) == 0) {
    uVar16 = uVar11 - 1 & uVar16;
  }
  else if (uVar11 <= uVar16) {
    uVar6 = 0;
    if (uVar11 != 0) {
      uVar6 = uVar16 / uVar11;
    }
    uVar16 = uVar16 - uVar6 * uVar11;
  }
  lVar8 = FUN_0172d5ac(param_1 + 0x288,uVar16);
  pppuVar10 = local_1c0 + lVar8 * -2 + -2;
  local_90 = (undefined8 *)((long)pppuVar10 - (lVar8 * 8 + 0xfU & 0xfffffffffffffff0));
  local_88 = pppuVar10;
  if (lVar8 != 0) {
    ppuVar15 = *(undefined8 ***)(param_1 + 0x3a8);
    *local_90 = 0;
    *pppuVar10 = ppuVar15;
    local_1c0[lVar8 * -2 + -1] = (undefined8 **)0x0;
    if (lVar8 != 1) {
      local_1c0[lVar8 * -2] = ppuVar15;
      local_1c0[lVar8 * -2 + 1] = (undefined8 **)0x0;
      local_90[1] = 0;
      if (lVar8 != 2) {
        lVar12 = 0;
        lVar13 = 2;
        do {
          *(undefined8 *)((long)local_88 + lVar12 + 0x20) = *(undefined8 *)(param_1 + 0x3a8);
          *(undefined8 *)((long)local_88 + lVar12 + 0x28) = 0;
          local_90[lVar13] = 0;
          lVar13 = lVar13 + 1;
          lVar12 = lVar12 + 0x10;
        } while (lVar8 != lVar13);
      }
    }
  }
  puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x288) + uVar16 * 8);
  local_b8 = *(undefined8 *)(param_1 + 0x290);
  local_b0 = 0;
  if (puVar14 != (undefined8 *)0x0) {
    local_b0 = *puVar14;
  }
  ppuStack_f0 = &local_90;
  local_e8 = &local_98;
  local_d8 = &local_88;
  local_c8 = 0;
  local_f8 = param_2;
  lStack_e0 = param_1;
  puStack_d0 = param_3;
  uStack_c0 = uVar16;
  uStack_a8 = uVar16;
  local_a0 = local_b8;
  FUN_02719700(&local_188,&local_b0,&local_c8,&local_f8);
  uVar11 = *(ulong *)(param_1 + 0x290);
  uVar16 = param_3[1];
  if ((uVar11 & uVar11 - 1) == 0) {
    uVar16 = uVar11 - 1 & uVar16;
  }
  else if (uVar11 <= uVar16) {
    uVar6 = 0;
    if (uVar11 != 0) {
      uVar6 = uVar16 / uVar11;
    }
    uVar16 = uVar16 - uVar6 * uVar11;
  }
  if (local_98 != 0) {
    uVar11 = 0;
    local_1c0[0] = &local_180;
    local_1c0[1] = local_198;
    do {
      FUN_00d00258(&local_110,param_1,uVar16,param_3,local_88[uVar11 * 2]);
      if (local_110 == (undefined8 **)0x0) {
        puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x288) + uVar16 * 8);
        local_130 = *(undefined8 *)(param_1 + 0x290);
        local_128 = 0;
        if (puVar14 != (undefined8 *)0x0) {
          local_128 = *puVar14;
        }
        local_140 = 0;
        uStack_138 = uVar16;
        uStack_120 = uVar16;
        local_118 = local_130;
        FUN_027197c0(&local_188,&local_128,&local_140,param_3);
        local_110 = local_188;
        puStack_108 = local_180;
        local_100 = local_178;
        if (local_188 == (undefined8 **)0x0) {
          pppuVar10 = local_88 + uVar11 * 2;
          ppuVar17 = pppuVar10[1];
          (*(code *)(*ppuVar17)[3])(&local_80,ppuVar17);
          local_1c0[2] = (undefined8 **)0x0;
          local_1c0[3] = (undefined8 **)0x0;
          ppuVar15 = (undefined8 **)0x0;
          if (ppuVar17 != (undefined8 **)0x0) {
            ppuVar15 = ppuVar17 + 5;
          }
          if ((undefined8 **)local_80[2] == ppuVar15) {
            FUN_00d1f904(local_1c0 + 2,&local_80);
          }
          ppuVar15 = local_80;
          if (local_80 != (undefined8 **)0x0) {
            ppuVar17 = local_80 + 3;
            do {
              sVar3 = *(short *)ppuVar17;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar5) {
                *(short *)ppuVar17 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_80 + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar13 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar13;
                local_70[0] = *ppuVar15;
                FUN_00c44438(lVar13 + 0x8040,local_70);
              }
            }
            else if (sVar3 == 0) goto LAB_02719514;
          }
          local_1c0[4] = *pppuVar10;
          *local_1c0[1] = (undefined8 *)0x0;
          local_1c0[1][1] = (undefined8 *)0x0;
          FUN_00dc7a68(local_1c0[1],local_1c0 + 2);
          local_188 = (undefined8 **)*param_3;
          if (local_188 != (undefined8 **)0x0) {
            (*(code *)(*local_188)[3])();
          }
          local_180 = (undefined8 *)param_3[1];
          local_178 = param_3[2];
          local_170 = param_3[3];
          local_168 = (long *)param_3[4];
          if (local_168 != (long *)0x0) {
            (**(code **)(*local_168 + 0x18))();
          }
          local_160 = *(undefined4 *)(param_3 + 5);
          local_158 = local_1c0[4];
          local_150 = (undefined8 *)0x0;
          (&local_150)[1] = (undefined8 *)0x0;
          FUN_00dc7a68(&local_150,local_1c0[1]);
          FUN_00fa01a0(param_1 + 0x288,&local_188);
          puVar14 = local_150;
          if (local_150 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_150 + 3);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_150 + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar13 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar13;
                local_80 = (undefined8 **)*puVar14;
                FUN_00c44438(lVar13 + 0x8040,&local_80);
              }
            }
            else if (sVar3 == 0) goto LAB_02719514;
          }
          if (local_168 != (long *)0x0) {
            (**(code **)(*local_168 + 0x20))();
          }
          if (local_188 != (undefined8 **)0x0) {
            (*(code *)(*local_188)[4])();
          }
          puVar14 = local_198[0];
          if (local_198[0] != (undefined8 *)0x0) {
            psVar1 = (short *)(local_198[0] + 3);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_198[0] + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar13 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar13;
                local_80 = (undefined8 **)*puVar14;
                FUN_00c44438(lVar13 + 0x8040,&local_80);
              }
            }
            else if (sVar3 == 0) goto LAB_02719514;
          }
          ppuVar15 = local_1c0[2];
          if (local_1c0[2] != (undefined8 **)0x0) {
            psVar1 = (short *)(local_1c0[2] + 3);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 != 1) goto LAB_02718cd0;
            piVar2 = (int *)((long)local_1c0[2] + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar13 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar13;
              local_80 = (undefined8 **)*ppuVar15;
              pppuVar10 = &local_80;
              goto LAB_027191e4;
            }
          }
        }
        else {
          pppuVar10 = local_88 + uVar11 * 2;
          ppuVar17 = pppuVar10[1];
          (*(code *)(*ppuVar17)[3])(local_1c0 + 4,ppuVar17);
          local_80 = (undefined8 **)0x0;
          uStack_78 = 0;
          ppuVar15 = (undefined8 **)0x0;
          if (ppuVar17 != (undefined8 **)0x0) {
            ppuVar15 = ppuVar17 + 5;
          }
          if ((undefined8 **)local_1c0[4][2] == ppuVar15) {
            FUN_00d1f904(&local_80,local_1c0 + 4);
          }
          ppuVar15 = local_1c0[4];
          if (local_1c0[4] != (undefined8 **)0x0) {
            ppuVar17 = local_1c0[4] + 3;
            do {
              sVar3 = *(short *)ppuVar17;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar5) {
                *(short *)ppuVar17 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_1c0[4] + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar13 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar13;
                local_1c0[2] = (undefined8 **)*ppuVar15;
                FUN_00c44438(lVar13 + 0x8040,local_1c0 + 2);
              }
            }
            else if (sVar3 == 0) goto LAB_02719514;
          }
          ppuVar15 = local_1c0[0];
          local_188 = *pppuVar10;
          *local_1c0[0] = (undefined8 *)0x0;
          local_1c0[0][1] = (undefined8 *)0x0;
          FUN_00dc7a68(local_1c0[0],&local_80);
          local_110[8] = local_188;
          FUN_00dc7a68(local_110 + 9,ppuVar15);
          puVar14 = local_180;
          if (local_180 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_180 + 3);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_180 + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar13 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar13;
                local_1c0[4] = (undefined8 **)*puVar14;
                FUN_00c44438(lVar13 + 0x8040,local_1c0 + 4);
              }
            }
            else if (sVar3 == 0) goto LAB_02719514;
          }
          ppuVar15 = local_80;
          if (local_80 != (undefined8 **)0x0) {
            ppuVar17 = local_80 + 3;
            do {
              sVar3 = *(short *)ppuVar17;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
              if (bVar5) {
                *(short *)ppuVar17 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_80 + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar13 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar13;
                local_1c0[4] = (undefined8 **)*ppuVar15;
                pppuVar10 = local_1c0 + 4;
LAB_027191e4:
                FUN_00c44438(lVar13 + 0x8040,pppuVar10);
              }
            }
            else {
LAB_02718cd0:
              if (sVar3 == 0) {
LAB_02719514:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < local_98);
  }
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f8));
  if (local_98 != 0) {
    uVar11 = 0;
    lVar13 = 8;
    do {
      FUN_00d005f8(*(undefined8 *)(param_1 + 0x308),*(undefined8 *)((long)local_88 + lVar13),0);
      FUN_00d1f59c(*(undefined8 *)((long)local_88 + lVar13));
      FUN_0172d6e4(local_90[uVar11],(long)local_88 + lVar13);
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x10;
    } while (uVar11 < local_98);
  }
  if (lVar8 != 0) {
    lVar13 = 0;
    do {
      ppuVar15 = local_88[lVar13 * 2 + 1];
      if (ppuVar15 != (undefined8 **)0x0) {
        puVar14 = ppuVar15[6];
        psVar1 = (short *)((long)puVar14 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          puVar14[2] = 0;
          (*(code *)(*ppuVar15)[10])();
        }
        else if (sVar3 == 0) goto LAB_02719028;
      }
      plVar9 = (long *)local_90[lVar13];
      if (plVar9 != (long *)0x0) {
        lVar12 = plVar9[6];
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))();
        }
        else if (sVar3 == 0) {
LAB_02719028:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar8);
  }
  return;
}


