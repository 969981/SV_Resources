/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e7f960; name: FUN_00e7f960
 */


undefined8 FUN_00e7f960(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  short sVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  undefined8 *puVar21;
  short sVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  long *plVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined8 *puVar29;
  long lVar30;
  long *plVar31;
  long *local_138;
  ulong local_130;
  long *local_120;
  code *local_118;
  code *local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 *local_80 [2];
  long local_70 [2];
  
  if (*(int *)((long)param_1 + 0x3f4) == 0) {
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar17 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar17;
    uVar24 = *(undefined8 *)(lVar17 + 0x70);
    FUN_00c9e664(&local_a0,param_1 + 0x1d);
    if (local_98 == (long *)0x0) {
      plVar28 = (long *)0x0;
    }
    else {
      plVar28 = (long *)local_98[9];
    }
    (**(code **)(*plVar28 + 0x18))(&local_120,plVar28);
    local_90 = (long *)0x0;
    uStack_88 = 0;
    plVar26 = (long *)0x0;
    if (plVar28 != (long *)0x0) {
      plVar26 = plVar28 + 5;
    }
    if ((long *)local_120[2] == plVar26) {
      FUN_00c9ea00(&local_90,&local_120);
    }
    plVar28 = local_120;
    if (local_120 != (long *)0x0) {
      plVar26 = local_120 + 3;
      do {
        sVar22 = (short)*plVar26;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar11) {
          *(short *)plVar26 = sVar22 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar22 == 1) {
        piVar2 = (int *)((long)local_120 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_80[0] = (undefined8 *)*plVar28;
          FUN_00c44438(lVar17 + 0x8040,local_80);
        }
      }
      else if (sVar22 == 0) goto LAB_00e7fae0;
    }
    FUN_0100fa74(local_80,uVar24,&local_90);
    plVar28 = local_90;
    if (local_90 != (long *)0x0) {
      plVar26 = local_90 + 3;
      do {
        sVar22 = (short)*plVar26;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar11) {
          *(short *)plVar26 = sVar22 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar22 == 1) {
        piVar2 = (int *)((long)local_90 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_120 = (long *)*plVar28;
          FUN_00c44438(lVar17 + 0x8040,&local_120);
        }
      }
      else if (sVar22 == 0) goto LAB_00e7fae0;
    }
    if (local_98 != (long *)0x0) {
      plVar28 = local_98 + 5;
      do {
        lVar17 = *plVar28;
        iVar12 = (int)lVar17 + -1;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar11) {
          *(int *)plVar28 = iVar12;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
      else if ((int)lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x60))();
    }
    if (local_80[0] != (undefined8 *)0x0) {
      if (*(short *)((long)local_80[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_80[0] + 0x1a);
        sVar22 = *(short *)((long)local_80[0] + 0x1a);
LAB_00e7fbf0:
        sVar6 = *psVar1;
        if (sVar6 == sVar22) {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar22 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_00e7fc14;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00e7fc14:
          bVar11 = false;
        }
        if (!bVar11) goto code_r0x00e7fc1c;
        lVar17 = local_80[0][2];
        if (lVar17 == 0) goto LAB_00e7fddc;
        plVar28 = (long *)(lVar17 + -0x28);
        if (((*PTR_DAT_047d8280 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8280);
        }
        lVar18 = *(long *)PTR_DAT_047d8288;
        *(long *)PTR_DAT_047d8290 = lVar18;
        FUN_0100e778(plVar28,*(undefined4 *)(lVar18 + 0x1f8));
        *(undefined2 *)(lVar17 + 0xd1) = 1;
        *(undefined2 *)(lVar17 + 0x1f9) = 0x100;
        *(undefined1 *)(lVar17 + 0xd6) = 1;
        *(undefined4 *)(lVar17 + 0xbc) = 0;
        local_120 = plVar28;
        (*(code *)*param_2)(param_2 + 4,&local_120);
        if (*(int *)(lVar17 + 0x4c) == 0) {
          *(undefined4 *)(lVar17 + 0x4c) = 1;
        }
        if (*(char *)((long)param_1 + 0x463) == '\0') {
          *(undefined1 *)(lVar17 + 0x49) = 0;
        }
        (**(code **)(*param_1 + 0x18))(&local_120,param_1);
        local_a0 = (long *)0x0;
        local_98 = (long *)0x0;
        if ((long *)local_120[2] == param_1 + 5) {
          FUN_00e7f0bc(&local_a0,&local_120);
        }
        plVar26 = local_120;
        if (local_120 != (long *)0x0) {
          plVar4 = local_120 + 3;
          do {
            sVar22 = (short)*plVar4;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar11) {
              *(short *)plVar4 = sVar22 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar22 == 1) {
            piVar2 = (int *)((long)local_120 + 0x1c);
            do {
              iVar12 = *piVar2;
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar11) {
                *piVar2 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar12 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar18 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar18;
              local_70[0] = *plVar26;
              FUN_00c44438(lVar18 + 0x8040,local_70);
            }
          }
          else if (sVar22 == 0) goto LAB_00e7fae0;
        }
        local_120 = (long *)0x0;
        local_118 = (code *)0x0;
        local_110 = (code *)0x0;
        local_108 = (undefined1 *)0x0;
        local_100 = 0;
        uStack_f8 = 0;
        FUN_00e7e7c8(&local_100,&local_a0);
        local_120 = (long *)&LAB_00f63cbc;
        local_118 = FUN_029a29cc;
        local_110 = FUN_029a2d14;
        local_108 = &LAB_029a2d28;
        plVar26 = (long *)(lVar17 + 0x88);
        lVar18 = nn::os::GetCurrentThread();
        while (*plVar26 == 0 && *(long *)(lVar17 + 0x90) == 0) {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar11) {
            *plVar26 = lVar18;
            *(undefined8 *)(lVar17 + 0x90) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00e7fd58;
        }
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x98));
        do {
          if (*plVar26 != 0 || *(long *)(lVar17 + 0x90) != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x98));
              while (*plVar26 == 0 && *(long *)(lVar17 + 0x90) == 0) {
                cVar7 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                if (bVar11) {
                  *plVar26 = lVar18;
                  *(undefined8 *)(lVar17 + 0x90) = 0;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_00e7fd58;
              }
            } while( true );
          }
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar11) {
            *plVar26 = lVar18;
            *(undefined8 *)(lVar17 + 0x90) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_00e7fd58:
        pcVar19 = *(code **)(lVar17 + 0x220);
        if (pcVar19 != (code *)0x0) {
          *(undefined8 *)(lVar17 + 0x228) = 0;
          *(undefined8 *)(lVar17 + 0x230) = 0;
          *(undefined8 *)(lVar17 + 0x218) = 0;
          *(undefined8 *)(lVar17 + 0x220) = 0;
          (*pcVar19)(lVar17 + 0x238);
        }
        if (local_110 != (code *)0x0) {
          (*local_110)(&local_100,lVar17 + 0x238);
          *(undefined1 **)(lVar17 + 0x230) = local_108;
          *(undefined8 *)(lVar17 + 0x218) = local_120;
          *(code **)(lVar17 + 0x220) = local_118;
          *(code **)(lVar17 + 0x228) = local_110;
        }
        do {
          lVar18 = *plVar26;
          lVar13 = *(long *)(lVar17 + 0x90);
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar11) {
            *plVar26 = lVar18;
            *(long *)(lVar17 + 0x90) = lVar13;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          lVar14 = *plVar26;
          lVar30 = *(long *)(lVar17 + 0x90);
          if (lVar14 != lVar18 || lVar30 != lVar13) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto LAB_00e7fe98;
          }
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar11) {
            *plVar26 = 0;
            *(long *)(lVar17 + 0x8c) = lVar13;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar11 = true;
LAB_00e7fe98:
        if (!bVar11) {
          do {
            lVar18 = *plVar26;
            lVar13 = *(long *)(lVar17 + 0x90);
            if (lVar18 != lVar14 || lVar13 != lVar30) {
              bVar11 = false;
              ClearExclusiveLocal();
              goto joined_r0x00e8096c;
            }
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar11) {
              *plVar26 = 0;
              *(long *)(lVar17 + 0x8c) = lVar30;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar11 = true;
joined_r0x00e8096c:
          if (!bVar11) {
            do {
              lVar14 = *plVar26;
              lVar30 = *(long *)(lVar17 + 0x90);
              if (lVar14 != lVar18 || lVar30 != lVar13) {
                bVar11 = false;
                ClearExclusiveLocal();
                lVar18 = lVar14;
                lVar13 = lVar30;
                goto joined_r0x00e8096c;
              }
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar11) {
                *plVar26 = 0;
                *(long *)(lVar17 + 0x8c) = lVar13;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar11 = true;
            lVar18 = lVar14;
            lVar13 = lVar30;
            goto joined_r0x00e8096c;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x98));
        pcVar19 = local_118;
        if (local_118 != (code *)0x0) {
          local_110 = (code *)0x0;
          local_108 = (undefined1 *)0x0;
          local_120 = (long *)0x0;
          local_118 = (code *)0x0;
          (*pcVar19)(&local_100);
        }
        plVar26 = local_a0;
        if (local_a0 != (long *)0x0) {
          plVar4 = local_a0 + 3;
          do {
            sVar22 = (short)*plVar4;
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar11) {
              *(short *)plVar4 = sVar22 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar22 == 1) {
            piVar2 = (int *)((long)local_a0 + 0x1c);
            do {
              iVar12 = *piVar2;
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar11) {
                *piVar2 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar12 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar18 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar18;
              local_70[0] = *plVar26;
              FUN_00c44438(lVar18 + 0x8040,local_70);
            }
          }
          else if (sVar22 == 0) goto LAB_00e7fae0;
        }
        lVar17 = *(long *)(lVar17 + 8);
        psVar1 = (short *)(lVar17 + 0x1a);
        do {
          sVar22 = *psVar1;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar22 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar22 == 1) {
          *(undefined8 *)(lVar17 + 0x10) = 0;
          (**(code **)(*plVar28 + 0x50))(plVar28);
        }
        else if (sVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        plVar28 = (long *)param_1[0x7f];
        if (plVar28 == (long *)0x0) {
          plVar26 = (long *)param_1[1];
          plVar28 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0x38,8);
          if (plVar28 == (long *)0x0) {
            plVar26 = (long *)0x0;
            lVar18 = 0;
            lVar17 = 0;
          }
          else {
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar13 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00e80a24;
            *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar26;
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
            *plVar28 = 0;
            plVar28[5] = 0;
            plVar28[6] = 0;
            plVar28[3] = 0;
            plVar28[4] = 0;
            plVar28[1] = 0;
            plVar28[2] = 0;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar17 = nn::os::GetTlsValue(DAT_04865a30);
            if (((lVar17 == 0) || (*(long *)(lVar17 + 0x80) == 0)) ||
               (lVar18 = *(long *)(lVar17 + *(long *)(lVar17 + 0x80) * 8 + -8), lVar18 == 0)) {
              lVar17 = tpidr_el0;
              lVar18 = *(long *)(lVar17 + 0x30);
              if (lVar18 == 0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                lVar18 = DAT_04859430;
                *(long *)(lVar17 + 0x30) = DAT_04859430;
              }
            }
            *(undefined4 *)(plVar28 + 6) = 0;
            lVar17 = 8;
            plVar28[3] = lVar18;
            lVar18 = 0x38;
            plVar28[4] = 0xfffffffffffffff;
            plVar28[5] = 0;
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
          }
          lVar13 = param_1[0x7f];
          param_1[0x7f] = (long)plVar28;
          if (lVar13 != 0) {
            FUN_00c4e600();
            FUN_00c4e600();
            lVar14 = FUN_00c4e600();
            iVar5 = *(int *)(lVar14 + 0x12c8);
            iVar12 = iVar5 + 1;
            *(int *)(lVar14 + 0x12c8) = iVar12;
            if (*(int *)(lVar14 + 0x12cc) <= iVar5) {
              *(int *)(lVar14 + 0x12cc) = iVar12;
            }
            FUN_014f1eb4(lVar13);
            plVar28 = (long *)param_1[0x80];
            lVar14 = param_1[0x81];
            lVar30 = param_1[0x82];
            uVar15 = (**(code **)(*plVar28 + 0xf8))(plVar28);
            if (((uVar15 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
              (**(code **)(*plVar28 + 0x18))(plVar28,lVar13,lVar14,lVar30);
            }
            else {
              FUN_00c48fe8(plVar28,lVar13,lVar14,lVar30);
            }
            lVar13 = FUN_00c4e600();
            iVar12 = *(int *)(lVar13 + 0x12c8) + -1;
            *(int *)(lVar13 + 0x12c8) = iVar12;
            if (iVar12 == 0) {
              plVar28 = (long *)FUN_00c4e600();
              if (plVar28[600] != 0) {
                local_a0 = plVar28 + plVar28[600] * 3;
                local_120 = plVar28;
                FUN_00c4ea30(&local_120,&local_a0);
                plVar31 = (long *)*plVar28;
                plVar4 = plVar28;
                if (plVar28[600] != 0) {
                  plVar4 = plVar28 + plVar28[600] * 3;
                }
                if (plVar4 == plVar28) {
                  local_130 = 0;
                  uVar15 = 0;
                }
                else {
                  (**(code **)(*(long *)*plVar28 + 0xd0))();
                  if ((long *)*plVar28 != plVar31) {
                    (**(code **)(*plVar31 + 0x100))(plVar31,plVar28,plVar28);
                    plVar31 = (long *)*plVar28;
                  }
                  plVar3 = plVar28 + 3;
                  if (plVar4 == plVar3) {
                    local_130 = 0;
                    uVar15 = 1;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    bVar11 = (long *)*plVar3 != plVar31;
                    if (bVar11) {
                      (**(code **)(*plVar31 + 0x100))(plVar31,plVar28,plVar28 + 3);
                      plVar31 = (long *)plVar28[3];
                    }
                    local_130 = (ulong)bVar11;
                    plVar3 = plVar28 + 6;
                    if (plVar4 == plVar3) {
                      uVar15 = 2;
                    }
                    else {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar31) {
                        (**(code **)(*plVar31 + 0x100))(plVar31,plVar28 + local_130 * 3,plVar28 + 6)
                        ;
                        plVar31 = (long *)plVar28[6];
                        local_130 = 2;
                      }
                      plVar3 = plVar28 + 9;
                      if (plVar4 == plVar3) {
                        uVar15 = 3;
                      }
                      else {
                        (**(code **)(*(long *)*plVar3 + 0xd0))();
                        if ((long *)*plVar3 != plVar31) {
                          (**(code **)(*plVar31 + 0x100))
                                    (plVar31,plVar28 + local_130 * 3,plVar28 + 9);
                          plVar31 = (long *)plVar28[9];
                          local_130 = 3;
                        }
                        plVar3 = plVar28 + 0xc;
                        if (plVar4 == plVar3) {
                          uVar15 = 4;
                        }
                        else {
                          (**(code **)(*(long *)*plVar3 + 0xd0))();
                          if ((long *)*plVar3 != plVar31) {
                            (**(code **)(*plVar31 + 0x100))
                                      (plVar31,plVar28 + local_130 * 3,plVar28 + 0xc);
                            plVar31 = (long *)plVar28[0xc];
                            local_130 = 4;
                          }
                          plVar3 = plVar28 + 0xf;
                          if (plVar4 == plVar3) {
                            uVar15 = 5;
                          }
                          else {
                            (**(code **)(*(long *)*plVar3 + 0xd0))();
                            if ((long *)*plVar3 != plVar31) {
                              (**(code **)(*plVar31 + 0x100))
                                        (plVar31,plVar28 + local_130 * 3,plVar28 + 0xf);
                              plVar31 = (long *)plVar28[0xf];
                              local_130 = 5;
                            }
                            uVar15 = 6;
                            for (local_138 = plVar28 + 0x12; plVar4 != local_138;
                                local_138 = local_138 + 3) {
                              (**(code **)(*(long *)*local_138 + 0xd0))();
                              if ((long *)*local_138 != plVar31) {
                                (**(code **)(*plVar31 + 0x100))
                                          (plVar31,plVar28 + local_130 * 3,local_138);
                                plVar31 = (long *)*local_138;
                                local_130 = uVar15;
                              }
                              uVar15 = uVar15 + 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                (**(code **)(*plVar31 + 0x100))
                          (plVar31,plVar28 + local_130 * 3,plVar28 + uVar15 * 3);
                plVar28[600] = 0;
              }
              *(undefined4 *)(lVar13 + 0x12cc) = 0;
            }
            plVar28 = (long *)param_1[0x7f];
          }
          param_1[0x80] = (long)plVar26;
          param_1[0x81] = lVar18;
          param_1[0x82] = lVar17;
        }
        if ((ulong)plVar28[1] < (ulong)plVar28[2]) {
          FUN_029a1b88(plVar28,local_80);
        }
        else {
          uVar23 = plVar28[4];
          lVar17 = plVar28[1] - *plVar28 >> 4;
          uVar15 = lVar17 + 1;
          if (0x7ffffffffffffffe < uVar23) {
            uVar23 = 0x7fffffffffffffff;
          }
          if (uVar23 < uVar15) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar18 = plVar28[2] - *plVar28;
          uVar20 = lVar18 >> 3;
          if (uVar15 <= uVar20) {
            uVar15 = uVar20;
          }
          if (uVar23 >> 1 <= (ulong)(lVar18 >> 4)) {
            uVar15 = uVar23;
          }
          if (uVar15 == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = (**(code **)(*(long *)plVar28[3] + 0x10))((long *)plVar28[3],uVar15 << 4,8);
            if (lVar18 == 0) {
              (**(code **)(*(long *)plVar28[3] + 0xe8))();
            }
          }
          lVar13 = plVar28[3];
          puVar27 = (undefined8 *)(lVar18 + lVar17 * 0x10);
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar17 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar17 == 0) {
            *puVar27 = 0;
            puVar27[1] = 0;
            FUN_0252e108(puVar27,local_80);
          }
          else {
            if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_00e80a24;
            *(long *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = lVar13;
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
            *puVar27 = 0;
            puVar27[1] = 0;
            FUN_0252e108(puVar27,local_80);
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
          }
          puVar25 = (undefined8 *)*plVar28;
          puVar29 = (undefined8 *)plVar28[1];
          puVar8 = puVar27;
          if (puVar29 == puVar25) {
            puVar21 = puVar27;
            puVar29 = puVar25;
          }
          else {
            do {
              puVar21 = puVar8 + -2;
              lVar17 = plVar28[3];
              puVar29 = puVar29 + -2;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar13 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar13 == 0) {
                *puVar21 = 0;
                puVar8[-1] = 0;
                FUN_01961c04(puVar21,puVar29);
              }
              else {
                if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_00e80a24:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar17;
                *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
                *puVar21 = 0;
                puVar8[-1] = 0;
                FUN_01961c04(puVar21,puVar29);
                *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
              }
              puVar8 = puVar21;
            } while (puVar25 != puVar29);
            puVar25 = (undefined8 *)*plVar28;
            puVar29 = (undefined8 *)plVar28[1];
          }
          lVar17 = plVar28[2];
          *plVar28 = (long)puVar21;
          plVar28[1] = (long)(puVar27 + 2);
          plVar28[2] = lVar18 + uVar15 * 0x10;
          puVar10 = PTR_DAT_047d3918;
          puVar9 = PTR_DAT_047d3910;
          while (puVar29 != puVar25) {
            puVar29 = puVar29 + -2;
            puVar27 = (undefined8 *)*puVar29;
            if (puVar27 != (undefined8 *)0x0) {
              psVar1 = (short *)(puVar27 + 3);
              do {
                sVar22 = *psVar1;
                cVar7 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar11) {
                  *psVar1 = sVar22 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar22 == 1) {
                piVar2 = (int *)((long)puVar27 + 0x1c);
                do {
                  iVar12 = *piVar2;
                  cVar7 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar11) {
                    *piVar2 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar12 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,puVar9,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar18 = *(long *)puVar9;
                  *(long *)puVar10 = lVar18;
                  local_120 = (long *)*puVar27;
                  FUN_00c44438(lVar18 + 0x8040,&local_120);
                }
              }
              else if (sVar22 == 0) goto LAB_00e7fae0;
            }
          }
          if (puVar25 != (undefined8 *)0x0) {
            plVar28 = (long *)plVar28[3];
            uVar15 = (**(code **)(*plVar28 + 0xf8))(plVar28);
            if (((uVar15 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
              (**(code **)(*plVar28 + 0x18))(plVar28,puVar25,lVar17 - (long)puVar25,8);
            }
            else {
              FUN_00c48fe8(plVar28,puVar25,lVar17 - (long)puVar25,8);
            }
          }
        }
        uVar24 = 1;
        goto LAB_00e7fde0;
      }
LAB_00e7fddc:
      uVar24 = 0;
LAB_00e7fde0:
      puVar27 = local_80[0];
      if (local_80[0] == (undefined8 *)0x0) {
        return uVar24;
      }
      psVar1 = (short *)(local_80[0] + 3);
      do {
        sVar22 = *psVar1;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar22 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar22 == 1) {
        piVar2 = (int *)((long)local_80[0] + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 == -1) {
          return uVar24;
        }
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_120 = (long *)*puVar27;
        FUN_00c44438(lVar17 + 0x8040,&local_120);
        return uVar24;
      }
      if (sVar22 != 0) {
        return uVar24;
      }
LAB_00e7fae0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return 0;
code_r0x00e7fc1c:
  sVar22 = sVar6;
  if (sVar6 == 0) goto LAB_00e7fddc;
  goto LAB_00e7fbf0;
}


