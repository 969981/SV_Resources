/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00adb8cc; name: FUN_00adb8cc
 */


void FUN_00adb8cc(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined1 local_98;
  undefined2 local_90 [4];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78 [2];
  undefined8 *local_68;
  
  if (((*PTR_DAT_047d8cc8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar15 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar15;
  if (lVar15 == 0) {
    plVar18 = (long *)0x0;
  }
  else {
    plVar18 = *(long **)(lVar15 + 0x50);
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar15 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar18;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x12f8,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*plVar18 + 0xe8))(plVar18);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  *plVar11 = (long)(PTR_DAT_047d66f8 + 0x10);
  plVar11[2] = 0;
  *(undefined4 *)(plVar11 + 3) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  puVar6 = PTR_DAT_047d8c78;
  if (lVar12 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar16 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8);
    }
  }
  *plVar11 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar11[1] = lVar16;
  plVar11[4] = (long)(puVar6 + 0x88);
  plVar19 = plVar11 + 5;
  *plVar19 = (long)(puVar6 + 0xd8);
  plVar17 = plVar11 + 6;
  *plVar17 = 0;
  plVar11[7] = 0;
  FUN_00d1a3f4(plVar17,plVar19);
  plVar11[8] = (long)&PTR_LAB_04551190;
  *plVar11 = (long)&PTR_LAB_04551068;
  plVar11[4] = (long)&PTR_LAB_045510e8;
  *plVar19 = (long)&PTR_FUN_04551138;
  plVar11[9] = (long)plVar18;
  *(undefined4 *)(plVar11 + 10) = 0;
  plVar20 = plVar11 + 0xb;
  *plVar20 = 0;
  plVar11[0x10] = 0xfffffffffffffff;
  plVar11[0x11] = 0;
  *(undefined4 *)(plVar11 + 0x12) = 0;
  *(undefined1 *)(plVar11 + 0x13) = 0;
  *(undefined1 *)(plVar11 + 0x13b) = 0;
  plVar11[0xc] = 0;
  plVar11[0xd] = 0;
  plVar11[0xe] = 0;
  plVar11[0xf] = (long)plVar18;
  *(undefined2 *)(plVar11 + 0x25e) = 0;
  *(undefined1 *)((long)plVar11 + 0x12f2) = 0;
  *(undefined1 *)((long)plVar11 + 0x12f4) = 0;
  *(undefined1 *)(plVar11 + 0x18) = 0;
  *(undefined4 *)(plVar11 + 3) = 0x812f8;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[1] = (long)plVar18;
  plVar11[2] = (long)plVar11;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  lVar15 = *plVar17;
  if (*(long *)(lVar15 + 0x10) != 0) {
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar14;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_00adc30c;
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar15 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar15;
    if (lVar15 != 0) {
      local_90[0] = 6;
      (**(code **)(*plVar11 + 0x18))(local_78,plVar11);
      local_88 = (undefined8 *)0x0;
      local_80 = 0;
      if ((long *)local_78[0][2] == plVar19) {
        FUN_00963068(&local_88,local_78);
      }
      puVar8 = local_78[0];
      puVar7 = PTR_DAT_047d3918;
      puVar6 = PTR_DAT_047d3908;
      if (local_78[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_78[0] + 3);
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
          piVar2 = (int *)((long)local_78[0] + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if ((*puVar6 & 1) == 0) {
              iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908);
              if (iVar10 != 0) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar7 = lVar12;
            local_68 = (undefined8 *)*puVar8;
            FUN_00c44438(lVar12 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) goto LAB_00adc3a8;
      }
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      do {
        uVar14 = local_80;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(&local_80,0x10);
        if (bVar5) {
          local_80 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((*puVar6 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908);
        if (iVar10 != 0) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
      }
      uVar13 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)puVar7 = uVar13;
      FUN_00c44204(&local_68,uVar13,uVar14);
      puVar8 = local_88;
      local_88 = (undefined8 *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar8 + 3);
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
          piVar2 = (int *)((long)puVar8 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if (((*puVar6 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar7 = lVar12;
            local_78[0] = (undefined8 *)*puVar8;
            FUN_00c44438(lVar12 + 0x8040,local_78);
          }
        }
        else if (sVar3 == 0) goto LAB_00adc3a8;
      }
      puVar8 = local_b0;
      local_b0 = (undefined8 *)0x0;
      if (local_68 == (undefined8 *)0x0) {
        if (puVar8 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar8 + 3);
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
            piVar2 = (int *)((long)puVar8 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 != -1) {
              if (((*puVar6 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)puVar7 = lVar12;
              local_78[0] = (undefined8 *)*puVar8;
              FUN_00c44438(lVar12 + 0x8040,local_78);
            }
          }
          else if (sVar3 == 0) goto LAB_00adc3a8;
        }
        uVar14 = 0;
      }
      else {
        if (puVar8 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar8 + 3);
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
            piVar2 = (int *)((long)puVar8 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 != -1) {
              if ((*puVar6 & 1) == 0) {
                iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908);
                if (iVar10 != 0) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)puVar7 = lVar12;
              local_78[0] = (undefined8 *)*puVar8;
              FUN_00c44438(lVar12 + 0x8040,local_78);
            }
          }
          else if (sVar3 == 0) goto LAB_00adc3a8;
        }
        local_b0 = local_68;
        local_68 = (undefined8 *)0x0;
      }
      puVar8 = local_68;
      local_a8 = uVar14;
      if (local_68 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68 + 3);
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
          piVar2 = (int *)((long)local_68 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if ((*puVar6 & 1) == 0) {
              iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908);
              if (iVar10 != 0) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar7 = lVar12;
            local_78[0] = (undefined8 *)*puVar8;
            FUN_00c44438(lVar12 + 0x8040,local_78);
          }
        }
        else if (sVar3 == 0) goto LAB_00adc3a8;
      }
      puVar8 = local_88;
      if (local_88 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_88 + 3);
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
          piVar2 = (int *)((long)local_88 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if ((*puVar6 & 1) == 0) {
              iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908);
              if (iVar10 != 0) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar7 = lVar12;
            local_78[0] = (undefined8 *)*puVar8;
            FUN_00c44438(lVar12 + 0x8040,local_78);
          }
        }
        else if (sVar3 == 0) goto LAB_00adc3a8;
      }
      local_98 = 0;
      local_a0 = plVar11 + 8;
      FUN_0178e4dc(&local_88,lVar15,local_90,&local_b0);
      plVar18 = (long *)*plVar20;
      *plVar20 = 0;
      if (plVar18 != (long *)0x0) {
        lVar15 = plVar18[6];
        psVar1 = (short *)(lVar15 + 0x1a);
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
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*plVar18 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_00adc380;
      }
      puVar9 = local_88;
      puVar8 = local_b0;
      local_88 = (undefined8 *)0x0;
      *plVar20 = (long)puVar9;
      if (local_b0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_b0 + 3);
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
          piVar2 = (int *)((long)local_b0 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if (((*puVar6 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar7 = lVar15;
            local_78[0] = (undefined8 *)*puVar8;
            FUN_00c44438(lVar15 + 0x8040,local_78);
          }
        }
        else if (sVar3 == 0) {
LAB_00adc3a8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    *param_1 = plVar11;
    lVar15 = plVar11[6];
    if (*(long *)(lVar15 + 0x10) != 0) {
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
        *(undefined8 *)(lVar15 + 8) = uVar14;
        *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
LAB_00adc30c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      lVar15 = *plVar17;
      psVar1 = (short *)(lVar15 + 0x1a);
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
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar3 == 0) {
LAB_00adc380:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x3d);
}


