/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd6160; name: FUN_00cd6160
 */


void FUN_00cd6160(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long local_40;
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_2 + 0x80) == 0) {
    *param_1 = 0;
  }
  else {
    if (param_5 == 0) {
      param_5 = *(long *)(param_2 + 8);
    }
    local_40 = param_2;
    lVar5 = FUN_00dfee60(auStack_38,param_5,&local_40,param_4);
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x28);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    if (**(char **)(param_3 + 8) != '\0') {
      FUN_00eac828(lVar5,param_3);
    }
    uVar6 = FUN_015f804c(*(undefined8 *)(param_2 + 0x80));
    FUN_00d10690(*(undefined8 *)(lVar5 + 200),0x20,uVar6);
    *param_1 = lVar5;
  }
  return;
}


