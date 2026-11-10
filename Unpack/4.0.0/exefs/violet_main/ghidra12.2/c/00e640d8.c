/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e640d8; name: FUN_00e640d8
 */


undefined8 FUN_00e640d8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  long *local_30;
  long *local_28;
  undefined1 auStack_8 [8];
  
  FUN_00c9e664(&local_30,*param_1 + 0xe8);
  lVar6 = 0;
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[9];
  }
  lVar6 = FUN_00e641c0(lVar6 + 0x108,auStack_8);
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 5;
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
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x60))();
  }
  if (lVar6 != 0) {
    fVar7 = *(float *)(lVar6 + 0x184);
    if (*(char *)(lVar6 + 0x191) != '\0') {
      fVar7 = (float)(int)*(float *)(lVar6 + 0x184);
    }
    if (fVar7 != 0.0) {
      return 1;
    }
  }
  return 0;
}


