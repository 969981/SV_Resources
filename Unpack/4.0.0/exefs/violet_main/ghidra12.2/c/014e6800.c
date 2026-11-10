/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e6800; name: FUN_014e6800
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_014e6800(uint param_1,uint param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  short *psVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  short sVar13;
  long *plVar14;
  long lVar15;
  long *local_b0;
  undefined7 uStack_a8;
  undefined4 local_a1;
  undefined5 uStack_9d;
  long *local_98;
  long *local_90;
  long *local_80;
  undefined8 uStack_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  long *local_60;
  long *plStack_58;
  
  local_60 = param_3;
  plStack_58 = param_3;
  if (param_3 == (long *)0x0) {
    uVar10 = FUN_013f728c(&local_60);
  }
  else {
    plVar14 = param_3 + 5;
    do {
      lVar11 = *plVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = (int)lVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar11 == -1) goto LAB_014e6d88;
    uVar10 = FUN_013f728c(&local_60);
    if (param_3 != (long *)0x0) {
      plVar14 = param_3 + 5;
      do {
        lVar11 = *plVar14;
        iVar9 = (int)lVar11 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *(int *)plVar14 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*param_3 + 0x10))(param_3);
      }
      else if ((int)lVar11 == 0) goto LAB_014e6a64;
    }
  }
  if ((param_2 < 7) && ((1 << (ulong)(param_2 & 0x1f) & 0x68U) != 0)) {
    if (((*PTR_DAT_047d8550 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8550);
    }
    lVar11 = *(long *)PTR_DAT_047d8558;
    *(long *)PTR_DAT_047d8560 = lVar11;
    plVar14 = *(long **)(lVar11 + 0x140);
    if (plVar14 != (long *)0x0) {
      plVar4 = plVar14 + 5;
      do {
        lVar11 = *plVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar7) {
          *(int *)plVar4 = (int)lVar11 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((int)lVar11 == -1) {
LAB_014e6d88:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    local_80 = (long *)0x0;
    uStack_78 = 0;
    FUN_01084328(&local_80,plVar14 + 0x26);
    if ((local_80 != (long *)0x0) && (*(short *)((long)local_80 + 0x1a) != 0)) {
      psVar3 = (short *)((long)local_80 + 0x1a);
      sVar13 = *(short *)((long)local_80 + 0x1a);
LAB_014e6b60:
      sVar5 = *psVar3;
      if (sVar5 == sVar13) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_014e6b84;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014e6b84:
        bVar7 = false;
      }
      if (!bVar7) goto code_r0x014e6b8c;
      lVar11 = local_80[2];
      if (lVar11 != 0) {
        local_b0 = DAT_03d3015f;
        uStack_a8 = (undefined7)DAT_03d30167;
        local_a1 = ram0x03d3016e;
        if (*(long *)(lVar11 + 0x110) == 0) {
          local_70 = (uint)local_70._1_3_ << 8;
        }
        else {
          plVar4 = (long *)(lVar11 + 0x120);
          lVar15 = *plVar4;
          lVar12 = nn::os::GetCurrentThread();
          if (lVar12 == lVar15) {
            FUN_01deba0c(&local_70,*(undefined8 *)(lVar11 + 0x110),&local_b0,&plStack_58);
          }
          else {
            lVar12 = nn::os::GetCurrentThread();
            do {
              if (*plVar4 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x128));
                  while (*plVar4 == 0) {
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                    if (bVar7) {
                      *plVar4 = lVar12;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_014e6bf4;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar7) {
                *plVar4 = lVar12;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_014e6bf4:
            if (*(long *)(lVar11 + 0x110) == 0) {
              local_70 = local_70 & 0xffffff00;
            }
            else {
              FUN_01deba0c(&local_70,*(long *)(lVar11 + 0x110),&local_b0,&plStack_58);
            }
            *(undefined8 *)(lVar11 + 0x120) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x128));
          }
        }
        lVar12 = *(long *)(lVar11 + 0x70);
        psVar3 = (short *)(lVar12 + 0x1a);
        do {
          sVar13 = *psVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
        }
        else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        goto LAB_014e68c0;
      }
    }
LAB_014e68bc:
    local_70 = (uint)local_70._1_3_ << 8;
LAB_014e68c0:
    plVar4 = local_80;
    if (local_80 != (long *)0x0) {
      plVar1 = local_80 + 3;
      do {
        sVar13 = (short)*plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(short *)plVar1 = sVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar13 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_b0 = (long *)*plVar4;
          FUN_00c44438(lVar11 + 0x8040,&local_b0);
        }
      }
      else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar4 = plVar14 + 5;
      do {
        lVar11 = *plVar4;
        iVar9 = (int)lVar11 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar7) {
          *(int *)plVar4 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
      else if ((int)lVar11 == 0) {
LAB_014e6a64:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    lVar11 = DAT_04836760;
    plVar14 = (long *)(&DAT_04836768)[param_1];
    local_b0 = (long *)PTR_DAT_047d8b70;
    if (plVar14 != (long *)0x0) {
      local_b0 = plVar14 + 6;
    }
    local_b0 = (long *)*local_b0;
    plVar4 = (long *)PTR_PTR_047d4508;
    if (plVar14 != (long *)0x0) {
      plVar4 = plVar14 + 7;
    }
    if (plVar14 == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = plVar14[8];
    }
    uStack_a8 = (undefined7)*plVar4;
    local_a1._0_1_ = (undefined1)((ulong)*plVar4 >> 0x38);
    local_a1._1_3_ = (undefined3)lVar12;
    uStack_9d = (undefined5)((ulong)lVar12 >> 0x18);
    local_98 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    local_98 = plVar14;
    lVar11 = FUN_00c8c7b4(*(undefined8 *)(lVar11 + 0x170),&local_b0);
    *(ulong *)(lVar11 + 0x48) = CONCAT44(uStack_68,uStack_6c);
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    if ((char)local_70 != '\0') {
      local_70 = local_70 & 0xffffff00;
    }
  }
  FUN_0181e6b8(param_1,uVar10);
  lVar11 = DAT_04836760;
  local_70 = (uint)uVar10;
  uStack_6c = (undefined4)((ulong)uVar10 >> 0x20);
  FUN_00e52f24(&local_b0,&local_70);
  lVar12 = *(long *)(lVar11 + 0x2a0);
  if ((ulong)(long)(int)param_1 < (ulong)(*(long *)(lVar11 + 0x2a8) - lVar12 >> 3)) {
    uVar8 = FUN_010614bc(*(undefined8 *)(lVar12 + (long)(int)param_1 * 8),&local_b0,0);
  }
  else {
    uVar8 = 0;
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  return uVar8 & 1;
code_r0x014e6b8c:
  sVar13 = sVar5;
  if (sVar5 == 0) goto LAB_014e68bc;
  goto LAB_014e6b60;
}


