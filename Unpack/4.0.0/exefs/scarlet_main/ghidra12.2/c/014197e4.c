/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014197e4; name: FUN_014197e4
 */


void FUN_014197e4(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  long **pplVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  long lVar22;
  code *pcVar23;
  byte bVar24;
  short sVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  long **pplVar31;
  int iVar32;
  long *local_90;
  undefined8 local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long **local_70;
  long **local_68;
  
  switch(*(undefined4 *)(param_1 + 0x140)) {
  case 0:
    FUN_00c9e664(&local_70,param_1 + 0xe8);
    lVar28 = local_68[9][0x71];
    if ((lVar28 == 0) || (*(short *)(lVar28 + 0x1a) == 0)) {
      plVar26 = (long *)0x0;
    }
    else {
      psVar1 = (short *)(lVar28 + 0x1a);
      sVar25 = *(short *)(lVar28 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar25) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar25 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_0141a730;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0141a730:
          bVar6 = false;
        }
        if (bVar6) {
          plVar26 = (long *)0x0;
          if (*(long *)(lVar28 + 0x10) != 0) {
            plVar26 = (long *)(*(long *)(lVar28 + 0x10) + -0x28);
          }
          break;
        }
        plVar26 = (long *)0x0;
        sVar25 = sVar4;
      } while (sVar4 != 0);
    }
    if (local_68 == (long **)0x0) {
LAB_01419d14:
      if (local_70 != (long **)0x0) {
        (*(code *)(*local_70)[0xc])();
      }
      if (plVar26 != (long *)0x0) {
        lVar28 = FUN_010e1344(plVar26 + 0x21,&local_70);
        if (lVar28 != 0) {
          FUN_0141b654(&local_70);
          FUN_0141b7b4(param_1 + 0x268,&local_70);
          FUN_0141b3fc(&local_70);
        }
        plVar15 = (long *)FUN_010f2bb8(plVar26 + 0x21,&local_70);
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x18))(&local_70);
          local_90 = (long *)0x0;
          local_88 = 0;
          if (local_70[2] == plVar15 + 5) {
            FUN_010f2e10(&local_90,&local_70);
          }
          pplVar14 = local_70;
          if (local_70 != (long **)0x0) {
            pplVar31 = local_70 + 3;
            do {
              sVar25 = *(short *)pplVar31;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pplVar31,0x10);
              if (bVar6) {
                *(short *)pplVar31 = sVar25 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar25 == 1) {
              piVar3 = (int *)((long)local_70 + 0x1c);
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
                lVar28 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar28;
                local_78 = *pplVar14;
                FUN_00c44438(lVar28 + 0x8040,&local_78);
              }
            }
            else if (sVar25 == 0) goto LAB_01419ee4;
          }
          puVar7 = PTR_DAT_047d3908;
          do {
            uVar17 = local_88;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(&local_88,0x10);
            if (bVar6) {
              local_88 = 0;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          puVar9 = PTR_DAT_047d3918;
          puVar8 = PTR_DAT_047d3910;
          uVar30 = *(undefined8 *)PTR_DAT_047d3910;
          *(undefined8 *)PTR_DAT_047d3918 = uVar30;
          FUN_00c44204(&local_78,uVar30,uVar17);
          plVar15 = local_90;
          local_90 = (long *)0x0;
          if (plVar15 != (long *)0x0) {
            plVar2 = plVar15 + 3;
            do {
              sVar25 = (short)*plVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(short *)plVar2 = sVar25 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar25 == 1) {
              piVar3 = (int *)((long)plVar15 + 0x1c);
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
                if (((*puVar7 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar28 = *(long *)puVar8;
                *(long *)puVar9 = lVar28;
                local_70 = (long **)*plVar15;
                FUN_00c44438(lVar28 + 0x8040,&local_70);
              }
            }
            else if (sVar25 == 0) goto LAB_01419ee4;
          }
          plVar15 = *(long **)(param_1 + 0x278);
          *(undefined8 *)(param_1 + 0x278) = 0;
          if (local_78 == (long *)0x0) {
            if (plVar15 != (long *)0x0) {
              plVar2 = plVar15 + 3;
              do {
                sVar25 = (short)*plVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *(short *)plVar2 = sVar25 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar25 == 1) {
                piVar3 = (int *)((long)plVar15 + 0x1c);
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
                  if (((*puVar7 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar28 = *(long *)puVar8;
                  *(long *)puVar9 = lVar28;
                  local_70 = (long **)*plVar15;
                  FUN_00c44438(lVar28 + 0x8040,&local_70);
                }
              }
              else if (sVar25 == 0) goto LAB_01419ee4;
            }
            uVar17 = 0;
          }
          else {
            if (plVar15 != (long *)0x0) {
              plVar2 = plVar15 + 3;
              do {
                sVar25 = (short)*plVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *(short *)plVar2 = sVar25 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar25 == 1) {
                piVar3 = (int *)((long)plVar15 + 0x1c);
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
                  if (((*puVar7 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar28 = *(long *)puVar8;
                  *(long *)puVar9 = lVar28;
                  local_70 = (long **)*plVar15;
                  FUN_00c44438(lVar28 + 0x8040,&local_70);
                }
              }
              else if (sVar25 == 0) goto LAB_01419ee4;
            }
            plVar15 = local_78;
            local_78 = (long *)0x0;
            *(long **)(param_1 + 0x278) = plVar15;
          }
          plVar15 = local_78;
          *(undefined8 *)(param_1 + 0x280) = uVar17;
          if (local_78 != (long *)0x0) {
            plVar2 = local_78 + 3;
            do {
              sVar25 = (short)*plVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(short *)plVar2 = sVar25 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar25 == 1) {
              piVar3 = (int *)((long)local_78 + 0x1c);
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
                if (((*puVar7 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar28 = *(long *)puVar8;
                *(long *)puVar9 = lVar28;
                local_70 = (long **)*plVar15;
                FUN_00c44438(lVar28 + 0x8040,&local_70);
              }
            }
            else if (sVar25 == 0) goto LAB_01419ee4;
          }
          plVar15 = local_90;
          if (local_90 != (long *)0x0) {
            plVar2 = local_90 + 3;
            do {
              sVar25 = (short)*plVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *(short *)plVar2 = sVar25 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar25 == 1) {
              piVar3 = (int *)((long)local_90 + 0x1c);
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
                if (((*puVar7 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar28 = *(long *)puVar8;
                *(long *)puVar9 = lVar28;
                local_70 = (long **)*plVar15;
                FUN_00c44438(lVar28 + 0x8040,&local_70);
              }
            }
            else if (sVar25 == 0) {
LAB_01419ee4:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
        }
        (**(code **)(*plVar26 + 0x60))(plVar26);
      }
      *(undefined4 *)(param_1 + 0x140) = 1;
      goto switchD_01419828_caseD_1;
    }
    pplVar14 = local_68 + 5;
    do {
      iVar12 = *(int *)pplVar14;
      iVar32 = iVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pplVar14,0x10);
      if (bVar6) {
        *(int *)pplVar14 = iVar32;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar32 == 0) {
      (*(code *)(*local_68)[2])();
      goto LAB_01419d14;
    }
    if (iVar12 != 0) goto LAB_01419d14;
LAB_0141a89c:
    pcVar18 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar19 = "DecrementReferenceInternal";
    pcVar20 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
    ;
    pcVar21 = "Reference counter underflows.";
    goto LAB_0141a8bc;
  case 1:
switchD_01419828_caseD_1:
    if (*(long *)(param_1 + 0x170) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x170) + 0x11a) == '\0') {
        return;
      }
      if (*(long *)(param_1 + 0x1f0) == 0) {
        return;
      }
      if ((*(byte *)(*(long *)(param_1 + 0x1f0) + 0x1e8) & 1) == 0) {
        return;
      }
      plVar26 = *(long **)(param_1 + 8);
      if (((*PTR_DAT_047dd000 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047dd000), iVar12 != 0)) {
        FUN_00100190(&LAB_02b2d484,PTR_DAT_047dd008,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dd000);
      }
      uVar17 = *(undefined8 *)PTR_DAT_047dd008;
      *(undefined8 *)PTR_DAT_047dd010 = uVar17;
      FUN_00c9e664(&local_70,param_1 + 0xe8);
      if (local_68 == (long **)0x0) {
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = local_68[9];
      }
      uVar30 = *(undefined8 *)(param_1 + 0x148);
      if ((*(long *)(param_1 + 0x1f0) == 0) ||
         ((*(byte *)(*(long *)(param_1 + 0x1f0) + 0x1e8) & 1) == 0)) {
        lVar28 = 0;
      }
      else {
        puVar13 = (uint *)(**(code **)(**(long **)(param_1 + 0x1f0) + 0x70))();
        lVar28 = (long)puVar13 + (ulong)*puVar13;
      }
      FUN_0141ada4(uVar17,plVar15,uVar30,lVar28);
      if (local_68 != (long **)0x0) {
        pplVar14 = local_68 + 5;
        do {
          iVar12 = *(int *)pplVar14;
          iVar32 = iVar12 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pplVar14,0x10);
          if (bVar6) {
            *(int *)pplVar14 = iVar32;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar32 == 0) {
          (*(code *)(*local_68)[2])();
        }
        else if (iVar12 == 0) goto LAB_0141a89c;
      }
      if (local_70 != (long **)0x0) {
        (*(code *)(*local_70)[0xc])();
      }
      uVar17 = *(undefined8 *)(param_1 + 0x148);
      if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar28 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar28 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = plVar26;
      *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
      pplVar14 = (long **)(**(code **)(*plVar26 + 0x10))(plVar26,0x38,8);
      if (pplVar14 == (long **)0x0) {
        (**(code **)(*plVar26 + 0xe8))(plVar26);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                   ,0x40);
      }
      pplVar31 = *(long ***)(param_1 + 0x170);
      local_70 = pplVar31;
      if (pplVar31 == (long **)0x0) {
        FUN_0141aca0(pplVar14,&local_70);
      }
      else {
        (*(code *)(*pplVar31)[0xb])(pplVar31);
        FUN_0141aca0(pplVar14,&local_70);
        (*(code *)(*pplVar31)[0xc])(pplVar31);
      }
      *(undefined4 *)(pplVar14 + 3) = 0x80038;
      pplVar14[1] = plVar26;
      pplVar14[2] = (long *)pplVar14;
      *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
      pplVar31 = pplVar14 + 5;
      do {
        iVar12 = *(int *)pplVar31;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pplVar31,0x10);
        if (bVar6) {
          *(int *)pplVar31 = iVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      local_70 = pplVar14;
      FUN_0141b10c(uVar17,&local_70);
      if (local_70 != (long **)0x0) {
        pplVar14 = local_70 + 5;
        do {
          iVar12 = *(int *)pplVar14;
          iVar32 = iVar12 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pplVar14,0x10);
          if (bVar6) {
            *(int *)pplVar14 = iVar32;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar32 == 0) {
          (*(code *)(*local_70)[2])();
        }
        else if (iVar12 == 0) goto LAB_0141a89c;
      }
      *(undefined4 *)(param_1 + 0x140) = 2;
      goto switchD_01419828_caseD_2;
    }
    FUN_00c9e664(&local_70,param_1 + 0xe8);
    plVar26 = (long *)0x0;
    if (local_68 != (long **)0x0) {
      plVar26 = local_68[9];
    }
    plVar26 = (long *)FUN_0104b474(plVar26 + 0x21,&local_90);
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 0x58))(plVar26);
    }
    plVar15 = *(long **)(param_1 + 0x170);
    *(long **)(param_1 + 0x170) = plVar26;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x60))();
    }
    if (local_68 != (long **)0x0) {
      pplVar14 = local_68 + 5;
      do {
        iVar12 = *(int *)pplVar14;
        iVar32 = iVar12 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pplVar14,0x10);
        if (bVar6) {
          *(int *)pplVar14 = iVar32;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar32 == 0) {
        (*(code *)(*local_68)[2])();
      }
      else if (iVar12 == 0) goto LAB_0141a89c;
    }
    if (local_70 == (long **)0x0) {
      return;
    }
    pcVar23 = (code *)(*local_70)[0xc];
LAB_01419ccc:
    (*pcVar23)();
    goto switchD_01419828_default;
  case 2:
    goto switchD_01419828_caseD_2;
  case 3:
    goto switchD_01419828_caseD_3;
  case 4:
    goto switchD_01419828_caseD_4;
  case 5:
    goto switchD_01419828_caseD_5;
  case 6:
    goto switchD_01419828_caseD_6;
  default:
    goto switchD_01419828_default;
  }
LAB_0141a344:
  sVar4 = *psVar1;
  if (sVar4 == sVar25) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar25 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_0141a368;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0141a368:
    bVar6 = false;
  }
  if (!bVar6) goto LAB_0141a338;
  lVar28 = *(long *)(lVar28 + 0x10);
  if (lVar28 != 0) {
    lVar27 = *(long *)(lVar28 + 0x70);
    psVar1 = (short *)(lVar27 + 0x1a);
    do {
      sVar25 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar25 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar25 == 1) {
      *(undefined8 *)(lVar27 + 0x10) = 0;
      (**(code **)(*(long *)(lVar28 + -0x28) + 0x50))();
    }
    else if (sVar25 == 0) goto LAB_0141a494;
    bVar24 = 0;
    goto LAB_01419a60;
  }
  goto LAB_01419a5c;
LAB_0141a338:
  bVar24 = 1;
  sVar25 = sVar4;
  if (sVar4 == 0) goto LAB_01419a60;
  goto LAB_0141a344;
switchD_01419828_caseD_2:
  if (*(long *)(param_1 + 0x268) == 0) {
    *(undefined4 *)(param_1 + 0x140) = 3;
  }
  else {
    FUN_021420dc(&local_70);
    if (local_70 != (long **)0x0) {
      plVar26 = local_70[0x13];
      psVar1 = (short *)((long)plVar26 + 0x1a);
      iVar12 = *(int *)(local_70 + 0x28);
      do {
        sVar25 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 1) {
        if (sVar25 != 1) {
          if (sVar25 != 0) {
            return;
          }
          goto LAB_0141a494;
        }
        plVar26[2] = 0;
        pcVar23 = (code *)(*local_70)[10];
        goto LAB_01419ccc;
      }
      if (sVar25 == 1) {
        plVar26[2] = 0;
        (*(code *)(*local_70)[10])();
      }
      else if (sVar25 == 0) goto LAB_0141a494;
    }
    *(undefined4 *)(param_1 + 0x140) = 3;
    if (*(long *)(param_1 + 0x268) != 0) {
      FUN_021420dc(&local_70);
      pplVar14 = local_70;
      if (local_70 != (long **)0x0) {
        FUN_02142228(local_70,param_1);
        plVar26 = pplVar14[0x13];
        psVar1 = (short *)((long)plVar26 + 0x1a);
        do {
          sVar25 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar25 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar25 == 1) {
          plVar26[2] = 0;
          (*(code *)(*pplVar14)[10])(pplVar14);
        }
        else if (sVar25 == 0) goto LAB_0141a494;
      }
      goto switchD_01419828_caseD_3;
    }
  }
  local_70 = (long **)0x0;
switchD_01419828_caseD_3:
  if (((*(char *)(param_1 + 0x1d0) == '\0') && (lVar28 = *(long *)(param_1 + 0x278), lVar28 != 0))
     && (sVar25 = *(short *)(lVar28 + 0x1a), sVar25 != 0)) {
    puVar29 = *(undefined8 **)(lVar28 + 8);
    if ((*PTR_DAT_047dcfd8 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(PTR_DAT_047dcfd8);
      puVar7 = PTR_DAT_047d3988;
      if (iVar12 != 0) {
        if (((*PTR_DAT_047d3980 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar12 != 0)) {
          uVar17 = FUN_01adab84();
          *(undefined8 *)puVar7 = uVar17;
          __cxa_guard_release(PTR_DAT_047d3980);
        }
        *(undefined **)PTR_DAT_047dcfe0 = puVar7;
        __cxa_guard_release(PTR_DAT_047dcfd8);
      }
    }
    if (puVar29 == (undefined8 *)0x0) goto LAB_01419a5c;
    psVar1 = (short *)(lVar28 + 0x1a);
    bVar24 = 1;
    do {
      if (puVar29 == (undefined8 *)PTR_DAT_047dcfe0) goto LAB_0141a344;
      puVar29 = (undefined8 *)*puVar29;
    } while (puVar29 != (undefined8 *)0x0);
  }
  else {
LAB_01419a5c:
    bVar24 = 1;
  }
LAB_01419a60:
  if (((*(char *)(param_1 + 0x1d2) == '\0') && (*(char *)(param_1 + 0x1d1) == '\0')) &&
     ((bool)(*(char *)(param_1 + 0x1d0) == '\0' & (bVar24 ^ 1)))) {
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 4;
switchD_01419828_caseD_4:
  local_90 = (long *)((ulong)local_90 & 0xffffffff00000000);
  local_70 = &local_90;
  local_68 = &local_78;
  local_78 = (long *)((ulong)local_78 & 0xffffffff00000000);
  lVar28 = *(long *)(param_1 + 0x230);
  lVar27 = *(long *)(param_1 + 0x238);
  if (lVar28 != lVar27) {
    do {
      FUN_0141b50c(&local_70,lVar28);
      puVar10 = PTR_LAB_047d4e10;
      puVar9 = PTR_DAT_047d4e08;
      puVar8 = PTR_DAT_047d4e00;
      puVar7 = PTR_DAT_047d4df8;
      lVar28 = lVar28 + 0x40;
    } while (lVar27 != lVar28);
    if ((int)local_90 != (int)local_78) {
      return;
    }
    lVar27 = *(long *)(param_1 + 0x238);
    for (lVar28 = *(long *)(param_1 + 0x230); lVar28 != lVar27; lVar28 = lVar28 + 0x40) {
      if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
        FUN_00100190(puVar10,puVar8,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar7);
      }
      uVar17 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar17;
      FUN_00f7170c(&local_70,uVar17,lVar28,lVar28 + 0x20);
      if (local_70 != (long **)0x0) {
        lVar22 = FUN_010e1344(local_70 + 0x21,auStack_80);
        if (lVar22 != 0) {
          FUN_02142228(param_1,lVar22);
        }
        if (local_70 != (long **)0x0) {
          plVar26 = local_70[6];
          psVar1 = (short *)((long)plVar26 + 0x1a);
          do {
            sVar25 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar25 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar25 == 1) {
            plVar26[2] = 0;
            (*(code *)(*local_70)[10])();
          }
          else if (sVar25 == 0) goto LAB_0141a494;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x140) = 5;
switchD_01419828_caseD_5:
  puVar9 = PTR_LAB_047d3de8;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  lVar28 = *(long *)(param_1 + 0x178);
  lVar27 = *(long *)(param_1 + 0x180);
  if (lVar28 != lVar27) {
    iVar12 = 0;
    iVar32 = 0;
    do {
      local_70 = (long **)0x0;
      local_68 = (long **)0x0;
      FUN_00c43ef0(&local_70,lVar28);
      if (local_70 != (long **)0x0) {
        FUN_021420dc(&local_90);
        if (local_90 != (long *)0x0) {
          iVar32 = iVar32 + (uint)*(byte *)((long)local_90 + 0x11a);
          lVar22 = local_90[0x13];
          iVar12 = iVar12 + 1;
          psVar1 = (short *)(lVar22 + 0x1a);
          do {
            sVar25 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar25 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar25 == 1) {
            *(undefined8 *)(lVar22 + 0x10) = 0;
            (**(code **)(*local_90 + 0x50))();
          }
          else if (sVar25 == 0) goto LAB_0141a494;
        }
        pplVar14 = local_70;
        if (local_70 != (long **)0x0) {
          pplVar31 = local_70 + 3;
          do {
            sVar25 = *(short *)pplVar31;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pplVar31,0x10);
            if (bVar6) {
              *(short *)pplVar31 = sVar25 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar25 == 1) {
            piVar3 = (int *)((long)local_70 + 0x1c);
            do {
              iVar11 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(puVar9,puVar7,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar22 = *(long *)puVar7;
              *(long *)puVar8 = lVar22;
              local_90 = *pplVar14;
              FUN_00c44438(lVar22 + 0x8040,&local_90);
            }
          }
          else if (sVar25 == 0) goto LAB_01419ee4;
        }
      }
      lVar28 = lVar28 + 0x10;
    } while (lVar28 != lVar27);
    if (iVar32 != iVar12) {
      return;
    }
  }
  FUN_0141aa84(*(undefined8 *)(param_1 + 0x148));
  plVar26 = *(long **)(*(long *)(param_1 + 0x148) + 0x48);
  if (plVar26 == (long *)0x0) goto LAB_01419b08;
  lVar28 = plVar26[6];
  if (*(long *)(lVar28 + 0x10) == 0) goto LAB_0141a908;
  psVar1 = (short *)(lVar28 + 0x1a);
  do {
    sVar25 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar25 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar25 != 0) {
    if (sVar25 != -1) goto LAB_01419b08;
LAB_0141a928:
    pcVar18 = "count != 0";
    pcVar19 = "AddReference";
    pcVar20 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar21 = "Reference counter overflows.";
LAB_0141a8bc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar18,pcVar19,pcVar20,0x58,pcVar21);
  }
  uVar17 = (**(code **)**(undefined8 **)(lVar28 + 0x10))();
  *(undefined8 *)(lVar28 + 8) = uVar17;
  *(undefined4 *)(lVar28 + 0x1c) = 0xfffffffe;
LAB_01419b08:
  local_70 = &local_90;
  local_90 = (long *)0x0;
  plVar15 = (long *)FUN_010f1048(plVar26 + 5);
  if ((plVar15 != (long *)0x0) && (local_90 == (long *)0x0)) {
    local_90 = plVar15;
  }
  plVar15 = (long *)plVar26[0xf];
  if (plVar15 != (long *)0x0) {
    lVar28 = plVar15[6];
    if (*(long *)(lVar28 + 0x10) == 0) goto LAB_0141a908;
    psVar1 = (short *)(lVar28 + 0x1a);
    do {
      sVar25 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar25 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar25 == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar28 + 0x10))();
      *(undefined8 *)(lVar28 + 8) = uVar17;
      *(undefined4 *)(lVar28 + 0x1c) = 0xfffffffe;
    }
    else if (sVar25 == -1) goto LAB_0141a928;
    lVar28 = plVar15[6];
    psVar1 = (short *)(lVar28 + 0x1a);
    do {
      sVar25 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar25 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar25 == 1) {
      *(undefined8 *)(lVar28 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar25 == 0) goto LAB_0141a494;
    plVar15 = (long *)plVar26[0xf];
    if (plVar15 == (long *)0x0) {
      FUN_010f0cfc(0,&local_70);
    }
    else {
      lVar28 = plVar15[6];
      if (*(long *)(lVar28 + 0x10) == 0) {
LAB_0141a908:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar28 + 0x1a);
      do {
        sVar25 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar25 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar25 == 0) {
        uVar17 = (**(code **)**(undefined8 **)(lVar28 + 0x10))();
        *(undefined8 *)(lVar28 + 8) = uVar17;
        *(undefined4 *)(lVar28 + 0x1c) = 0xfffffffe;
      }
      else if (sVar25 == -1) goto LAB_0141a928;
      FUN_010f0cfc(plVar15,&local_70);
      lVar28 = plVar15[6];
      psVar1 = (short *)(lVar28 + 0x1a);
      do {
        sVar25 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar25 == 1) {
        *(undefined8 *)(lVar28 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))(plVar15);
      }
      else if (sVar25 == 0) goto LAB_0141a494;
    }
  }
  plVar15 = local_90;
  lVar28 = plVar26[6];
  psVar1 = (short *)(lVar28 + 0x1a);
  do {
    sVar25 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar25 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar25 == 1) {
    *(undefined8 *)(lVar28 + 0x10) = 0;
    (**(code **)(*plVar26 + 0x50))(plVar26);
  }
  else if (sVar25 == 0) {
LAB_0141a494:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x88))(plVar15);
  }
  *(undefined4 *)(param_1 + 0x140) = 6;
switchD_01419828_caseD_6:
  if ((*(undefined8 **)(param_1 + 0x228) == (undefined8 *)0x0) ||
     (uVar16 = (**(code **)**(undefined8 **)(param_1 + 0x228))(), (uVar16 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x138) = 1;
  }
switchD_01419828_default:
  return;
}


