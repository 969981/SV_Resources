/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186af18; name: FUN_0186af18
 */


void FUN_0186af18(long param_1,undefined4 param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  short sVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  byte local_50;
  long *local_48;
  
  lVar12 = *(long *)(param_1 + 0x28);
  if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar12 + 0x1a);
    sVar13 = *(short *)(lVar12 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar13) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0186af94;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0186af94:
        bVar5 = false;
      }
      if (bVar5) {
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) {
          return;
        }
        local_60 = (undefined8 *)0x0;
        uStack_58 = 0;
        local_50 = 1;
        local_70 = (undefined8 *)0x0;
        uStack_68 = 0;
        FUN_013dbad8(&local_60);
        FUN_00ca1a48(&local_70,param_3);
        uVar6 = *(int *)(param_1 + 4) - 1;
        local_50 = (byte)(0x85 >> (ulong)(uVar6 & 0x1f)) & uVar6 < 8;
        plVar14 = *(long **)(lVar12 + -0x20);
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar14;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        plVar10 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x780,0x10);
        if (plVar10 == (long *)0x0) {
          (**(code **)(*plVar14 + 0xe8))(plVar14);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("ptr","Create",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                     ,0x40);
        }
        FUN_0143402c(plVar10,&local_70,param_2);
        *(undefined4 *)(plVar10 + 3) = 0x100780;
        plVar10[1] = (long)plVar14;
        plVar10[2] = (long)plVar10;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        lVar9 = plVar10[0x13];
        if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        plVar14 = (long *)(lVar12 + -0x28);
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar13 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar13 == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          *(undefined8 *)(lVar9 + 8) = uVar11;
          *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
        }
        else if (sVar13 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        plVar15 = plVar10 + 4;
        (**(code **)(*plVar15 + 0xe8))(plVar15,plVar14);
        (**(code **)(*plVar15 + 0x68))(plVar15);
        local_48 = plVar10;
        FUN_00df8c30(lVar12 + 0xe0,&local_48);
        if (local_48 != (long *)0x0) {
          lVar9 = local_48[0x13];
          psVar1 = (short *)(lVar9 + 0x1a);
          do {
            sVar13 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar13 == 1) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*local_48 + 0x50))();
          }
          else if (sVar13 == 0) goto LAB_0186b1d4;
        }
        (**(code **)(*(long *)(lVar12 + -0x28) + 0x100))(plVar14,plVar15);
        plVar10 = (long *)(lVar12 + 0x418);
        lVar16 = *plVar10;
        lVar9 = nn::os::GetCurrentThread();
        if (lVar9 == lVar16) {
          plVar10 = (long *)0x0;
          bVar5 = true;
        }
        else {
          lVar9 = nn::os::GetCurrentThread();
          do {
            if (*plVar10 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x420));
                while (*plVar10 == 0) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar5) {
                    *plVar10 = lVar9;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_0186b134;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_0186b134:
          bVar5 = false;
        }
        if ((*(byte *)(lVar12 + 0x430) >> 2 & 1) == 0) {
          FUN_00d37964(plVar14,0,0);
        }
        else {
          (**(code **)(*plVar15 + 0xf8))(plVar15);
        }
        if (!bVar5) {
          *plVar10 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
        }
        puVar7 = local_60;
        if (local_60 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_60 + 3);
          do {
            sVar13 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar13 == 1) {
            piVar2 = (int *)((long)local_60 + 0x1c);
            do {
              iVar8 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar9 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar9;
              local_48 = (long *)*puVar7;
              FUN_00c44438(lVar9 + 0x8040,&local_48);
            }
          }
          else if (sVar13 == 0) goto LAB_0186b4c8;
        }
        puVar7 = local_70;
        if (local_70 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_70 + 3);
          do {
            sVar13 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar13 == 1) {
            piVar2 = (int *)((long)local_70 + 0x1c);
            do {
              iVar8 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar9 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar9;
              local_48 = (long *)*puVar7;
              FUN_00c44438(lVar9 + 0x8040,&local_48);
            }
          }
          else if (sVar13 == 0) {
LAB_0186b4c8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        lVar12 = *(long *)(lVar12 + 8);
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar13 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))(plVar14);
          return;
        }
        if (sVar13 != 0) {
          return;
        }
LAB_0186b1d4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      sVar13 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


