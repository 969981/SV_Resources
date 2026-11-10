/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021a1358; name: FUN_021a1358
 */


void FUN_021a1358(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  bool bVar5;
  char cVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  bool bVar15;
  long *plVar16;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar10 = (**(code **)(*(long *)(param_1 + 0x40) + 0x70))();
  if ((uVar10 & 1) == 0) {
    plVar14 = (long *)(param_1 + 0x48);
    lVar13 = *plVar14;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 != lVar13) {
      lVar11 = nn::os::GetCurrentThread();
LAB_021a13cc:
      if (*plVar14 == 0) goto code_r0x021a13d4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
      do {
        if (*plVar14 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
            while (*plVar14 == 0) {
              cVar6 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar15) {
                *plVar14 = lVar11;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_021a13dc;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar15) {
          *plVar14 = lVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_021a13dc:
      bVar15 = false;
      goto LAB_021a13e0;
    }
    plVar14 = (long *)0x0;
    bVar15 = true;
LAB_021a13e0:
    puVar7 = PTR_DAT_047d3910;
    plVar16 = *(long **)(param_1 + 0x60);
    plVar4 = *(long **)(param_1 + 0x68);
    if (plVar16 != plVar4) {
      do {
        plVar12 = (long *)*plVar16;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(&local_78);
          local_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          if ((long *)local_78[2] == plVar12 + 5) {
            FUN_00cbc6dc(&local_88,&local_78);
          }
          puVar8 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_78 + 3);
            do {
              sVar3 = *psVar1;
              cVar6 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_78 + 0x1c);
              do {
                iVar9 = *piVar2;
                cVar6 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)puVar7;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_68 = *puVar8;
                FUN_00c44438(lVar11 + 0x8040,&local_68);
              }
            }
            else if (sVar3 == 0) goto LAB_021a1708;
          }
          local_78 = (undefined8 *)0x0;
          uStack_70 = 0;
          FUN_00ca1a48(&local_78,&local_88);
          (*(code *)*param_2)(param_2 + 4,&local_78);
          puVar8 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_78 + 3);
            do {
              sVar3 = *psVar1;
              cVar6 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_78 + 0x1c);
              do {
                iVar9 = *piVar2;
                cVar6 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)puVar7;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_68 = *puVar8;
                FUN_00c44438(lVar11 + 0x8040,&local_68);
              }
            }
            else if (sVar3 == 0) goto LAB_021a1708;
          }
          puVar8 = local_88;
          if (local_88 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_88 + 3);
            do {
              sVar3 = *psVar1;
              cVar6 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_88 + 0x1c);
              do {
                iVar9 = *piVar2;
                cVar6 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)puVar7;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_78 = (undefined8 *)*puVar8;
                FUN_00c44438(lVar11 + 0x8040,&local_78);
              }
            }
            else if (sVar3 == 0) {
LAB_021a1708:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar4);
    }
    if (!bVar15) {
      *plVar14 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
    }
  }
  return;
code_r0x021a13d4:
  cVar6 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar15) {
    *plVar14 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_021a13dc;
  goto LAB_021a13cc;
}


