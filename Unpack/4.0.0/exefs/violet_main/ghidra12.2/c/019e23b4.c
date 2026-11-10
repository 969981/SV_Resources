/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e23b4; name: FUN_019e23b4
 */


void FUN_019e23b4(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long local_48;
  long *local_40;
  undefined8 local_38 [3];
  
  if (((DAT_0483a128 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0483a128), iVar5 != 0)) {
    FUN_00100190(&LAB_00b52dc4,&DAT_0483a118,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483a128);
  }
  lVar9 = DAT_0483a118;
  DAT_0483a110 = DAT_0483a118;
  if (DAT_0483a118 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  plVar10 = *(long **)(DAT_0483a118 + 0x40);
  if (plVar10 != (long *)0x0) {
    plVar6 = (long *)(**(code **)plVar10[5])(plVar10 + 5);
    lVar7 = FUN_01822a48();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar7) {
        uVar8 = (**(code **)(*plVar10 + 0x68))(plVar10);
        if ((uVar8 & 1) == 0) {
          FUN_019812f8(param_1,*(undefined8 *)(lVar9 + 0x40));
          return;
        }
        break;
      }
    }
  }
  lVar7 = FUN_01981264(lVar9);
  if (((lVar7 == 0) || (*(long **)(lVar7 + 0x48) == (long *)0x0)) ||
     ((**(code **)(**(long **)(lVar7 + 0x48) + 0x90))(&local_40), local_40 == (long *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_019e25bc(&local_48,*(undefined8 *)(lVar9 + 8),&local_40);
    local_38[0] = *(undefined8 *)(lVar9 + 0x40);
    *(undefined8 *)(lVar9 + 0x40) = 0;
    FUN_018b3450(local_38);
    *(long *)(lVar9 + 0x40) = local_48;
    if (local_48 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_019812f8(param_1);
    }
    if (local_40 != (long *)0x0) {
      lVar9 = local_40[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_40 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


