/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f975c8; name: FUN_00f975c8
 */


void FUN_00f975c8(long param_1)

{
  undefined *puVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long **pplVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  short sVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  bool bVar25;
  long *local_1b0;
  long *local_1a8;
  undefined8 *local_1a0;
  undefined8 uStack_198;
  long *local_190;
  long *local_188;
  undefined4 local_180;
  undefined *local_178;
  long local_170 [8];
  undefined8 uStack_130;
  undefined8 local_128;
  long *local_120;
  undefined8 *local_118;
  undefined8 uStack_110;
  long *local_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  long *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  undefined4 local_c8;
  long *local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  local_120 = (long *)FUN_00f93c28(*(undefined8 *)(param_1 + 0x10));
  local_120 = (long *)*local_120;
  if (local_120 != (long *)0x0) {
    plVar24 = local_120 + 5;
    do {
      lVar22 = *plVar24;
      cVar6 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar25) {
        *(int *)plVar24 = (int)lVar22 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar22 == -1) {
LAB_00f98ca0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_00fa0eec();
  puVar20 = &DAT_045d72a0;
  puVar1 = PTR_DAT_047e1258 + 0x10;
LAB_00f97664:
  local_170[7] = *puVar20;
  uStack_130 = puVar20[1];
  local_170[6] = 0;
  local_170[4] = 0;
  local_170[5] = 0;
  local_170[0] = 0;
  local_170[1] = 0;
  local_128 = puVar20[2];
  local_170[2] = 0;
  local_170[3] = 0;
  local_178 = puVar1;
  FUN_00ffd4c8(&local_1a8,PTR_DAT_047dd660,local_170 + 7,&DAT_03c886bc);
  plVar24 = *(long **)(param_1 + 8);
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  lVar22 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar22;
  if ((plVar24 == (long *)0x0) ||
     ((uVar23 = (**(code **)(*plVar24 + 0xb8))(plVar24), (uVar23 & 1) != 0 &&
      (uVar23 = (**(code **)(**(long **)(lVar22 + 0x3a0) + 0xb8))(), (uVar23 & 1) != 0)))) {
    plVar24 = *(long **)(lVar22 + 0x3a0);
  }
  local_90 = (long *)0x0;
  plVar10 = (long *)(lVar22 + 0x2f0);
  lVar21 = *plVar10;
  local_88 = plVar24;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar21) {
    lVar9 = nn::os::GetCurrentThread();
LAB_00f976fc:
    if (*plVar10 == 0) goto code_r0x00f97704;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0x2f8));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0x2f8));
          while (*plVar10 == 0) {
            cVar6 = '\x01';
            bVar25 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar25) {
              *plVar10 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00f9770c;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar25) {
        *plVar10 = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00f9770c:
    bVar25 = false;
    goto LAB_00f97710;
  }
  bVar25 = true;
LAB_00f97710:
  puVar19 = *(undefined8 **)(lVar22 + 0x290);
  if (((ulong)puVar19 & (ulong)((long)puVar19 + -1)) == 0) {
    puVar13 = (undefined8 *)((ulong)((long)puVar19 + -1) & (ulong)local_1a0);
  }
  else {
    puVar13 = local_1a0;
    if (puVar19 <= local_1a0) {
      uVar23 = 0;
      if (puVar19 != (undefined8 *)0x0) {
        uVar23 = (ulong)local_1a0 / (ulong)puVar19;
      }
      puVar13 = (undefined8 *)((long)local_1a0 - uVar23 * (long)puVar19);
    }
  }
  FUN_00d00258(&local_a8,lVar22,puVar13,&local_1a8,local_88);
  if (local_a8 != (long *)0x0) {
    lVar9 = local_a8[9];
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar9 + 0x1a);
      sVar18 = *(short *)(lVar9 + 0x1a);
      do {
        sVar5 = *psVar2;
        if (sVar5 == sVar18) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00f98d24;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f98d24:
          bVar7 = false;
        }
        if (bVar7) {
          puVar19 = *(undefined8 **)(lVar9 + 0x10);
          if (puVar19 != (undefined8 *)0x0) {
            plVar24 = puVar19 + -5;
            puVar13 = (undefined8 *)(**(code **)*puVar19)(puVar19);
            if (((*PTR_DAT_047e0e28 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047e0e28), iVar8 != 0)) {
              if (((*PTR_DAT_047d93b0 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d93b0), iVar8 != 0)) {
                uVar11 = FUN_01df5d9c();
                *(undefined8 *)PTR_DAT_047d93b8 = uVar11;
                __cxa_guard_release(PTR_DAT_047d93b0);
              }
              *(undefined **)PTR_DAT_047e0e30 = PTR_DAT_047d93b8;
              __cxa_guard_release(PTR_DAT_047e0e28);
            }
            if (puVar13 != (undefined8 *)0x0) goto LAB_00f98d6c;
            plVar10 = (long *)0x0;
            goto LAB_00f98d80;
          }
          break;
        }
        sVar18 = sVar5;
      } while (sVar5 != 0);
    }
    goto LAB_00f985d0;
  }
  plVar24 = (long *)FUN_00f9930c(&local_f0,*(undefined8 *)(lVar22 + 0x3a0),&local_1a8,&local_88);
  if (plVar24 == (long *)0x0) goto LAB_00f97764;
  lVar9 = plVar24[6];
  if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00f98dec;
  psVar2 = (short *)(lVar9 + 0x1a);
  do {
    sVar18 = *psVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar18 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar18 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar11;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
LAB_00f97764:
    plVar10 = local_90;
    local_90 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[6];
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_00f98778;
    }
    puVar19 = *(undefined8 **)(*(long *)(lVar22 + 0x288) + (long)puVar13 * 8);
    local_98 = *(undefined8 **)(lVar22 + 0x290);
    local_a8 = (long *)0x0;
    if (puVar19 != (undefined8 *)0x0) {
      local_a8 = (long *)*puVar19;
    }
    puStack_a0 = puVar13;
    local_90 = plVar24;
    if (local_a8 != (long *)0x0) {
      if (((ulong)local_98 & (ulong)((long)local_98 + -1)) == 0) {
        do {
          plVar10 = (long *)PTR_DAT_047d8b70;
          if (local_a8[2] != 0) {
            plVar10 = (long *)(local_a8[2] + 0x30);
          }
          plVar4 = (long *)PTR_DAT_047d8b70;
          if (local_1a8 != (long *)0x0) {
            plVar4 = local_1a8 + 6;
          }
          if ((*plVar10 == *plVar4) && ((local_a8[9] == 0 || (*(short *)(local_a8[9] + 0x1a) == 0)))
             ) goto LAB_00f9868c;
          local_a8 = (long *)*local_a8;
        } while ((local_a8 != (long *)0x0) &&
                ((undefined8 *)(local_a8[1] & (ulong)((long)local_98 + -1)) == puVar13));
      }
      else {
        do {
          plVar10 = (long *)PTR_DAT_047d8b70;
          if (local_a8[2] != 0) {
            plVar10 = (long *)(local_a8[2] + 0x30);
          }
          plVar4 = (long *)PTR_DAT_047d8b70;
          if (local_1a8 != (long *)0x0) {
            plVar4 = local_1a8 + 6;
          }
          if ((*plVar10 == *plVar4) && ((local_a8[9] == 0 || (*(short *)(local_a8[9] + 0x1a) == 0)))
             ) goto LAB_00f9868c;
          local_a8 = (long *)*local_a8;
          if (local_a8 == (long *)0x0) break;
          puVar19 = (undefined8 *)local_a8[1];
          if (local_98 <= puVar19) {
            uVar23 = 0;
            if (local_98 != (undefined8 *)0x0) {
              uVar23 = (ulong)puVar19 / (ulong)local_98;
            }
            puVar19 = (undefined8 *)((long)puVar19 - uVar23 * (long)local_98);
          }
        } while (puVar19 == puVar13);
      }
    }
    local_a8 = (long *)0x0;
    (**(code **)(*plVar24 + 0x18))(&local_80,plVar24);
    local_118 = (undefined8 *)0x0;
    uStack_110 = 0;
    plVar10 = (long *)0x0;
    if (plVar24 != (long *)0x0) {
      plVar10 = plVar24 + 5;
    }
    if ((long *)local_80[2] == plVar10) {
      FUN_00d1f904(&local_118,&local_80);
    }
    plVar24 = local_80;
    if (local_80 != (long *)0x0) {
      plVar10 = local_80 + 3;
      do {
        sVar18 = (short)*plVar10;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *(short *)plVar10 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        piVar3 = (int *)((long)local_80 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
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
          local_70[0] = *plVar24;
          FUN_00c44438(lVar9 + 0x8040,local_70);
        }
      }
      else if (sVar18 == 0) goto LAB_00f987b8;
    }
    local_108 = local_88;
    local_100 = (undefined8 *)0x0;
    uStack_f8 = 0;
    FUN_00dc7a68(&local_100,&local_118);
    local_f0 = local_1a8;
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x18))();
    }
    local_e8 = local_1a0;
    local_e0 = uStack_198;
    local_d8 = local_190;
    local_d0 = local_188;
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x18))();
    }
    local_c8 = local_180;
    local_c0 = local_108;
    local_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    FUN_00dc7a68(&local_b8,&local_100);
    FUN_00f99c78(lVar22 + 0x288,&local_f0);
    puVar19 = local_b8;
    if (local_b8 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_b8 + 3);
      do {
        sVar18 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        piVar3 = (int *)((long)local_b8 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
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
          local_80 = (long *)*puVar19;
          FUN_00c44438(lVar9 + 0x8040,&local_80);
        }
      }
      else if (sVar18 == 0) goto LAB_00f987b8;
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    puVar19 = local_100;
    if (local_100 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_100 + 3);
      do {
        sVar18 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        piVar3 = (int *)((long)local_100 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
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
          local_80 = (long *)*puVar19;
          FUN_00c44438(lVar9 + 0x8040,&local_80);
        }
      }
      else if (sVar18 == 0) goto LAB_00f987b8;
    }
    puVar19 = local_118;
    if (local_118 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_118 + 3);
      do {
        sVar18 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        piVar3 = (int *)((long)local_118 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 == -1) goto LAB_00f97884;
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_80 = (long *)*puVar19;
        lVar9 = lVar9 + 0x8040;
        pplVar14 = &local_80;
        goto LAB_00f97ec4;
      }
      goto LAB_00f97be0;
    }
    goto LAB_00f97884;
  }
  if (sVar18 != -1) goto LAB_00f97764;
  goto LAB_00f98928;
code_r0x00f97704:
  cVar6 = '\x01';
  bVar25 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar25) {
    *plVar10 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00f9770c;
  goto LAB_00f976fc;
  while( true ) {
    puVar13 = (undefined8 *)*puVar13;
    plVar10 = (long *)0x0;
    if (puVar13 == (undefined8 *)0x0) break;
LAB_00f98d6c:
    if (puVar13 == (undefined8 *)PTR_DAT_047e0e30) {
      plVar10 = plVar24;
      break;
    }
  }
LAB_00f98d80:
  FUN_01db74ec(&local_90,plVar10);
  plVar10 = local_90;
  lVar9 = puVar19[1];
  psVar2 = (short *)(lVar9 + 0x1a);
  do {
    sVar18 = *psVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar18 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*plVar24 + 0x50))(plVar24);
  }
  else if (sVar18 == 0) goto LAB_00f98778;
  if (plVar10 == (long *)0x0) {
LAB_00f985d0:
    plVar24 = (long *)FUN_00f9930c(&local_f0,*(undefined8 *)(lVar22 + 0x3a0),&local_1a8,&local_88);
    if (plVar24 != (long *)0x0) {
      lVar9 = plVar24[6];
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00f98dec;
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar11;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_00f98928;
    }
    plVar10 = local_90;
    local_90 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[6];
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_00f98778;
    }
    local_90 = plVar24;
    (**(code **)(*plVar24 + 0x18))(&local_f0,plVar24);
    local_108 = (long *)0x0;
    local_100 = (undefined8 *)0x0;
    plVar10 = (long *)0x0;
    if (plVar24 != (long *)0x0) {
      plVar10 = plVar24 + 5;
    }
    if ((long *)local_f0[2] == plVar10) {
      FUN_00d1f904(&local_108,&local_f0);
    }
    plVar24 = local_f0;
    if (local_f0 != (long *)0x0) {
      plVar10 = local_f0 + 3;
      do {
        sVar18 = (short)*plVar10;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *(short *)plVar10 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        piVar3 = (int *)((long)local_f0 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
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
          local_80 = (long *)*plVar24;
          FUN_00c44438(lVar9 + 0x8040,&local_80);
        }
      }
      else if (sVar18 == 0) goto LAB_00f987b8;
    }
    FUN_00dc7a68(local_a8 + 9,&local_108);
    plVar24 = local_108;
    if (local_108 != (long *)0x0) {
      plVar10 = local_108 + 3;
      do {
        sVar18 = (short)*plVar10;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *(short *)plVar10 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 != 1) goto LAB_00f97be0;
      piVar3 = (int *)((long)local_108 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
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
        local_f0 = (long *)*plVar24;
        lVar9 = lVar9 + 0x8040;
        pplVar14 = &local_f0;
        goto LAB_00f97ec4;
      }
    }
  }
LAB_00f97884:
  if (!bVar25) {
    *(undefined8 *)(lVar22 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar22 + 0x308),local_90,0);
  local_a8 = local_90;
  if (local_90 != (long *)0x0) {
    lVar22 = local_90[6];
    if (*(long *)(lVar22 + 0x10) == 0) {
LAB_00f98dec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar2;
      cVar6 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar25) {
        *psVar2 = sVar18 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar11;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) {
LAB_00f98928:
      pcVar12 = "count != 0";
      pcVar15 = "AddReference";
      pcVar16 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar17 = "Reference counter overflows.";
      goto LAB_00f98ce8;
    }
    if (local_90 != (long *)0x0) {
      lVar22 = local_90[6];
      psVar2 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar6 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar25) {
          *psVar2 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_00f98778;
    }
  }
  FUN_00f99704(local_170,&local_a8);
  if (local_a8 != (long *)0x0) {
    lVar22 = local_a8[6];
    psVar2 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar2;
      cVar6 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar25) {
        *psVar2 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*local_a8 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_00f98778;
  }
  if (local_170[0] != 0) {
    FUN_00f9b598(&local_f0,local_170);
    FUN_00cfe35c(local_f0,local_170 + 2,1);
    FUN_00d1f59c(local_f0);
    if (local_f0 != (long *)0x0) {
      lVar22 = local_f0[6];
      psVar2 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar2;
        cVar6 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar25) {
          *psVar2 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_f0 + 0x50))();
      }
      else if (sVar18 == 0) {
LAB_00f98778:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  uVar23 = *(ulong *)(param_1 + 0x270);
  if (uVar23 < *(ulong *)(param_1 + 0x278)) {
    FUN_00f994a4(param_1 + 0x280,uVar23,&local_178);
    *(ulong *)(param_1 + 0x270) = uVar23 + 0x40;
  }
  else {
    FUN_00fa2630(param_1 + 0x268,&local_178);
  }
  plVar24 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar22 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar22 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = plVar24;
  *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x1e0,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar24 + 0xe8))(plVar24);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00f9ab80(plVar10,&local_120,&local_178);
  *(undefined4 *)(plVar10 + 3) = 0x801e0;
  plVar10[1] = (long)plVar24;
  plVar10[2] = (long)plVar10;
  plVar24 = plVar10 + 5;
  *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
  do {
    lVar22 = *plVar24;
    cVar6 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar25) {
      *(int *)plVar24 = (int)lVar22 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if ((int)lVar22 == -1) goto LAB_00f98ca0;
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  do {
    lVar22 = *plVar24;
    cVar6 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar25) {
      *(int *)plVar24 = (int)lVar22 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  local_1b0 = plVar10;
  if ((int)lVar22 == -1) goto LAB_00f98ca0;
  FUN_00f99058(uVar11,plVar10 + 7,&local_1b0);
  if (local_1b0 != (long *)0x0) {
    plVar4 = local_1b0 + 5;
    do {
      lVar22 = *plVar4;
      iVar8 = (int)lVar22 + -1;
      cVar6 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar25) {
        *(int *)plVar4 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_1b0 + 0x10))();
    }
    else if ((int)lVar22 == 0) goto LAB_00f98cc8;
  }
  do {
    lVar22 = *plVar24;
    iVar8 = (int)lVar22 + -1;
    cVar6 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar25) {
      *(int *)plVar24 = iVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  else if ((int)lVar22 == 0) goto LAB_00f98cc8;
  FUN_00f991a8(&local_178);
  puVar20 = puVar20 + 3;
  if (puVar20 == (undefined8 *)0x45d7a50) goto LAB_00f97ecc;
  goto LAB_00f97664;
LAB_00f9868c:
  (**(code **)(*plVar24 + 0x18))(&local_108,plVar24);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  plVar10 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    plVar10 = plVar24 + 5;
  }
  if ((long *)local_108[2] == plVar10) {
    FUN_00d1f904(&local_80,&local_108);
  }
  plVar24 = local_108;
  if (local_108 != (long *)0x0) {
    plVar10 = local_108 + 3;
    do {
      sVar18 = (short)*plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *(short *)plVar10 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      piVar3 = (int *)((long)local_108 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
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
        local_f0 = (long *)*plVar24;
        FUN_00c44438(lVar9 + 0x8040,&local_f0);
      }
    }
    else if (sVar18 == 0) goto LAB_00f987b8;
  }
  local_e0 = 0;
  local_f0 = local_88;
  local_e8 = (undefined8 *)0x0;
  FUN_00dc7a68(&local_e8,&local_80);
  local_a8[8] = (long)local_f0;
  FUN_00dc7a68(local_a8 + 9,&local_e8);
  puVar19 = local_e8;
  if (local_e8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_e8 + 3);
    do {
      sVar18 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      piVar3 = (int *)((long)local_e8 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
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
        local_108 = (long *)*puVar19;
        FUN_00c44438(lVar9 + 0x8040,&local_108);
      }
    }
    else if (sVar18 == 0) goto LAB_00f987b8;
  }
  plVar24 = local_80;
  if (local_80 != (long *)0x0) {
    plVar10 = local_80 + 3;
    do {
      sVar18 = (short)*plVar10;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *(short *)plVar10 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      piVar3 = (int *)((long)local_80 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
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
        local_108 = (long *)*plVar24;
        lVar9 = lVar9 + 0x8040;
        pplVar14 = &local_108;
LAB_00f97ec4:
        FUN_00c44438(lVar9,pplVar14);
      }
    }
    else {
LAB_00f97be0:
      if (sVar18 == 0) {
LAB_00f987b8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  goto LAB_00f97884;
LAB_00f97ecc:
  FUN_00fa13c0(&local_f0);
  FUN_00f9c014(param_1 + 0x2a0,0,&local_f0,0,0);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  plVar24 = local_120;
  uVar11 = FUN_00f9a284(*(undefined8 *)(param_1 + 0x2a8),0);
  puVar1 = PTR_s_AODepthSmaller_047e1260;
  FUN_00f9a2cc(&local_f0,plVar24,PTR_s_AODepthSmaller_047e1260,uVar11);
  plVar24 = local_d0;
  if (*(char *)(param_1 + 0x2e0) == '\0') {
    if ((char)local_f0 != '\0') {
      *(undefined8 **)(param_1 + 0x2e8) = local_e8;
      *(undefined8 *)(param_1 + 0x2f0) = local_e0;
      *(long **)(param_1 + 0x2f8) = local_d8;
      local_d0 = (long *)0x0;
      *(long **)(param_1 + 0x300) = plVar24;
      *(undefined1 *)(param_1 + 0x2e0) = 1;
      goto LAB_00f97f70;
    }
  }
  else {
    if ((char)local_f0 == '\0') {
      if (*(long **)(param_1 + 0x300) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x300) + 0x20))();
      }
      *(undefined1 *)(param_1 + 0x2e0) = 0;
    }
    else {
      *(undefined8 **)(param_1 + 0x2e8) = local_e8;
      *(undefined8 *)(param_1 + 0x2f0) = local_e0;
      plVar24 = *(long **)(param_1 + 0x300);
      *(undefined8 *)(param_1 + 0x300) = 0;
      *(long **)(param_1 + 0x2f8) = local_d8;
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x20))();
      }
      plVar24 = local_d0;
      local_d0 = (long *)0x0;
      *(long **)(param_1 + 0x300) = plVar24;
    }
LAB_00f97f70:
    if (((char)local_f0 != '\0') && (local_d0 != (long *)0x0)) {
      (**(code **)(*local_d0 + 0x20))();
    }
  }
  local_f0 = (long *)&DAT_7b78d29557b76aae;
  local_e8 = (undefined8 *)puVar1;
  local_e0 = 0x1f;
  local_d8 = (long *)0x0;
  FUN_00fa0b68(*(undefined8 *)(param_1 + 0x18),&local_f0,(undefined1 *)(param_1 + 0x2e0));
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_00fa15b0(&local_f0);
  FUN_00f9c014(param_1 + 0x308,0,&local_f0,0,0);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  plVar24 = local_120;
  uVar11 = FUN_00f9a284(*(undefined8 *)(param_1 + 0x310),0);
  puVar1 = PTR_s_AOCalc_047e1268;
  FUN_00f9a2cc(&local_f0,plVar24,PTR_s_AOCalc_047e1268,uVar11);
  plVar24 = local_d0;
  if (*(char *)(param_1 + 0x348) == '\0') {
    if ((char)local_f0 != '\0') {
      *(undefined8 **)(param_1 + 0x350) = local_e8;
      *(undefined8 *)(param_1 + 0x358) = local_e0;
      *(long **)(param_1 + 0x360) = local_d8;
      local_d0 = (long *)0x0;
      *(long **)(param_1 + 0x368) = plVar24;
      *(undefined1 *)(param_1 + 0x348) = 1;
      goto LAB_00f9805c;
    }
  }
  else {
    if ((char)local_f0 == '\0') {
      if (*(long **)(param_1 + 0x368) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x368) + 0x20))();
      }
      *(undefined1 *)(param_1 + 0x348) = 0;
    }
    else {
      *(undefined8 **)(param_1 + 0x350) = local_e8;
      *(undefined8 *)(param_1 + 0x358) = local_e0;
      plVar24 = *(long **)(param_1 + 0x368);
      *(undefined8 *)(param_1 + 0x368) = 0;
      *(long **)(param_1 + 0x360) = local_d8;
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x20))();
      }
      plVar24 = local_d0;
      local_d0 = (long *)0x0;
      *(long **)(param_1 + 0x368) = plVar24;
    }
LAB_00f9805c:
    if (((char)local_f0 != '\0') && (local_d0 != (long *)0x0)) {
      (**(code **)(*local_d0 + 0x20))();
    }
  }
  local_f0 = (long *)&DAT_f4218231a7751a80;
  local_e8 = (undefined8 *)puVar1;
  local_e0 = 0x1f;
  local_d8 = (long *)0x0;
  FUN_00fa0b68(*(undefined8 *)(param_1 + 0x18),&local_f0,(undefined1 *)(param_1 + 0x348));
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_00fa110c(&local_f0,"gfx2/shader/NX64/env_titan/system/ao_blur_h.bnsh");
  FUN_00f9c014(param_1 + 0x370,0,&local_f0,0,0);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  plVar24 = local_120;
  uVar11 = FUN_00f9a284(*(undefined8 *)(param_1 + 0x378),0);
  puVar1 = PTR_s_AOBlurH_047e1270;
  FUN_00f9a2cc(&local_f0,plVar24,PTR_s_AOBlurH_047e1270,uVar11);
  plVar24 = local_d0;
  if (*(char *)(param_1 + 0x3b0) == '\0') {
    if ((char)local_f0 != '\0') {
      *(undefined8 **)(param_1 + 0x3b8) = local_e8;
      *(undefined8 *)(param_1 + 0x3c0) = local_e0;
      *(long **)(param_1 + 0x3c8) = local_d8;
      local_d0 = (long *)0x0;
      *(long **)(param_1 + 0x3d0) = plVar24;
      *(undefined1 *)(param_1 + 0x3b0) = 1;
      goto LAB_00f98150;
    }
  }
  else {
    if ((char)local_f0 == '\0') {
      if (*(long **)(param_1 + 0x3d0) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x3d0) + 0x20))();
      }
      *(undefined1 *)(param_1 + 0x3b0) = 0;
    }
    else {
      *(undefined8 **)(param_1 + 0x3b8) = local_e8;
      *(undefined8 *)(param_1 + 0x3c0) = local_e0;
      plVar24 = *(long **)(param_1 + 0x3d0);
      *(undefined8 *)(param_1 + 0x3d0) = 0;
      *(long **)(param_1 + 0x3c8) = local_d8;
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x20))();
      }
      plVar24 = local_d0;
      local_d0 = (long *)0x0;
      *(long **)(param_1 + 0x3d0) = plVar24;
    }
LAB_00f98150:
    if (((char)local_f0 != '\0') && (local_d0 != (long *)0x0)) {
      (**(code **)(*local_d0 + 0x20))();
    }
  }
  local_f0 = (long *)&DAT_11517111e739f0fc;
  local_e8 = (undefined8 *)puVar1;
  local_e0 = 0x1f;
  local_d8 = (long *)0x0;
  FUN_00fa0b68(*(undefined8 *)(param_1 + 0x18),&local_f0,(undefined1 *)(param_1 + 0x3b0));
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_00fa110c(&local_f0,"gfx2/shader/NX64/env_titan/system/ao_blur_v.bnsh");
  FUN_00f9c014(param_1 + 0x3d8,0,&local_f0,0,0);
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  plVar24 = local_120;
  uVar11 = FUN_00f9a284(*(undefined8 *)(param_1 + 0x3e0),0);
  puVar1 = PTR_s_AOBlurV_047e1278;
  FUN_00f9a2cc(&local_f0,plVar24,PTR_s_AOBlurV_047e1278,uVar11);
  plVar24 = local_d0;
  if (*(char *)(param_1 + 0x418) == '\0') {
    if ((char)local_f0 == '\0') goto LAB_00f98258;
    *(undefined8 **)(param_1 + 0x420) = local_e8;
    *(undefined8 *)(param_1 + 0x428) = local_e0;
    *(long **)(param_1 + 0x430) = local_d8;
    local_d0 = (long *)0x0;
    *(long **)(param_1 + 0x438) = plVar24;
    *(undefined1 *)(param_1 + 0x418) = 1;
  }
  else if ((char)local_f0 == '\0') {
    if (*(long **)(param_1 + 0x438) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x438) + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x418) = 0;
  }
  else {
    *(undefined8 **)(param_1 + 0x420) = local_e8;
    *(undefined8 *)(param_1 + 0x428) = local_e0;
    plVar24 = *(long **)(param_1 + 0x438);
    *(undefined8 *)(param_1 + 0x438) = 0;
    *(long **)(param_1 + 0x430) = local_d8;
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x20))();
    }
    plVar24 = local_d0;
    local_d0 = (long *)0x0;
    *(long **)(param_1 + 0x438) = plVar24;
  }
  if (((char)local_f0 != '\0') && (local_d0 != (long *)0x0)) {
    (**(code **)(*local_d0 + 0x20))();
  }
LAB_00f98258:
  local_f0 = (long *)0x11516711e739dffe;
  local_e8 = (undefined8 *)puVar1;
  local_e0 = 0x1f;
  local_d8 = (long *)0x0;
  FUN_00fa0b68(*(undefined8 *)(param_1 + 0x18),&local_f0,(undefined1 *)(param_1 + 0x418));
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_120 != (long *)0x0) {
    plVar24 = local_120 + 5;
    do {
      lVar22 = *plVar24;
      iVar8 = (int)lVar22 + -1;
      cVar6 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar25) {
        *(int *)plVar24 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_120 + 0x10))();
    }
    else if ((int)lVar22 == 0) {
LAB_00f98cc8:
      pcVar12 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar15 = "DecrementReferenceInternal";
      pcVar16 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar17 = "Reference counter underflows.";
LAB_00f98ce8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar12,pcVar15,pcVar16,0x58,pcVar17);
    }
  }
  return;
}


