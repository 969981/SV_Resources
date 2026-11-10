/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dab75c; name: FUN_01dab75c
 */


void FUN_01dab75c(undefined1 *param_1,undefined1 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_58 [2];
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  uVar7 = FUN_01dac55c();
  if ((uVar7 & 1) != 0) {
switchD_01dab7bc_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  switch(*param_2) {
  case 0:
    lVar10 = *(long *)(param_2 + 8);
    puVar8 = (undefined8 *)(*(code *)**(undefined8 **)(lVar10 + 0x28))();
    if (((*PTR_DAT_047d8638 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8638), iVar6 != 0)) {
      uVar9 = FUN_01dac5b0();
      *(undefined8 *)PTR_DAT_047d8640 = uVar9;
      __cxa_guard_release(PTR_DAT_047d8638);
    }
    if (puVar8 == (undefined8 *)0x0) {
      lVar11 = 0;
    }
    else {
      do {
        if (puVar8 == (undefined8 *)PTR_DAT_047d8640) {
          lVar11 = lVar10;
          break;
        }
        puVar8 = (undefined8 *)*puVar8;
        lVar11 = 0;
      } while (puVar8 != (undefined8 *)0x0);
    }
    *param_1 = 0;
    *(long *)(param_1 + 8) = lVar11;
    return;
  case 1:
    lVar10 = *(long *)(param_2 + 8);
    puVar8 = (undefined8 *)
             (*(code *)**(undefined8 **)(lVar10 + 0x28))((undefined8 *)(lVar10 + 0x28));
    if (((*PTR_DAT_047d8638 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8638), iVar6 != 0)) {
      uVar9 = FUN_01dac5b0();
      *(undefined8 *)PTR_DAT_047d8640 = uVar9;
      __cxa_guard_release(PTR_DAT_047d8638);
    }
    if (puVar8 == (undefined8 *)0x0) {
      lVar11 = 0;
    }
    else {
      do {
        if (puVar8 == (undefined8 *)PTR_DAT_047d8640) {
          lVar12 = *(long *)(lVar10 + 0x30);
          if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          lVar11 = lVar10;
          if (sVar3 == 0) {
            uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
            *(undefined8 *)(lVar12 + 8) = uVar9;
            *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
          }
          else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          break;
        }
        puVar8 = (undefined8 *)*puVar8;
        lVar11 = 0;
      } while (puVar8 != (undefined8 *)0x0);
    }
    *param_1 = 1;
    *(long *)(param_1 + 8) = lVar11;
    return;
  case 2:
    FUN_01dac6c4(local_48,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_014fbf1c(param_1 + 8,local_48);
    if (local_48[0] == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_48[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 != 1) {
LAB_01dab8bc:
      if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      return;
    }
    piVar2 = (int *)((long)local_48[0] + 0x1c);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      puVar8 = local_48[0];
    } while (cVar4 != '\0');
    break;
  case 3:
    FUN_01dac6c4(local_58,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_014fbf1c(param_1 + 8,local_58);
    if (local_58[0] == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_58[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 != 1) goto LAB_01dab8bc;
    piVar2 = (int *)((long)local_58[0] + 0x1c);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      puVar8 = local_58[0];
    } while (cVar4 != '\0');
    break;
  default:
    goto switchD_01dab7bc_default;
  }
  if (iVar6 != -1) {
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar10 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar10;
    local_38 = *puVar8;
    FUN_00c44438(lVar10 + 0x8040,&local_38);
  }
  return;
}


