/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea90d0; name: FUN_01ea90d0
 */


void FUN_01ea90d0(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  size_t sVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long *__src;
  long lVar15;
  long *plVar16;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  long *local_60 [2];
  long local_38;
  
  if (*param_2 != 0) {
    pcVar12 = *(char **)(param_1 + 0xd0);
    pcVar14 = *(char **)(param_1 + 0xd8);
    local_60[0] = param_2;
    if ((pcVar12 != pcVar14) && (uVar9 = FUN_01ea9598(local_60,pcVar12), (uVar9 & 1) == 0)) {
      do {
        pcVar13 = pcVar12 + 0x20;
        pcVar12 = pcVar14;
        if (pcVar14 == pcVar13) break;
        uVar9 = FUN_01ea9598(local_60,pcVar13);
        pcVar12 = pcVar13;
      } while ((uVar9 & 1) == 0);
    }
    if (*(char **)(param_1 + 0xd8) == pcVar12) {
      return;
    }
    if (*pcVar12 != '\0') {
      pcVar14 = pcVar12 + 2;
      FUN_01ea96bc(param_1,pcVar14);
      local_68 = (long *)*param_2;
      if (local_68 == (long *)0x0) {
        FUN_01ea9750(param_1,&local_68,pcVar14);
      }
      else {
        lVar15 = local_68[6];
        if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          *(undefined8 *)(lVar15 + 8) = uVar10;
          *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        plVar11 = local_68;
        FUN_01ea9750(param_1,&local_68,pcVar14);
        if (plVar11 != (long *)0x0) {
          lVar15 = plVar11[6];
          psVar1 = (short *)(lVar15 + 0x1a);
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
            *(undefined8 *)(lVar15 + 0x10) = 0;
            (**(code **)(*plVar11 + 0x50))(plVar11);
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      if (*(long *)(param_1 + 0x58) != 0) {
        plVar11 = *(long **)(param_1 + 0xa0);
        plVar16 = *(long **)(param_1 + 0x98);
        if (*(long **)(param_1 + 0x98) != plVar11) {
          do {
            __src = plVar16 + 2;
            lVar15 = *plVar16;
            while (lVar15 == 0) {
              sVar6 = (long)plVar11 - (long)__src;
              if (sVar6 == 0) {
                *(long **)(param_1 + 0xa0) = plVar16;
                goto LAB_01ea91d8;
              }
              memmove(plVar16,__src,sVar6);
              plVar11 = (long *)((long)plVar16 + sVar6);
              *(long **)(param_1 + 0xa0) = plVar11;
              lVar15 = *plVar16;
            }
            uVar9 = FUN_0111b1ec(*(undefined8 *)(param_1 + 0x58));
            if ((uVar9 & 1) != 0) {
              local_60[0] = (long *)CONCAT62(local_60[0]._2_6_,(short)plVar16[1]);
              uVar9 = (**(code **)(**(long **)(param_1 + 0x58) + 0x68))
                                (*(long **)(param_1 + 0x58),local_60,2,plVar16);
              if ((uVar9 & 1) != 0) {
                sVar6 = *(long *)(param_1 + 0xa0) - (long)__src;
                if (sVar6 != 0) {
                  memmove(plVar16,__src,sVar6);
                }
                *(size_t *)(param_1 + 0xa0) = (long)plVar16 + sVar6;
                __src = plVar16;
              }
            }
            plVar11 = *(long **)(param_1 + 0xa0);
            plVar16 = __src;
          } while (__src != plVar11);
        }
      }
LAB_01ea91d8:
      param_2 = (long *)*param_2;
      (**(code **)(*param_2 + 0x18))(local_60,param_2);
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      plVar11 = (long *)0x0;
      if (param_2 != (long *)0x0) {
        plVar11 = param_2 + 5;
      }
      if ((long *)local_60[0][2] == plVar11) {
        FUN_00cbc6dc(&local_78,local_60);
      }
      plVar11 = local_60[0];
      if (local_60[0] != (long *)0x0) {
        plVar16 = local_60[0] + 3;
        do {
          sVar3 = (short)*plVar16;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *(short *)plVar16 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_60[0] + 0x1c);
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
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_38 = *plVar11;
            FUN_00c44438(lVar15 + 0x8040,&local_38);
          }
        }
        else if (sVar3 == 0) goto LAB_01ea92a0;
      }
      FUN_00de97a4(&local_78);
      puVar7 = local_78;
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
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_60[0] = (long *)*puVar7;
            FUN_00c44438(lVar15 + 0x8040,local_60);
          }
        }
        else if (sVar3 == 0) {
LAB_01ea92a0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    FUN_01ea9854((undefined8 *)(param_1 + 0xd0),pcVar12);
  }
  return;
}


