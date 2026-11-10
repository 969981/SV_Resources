/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a6a24c; name: FUN_00a6a24c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a6a24c(long param_1,undefined8 *param_2,undefined4 param_3,byte param_4,byte param_5,
                 byte param_6)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  short sVar12;
  long *plVar13;
  long lVar14;
  undefined8 local_98;
  undefined7 uStack_90;
  undefined4 local_89;
  undefined5 uStack_85;
  long *local_80;
  byte local_74 [4];
  undefined8 *local_70;
  undefined8 uStack_68;
  byte local_5c [4];
  byte local_58 [4];
  undefined4 local_54;
  
  local_58[0] = param_4 & 1;
  local_5c[0] = param_6 & 1;
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  local_54 = param_3;
  FUN_01084328(&local_70,param_1 + 0x130);
  local_74[0] = ~param_5 & 1;
  if (local_70 != (undefined8 *)0x0) {
    if (*(short *)((long)local_70 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_70 + 0x1a);
      sVar12 = *(short *)((long)local_70 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00a6a3e0;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a6a3e0:
          bVar5 = false;
        }
        if (bVar5) {
          lVar8 = local_70[2];
          if (lVar8 != 0) {
            local_98 = DAT_03d3012c;
            uStack_90 = (undefined7)DAT_03d30134;
            local_89 = ram0x03d3013b;
            if (*(long *)(lVar8 + 0x110) != 0) {
              plVar13 = (long *)(lVar8 + 0x120);
              lVar14 = *plVar13;
              lVar9 = nn::os::GetCurrentThread();
              if (lVar9 == lVar14) {
                FUN_00a6c28c(*(undefined8 *)(lVar8 + 0x110),&local_98,&local_54,local_58,local_74,
                             local_5c);
              }
              else {
                lVar9 = nn::os::GetCurrentThread();
                do {
                  if (*plVar13 != 0) {
                    ClearExclusiveLocal();
                    do {
                      nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x128));
                      while (*plVar13 == 0) {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                        if (bVar5) {
                          *plVar13 = lVar9;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                        if (cVar4 == '\0') goto LAB_00a6a454;
                      }
                      ClearExclusiveLocal();
                    } while( true );
                  }
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar5) {
                    *plVar13 = lVar9;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
LAB_00a6a454:
                if (*(long *)(lVar8 + 0x110) != 0) {
                  FUN_00a6c28c(*(long *)(lVar8 + 0x110),&local_98,&local_54,local_58,local_74,
                               local_5c);
                }
                *(undefined8 *)(lVar8 + 0x120) = 0;
                nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x128));
              }
            }
            lVar9 = *(long *)(lVar8 + 0x70);
            psVar1 = (short *)(lVar9 + 0x1a);
            do {
              sVar12 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar12 == 1) {
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
            }
            else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar12 = sVar3;
      } while (sVar3 != 0);
    }
    puVar6 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar12 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_98 = *puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_98);
        }
      }
      else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  pcVar10 = *(code **)(param_1 + 0x1a28);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1a30) = 0;
    *(undefined8 *)(param_1 + 0x1a38) = 0;
    *(undefined8 *)(param_1 + 0x1a20) = 0;
    *(undefined8 *)(param_1 + 0x1a28) = 0;
    (*pcVar10)(param_1 + 0x1a40);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x1a40);
    uVar11 = param_2[3];
    *(undefined8 *)(param_1 + 0x1a28) = param_2[1];
    *(undefined8 *)(param_1 + 0x1a38) = uVar11;
    uVar11 = *param_2;
    *(undefined8 *)(param_1 + 0x1a30) = param_2[2];
    *(undefined8 *)(param_1 + 0x1a20) = uVar11;
  }
  if ((param_5 & 1) == 0) {
    plVar13 = *(long **)(param_1 + 0x30);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x58))(plVar13);
    }
    local_98 = 0x9778194a3162a086;
    uStack_90 = 0x3c70ca6;
    local_89 = 0x500;
    uStack_85 = 0;
    local_80 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      lVar8 = FUN_00e895f4(plVar13[0x2e],&local_98);
      if (lVar8 != 0) {
        FUN_00dfcea4();
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      (**(code **)(*plVar13 + 0x60))(plVar13);
    }
  }
  FUN_0129e570(*(undefined8 *)(param_1 + 0x150));
  return;
}


