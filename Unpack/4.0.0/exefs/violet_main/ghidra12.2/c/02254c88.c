/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02254c88; name: FUN_02254c88
 */


ulong FUN_02254c88(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *local_48;
  
  if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8ac0,param_1), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d8ac8;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar6;
  FUN_01286898(&local_48,uVar6,param_1,0);
  if (local_48 == (long *)0x0) {
    uVar7 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar8 = 0;
    uVar12 = 0;
  }
  else {
    uVar7 = FUN_02172994(local_48,param_2);
    uVar9 = (uVar7 & 0x1c) << 0x1e;
    iVar5 = (int)uVar7;
    uVar8 = uVar7 & 3;
    uVar10 = (ulong)(uint)(iVar5 << 0xf) & 0x1000000;
    uVar11 = (ulong)(uint)(iVar5 << 0xb) & 0x10000;
    uVar7 = (uVar7 & 0x180) << 0x21;
    uVar12 = (ulong)(uint)(iVar5 << 2) & 0x100;
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 5;
      do {
        lVar4 = *plVar1;
        iVar5 = (int)lVar4 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return uVar9 | uVar7 | uVar10 | uVar11 | uVar8 | uVar12;
}


