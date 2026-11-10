/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a60240; name: FUN_00a60240
 */


void FUN_00a60240(long *param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  char *pcVar8;
  int iVar9;
  void *pvVar10;
  uint *puVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  short sVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  char *local_90;
  int *local_88;
  long local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined8 uStack_60;
  long *local_58;
  
  lVar17 = *param_2;
  local_90 = (char *)0x0;
  local_88 = (int *)0x0;
  FUN_00c43ef0(&local_90,lVar17 + 0x30);
  local_68 = (long *)0x0;
  uStack_60 = 0;
  lVar12 = 0;
  if (lVar17 != 0) {
    lVar12 = lVar17 + 0x28;
  }
  if (*(long *)(local_90 + 0x10) == lVar12) {
    FUN_00e29918(&local_68,&local_90);
  }
  pcVar8 = local_90;
  if (local_90 != (char *)0x0) {
    psVar1 = (short *)(local_90 + 0x18);
    do {
      sVar15 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
      piVar13 = (int *)(local_90 + 0x1c);
      do {
        iVar9 = *piVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar6) {
          *piVar13 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_58 = *(long **)pcVar8;
        FUN_00c44438(lVar12 + 0x8040,&local_58);
      }
    }
    else if (sVar15 == 0) goto LAB_00a60a9c;
  }
  plVar19 = local_68;
  if (local_68 == (long *)0x0) {
LAB_00a60a54:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","Setup",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/data/pokedex_fbs_data_base.cpp"
               ,0x68,"fbs data scene object is null");
  }
  if (*(short *)((long)local_68 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_68 + 0x1a);
    sVar15 = *(short *)((long)local_68 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar15) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          plVar16 = (long *)0x0;
          if (local_68[2] != 0) {
            plVar16 = (long *)(local_68[2] + -0x28);
          }
          goto LAB_00a60330;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      sVar15 = sVar4;
    } while (sVar4 != 0);
  }
  plVar16 = (long *)0x0;
LAB_00a60330:
  plVar18 = local_68 + 3;
  do {
    sVar15 = (short)*plVar18;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar6) {
      *(short *)plVar18 = sVar15 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar15 == 1) {
    piVar13 = (int *)((long)local_68 + 0x1c);
    do {
      iVar9 = *piVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar6) {
        *piVar13 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar12 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar12;
      local_90 = (char *)*plVar19;
      FUN_00c44438(lVar12 + 0x8040,&local_90);
    }
  }
  else if (sVar15 == 0) goto LAB_00a60a9c;
  if (plVar16 == (long *)0x0) goto LAB_00a60a54;
  (**(code **)(*param_1 + 0x28))(&local_70,param_1);
  plVar19 = local_70;
  if (local_70 == (long *)0x0) {
LAB_00a60a7c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","Setup",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/data/pokedex_fbs_data_base.cpp"
               ,0x4c);
  }
  (**(code **)(*local_70 + 0x18))(local_70);
  cVar5 = *(char *)plVar19[7];
  (**(code **)(*plVar19 + 0x20))(plVar19);
  if (cVar5 == '\0') goto LAB_00a60a7c;
  FUN_01dbf5e4(&local_78,plVar16 + 8,&local_70);
  if (local_78 != (long *)0x0) {
    plVar19 = local_78 + 5;
    (**(code **)(*local_78 + 0x18))(&local_90);
    local_68 = (long *)0x0;
    uStack_60 = 0;
    if (*(long **)(local_90 + 0x10) == plVar19) {
      FUN_00cbc6dc(&local_68,&local_90);
    }
    pcVar8 = local_90;
    if (local_90 != (char *)0x0) {
      psVar1 = (short *)(local_90 + 0x18);
      do {
        sVar15 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        piVar13 = (int *)(local_90 + 0x1c);
        do {
          iVar9 = *piVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_58 = *(long **)pcVar8;
          FUN_00c44438(lVar12 + 0x8040,&local_58);
        }
      }
      else if (sVar15 == 0) goto LAB_00a60a9c;
    }
    plVar19 = local_68;
    if (local_68 != (long *)0x0) {
      if (*(short *)((long)local_68 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_68 + 0x1a);
        sVar15 = *(short *)((long)local_68 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar15 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00a60618;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00a60618:
            bVar6 = false;
          }
          if (bVar6) {
            plVar18 = (long *)0x0;
            if (local_68[2] != 0) {
              plVar18 = (long *)(local_68[2] + -0x28);
            }
            goto LAB_00a60640;
          }
          sVar15 = sVar4;
        } while (sVar4 != 0);
      }
      plVar18 = (long *)0x0;
LAB_00a60640:
      plVar3 = local_68 + 3;
      do {
        sVar15 = (short)*plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(short *)plVar3 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        piVar13 = (int *)((long)local_68 + 0x1c);
        do {
          iVar9 = *piVar13;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_90 = (char *)*plVar19;
          FUN_00c44438(lVar12 + 0x8040,&local_90);
        }
      }
      else if (sVar15 == 0) {
LAB_00a60a9c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar18 != (long *)0x0) {
        lVar12 = FUN_01289558(plVar18 + 0x21,&local_90);
        if (lVar12 != 0) {
          if (*(char *)(lVar12 + 0x11a) == '\0') {
            local_88 = (int *)0x0;
            local_80 = 0;
            local_90 = (char *)0x0;
          }
          else {
            local_90 = *(char **)(lVar12 + 0x120);
            local_88 = *(int **)(lVar12 + 0x128);
            local_80 = *(long *)(lVar12 + 0x130);
          }
          param_1[6] = (long)local_90;
          param_1[7] = (long)local_88;
          param_1[8] = local_80;
          if (local_88 == (int *)0x0) {
LAB_00a60bcc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("false","CheckExistFieldValues",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/data/pokedex_fbs_data_base.cpp"
                       ,0x14,"FlatBuffersTable is not exist field values");
          }
          if ((*(ushort *)((long)local_88 - (long)*local_88) < 7) ||
             (uVar14 = (ulong)((ushort *)((long)local_88 - (long)*local_88))[3], uVar14 == 0)) {
            puVar11 = (uint *)0x0;
          }
          else {
            puVar11 = (uint *)((long)local_88 + uVar14);
            puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
          }
          local_90 = "values";
          pvVar10 = bsearch(&local_90,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600)
          ;
          if (pvVar10 == (void *)0x0) goto LAB_00a60bcc;
          (**(code **)(*param_1 + 0x30))(&local_68,param_1);
          plVar19 = local_68;
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x18))(local_68);
            cVar5 = *(char *)plVar19[7];
            (**(code **)(*plVar19 + 0x20))(plVar19);
            plVar19 = local_68;
            puVar7 = PTR_DAT_047d8b70;
            if (cVar5 != '\0') {
              plVar3 = (long *)PTR_DAT_047d8b70;
              if (local_68 != (long *)0x0) {
                plVar3 = local_68 + 6;
              }
              lVar17 = *plVar3;
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x18))(local_68);
              }
              for (plVar3 = *(long **)(lVar12 + 0x1d0); plVar3 != *(long **)(lVar12 + 0x1d8);
                  plVar3 = plVar3 + 0x16) {
                plVar2 = (long *)puVar7;
                if (plVar3[0x13] != 0) {
                  plVar2 = (long *)(plVar3[0x13] + 0x30);
                }
                if (*plVar2 == lVar17) {
                  local_90 = (char *)*plVar3;
                  local_88 = (int *)plVar3[1];
                  local_80 = plVar3[2];
                  goto LAB_00a607fc;
                }
              }
              local_88 = (int *)0x0;
              local_80 = 0;
              local_90 = (char *)0x0;
LAB_00a607fc:
              param_1[10] = (long)local_88;
              param_1[0xb] = local_80;
              param_1[9] = (long)local_90;
              if (plVar19 != (long *)0x0) {
                (**(code **)(*plVar19 + 0x20))(plVar19);
              }
              piVar13 = (int *)param_1[10];
              if (piVar13 == (int *)0x0) goto LAB_00a60bcc;
              if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 7) ||
                 (uVar14 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[3], uVar14 == 0)) {
                puVar11 = (uint *)0x0;
              }
              else {
                puVar11 = (uint *)((long)piVar13 + uVar14);
                puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
              }
              local_90 = "values";
              pvVar10 = bsearch(&local_90,puVar11 + 1,(ulong)*puVar11,4,
                                (__compar_fn_t)PTR_LAB_047d5600);
              if (pvVar10 == (void *)0x0) goto LAB_00a60bcc;
            }
          }
          (**(code **)(*param_1 + 0x38))(&local_58,param_1);
          plVar19 = local_58;
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x18))(local_58);
            cVar5 = *(char *)plVar19[7];
            (**(code **)(*plVar19 + 0x20))(plVar19);
            plVar19 = local_58;
            puVar7 = PTR_DAT_047d8b70;
            if (cVar5 != '\0') {
              plVar3 = (long *)PTR_DAT_047d8b70;
              if (local_58 != (long *)0x0) {
                plVar3 = local_58 + 6;
              }
              lVar17 = *plVar3;
              if (local_58 != (long *)0x0) {
                (**(code **)(*local_58 + 0x18))(local_58);
              }
              for (plVar3 = *(long **)(lVar12 + 0x1d0); plVar3 != *(long **)(lVar12 + 0x1d8);
                  plVar3 = plVar3 + 0x16) {
                plVar2 = (long *)puVar7;
                if (plVar3[0x13] != 0) {
                  plVar2 = (long *)(plVar3[0x13] + 0x30);
                }
                if (*plVar2 == lVar17) {
                  local_90 = (char *)*plVar3;
                  local_88 = (int *)plVar3[1];
                  local_80 = plVar3[2];
                  goto LAB_00a60928;
                }
              }
              local_88 = (int *)0x0;
              local_80 = 0;
              local_90 = (char *)0x0;
LAB_00a60928:
              param_1[0xd] = (long)local_88;
              param_1[0xe] = local_80;
              param_1[0xc] = (long)local_90;
              if (plVar19 != (long *)0x0) {
                (**(code **)(*plVar19 + 0x20))(plVar19);
              }
              piVar13 = (int *)param_1[0xd];
              if (piVar13 == (int *)0x0) goto LAB_00a60bcc;
              if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 7) ||
                 (uVar14 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[3], uVar14 == 0)) {
                puVar11 = (uint *)0x0;
              }
              else {
                puVar11 = (uint *)((long)piVar13 + uVar14);
                puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
              }
              local_90 = "values";
              pvVar10 = bsearch(&local_90,puVar11 + 1,(ulong)*puVar11,4,
                                (__compar_fn_t)PTR_LAB_047d5600);
              if (pvVar10 == (void *)0x0) goto LAB_00a60bcc;
            }
            if (local_58 != (long *)0x0) {
              (**(code **)(*local_58 + 0x20))();
            }
          }
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
        }
        lVar12 = plVar18[6];
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar18 + 0x50))(plVar18);
        }
        else if (sVar15 == 0) goto LAB_00a60488;
      }
    }
    if (local_78 != (long *)0x0) {
      lVar12 = local_78[6];
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*local_78 + 0x50))();
      }
      else if (sVar15 == 0) {
LAB_00a60488:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  (**(code **)(*plVar16 + 0x60))(plVar16);
  return;
}


