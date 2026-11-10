/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b0558; name: FUN_021b0558
 */


void FUN_021b0558(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)*param_2;
  *param_1 = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  plVar5 = (long *)param_2[1];
  param_1[1] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  plVar5 = (long *)param_2[2];
  param_1[2] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  plVar5 = (long *)param_2[8];
  param_1[8] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  plVar5 = (long *)param_2[0xc];
  param_1[0xc] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  memcpy(param_1 + 0xe,param_2 + 0xe,0x30);
  FUN_021b0724(param_1 + 0x14,param_2 + 0x14);
  FUN_021b0b1c(param_1 + 0x21,param_2 + 0x21);
  FUN_021b0f4c(param_1 + 0x2e,param_2 + 0x2e);
  *(short *)(param_1 + 0x3b) = (short)param_2[0x3b];
  plVar5 = (long *)param_2[0x3c];
  param_1[0x3c] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  plVar5 = (long *)param_2[0x3d];
  param_1[0x3d] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  param_1[0x3e] = (long)&PTR_FUN_045a20f8;
  FUN_0270e92c(param_1 + 0x3f,param_2 + 0x3f);
  lVar6 = param_2[0x47];
  param_1[0x47] = lVar6;
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
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_1[0x48] = param_2[0x48];
  plVar5 = (long *)param_2[0x49];
  param_1[0x49] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  FUN_0270eabc(param_1 + 0x4a,param_2 + 0x4a);
  return;
}


