/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e956a4; name: FUN_01e956a4
 */


void FUN_01e956a4(undefined8 *param_1,long param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  
  local_38 = param_5;
  local_30 = param_4;
  local_24[0] = param_3;
  if ((*(long **)(param_2 + 0x28) == (long *)0x0) ||
     (uVar6 = (**(code **)(**(long **)(param_2 + 0x28) + 0x68))(), (uVar6 & 1) != 0)) {
    uVar7 = *(undefined8 *)(param_2 + 8);
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    FUN_01e96570(&local_40,uVar7,local_24,PTR_DAT_047d3e30,&local_30,&local_38);
    if (local_40 != (long *)0x0) {
      FUN_01c5dc58(param_2 + 0x28);
      FUN_01e9553c(param_1,*(undefined8 *)(param_2 + 0x28));
      if (local_40 == (long *)0x0) {
        return;
      }
      lVar8 = local_40[6];
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
        (**(code **)(*local_40 + 0x50))();
        return;
      }
      if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


