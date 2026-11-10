/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e43a10; name: FUN_00e43a10
 */


void FUN_00e43a10(long *param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  code *pcVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  long *local_90;
  undefined8 uStack_88;
  long *local_80 [2];
  long *local_70;
  long *local_68;
  long *local_48;
  
  if (*(char *)((long)param_1 + 0x11e) == '\0') {
    uVar10 = FUN_00e4552c(*(undefined8 *)param_1[0x56]);
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (*(char *)((long)param_1 + 0x2f9) == '\0') {
      *(undefined1 *)((long)param_1 + 0x2f9) = 1;
      if ((char)param_1[0x3d] == '\0') {
        FUN_00e44d90(param_1);
      }
      else {
        lVar21 = param_1[0x13];
        local_80[0] = param_1;
        if (*(long *)(lVar21 + 0x10) == 0) goto LAB_00e444e8;
        psVar1 = (short *)(lVar21 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar4 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
          *(undefined8 *)(lVar21 + 8) = uVar14;
          *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
        }
        else if (sVar4 == -1) {
          pcVar13 = "count != 0";
          pcVar15 = "AddReference";
          pcVar16 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
          ;
          pcVar17 = "Reference counter overflows.";
          goto LAB_00e445ac;
        }
        local_70 = param_1;
        FUN_00e5045c(&local_68,local_80);
        FUN_00e503c8(&local_48,&local_70);
        if (local_48 != (long *)0x0) {
          lVar21 = local_48[6];
          psVar1 = (short *)(lVar21 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar21 + 0x10) = 0;
            (**(code **)(*local_48 + 0x50))();
          }
          else if (sVar4 == 0) goto LAB_00e44364;
        }
        if (local_68 != (long *)0x0) {
          lVar21 = local_68[0x13];
          psVar1 = (short *)(lVar21 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar21 + 0x10) = 0;
            (**(code **)(*local_68 + 0x50))();
          }
          else if (sVar4 == 0) goto LAB_00e44364;
        }
        if (local_80[0] != (long *)0x0) {
          lVar21 = local_80[0][0x13];
          psVar1 = (short *)(lVar21 + 0x1a);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            *(undefined8 *)(lVar21 + 0x10) = 0;
            (**(code **)(*local_80[0] + 0x50))();
          }
          else if (sVar4 == 0) goto LAB_00e44364;
        }
      }
    }
    if (param_1[0x5a] == 0) {
      return;
    }
    plVar20 = (long *)param_1[0x56];
    if (*(char *)(*plVar20 + 0x10c) == '\0') {
      return;
    }
    param_1[0x56] = 0;
    if (plVar20 != (long *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar21 = FUN_00c4e600();
      iVar5 = *(int *)(lVar21 + 0x12c8);
      iVar9 = iVar5 + 1;
      *(int *)(lVar21 + 0x12c8) = iVar9;
      if (*(int *)(lVar21 + 0x12cc) <= iVar5) {
        *(int *)(lVar21 + 0x12cc) = iVar9;
      }
      FUN_00e45164(plVar20);
      plVar11 = (long *)param_1[0x57];
      lVar21 = param_1[0x58];
      lVar12 = param_1[0x59];
      uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar10 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar20,lVar21,lVar12);
      }
      else {
        FUN_00c48fe8(plVar11,plVar20,lVar21,lVar12);
      }
      lVar21 = FUN_00c4e600();
      iVar9 = *(int *)(lVar21 + 0x12c8) + -1;
      *(int *)(lVar21 + 0x12c8) = iVar9;
      if (iVar9 == 0) {
        plVar20 = (long *)FUN_00c4e600();
        if (plVar20[600] != 0) {
          local_80[0] = plVar20 + plVar20[600] * 3;
          local_70 = plVar20;
          FUN_00c4ea30(&local_70,local_80);
          plVar22 = (long *)*plVar20;
          plVar11 = plVar20;
          if (plVar20[600] != 0) {
            plVar11 = plVar20 + plVar20[600] * 3;
          }
          if (plVar11 == plVar20) {
            uVar24 = 0;
            uVar10 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            if ((long *)*plVar20 != plVar22) {
              (**(code **)(*plVar22 + 0x100))(plVar22,plVar20,plVar20);
              plVar22 = (long *)*plVar20;
            }
            plVar23 = plVar20 + 3;
            if (plVar11 == plVar23) {
              uVar24 = 0;
              uVar10 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar23 + 0xd0))();
              bVar8 = (long *)*plVar23 != plVar22;
              if (bVar8) {
                (**(code **)(*plVar22 + 0x100))(plVar22,plVar20,plVar20 + 3);
                plVar22 = (long *)plVar20[3];
              }
              uVar24 = (ulong)bVar8;
              plVar23 = plVar20 + 6;
              if (plVar11 == plVar23) {
                uVar10 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar23 + 0xd0))();
                if ((long *)*plVar23 != plVar22) {
                  (**(code **)(*plVar22 + 0x100))(plVar22,plVar20 + uVar24 * 3,plVar20 + 6);
                  plVar22 = (long *)plVar20[6];
                  uVar24 = 2;
                }
                plVar23 = plVar20 + 9;
                if (plVar11 == plVar23) {
                  uVar10 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar23 + 0xd0))();
                  if ((long *)*plVar23 != plVar22) {
                    (**(code **)(*plVar22 + 0x100))(plVar22,plVar20 + uVar24 * 3,plVar20 + 9);
                    plVar22 = (long *)plVar20[9];
                    uVar24 = 3;
                  }
                  plVar23 = plVar20 + 0xc;
                  if (plVar11 == plVar23) {
                    uVar10 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar23 + 0xd0))();
                    if ((long *)*plVar23 != plVar22) {
                      (**(code **)(*plVar22 + 0x100))(plVar22,plVar20 + uVar24 * 3,plVar20 + 0xc);
                      plVar22 = (long *)plVar20[0xc];
                      uVar24 = 4;
                    }
                    plVar23 = plVar20 + 0xf;
                    if (plVar11 == plVar23) {
                      uVar10 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar23 + 0xd0))();
                      if ((long *)*plVar23 != plVar22) {
                        (**(code **)(*plVar22 + 0x100))(plVar22,plVar20 + uVar24 * 3,plVar20 + 0xf);
                        plVar22 = (long *)plVar20[0xf];
                        uVar24 = 5;
                      }
                      uVar10 = 6;
                      for (plVar23 = plVar20 + 0x12; plVar11 != plVar23; plVar23 = plVar23 + 3) {
                        (**(code **)(*(long *)*plVar23 + 0xd0))();
                        if ((long *)*plVar23 != plVar22) {
                          (**(code **)(*plVar22 + 0x100))(plVar22,plVar20 + uVar24 * 3,plVar23);
                          plVar22 = (long *)*plVar23;
                          uVar24 = uVar10;
                        }
                        uVar10 = uVar10 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar22 + 0x100))(plVar22,plVar20 + uVar24 * 3,plVar20 + uVar10 * 3);
          plVar20[600] = 0;
        }
        *(undefined4 *)(lVar21 + 0x12cc) = 0;
      }
    }
    plVar20 = *(long **)(*(long *)param_1[0x5a] + 0x58);
    if (plVar20 == (long *)0x0) {
      FUN_00e44a40(local_80,0);
    }
    else {
      lVar21 = plVar20[6];
      if (*(long *)(lVar21 + 0x10) == 0) {
LAB_00e444e8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar21 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
        *(undefined8 *)(lVar21 + 8) = uVar14;
        *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
        pcVar13 = "count != 0";
        pcVar15 = "AddReference";
        pcVar16 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
        ;
        pcVar17 = "Reference counter overflows.";
        goto LAB_00e445ac;
      }
      FUN_00e44a40(local_80,plVar20);
      lVar21 = plVar20[6];
      psVar1 = (short *)(lVar21 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar21 + 0x10) = 0;
        (**(code **)(*plVar20 + 0x50))(plVar20);
      }
      else if (sVar4 == 0) {
LAB_00e44364:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    lVar21 = param_1[0x5e];
    if (lVar21 == 0) {
      plVar20 = (long *)param_1[1];
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar21 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar21 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = plVar20;
      *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
      plVar11 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0x40,8);
      if (plVar11 == (long *)0x0) {
        (**(code **)(*plVar20 + 0xe8))(plVar20);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Create",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                   ,0x40);
      }
      local_70 = (long *)0x0;
      local_68 = (long *)0x0;
      FUN_00d9ae4c(&local_70,local_80);
      puVar7 = PTR_DAT_047d66f8;
      plVar11[2] = 0;
      *(undefined4 *)(plVar11 + 3) = 0;
      *plVar11 = (long)(puVar7 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar12 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        if (*(long *)(lVar12 + 0x80) != 0) {
          lVar18 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8);
        }
      }
      plVar11[1] = lVar18;
      plVar23 = plVar11 + 5;
      *(int *)plVar23 = 0;
      *plVar11 = (long)&PTR_LAB_0460aae8;
      plVar11[4] = (long)&PTR_LAB_0460ab20;
      plVar11[6] = 0;
      plVar11[7] = 0;
      FUN_00d9ae4c(plVar11 + 6,&local_70);
      plVar22 = local_70;
      if (local_70 != (long *)0x0) {
        plVar2 = local_70 + 3;
        do {
          sVar4 = (short)*plVar2;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *(short *)plVar2 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_70 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_48 = (long *)*plVar22;
            FUN_00c44438(lVar12 + 0x8040,&local_48);
          }
        }
        else if (sVar4 == 0) goto LAB_00e43d3c;
      }
      *(undefined4 *)(plVar11 + 3) = 0x80040;
      plVar11[1] = (long)plVar20;
      plVar11[2] = (long)plVar11;
      *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
      do {
        lVar21 = *plVar23;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar8) {
          *(int *)plVar23 = (int)lVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((int)lVar21 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar20 = (long *)param_1[0x5e];
      param_1[0x5e] = 0;
      if (plVar20 != (long *)0x0) {
        plVar22 = plVar20 + 5;
        do {
          lVar21 = *plVar22;
          iVar9 = (int)lVar21 + -1;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar8) {
            *(int *)plVar22 = iVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar20 + 0x10))();
        }
        else if ((int)lVar21 == 0) {
          pcVar13 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar15 = "DecrementReferenceInternal";
          pcVar16 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          pcVar17 = "Reference counter underflows.";
LAB_00e445ac:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl(pcVar13,pcVar15,pcVar16,0x58,pcVar17);
        }
      }
      param_1[0x5e] = (long)plVar11;
    }
    else {
      local_90 = (long *)0x0;
      uStack_88 = 0;
      FUN_00d9ae4c(&local_90,local_80);
      FUN_00d9ae4c(lVar21 + 0x30,&local_90);
      plVar20 = local_90;
      if (local_90 != (long *)0x0) {
        plVar11 = local_90 + 3;
        do {
          sVar4 = (short)*plVar11;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar8) {
            *(short *)plVar11 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_90 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar21 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar21;
            local_70 = (long *)*plVar20;
            FUN_00c44438(lVar21 + 0x8040,&local_70);
          }
        }
        else if (sVar4 == 0) goto LAB_00e43d3c;
      }
    }
    *(undefined1 *)((long)param_1 + 0x11e) = 1;
    if ((code *)param_1[0x44] != (code *)0x0) {
      local_70 = param_1;
      (*(code *)param_1[0x44])(param_1 + 0x48,&local_70);
      pcVar19 = (code *)param_1[0x45];
      if (pcVar19 != (code *)0x0) {
        param_1[0x46] = 0;
        param_1[0x47] = 0;
        param_1[0x44] = 0;
        param_1[0x45] = 0;
        (*pcVar19)(param_1 + 0x48);
      }
    }
    plVar20 = local_80[0];
    if (local_80[0] != (long *)0x0) {
      plVar11 = local_80[0] + 3;
      do {
        sVar4 = (short)*plVar11;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar8) {
          *(short *)plVar11 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_80[0] + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar21 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar21;
          local_70 = (long *)*plVar20;
          FUN_00c44438(lVar21 + 0x8040,&local_70);
        }
      }
      else if (sVar4 == 0) {
LAB_00e43d3c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  else if ((char)param_1[0x54] != '\0') {
    FUN_00e44680(param_1);
    return;
  }
  return;
}


