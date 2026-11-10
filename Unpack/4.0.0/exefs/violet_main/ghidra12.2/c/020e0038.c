/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e0038; name: FUN_020e0038
 */


void FUN_020e0038(undefined8 *param_1)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  short sVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  char *local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  
  puVar18 = (undefined8 *)param_1[0x26];
  puVar15 = (undefined8 *)param_1[0x27];
  *param_1 = &PTR_FUN_0457fd78;
  param_1[4] = &PTR_LAB_0457fec0;
  param_1[5] = &DAT_0457ffe8;
  param_1[6] = &PTR_LAB_04580040;
  param_1[7] = &PTR_LAB_04580068;
  puVar7 = PTR_LAB_047d3de8;
  puVar6 = PTR_DAT_047d3910;
  if (puVar18 == puVar15) {
LAB_020e013c:
    param_1[0x27] = puVar18;
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x38));
    if ((long *)param_1[0x32] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x32] + 0x20))();
    }
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2e));
    puVar8 = PTR_LAB_047d3de8;
    puVar7 = PTR_DAT_047d3918;
    puVar6 = PTR_DAT_047d3910;
    puVar18 = (undefined8 *)param_1[0x26];
    if (puVar18 != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)param_1[0x27];
      puVar15 = puVar18;
      if (puVar16 != puVar18) {
        pbVar14 = PTR_DAT_047d3908;
        do {
          puVar16 = puVar16 + -3;
          puVar15 = (undefined8 *)*puVar16;
          if (puVar15 != (undefined8 *)0x0) {
            psVar2 = (short *)(puVar15 + 3);
            do {
              sVar13 = *psVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar5) {
                *psVar2 = sVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar13 == 1) {
              piVar1 = (int *)((long)puVar15 + 0x1c);
              do {
                iVar9 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar9 != -1) {
                if (((*pbVar14 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(puVar8,puVar6,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar12 = *(long *)puVar6;
                *(long *)puVar7 = lVar12;
                local_90 = (undefined1 *)*puVar15;
                FUN_00c44438(lVar12 + 0x8040,&local_90);
                pbVar14 = PTR_DAT_047d3908;
              }
            }
            else if (sVar13 == 0) goto LAB_020e026c;
          }
        } while (puVar16 != puVar18);
        puVar15 = (undefined8 *)param_1[0x26];
      }
      lVar12 = param_1[0x28];
      plVar17 = (long *)param_1[0x29];
      param_1[0x27] = puVar18;
      uVar10 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,puVar15,lVar12 - (long)puVar15,8);
      }
      else {
        FUN_00c48fe8(plVar17,puVar15,lVar12 - (long)puVar15,8);
      }
    }
    puVar18 = (undefined8 *)param_1[0x24];
    if (puVar18 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar18 + 3);
      do {
        sVar13 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar13 == 1) {
        piVar1 = (int *)((long)puVar18 + 0x1c);
        do {
          iVar9 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_90 = (undefined1 *)*puVar18;
          FUN_00c44438(lVar12 + 0x8040,&local_90);
        }
      }
      else if (sVar13 == 0) goto LAB_020e026c;
    }
    FUN_00e6bfa4(param_1);
    return;
  }
  plVar17 = (long *)PTR_DAT_047d3918;
  do {
    if (*(char *)(puVar18 + 2) != '\0') {
      local_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      FUN_00d4ca00(&local_a0,puVar18);
      if (local_a0 != (undefined8 *)0x0) {
        if (*(short *)((long)local_a0 + 0x1a) != 0) {
          psVar2 = (short *)((long)local_a0 + 0x1a);
          sVar13 = *(short *)((long)local_a0 + 0x1a);
LAB_020e03d8:
          sVar3 = *psVar2;
          if (sVar3 == sVar13) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_020e03fc;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_020e03fc:
            bVar5 = false;
          }
          if (!bVar5) goto code_r0x020e0404;
          lVar12 = local_a0[2];
          if (lVar12 != 0) {
            plVar17 = (long *)(lVar12 + -0x28);
            local_90 = &DAT_afc4d6c05abef19e;
            local_88 = "default";
            local_80 = 7;
            local_78 = (long *)0x0;
            lVar11 = FUN_01132f14(plVar17,&local_90);
            if (lVar11 == 0) {
              local_70 = (long *)0x0;
            }
            else {
              FUN_011343b4(&local_70,lVar11,auStack_68);
            }
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
            if (local_70 != (long *)0x0) {
              local_78 = (long *)0x0;
              local_90 = (undefined1 *)0x7abf4174137c14c1;
              local_88 = "Audio/PokeVoiceEvent";
              local_80 = 0x14;
              FUN_020e06e8(local_70,&local_90);
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
              if (local_70 != (long *)0x0) {
                lVar11 = local_70[6];
                psVar2 = (short *)(lVar11 + 0x1a);
                do {
                  sVar13 = *psVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar5) {
                    *psVar2 = sVar13 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar13 == 1) {
                  *(undefined8 *)(lVar11 + 0x10) = 0;
                  (**(code **)(*local_70 + 0x50))();
                }
                else if (sVar13 == 0) goto LAB_020e065c;
              }
            }
            lVar12 = *(long *)(lVar12 + 0x70);
            psVar2 = (short *)(lVar12 + 0x1a);
            do {
              sVar13 = *psVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar5) {
                *psVar2 = sVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar13 == 1) {
              *(undefined8 *)(lVar12 + 0x10) = 0;
              (**(code **)(*plVar17 + 0x50))(plVar17);
            }
            else if (sVar13 == 0) {
LAB_020e065c:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
        }
LAB_020e04e8:
        puVar16 = local_a0;
        plVar17 = (long *)PTR_DAT_047d3918;
        if (local_a0 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_a0 + 3);
          do {
            sVar13 = *psVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar13 == 1) {
            piVar1 = (int *)((long)local_a0 + 0x1c);
            do {
              iVar9 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            plVar17 = (long *)PTR_DAT_047d3918;
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(puVar7,puVar6,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              plVar17 = (long *)PTR_DAT_047d3918;
              lVar12 = *(long *)puVar6;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_90 = (undefined1 *)*puVar16;
              FUN_00c44438(lVar12 + 0x8040,&local_90);
            }
          }
          else {
            plVar17 = (long *)PTR_DAT_047d3918;
            if (sVar13 == 0) goto LAB_020e026c;
          }
        }
      }
    }
    puVar8 = PTR_LAB_047d3de8;
    puVar18 = puVar18 + 3;
  } while (puVar18 != puVar15);
  puVar18 = (undefined8 *)param_1[0x26];
  puVar15 = (undefined8 *)param_1[0x27];
  do {
    while( true ) {
      do {
        if (puVar15 == puVar18) goto LAB_020e013c;
        puVar15 = puVar15 + -3;
        puVar16 = (undefined8 *)*puVar15;
      } while (puVar16 == (undefined8 *)0x0);
      psVar2 = (short *)(puVar16 + 3);
      do {
        sVar13 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar13 != 1) break;
      piVar1 = (int *)((long)puVar16 + 0x1c);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(puVar8,puVar6,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)puVar6;
        *plVar17 = lVar12;
        local_90 = (undefined1 *)*puVar16;
        FUN_00c44438(lVar12 + 0x8040,&local_90);
      }
    }
  } while (sVar13 != 0);
LAB_020e026c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
code_r0x020e0404:
  sVar13 = sVar3;
  if (sVar3 == 0) goto LAB_020e04e8;
  goto LAB_020e03d8;
}


