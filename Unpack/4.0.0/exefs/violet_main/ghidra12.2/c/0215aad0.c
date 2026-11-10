/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215aad0; name: FUN_0215aad0
 */


void FUN_0215aad0(long *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long local_8;
  
  FUN_0215e6bc(&local_8,param_2);
  plVar6 = (long *)*param_1;
  *param_1 = 0;
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[6];
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *param_1 = local_8;
  *(long *)(local_8 + 0x40) = param_1[1];
  if (*param_1 != 0) {
    plVar6 = (long *)(*(code *)**(undefined8 **)(*param_1 + 0x28))();
    if (((*PTR_DAT_047dd1f8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047dd1f8), iVar5 != 0)) {
      uVar7 = FUN_02152568();
      *(undefined8 *)PTR_DAT_047dd200 = uVar7;
      __cxa_guard_release(PTR_DAT_047dd1f8);
    }
    for (; (plVar6 != (long *)0x0 && (plVar6 != (long *)PTR_DAT_047dd200)); plVar6 = (long *)*plVar6
        ) {
    }
  }
  return;
}


