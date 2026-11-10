/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e38cfc; name: FUN_00e38cfc
 */


void FUN_00e38cfc(long *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  code *pcVar3;
  short *psVar4;
  short sVar5;
  bool bVar6;
  char cVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  bool bVar22;
  long *local_130;
  long local_128;
  undefined5 local_120;
  uint uStack_11b;
  uint uStack_117;
  long *local_110;
  undefined8 uStack_108;
  code *local_100;
  code *local_f8;
  code *local_f0;
  code *pcStack_e8;
  long *local_e0;
  long lStack_d8;
  undefined5 uStack_d0;
  undefined3 local_cb;
  undefined5 uStack_c8;
  undefined3 uStack_c3;
  long *local_c0;
  undefined8 uStack_b8;
  long *local_80;
  long *local_78;
  long local_70 [2];
  
  lVar17 = *param_2;
  FUN_00c9e664(&local_80,lVar17 + 0xe8);
  if (local_80 == (long *)0x0) {
LAB_00e3915c:
    if (local_78 == (long *)0x0) {
LAB_00e39180:
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x60))();
      }
      return;
    }
    plVar18 = local_78 + 5;
    do {
      lVar17 = *plVar18;
      iVar9 = (int)lVar17 + -1;
      cVar7 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar22) {
        *(int *)plVar18 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_78 + 0x10))();
      goto LAB_00e39180;
    }
    if ((int)lVar17 != 0) goto LAB_00e39180;
  }
  else {
    plVar18 = param_1 + 1;
    if (*(char *)(*plVar18 + 0x98) != '\0') {
      if (*(char *)(*plVar18 + 0x98) == '\x01') {
        if (local_78 == (long *)0x0) {
          lVar21 = 0;
        }
        else {
          lVar21 = local_78[9];
        }
        plVar20 = (long *)(lVar21 + 0x110);
        lVar19 = *plVar20;
        lVar10 = nn::os::GetCurrentThread();
        if (lVar10 != lVar19) {
          lVar10 = nn::os::GetCurrentThread();
LAB_00e39594:
          if (*plVar20 == 0) goto code_r0x00e3959c;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x118));
          do {
            if (*plVar20 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x118));
                while (*plVar20 == 0) {
                  cVar7 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar22) {
                    *plVar20 = lVar10;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') goto LAB_00e395a4;
                }
              } while( true );
            }
            cVar7 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar22) {
              *plVar20 = lVar10;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_00e395a4:
          bVar22 = false;
          goto LAB_00e395b0;
        }
        bVar22 = true;
LAB_00e395b0:
        if (local_78 == (long *)0x0) {
          lVar10 = 0;
        }
        else {
          lVar10 = local_78[9];
        }
        uVar11 = FUN_00e398f8(lVar10);
        plVar20 = (long *)*plVar18;
        if (plVar20 != (long *)0x0) {
          lVar10 = plVar20[6];
          if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar4 = (short *)(lVar10 + 0x1a);
          do {
            sVar5 = *psVar4;
            cVar7 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar4,0x10);
            if (bVar6) {
              *psVar4 = sVar5 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar5 == 0) {
            uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
            *(undefined8 *)(lVar10 + 8) = uVar12;
            *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
          }
          else if (sVar5 == -1) {
            pcVar13 = "count != 0";
            pcVar14 = "AddReference";
            pcVar15 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
            ;
            pcVar16 = "Reference counter overflows.";
            goto LAB_00e39874;
          }
        }
        local_100 = (code *)&LAB_02b4b160;
        local_f8 = FUN_02b4b1d4;
        local_f0 = FUN_02b4b24c;
        pcStack_e8 = (code *)&LAB_02b4b30c;
        local_e0 = plVar20;
        FUN_00e3a91c(uVar11,lVar17,&local_100);
        pcVar8 = local_f8;
        if (local_f8 != (code *)0x0) {
          local_f0 = (code *)0x0;
          pcStack_e8 = (code *)0x0;
          local_100 = (code *)0x0;
          local_f8 = (code *)0x0;
          (*pcVar8)(&local_e0);
        }
        if (!bVar22) {
          *(undefined8 *)(lVar21 + 0x110) = 0;
          goto LAB_00e38fb8;
        }
      }
LAB_00e38fbc:
      if (*(char *)(param_1[1] + 0x40) == '\0') {
        plVar20 = (long *)*param_1;
        local_130 = plVar20;
        if (plVar20 != (long *)0x0) {
          plVar1 = plVar20 + 5;
          do {
            lVar21 = *plVar1;
            cVar7 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar22) {
              *(int *)plVar1 = (int)lVar21 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((int)lVar21 == -1) {
LAB_00e3987c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        local_128 = lVar17;
        FUN_00e39c4c(&local_120,plVar18);
        local_e0 = local_130;
        local_100 = (code *)0x0;
        local_f8 = (code *)0x0;
        local_110 = (long *)(*plVar18 + 0x40);
        local_f0 = (code *)0x0;
        pcStack_e8 = (code *)0x0;
        local_130 = (long *)0x0;
        lStack_d8 = local_128;
        uStack_d0 = 0;
        local_cb = 0;
        uStack_c8 = 0;
        uStack_c3 = 0;
        FUN_00c96b7c(&uStack_d0,&local_120);
        local_c0 = local_110;
        local_100 = (code *)&LAB_0219166c;
        local_f8 = FUN_02191854;
        local_f0 = FUN_021919d4;
        pcStack_e8 = FUN_02191a68;
        FUN_00e3ce80(plVar20[6],lVar17,&local_100);
        pcVar8 = local_f8;
        if (local_f8 != (code *)0x0) {
          local_f0 = (code *)0x0;
          pcStack_e8 = (code *)0x0;
          local_100 = (code *)0x0;
          local_f8 = (code *)0x0;
          (*pcVar8)(&local_e0);
        }
        plVar20 = (long *)CONCAT35((uint3)uStack_11b,local_120);
        if (plVar20 != (long *)0x0) {
          plVar1 = plVar20 + 3;
          do {
            sVar5 = (short)*plVar1;
            cVar7 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar22) {
              *(short *)plVar1 = sVar5 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar5 == 1) {
            piVar2 = (int *)((long)plVar20 + 0x1c);
            do {
              iVar9 = *piVar2;
              cVar7 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar22) {
                *piVar2 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar21 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar21;
              local_70[0] = *plVar20;
              FUN_00c44438(lVar21 + 0x8040,local_70);
            }
          }
          else if (sVar5 == 0) goto LAB_00e39288;
        }
        if (local_130 != (long *)0x0) {
          plVar20 = local_130 + 5;
          do {
            lVar21 = *plVar20;
            iVar9 = (int)lVar21 + -1;
            cVar7 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar22) {
              *(int *)plVar20 = iVar9;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*local_130 + 0x10))();
          }
          else if ((int)lVar21 == 0) goto LAB_00e39854;
        }
      }
      lVar21 = *param_1;
      FUN_00e39c4c(&local_130,plVar18);
      local_100 = (code *)0x0;
      local_f8 = (code *)0x0;
      local_f0 = (code *)0x0;
      pcStack_e8 = (code *)0x0;
      local_120 = (undefined5)(param_1[1] + 0x40);
      uStack_11b._0_3_ = (uint3)((ulong)(param_1[1] + 0x40) >> 0x28);
      local_e0 = (long *)0x0;
      lStack_d8 = 0;
      FUN_00c96b7c(&local_e0,&local_130);
      uStack_d0 = local_120;
      local_cb = (uint3)uStack_11b;
      local_100 = FUN_01916c3c;
      local_f8 = FUN_02191ab8;
      local_f0 = FUN_02191bc8;
      pcStack_e8 = FUN_02191c00;
      FUN_00e3ac14(*(undefined8 *)(lVar21 + 0x70),lVar17,&local_100);
      pcVar8 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = (code *)0x0;
        pcStack_e8 = (code *)0x0;
        local_100 = (code *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar8)(&local_e0);
      }
      plVar18 = local_130;
      if (local_130 != (long *)0x0) {
        plVar20 = local_130 + 3;
        do {
          sVar5 = (short)*plVar20;
          cVar7 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar22) {
            *(short *)plVar20 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          piVar2 = (int *)((long)local_130 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar7 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar22) {
              *piVar2 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar17 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar17;
            local_70[0] = *plVar18;
            FUN_00c44438(lVar17 + 0x8040,local_70);
          }
        }
        else if (sVar5 == 0) {
LAB_00e39288:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      goto LAB_00e3915c;
    }
    if (local_78 == (long *)0x0) {
      lVar21 = 0;
    }
    else {
      lVar21 = local_78[9];
    }
    plVar20 = (long *)(lVar21 + 0x110);
    lVar19 = *plVar20;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar19) {
      lVar10 = nn::os::GetCurrentThread();
LAB_00e38d70:
      if (*plVar20 == 0) goto code_r0x00e38d78;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x118));
      do {
        if (*plVar20 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x118));
            while (*plVar20 == 0) {
              cVar7 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar22) {
                *plVar20 = lVar10;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_00e38d80;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar22) {
          *plVar20 = lVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00e38d80:
      bVar22 = false;
      goto LAB_00e38d8c;
    }
    bVar22 = true;
LAB_00e38d8c:
    if (local_78 == (long *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = local_78[9];
    }
    uVar11 = FUN_00e398f8(lVar10);
    FUN_00e39c4c(&local_130,plVar18);
    uStack_117 = uStack_117 & 0xffffff;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_120 = (undefined5)(*plVar18 + 0x40);
    uStack_11b._0_3_ = (uint3)((ulong)(*plVar18 + 0x40) >> 0x28);
    uStack_11b = (uint)(uint3)uStack_11b;
    FUN_00c43ef0(&local_100,lVar17 + 0x98);
    local_110 = (long *)0x0;
    uStack_108 = 0;
    lVar10 = 0;
    if (lVar17 != 0) {
      lVar10 = lVar17 + 0x28;
    }
    if (*(long *)(local_100 + 0x10) == lVar10) {
      FUN_00c953a8(&local_110,&local_100);
    }
    pcVar8 = local_100;
    if (local_100 != (code *)0x0) {
      pcVar3 = local_100 + 0x18;
      do {
        sVar5 = *(short *)pcVar3;
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar6) {
          *(short *)pcVar3 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        pcVar3 = local_100 + 0x1c;
        do {
          iVar9 = *(int *)pcVar3;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar6) {
            *(int *)pcVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_70[0] = *(long *)pcVar8;
          FUN_00c44438(lVar10 + 0x8040,local_70);
        }
      }
      else if (sVar5 == 0) goto LAB_00e39288;
    }
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_f0 = (code *)0x0;
    pcStack_e8 = (code *)0x0;
    local_e0 = (long *)0x0;
    lStack_d8 = 0;
    FUN_00c96b7c(&local_e0,&local_130);
    uStack_c8 = (undefined5)(CONCAT44(uStack_117,uStack_11b) >> 0x18);
    uStack_d0 = local_120;
    local_cb = (uint3)uStack_11b;
    local_c0 = (long *)0x0;
    uStack_b8 = 0;
    FUN_00cacc64(&local_c0,&local_110);
    local_100 = (code *)&LAB_01a9a82c;
    local_f8 = FUN_02190fa8;
    local_f0 = FUN_00c6c944;
    pcStack_e8 = FUN_021911c0;
    FUN_00e3a91c(uVar11,lVar17,&local_100);
    pcVar8 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (code *)0x0;
      pcStack_e8 = (code *)0x0;
      local_100 = (code *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar8)(&local_e0);
    }
    plVar20 = local_110;
    if (local_110 != (long *)0x0) {
      plVar1 = local_110 + 3;
      do {
        sVar5 = (short)*plVar1;
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(short *)plVar1 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        piVar2 = (int *)((long)local_110 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_70[0] = *plVar20;
          FUN_00c44438(lVar10 + 0x8040,local_70);
        }
      }
      else if (sVar5 == 0) goto LAB_00e39288;
    }
    if (local_130 != (long *)0x0) {
      plVar20 = local_130 + 3;
      do {
        sVar5 = (short)*plVar20;
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *(short *)plVar20 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        piVar2 = (int *)((long)local_130 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_70[0] = *local_130;
          FUN_00c44438(lVar10 + 0x8040,local_70);
        }
      }
      else if (sVar5 == 0) goto LAB_00e39288;
    }
    plVar20 = (long *)*param_1;
    local_130 = plVar20;
    if (plVar20 != (long *)0x0) {
      plVar1 = plVar20 + 5;
      do {
        lVar10 = *plVar1;
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)lVar10 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((int)lVar10 == -1) goto LAB_00e3987c;
    }
    local_128 = lVar17;
    FUN_00e39c4c(&local_120,plVar18);
    local_e0 = local_130;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (long *)(*plVar18 + 0x40);
    local_f0 = (code *)0x0;
    pcStack_e8 = (code *)0x0;
    local_130 = (long *)0x0;
    lStack_d8 = local_128;
    uStack_d0 = 0;
    local_cb = 0;
    uStack_c8 = 0;
    uStack_c3 = 0;
    FUN_00c96b7c(&uStack_d0,&local_120);
    local_c0 = local_110;
    local_100 = FUN_02191210;
    local_f8 = FUN_02191408;
    local_f0 = FUN_02191588;
    pcStack_e8 = FUN_0219161c;
    FUN_00e3b568(plVar20[10],lVar17,&local_100);
    pcVar8 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (code *)0x0;
      pcStack_e8 = (code *)0x0;
      local_100 = (code *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar8)(&local_e0);
    }
    plVar20 = (long *)CONCAT35((uint3)uStack_11b,local_120);
    if (plVar20 != (long *)0x0) {
      plVar1 = plVar20 + 3;
      do {
        sVar5 = (short)*plVar1;
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(short *)plVar1 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        piVar2 = (int *)((long)plVar20 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_70[0] = *plVar20;
          FUN_00c44438(lVar10 + 0x8040,local_70);
        }
      }
      else if (sVar5 == 0) goto LAB_00e39288;
    }
    if (local_130 == (long *)0x0) {
LAB_00e38fa8:
      if (!bVar22) {
        *(undefined8 *)(lVar21 + 0x110) = 0;
LAB_00e38fb8:
        nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x118));
      }
      goto LAB_00e38fbc;
    }
    plVar20 = local_130 + 5;
    do {
      lVar10 = *plVar20;
      iVar9 = (int)lVar10 + -1;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *(int *)plVar20 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_130 + 0x10))();
      goto LAB_00e38fa8;
    }
    if ((int)lVar10 != 0) goto LAB_00e38fa8;
  }
LAB_00e39854:
  pcVar13 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar14 = "DecrementReferenceInternal";
  pcVar15 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
  ;
  pcVar16 = "Reference counter underflows.";
LAB_00e39874:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar13,pcVar14,pcVar15,0x58,pcVar16);
code_r0x00e3959c:
  cVar7 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar22) {
    *plVar20 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00e395a4;
  goto LAB_00e39594;
code_r0x00e38d78:
  cVar7 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar22) {
    *plVar20 = lVar10;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00e38d80;
  goto LAB_00e38d70;
}


