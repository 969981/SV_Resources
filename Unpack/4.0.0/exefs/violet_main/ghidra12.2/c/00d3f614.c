/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d3f614; name: FUN_00d3f614
 */


void FUN_00d3f614(long param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long lVar4;
  short sVar5;
  undefined8 *puVar6;
  long *plVar7;
  char cVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  bool bVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *plStack_70;
  long local_68;
  
  if ((param_2[7] == param_2[8]) &&
     (FUN_00d2bee4(&local_98), puVar9 = PTR_DAT_047d94d0, local_98 != (long *)0x0)) {
    plVar22 = (long *)*param_2;
    plVar7 = (long *)param_2[1];
    if (plVar22 != plVar7) {
      plVar1 = param_2 + 10;
      do {
        plVar14 = local_98;
        lVar11 = nn::os::GetCurrentThread();
        do {
          lVar17 = *(long *)puVar9;
          lVar19 = *(long *)(puVar9 + 8);
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar20) {
            *(long *)puVar9 = lVar17;
            *(long *)(puVar9 + 8) = lVar19;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        do {
          while ((lVar17 != 0 && (lVar11 != lVar17))) {
            nn::os::WaitLightEvent((LightEventType *)(puVar9 + 0x10));
            do {
              lVar17 = *(long *)puVar9;
              lVar19 = *(long *)(puVar9 + 8);
              cVar8 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(puVar9,0x10);
              if (bVar20) {
                *(long *)puVar9 = lVar17;
                *(long *)(puVar9 + 8) = lVar19;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          do {
            lVar4 = *(long *)puVar9;
            if (lVar4 != lVar17 || *(long *)(puVar9 + 8) != lVar19) {
              bVar20 = false;
              ClearExclusiveLocal();
              goto LAB_00d3f730;
            }
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar20) {
              *(long *)puVar9 = lVar17;
              *(long *)(puVar9 + 4) = lVar19 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          bVar20 = true;
LAB_00d3f730:
          lVar17 = lVar4;
          lVar19 = *(long *)(puVar9 + 8);
        } while (!bVar20);
        plVar12 = (long *)(**(code **)(*plVar14 + 0x88))(plVar14);
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00d3ffd8;
        *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar12;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        plVar13 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x7f0,0x10);
        if (plVar13 == (long *)0x0) {
          (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("ptr","Create",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                     ,0x40);
        }
        local_78 = (long *)0x0;
        local_90 = (long *)0x77c14dcbc7a1717b;
        local_88 = (long *)0x3c4a538;
        local_80 = (long *)&DAT_0000000c;
        FUN_00df6fe0(plVar13,&local_90,0,0,0);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        *(undefined4 *)(plVar13 + 3) = 0x1007f0;
        plVar13[1] = (long)plVar12;
        plVar13[2] = (long)plVar13;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        lVar11 = plVar13[6];
        if (*(long *)(lVar11 + 0x10) == 0) {
LAB_00d3ff90:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar20) {
            *psVar2 = sVar5 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar16;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) goto LAB_00d3ffb0;
        *(undefined4 *)(plVar13 + 0x9f) = 0xffffffff;
        FUN_00df5bb4(plVar13);
        lVar11 = plVar13[6];
        local_90 = plVar13;
        if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00d3ff90;
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar20) {
            *psVar2 = sVar5 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 0) {
          uVar16 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar16;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) {
LAB_00d3ffb0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        (**(code **)(*plVar14 + 0x30))(plVar14,&local_90);
        if (local_90 != (long *)0x0) {
          lVar11 = local_90[6];
          psVar2 = (short *)(lVar11 + 0x1a);
          do {
            sVar5 = *psVar2;
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar20) {
              *psVar2 = sVar5 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar5 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*local_90 + 0x50))();
          }
          else if (sVar5 == 0) goto LAB_00d3fff0;
        }
        do {
          lVar11 = *(long *)puVar9;
          lVar17 = *(long *)(puVar9 + 8);
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar20) {
            *(long *)puVar9 = lVar11;
            *(long *)(puVar9 + 8) = lVar17;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        do {
          lVar19 = *(long *)puVar9;
          lVar4 = *(long *)(puVar9 + 8);
          if (lVar19 != lVar11 || lVar4 != lVar17) {
            bVar20 = false;
            ClearExclusiveLocal();
            goto joined_r0x00d3f8d8;
          }
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar20) {
            *(long *)puVar9 = lVar11;
            *(long *)(puVar9 + 4) = lVar17 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar20 = true;
joined_r0x00d3f8d8:
        if (!bVar20) {
          do {
            lVar11 = *(long *)puVar9;
            lVar17 = *(long *)(puVar9 + 8);
            if (lVar11 != lVar19 || lVar17 != lVar4) {
              bVar20 = false;
              ClearExclusiveLocal();
              lVar19 = lVar11;
              lVar4 = lVar17;
              goto joined_r0x00d3f8d8;
            }
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(puVar9,0x10);
            if (bVar20) {
              *(long *)puVar9 = lVar19;
              *(long *)(puVar9 + 4) = lVar4 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          bVar20 = true;
          lVar19 = lVar11;
          lVar4 = lVar17;
          goto joined_r0x00d3f8d8;
        }
        nn::os::SignalLightEvent((LightEventType *)(puVar9 + 0x10));
        lVar11 = *plVar22;
        plVar13[0x19] = plVar22[1];
        plVar13[0x18] = lVar11;
        if (*(char *)((long)plVar13 + 0xf4) == '\0') {
          *(undefined1 *)((long)plVar13 + 0xf4) = 1;
          (**(code **)(*plVar13 + 0x78))(plVar13);
          lVar11 = plVar22[2];
          plVar13[0x1b] = plVar22[3];
          plVar13[0x1a] = lVar11;
          if (*(char *)((long)plVar13 + 0xf4) != '\0') goto LAB_00d3fb6c;
          *(undefined1 *)((long)plVar13 + 0xf4) = 1;
          (**(code **)(*plVar13 + 0x78))(plVar13);
          lVar11 = plVar22[4];
          plVar13[0x1d] = plVar22[5];
          plVar13[0x1c] = lVar11;
          if (*(char *)((long)plVar13 + 0xf4) == '\0') {
            *(undefined1 *)((long)plVar13 + 0xf4) = 1;
            (**(code **)(*plVar13 + 0x78))(plVar13);
          }
        }
        else {
          lVar11 = plVar22[2];
          plVar13[0x1b] = plVar22[3];
          plVar13[0x1a] = lVar11;
LAB_00d3fb6c:
          lVar11 = plVar22[4];
          plVar13[0x1d] = plVar22[5];
          plVar13[0x1c] = lVar11;
        }
        FUN_00d40af0(plVar13,plVar13[1],param_1 + 0x830);
        (**(code **)(*plVar13 + 0x18))(&local_90,plVar13);
        local_a8 = (undefined8 *)0x0;
        uStack_a0 = 0;
        if ((long *)local_90[2] == plVar13 + 5) {
          FUN_00cbc6dc(&local_a8,&local_90);
        }
        plVar14 = local_90;
        if (local_90 != (long *)0x0) {
          plVar12 = local_90 + 3;
          do {
            sVar5 = (short)*plVar12;
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar20) {
              *(short *)plVar12 = sVar5 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar5 == 1) {
            piVar3 = (int *)((long)local_90 + 0x1c);
            do {
              iVar10 = *piVar3;
              cVar8 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar20) {
                *piVar3 = -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_68 = *plVar14;
              FUN_00c44438(lVar11 + 0x8040,&local_68);
            }
          }
          else if (sVar5 == 0) goto LAB_00d40064;
        }
        puVar6 = (undefined8 *)param_2[8];
        if (puVar6 < (undefined8 *)param_2[9]) {
          lVar11 = *plVar1;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar17 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar17 == 0) {
            *puVar6 = 0;
            puVar6[1] = 0;
            FUN_00ca1ea4(puVar6,&local_a8);
          }
          else {
            if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_00d3ffd8;
            *(long *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = lVar11;
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
            *puVar6 = 0;
            puVar6[1] = 0;
            FUN_00ca1ea4(puVar6,&local_a8);
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
          }
          param_2[8] = (long)(puVar6 + 2);
        }
        else {
          uVar21 = param_2[0xb];
          lVar11 = (long)puVar6 - param_2[7] >> 4;
          uVar15 = lVar11 + 1;
          if (0x7ffffffffffffffe < uVar21) {
            uVar21 = 0x7fffffffffffffff;
          }
          if (uVar21 < uVar15) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar17 = param_2[9] - param_2[7];
          uVar18 = lVar17 >> 3;
          local_78 = (long *)0x0;
          if (uVar15 <= uVar18) {
            uVar15 = uVar18;
          }
          if (uVar21 >> 1 <= (ulong)(lVar17 >> 4)) {
            uVar15 = uVar21;
          }
          plStack_70 = plVar1;
          if (uVar15 == 0) {
            plVar14 = (long *)0x0;
          }
          else {
            plVar14 = (long *)(**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar15 << 4,8);
            if (plVar14 == (long *)0x0) {
              (**(code **)(*(long *)*plVar1 + 0xe8))();
            }
          }
          plVar12 = plVar14 + lVar11 * 2;
          local_78 = plVar14 + uVar15 * 2;
          lVar11 = *plVar1;
          local_90 = plVar14;
          local_88 = plVar12;
          local_80 = plVar12;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar17 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar17 == 0) {
            *plVar12 = 0;
            plVar12[1] = 0;
            FUN_00ca1ea4(plVar12,&local_a8);
          }
          else {
            if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_00d3ffd8:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = lVar11;
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
            *plVar12 = 0;
            plVar12[1] = 0;
            FUN_00ca1ea4(plVar12,&local_a8);
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
            plVar12 = local_80;
          }
          local_80 = plVar12 + 2;
          FUN_00d40ff0(plVar1,param_2[7],param_2[8],&local_88);
          local_90 = (long *)param_2[7];
          plVar12 = (long *)param_2[8];
          param_2[7] = (long)local_88;
          param_2[8] = (long)local_80;
          plVar14 = (long *)param_2[9];
          param_2[9] = (long)local_78;
          local_88 = local_90;
          local_80 = plVar12;
          local_78 = plVar14;
          FUN_00d41124(&local_90);
          plVar14 = local_90;
          if (local_90 != (long *)0x0) {
            lVar11 = (long)local_78 - (long)local_90;
            plVar12 = (long *)*plStack_70;
            uVar15 = (**(code **)(*plVar12 + 0xf8))(plVar12);
            if (((uVar15 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
              (**(code **)(*plVar12 + 0x18))(plVar12,plVar14,lVar11,8);
            }
            else {
              FUN_00c48fe8(plVar12,plVar14,lVar11,8);
            }
          }
        }
        puVar6 = local_a8;
        if (local_a8 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_a8 + 3);
          do {
            sVar5 = *psVar2;
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar20) {
              *psVar2 = sVar5 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar5 == 1) {
            piVar3 = (int *)((long)local_a8 + 0x1c);
            do {
              iVar10 = *piVar3;
              cVar8 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar20) {
                *piVar3 = -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_90 = (long *)*puVar6;
              FUN_00c44438(lVar11 + 0x8040,&local_90);
            }
          }
          else if (sVar5 == 0) {
LAB_00d40064:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        lVar11 = plVar13[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar20) {
            *psVar2 = sVar5 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar13 + 0x50))(plVar13);
        }
        else if (sVar5 == 0) {
LAB_00d3fff0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        plVar22 = plVar22 + 6;
      } while (plVar22 != plVar7);
      if (local_98 == (long *)0x0) {
        return;
      }
    }
    (**(code **)(*local_98 + 0x18))(local_98);
  }
  return;
}


