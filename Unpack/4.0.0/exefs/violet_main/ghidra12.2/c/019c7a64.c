/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019c7a64; name: FUN_019c7a64
 */


/* WARNING: Removing unreachable block (ram,0x019c7b10) */
/* WARNING: Removing unreachable block (ram,0x019c7b18) */
/* WARNING: Removing unreachable block (ram,0x019c7b20) */
/* WARNING: Removing unreachable block (ram,0x019c7b28) */
/* WARNING: Removing unreachable block (ram,0x019c7b70) */
/* WARNING: Removing unreachable block (ram,0x019c7b30) */

void FUN_019c7a64(long param_1,undefined4 param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long local_30;
  undefined4 local_24;
  
  local_30 = CONCAT44(local_30._4_4_,param_2);
  local_24 = param_2;
  lVar5 = FUN_019c7b84(param_1 + 0x30,&local_30);
  if (lVar5 == 0) {
    (**(code **)(*param_3 + 0x198))(&local_30,param_3);
    plVar6 = (long *)FUN_019c7c8c(param_1 + 0x30,&local_24);
    plVar7 = (long *)*plVar6;
    *plVar6 = 0;
    if (plVar7 != (long *)0x0) {
      lVar5 = plVar7[6];
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
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *plVar6 = local_30;
  }
  return;
}


