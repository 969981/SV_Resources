/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e95abc; name: FUN_00e95abc
 */


void FUN_00e95abc(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((*(long *)(param_2 + 0x630) == 0) || (*(short *)(*(long *)(param_2 + 0x630) + 0x1a) == 0)) {
    FUN_00c9e664(&local_68,param_2 + 0xe8);
    if (local_68 != (long *)0x0) {
      if (local_60 == (long *)0x0) {
        lVar11 = 0;
      }
      else {
        lVar11 = local_60[9];
      }
      plVar8 = (long *)(lVar11 + 0x110);
      lVar10 = *plVar8;
      lVar7 = nn::os::GetCurrentThread();
      if (lVar7 != lVar10) {
        lVar7 = nn::os::GetCurrentThread();
LAB_00e95b58:
        if (*plVar8 == 0) goto code_r0x00e95b60;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
        do {
          if (*plVar8 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
              while (*plVar8 == 0) {
                cVar4 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar9) {
                  *plVar8 = lVar7;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_00e95b68;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar9) {
            *plVar8 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_00e95b68:
        bVar9 = false;
        goto LAB_00e95b6c;
      }
      bVar9 = true;
LAB_00e95b6c:
      plVar8 = (long *)FUN_00e96230(*(undefined8 *)(lVar11 + 0x128),*(undefined8 *)(lVar11 + 0x130))
      ;
      if ((*(long **)(lVar11 + 0x130) == plVar8) || (*plVar8 == 0)) {
        plVar8 = (long *)FUN_00e96230(*(undefined8 *)(lVar11 + 0x160),
                                      *(undefined8 *)(lVar11 + 0x168));
        if (*(long **)(lVar11 + 0x168) == plVar8) {
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          if (*plVar8 != 0) {
            lVar7 = *plVar8 + -0x20;
          }
        }
      }
      else {
        lVar7 = *plVar8 + -0x20;
      }
      if (!bVar9) {
        *(undefined8 *)(lVar11 + 0x110) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x118));
      }
      if (lVar7 != 0) {
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        FUN_00c43ef0(&local_58,lVar7 + 0x98);
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        if (local_58[2] == lVar7 + 0x28) {
          FUN_00c92210(&local_78,&local_58);
        }
        puVar5 = local_58;
        if (local_58 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_58 + 3);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_58 + 0x1c);
            do {
              iVar6 = *piVar2;
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar9) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_48 = *puVar5;
              FUN_00c44438(lVar11 + 0x8040,&local_48);
            }
          }
          else if (sVar3 == 0) goto LAB_00e95ce8;
        }
        FUN_00c93a38(param_2 + 0x630,&local_78);
        puVar5 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78 + 3);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar9) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_78 + 0x1c);
            do {
              iVar6 = *piVar2;
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar9) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_58 = (undefined8 *)*puVar5;
              FUN_00c44438(lVar11 + 0x8040,&local_58);
            }
          }
          else if (sVar3 == 0) {
LAB_00e95ce8:
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
      plVar8 = local_60 + 5;
      do {
        lVar11 = *plVar8;
        iVar6 = (int)lVar11 + -1;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar9) {
          *(int *)plVar8 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
      else if ((int)lVar11 == 0) {
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
  FUN_00c93e08(param_1,param_2 + 0x630);
  return;
code_r0x00e95b60:
  cVar4 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar9) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00e95b68;
  goto LAB_00e95b58;
}


