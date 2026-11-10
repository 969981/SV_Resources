/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c7ddc8; name: FUN_00c7ddc8
 */


void FUN_00c7ddc8(long param_1)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *local_350;
  undefined8 uStack_348;
  undefined8 *local_340;
  undefined8 uStack_338;
  int local_330;
  undefined8 *local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  code *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 auStack_2f0 [96];
  undefined8 local_290;
  code *local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined1 auStack_270 [96];
  undefined4 local_210;
  undefined8 *local_208;
  undefined8 uStack_200;
  undefined8 local_1f0 [2];
  undefined8 *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  code *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 auStack_1b0 [96];
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 auStack_130 [96];
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 ****local_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70 [2];
  
  plVar1 = (long *)(param_1 + 0x38);
  lVar14 = nn::os::GetCurrentThread();
LAB_00c7ddf8:
  if (*plVar1 == 0) goto code_r0x00c7de00;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar14;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00c7de08;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar14;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00c7de08:
  puVar9 = PTR_LAB_047d3de8;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  lVar14 = *(long *)(param_1 + 8);
  if (lVar14 == param_1) goto LAB_00c7de14;
LAB_00c7ded8:
  if (*(int *)(lVar14 + 0x10) == 1) {
    uVar16 = *(undefined4 *)(lVar14 + 0x130);
    local_350 = (undefined8 *)0x0;
    uStack_348 = 0;
    FUN_00d0a71c(&local_350,lVar14 + 0x20);
    FUN_01e229c4(lVar14 + 0xb0,uVar16,&local_350);
    puVar10 = local_350;
    if (local_350 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_350 + 3);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_350 + 0x1c);
        do {
          iVar13 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(puVar9,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar20 = *(long *)puVar7;
          *(long *)puVar8 = lVar20;
          local_1f0[0] = *puVar10;
          FUN_00c44438(lVar20 + 0x8040,local_1f0);
        }
      }
      else if (sVar4 == 0) goto LAB_00c7e348;
    }
    uVar16 = 2;
    goto LAB_00c7dff0;
  }
  if (*(int *)(lVar14 + 0x10) == 0) {
    *(undefined4 *)(lVar14 + 0x130) = 0;
    lVar20 = *(long *)(param_1 + 8);
    if (lVar20 != param_1) {
      if (*(long *)(lVar14 + 0x20) == 0) {
        do {
          if ((((lVar20 != lVar14) && (*(int *)(lVar20 + 0x10) == 1)) &&
              (*(int *)(lVar20 + 0x130) == 1)) &&
             ((*(long *)(lVar20 + 0x20) == 0 || (*(long *)(*(long *)(lVar20 + 0x20) + 0x10) == 0))))
          goto LAB_00c7e570;
          lVar20 = *(long *)(lVar20 + 8);
        } while (lVar20 != param_1);
      }
      else {
        do {
          if (((lVar20 != lVar14) && (*(int *)(lVar20 + 0x10) == 1)) &&
             (*(int *)(lVar20 + 0x130) == 1)) {
            lVar17 = 0;
            if (*(long *)(lVar20 + 0x20) != 0) {
              lVar18 = *(long *)(*(long *)(lVar20 + 0x20) + 0x10);
              lVar17 = 0;
              if (lVar18 != 0) {
                lVar17 = lVar18 + -0x28;
              }
            }
            lVar19 = *(long *)(*(long *)(lVar14 + 0x20) + 0x10);
            lVar18 = 0;
            if (lVar19 != 0) {
              lVar18 = lVar19 + -0x28;
            }
            if (lVar17 == lVar18) goto LAB_00c7e570;
          }
          lVar20 = *(long *)(lVar20 + 8);
        } while (lVar20 != param_1);
      }
    }
    local_340 = (undefined8 *)0x0;
    uStack_338 = 0;
    FUN_00d0a71c(&local_340,lVar14 + 0x20);
    uVar15 = FUN_01e22884(lVar14 + 0x30,&local_340);
    puVar10 = local_340;
    if (local_340 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_340 + 3);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_340 + 0x1c);
        do {
          iVar13 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(puVar9,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar20 = *(long *)puVar7;
          *(long *)puVar8 = lVar20;
          local_1f0[0] = *puVar10;
          FUN_00c44438(lVar20 + 0x8040,local_1f0);
        }
      }
      else if (sVar4 == 0) goto LAB_00c7e348;
    }
    uVar16 = 1;
    if ((uVar15 & 1) != 0) {
      *(undefined4 *)(lVar14 + 0x130) = 1;
    }
    goto LAB_00c7dff0;
  }
  goto LAB_00c7dff4;
code_r0x00c7de00:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar6) {
    *plVar1 = lVar14;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00c7de08;
  goto LAB_00c7ddf8;
LAB_00c7e570:
  uVar16 = 1;
LAB_00c7dff0:
  *(undefined4 *)(lVar14 + 0x10) = uVar16;
LAB_00c7dff4:
  lVar14 = *(long *)(lVar14 + 8);
  if (lVar14 == param_1) goto code_r0x00c7e008;
  goto LAB_00c7ded8;
code_r0x00c7e008:
  lVar14 = *(long *)(param_1 + 8);
LAB_00c7de14:
  uStack_90 = *(undefined8 *)(param_1 + 0x18);
  local_88 = *(undefined8 *)(param_1 + 0x20);
  local_a8 = &local_a8;
  uStack_80 = 0;
  local_78 = 0;
  local_98 = 0;
  ppppuStack_a0 = local_a8;
  if (param_1 != lVar14) {
    do {
      local_1f0[0] = CONCAT44(local_1f0[0]._4_4_,*(undefined4 *)(lVar14 + 0x10));
      local_1e0 = (undefined8 *)0x0;
      uStack_1d8 = 0;
      FUN_00d0a71c(&local_1e0,lVar14 + 0x20);
      local_1c0 = 0;
      local_1b8 = 0;
      local_1d0 = 0;
      local_1c8 = (code *)0x0;
      if (*(code **)(lVar14 + 0x40) != (code *)0x0) {
        (**(code **)(lVar14 + 0x40))(lVar14 + 0x50,auStack_1b0);
        local_1b8 = *(undefined8 *)(lVar14 + 0x48);
        local_1c8 = *(code **)(lVar14 + 0x38);
        local_1d0 = *(undefined8 *)(lVar14 + 0x30);
        local_1c0 = *(undefined8 *)(lVar14 + 0x40);
      }
      local_140 = 0;
      local_138 = 0;
      local_150 = 0;
      local_148 = (code *)0x0;
      if (*(code **)(lVar14 + 0xc0) != (code *)0x0) {
        (**(code **)(lVar14 + 0xc0))(lVar14 + 0xd0,auStack_130);
        local_138 = *(undefined8 *)(lVar14 + 200);
        local_148 = *(code **)(lVar14 + 0xb8);
        local_150 = *(undefined8 *)(lVar14 + 0xb0);
        local_140 = *(undefined8 *)(lVar14 + 0xc0);
      }
      local_d0 = *(undefined4 *)(lVar14 + 0x130);
      local_c8 = (undefined8 *)0x0;
      uStack_c0 = 0;
      FUN_00d0a71c(&local_c8,lVar14 + 0x138);
      iVar13 = (int)local_1f0[0];
      if (local_c8 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_c8 + 3);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_c8 + 0x1c);
          do {
            iVar12 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar20 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar20;
            local_70[0] = *local_c8;
            FUN_00c44438(lVar20 + 0x8040,local_70);
          }
        }
        else if (sVar4 == 0) {
LAB_00c7e348:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if (local_148 != (code *)0x0) {
        local_140 = 0;
        local_138 = 0;
        local_150 = 0;
        (*local_148)(auStack_130);
      }
      if (local_1c8 != (code *)0x0) {
        local_1c0 = 0;
        local_1b8 = 0;
        local_1d0 = 0;
        (*local_1c8)(auStack_1b0);
      }
      if (local_1e0 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_1e0 + 3);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_1e0 + 0x1c);
          do {
            iVar12 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar20 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar20;
            local_70[0] = *local_1e0;
            FUN_00c44438(lVar20 + 0x8040,local_70);
          }
        }
        else if (sVar4 == 0) goto LAB_00c7e348;
      }
      lVar20 = *(long *)(lVar14 + 8);
      if (iVar13 == 2) {
        if (param_1 != lVar20) {
          do {
            local_330 = *(int *)(lVar20 + 0x10);
            local_320 = (undefined8 *)0x0;
            uStack_318 = 0;
            FUN_00d0a71c(&local_320,lVar20 + 0x20);
            local_300 = 0;
            local_2f8 = 0;
            local_310 = 0;
            local_308 = (code *)0x0;
            if (*(code **)(lVar20 + 0x40) != (code *)0x0) {
              (**(code **)(lVar20 + 0x40))(lVar20 + 0x50,auStack_2f0);
              local_2f8 = *(undefined8 *)(lVar20 + 0x48);
              local_308 = *(code **)(lVar20 + 0x38);
              local_310 = *(undefined8 *)(lVar20 + 0x30);
              local_300 = *(undefined8 *)(lVar20 + 0x40);
            }
            local_280 = 0;
            local_278 = 0;
            local_290 = 0;
            local_288 = (code *)0x0;
            if (*(code **)(lVar20 + 0xc0) != (code *)0x0) {
              (**(code **)(lVar20 + 0xc0))(lVar20 + 0xd0,auStack_270);
              local_278 = *(undefined8 *)(lVar20 + 200);
              local_288 = *(code **)(lVar20 + 0xb8);
              local_290 = *(undefined8 *)(lVar20 + 0xb0);
              local_280 = *(undefined8 *)(lVar20 + 0xc0);
            }
            local_210 = *(undefined4 *)(lVar20 + 0x130);
            local_208 = (undefined8 *)0x0;
            uStack_200 = 0;
            FUN_00d0a71c(&local_208,lVar20 + 0x138);
            puVar10 = local_208;
            iVar13 = local_330;
            if (local_208 != (undefined8 *)0x0) {
              psVar2 = (short *)(local_208 + 3);
              do {
                sVar4 = *psVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar6) {
                  *psVar2 = sVar4 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar4 == 1) {
                piVar3 = (int *)((long)local_208 + 0x1c);
                do {
                  iVar12 = *piVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar6) {
                    *piVar3 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar12 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar17 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar17;
                  local_70[0] = *puVar10;
                  FUN_00c44438(lVar17 + 0x8040,local_70);
                }
              }
              else if (sVar4 == 0) goto LAB_00c7e348;
            }
            pcVar11 = local_288;
            if (local_288 != (code *)0x0) {
              local_280 = 0;
              local_278 = 0;
              local_290 = 0;
              local_288 = (code *)0x0;
              (*pcVar11)(auStack_270);
            }
            pcVar11 = local_308;
            if (local_308 != (code *)0x0) {
              local_300 = 0;
              local_2f8 = 0;
              local_310 = 0;
              local_308 = (code *)0x0;
              (*pcVar11)(auStack_2f0);
            }
            puVar10 = local_320;
            if (local_320 != (undefined8 *)0x0) {
              psVar2 = (short *)(local_320 + 3);
              do {
                sVar4 = *psVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar6) {
                  *psVar2 = sVar4 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar4 == 1) {
                piVar3 = (int *)((long)local_320 + 0x1c);
                do {
                  iVar12 = *piVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar6) {
                    *piVar3 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar12 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar17 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar17;
                  local_70[0] = *puVar10;
                  FUN_00c44438(lVar17 + 0x8040,local_70);
                }
              }
              else if (sVar4 == 0) goto LAB_00c7e348;
            }
            if (iVar13 != 2) {
              FUN_01e22804(&local_a8,&local_a8,param_1,lVar14,lVar20);
              lVar20 = *(long *)(lVar20 + 8);
              goto LAB_00c7e2f4;
            }
            lVar20 = *(long *)(lVar20 + 8);
          } while (param_1 != lVar20);
        }
        FUN_01e22804(&local_a8,&local_a8,param_1,lVar14,lVar20);
      }
LAB_00c7e2f4:
      lVar14 = lVar20;
    } while (param_1 != lVar20);
  }
  FUN_00c7e758(&local_a8);
  *(undefined8 *)(param_1 + 0x38) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x40));
  return;
}


