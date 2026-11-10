/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0172c9fc; name: FUN_0172c9fc
 */


void FUN_0172c9fc(long param_1,long param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long **pplVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plStack_1b0;
  long **local_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  long *local_190;
  long *local_188;
  undefined8 local_180;
  long *local_178;
  undefined8 *local_170;
  undefined8 local_168;
  long *local_158;
  undefined8 *local_140;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  ulong uStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 *puStack_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 **ppuStack_e0;
  ulong *local_d8;
  long lStack_d0;
  long ***local_c8;
  long lStack_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 *local_80;
  long **local_78;
  long *local_70 [2];
  
  local_88 = 0;
  local_80 = (undefined8 *)0x0;
  local_78 = (long **)0x0;
  plVar13 = (long *)(param_1 + 0x2f0);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0172ca50;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
        while (*plVar13 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0172ca50;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar5) {
      *plVar13 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0172ca50:
  uVar10 = *(ulong *)(param_1 + 0x290);
  uVar15 = *(ulong *)(param_2 + 8);
  if ((uVar10 & uVar10 - 1) == 0) {
    uVar15 = uVar10 - 1 & uVar15;
  }
  else if (uVar10 <= uVar15) {
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = uVar15 / uVar10;
    }
    uVar15 = uVar15 - uVar6 * uVar10;
  }
  lVar8 = FUN_0172d5ac(param_1 + 0x288,uVar15);
  pplVar9 = &plStack_1b0 + lVar8 * -2;
  local_80 = (undefined8 *)((long)pplVar9 - (lVar8 * 8 + 0xfU & 0xfffffffffffffff0));
  local_78 = pplVar9;
  if (lVar8 != 0) {
    plVar13 = *(long **)(param_1 + 0x3a8);
    *local_80 = 0;
    *pplVar9 = plVar13;
    (&plStack_1b0)[lVar8 * -2 + 1] = (long *)0x0;
    if (lVar8 != 1) {
      (&plStack_1b0)[lVar8 * -2 + 2] = plVar13;
      (&plStack_1b0)[lVar8 * -2 + 3] = (long *)0x0;
      local_80[1] = 0;
      pplVar9 = local_78;
      if (lVar8 != 2) {
        local_78[4] = *(long **)(param_1 + 0x3a8);
        pplVar9[5] = (long *)0x0;
        local_80[2] = 0;
        pplVar9 = local_78;
        if (lVar8 != 3) {
          local_78[6] = *(long **)(param_1 + 0x3a8);
          pplVar9[7] = (long *)0x0;
          local_80[3] = 0;
          pplVar9 = local_78;
          if (lVar8 != 4) {
            local_78[8] = *(long **)(param_1 + 0x3a8);
            pplVar9[9] = (long *)0x0;
            local_80[4] = 0;
            if (lVar8 != 5) {
              lVar11 = 0;
              lVar14 = 5;
              do {
                *(undefined8 *)((long)local_78 + lVar11 + 0x50) = *(undefined8 *)(param_1 + 0x3a8);
                *(undefined8 *)((long)local_78 + lVar11 + 0x58) = 0;
                local_80[lVar14] = 0;
                lVar14 = lVar14 + 1;
                lVar11 = lVar11 + 0x10;
              } while (lVar8 != lVar14);
            }
          }
        }
      }
    }
  }
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x288) + uVar15 * 8);
  local_a8 = *(undefined8 *)(param_1 + 0x290);
  local_a0 = 0;
  if (puVar12 != (undefined8 *)0x0) {
    local_a0 = *puVar12;
  }
  ppuStack_e0 = &local_80;
  local_d8 = &local_88;
  local_c8 = &local_78;
  local_b8 = 0;
  local_e8 = param_2;
  lStack_d0 = param_1;
  lStack_c0 = param_3;
  uStack_b0 = uVar15;
  uStack_98 = uVar15;
  local_90 = local_a8;
  FUN_0172d630(&local_178,&local_a0,&local_b8,&local_e8);
  uVar10 = *(ulong *)(param_1 + 0x290);
  uVar15 = *(ulong *)(param_3 + 8);
  if ((uVar10 & uVar10 - 1) == 0) {
    uVar15 = uVar10 - 1 & uVar15;
  }
  else if (uVar10 <= uVar15) {
    uVar6 = 0;
    if (uVar10 != 0) {
      uVar6 = uVar15 / uVar10;
    }
    uVar15 = uVar15 - uVar6 * uVar10;
  }
  if (local_88 != 0) {
    uVar10 = 0;
    do {
      FUN_00d00258(&local_100,param_1,uVar15,param_3,local_78[uVar10 * 2]);
      if (local_100 == (long *)0x0) {
        puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x288) + uVar15 * 8);
        local_120 = *(undefined8 *)(param_1 + 0x290);
        local_118 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          local_118 = *puVar12;
        }
        local_130 = 0;
        uStack_128 = uVar15;
        uStack_110 = uVar15;
        local_108 = local_120;
        FUN_0172dd50(&local_178,&local_118,&local_130,param_3);
        local_100 = local_178;
        puStack_f8 = local_170;
        local_f0 = local_168;
        if (local_178 == (long *)0x0) {
          local_1a8 = local_78 + uVar10 * 2;
          plVar16 = local_1a8[1];
          (**(code **)(*plVar16 + 0x18))(&local_178,plVar16);
          local_1a0 = (long *)0x0;
          uStack_198 = 0;
          plVar13 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            plVar13 = plVar16 + 5;
          }
          if ((long *)local_178[2] == plVar13) {
            FUN_00d1f904(&local_1a0,&local_178);
          }
          plVar13 = local_178;
          if (local_178 != (long *)0x0) {
            plVar16 = local_178 + 3;
            do {
              sVar3 = (short)*plVar16;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar5) {
                *(short *)plVar16 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_178 + 0x1c);
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
                lVar14 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar14;
                local_190 = (long *)*plVar13;
                FUN_00c44438(lVar14 + 0x8040,&local_190);
              }
            }
            else if (sVar3 == 0) goto LAB_0172d114;
          }
          local_190 = *local_1a8;
          local_180 = 0;
          local_188 = (long *)0x0;
          FUN_00dc7a68(&local_188,&local_1a0);
          FUN_01e40af0(&local_178,param_3,&local_190);
          FUN_01e40770(param_1 + 0x288,&local_178);
          puVar12 = local_140;
          if (local_140 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_140 + 3);
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
              piVar2 = (int *)((long)local_140 + 0x1c);
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
                lVar14 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar14;
                local_70[0] = (long *)*puVar12;
                FUN_00c44438(lVar14 + 0x8040,local_70);
              }
            }
            else if (sVar3 == 0) goto LAB_0172d114;
          }
          if (local_158 != (long *)0x0) {
            (**(code **)(*local_158 + 0x20))();
          }
          if (local_178 != (long *)0x0) {
            (**(code **)(*local_178 + 0x20))();
          }
          plVar13 = local_188;
          if (local_188 != (long *)0x0) {
            plVar16 = local_188 + 3;
            do {
              sVar3 = (short)*plVar16;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar5) {
                *(short *)plVar16 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_188 + 0x1c);
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
                lVar14 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar14;
                local_70[0] = (long *)*plVar13;
                FUN_00c44438(lVar14 + 0x8040,local_70);
              }
            }
            else if (sVar3 == 0) goto LAB_0172d114;
          }
          plVar13 = local_1a0;
          if (local_1a0 != (long *)0x0) {
            plVar16 = local_1a0 + 3;
            do {
              sVar3 = (short)*plVar16;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar5) {
                *(short *)plVar16 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 != 1) goto LAB_0172d0a8;
            piVar2 = (int *)((long)local_1a0 + 0x1c);
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
              lVar14 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar14;
              local_70[0] = (long *)*plVar13;
              pplVar9 = local_70;
              goto LAB_0172d2e0;
            }
          }
        }
        else {
          local_1a8 = local_78 + uVar10 * 2;
          plVar16 = local_1a8[1];
          (**(code **)(*plVar16 + 0x18))(&local_190,plVar16);
          local_1a0 = (long *)0x0;
          uStack_198 = 0;
          plVar13 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            plVar13 = plVar16 + 5;
          }
          if ((long *)local_190[2] == plVar13) {
            FUN_00d1f904(&local_1a0,&local_190);
          }
          plVar13 = local_190;
          if (local_190 != (long *)0x0) {
            plVar16 = local_190 + 3;
            do {
              sVar3 = (short)*plVar16;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar5) {
                *(short *)plVar16 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_190 + 0x1c);
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
                lVar14 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar14;
                local_178 = (long *)*plVar13;
                FUN_00c44438(lVar14 + 0x8040,&local_178);
              }
            }
            else if (sVar3 == 0) goto LAB_0172d114;
          }
          local_178 = *local_1a8;
          local_168 = 0;
          local_170 = (undefined8 *)0x0;
          FUN_00dc7a68(&local_170,&local_1a0);
          local_100[8] = (long)local_178;
          FUN_00dc7a68(local_100 + 9,&local_170);
          puVar12 = local_170;
          if (local_170 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_170 + 3);
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
              piVar2 = (int *)((long)local_170 + 0x1c);
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
                lVar14 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar14;
                local_190 = (long *)*puVar12;
                FUN_00c44438(lVar14 + 0x8040,&local_190);
              }
            }
            else if (sVar3 == 0) goto LAB_0172d114;
          }
          plVar13 = local_1a0;
          if (local_1a0 != (long *)0x0) {
            plVar16 = local_1a0 + 3;
            do {
              sVar3 = (short)*plVar16;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar5) {
                *(short *)plVar16 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_1a0 + 0x1c);
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
                lVar14 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar14;
                local_190 = (long *)*plVar13;
                pplVar9 = &local_190;
LAB_0172d2e0:
                FUN_00c44438(lVar14 + 0x8040,pplVar9);
              }
            }
            else {
LAB_0172d0a8:
              if (sVar3 == 0) {
LAB_0172d114:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_88);
  }
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f8));
  if (local_88 != 0) {
    FUN_00d005f8(*(undefined8 *)(param_1 + 0x308),local_78[1],0);
    FUN_00d1f59c(local_78[1]);
    FUN_0172d6e4(*local_80,local_78 + 1);
    if (1 < local_88) {
      FUN_00d005f8(*(undefined8 *)(param_1 + 0x308),local_78[3],0);
      FUN_00d1f59c(local_78[3]);
      FUN_0172d6e4(local_80[1],local_78 + 3);
      if (2 < local_88) {
        uVar10 = 2;
        lVar14 = 0x28;
        do {
          FUN_00d005f8(*(undefined8 *)(param_1 + 0x308),*(undefined8 *)((long)local_78 + lVar14),0);
          FUN_00d1f59c(*(undefined8 *)((long)local_78 + lVar14));
          FUN_0172d6e4(local_80[uVar10],(long)local_78 + lVar14);
          uVar10 = uVar10 + 1;
          lVar14 = lVar14 + 0x10;
        } while (uVar10 < local_88);
      }
    }
  }
  if (lVar8 != 0) {
    lVar14 = 0;
    do {
      plVar13 = local_78[lVar14 * 2 + 1];
      if (plVar13 != (long *)0x0) {
        lVar11 = plVar13[6];
        psVar1 = (short *)(lVar11 + 0x1a);
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
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_0172ccac;
      }
      plVar13 = (long *)local_80[lVar14];
      if (plVar13 != (long *)0x0) {
        lVar11 = plVar13[6];
        psVar1 = (short *)(lVar11 + 0x1a);
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
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))();
        }
        else if (sVar3 == 0) {
LAB_0172ccac:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar8);
  }
  return;
}


