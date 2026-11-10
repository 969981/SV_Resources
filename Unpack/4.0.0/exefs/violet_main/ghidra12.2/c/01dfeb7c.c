/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfeb7c; name: FUN_01dfeb7c
 */


void FUN_01dfeb7c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  undefined8 **ppuVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  long lVar13;
  undefined8 **local_78;
  undefined8 uStack_70;
  long *local_68;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((*(long *)(param_2 + 0x620) == 0) || (*(short *)(*(long *)(param_2 + 0x620) + 0x1a) == 0)) {
    FUN_00c9e664(&local_68,param_2 + 0xe8);
    if (local_68 != (long *)0x0) {
      if (local_60 == (long *)0x0) {
        lVar13 = 0;
      }
      else {
        lVar13 = local_60[9];
      }
      local_58 = &local_48;
      local_78 = &local_58;
      plVar1 = (long *)(lVar13 + 0x110);
      lVar11 = *plVar1;
      lVar10 = nn::os::GetCurrentThread();
      if (lVar10 != lVar11) {
        lVar10 = nn::os::GetCurrentThread();
LAB_01dfec28:
        if (*plVar1 == 0) goto code_r0x01dfec30;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x118));
        do {
          if (*plVar1 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x118));
              while (*plVar1 == 0) {
                cVar6 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar12) {
                  *plVar1 = lVar10;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_01dfec38;
              }
            } while( true );
          }
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_01dfec38:
        bVar12 = false;
        goto LAB_01dfec3c;
      }
      bVar12 = true;
LAB_01dfec3c:
      lVar10 = FUN_01dffbb4(&local_78,lVar13 + 0x128);
      if (lVar10 == 0) {
        lVar10 = FUN_01dffbb4(&local_78,lVar13 + 0x160);
      }
      if (!bVar12) {
        *(undefined8 *)(lVar13 + 0x110) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x118));
      }
      if (lVar10 != 0) {
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        FUN_00c43ef0(&local_58,lVar10 + 0x98);
        local_78 = (undefined8 **)0x0;
        uStack_70 = 0;
        if (local_58[2] == lVar10 + 0x28) {
          FUN_00e77114(&local_78,&local_58);
        }
        puVar8 = local_58;
        if (local_58 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_58 + 3);
          do {
            sVar5 = *psVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar12) {
              *psVar2 = sVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar5 == 1) {
            piVar4 = (int *)((long)local_58 + 0x1c);
            do {
              iVar9 = *piVar4;
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar12) {
                *piVar4 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar13 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar13;
              local_48 = *puVar8;
              FUN_00c44438(lVar13 + 0x8040,&local_48);
            }
          }
          else if (sVar5 == 0) goto LAB_01dfed88;
        }
        FUN_00e76d44(param_2 + 0x620,&local_78);
        ppuVar7 = local_78;
        if (local_78 != (undefined8 **)0x0) {
          ppuVar3 = local_78 + 3;
          do {
            sVar5 = *(short *)ppuVar3;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
            if (bVar12) {
              *(short *)ppuVar3 = sVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar5 == 1) {
            piVar4 = (int *)((long)local_78 + 0x1c);
            do {
              iVar9 = *piVar4;
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar12) {
                *piVar4 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar13 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar13;
              local_58 = *ppuVar7;
              FUN_00c44438(lVar13 + 0x8040,&local_58);
            }
          }
          else if (sVar5 == 0) {
LAB_01dfed88:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
    }
    if (local_60 != (long *)0x0) {
      plVar1 = local_60 + 5;
      do {
        lVar13 = *plVar1;
        iVar9 = (int)lVar13 + -1;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *(int *)plVar1 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
      else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x60))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00e76888(param_1,param_2 + 0x620);
  return;
code_r0x01dfec30:
  cVar6 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar12) {
    *plVar1 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01dfec38;
  goto LAB_01dfec28;
}


