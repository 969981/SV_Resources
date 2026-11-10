/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d54a80; name: FUN_01d54a80
 */


void FUN_01d54a80(undefined8 param_1,undefined8 param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 local_48 [8];
  long local_40;
  
  uVar6 = FUN_00c5fb54(param_2,param_1);
  if ((uVar6 & 1) != 0) {
    lVar8 = *param_3;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar8 + 0x30);
      if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar9 + 0x1a);
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
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar7;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_48[0] = 1;
    local_40 = lVar8;
    FUN_01d54c20(param_1,local_48);
    FUN_01d52474(local_48);
    iVar5 = FUN_00c5d980(param_1);
    FUN_00c5dbe0(param_1,&LAB_01d54d00,0);
    FUN_00c5dcd0(param_1,iVar5 + -1,1);
    iVar5 = FUN_00c5ddd0(param_1,1,0,iVar5 + -1,0,0);
    if (iVar5 != 0) {
      uVar7 = FUN_00c646d0(param_1,0xffffffff,0);
      *(undefined8 *)PTR_DAT_047d4238 = uVar7;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("0","CallImpl",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                 ,0xa8,"Lua panic: function error: %s",uVar7);
    }
  }
  return;
}


