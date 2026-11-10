/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c1d520; name: FUN_01c1d520
 */


uint FUN_01c1d520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  void *__src;
  undefined4 local_150;
  undefined1 local_14c [4];
  undefined1 auStack_148 [256];
  long *local_48;
  
  puVar2 = PTR_LAB_047d5c80;
  if (DAT_04812538 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  FUN_01c0b320(&local_48,param_2);
  __src = (void *)FUN_01c0b3bc(param_3);
  memcpy(auStack_148,__src,0x100);
  local_150 = param_5;
  local_14c[0] = param_4;
  uVar7 = FUN_01c1ef08(param_1,puVar2,0,&local_48,auStack_148,local_14c,&local_150);
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 5;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return uVar7 & 1;
}


