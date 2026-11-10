/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01837b34; name: FUN_01837b34
 */


void FUN_01837b34(long param_1,byte param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar11 != 0)) {
    plVar8 = (long *)(lVar11 + 0xe8);
    lVar10 = *plVar8;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar10) {
      lVar7 = nn::os::GetCurrentThread();
LAB_01837b80:
      if (*plVar8 == 0) goto code_r0x01837b88;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
      do {
        if (*plVar8 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
            while (*plVar8 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = lVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01837b90;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01837b90:
      bVar5 = false;
      goto LAB_01837b94;
    }
    bVar5 = true;
LAB_01837b94:
    plVar8 = (long *)FUN_01838010(*(undefined8 *)(lVar11 + 0x100),*(undefined8 *)(lVar11 + 0x108));
    if ((*(long **)(lVar11 + 0x108) == plVar8) || (*plVar8 == 0)) {
      plVar8 = (long *)FUN_01838010(*(undefined8 *)(lVar11 + 0x138),*(undefined8 *)(lVar11 + 0x140))
      ;
      if (*(long **)(lVar11 + 0x140) == plVar8) {
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
    if (!bVar5) {
      *(undefined8 *)(lVar11 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
    }
    if (lVar7 != 0) {
      puVar9 = (undefined8 *)FUN_015a8a54(lVar7);
      plVar8 = (long *)*puVar9;
      if (plVar8 != (long *)0x0) {
        *(byte *)(param_1 + 0x98) = param_2 & 1;
        if ((param_2 & 1) == 0) {
          FUN_01898404(&local_78,param_1);
          FUN_01838388(&local_78);
          FUN_018987f8(&local_78);
          (**(code **)(*plVar8 + 0x18))(&local_78,plVar8);
          local_58 = (undefined8 *)0x0;
          uStack_50 = 0;
          if ((long *)local_78[2] == plVar8 + 5) {
            FUN_01d579d8(&local_58,&local_78);
          }
          puVar9 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_78 + 3);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_78 + 0x1c);
              do {
                iVar6 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
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
                local_48 = *puVar9;
                FUN_00c44438(lVar11 + 0x8040,&local_48);
              }
            }
            else if (sVar3 == 0) goto LAB_01837cfc;
          }
          FUN_016ae5cc(param_1 + 0x58,&local_58);
          puVar9 = local_58;
          if (local_58 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_58 + 3);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_58 + 0x1c);
              do {
                iVar6 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
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
                local_78 = (undefined8 *)*puVar9;
                FUN_00c44438(lVar11 + 0x8040,&local_78);
              }
            }
            else if (sVar3 == 0) goto LAB_01837cfc;
          }
        }
        else {
          FUN_01898574(&local_58,param_1);
          local_78 = (undefined8 *)0x0;
          uStack_70 = 0;
          FUN_018383bc(&local_78,&local_58);
          FUN_01837fb8(plVar8,&local_78);
          puVar9 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_78 + 3);
            do {
              sVar3 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar3 == 1) {
              piVar2 = (int *)((long)local_78 + 0x1c);
              do {
                iVar6 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
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
                local_48 = *puVar9;
                FUN_00c44438(lVar11 + 0x8040,&local_48);
              }
            }
            else if (sVar3 == 0) {
LAB_01837cfc:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          FUN_01898464(&local_58);
          FUN_01837fc0(&local_78);
          FUN_00c96b7c(param_1 + 0x78,&local_78);
          *(undefined1 *)(param_1 + 0x90) = local_60;
          *(undefined8 *)(param_1 + 0x88) = local_68;
          FUN_01897f4c(&local_78);
        }
      }
    }
  }
  return;
code_r0x01837b88:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar5) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01837b90;
  goto LAB_01837b80;
}


