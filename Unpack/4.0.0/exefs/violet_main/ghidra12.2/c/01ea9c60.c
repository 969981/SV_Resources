/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea9c60; name: FUN_01ea9c60
 */


undefined2 * FUN_01ea9c60(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (param_1 != param_2) {
    do {
      *param_3 = *param_1;
      FUN_00ca1ea4(param_3 + 4,param_1 + 4);
      *(undefined1 *)(param_3 + 0xc) = *(undefined1 *)(param_1 + 0xc);
      FUN_00dbd160(param_3 + 0x10,param_1 + 0x10);
      plVar6 = *(long **)(param_3 + 0x18);
      *(undefined8 *)(param_3 + 0x18) = 0;
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        psVar2 = (short *)(lVar8 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_3 + 0x18) = uVar7;
      puVar1 = param_1 + 0x1c;
      param_1 = param_1 + 0x20;
      *(undefined1 *)(param_3 + 0x1c) = *(undefined1 *)puVar1;
      param_3 = param_3 + 0x20;
    } while (param_1 != param_2);
  }
  return param_3;
}


