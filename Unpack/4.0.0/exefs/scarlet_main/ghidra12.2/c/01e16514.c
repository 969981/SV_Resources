/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e16514; name: FUN_01e16514
 */


/* WARNING: Removing unreachable block (ram,0x01e16758) */
/* WARNING: Removing unreachable block (ram,0x01e1675c) */
/* WARNING: Removing unreachable block (ram,0x01e16764) */
/* WARNING: Removing unreachable block (ram,0x01e1676c) */
/* WARNING: Removing unreachable block (ram,0x01e16834) */
/* WARNING: Removing unreachable block (ram,0x01e1683c) */
/* WARNING: Removing unreachable block (ram,0x01e16840) */
/* WARNING: Removing unreachable block (ram,0x01e16848) */
/* WARNING: Removing unreachable block (ram,0x01e16850) */
/* WARNING: Removing unreachable block (ram,0x01e16bf8) */
/* WARNING: Removing unreachable block (ram,0x01e16c08) */
/* WARNING: Removing unreachable block (ram,0x01e16858) */
/* WARNING: Removing unreachable block (ram,0x01e16774) */
/* WARNING: Removing unreachable block (ram,0x01e16778) */

long * FUN_01e16514(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  short sVar16;
  long *plVar17;
  bool bVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_60;
  long local_58;
  
  plVar11 = (long *)(param_1 + 0xf0);
  if ((*plVar11 == 0) || (*(short *)(*plVar11 + 0x1a) == 0)) {
    plVar17 = (long *)(param_1 + 0xe0);
    if (((*plVar17 == 0) || (*(short *)(*plVar17 + 0x1a) == 0)) &&
       ((((*(long *)(param_1 + 0x80) != 0 && (*(short *)(*(long *)(param_1 + 0x80) + 0x1a) != 0)) &&
         (lVar15 = *(long *)(param_1 + 0x80), lVar15 != 0)) && (*(short *)(lVar15 + 0x1a) != 0)))) {
      psVar1 = (short *)(lVar15 + 0x1a);
      sVar16 = *(short *)(lVar15 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar18) {
            *psVar1 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01e1663c;
          bVar18 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e1663c:
          bVar18 = false;
        }
        if (bVar18) {
          lVar15 = *(long *)(lVar15 + 0x10);
          if (lVar15 != 0) {
            plVar13 = (long *)(lVar15 + 0xe8);
            lVar19 = *plVar13;
            lVar14 = nn::os::GetCurrentThread();
            if (lVar14 != lVar19) {
              lVar14 = nn::os::GetCurrentThread();
              goto LAB_01e16980;
            }
            bVar18 = true;
            goto LAB_01e16994;
          }
          break;
        }
        sVar16 = sVar4;
      } while (sVar4 != 0);
    }
LAB_01e16584:
    lVar15 = *plVar17;
    if ((lVar15 != 0) && (*(short *)(lVar15 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar15 + 0x1a);
      sVar16 = *(short *)(lVar15 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar18) {
            *psVar1 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01e165c8;
          bVar18 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e165c8:
          bVar18 = false;
        }
        if (bVar18) {
          lVar15 = *(long *)(lVar15 + 0x10);
          if (lVar15 == 0) {
            return plVar11;
          }
          plVar17 = (long *)(lVar15 + -0x28);
          FUN_00d52990(&local_68,plVar17,0);
          puVar6 = PTR_DAT_047d3908;
          do {
            uVar9 = local_60;
            cVar5 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(&local_60,0x10);
            if (bVar18) {
              local_60 = 0;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          puVar8 = PTR_DAT_047d3918;
          puVar7 = PTR_DAT_047d3910;
          uVar12 = *(undefined8 *)PTR_DAT_047d3910;
          *(undefined8 *)PTR_DAT_047d3918 = uVar12;
          FUN_00c44204(&local_58,uVar12,uVar9);
          plVar13 = local_68;
          local_68 = (long *)0x0;
          if (plVar13 != (long *)0x0) {
            plVar2 = plVar13 + 3;
            do {
              sVar16 = (short)*plVar2;
              cVar5 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar18) {
                *(short *)plVar2 = sVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar16 == 1) {
              piVar3 = (int *)((long)plVar13 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar5 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar18) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 != -1) {
                if (((*puVar6 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar14 = *(long *)puVar7;
                *(long *)puVar8 = lVar14;
                local_78 = (undefined8 *)*plVar13;
                FUN_00c44438(lVar14 + 0x8040,&local_78);
              }
            }
            else if (sVar16 == 0) goto LAB_01e167e4;
          }
          if (local_58 == 0) {
            FUN_00d53dd0(plVar11);
          }
          else {
            puVar20 = (undefined8 *)*plVar11;
            *plVar11 = 0;
            if (puVar20 != (undefined8 *)0x0) {
              psVar1 = (short *)(puVar20 + 3);
              do {
                sVar16 = *psVar1;
                cVar5 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar18) {
                  *psVar1 = sVar16 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar16 == 1) {
                piVar3 = (int *)((long)puVar20 + 0x1c);
                do {
                  iVar10 = *piVar3;
                  cVar5 = '\x01';
                  bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar18) {
                    *piVar3 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar10 != -1) {
                  if (((*puVar6 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar14 = *(long *)puVar7;
                  *(long *)puVar8 = lVar14;
                  local_78 = (undefined8 *)*puVar20;
                  FUN_00c44438(lVar14 + 0x8040,&local_78);
                }
              }
              else if (sVar16 == 0) goto LAB_01e167e4;
            }
            lVar14 = local_58;
            local_58 = 0;
            *(long *)(param_1 + 0xf0) = lVar14;
            *(undefined8 *)(param_1 + 0xf8) = uVar9;
          }
          plVar13 = local_68;
          if (local_68 != (long *)0x0) {
            plVar2 = local_68 + 3;
            do {
              sVar16 = (short)*plVar2;
              cVar5 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar18) {
                *(short *)plVar2 = sVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar16 == 1) {
              piVar3 = (int *)((long)local_68 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar5 = '\x01';
                bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar18) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 != -1) {
                if (((*puVar6 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar14 = *(long *)puVar7;
                *(long *)puVar8 = lVar14;
                local_78 = (undefined8 *)*plVar13;
                FUN_00c44438(lVar14 + 0x8040,&local_78);
              }
            }
            else if (sVar16 == 0) {
LAB_01e167e4:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          lVar15 = *(long *)(lVar15 + 0x70);
          psVar1 = (short *)(lVar15 + 0x1a);
          do {
            sVar16 = *psVar1;
            cVar5 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar18) {
              *psVar1 = sVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar16 == 1) {
            *(undefined8 *)(lVar15 + 0x10) = 0;
            (**(code **)(*plVar17 + 0x50))(plVar17);
            return plVar11;
          }
          if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return plVar11;
        }
        sVar16 = sVar4;
      } while (sVar4 != 0);
    }
  }
  return plVar11;
LAB_01e16980:
  if (*plVar13 == 0) goto code_r0x01e16988;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xf0));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xf0));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar18) {
            *plVar13 = lVar14;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01e16990;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar18) {
      *plVar13 = lVar14;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01e16990:
  bVar18 = false;
LAB_01e16994:
  plVar13 = (long *)FUN_01e16d60(*(undefined8 *)(lVar15 + 0x100),*(undefined8 *)(lVar15 + 0x108));
  if ((*(long **)(lVar15 + 0x108) == plVar13) || (*plVar13 == 0)) {
    plVar13 = (long *)FUN_01e16d60(*(undefined8 *)(lVar15 + 0x138),*(undefined8 *)(lVar15 + 0x140));
    if (*(long **)(lVar15 + 0x140) == plVar13) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      if (*plVar13 != 0) {
        lVar14 = *plVar13 + -0x20;
      }
    }
  }
  else {
    lVar14 = *plVar13 + -0x20;
  }
  if (!bVar18) {
    *(undefined8 *)(lVar15 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0xf0));
  }
  if (lVar14 != 0) {
    local_68 = (long *)0x0;
    local_60 = 0;
    FUN_00c43ef0(&local_68,lVar14 + 0x98);
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    if (local_68[2] == lVar14 + 0x28) {
      FUN_00e77114(&local_78,&local_68);
    }
    plVar13 = local_68;
    if (local_68 != (long *)0x0) {
      plVar2 = local_68 + 3;
      do {
        sVar16 = (short)*plVar2;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar18) {
          *(short *)plVar2 = sVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar16 == 1) {
        piVar3 = (int *)((long)local_68 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_58 = *plVar13;
          FUN_00c44438(lVar14 + 0x8040,&local_58);
        }
      }
      else if (sVar16 == 0) goto LAB_01e167e4;
    }
    FUN_00e76d44(plVar17,&local_78);
    puVar20 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_78 + 3);
      do {
        sVar16 = *psVar1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar16 == 1) {
        piVar3 = (int *)((long)local_78 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_68 = (long *)*puVar20;
          FUN_00c44438(lVar14 + 0x8040,&local_68);
        }
      }
      else if (sVar16 == 0) goto LAB_01e167e4;
    }
  }
  (**(code **)(*(long *)(lVar15 + -0x28) + 0x60))();
  goto LAB_01e16584;
code_r0x01e16988:
  cVar5 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar18) {
    *plVar13 = lVar14;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01e16990;
  goto LAB_01e16980;
}


