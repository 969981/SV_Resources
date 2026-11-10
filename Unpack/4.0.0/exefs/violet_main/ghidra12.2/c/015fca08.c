/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015fca08; name: FUN_015fca08
 */


void FUN_015fca08(long param_1,uint *param_2,uint param_3,short *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  short *psVar12;
  short sVar13;
  short *psVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50 [2];
  undefined2 local_40 [4];
  long *local_38;
  
  psVar12 = *(short **)(param_1 + 0x4090);
  psVar14 = *(short **)(param_1 + 0x4098);
  if (psVar12 != psVar14) {
    while (*psVar12 != *param_4) {
      psVar12 = psVar12 + 0xe4;
      if (psVar14 == psVar12) {
        return;
      }
    }
  }
  if (psVar12 == psVar14) {
    return;
  }
  if ((char)psVar12[0x44] != '\x02') {
    return;
  }
  if (*(long *)(psVar12 + 0x14) == 0) {
    return;
  }
  lVar15 = *(long *)(*(long *)(psVar12 + 0x14) + 0x10);
  if (lVar15 == 0) {
    return;
  }
  plVar9 = *(long **)(lVar15 + 0x150);
  plVar2 = *(long **)(lVar15 + 0x158);
  if (plVar9 != plVar2) {
    while (*(undefined1 **)(*plVar9 + 0x1d0) != &DAT_afc4d6c05abef19e) {
      plVar9 = plVar9 + 1;
      if (plVar2 == plVar9) {
        return;
      }
    }
  }
  if (plVar9 == plVar2) {
    return;
  }
  if (*plVar9 == 0) {
    return;
  }
  FUN_00f422c8(&local_38,*plVar9,&local_70);
  if (local_38 == (long *)0x0) {
    return;
  }
  if (param_3 < 0x1c) {
    lVar15 = local_38[6];
    psVar12 = (short *)(lVar15 + 0x1a);
    do {
      sVar13 = *psVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar12,0x10);
      if (bVar4) {
        *psVar12 = sVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    goto LAB_015fcbd4;
  }
  if (3 < *param_2) goto LAB_015fcbb4;
  uVar11 = *(undefined8 *)(param_2 + 1);
  lVar15 = *(long *)(param_2 + 1);
  uVar17 = param_2[3];
  uVar6 = *(undefined8 *)(param_2 + 4);
  lVar5 = *(long *)(param_2 + 4);
  uVar16 = param_2[6];
  switch(*param_2) {
  case 0:
    uVar11 = 0;
    break;
  case 1:
    uVar11 = 1;
    break;
  case 2:
    local_38[0x21] = (ulong)uVar17;
    local_38[0x20] = lVar15;
    FUN_01ea5ce4(local_38,2);
    uVar11 = 2;
    local_38[0x3b] = (ulong)uVar16;
    local_38[0x3a] = lVar5;
    break;
  case 3:
    if (param_3 < 0x22) {
      lVar15 = local_38[6];
      psVar12 = (short *)(lVar15 + 0x1a);
      do {
        sVar13 = *psVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar12,0x10);
        if (bVar4) {
          *psVar12 = sVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_015fcbd4;
    }
    local_40[0] = (undefined2)param_2[7];
    FUN_01ea3c38(local_50,param_1,local_40);
    if (local_50[0] != (undefined8 *)0x0) {
      if (*(short *)((long)local_50[0] + 0x1a) != 0) {
        if (local_50[0] == (undefined8 *)0x0) goto LAB_015fcbb4;
        if (((local_50[0][2] != 0) &&
            (lVar15 = FUN_01104bd8(local_50[0][2] + 0xe0,&local_70), lVar15 != 0)) &&
           (plVar9 = (long *)FUN_01df7f84(), *plVar9 != 0)) {
          puVar10 = (undefined8 *)FUN_01df7f84(lVar15);
          plVar9 = (long *)*puVar10;
          if (plVar9 != (long *)0x0) {
            plVar2 = plVar9 + 5;
            do {
              lVar15 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = (int)lVar15 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((int)lVar15 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
          }
          local_60 = 0;
          local_58 = (long *)0x0;
          local_70 = &DAT_cbf29ce484222645;
          puStack_68 = &DAT_03c886bc;
          if (*(int *)((long)param_2 + 0x1e) == -1) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            local_70 = *(undefined1 **)PTR_DAT_047d3e30;
            puStack_68 = *(undefined1 **)(PTR_DAT_047d3e30 + 8);
            local_60 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
            plVar2 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            local_78 = local_58;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x18))(plVar2);
              local_78 = local_58;
            }
          }
          else {
            FUN_00e1561c(&local_90,plVar9);
            plVar2 = local_78;
            local_70 = local_90;
            puStack_68 = (undefined1 *)uStack_88;
            local_60 = local_80;
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x18))(local_78);
            }
            plVar7 = local_58;
            local_58 = plVar2;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x20))();
              plVar2 = local_58;
            }
          }
          local_58 = plVar2;
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          plVar2 = local_38;
          local_a0 = (undefined8 *)0x0;
          uStack_98 = 0;
          FUN_013dbad8(&local_a0,local_50);
          FUN_01420578(uVar11,uVar17,plVar2,&local_a0,&local_70,0);
          puVar10 = local_a0;
          if (local_a0 != (undefined8 *)0x0) {
            psVar12 = (short *)(local_a0 + 3);
            do {
              sVar13 = *psVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar12,0x10);
              if (bVar4) {
                *psVar12 = sVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar13 == 1) {
              piVar1 = (int *)((long)local_a0 + 0x1c);
              do {
                iVar8 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar15 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar15;
                local_90 = (undefined1 *)*puVar10;
                FUN_00c44438(lVar15 + 0x8040,&local_90);
              }
            }
            else if (sVar13 == 0) goto LAB_015fce04;
          }
          plVar2 = local_38;
          local_b0 = (undefined8 *)0x0;
          uStack_a8 = 0;
          FUN_013dbad8(&local_b0,local_50);
          FUN_01420578(uVar6,plVar2,&local_b0,&local_70,1);
          puVar10 = local_b0;
          if (local_b0 != (undefined8 *)0x0) {
            psVar12 = (short *)(local_b0 + 3);
            do {
              sVar13 = *psVar12;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar12,0x10);
              if (bVar4) {
                *psVar12 = sVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar13 == 1) {
              piVar1 = (int *)((long)local_b0 + 0x1c);
              do {
                iVar8 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar15 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar15;
                local_90 = (undefined1 *)*puVar10;
                FUN_00c44438(lVar15 + 0x8040,&local_90);
              }
            }
            else if (sVar13 == 0) goto LAB_015fce04;
          }
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
          if (plVar9 != (long *)0x0) {
            plVar2 = plVar9 + 5;
            do {
              lVar15 = *plVar2;
              iVar8 = (int)lVar15 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
            else if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
      }
      if (local_50[0] != (undefined8 *)0x0) {
        psVar12 = (short *)(local_50[0] + 3);
        do {
          sVar13 = *psVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar12,0x10);
          if (bVar4) {
            *psVar12 = sVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar13 == 1) {
          piVar1 = (int *)((long)local_50[0] + 0x1c);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_70 = (undefined1 *)*local_50[0];
            FUN_00c44438(lVar15 + 0x8040,&local_70);
          }
        }
        else if (sVar13 == 0) {
LAB_015fce04:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    goto LAB_015fcbb4;
  }
  FUN_01ea5ce4(local_38,uVar11);
LAB_015fcbb4:
  if (local_38 == (long *)0x0) {
    return;
  }
  lVar15 = local_38[6];
  psVar12 = (short *)(lVar15 + 0x1a);
  do {
    sVar13 = *psVar12;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar12,0x10);
    if (bVar4) {
      *psVar12 = sVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_015fcbd4:
  if (sVar13 == 1) {
    *(undefined8 *)(lVar15 + 0x10) = 0;
    (**(code **)(*local_38 + 0x50))();
  }
  else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


