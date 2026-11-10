/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0105d0a8; name: FUN_0105d0a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0105d0a8(long *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  int local_34;
  undefined8 local_30;
  long *local_28;
  
  FUN_0298ff6c(&local_28,*(undefined8 *)(param_2 + 0x68));
  if (local_28 == (long *)0x0) {
    uVar6 = *(undefined8 *)(_DAT_00000040 + 0x10);
    *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(_DAT_00000040 + 8);
    *(undefined8 *)(param_2 + 0x100) = uVar6;
    local_30 = _DAT_00000040 + 0x20;
    local_34 = _DAT_00000048 + -0x20;
    FUN_0105bb4c(param_1,*(undefined8 *)(param_2 + 8),param_2 + 0xf0,&local_30,&local_34);
  }
  else {
    *(undefined8 *)(param_2 + 0xf8) = 0;
    local_30 = (ulong)local_30._4_4_ << 0x20;
    lVar5 = FUN_0105b7c4(*(undefined8 *)(param_2 + 8),param_2 + 0xf0,&local_30);
    *param_1 = lVar5;
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x30);
      if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
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
        uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
        *(undefined8 *)(lVar5 + 8) = uVar6;
        *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
  }
  if (local_28 != (long *)0x0) {
    lVar5 = local_28[6];
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
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


