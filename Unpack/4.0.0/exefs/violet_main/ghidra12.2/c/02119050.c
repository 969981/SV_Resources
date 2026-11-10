/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02119050; name: FUN_02119050
 */


undefined4 * FUN_02119050(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (param_1 != param_2) {
    do {
      *param_3 = *param_1;
      plVar5 = *(long **)(param_3 + 2);
      *(undefined8 *)(param_3 + 2) = 0;
      if (plVar5 != (long *)0x0) {
        lVar7 = plVar5[6];
        psVar1 = (short *)(lVar7 + 0x1a);
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
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar5 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      uVar6 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = 0;
      param_1 = param_1 + 4;
      *(undefined8 *)(param_3 + 2) = uVar6;
      param_3 = param_3 + 4;
    } while (param_1 != param_2);
  }
  return param_3;
}


