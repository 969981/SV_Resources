/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0235da30; name: FUN_0235da30
 */


undefined8 FUN_0235da30(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  char local_48 [8];
  long *local_40 [2];
  
  uVar6 = FUN_00c5fb54(param_2,param_1);
  if ((uVar6 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    plVar7 = (long *)*param_3;
    if (plVar7 != (long *)0x0) {
      lVar9 = plVar7[6];
      if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
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
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar8;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_48[0] = '\x01';
    local_40[0] = plVar7;
    FUN_01111be0(param_1,local_48);
    if (local_48[0] == '\x01') {
      if (local_40[0] != (long *)0x0) {
        lVar9 = local_40[0][6];
        psVar1 = (short *)(lVar9 + 0x1a);
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
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_40[0] + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    else if ((local_48[0] == '\x02') || (local_48[0] == '\x03')) {
      FUN_019da858(local_40);
    }
    iVar5 = FUN_00c5d980(param_1);
    FUN_00c5dbe0(param_1,&LAB_02356ca0,0);
    uVar8 = 1;
    FUN_00c5dcd0(param_1,iVar5 + -1,1);
    iVar5 = FUN_00c5ddd0(param_1,1,1,iVar5 + -1,0,0);
    if (iVar5 != 0) {
      uVar8 = FUN_00c646d0(param_1,0xffffffff,0);
      *(undefined8 *)PTR_DAT_047d4238 = uVar8;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("0","CallImpl",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/invoker.h"
                 ,0xa8,"Lua panic: function error: %s",uVar8);
    }
  }
  return uVar8;
}


