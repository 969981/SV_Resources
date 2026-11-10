/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0155cd98; name: FUN_0155cd98
 */


void FUN_0155cd98(long param_1,byte param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *local_30;
  long *local_28;
  
  if (*(byte *)(param_1 + 0x168) == (param_2 & 1)) {
    return;
  }
  *(byte *)(param_1 + 0x168) = param_2 & 1;
  FUN_00c9e664(&local_30,param_1 + 0xe8);
  if (local_28 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)local_28[9];
  }
  if (*(char *)(param_1 + 0x168) == '\0') {
    lVar5 = *(long *)(param_1 + 0x1e0);
    plVar4[0x1b] = *(long *)(param_1 + 0x1e8);
    plVar4[0x1a] = lVar5;
    if (*(char *)((long)plVar4 + 0xf4) == '\0') {
      *(undefined1 *)((long)plVar4 + 0xf4) = 1;
      (**(code **)(*plVar4 + 0x78))(plVar4);
    }
    plVar4 = (long *)local_28[9];
    lVar5 = *(long *)(param_1 + 0x1f0);
    plVar4[0x1d] = *(long *)(param_1 + 0x1f8);
    plVar4[0x1c] = lVar5;
    if (*(char *)((long)plVar4 + 0xf4) == '\0') {
      *(undefined1 *)((long)plVar4 + 0xf4) = 1;
      (**(code **)(*plVar4 + 0x78))(plVar4);
    }
    if (local_28 == (long *)0x0) goto LAB_0155ce10;
  }
  else {
    lVar5 = plVar4[0x1a];
    *(long *)(param_1 + 0x1e8) = plVar4[0x1b];
    *(long *)(param_1 + 0x1e0) = lVar5;
    uVar6 = *(undefined8 *)(local_28[9] + 0xe0);
    *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(local_28[9] + 0xe8);
    *(undefined8 *)(param_1 + 0x1f0) = uVar6;
  }
  plVar4 = local_28 + 5;
  do {
    lVar5 = *plVar4;
    iVar3 = (int)lVar5 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *(int *)plVar4 = iVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar3 == 0) {
    (**(code **)(*local_28 + 0x10))();
  }
  else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
LAB_0155ce10:
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x60))();
  }
  return;
}


