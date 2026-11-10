/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d52e08; name: FUN_00d52e08
 */


void FUN_00d52e08(undefined8 *param_1,long param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  
  if ((param_3 & 0xffffffff) < (ulong)(*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 3)
     ) {
    plVar9 = *(long **)(*(long *)(param_2 + 0x120) + (param_3 & 0xffffffff) * 8);
    if (plVar9 != (long *)0x0) {
      lVar10 = plVar9[6];
      if (*(long *)(lVar10 + 0x10) == 0) {
LAB_00d52f80:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar8;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_00d52fa0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar6 = (long *)(**(code **)plVar9[5])(plVar9 + 5);
    plVar7 = (long *)FUN_00d52ff0();
    if (plVar6 != (long *)0x0) {
LAB_00d52e88:
      if (plVar6 != plVar7) goto code_r0x00d52e90;
      *param_1 = plVar9;
      lVar10 = plVar9[6];
      if (*(long *)(lVar10 + 0x10) != 0) {
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          bVar4 = false;
          *(undefined8 *)(lVar10 + 8) = uVar8;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else {
          if (sVar2 == -1) goto LAB_00d52fa0;
          bVar4 = false;
        }
        goto LAB_00d52edc;
      }
      goto LAB_00d52f80;
    }
LAB_00d52e98:
    bVar4 = true;
LAB_00d52edc:
    if (plVar9 != (long *)0x0) {
      lVar10 = plVar9[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (!bVar4) {
      return;
    }
  }
  *param_1 = 0;
  return;
code_r0x00d52e90:
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) goto LAB_00d52e98;
  goto LAB_00d52e88;
}


