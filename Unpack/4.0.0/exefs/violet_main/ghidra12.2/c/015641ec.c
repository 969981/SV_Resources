/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015641ec; name: FUN_015641ec
 */


void FUN_015641ec(long *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  
  lVar7 = *(long *)(param_2 + 0x40);
  lVar3 = *(long *)(param_2 + 0x48);
  lVar8 = *(long *)(lVar3 + 0x40);
  lVar9 = *(long *)(lVar3 + 0x48);
  iVar12 = (int)((ulong)(lVar9 - lVar8) >> 3);
  if (iVar12 != 0 && (*(ulong *)(*(long *)(*(long *)(lVar7 + 8) + 0x38) + 0x498) & 0x400) != 0) {
    iVar10 = 0;
    while( true ) {
      if ((ulong)(long)iVar10 < (ulong)(lVar9 - lVar8 >> 3)) {
        lVar7 = *(long *)(lVar8 + (long)iVar10 * 8);
        *param_1 = lVar7;
        if (lVar7 == 0) {
          plVar11 = (long *)0x0;
        }
        else {
          lVar7 = *(long *)(lVar7 + 0x30);
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_01564550;
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 0) {
            uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
            *(undefined8 *)(lVar7 + 8) = uVar6;
            *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) goto LAB_015642b8;
          plVar11 = (long *)*param_1;
        }
      }
      else {
        plVar11 = (long *)0x0;
        *param_1 = 0;
      }
      lVar7 = FUN_01564570(plVar11);
      if (*(long *)(lVar7 + 8) == 0x5c307d44ea569b63) {
        return;
      }
      if (plVar11 != (long *)0x0) {
        lVar7 = plVar11[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar2 == 0) goto LAB_01564378;
      }
      iVar10 = iVar10 + 1;
      if (iVar10 == iVar12) break;
      lVar8 = *(long *)(lVar3 + 0x40);
      lVar9 = *(long *)(lVar3 + 0x48);
    }
    lVar7 = *(long *)(param_2 + 0x40);
  }
  if (iVar12 != 0 && *(char *)(*(long *)(*(long *)(lVar7 + 0x10) + 0x1f0) + 8) == '\0') {
    iVar10 = 0;
    do {
      if ((ulong)(long)iVar10 < (ulong)(*(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40) >> 3)) {
        lVar7 = *(long *)(*(long *)(lVar3 + 0x40) + (long)iVar10 * 8);
        *param_1 = lVar7;
        if (lVar7 == 0) {
          plVar11 = (long *)0x0;
        }
        else {
          lVar7 = *(long *)(lVar7 + 0x30);
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_01564550;
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 0) {
            uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
            *(undefined8 *)(lVar7 + 8) = uVar6;
            *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) goto LAB_015642b8;
          plVar11 = (long *)*param_1;
        }
      }
      else {
        plVar11 = (long *)0x0;
        *param_1 = 0;
      }
      lVar7 = FUN_01564570(plVar11);
      if (*(long *)(lVar7 + 8) == 0x2e9e7a3009002c36) {
        return;
      }
      if (plVar11 != (long *)0x0) {
        lVar7 = plVar11[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar2 == 0) {
LAB_01564378:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar12);
  }
  if (*(long **)(lVar3 + 0x48) == *(long **)(lVar3 + 0x40)) {
    *param_1 = 0;
  }
  else {
    lVar7 = **(long **)(lVar3 + 0x40);
    *param_1 = lVar7;
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x30);
      if (*(long *)(lVar7 + 0x10) == 0) {
LAB_01564550:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_015642b8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
  }
  return;
}


