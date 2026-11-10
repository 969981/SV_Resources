/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbf208; name: FUN_01dbf208
 */


void FUN_01dbf208(long *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar5 = *param_3;
  *(undefined4 *)(param_2 + 0xcc) = 0;
  *(undefined2 *)(param_2 + 0xd0) = 0;
  lVar6 = *(long *)(param_2 + 0x118);
  *(undefined4 *)(param_2 + 0xd4) = 0;
  *(undefined4 *)(param_2 + 0xdc) = 0;
  FUN_0109c76c(param_2,uVar5);
  if (*(char *)(lVar6 + 0x54) != '\0') {
    **(undefined2 **)(lVar6 + 0x30) = 0;
    *(undefined2 *)(lVar6 + 0x52) = 0;
  }
  FUN_0109c334(param_2,lVar6,uVar5,0,0);
  lVar6 = *(long *)(param_2 + 0x118);
  *param_1 = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
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
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  return;
}


