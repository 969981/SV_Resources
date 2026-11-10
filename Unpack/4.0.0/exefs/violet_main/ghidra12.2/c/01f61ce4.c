/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f61ce4; name: FUN_01f61ce4
 */


void FUN_01f61ce4(long *param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [16];
  long local_40;
  byte local_34 [4];
  undefined8 local_18;
  
  local_34[0] = 1;
  if ((*(long *)(param_2 + 0xd0) == 0) || (*(short *)(*(long *)(param_2 + 0xd0) + 0x1a) == 0)) {
    local_18 = param_3;
    uVar5 = FUN_01f61e4c(param_3,&local_18,param_2 + 0x48,local_34);
    FUN_01f620b0(&local_40,uVar5);
    if (local_40 == 0) {
      *param_1 = 0;
    }
    else {
      FUN_01f60ea8(auStack_50,local_40);
      FUN_01f6216c(param_2 + (ulong)local_34[0] * 0x10 + 0xc0,auStack_50);
      FUN_01f60d98(auStack_50);
      *param_1 = local_40;
      lVar6 = *(long *)(local_40 + 0x30);
      if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar6 + 0x1a);
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
        uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
        *(undefined8 *)(lVar6 + 8) = uVar5;
        *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    FUN_01f5f8cc(&local_40);
  }
  else {
    *param_1 = 0;
  }
  return;
}


