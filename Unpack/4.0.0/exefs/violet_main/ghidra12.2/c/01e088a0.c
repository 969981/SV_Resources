/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e088a0; name: FUN_01e088a0
 */


float FUN_01e088a0(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  short sVar10;
  undefined1 auStack_a0 [4];
  float local_9c;
  float local_4c;
  
  plVar8 = (long *)FUN_01e0c5fc();
  lVar9 = *plVar8;
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e08920;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e08920:
        bVar4 = false;
      }
      if (bVar4) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return 0.0;
        }
        plVar8 = (long *)(lVar9 + -0x28);
        uVar5 = FUN_016c8438(0,param_1);
        uVar6 = FUN_01e0c66c(param_1);
        uVar7 = FUN_01e0c698(param_1);
        FUN_01acb394(auStack_a0,plVar8,uVar5,uVar6,uVar7);
        FUN_01acb394(auStack_a0,plVar8,uVar5,uVar6,uVar7);
        local_9c = local_4c + local_4c + local_9c;
        lVar9 = *(long *)(lVar9 + 8);
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
          return local_9c;
        }
        if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.",local_9c);
        }
        return local_9c;
      }
      sVar10 = sVar2;
    } while (sVar2 != 0);
  }
  return 0.0;
}


