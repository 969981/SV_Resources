/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024bbe88; name: FUN_024bbe88
 */


void FUN_024bbe88(undefined8 *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long local_38;
  long local_30;
  undefined4 local_24;
  
  lVar5 = tpidr_el0;
  lVar6 = *(long *)(lVar5 + 0x30);
  local_24 = param_2;
  if (lVar6 == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar6 = DAT_04859430;
    *(long *)(lVar5 + 0x30) = DAT_04859430;
  }
  local_30 = FUN_024bbfe4(lVar6,&local_24);
  if (local_30 == 0) {
    lVar5 = 0;
    local_38 = 0;
  }
  else {
    piVar1 = (int *)(local_30 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == -1) {
LAB_024bbf90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    local_38 = local_30;
    if (local_30 == 0) {
      lVar5 = 0;
    }
    else {
      piVar1 = (int *)(local_30 + 0x28);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == -1) goto LAB_024bbf90;
      lVar5 = local_30;
    }
  }
  *param_1 = 0;
  FUN_024bc0b4(param_1,lVar5);
  FUN_024bb9f4(&local_38);
  FUN_024bb9f4(&local_30);
  return;
}


