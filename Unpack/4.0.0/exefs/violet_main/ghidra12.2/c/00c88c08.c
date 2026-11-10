/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c88c08; name: FUN_00c88c08
 */


void FUN_00c88c08(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *local_18;
  
  FUN_00c88d48();
  if ((*(char *)(param_1 + 200) != '\0') && (*(char *)(param_1 + 0x148) != '\0')) {
    if (((*PTR_DAT_047e0da8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047e0da8), iVar9 != 0)) {
      FUN_00100190(&LAB_02bafa7c,PTR_DAT_047e0db0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047e0da8);
    }
    lVar10 = *(long *)PTR_DAT_047e0db0;
    *(long *)PTR_DAT_047e0db8 = lVar10;
    (*DAT_04859f60)(&local_18,&DAT_04859f80);
    uVar11 = local_18[0x22];
    if (local_18 != (long *)0x0) {
      plVar2 = local_18 + 5;
      do {
        lVar8 = *plVar2;
        iVar9 = (int)lVar8 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_18 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    param_1 = param_1 + (uVar11 & 1) * 0x10;
    puVar3 = (uint *)(lVar10 + 0x28);
    do {
      uVar4 = *puVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar7) {
        *puVar3 = uVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x30) + (ulong)uVar4 * 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0xd4);
    *puVar1 = *(undefined8 *)(param_1 + 0xcc);
    puVar1[1] = uVar5;
  }
  return;
}


