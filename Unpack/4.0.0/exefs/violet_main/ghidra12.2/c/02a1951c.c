/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a1951c; name: FUN_02a1951c
 */


void FUN_02a1951c(long param_1,long *param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  byte *pbVar16;
  short sVar17;
  long *plVar18;
  long *plVar19;
  int iVar20;
  uint *puVar21;
  long *plVar22;
  long *local_80;
  undefined8 *local_78;
  undefined8 local_68;
  
  lVar15 = param_2[7];
  if (lVar15 == 0) {
    return;
  }
  if (*(short *)(lVar15 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar15 + 0x1a);
  sVar17 = *(short *)(lVar15 + 0x1a);
  do {
    sVar5 = *psVar1;
    if (sVar5 == sVar17) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_02a195a0;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02a195a0:
      bVar7 = false;
    }
    puVar9 = PTR_DAT_047d3e30;
    puVar8 = PTR_DAT_047d3e28;
    if (bVar7) {
      lVar15 = *(long *)(lVar15 + 0x10);
      if (lVar15 == 0) {
        return;
      }
      puVar21 = (uint *)*param_2;
      puVar3 = (uint *)param_2[1];
      if (puVar21 == puVar3) goto LAB_02a199ac;
      plVar19 = (long *)(lVar15 + 0x18);
      break;
    }
    sVar17 = sVar5;
    if (sVar5 == 0) {
      return;
    }
  } while( true );
  while (puVar21 = puVar21 + 1, puVar21 != puVar3) {
    uVar4 = *puVar21;
    lVar13 = nn::os::GetCurrentThread();
    do {
      if (*plVar19 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x20));
          while (*plVar19 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar7) {
              *plVar19 = lVar13;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_02a19670;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = lVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_02a19670:
    if ((ulong)(*(long *)(lVar15 + 0x58) - *(long *)(lVar15 + 0x50) >> 5) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    plVar22 = *(long **)(*(long *)(lVar15 + 0x50) + (ulong)uVar4 * 0x20);
    *plVar19 = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x20));
    (**(code **)(*plVar22 + 0x70))(&local_80,plVar22);
    if (local_80 == (long *)0x0) {
LAB_02a198d4:
      puVar10 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_78 + 3);
        do {
          sVar17 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar17 == 1) {
          piVar2 = (int *)((long)local_78 + 0x1c);
          do {
            iVar11 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_68 = *puVar10;
            FUN_00c44438(lVar13 + 0x8040,&local_68);
          }
        }
        else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    else if (local_78 != (undefined8 *)0x0) {
      if ((*(short *)((long)local_78 + 0x1a) != 0) &&
         (iVar11 = (**(code **)(*local_80 + 0x20))(), iVar11 != 0)) {
        iVar20 = 0;
        pbVar16 = puVar8;
        plVar22 = (long *)puVar9;
        do {
          if (((local_80 == (long *)0x0) || (local_78 == (undefined8 *)0x0)) ||
             (*(short *)((long)local_78 + 0x1a) == 0)) {
            plVar18 = plVar22;
            if ((*pbVar16 & 1) == 0) {
              iVar12 = __cxa_guard_acquire(pbVar16);
              if (iVar12 == 0) {
                pbVar16 = puVar8;
                plVar22 = (long *)puVar9;
              }
              else {
                FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar8);
                pbVar16 = PTR_DAT_047d3e28;
                plVar22 = (long *)PTR_DAT_047d3e30;
              }
              plVar18 = plVar22;
            }
          }
          else {
            plVar22 = (long *)(**(code **)(*local_80 + 0x28))(local_80,iVar20);
            pbVar16 = puVar8;
            plVar18 = (long *)puVar9;
          }
          lVar13 = *plVar22;
          if (lVar13 < 0x48c03aea0c45a719) {
            plVar22 = plVar18;
            if (lVar13 == -0x5f67f3c9025f0547) {
              *(undefined1 *)(param_1 + 0x32) = 1;
            }
            else if (lVar13 == -0x4168c73b57371c46) {
              *(undefined1 *)(param_1 + 0x30) = 0;
            }
          }
          else if (lVar13 == 0x48c03aea0c45a719) {
            if ((*(char *)(param_1 + 0x31) != '\0') && (*(char *)(param_1 + 0x34) == '\0')) {
              lVar13 = *(long *)(param_1 + 0x168);
              if ((lVar13 != 0) &&
                 ((*(short *)(lVar13 + 0x1a) != 0 && (*(char *)(param_1 + 0x17c) != '\0')))) {
                FUN_00d9572c((long *)(param_1 + 0x168),0);
              }
              lVar13 = *(long *)(param_1 + 0x188);
              if (((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) &&
                 (*(char *)(param_1 + 0x19c) != '\0')) {
                FUN_00d9572c((long *)(param_1 + 0x188),0);
              }
            }
            *(undefined1 *)(param_1 + 0x31) = 0;
            pbVar16 = puVar8;
            plVar22 = (long *)puVar9;
          }
          else {
            pbVar16 = puVar8;
            plVar22 = (long *)puVar9;
            if ((lVar13 == 0x508acc5562f54740) && (*(char *)(param_1 + 0x35) == '\0')) {
              *(undefined1 *)(param_1 + 0x33) = 0;
            }
          }
          iVar20 = iVar20 + 1;
        } while (iVar11 != iVar20);
      }
      goto LAB_02a198d4;
    }
  }
LAB_02a199ac:
  if (((*(char *)(param_1 + 0x160) == '\0') && (*(char *)(param_1 + 0x31) != '\0')) &&
     (*(char *)(param_1 + 0x34) == '\0')) {
    plVar19 = (long *)*param_3;
    if (plVar19 == (long *)0x0) {
      if (((*(long *)(param_1 + 0x168) != 0) && (*(short *)(*(long *)(param_1 + 0x168) + 0x1a) != 0)
          ) && (*(char *)(param_1 + 0x17c) != '\0')) {
        FUN_00d9572c(param_1 + 0x168,1);
      }
      if (((*(long *)(param_1 + 0x188) != 0) && (*(short *)(*(long *)(param_1 + 0x188) + 0x1a) != 0)
          ) && (*(char *)(param_1 + 0x19c) != '\0')) {
        FUN_00d9572c(param_1 + 0x188,1);
      }
    }
    else {
      lVar13 = plVar19[6];
      if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar17 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar17 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar17 == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar14;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar17 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      if (*(char *)(plVar19[0xb] + 0x449) == '\0') {
        *(undefined1 *)(plVar19[0xb] + 0x449) = 0;
        FUN_0145633c();
      }
      else {
        if (((*(long *)(param_1 + 0x168) != 0) &&
            (*(short *)(*(long *)(param_1 + 0x168) + 0x1a) != 0)) &&
           (*(char *)(param_1 + 0x17c) != '\0')) {
          FUN_00d9572c(param_1 + 0x168,1);
        }
        if (((*(long *)(param_1 + 0x188) != 0) &&
            (*(short *)(*(long *)(param_1 + 0x188) + 0x1a) != 0)) &&
           (*(char *)(param_1 + 0x19c) != '\0')) {
          FUN_00d9572c(param_1 + 0x188,1);
        }
      }
      lVar13 = plVar19[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar17 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar17 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar17 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar19 + 0x50))(plVar19);
      }
      else if (sVar17 == 0) goto LAB_02a199e0;
    }
  }
  lVar13 = *(long *)(lVar15 + 8);
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar17 = *psVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar17 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar17 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*(long *)(lVar15 + -0x28) + 0x50))();
  }
  else if (sVar17 == 0) {
LAB_02a199e0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


