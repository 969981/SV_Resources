/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017fe55c; name: FUN_017fe55c
 */


void FUN_017fe55c(long param_1,ushort param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined2 *puVar6;
  long *plVar7;
  ushort local_3c [2];
  ushort local_38;
  undefined3 uStack_36;
  undefined3 uStack_33;
  undefined5 uStack_30;
  undefined3 local_2b;
  undefined5 uStack_28;
  
  param_1 = param_1 + 0x70;
  param_2 = param_2 & 0xff;
  local_38 = param_2;
  lVar5 = FUN_017fe640(param_1,&local_38);
  if (lVar5 == 0) {
    local_2b = 0;
    uStack_28 = 0;
    uStack_33 = 0;
    uStack_30 = 0;
    local_3c[0] = param_2;
    puVar6 = (undefined2 *)FUN_017fe74c(param_1,local_3c);
    *puVar6 = 0;
    *(undefined1 *)(puVar6 + 1) = 0;
    *(ulong *)(puVar6 + 8) = CONCAT53(uStack_28,local_2b);
    *(ulong *)((long)puVar6 + 0xb) = CONCAT35(local_2b,uStack_30);
    *(ulong *)((long)puVar6 + 3) = CONCAT35(uStack_33,CONCAT32(uStack_36,local_38));
    plVar7 = *(long **)(puVar6 + 0xc);
    *(undefined8 *)(puVar6 + 0xc) = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
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
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  local_38 = param_2;
  FUN_017fe74c(param_1,&local_38);
  return;
}


