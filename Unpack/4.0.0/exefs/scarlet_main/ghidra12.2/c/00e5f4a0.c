/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e5f4a0; name: FUN_00e5f4a0
 */


void FUN_00e5f4a0(long param_1)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  short sVar8;
  char cVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  short sVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  long *local_88;
  undefined8 uStack_80;
  long *local_78 [2];
  long local_68;
  
  plVar15 = (long *)(param_1 + 0x40);
  uVar20 = *(undefined8 *)(param_1 + 8);
  lVar18 = *plVar15;
  lVar14 = nn::os::GetCurrentThread();
  if (lVar14 != lVar18) {
    lVar14 = nn::os::GetCurrentThread();
LAB_00e5f4e4:
    if (*plVar15 == 0) goto code_r0x00e5f4ec;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
    do {
      if (*plVar15 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
          while (*plVar15 == 0) {
            cVar9 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar12) {
              *plVar15 = lVar14;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') {
              bVar12 = false;
              goto LAB_00e5f4f4;
            }
          }
        } while( true );
      }
      cVar9 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar12) {
        *plVar15 = lVar14;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    bVar12 = false;
    goto LAB_00e5f4f4;
  }
  plVar15 = (long *)0x0;
  bVar12 = true;
LAB_00e5f4f4:
  lVar14 = *(long *)(param_1 + 0x68);
  plVar5 = *(long **)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x88) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x58);
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = uVar20;
  *(undefined8 *)(param_1 + 0x78) = 0x1fffffffffffffff;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (!bVar12) {
    *plVar15 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
  }
  FUN_00c4e600();
  FUN_00c4e600();
  lVar18 = FUN_00c4e600();
  iVar7 = *(int *)(lVar18 + 0x12c8);
  iVar13 = iVar7 + 1;
  *(int *)(lVar18 + 0x12c8) = iVar13;
  if (*(int *)(lVar18 + 0x12cc) <= iVar7) {
    *(int *)(lVar18 + 0x12cc) = iVar13;
  }
  puVar11 = PTR_DAT_047d3918;
  puVar10 = PTR_DAT_047d3910;
  if (puVar6 != puVar4) {
    puVar19 = puVar4;
    do {
      plVar22 = (long *)*puVar19;
      (**(code **)(*plVar22 + 0x18))(local_78,plVar22);
      local_88 = (long *)0x0;
      uStack_80 = 0;
      plVar15 = (long *)0x0;
      if (plVar22 != (long *)0x0) {
        plVar15 = plVar22 + 5;
      }
      if ((long *)local_78[0][2] == plVar15) {
        FUN_00cbc6dc(&local_88,local_78);
      }
      plVar15 = local_78[0];
      if (local_78[0] != (long *)0x0) {
        plVar22 = local_78[0] + 3;
        do {
          sVar17 = (short)*plVar22;
          cVar9 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar12) {
            *(short *)plVar22 = sVar17 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_78[0] + 0x1c);
          do {
            iVar13 = *piVar3;
            cVar9 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar12) {
              *piVar3 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar10,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)puVar10;
            *(long *)puVar11 = lVar18;
            local_68 = *plVar15;
            FUN_00c44438(lVar18 + 0x8040,&local_68);
          }
        }
        else if (sVar17 == 0) goto LAB_00e5fb34;
      }
      plVar15 = local_88;
      if (local_88 == (long *)0x0) {
LAB_00e5f5c0:
        FUN_00e5fbe0(*puVar19);
      }
      else {
        if (*(short *)((long)local_88 + 0x1a) != 0) {
          psVar2 = (short *)((long)local_88 + 0x1a);
          sVar17 = *(short *)((long)local_88 + 0x1a);
          do {
            sVar8 = *psVar2;
            if (sVar8 == sVar17) {
              cVar9 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar12) {
                *psVar2 = sVar17 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 != '\0') goto LAB_00e5f940;
              bVar12 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_00e5f940:
              bVar12 = false;
            }
            if (bVar12) {
              plVar22 = (long *)0x0;
              if (local_88[2] != 0) {
                plVar22 = (long *)(local_88[2] + -0x28);
              }
              goto LAB_00e5f968;
            }
            sVar17 = sVar8;
          } while (sVar8 != 0);
        }
        plVar22 = (long *)0x0;
LAB_00e5f968:
        plVar21 = local_88 + 3;
        do {
          sVar17 = (short)*plVar21;
          cVar9 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar12) {
            *(short *)plVar21 = sVar17 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_88 + 0x1c);
          do {
            iVar13 = *piVar3;
            cVar9 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar12) {
              *piVar3 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar10,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)puVar10;
            *(long *)puVar11 = lVar18;
            local_78[0] = (long *)*plVar15;
            FUN_00c44438(lVar18 + 0x8040,local_78);
          }
        }
        else if (sVar17 == 0) {
LAB_00e5fb34:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
        if (plVar22 == (long *)0x0) goto LAB_00e5f5c0;
        lVar18 = plVar22[6];
        psVar2 = (short *)(lVar18 + 0x1a);
        *(undefined1 *)((long)plVar22 + 0x7c5) = 0;
        do {
          sVar17 = *psVar2;
          cVar9 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar12) {
            *psVar2 = sVar17 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*plVar22 + 0x50))(plVar22);
        }
        else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar6);
  }
  lVar18 = FUN_00c4e600();
  iVar13 = *(int *)(lVar18 + 0x12c8) + -1;
  *(int *)(lVar18 + 0x12c8) = iVar13;
  if (iVar13 == 0) {
    plVar15 = (long *)FUN_00c4e600();
    if (plVar15[600] != 0) {
      local_88 = plVar15 + plVar15[600] * 3;
      local_78[0] = plVar15;
      FUN_00c4ea30(local_78,&local_88);
      plVar21 = (long *)*plVar15;
      plVar22 = plVar15;
      if (plVar15[600] != 0) {
        plVar22 = plVar15 + plVar15[600] * 3;
      }
      if (plVar22 == plVar15) {
        uVar23 = 0;
        uVar16 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar15 + 0xd0))();
        if ((long *)*plVar15 != plVar21) {
          (**(code **)(*plVar21 + 0x100))(plVar21,plVar15,plVar15);
          plVar21 = (long *)*plVar15;
        }
        plVar1 = plVar15 + 3;
        if (plVar22 == plVar1) {
          uVar23 = 0;
          uVar16 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar1 + 0xd0))();
          bVar12 = (long *)*plVar1 != plVar21;
          if (bVar12) {
            (**(code **)(*plVar21 + 0x100))(plVar21,plVar15,plVar15 + 3);
            plVar21 = (long *)plVar15[3];
          }
          uVar23 = (ulong)bVar12;
          plVar1 = plVar15 + 6;
          if (plVar22 == plVar1) {
            uVar16 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            if ((long *)*plVar1 != plVar21) {
              (**(code **)(*plVar21 + 0x100))(plVar21,plVar15 + uVar23 * 3,plVar15 + 6);
              plVar21 = (long *)plVar15[6];
              uVar23 = 2;
            }
            plVar1 = plVar15 + 9;
            if (plVar22 == plVar1) {
              uVar16 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar21) {
                (**(code **)(*plVar21 + 0x100))(plVar21,plVar15 + uVar23 * 3,plVar15 + 9);
                plVar21 = (long *)plVar15[9];
                uVar23 = 3;
              }
              plVar1 = plVar15 + 0xc;
              if (plVar22 == plVar1) {
                uVar16 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar21) {
                  (**(code **)(*plVar21 + 0x100))(plVar21,plVar15 + uVar23 * 3,plVar15 + 0xc);
                  plVar21 = (long *)plVar15[0xc];
                  uVar23 = 4;
                }
                plVar1 = plVar15 + 0xf;
                if (plVar22 == plVar1) {
                  uVar16 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar21) {
                    (**(code **)(*plVar21 + 0x100))(plVar21,plVar15 + uVar23 * 3,plVar15 + 0xf);
                    plVar21 = (long *)plVar15[0xf];
                    uVar23 = 5;
                  }
                  uVar16 = 6;
                  for (plVar1 = plVar15 + 0x12; plVar22 != plVar1; plVar1 = plVar1 + 3) {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar21) {
                      (**(code **)(*plVar21 + 0x100))(plVar21,plVar15 + uVar23 * 3,plVar1);
                      plVar21 = (long *)*plVar1;
                      uVar23 = uVar16;
                    }
                    uVar16 = uVar16 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar21 + 0x100))(plVar21,plVar15 + uVar23 * 3,plVar15 + uVar16 * 3);
      plVar15[600] = 0;
    }
    *(undefined4 *)(lVar18 + 0x12cc) = 0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    lVar14 = lVar14 - (long)puVar4;
    uVar16 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar16 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar4,lVar14,8);
    }
    else {
      FUN_00c48fe8(plVar5,puVar4,lVar14,8);
    }
  }
  return;
code_r0x00e5f4ec:
  cVar9 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar12) {
    *plVar15 = lVar14;
    cVar9 = ExclusiveMonitorsStatus();
  }
  bVar12 = false;
  if (cVar9 == '\0') goto LAB_00e5f4f4;
  goto LAB_00e5f4e4;
}


