/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02078860; name: FUN_02078860
 */


void FUN_02078860(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  
  lVar5 = FUN_02078a30(param_2,*param_4);
  if ((((*(long *)(lVar5 + 0xd8) != 0) && (*(short *)(*(long *)(lVar5 + 0xd8) + 0x1a) != 0)) ||
      (uVar9 = FUN_01473a8c(lVar5 + 0xc0), (uVar9 & 1) != 0)) && (*(long *)(lVar5 + 0xd0) != 0)) {
    lVar5 = FUN_02078a30(param_2,*param_4);
    if ((((*(long *)(lVar5 + 0x88) != 0) && (*(short *)(*(long *)(lVar5 + 0x88) + 0x1a) != 0)) ||
        (uVar9 = FUN_013f7d04(lVar5 + 0x70), (uVar9 & 1) != 0)) && (*(long *)(lVar5 + 0x80) != 0)) {
      puVar6 = (undefined8 *)FUN_01e149b8();
      plVar10 = (long *)*puVar6;
      if (plVar10 != (long *)0x0) {
        lVar5 = plVar10[6];
        if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar5 + 0x1a);
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
          uVar8 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
          *(undefined8 *)(lVar5 + 8) = uVar8;
          *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        puVar7 = (undefined1 *)FUN_015c0588();
        *param_1 = *puVar7;
        lVar5 = plVar10[6];
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x020789bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar10 + 0x50))(plVar10);
          return;
        }
        if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
    }
  }
  puVar7 = (undefined1 *)FUN_00f6866c();
  *param_1 = *puVar7;
  return;
}


