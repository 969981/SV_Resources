/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019c9ac0; name: FUN_019c9ac0
 */


void FUN_019c9ac0(long param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  char *__s;
  long *local_138;
  undefined1 auStack_130 [256];
  
  __s = *(char **)(param_3 + 8);
  sVar6 = strlen(__s);
  FUN_019c9ba0(auStack_130,0x80,__s,sVar6);
  FUN_019c9bec(&local_138,*(undefined8 *)(param_1 + 8),auStack_130);
  FUN_019c9d88(param_1,param_2,local_138,0,0);
  plVar1 = local_138 + 5;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*local_138 + 0x10))(local_138);
  }
  else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


